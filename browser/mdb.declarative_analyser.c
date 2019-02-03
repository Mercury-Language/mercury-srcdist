/*
** Automatically generated from `declarative_analyser.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__declarative_analyser__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 28 "mdb.declarative_analyser.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "mdb.declarative_analyser.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "mdb.declarative_analyser.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "mdb.declarative_analyser.c"
#line 248 "../library/array.int"
#include "array.mh"

#line 44 "mdb.declarative_analyser.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 48 "mdb.declarative_analyser.c"
#line 73 "../mdbcomp/mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdb.declarative_analyser.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 56 "mdb.declarative_analyser.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 60 "mdb.declarative_analyser.c"
#line 35 "../library/store.int2"
#include "store.mh"

#line 64 "mdb.declarative_analyser.c"
#line 65 "mdb.declarative_analyser.c"
#include "mdb.declarative_analyser.mh"

#line 68 "mdb.declarative_analyser.c"
#line 69 "mdb.declarative_analyser.c"
#ifndef MDB__DECLARATIVE_ANALYSER_DECL_GUARD
#define MDB__DECLARATIVE_ANALYSER_DECL_GUARD

#line 73 "mdb.declarative_analyser.c"
#line 74 "mdb.declarative_analyser.c"

#endif
#line 77 "mdb.declarative_analyser.c"

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
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Word * f6;
	MR_Integer f7;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Integer f6;
	MR_Word * f7;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_response_1,
	mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_state_1,
	mercury_data_mdb__declarative_analyser__type_ctor_info_analysis_type_1,
	mercury_data_mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
	mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0,
	mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0,
	mercury_data_mdb__declarative_analyser__type_ctor_info_search_response_0,
	mercury_data_mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;
MR_decl_label3(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0, 2,3,4)
MR_decl_label1(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0, 2)
MR_decl_label1(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0, 2)
MR_decl_label1(mdb__declarative_analyser__analyser_state_init_1_0, 2)
MR_decl_label10(mdb__declarative_analyser__binary_search_11_0, 2,4,5,3,8,9,7,12,13,16)
MR_decl_label4(mdb__declarative_analyser__binary_search_11_0, 17,18,22,15)
MR_decl_label10(mdb__declarative_analyser__bug_response_6_0, 2,3,6,5,8,9,10,4,12,14)
MR_decl_label3(mdb__declarative_analyser__bug_response_6_0, 16,17,19)
MR_decl_label10(mdb__declarative_analyser__change_search_mode_6_0, 6,9,7,11,15,17,18,14,23,5)
MR_decl_label7(mdb__declarative_analyser__change_search_mode_6_0, 3,27,32,30,33,2,34)
MR_decl_label3(mdb__declarative_analyser__continue_analysis_6_0, 4,3,2)
MR_decl_label4(mdb__declarative_analyser__decide_analyser_response_5_0, 2,3,5,6)
MR_decl_label10(mdb__declarative_analyser__find_middle_weight_9_0, 7,8,10,11,12,13,4,5,3,18)
MR_decl_label10(mdb__declarative_analyser__find_middle_weight_9_0, 19,20,21,22,24,27,28,26,25,34)
MR_decl_label10(mdb__declarative_analyser__find_middle_weight_9_0, 35,40,41,43,44,45,38,33,57,58)
MR_decl_label3(mdb__declarative_analyser__find_middle_weight_9_0, 60,61,55)
MR_decl_label2(mdb__declarative_analyser__find_middle_weight_if_children_9_0, 4,2)
MR_decl_label10(mdb__declarative_analyser__find_unknown_closest_to_range_7_0, 48,3,2,6,7,4,5,11,12,9)
MR_decl_label2(mdb__declarative_analyser__find_unknown_closest_to_range_7_0, 10,1)
MR_decl_label2(mdb__declarative_analyser__follow_subterm_end_search_12_0, 2,3)
MR_decl_label10(mdb__declarative_analyser__follow_subterm_end_search_2_14_0, 163,2,8,9,5,6,4,14,17,21)
MR_decl_label10(mdb__declarative_analyser__follow_subterm_end_search_2_14_0, 22,20,25,27,28,33,34,31,26,19)
MR_decl_label10(mdb__declarative_analyser__follow_subterm_end_search_2_14_0, 41,43,44,45,46,42,53,54,52,56)
MR_decl_label8(mdb__declarative_analyser__follow_subterm_end_search_2_14_0, 57,51,49,64,65,61,62,69)
MR_decl_label10(mdb__declarative_analyser__handle_search_response_5_0, 93,7,8,9,10,4,14,12,16,17)
MR_decl_label10(mdb__declarative_analyser__handle_search_response_5_0, 18,23,24,26,27,21,19,33,34,32)
MR_decl_label4(mdb__declarative_analyser__handle_search_response_5_0, 42,15,47,48)
MR_decl_label10(mdb__declarative_analyser__process_answer_5_0, 4,3,7,8,6,11,16,19,18,21)
MR_decl_label10(mdb__declarative_analyser__process_answer_5_0, 17,15,14,10,29,30,28,33,34,32)
MR_decl_label2(mdb__declarative_analyser__process_answer_5_0, 36,37)
MR_decl_label4(mdb__declarative_analyser__reask_last_question_3_0, 3,4,5,1)
MR_decl_label1(mdb__declarative_analyser__reset_analyser_2_0, 2)
MR_decl_label7(mdb__declarative_analyser__revise_analysis_4_0, 3,4,6,7,8,10,2)
MR_decl_label10(mdb__declarative_analyser__search_for_question_8_0, 4,3,5,9,10,14,12,8,19,7)
MR_decl_label4(mdb__declarative_analyser__set_fallback_search_mode_4_0, 4,10,5,7)
MR_decl_label10(mdb__declarative_analyser__show_info_5_0, 5,6,7,11,12,10,15,16,17,18)
MR_decl_label10(mdb__declarative_analyser__show_info_5_0, 19,20,21,22,23,25,27,4,3,2)
MR_decl_label10(mdb__declarative_analyser__show_info_5_0, 33,34,36,37,38,43,44,42,46,47)
MR_decl_label10(mdb__declarative_analyser__show_info_5_0, 49,50,55,56,57,58,59,61,51,65)
MR_decl_label10(mdb__declarative_analyser__show_info_5_0, 66,68,39,78,79,80,81,82,83,84)
MR_decl_label10(mdb__declarative_analyser__start_or_resume_analysis_6_0, 6,4,3,12,13,15,16,18,19,23)
MR_decl_label4(mdb__declarative_analyser__start_or_resume_analysis_6_0, 11,26,28,29)
MR_decl_label10(mdb__declarative_analyser__top_down_search_5_0, 117,3,4,2,6,7,8,9,13,14)
MR_decl_label10(mdb__declarative_analyser__top_down_search_5_0, 12,18,19,22,24,27,28,31,21,17)
MR_decl_label10(mdb__declarative_analyser__top_down_search_5_0, 38,37,41,42,43,44,47,46,11,53)
MR_decl_label1(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0, 2)
MR_decl_label3(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0, 3,8,4)
MR_decl_label10(fn__mdb__declarative_analyser__reason_to_string_1_0, 3,4,5,6,7,8,10,11,12,13)
MR_decl_label10(fn__mdb__declarative_analyser__reason_to_string_1_0, 14,15,16,17,9,20,21,22,24,25)
MR_decl_label10(fn__mdb__declarative_analyser__reason_to_string_1_0, 26,28,27,30,32,33,34,35,36,37)
MR_decl_label10(fn__mdb__declarative_analyser__reason_to_string_1_0, 38,39,40,41,42,43,44,45,46,47)
MR_decl_label4(fn__mdb__declarative_analyser__reason_to_string_1_0, 48,49,50,19)
MR_decl_label5(fn__mdb__declarative_analyser__search_mode_to_string_1_0, 3,4,7,5,9)
MR_decl_label10(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0, 4,5,6,7,8,3,10,11,12,13)
MR_decl_label2(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0, 14,15)
MR_decl_label8(__Unify___mdb__declarative_analyser__analyser_response_1_0, 5,8,6,13,17,44,21,1)
MR_decl_label7(__Unify___mdb__declarative_analyser__analyser_state_1_0, 4,6,8,10,12,17,1)
MR_decl_label3(__Unify___mdb__declarative_analyser__analysis_type_1_0, 12,5,1)
MR_decl_label3(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0, 10,5,1)
MR_decl_label10(__Unify___mdb__declarative_analyser__reason_for_question_0_0, 5,6,7,8,9,10,11,16,18,47)
MR_decl_label2(__Unify___mdb__declarative_analyser__reason_for_question_0_0, 13,1)
MR_decl_label10(__Unify___mdb__declarative_analyser__search_mode_0_0, 5,8,10,6,32,12,15,17,19,1)
MR_decl_label7(__Unify___mdb__declarative_analyser__search_response_0_0, 5,6,9,7,32,13,1)
MR_decl_label2(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0, 6,1)
MR_decl_label10(__Compare___mdb__declarative_analyser__analyser_response_1_0, 97,7,8,9,10,5,14,17,15,23)
MR_decl_label10(__Compare___mdb__declarative_analyser__analyser_response_1_0, 24,12,28,29,30,32,185,26,36,37)
MR_decl_label10(__Compare___mdb__declarative_analyser__analyser_response_1_0, 38,34,44,45,46,47,42,51,52,53)
MR_decl_label3(__Compare___mdb__declarative_analyser__analyser_response_1_0, 54,55,57)
MR_decl_label8(__Compare___mdb__declarative_analyser__analyser_state_1_0, 3,2,5,9,13,17,21,54)
MR_decl_label4(__Compare___mdb__declarative_analyser__analysis_type_1_0, 18,7,5,9)
MR_decl_label4(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0, 18,7,5,9)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 7,8,9,10,11,12,13,5,17,18)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 19,20,21,22,23,15,27,28,29,30)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 31,32,33,25,37,38,39,40,41,42)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 43,35,47,48,49,50,51,52,53,45)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 57,58,59,60,61,286,62,63,55,67)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 68,69,70,71,72,75,79,73,65,88)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 89,90,91,92,93,94,97,101,105,110)
MR_decl_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 114,86,124,125,226,126,127,128,129,130)
MR_decl_label5(__Compare___mdb__declarative_analyser__reason_for_question_0_0, 231,131,133,137,143)
MR_decl_label10(__Compare___mdb__declarative_analyser__search_mode_0_0, 82,7,8,5,12,15,19,13,10,28)
MR_decl_label10(__Compare___mdb__declarative_analyser__search_mode_0_0, 29,26,73,33,34,75,35,37,41,45)
MR_decl_label2(__Compare___mdb__declarative_analyser__search_mode_0_0, 49,57)
MR_decl_label10(__Compare___mdb__declarative_analyser__search_response_0_0, 7,8,9,5,13,89,14,15,11,19)
MR_decl_label10(__Compare___mdb__declarative_analyser__search_response_0_0, 20,23,27,21,17,36,37,38,41,34)
MR_decl_label7(__Compare___mdb__declarative_analyser__search_response_0_0, 47,48,79,49,80,50,52)
MR_decl_label4(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0, 3,2,5,21)
MR_decl_static(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0)
MR_def_extern_entry(fn__mdb__declarative_analyser__reason_to_string_1_0)
MR_def_extern_entry(fn__mdb__declarative_analyser__divide_and_query_search_mode_0_0)
MR_def_extern_entry(fn__mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_0)
MR_def_extern_entry(fn__mdb__declarative_analyser__top_down_search_mode_0_0)
MR_def_extern_entry(mdb__declarative_analyser__analyser_state_init_1_0)
MR_def_extern_entry(mdb__declarative_analyser__reset_analyser_2_0)
MR_def_extern_entry(mdb__declarative_analyser__set_fallback_search_mode_4_0)
MR_def_extern_entry(mdb__declarative_analyser__reask_last_question_3_0)
MR_decl_static(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0)
MR_decl_static(mdb__declarative_analyser__bug_response_6_0)
MR_decl_static(mdb__declarative_analyser__handle_search_response_5_0)
MR_decl_static(mdb__declarative_analyser__top_down_search_5_0)
MR_decl_static(mdb__declarative_analyser__find_unknown_closest_to_range_7_0)
MR_decl_static(mdb__declarative_analyser__find_middle_weight_if_children_9_0)
MR_decl_static(mdb__declarative_analyser__find_middle_weight_9_0)
MR_decl_static(mdb__declarative_analyser__search_for_question_8_0)
MR_decl_static(mdb__declarative_analyser__follow_subterm_end_search_12_0)
MR_decl_static(mdb__declarative_analyser__follow_subterm_end_search_2_14_0)
MR_decl_static(mdb__declarative_analyser__binary_search_11_0)
MR_decl_static(mdb__declarative_analyser__decide_analyser_response_5_0)
MR_def_extern_entry(mdb__declarative_analyser__start_or_resume_analysis_6_0)
MR_decl_static(mdb__declarative_analyser__process_answer_5_0)
MR_def_extern_entry(mdb__declarative_analyser__continue_analysis_6_0)
MR_def_extern_entry(mdb__declarative_analyser__change_search_mode_6_0)
MR_decl_static(fn__mdb__declarative_analyser__search_mode_to_string_1_0)
MR_def_extern_entry(mdb__declarative_analyser__show_info_5_0)
MR_def_extern_entry(mdb__declarative_analyser__revise_analysis_4_0)
MR_def_extern_entry(mdb__declarative_analyser__debug_analyser_state_2_0)
MR_def_extern_entry(__Unify___mdb__declarative_analyser__analyser_response_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_analyser__analyser_response_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_analyser__analyser_state_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_analyser__analyser_state_1_0)
MR_def_extern_entry(__Unify___mdb__declarative_analyser__analysis_type_1_0)
MR_def_extern_entry(__Compare___mdb__declarative_analyser__analysis_type_1_0)
MR_decl_static(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0)
MR_decl_static(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0)
MR_decl_static(__Unify___mdb__declarative_analyser__reason_for_question_0_0)
MR_decl_static(__Compare___mdb__declarative_analyser__reason_for_question_0_0)
MR_def_extern_entry(__Unify___mdb__declarative_analyser__search_mode_0_0)
MR_def_extern_entry(__Compare___mdb__declarative_analyser__search_mode_0_0)
MR_decl_static(__Unify___mdb__declarative_analyser__search_response_0_0)
MR_decl_static(__Compare___mdb__declarative_analyser__search_response_0_0)
MR_decl_static(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0)
MR_decl_static(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0)
MR_decl_static(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0)
MR_decl_static(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0)
MR_decl_static(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0)
MR_decl_static(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__declarative_analyser__reason_to_string_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdb__declarative_analyser__reason_to_string_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(fn__string__int_to_string_1_0);
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__string__int_to_string_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
0
},
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_search_space_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_CTOR1_ADDR(mdb__declarative_edt, search_space),
2
},
{
MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question),
2
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
2,
0,
17453
}
},
{
{
2,
17437,
17453
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__bug_response_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_analyser__bug_response_6_0_1,
MR_COMMON(4,0),
4,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
2
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__bug_response_6_0_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_analyser__bug_response_6_0_2,
MR_COMMON(4,1),
4,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
2,
MR_COMMON(3,1)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_8 mercury_common_8[7] =
{
{
{
MR_string_const("handle_search_response", 22),
MR_string_const("search responded with query about ignored suspect", 49)
}
},
{
{
MR_string_const("top_down_search", 15),
MR_string_const("bug has unexplored or unknown children", 38)
}
},
{
{
MR_string_const("continue_analysis", 17),
MR_string_const("received answer to unasked question", 35)
}
},
{
{
MR_string_const("setup_binary_search", 19),
MR_string_const("TopId not an ancestor of BottomId", 33)
}
},
{
{
MR_string_const("change_search_mode", 18),
MR_string_const("binary mode requested, but no last question", 43)
}
},
{
{
MR_string_const("show_info", 9),
MR_string_const("no last question", 16)
}
},
{
{
MR_string_const("revise_analysis", 15),
MR_string_const("no root", 7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__top_down_search_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__top_down_search_5_0_2;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_analyser__top_down_search_5_0_1,
MR_COMMON(4,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_analyser__top_down_search_5_0_2,
MR_COMMON(4,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__find_middle_weight_9_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__declarative_analyser__find_middle_weight_9_0_1,
MR_COMMON(4,0)
},
7,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(3,0),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_11 mercury_common_11[4] =
{
{
MR_string_const("Context of current question", 27),
MR_tbmkword(0, 0)
},
{
MR_string_const("Search mode", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("Estimated questions remaining", 29),
MR_tbmkword(0, 0)
},
{
MR_string_const("Number of suspect events", 24),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_12 mercury_common_12[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_0 = {
	"analyser_response_no_suspects",
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
	&mercury_data_mdb__declarative_debugger__type_ctor_info_decl_question_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__type_ctor_info_decl_bug_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_1 = {
	"analyser_response_bug_found",
	2,
	2,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_2 = {
	"analyser_response_oracle_question",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_3[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_3 = {
	"analyser_response_require_explicit_subtree",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_4[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_4 = {
	"analyser_response_require_explicit_supertree",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_5 = {
	"analyser_response_revise",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analyser_response_1_5,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_5

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_analyser_response_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_1,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_0,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_2,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_analyser_response_1[] = {
	1,
	0,
	2,
	3,
	4,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_response_1 = {
	1,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__analyser_response_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__analyser_response_1_0)),
	"mdb.declarative_analyser",
	"analyser_response",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_analyser_response_1 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_analyser_response_1 },
	6,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_analyser_response_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
	&mercury_data_mdb__declarative_edt__type_ctor_info_search_space_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
	&mercury_data_mdb__declarative_edt__type_ctor_info_subterm_origin_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analyser_state_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__pti_search_space_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
};

const MR_ConstString mercury_data_mdb__declarative_analyser__field_names_analyser_state_1_0[] = {
	"search_space",
	"require_explicit",
	"search_mode",
	"fallback_search_mode",
	"last_search_question",
	"debug_origin"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_state_1_0 = {
	"analyser",
	6,
	33,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analyser_state_1_0,
	mercury_data_mdb__declarative_analyser__field_names_analyser_state_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_state_1_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_analyser_state_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_analyser_state_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_state_1 = {
	1,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__analyser_state_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__analyser_state_1_0)),
	"mdb.declarative_analyser",
	"analyser_state",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_analyser_state_1 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_analyser_state_1 },
	1,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_analyser_state_1
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_analysis_type_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analysis_type_1_0 = {
	"new_tree",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_analysis_type_1_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_analysis_type_1_1 = {
	"resume_previous",
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

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analysis_type_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analysis_type_1_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_analysis_type_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analysis_type_1_0,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_analysis_type_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_analysis_type_1 = {
	1,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__analysis_type_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__analysis_type_1_0)),
	"mdb.declarative_analyser",
	"analysis_type",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_analysis_type_1 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_analysis_type_1 },
	2,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_analysis_type_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_explicit_tree_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0 = {
	"explicit_subtree",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_explicit_tree_type_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1 = {
	"explicit_supertree",
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

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0)),
	"mdb.declarative_analyser",
	"explicit_tree_type",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0 },
	2,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_explicit_tree_type_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0 = {
	"ques_reason_start",
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

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1 = {
	"ques_reason_top_down",
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_reason_for_question_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_mdb__declarative_analyser__field_names_reason_for_question_0_2[] = {
	"binding_prim_op",
	"binding_filename",
	"binding_line_no",
	"maybe_atom_path",
	"binding_proc",
	"binding_node_eliminated"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2 = {
	"ques_reason_binding_node",
	6,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_reason_for_question_0_2,
	mercury_data_mdb__declarative_analyser__field_names_reason_for_question_0_2,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3 = {
	"ques_reason_subterm_no_proc_rep",
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

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4 = {
	"ques_reason_binding_node_eliminated",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_reason_for_question_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_analyser__field_names_reason_for_question_0_5[] = {
	"binary_reason_bottom",
	"binary_reason_top",
	"binary_reason_split"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5 = {
	"ques_reason_binary",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_reason_for_question_0_5,
	mercury_data_mdb__declarative_analyser__field_names_reason_for_question_0_5,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_reason_for_question_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_analyser__field_names_reason_for_question_0_6[] = {
	"dq_weighting",
	"dq_old_weight",
	"dq_chosen_subtree_weight"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6 = {
	"ques_reason_divide_and_query",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_reason_for_question_0_6,
	mercury_data_mdb__declarative_analyser__field_names_reason_for_question_0_6,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7 = {
	"ques_reason_skipped",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8 = {
	"ques_reason_revise",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_reason_for_question_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_reason_for_question_0[] = {
	6,
	8,
	1,
	7,
	2,
	0,
	3,
	5,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__reason_for_question_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__reason_for_question_0_0)),
	"mdb.declarative_analyser",
	"reason_for_question",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_reason_for_question_0 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0 },
	9,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_reason_for_question_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_0 = {
	"analyser_top_down",
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_search_mode_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_arg_pos_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__browser_info__type_ctor_info_how_track_subterm_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_1 = {
	"analyser_follow_subterm_end",
	5,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_search_mode_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_search_mode_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__declarative_analyser__field_names_search_mode_0_2[] = {
	"suspects",
	"range",
	"last_tested"
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_2 = {
	"analyser_binary",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_search_mode_0_2,
	mercury_data_mdb__declarative_analyser__field_names_search_mode_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_search_mode_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_3 = {
	"analyser_divide_and_query",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_search_mode_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_3

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_search_mode_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_mode_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_search_mode_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_2,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_3,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_1,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_search_mode_0[] = {
	3,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__search_mode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__search_mode_0_0)),
	"mdb.declarative_analyser",
	"search_mode",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_search_mode_0 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_search_mode_0 },
	4,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_search_mode_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0;

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_search_response_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_0 = {
	"search_response_question",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_search_response_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_search_response_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_1 = {
	"search_response_require_explicit_subtree",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_search_response_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_2 = {
	"search_response_require_explicit_supertree",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_3 = {
	"search_response_no_suspects",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_search_response_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_4 = {
	"search_response_found_bug",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_search_response_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_2,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_3

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_1[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_2[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_3[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_4

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_search_response_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_search_response_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_search_response_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_4,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_3,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_0,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_1,
	&mercury_data_mdb__declarative_analyser__du_functor_desc_search_response_0_2
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_search_response_0[] = {
	2,
	3,
	4,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_search_response_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__search_response_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__search_response_0_0)),
	"mdb.declarative_analyser",
	"search_response",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_search_response_0 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_search_response_0 },
	5,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_search_response_0
};

const MR_PseudoTypeInfo mercury_data_mdb__declarative_analyser__field_types_suspect_and_reason_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

static const MR_DuFunctorDesc mercury_data_mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0 = {
	"suspect_and_reason",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__declarative_analyser__field_types_suspect_and_reason_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0

};

const MR_DuPtagLayout mercury_data_mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[] = {
	&mercury_data_mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

const MR_Integer mercury_data_mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0)),
	"mdb.declarative_analyser",
	"suspect_and_reason",
	{ (void *)mercury_data_mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0 },
	{ (void *)mercury_data_mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0 },
	1,
	4,
	mercury_data_mdb__declarative_analyser__functor_number_map_suspect_and_reason_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__find_middle_weight_9_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_analyser",
"mdb.declarative_analyser",
"lambda_declarative_analyser_m_1121",
7,
0
},
"mdb.declarative_analyser",
"declarative_analyser.m",
1121,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__top_down_search_5_0_2 = {
{
MR_PREDICATE,
"mdb.declarative_analyser",
"mdb.declarative_analyser",
"lambda_declarative_analyser_m_740",
3,
0
},
"mdb.declarative_analyser",
"declarative_analyser.m",
740,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__top_down_search_5_0_1 = {
{
MR_PREDICATE,
"mdb.declarative_analyser",
"mdb.declarative_analyser",
"lambda_declarative_analyser_m_737",
3,
0
},
"mdb.declarative_analyser",
"declarative_analyser.m",
737,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__bug_response_6_0_2 = {
{
MR_PREDICATE,
"mdb.declarative_edt",
"mdb.declarative_edt",
"edt_question",
3,
0
},
"mdb.declarative_analyser",
"declarative_analyser.m",
656,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__declarative_analyser__bug_response_6_0_1 = {
{
MR_FUNCTION,
"mdb.declarative_analyser",
"mdb.declarative_analyser",
"lambda_declarative_analyser_m_655",
4,
0
},
"mdb.declarative_analyser",
"declarative_analyser.m",
655,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdb__declarative_analyser__reason_to_string_1_0_1 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string",
2,
0
},
"mdb.declarative_analyser",
"declarative_analyser.m",
1226,
"32"
};


MR_decl_entry(fn__string__int_to_string_thousands_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module0)
	MR_init_entry1(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__weighting_to_reason_string_3_0);
	MR_init_label10(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,4,5,6,7,8,3,10,11,12,13)
	MR_init_label2(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'weighting_to_reason_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i4);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i5);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" events each.", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i6);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" and ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i7);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i8);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("this node divides the suspect area into two regions of ", 55);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i10);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i11);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i12);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" and\n        ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i13);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i14);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("two regions of suspicion ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__weighting_to_reason_string_3_0_i15);
MR_def_label(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("this node divides the suspect area into ", 40);
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

MR_decl_entry(fn__mdb__declarative_edt__primitive_op_type_to_string_1_0);
MR_decl_entry(mdb__declarative_execution__get_pred_attributes_5_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module1)
	MR_init_entry1(fn__mdb__declarative_analyser__reason_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__reason_to_string_1_0);
	MR_init_label10(fn__mdb__declarative_analyser__reason_to_string_1_0,3,4,5,6,7,8,10,11,12,13)
	MR_init_label10(fn__mdb__declarative_analyser__reason_to_string_1_0,14,15,16,17,9,20,21,22,24,25)
	MR_init_label10(fn__mdb__declarative_analyser__reason_to_string_1_0,26,28,27,30,32,33,34,35,36,37)
	MR_init_label10(fn__mdb__declarative_analyser__reason_to_string_1_0,38,39,40,41,42,43,44,45,46,47)
	MR_init_label4(fn__mdb__declarative_analyser__reason_to_string_1_0,48,49,50,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reason_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_analyser__reason_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("tracking of the marked subterm was stopped here, because the binding node lies in a portion of the tree which has been eliminated.", 130);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("this question is being revisited, because of an unsuccessful previous bug search.", 81);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("there are no more non-skipped questions left.", 45);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("this is the node where the \140dd\' command was issued.", 51);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("tracking of the marked subterm had to be aborted here, because of missing tracing information.", 94);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("this is the next node in the top-down search.", 45);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i9);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_r1 = (((MR_Integer) MR_sv(1) - (MR_Integer) MR_sv(2)) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i10);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) MR_sv(3));
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i11);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (((MR_Integer) MR_sv(3) - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i12);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i13);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" and ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i14);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i15);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" into two paths of length ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i16);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i17);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("this node divides a path of length ", 35);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i19);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 2);
	MR_sv(3) = MR_tfield(1, MR_r1, 3);
	MR_sv(4) = MR_tfield(1, MR_r1, 4);
	MR_sv(5) = MR_tfield(1, MR_r1, 5);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__primitive_op_type_to_string_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i20);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i21);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__declarative_execution__get_pred_attributes_5_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i22);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i24);
	}
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = (MR_Word) MR_string_const("function", 8);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i25);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = (MR_Word) MR_string_const("predicate", 9);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i25);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i26);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i28);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i27);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" That node was, however, previously eliminated from the bug search.", 67);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__reason_to_string_1_0_i30);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i36);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i32);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i33);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i34);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("The path to the subterm in the atom is ", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i35);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i36);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("). ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i37);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i38);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i39);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i40);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i41);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i42);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i43);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i44);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i45);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i46);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i47);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i48);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" inside the ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i49);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdb__declarative_analyser__reason_to_string_1_0_i50);
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("the marked subterm was bound by the ", 36);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mdb__declarative_analyser__reason_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_r2 = ((MR_Integer) MR_tfield(3, MR_tempr1, 1) - (MR_Integer) MR_tfield(3, MR_tempr1, 2));
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__mdb__declarative_analyser__weighting_to_reason_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module2)
	MR_init_entry1(fn__mdb__declarative_analyser__divide_and_query_search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__divide_and_query_search_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_and_query_search_mode'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_analyser__divide_and_query_search_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module3)
	MR_init_entry1(fn__mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'suspicion_divide_and_query_search_mode'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module4)
	MR_init_entry1(fn__mdb__declarative_analyser__top_down_search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__top_down_search_mode_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top_down_search_mode'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__declarative_analyser__top_down_search_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_edt__empty_search_space_0_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module5)
	MR_init_entry1(mdb__declarative_analyser__analyser_state_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__analyser_state_init_1_0);
	MR_init_label1(mdb__declarative_analyser__analyser_state_init_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analyser_state_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__analyser_state_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdb__declarative_edt__empty_search_space_0_0,
		mdb__declarative_analyser__analyser_state_init_1_0_i2);
MR_def_label(mdb__declarative_analyser__analyser_state_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module6)
	MR_init_entry1(mdb__declarative_analyser__reset_analyser_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__reset_analyser_2_0);
	MR_init_label1(mdb__declarative_analyser__reset_analyser_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_analyser'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__reset_analyser_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__empty_search_space_0_0,
		mdb__declarative_analyser__reset_analyser_2_0_i2);
MR_def_label(mdb__declarative_analyser__reset_analyser_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__update_weighting_heuristic_4_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module7)
	MR_init_entry1(mdb__declarative_analyser__set_fallback_search_mode_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__set_fallback_search_mode_4_0);
	MR_init_label4(mdb__declarative_analyser__set_fallback_search_mode_4_0,4,10,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_fallback_search_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__set_fallback_search_mode_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__set_fallback_search_mode_4_0_i4);
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(mdb__declarative_analyser__set_fallback_search_mode_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__set_fallback_search_mode_4_0_i5);
	}
MR_def_label(mdb__declarative_analyser__set_fallback_search_mode_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(mdb__declarative_analyser__set_fallback_search_mode_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(mdb__declarative_analyser__set_fallback_search_mode_4_0_i10);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__update_weighting_heuristic_4_0,
		mdb__declarative_analyser__set_fallback_search_mode_4_0_i7);
MR_def_label(mdb__declarative_analyser__set_fallback_search_mode_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(fn__mdb__declarative_edt__get_edt_node_2_0);
MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(mdb__declarative_analyser_module8)
	MR_init_entry1(mdb__declarative_analyser__reask_last_question_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__reask_last_question_3_0);
	MR_init_label4(mdb__declarative_analyser__reask_last_question_3_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reask_last_question'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__reask_last_question_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__reask_last_question_3_0_i1);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__reask_last_question_3_0_i3);
MR_def_label(mdb__declarative_analyser__reask_last_question_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__reask_last_question_3_0_i4);
MR_def_label(mdb__declarative_analyser__reask_last_question_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__reask_last_question_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_analyser__reask_last_question_3_0_i5);
MR_def_label(mdb__declarative_analyser__reask_last_question_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_analyser__reask_last_question_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module9)
	MR_init_entry1(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0);
	MR_init_label3(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0,3,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_maybe_weighting_from_search_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0_i4);
	}
MR_def_label(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_edt__type_ctor_info_suspect_id_0;
MR_decl_entry(mdb__declarative_edt__edt_question_3_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module10)
	MR_init_entry1(mdb__declarative_analyser__bug_response_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__bug_response_6_0);
	MR_init_label10(mdb__declarative_analyser__bug_response_6_0,2,3,6,5,8,9,10,4,12,14)
	MR_init_label3(mdb__declarative_analyser__bug_response_6_0,16,17,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bug_response'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__bug_response_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Integer) 2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__bug_response_6_0_i2);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__bug_response_6_0_i3);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__bug_response_6_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__bug_response_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_analyser__bug_response_6_0_i6);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(mdb__declarative_analyser__bug_response_6_0_i4);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__bug_response_6_0_i8);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__bug_response_6_0_i9);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__bug_response_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__mdb__declarative_analyser__bug_response_6_0_i10);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__bug_response_6_0_i12);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		mdb__declarative_analyser__bug_response_6_0_i14);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_edt__edt_question_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__bug_response_6_0_i16);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__bug_response_6_0_i17);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		mdb__declarative_analyser__bug_response_6_0_i19);
MR_def_label(mdb__declarative_analyser__bug_response_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__topmost_det_2_0);
MR_decl_entry(mdb__declarative_edt__suspect_unknown_2_0);
MR_decl_entry(mdb__declarative_edt__suspect_skipped_2_0);
MR_decl_entry(mdb__declarative_edt__suspect_ignored_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module11)
	MR_init_entry1(mdb__declarative_analyser__handle_search_response_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__handle_search_response_5_0);
	MR_init_label10(mdb__declarative_analyser__handle_search_response_5_0,93,7,8,9,10,4,14,12,16,17)
	MR_init_label10(mdb__declarative_analyser__handle_search_response_5_0,18,23,24,26,27,21,19,33,34,32)
	MR_init_label4(mdb__declarative_analyser__handle_search_response_5_0,42,15,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'handle_search_response'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__handle_search_response_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i93);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_r1;
	MR_sv(1) = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i7);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i8);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i9);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i10);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_r4;
	MR_sv(5) = MR_tempr4;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__bug_response_6_0,
		mdb__declarative_analyser__handle_search_response_5_0_i14);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i15);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Integer) 2;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i16);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i17);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__handle_search_response_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_analyser__handle_search_response_5_0_i18);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i23);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i24);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i21);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i26);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_skipped_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i27);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i19);
	}
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i42);
	}
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i33);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_ignored_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i34);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__handle_search_response_5_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_analyser__handle_search_response_5_0_i42);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 6);
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__handle_search_response_5_0_i47);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__handle_search_response_5_0_i48);
MR_def_label(mdb__declarative_analyser__handle_search_response_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__root_2_0);
MR_decl_entry(mdb__declarative_edt__first_unknown_descendant_6_0);
MR_decl_entry(mdb__declarative_edt__choose_skipped_suspect_2_0);
MR_decl_entry(mdb__declarative_edt__children_6_0);
MR_decl_entry(mdb__declarative_edt__non_ignored_descendants_6_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(mdb__declarative_edt__extend_search_space_upwards_4_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module12)
	MR_init_entry1(mdb__declarative_analyser__top_down_search_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__top_down_search_5_0);
	MR_init_label10(mdb__declarative_analyser__top_down_search_5_0,117,3,4,2,6,7,8,9,13,14)
	MR_init_label10(mdb__declarative_analyser__top_down_search_5_0,12,18,19,22,24,27,28,31,21,17)
	MR_init_label10(mdb__declarative_analyser__top_down_search_5_0,38,37,41,42,43,44,47,46,11,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top_down_search'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__top_down_search_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i3);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__root_2_0,
		mdb__declarative_analyser__top_down_search_5_0_i4);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i2);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r6;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i8);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i6);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_analyser__top_down_search_5_0_i7);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(5);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(mdb__declarative_edt__first_unknown_descendant_6_0,
		mdb__declarative_analyser__top_down_search_5_0_i9);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i11);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i13);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__choose_skipped_suspect_2_0,
		mdb__declarative_analyser__top_down_search_5_0_i14);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i18);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__root_2_0,
		mdb__declarative_analyser__top_down_search_5_0_i19);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__children_6_0,
		mdb__declarative_analyser__top_down_search_5_0_i22);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__non_ignored_descendants_6_0,
		mdb__declarative_analyser__top_down_search_5_0_i24);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mdb__declarative_analyser__top_down_search_5_0_i27);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		mdb__declarative_analyser__top_down_search_5_0_i28);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i21);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i31);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = MR_sv(3);
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__extend_search_space_upwards_4_0,
		mdb__declarative_analyser__top_down_search_5_0_i38);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i37);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i117);
	}
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i41);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_analyser__top_down_search_5_0_i42);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__top_down_search_5_0_i43);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__top_down_search_5_0_i44);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__top_down_search_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_analyser__top_down_search_5_0_i47);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i46);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__top_down_search_5_0_i53);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__declarative_analyser__top_down_search_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__elem_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module13)
	MR_init_entry1(mdb__declarative_analyser__find_unknown_closest_to_range_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__find_unknown_closest_to_range_7_0);
	MR_init_label10(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,48,3,2,6,7,4,5,11,12,9)
	MR_init_label2(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_unknown_closest_to_range'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__find_unknown_closest_to_range_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i1);
	}
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i2);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r1;
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i5);
	}
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_np_call_localret_ent(fn__array__elem_2_0,
		mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i6);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i7);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i4);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(5);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) > (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i10);
	}
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__array__elem_2_0,
		mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i11);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i12);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i9);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(5);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r7 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdb__declarative_analyser__find_unknown_closest_to_range_7_0_i48);
MR_def_label(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module14)
	MR_init_entry1(mdb__declarative_analyser__find_middle_weight_if_children_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__find_middle_weight_if_children_9_0);
	MR_init_label2(mdb__declarative_analyser__find_middle_weight_if_children_9_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_middle_weight_if_children'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__find_middle_weight_if_children_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_tempr2 = MR_r8;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__children_6_0,
		mdb__declarative_analyser__find_middle_weight_if_children_9_0_i4);
MR_def_label(mdb__declarative_analyser__find_middle_weight_if_children_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_if_children_9_0_i2);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mdb__declarative_analyser__find_middle_weight_9_0);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_if_children_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdb__declarative_edt__get_weight_2_0);
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module15)
	MR_init_entry1(mdb__declarative_analyser__find_middle_weight_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__find_middle_weight_9_0);
	MR_init_label10(mdb__declarative_analyser__find_middle_weight_9_0,7,8,10,11,12,13,4,5,3,18)
	MR_init_label10(mdb__declarative_analyser__find_middle_weight_9_0,19,20,21,22,24,27,28,26,25,34)
	MR_init_label10(mdb__declarative_analyser__find_middle_weight_9_0,35,40,41,43,44,45,38,33,57,58)
	MR_init_label3(mdb__declarative_analyser__find_middle_weight_9_0,60,61,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_middle_weight'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__find_middle_weight_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r8;
	MR_sv(5) = MR_tfield(1, MR_r7, 0);
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i7);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i8);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i4);
	}
	MR_sv(1) = (MR_Integer) 2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i10);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i11);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i12);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i13);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r8 = MR_sv(6);
	MR_r1 = MR_sv(11);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r8;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mdb__declarative_analyser__top_down_search_5_0);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Integer) 2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i18);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i19);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i20);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i21);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i22);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i24);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i25);
	}
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i27);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i28);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i26);
	}
	MR_tag_alloc_heap(MR_r7, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(1, MR_r7, 0) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mdb__declarative_analyser__find_middle_weight_if_children_9_0);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mdb__declarative_analyser__find_middle_weight_if_children_9_0);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i34);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i35);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i33);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i38);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i40);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i41);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i38);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i43);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i44);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(10);
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_tempr3);
	MR_tempr2 = ((MR_Integer) MR_tempr3 - (MR_Integer) MR_sv(7));
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i45);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i55);
	}
	MR_sv(5) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i57);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i58);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__find_middle_weight_9_0_i55);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i60);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__find_middle_weight_9_0_i61);
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(mdb__declarative_analyser__find_middle_weight_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mdb__declarative_analyser__find_middle_weight_if_children_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module16)
	MR_init_entry1(mdb__declarative_analyser__search_for_question_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__search_for_question_8_0);
	MR_init_label10(mdb__declarative_analyser__search_for_question_8_0,4,3,5,9,10,14,12,8,19,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_for_question'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__search_for_question_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__search_for_question_8_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_np_call_localret_ent(mdb__declarative_analyser__top_down_search_5_0,
		mdb__declarative_analyser__search_for_question_8_0_i4);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__search_for_question_8_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r4;
	MR_tempr5 = MR_r5;
	MR_r4 = MR_tfield(2, MR_tempr5, 0);
	MR_tempr2 = MR_tempr5;
	MR_tempr3 = MR_tfield(2, MR_tempr5, 1);
	MR_r5 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tfield(0, MR_tempr3, 1);
	MR_r7 = MR_tfield(2, MR_tempr2, 2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(mdb__declarative_analyser__binary_search_11_0);
	}
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(mdb__declarative_analyser__search_for_question_8_0_i7);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__search_for_question_8_0_i9);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__root_2_0,
		mdb__declarative_analyser__search_for_question_8_0_i10);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__search_for_question_8_0_i8);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__children_6_0,
		mdb__declarative_analyser__search_for_question_8_0_i14);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__search_for_question_8_0_i12);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(7);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__find_middle_weight_9_0,
		mdb__declarative_analyser__search_for_question_8_0_i19);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r3, 0) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_analyser__top_down_search_5_0,
		mdb__declarative_analyser__search_for_question_8_0_i19);
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdb__declarative_analyser__search_for_question_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_tfield(1, MR_r5, 4);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(1, MR_tempr1, 3);
	MR_r7 = MR_tfield(1, MR_tempr1, 0);
	MR_r8 = MR_tfield(1, MR_tempr1, 1);
	MR_r9 = MR_tfield(1, MR_tempr1, 2);
	MR_r10 = MR_tempr2;
	MR_np_tailcall_ent(mdb__declarative_analyser__follow_subterm_end_search_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module17)
	MR_init_entry1(mdb__declarative_analyser__follow_subterm_end_search_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__follow_subterm_end_search_12_0);
	MR_init_label2(mdb__declarative_analyser__follow_subterm_end_search_12_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'follow_subterm_end_search'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__follow_subterm_end_search_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__rtti_access, proc_layout);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdb__declarative_analyser__follow_subterm_end_search_12_0_i2);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(8);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,
		mdb__declarative_analyser__follow_subterm_end_search_12_0_i3);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__find_subterm_origin_11_0);
MR_decl_entry(mdb__declarative_edt__give_up_subterm_tracking_3_0);
MR_decl_entry(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module18)
	MR_init_entry1(mdb__declarative_analyser__follow_subterm_end_search_2_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__follow_subterm_end_search_2_14_0);
	MR_init_label10(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,163,2,8,9,5,6,4,14,17,21)
	MR_init_label10(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,22,20,25,27,28,33,34,31,26,19)
	MR_init_label10(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,41,43,44,45,46,42,53,54,52,56)
	MR_init_label8(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,57,51,49,64,65,61,62,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'follow_subterm_end_search_2'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__follow_subterm_end_search_2_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r8;
	MR_sv(5) = MR_tempr3;
	MR_tempr4 = MR_r9;
	MR_sv(6) = MR_tempr4;
	MR_tempr5 = MR_r10;
	MR_sv(7) = MR_tempr5;
	MR_sv(8) = MR_r11;
	MR_sv(15) = MR_r1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__find_subterm_origin_11_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i2);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i6);
	}
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i8);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i9);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_r5;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__search_for_question_8_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i69);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i14);
	}
	MR_tag_alloc_heap(MR_r4, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tfield(2, MR_r4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i21);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i22);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i20);
	}
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_sv(5);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i25);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_sv(4);
	MR_r1 = MR_sv(15);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i27);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(mdb__declarative_edt__give_up_subterm_tracking_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i28);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i26);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i31);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i33);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i34);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(mdb__declarative_analyser__search_for_question_8_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i69);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(8);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i163);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_proc_label_for_suspect_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i41);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i43);
	}
	MR_sv(12) = MR_r1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i42);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i44);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i45);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r2 = (MR_Integer) 15;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__follow_subterm_end_search_2_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i46);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_sv(5), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(5), 0) = MR_tempr1;
	MR_r1 = MR_sv(15);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i53);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i54);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i52);
	}
	MR_r3 = MR_sv(8);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i51);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i56);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_skipped_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i57);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i49);
	}
	MR_r3 = MR_sv(8);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i62);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(4), 0);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i64);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_unknown_2_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i65);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i61);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_decr_sp_and_return(16);
	}
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_r5;
	MR_np_call_localret_ent(mdb__declarative_analyser__search_for_question_8_0,
		mdb__declarative_analyser__follow_subterm_end_search_2_14_0_i69);
MR_def_label(mdb__declarative_analyser__follow_subterm_end_search_2_14_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = MR_sv(13);
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__suspect_in_excluded_complement_2_0);
MR_decl_entry(mdb__declarative_edt__suspect_in_excluded_subtree_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module19)
	MR_init_entry1(mdb__declarative_analyser__binary_search_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__binary_search_11_0);
	MR_init_label10(mdb__declarative_analyser__binary_search_11_0,2,4,5,3,8,9,7,12,13,16)
	MR_init_label4(mdb__declarative_analyser__binary_search_11_0,17,18,22,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binary_search'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__binary_search_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r9;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array__elem_2_0,
		mdb__declarative_analyser__binary_search_11_0_i2);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__binary_search_11_0_i4);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_in_excluded_complement_2_0,
		mdb__declarative_analyser__binary_search_11_0_i5);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__binary_search_11_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_sv(4) = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r4 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(mdb__declarative_analyser__binary_search_11_0_i12);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__binary_search_11_0_i8);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdb__declarative_edt__suspect_in_excluded_subtree_2_0,
		mdb__declarative_analyser__binary_search_11_0_i9);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__binary_search_11_0_i7);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_sv(5) = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r4 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(mdb__declarative_analyser__binary_search_11_0_i12);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r1 = MR_sv(10);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(4) <= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(mdb__declarative_analyser__binary_search_11_0_i13);
	}
	MR_r6 = MR_r5;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(mdb__declarative_analyser__search_for_question_8_0);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__binary_search_11_0_i16);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_sv(4));
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		mdb__declarative_analyser__binary_search_11_0_i17);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_r4 + (MR_Integer) MR_tempr1);
	MR_r7 = MR_r6;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__find_unknown_closest_to_range_7_0,
		mdb__declarative_analyser__binary_search_11_0_i18);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__binary_search_11_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 2) = MR_r2;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__array__elem_2_0,
		mdb__declarative_analyser__binary_search_11_0_i22);
MR_def_label(mdb__declarative_analyser__binary_search_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(12);
	}
MR_def_label(mdb__declarative_analyser__binary_search_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_r5;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(mdb__declarative_analyser__search_for_question_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__maybe_check_search_space_consistency_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module20)
	MR_init_entry1(mdb__declarative_analyser__decide_analyser_response_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__decide_analyser_response_5_0);
	MR_init_label4(mdb__declarative_analyser__decide_analyser_response_5_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decide_analyser_response'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__decide_analyser_response_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Word) MR_string_const("Start of decide_analyser_response", 33);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,
		mdb__declarative_analyser__decide_analyser_response_5_0_i2);
MR_def_label(mdb__declarative_analyser__decide_analyser_response_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r6 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__search_for_question_8_0,
		mdb__declarative_analyser__decide_analyser_response_5_0_i3);
MR_def_label(mdb__declarative_analyser__decide_analyser_response_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__handle_search_response_5_0,
		mdb__declarative_analyser__decide_analyser_response_5_0_i5);
MR_def_label(mdb__declarative_analyser__decide_analyser_response_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_r4 = (MR_Word) MR_string_const("End of decide_analyser_response", 31);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__maybe_check_search_space_consistency_3_0,
		mdb__declarative_analyser__decide_analyser_response_5_0_i6);
MR_def_label(mdb__declarative_analyser__decide_analyser_response_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__initialise_search_space_4_0);
MR_decl_entry(mdb__declarative_edt__incorporate_explicit_supertree_5_0);
MR_decl_entry(mdb__declarative_edt__incorporate_explicit_subtree_4_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module21)
	MR_init_entry1(mdb__declarative_analyser__start_or_resume_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__start_or_resume_analysis_6_0);
	MR_init_label10(mdb__declarative_analyser__start_or_resume_analysis_6_0,6,4,3,12,13,15,16,18,19,23)
	MR_init_label4(mdb__declarative_analyser__start_or_resume_analysis_6_0,11,26,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'start_or_resume_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__start_or_resume_analysis_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__start_or_resume_analysis_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__reask_last_question_3_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i6);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__start_or_resume_analysis_6_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdb__declarative_analyser__decide_analyser_response_5_0);
	}
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__start_or_resume_analysis_6_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_sv(5) = (MR_Integer) 2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i12);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_sv(4), 3);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__empty_search_space_0_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i13);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(fn__mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i15);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__initialise_search_space_4_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i16);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i18);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i19);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__start_or_resume_analysis_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_analyser__start_or_resume_analysis_6_0_i23);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_tfield(1, MR_r6, 0);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__start_or_resume_analysis_6_0_i26);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_r1;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(0, MR_r5, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__incorporate_explicit_supertree_5_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i29);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r4, 0);
	MR_sv(4) = MR_tfield(1, MR_r7, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i28);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_edt__incorporate_explicit_subtree_4_0,
		mdb__declarative_analyser__start_or_resume_analysis_6_0_i29);
MR_def_label(mdb__declarative_analyser__start_or_resume_analysis_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(mdb__declarative_analyser__decide_analyser_response_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__ignore_suspect_4_0);
MR_decl_entry(mdb__declarative_edt__skip_suspect_3_0);
MR_decl_entry(mdb__declarative_edt__edt_dependency_6_0);
MR_decl_entry(mdb__declarative_edt__edt_subterm_mode_5_0);
MR_decl_entry(mdb__declarative_edt__assert_suspect_is_inadmissible_3_0);
MR_decl_entry(mdb__declarative_edt__assert_suspect_is_erroneous_3_0);
MR_decl_entry(mdb__declarative_edt__assert_suspect_is_correct_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module22)
	MR_init_entry1(mdb__declarative_analyser__process_answer_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__process_answer_5_0);
	MR_init_label10(mdb__declarative_analyser__process_answer_5_0,4,3,7,8,6,11,16,19,18,21)
	MR_init_label10(mdb__declarative_analyser__process_answer_5_0,17,15,14,10,29,30,28,33,34,32)
	MR_init_label2(mdb__declarative_analyser__process_answer_5_0,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_answer'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__process_answer_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__ignore_suspect_4_0,
		mdb__declarative_analyser__process_answer_5_0_i4);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i6);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__process_answer_5_0_i7);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__skip_suspect_3_0,
		mdb__declarative_analyser__process_answer_5_0_i8);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__edt_dependency_6_0,
		mdb__declarative_analyser__process_answer_5_0_i11);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r7 = MR_tempr2;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i15);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__edt_subterm_mode_5_0,
		mdb__declarative_analyser__process_answer_5_0_i16);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__process_answer_5_0_i19);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(mdb__declarative_edt__assert_suspect_is_inadmissible_3_0,
		mdb__declarative_analyser__process_answer_5_0_i17);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__process_answer_5_0_i21);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(mdb__declarative_edt__assert_suspect_is_erroneous_3_0,
		mdb__declarative_analyser__process_answer_5_0_i17);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i14);
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_r7;
	MR_r2 = MR_tempr1;
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r3, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i28);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__process_answer_5_0_i29);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__assert_suspect_is_correct_3_0,
		mdb__declarative_analyser__process_answer_5_0_i30);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__process_answer_5_0_i32);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__process_answer_5_0_i33);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__assert_suspect_is_erroneous_3_0,
		mdb__declarative_analyser__process_answer_5_0_i34);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdb__declarative_analyser__process_answer_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__process_answer_5_0_i36);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__declarative_edt__assert_suspect_is_inadmissible_3_0,
		mdb__declarative_analyser__process_answer_5_0_i37);
MR_def_label(mdb__declarative_analyser__process_answer_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module23)
	MR_init_entry1(mdb__declarative_analyser__continue_analysis_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__continue_analysis_6_0);
	MR_init_label3(mdb__declarative_analyser__continue_analysis_6_0,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'continue_analysis'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__continue_analysis_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r5, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__continue_analysis_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__process_answer_5_0,
		mdb__declarative_analyser__continue_analysis_6_0_i4);
MR_def_label(mdb__declarative_analyser__continue_analysis_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__declarative_analyser__decide_analyser_response_5_0);
MR_def_label(mdb__declarative_analyser__continue_analysis_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_analyser__continue_analysis_6_0_i2);
MR_def_label(mdb__declarative_analyser__continue_analysis_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mdb__declarative_analyser__decide_analyser_response_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__get_path_4_0);
MR_decl_entry(fn__array__from_list_1_0);
MR_decl_entry(array__bounds_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module24)
	MR_init_entry1(mdb__declarative_analyser__change_search_mode_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__change_search_mode_6_0);
	MR_init_label10(mdb__declarative_analyser__change_search_mode_6_0,6,9,7,11,15,17,18,14,23,5)
	MR_init_label7(mdb__declarative_analyser__change_search_mode_6_0,3,27,32,30,33,2,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'change_search_mode'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__change_search_mode_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__change_search_mode_6_0_i6);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(mdb__declarative_edt__root_2_0,
		mdb__declarative_analyser__change_search_mode_6_0_i9);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i7);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__get_path_4_0,
		mdb__declarative_analyser__change_search_mode_6_0_i15);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_analyser__change_search_mode_6_0_i11);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__get_path_4_0,
		mdb__declarative_analyser__change_search_mode_6_0_i15);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i14);
	}
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__array__from_list_1_0,
		mdb__declarative_analyser__change_search_mode_6_0_i17);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(array__bounds_3_0,
		mdb__declarative_analyser__change_search_mode_6_0_i18);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i23);
	}
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,3);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_analyser__change_search_mode_6_0_i23);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_analyser__decide_analyser_response_5_0,
		mdb__declarative_analyser__change_search_mode_6_0_i34);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,4);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_analyser__change_search_mode_6_0_i2);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i27);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(mdb__declarative_analyser__set_fallback_search_mode_4_0,
		mdb__declarative_analyser__change_search_mode_6_0_i32);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(mdb__declarative_analyser__change_search_mode_6_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(mdb__declarative_analyser__set_fallback_search_mode_4_0,
		mdb__declarative_analyser__change_search_mode_6_0_i32);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(mdb__declarative_analyser__decide_analyser_response_5_0,
		mdb__declarative_analyser__change_search_mode_6_0_i34);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(mdb__declarative_analyser__set_fallback_search_mode_4_0,
		mdb__declarative_analyser__change_search_mode_6_0_i33);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__declarative_analyser__decide_analyser_response_5_0,
		mdb__declarative_analyser__change_search_mode_6_0_i34);
MR_def_label(mdb__declarative_analyser__change_search_mode_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module25)
	MR_init_entry1(fn__mdb__declarative_analyser__search_mode_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__search_mode_to_string_1_0);
	MR_init_label5(fn__mdb__declarative_analyser__search_mode_to_string_1_0,3,4,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_mode_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_analyser__search_mode_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__search_mode_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("top down", 8);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__search_mode_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__search_mode_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("binary search on path", 21);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__search_mode_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__search_mode_to_string_1_0_i5);
	}
	MR_r2 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__search_mode_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("divide and query", 16);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__search_mode_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("suspicion divide and query", 26);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__search_mode_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 4);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdb__declarative_analyser__search_mode_to_string_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("tracking marked sub-term (using accurate algorithm)", 51);
	MR_proceed();
MR_def_label(fn__mdb__declarative_analyser__search_mode_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("tracking marked sub-term (using fast algorithm)", 47);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__edt_context_4_0);
MR_decl_entry(list__append_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__mdb__declarative_edt__get_current_maybe_weighting_1_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__math__log2_1_0);
MR_decl_entry(fn__float__ceiling_to_int_1_0);
MR_decl_entry(fn__string__format_table_2_0);
MR_decl_entry(fn__string__word_wrap_2_0);
MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module26)
	MR_init_entry1(mdb__declarative_analyser__show_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__show_info_5_0);
	MR_init_label10(mdb__declarative_analyser__show_info_5_0,5,6,7,11,12,10,15,16,17,18)
	MR_init_label10(mdb__declarative_analyser__show_info_5_0,19,20,21,22,23,25,27,4,3,2)
	MR_init_label10(mdb__declarative_analyser__show_info_5_0,33,34,36,37,38,43,44,42,46,47)
	MR_init_label10(mdb__declarative_analyser__show_info_5_0,49,50,55,56,57,58,59,61,51,65)
	MR_init_label10(mdb__declarative_analyser__show_info_5_0,66,68,39,78,79,80,81,82,83,84)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'show_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__show_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__show_info_5_0_i5);
MR_def_label(mdb__declarative_analyser__show_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__show_info_5_0_i6);
MR_def_label(mdb__declarative_analyser__show_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__declarative_edt__edt_context_4_0,
		mdb__declarative_analyser__show_info_5_0_i7);
MR_def_label(mdb__declarative_analyser__show_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i10);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_analyser__show_info_5_0_i11);
MR_def_label(mdb__declarative_analyser__show_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i12);
MR_def_label(mdb__declarative_analyser__show_info_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i23);
MR_def_label(mdb__declarative_analyser__show_info_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_analyser__show_info_5_0_i15);
MR_def_label(mdb__declarative_analyser__show_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_analyser__show_info_5_0_i16);
MR_def_label(mdb__declarative_analyser__show_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i17);
MR_def_label(mdb__declarative_analyser__show_info_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i18);
MR_def_label(mdb__declarative_analyser__show_info_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i19);
MR_def_label(mdb__declarative_analyser__show_info_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i20);
MR_def_label(mdb__declarative_analyser__show_info_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i21);
MR_def_label(mdb__declarative_analyser__show_info_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i22);
MR_def_label(mdb__declarative_analyser__show_info_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i23);
MR_def_label(mdb__declarative_analyser__show_info_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(list__append_3_0,
		mdb__declarative_analyser__show_info_5_0_i25);
MR_def_label(mdb__declarative_analyser__show_info_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__append_3_0,
		mdb__declarative_analyser__show_info_5_0_i27);
MR_def_label(mdb__declarative_analyser__show_info_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i33);
MR_def_label(mdb__declarative_analyser__show_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i33);
MR_def_label(mdb__declarative_analyser__show_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,5);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__declarative_analyser__show_info_5_0_i2);
MR_def_label(mdb__declarative_analyser__show_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i33);
MR_def_label(mdb__declarative_analyser__show_info_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 2);
	MR_np_call_localret_ent(fn__mdb__declarative_analyser__search_mode_to_string_1_0,
		mdb__declarative_analyser__show_info_5_0_i34);
MR_def_label(mdb__declarative_analyser__show_info_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i36);
MR_def_label(mdb__declarative_analyser__show_info_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(1) = (MR_Integer) 2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__show_info_5_0_i37);
MR_def_label(mdb__declarative_analyser__show_info_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_current_maybe_weighting_1_0,
		mdb__declarative_analyser__show_info_5_0_i38);
MR_def_label(mdb__declarative_analyser__show_info_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i39);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__show_info_5_0_i43);
MR_def_label(mdb__declarative_analyser__show_info_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__root_2_0,
		mdb__declarative_analyser__show_info_5_0_i44);
MR_def_label(mdb__declarative_analyser__show_info_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i42);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__show_info_5_0_i49);
MR_def_label(mdb__declarative_analyser__show_info_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__show_info_5_0_i46);
MR_def_label(mdb__declarative_analyser__show_info_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__declarative_edt__topmost_det_2_0,
		mdb__declarative_analyser__show_info_5_0_i47);
MR_def_label(mdb__declarative_analyser__show_info_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__show_info_5_0_i49);
MR_def_label(mdb__declarative_analyser__show_info_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__show_info_5_0_i50);
MR_def_label(mdb__declarative_analyser__show_info_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i51);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__declarative_analyser__show_info_5_0_i51);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,11,2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i55);
MR_def_label(mdb__declarative_analyser__show_info_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdb__declarative_analyser__show_info_5_0_i56);
MR_def_label(mdb__declarative_analyser__show_info_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__math__log2_1_0,
		mdb__declarative_analyser__show_info_5_0_i57);
MR_def_label(mdb__declarative_analyser__show_info_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__ceiling_to_int_1_0,
		mdb__declarative_analyser__show_info_5_0_i58);
MR_def_label(mdb__declarative_analyser__show_info_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdb__declarative_analyser__show_info_5_0_i59);
MR_def_label(mdb__declarative_analyser__show_info_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i61);
MR_def_label(mdb__declarative_analyser__show_info_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,11,3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i65);
MR_def_label(mdb__declarative_analyser__show_info_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_sv(3) = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,11,3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i65);
MR_def_label(mdb__declarative_analyser__show_info_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		mdb__declarative_analyser__show_info_5_0_i66);
MR_def_label(mdb__declarative_analyser__show_info_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i68);
MR_def_label(mdb__declarative_analyser__show_info_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const(" : ", 3);
	}
	MR_np_call_localret_ent(fn__string__format_table_2_0,
		mdb__declarative_analyser__show_info_5_0_i78);
MR_def_label(mdb__declarative_analyser__show_info_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const(" : ", 3);
	}
	MR_np_call_localret_ent(fn__string__format_table_2_0,
		mdb__declarative_analyser__show_info_5_0_i78);
MR_def_label(mdb__declarative_analyser__show_info_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__mdb__declarative_analyser__reason_to_string_1_0,
		mdb__declarative_analyser__show_info_5_0_i79);
MR_def_label(mdb__declarative_analyser__show_info_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("The current question was chosen because ", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i80);
MR_def_label(mdb__declarative_analyser__show_info_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 72;
	MR_np_call_localret_ent(fn__string__word_wrap_2_0,
		mdb__declarative_analyser__show_info_5_0_i81);
MR_def_label(mdb__declarative_analyser__show_info_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i82);
MR_def_label(mdb__declarative_analyser__show_info_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i83);
MR_def_label(mdb__declarative_analyser__show_info_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__declarative_analyser__show_info_5_0_i84);
MR_def_label(mdb__declarative_analyser__show_info_5_0,84)
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__revise_root_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module27)
	MR_init_entry1(mdb__declarative_analyser__revise_analysis_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__revise_analysis_4_0);
	MR_init_label7(mdb__declarative_analyser__revise_analysis_4_0,3,4,6,7,8,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'revise_analysis'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__revise_analysis_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__revise_analysis_4_0_i3);
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdb__declarative_edt__root_2_0,
		mdb__declarative_analyser__revise_analysis_4_0_i4);
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__declarative_analyser__revise_analysis_4_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__revise_analysis_4_0_i6);
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_edt_node_2_0,
		mdb__declarative_analyser__revise_analysis_4_0_i7);
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__declarative_analyser__revise_analysis_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__mdb__declarative_analyser__revise_analysis_4_0_i8);
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__declarative_edt__revise_root_3_0,
		mdb__declarative_analyser__revise_analysis_4_0_i10);
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r2, 4) = MR_tempr2;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdb__declarative_analyser__revise_analysis_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,8,6);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(exception__throw_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module28)
	MR_init_entry1(mdb__declarative_analyser__debug_analyser_state_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__debug_analyser_state_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_analyser_state'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__declarative_analyser__debug_analyser_state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__declarative_debugger__decl_bug_0_0);
MR_decl_entry(__Unify___mdb__declarative_debugger__decl_question_1_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module29)
	MR_init_entry1(__Unify___mdb__declarative_analyser__analyser_response_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__analyser_response_1_0);
	MR_init_label8(__Unify___mdb__declarative_analyser__analyser_response_1_0,5,8,6,13,17,44,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_analyser__analyser_response_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i44);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_debugger__decl_bug_0_0,
		__Unify___mdb__declarative_analyser__analyser_response_1_0_i8);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__decl_question_1_0);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_response_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___mdb__declarative_debugger__decl_question_1_0);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_response_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__declarative_debugger__decl_bug_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___mdb__declarative_debugger__decl_question_1_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module30)
	MR_init_entry1(__Compare___mdb__declarative_analyser__analyser_response_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__analyser_response_1_0);
	MR_init_label10(__Compare___mdb__declarative_analyser__analyser_response_1_0,97,7,8,9,10,5,14,17,15,23)
	MR_init_label10(__Compare___mdb__declarative_analyser__analyser_response_1_0,24,12,28,29,30,32,185,26,36,37)
	MR_init_label10(__Compare___mdb__declarative_analyser__analyser_response_1_0,38,34,44,45,46,47,42,51,52,53)
	MR_init_label3(__Compare___mdb__declarative_analyser__analyser_response_1_0,54,55,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_analyser__analyser_response_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i97);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i185);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_debugger__decl_bug_0_0,
		__Compare___mdb__declarative_analyser__analyser_response_1_0_i17);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i57);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_debugger, decl_question);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i185);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i30);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__decl_question_1_0);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i36);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i37);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i185);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i185);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_response_1_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdb__declarative_debugger__decl_question_1_0);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_response_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdb__declarative_edt__search_space_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module31)
	MR_init_entry1(__Unify___mdb__declarative_analyser__analyser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__analyser_state_1_0);
	MR_init_label7(__Unify___mdb__declarative_analyser__analyser_state_1_0,4,6,8,10,12,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_analyser__analyser_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_state_1_0_i17);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(11) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__declarative_edt__search_space_1_0,
		__Unify___mdb__declarative_analyser__analyser_state_1_0_i4);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_state_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_analyser, explicit_tree_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_analyser__analyser_state_1_0_i6);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_state_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdb__declarative_analyser__search_mode_0_0,
		__Unify___mdb__declarative_analyser__analyser_state_1_0_i8);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_state_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdb__declarative_analyser__search_mode_0_0,
		__Unify___mdb__declarative_analyser__analyser_state_1_0_i10);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_state_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_analyser, suspect_and_reason);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_analyser__analyser_state_1_0_i12);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analyser_state_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, subterm_origin);
	MR_tfield(0, MR_r1, 1) = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__analyser_state_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdb__declarative_edt__search_space_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module32)
	MR_init_entry1(__Compare___mdb__declarative_analyser__analyser_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__analyser_state_1_0);
	MR_init_label8(__Compare___mdb__declarative_analyser__analyser_state_1_0,3,2,5,9,13,17,21,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_analyser__analyser_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i3);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i2);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__declarative_edt__search_space_1_0,
		__Compare___mdb__declarative_analyser__analyser_state_1_0_i5);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_analyser, explicit_tree_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_analyser__analyser_state_1_0_i9);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i54);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mdb__declarative_analyser__search_mode_0_0,
		__Compare___mdb__declarative_analyser__analyser_state_1_0_i13);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i54);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___mdb__declarative_analyser__search_mode_0_0,
		__Compare___mdb__declarative_analyser__analyser_state_1_0_i17);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_analyser, suspect_and_reason);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_analyser__analyser_state_1_0_i21);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analyser_state_1_0_i54);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdb__declarative_edt, subterm_origin);
	MR_tfield(0, MR_r1, 1) = MR_sv(11);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__declarative_analyser__analyser_state_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module33)
	MR_init_entry1(__Unify___mdb__declarative_analyser__analysis_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__analysis_type_1_0);
	MR_init_label3(__Unify___mdb__declarative_analyser__analysis_type_1_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_analyser__analysis_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analysis_type_1_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analysis_type_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_analyser__analysis_type_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__analysis_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__analysis_type_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__declarative_analyser__analysis_type_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module34)
	MR_init_entry1(__Compare___mdb__declarative_analyser__analysis_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__analysis_type_1_0);
	MR_init_label4(__Compare___mdb__declarative_analyser__analysis_type_1_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_analyser__analysis_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analysis_type_1_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analysis_type_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analysis_type_1_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_analyser__analysis_type_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analysis_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analysis_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__analysis_type_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__declarative_analyser__analysis_type_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module35)
	MR_init_entry1(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__explicit_tree_type_0_0);
	MR_init_label3(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__explicit_tree_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module36)
	MR_init_entry1(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__explicit_tree_type_0_0);
	MR_init_label4(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__declarative_analyser__explicit_tree_type_0_0,9)
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

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module37)
	MR_init_entry1(__Unify___mdb__declarative_analyser__reason_for_question_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__reason_for_question_0_0);
	MR_init_label10(__Unify___mdb__declarative_analyser__reason_for_question_0_0,5,6,7,8,9,10,11,16,18,47)
	MR_init_label2(__Unify___mdb__declarative_analyser__reason_for_question_0_0,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_analyser__reason_for_question_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i47);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 4);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_r2 = MR_tfield(1, MR_tempr1, 3);
	MR_r3 = MR_tfield(1, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_analyser__reason_for_question_0_0_i16);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___mdb__declarative_analyser__reason_for_question_0_0_i18);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__reason_for_question_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___mdb__declarative_analyser__reason_for_question_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module38)
	MR_init_entry1(__Compare___mdb__declarative_analyser__reason_for_question_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__reason_for_question_0_0);
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,7,8,9,10,11,12,13,5,17,18)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,19,20,21,22,23,15,27,28,29,30)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,31,32,33,25,37,38,39,40,41,42)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,43,35,47,48,49,50,51,52,53,45)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,57,58,59,60,61,286,62,63,55,67)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,68,69,70,71,72,75,79,73,65,88)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,89,90,91,92,93,94,97,101,105,110)
	MR_init_label10(__Compare___mdb__declarative_analyser__reason_for_question_0_0,114,86,124,125,226,126,127,128,129,130)
	MR_init_label5(__Compare___mdb__declarative_analyser__reason_for_question_0_0,231,131,133,137,143)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_analyser__reason_for_question_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i286);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(11);
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i226);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i231);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i29);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i231);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i35);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i40);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i43);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i226);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i45);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i51);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i226);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i55);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i62);
	}
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i226);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i65);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i67);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i70);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i72);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i73);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i75);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i79);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i226);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i86);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i88);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i89);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i92);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i93);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i94);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i226);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
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
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i97);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i101);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i105);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i110);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i114);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i124);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i125);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i126);
	}
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i127);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i128);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i129);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i130);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i131);
	}
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i133);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__reason_for_question_0_0_i137);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__reason_for_question_0_0_i143);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__reason_for_question_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);
MR_decl_entry(__Unify___pair__pair_2_0);
MR_decl_entry(__Unify___mdbcomp__program_representation__arg_pos_0_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module39)
	MR_init_entry1(__Unify___mdb__declarative_analyser__search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__search_mode_0_0);
	MR_init_label10(__Unify___mdb__declarative_analyser__search_mode_0_0,5,8,10,6,32,12,15,17,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__declarative_analyser__search_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i32);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___array__array_1_0,
		__Unify___mdb__declarative_analyser__search_mode_0_0_i8);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___mdb__declarative_analyser__search_mode_0_0_i10);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 4);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__arg_pos_0_0,
		__Unify___mdb__declarative_analyser__search_mode_0_0_i15);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_analyser__search_mode_0_0_i17);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdb__declarative_analyser__search_mode_0_0_i19);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_mode_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___mdb__declarative_analyser__search_mode_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);
MR_decl_entry(__Compare___pair__pair_2_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__arg_pos_0_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module40)
	MR_init_entry1(__Compare___mdb__declarative_analyser__search_mode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__search_mode_0_0);
	MR_init_label10(__Compare___mdb__declarative_analyser__search_mode_0_0,82,7,8,5,12,15,19,13,10,28)
	MR_init_label10(__Compare___mdb__declarative_analyser__search_mode_0_0,29,26,73,33,34,75,35,37,41,45)
	MR_init_label2(__Compare___mdb__declarative_analyser__search_mode_0_0,49,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__declarative_analyser__search_mode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i82);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i7);
	}
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i75);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___array__array_1_0,
		__Compare___mdb__declarative_analyser__search_mode_0_0_i15);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i57);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___mdb__declarative_analyser__search_mode_0_0_i19);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i57);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i73);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i33);
	}
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i35);
	}
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 4);
	MR_tempr6 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
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
		__Compare___mdb__declarative_analyser__search_mode_0_0_i37);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i57);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__arg_pos_0_0,
		__Compare___mdb__declarative_analyser__search_mode_0_0_i41);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i57);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_analyser__search_mode_0_0_i45);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i57);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdb__declarative_analyser__search_mode_0_0_i49);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_mode_0_0_i57);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__search_mode_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module41)
	MR_init_entry1(__Unify___mdb__declarative_analyser__search_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__search_response_0_0);
	MR_init_label7(__Unify___mdb__declarative_analyser__search_response_0_0,5,6,9,7,32,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_analyser__search_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i32);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__declarative_analyser__search_response_0_0_i9);
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr3, 1);
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___mdb__declarative_analyser__reason_for_question_0_0);
	}
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__search_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__declarative_analyser__search_response_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module42)
	MR_init_entry1(__Compare___mdb__declarative_analyser__search_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__search_response_0_0);
	MR_init_label10(__Compare___mdb__declarative_analyser__search_response_0_0,7,8,9,5,13,89,14,15,11,19)
	MR_init_label10(__Compare___mdb__declarative_analyser__search_response_0_0,20,23,27,21,17,36,37,38,41,34)
	MR_init_label7(__Compare___mdb__declarative_analyser__search_response_0_0,47,48,79,49,80,50,52)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_analyser__search_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i89);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(5);
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i14);
	}
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 0);
	MR_r2 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__search_response_0_0_i23);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__declarative_analyser__search_response_0_0_i27);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i52);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_edt, suspect_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i34);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__search_response_0_0_i41);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i52);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__declarative_analyser__reason_for_question_0_0);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i49);
	}
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__search_response_0_0_i50);
	}
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__declarative_analyser__search_response_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module43)
	MR_init_entry1(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__declarative_analyser__suspect_and_reason_0_0);
	MR_init_label2(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0_i6);
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
		MR_GOTO_LAB(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__declarative_analyser__reason_for_question_0_0);
	}
MR_def_label(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__declarative_analyser__suspect_and_reason_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module44)
	MR_init_entry1(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__declarative_analyser__suspect_and_reason_0_0);
	MR_init_label4(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0_i2);
MR_def_label(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__declarative_analyser__suspect_and_reason_0_0_i5);
MR_def_label(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__declarative_analyser__reason_for_question_0_0);
MR_def_label(__Compare___mdb__declarative_analyser__suspect_and_reason_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module45)
	MR_init_entry1(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0);
	MR_init_label1(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__bug_response__655__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0_i2);
MR_def_label(fn__mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__mdb__declarative_edt__get_edt_node_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module46)
	MR_init_entry1(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0);
	MR_init_label1(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__top_down_search__737__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0_i2);
MR_def_label(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__declarative_edt__suspect_correct_or_inadmissible_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__declarative_edt__suspect_inadmissible_2_0);

MR_BEGIN_MODULE(mdb__declarative_analyser_module47)
	MR_init_entry1(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0);
	MR_init_label1(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__top_down_search__740__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0_i2);
MR_def_label(mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__declarative_edt__suspect_inadmissible_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__declarative_analyser_module48)
	MR_init_entry1(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0);
	MR_init_label3(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_middle_weight__1121__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0_i2);
MR_def_label(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdb__declarative_edt__get_weight_2_0,
		mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0_i3);
MR_def_label(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__declarative_analyser_maybe_bunch_0(void)
{
	mdb__declarative_analyser_module0();
	mdb__declarative_analyser_module1();
	mdb__declarative_analyser_module2();
	mdb__declarative_analyser_module3();
	mdb__declarative_analyser_module4();
	mdb__declarative_analyser_module5();
	mdb__declarative_analyser_module6();
	mdb__declarative_analyser_module7();
	mdb__declarative_analyser_module8();
	mdb__declarative_analyser_module9();
	mdb__declarative_analyser_module10();
	mdb__declarative_analyser_module11();
	mdb__declarative_analyser_module12();
	mdb__declarative_analyser_module13();
	mdb__declarative_analyser_module14();
	mdb__declarative_analyser_module15();
	mdb__declarative_analyser_module16();
	mdb__declarative_analyser_module17();
	mdb__declarative_analyser_module18();
	mdb__declarative_analyser_module19();
	mdb__declarative_analyser_module20();
	mdb__declarative_analyser_module21();
	mdb__declarative_analyser_module22();
	mdb__declarative_analyser_module23();
	mdb__declarative_analyser_module24();
	mdb__declarative_analyser_module25();
	mdb__declarative_analyser_module26();
	mdb__declarative_analyser_module27();
	mdb__declarative_analyser_module28();
	mdb__declarative_analyser_module29();
	mdb__declarative_analyser_module30();
	mdb__declarative_analyser_module31();
	mdb__declarative_analyser_module32();
	mdb__declarative_analyser_module33();
	mdb__declarative_analyser_module34();
	mdb__declarative_analyser_module35();
	mdb__declarative_analyser_module36();
	mdb__declarative_analyser_module37();
	mdb__declarative_analyser_module38();
	mdb__declarative_analyser_module39();
}

static void mercury__mdb__declarative_analyser_maybe_bunch_1(void)
{
	mdb__declarative_analyser_module40();
	mdb__declarative_analyser_module41();
	mdb__declarative_analyser_module42();
	mdb__declarative_analyser_module43();
	mdb__declarative_analyser_module44();
	mdb__declarative_analyser_module45();
	mdb__declarative_analyser_module46();
	mdb__declarative_analyser_module47();
	mdb__declarative_analyser_module48();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__declarative_analyser__init(void);
void mercury__mdb__declarative_analyser__init_type_tables(void);
void mercury__mdb__declarative_analyser__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__declarative_analyser__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__declarative_analyser__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__declarative_analyser__init_threadscope_string_table(void);
#endif

void mercury__mdb__declarative_analyser__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__declarative_analyser_maybe_bunch_0();
	mercury__mdb__declarative_analyser_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_response_1,
		mdb__declarative_analyser__analyser_response_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_state_1,
		mdb__declarative_analyser__analyser_state_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_analysis_type_1,
		mdb__declarative_analyser__analysis_type_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
		mdb__declarative_analyser__explicit_tree_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0,
		mdb__declarative_analyser__reason_for_question_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0,
		mdb__declarative_analyser__search_mode_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_search_response_0,
		mdb__declarative_analyser__search_response_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
		mdb__declarative_analyser__suspect_and_reason_0_0);
	mercury__mdb__declarative_analyser__init_debugger();
}

void mercury__mdb__declarative_analyser__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_response_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_analyser_state_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_analysis_type_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_reason_for_question_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_search_mode_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_search_response_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0);
	}
}


void mercury__mdb__declarative_analyser__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__declarative_analyser__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__declarative_analyser);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__declarative_analyser__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__declarative_analyser__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
