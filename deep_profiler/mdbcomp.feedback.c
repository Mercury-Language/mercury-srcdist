/*
** Automatically generated from `feedback.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdbcomp__feedback__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 28 "mdbcomp.feedback.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "mdbcomp.feedback.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "mdbcomp.feedback.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "mdbcomp.feedback.c"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 44 "mdbcomp.feedback.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdbcomp.feedback.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdbcomp.feedback.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 56 "mdbcomp.feedback.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 60 "mdbcomp.feedback.c"
#line 35 "../library/store.int2"
#include "store.mh"

#line 64 "mdbcomp.feedback.c"
#line 65 "mdbcomp.feedback.c"
#include "mdbcomp.feedback.mh"

#line 68 "mdbcomp.feedback.c"
#line 69 "mdbcomp.feedback.c"
#ifndef MDBCOMP__FEEDBACK_DECL_GUARD
#define MDBCOMP__FEEDBACK_DECL_GUARD

#line 73 "mdbcomp.feedback.c"
#line 74 "mdbcomp.feedback.c"

#endif
#line 77 "mdbcomp.feedback.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
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
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0,
	mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0,
	mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_error_0,
	mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_result_1,
	mercury_data_mdbcomp__feedback__type_ctor_info_feedback_type_0,
	mercury_data_mdbcomp__feedback__type_ctor_info_feedback_write_result_0;
MR_decl_label6(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0, 2,4,6,13,11,10)
MR_decl_label3(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0, 2,4,6)
MR_decl_label4(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0, 2,4,6,9)
MR_decl_label1(mdbcomp__feedback__det_insert_feedback_data_3_0, 3)
MR_decl_label1(mdbcomp__feedback__display_read_error_4_0, 2)
MR_decl_label7(mdbcomp__feedback__feedback_data_mismatch_error_3_0, 2,3,4,5,6,7,8)
MR_decl_label1(mdbcomp__feedback__feedback_data_type_2_0, 3)
MR_decl_label8(mdbcomp__feedback__get_feedback_data_2_0, 3,2,4,9,7,12,6,1)
MR_decl_label1(mdbcomp__feedback__maybe_read_5_0, 3)
MR_decl_label2(mdbcomp__feedback__put_feedback_data_3_0, 3,4)
MR_decl_label5(mdbcomp__feedback__read_data_5_0, 3,5,7,10,13)
MR_decl_label10(mdbcomp__feedback__read_error_message_string_3_0, 3,4,5,7,10,11,12,13,9,15)
MR_decl_label5(mdbcomp__feedback__read_error_message_string_3_0, 17,18,19,20,21)
MR_decl_label10(mdbcomp__feedback__read_feedback_file_4_0, 2,4,7,10,11,13,14,22,16,18)
MR_decl_label4(mdbcomp__feedback__read_or_create_5_0, 2,7,4,3)
MR_decl_label6(mdbcomp__feedback__write_feedback_file_6_0, 2,4,7,11,10,9)
MR_decl_label9(mdbcomp__feedback__write_feedback_file_2_6_0, 2,3,4,5,6,7,8,10,11)
MR_decl_label1(fn__mdbcomp__feedback__init_feedback_info_1_0, 2)
MR_decl_label4(__Unify___mdbcomp__feedback__feedback_data_0_0, 23,5,10,1)
MR_decl_label2(__Unify___mdbcomp__feedback__feedback_info_0_0, 6,1)
MR_decl_label8(__Unify___mdbcomp__feedback__feedback_read_error_0_0, 5,6,7,11,15,38,17,1)
MR_decl_label3(__Unify___mdbcomp__feedback__feedback_read_result_1_0, 16,5,1)
MR_decl_label4(__Unify___mdbcomp__feedback__feedback_write_result_0_0, 5,19,6,1)
MR_decl_label9(__Compare___mdbcomp__feedback__feedback_data_0_0, 3,2,9,13,7,5,20,22,80)
MR_decl_label4(__Compare___mdbcomp__feedback__feedback_info_0_0, 3,2,5,21)
MR_decl_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0, 7,8,9,10,11,5,15,137,16,17)
MR_decl_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0, 18,19,13,23,24,25,27,28,21,32)
MR_decl_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0, 33,34,35,37,30,41,42,43,44,47)
MR_decl_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0, 45,39,55,56,57,58,59,53,63,64)
MR_decl_label8(__Compare___mdbcomp__feedback__feedback_read_error_0_0, 65,123,66,67,125,68,70,75)
MR_decl_label5(__Compare___mdbcomp__feedback__feedback_read_result_1_0, 3,2,7,5,10)
MR_decl_label7(__Compare___mdbcomp__feedback__feedback_write_result_0_0, 30,31,5,11,34,9,15)
MR_def_extern_entry(mdbcomp__feedback__feedback_data_type_2_0)
MR_def_extern_entry(mdbcomp__feedback__feedback_data_type_2_1)
MR_def_extern_entry(mdbcomp__feedback__put_feedback_data_3_0)
MR_def_extern_entry(mdbcomp__feedback__feedback_data_mismatch_error_3_0)
MR_def_extern_entry(mdbcomp__feedback__get_feedback_data_2_0)
MR_def_extern_entry(mdbcomp__feedback__get_all_feedback_data_2_0)
MR_def_extern_entry(fn__mdbcomp__feedback__get_feedback_program_name_1_0)
MR_def_extern_entry(mdbcomp__feedback__maybe_read_5_0)
MR_def_extern_entry(mdbcomp__feedback__read_check_line_7_0)
MR_def_extern_entry(fn__mdbcomp__feedback__feedback_first_line_0_0)
MR_def_extern_entry(fn__mdbcomp__feedback__feedback_version_0_0)
MR_def_extern_entry(mdbcomp__feedback__read_feedback_file_4_0)
MR_def_extern_entry(mdbcomp__feedback__read_error_message_string_3_0)
MR_def_extern_entry(fn__mdbcomp__feedback__init_feedback_info_1_0)
MR_def_extern_entry(mdbcomp__feedback__read_or_create_5_0)
MR_def_extern_entry(mdbcomp__feedback__write_feedback_file_6_0)
MR_def_extern_entry(mdbcomp__feedback__read_no_check_line_5_0)
MR_def_extern_entry(mdbcomp__feedback__read_program_name_5_0)
MR_def_extern_entry(mdbcomp__feedback__read_data_5_0)
MR_def_extern_entry(mdbcomp__feedback__det_insert_feedback_data_3_0)
MR_def_extern_entry(mdbcomp__feedback__display_read_error_4_0)
MR_def_extern_entry(mdbcomp__feedback__write_feedback_file_2_6_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__feedback_data_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__feedback_data_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__feedback_info_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__feedback_info_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__feedback_read_error_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__feedback_read_error_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__feedback_read_result_1_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__feedback_read_result_1_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__feedback_type_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__feedback_type_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__feedback_write_result_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__feedback_write_result_0_0)
MR_def_extern_entry(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0)
MR_def_extern_entry(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0)
MR_def_extern_entry(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
1,
MR_string_const("18", 2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__write_feedback_file_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__feedback__write_feedback_file_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_info),
MR_CTOR0_ADDR(unit, unit),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_TAG_COMMON(0,2,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type),
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type),
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_TAG_COMMON(0,2,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__read_data_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__feedback__read_data_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data),
MR_COMMON(4,1),
MR_COMMON(4,1)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(mdbcomp__feedback__det_insert_feedback_data_3_0),
0
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_call_site_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_call_site_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__program_representation__type_ctor_info_call_site_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__field_names_feedback_data_0_0[] = {
	"threshold",
	"stat_measure",
	"calls"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_data_0_0 = {
	"feedback_data_calls_above_threshold_sorted",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_data_0_0,
	mercury_data_mdbcomp__feedback__field_names_feedback_data_0_0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__field_names_feedback_data_0_1[] = {
	"parameters",
	"conjunctions"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_data_0_1 = {
	"feedback_data_candidate_parallel_conjunctions",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_data_0_1,
	mercury_data_mdbcomp__feedback__field_names_feedback_data_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_data_0_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_data_0_1[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_data_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_data_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_name_ordered_feedback_data_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_data_0_0,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_data_0_1
};

const MR_Integer mercury_data_mdbcomp__feedback__functor_number_map_feedback_data_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__feedback_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__feedback_data_0_0)),
	"mdbcomp.feedback",
	"feedback_data",
	{ (void *)mercury_data_mdbcomp__feedback__du_name_ordered_feedback_data_0 },
	{ (void *)mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_data_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__functor_number_map_feedback_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__feedback__type_ctor_info_feedback_type_0mdbcomp__feedback__type_ctor_info_feedback_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_feedback_type_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__feedback__type_ctor_info_feedback_type_0mdbcomp__feedback__type_ctor_info_feedback_data_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__field_names_feedback_info_0_0[] = {
	"fi_program_name",
	"fi_map"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_info_0_0 = {
	"feedback_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_info_0_0,
	mercury_data_mdbcomp__feedback__field_names_feedback_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_info_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_name_ordered_feedback_info_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__functor_number_map_feedback_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__feedback_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__feedback_info_0_0)),
	"mdbcomp.feedback",
	"feedback_info",
	{ (void *)mercury_data_mdbcomp__feedback__du_name_ordered_feedback_info_0 },
	{ (void *)mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_info_0 },
	1,
	4,
	mercury_data_mdbcomp__feedback__functor_number_map_feedback_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_error_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0 = {
	"open_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1 = {
	"read_error",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__field_names_feedback_read_error_0_2[] = {
	"fre_pe_message",
	"fre_pe_line_no"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2 = {
	"parse_error",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_2,
	mercury_data_mdbcomp__feedback__field_names_feedback_read_error_0_2,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3 = {
	"unexpected_eof",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4 = {
	"incorrect_version",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_4,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5 = {
	"incorrect_first_line",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__field_names_feedback_read_error_0_6[] = {
	"fre_ipn_expected",
	"fre_ipn_got"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6 = {
	"incorrect_program_name",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_error_0_6,
	mercury_data_mdbcomp__feedback__field_names_feedback_read_error_0_6,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_name_ordered_feedback_read_error_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3
};

const MR_Integer mercury_data_mdbcomp__feedback__functor_number_map_feedback_read_error_0[] = {
	3,
	5,
	4,
	6,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__feedback_read_error_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__feedback_read_error_0_0)),
	"mdbcomp.feedback",
	"feedback_read_error",
	{ (void *)mercury_data_mdbcomp__feedback__du_name_ordered_feedback_read_error_0 },
	{ (void *)mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0 },
	7,
	4,
	mercury_data_mdbcomp__feedback__functor_number_map_feedback_read_error_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_result_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_result_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_error_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_read_result_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_read_result_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_1[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_read_result_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_name_ordered_feedback_read_result_1[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0
};

const MR_Integer mercury_data_mdbcomp__feedback__functor_number_map_feedback_read_result_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_result_1 = {
	1,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__feedback_read_result_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__feedback_read_result_1_0)),
	"mdbcomp.feedback",
	"feedback_read_result",
	{ (void *)mercury_data_mdbcomp__feedback__du_name_ordered_feedback_read_result_1 },
	{ (void *)mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_read_result_1 },
	2,
	4,
	mercury_data_mdbcomp__feedback__functor_number_map_feedback_read_result_1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__enum_functor_desc_feedback_type_0_0 = {
	"feedback_type_calls_above_threshold_sorted",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__enum_functor_desc_feedback_type_0_1 = {
	"feedback_type_candidate_parallel_conjunctions",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__enum_value_ordered_feedback_type_0[] = {
	&mercury_data_mdbcomp__feedback__enum_functor_desc_feedback_type_0_0,
	&mercury_data_mdbcomp__feedback__enum_functor_desc_feedback_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__enum_name_ordered_feedback_type_0[] = {
	&mercury_data_mdbcomp__feedback__enum_functor_desc_feedback_type_0_0,
	&mercury_data_mdbcomp__feedback__enum_functor_desc_feedback_type_0_1
};

const MR_Integer mercury_data_mdbcomp__feedback__functor_number_map_feedback_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_type_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__feedback_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__feedback_type_0_0)),
	"mdbcomp.feedback",
	"feedback_type",
	{ (void *)mercury_data_mdbcomp__feedback__enum_name_ordered_feedback_type_0 },
	{ (void *)mercury_data_mdbcomp__feedback__enum_value_ordered_feedback_type_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__functor_number_map_feedback_type_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0 = {
	"ok",
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

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_write_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1 = {
	"open_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_write_result_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__field_types_feedback_write_result_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2 = {
	"write_error",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__field_types_feedback_write_result_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__du_name_ordered_feedback_write_result_0[] = {
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1,
	&mercury_data_mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

const MR_Integer mercury_data_mdbcomp__feedback__functor_number_map_feedback_write_result_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_write_result_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__feedback_write_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__feedback_write_result_0_0)),
	"mdbcomp.feedback",
	"feedback_write_result",
	{ (void *)mercury_data_mdbcomp__feedback__du_name_ordered_feedback_write_result_0 },
	{ (void *)mercury_data_mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0 },
	3,
	4,
	mercury_data_mdbcomp__feedback__functor_number_map_feedback_write_result_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__read_data_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.feedback",
"mdbcomp.feedback",
"det_insert_feedback_data",
3,
0
},
"mdbcomp.feedback",
"feedback.m",
388,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__write_feedback_file_6_0_1 = {
{
MR_PREDICATE,
"mdbcomp.feedback",
"mdbcomp.feedback",
"write_feedback_file_2",
6,
0
},
"mdbcomp.feedback",
"feedback.m",
486,
"14"
};



MR_BEGIN_MODULE(mdbcomp__feedback_module0)
	MR_init_entry1(mdbcomp__feedback__feedback_data_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__feedback_data_type_2_0);
	MR_init_label1(mdbcomp__feedback__feedback_data_type_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'feedback_data_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__feedback_data_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__feedback_data_type_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(mdbcomp__feedback__feedback_data_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module1)
	MR_init_entry1(mdbcomp__feedback__feedback_data_type_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__feedback_data_type_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'feedback_data_type'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__feedback_data_type_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdbcomp__feedback__feedback_data_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module2)
	MR_init_entry1(mdbcomp__feedback__put_feedback_data_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__put_feedback_data_3_0);
	MR_init_label2(mdbcomp__feedback__put_feedback_data_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'put_feedback_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__put_feedback_data_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__put_feedback_data_3_0_i3);
	}
	MR_r4 = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_np_call_localret_ent(map__set_4_0,
		mdbcomp__feedback__put_feedback_data_3_0_i4);
MR_def_label(mdbcomp__feedback__put_feedback_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_sv(1) = MR_r2;
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_np_call_localret_ent(map__set_4_0,
		mdbcomp__feedback__put_feedback_data_3_0_i4);
MR_def_label(mdbcomp__feedback__put_feedback_data_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module3)
	MR_init_entry1(mdbcomp__feedback__feedback_data_mismatch_error_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__feedback_data_mismatch_error_3_0);
	MR_init_label7(mdbcomp__feedback__feedback_data_mismatch_error_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'feedback_data_mismatch_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__feedback_data_mismatch_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i2);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i3);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i4);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tData: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i5);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i6);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": Feedback data doesn\'t match type\n\tType: ", 42);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i7);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__feedback_data_mismatch_error_3_0_i8);
MR_def_label(mdbcomp__feedback__feedback_data_mismatch_error_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(builtin__impure_true_0_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module4)
	MR_init_entry1(mdbcomp__feedback__get_feedback_data_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__get_feedback_data_2_0);
	MR_init_label8(mdbcomp__feedback__get_feedback_data_2_0,3,2,4,9,7,12,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_feedback_data'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__get_feedback_data_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__get_feedback_data_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r4 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_GOTO_LAB(mdbcomp__feedback__get_feedback_data_2_0_i2);
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = (MR_Integer) 1;
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(map__search_3_0,
		mdbcomp__feedback__get_feedback_data_2_0_i4);
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__feedback__get_feedback_data_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(mdbcomp__feedback__get_feedback_data_2_0_i9);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__get_feedback_data_2_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__get_feedback_data_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		mdbcomp__feedback__get_feedback_data_2_0_i12);
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_feedback_data/3: ", 21);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__feedback__feedback_data_mismatch_error_3_0,
		mdbcomp__feedback__get_feedback_data_2_0_i6);
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__feedback__get_feedback_data_2_0,1)
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

MR_decl_entry(map__values_2_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module5)
	MR_init_entry1(mdbcomp__feedback__get_all_feedback_data_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__get_all_feedback_data_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_all_feedback_data'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__get_all_feedback_data_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__values_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module6)
	MR_init_entry1(fn__mdbcomp__feedback__get_feedback_program_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__get_feedback_program_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_feedback_program_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__get_feedback_program_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(mdbcomp__feedback_module7)
	MR_init_entry1(mdbcomp__feedback__maybe_read_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__maybe_read_5_0);
	MR_init_label1(mdbcomp__feedback__maybe_read_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_read'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__maybe_read_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__maybe_read_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(mdbcomp__feedback__maybe_read_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdbcomp__feedback__maybe_read_5_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module8)
	MR_init_entry1(mdbcomp__feedback__read_check_line_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_check_line_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_check_line'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_check_line_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module9)
	MR_init_entry1(fn__mdbcomp__feedback__feedback_first_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__feedback_first_line_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'feedback_first_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__feedback_first_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Mercury Compiler Feedback", 25);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module10)
	MR_init_entry1(fn__mdbcomp__feedback__feedback_version_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__feedback_version_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'feedback_version'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__feedback_version_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("18", 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__close_input_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module11)
	MR_init_entry1(mdbcomp__feedback__read_feedback_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_feedback_file_4_0);
	MR_init_label10(mdbcomp__feedback__read_feedback_file_4_0,2,4,7,10,11,13,14,22,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_feedback_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_feedback_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__open_input_4_0,
		mdbcomp__feedback__read_feedback_file_4_0_i2);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_feedback_file_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("Mercury Compiler Feedback", 25);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,
		mdbcomp__feedback__read_feedback_file_4_0_i7);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_feedback_file_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		mdbcomp__feedback__read_feedback_file_4_0_i18);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("18", 2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,
		mdbcomp__feedback__read_feedback_file_4_0_i11);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_feedback_file_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		mdbcomp__feedback__read_feedback_file_4_0_i18);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0,
		mdbcomp__feedback__read_feedback_file_4_0_i14);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_feedback_file_4_0_i16);
	}
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		mdbcomp__feedback__read_feedback_file_4_0_i18);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdbcomp__feedback__read_data_5_0,
		mdbcomp__feedback__read_feedback_file_4_0_i22);
MR_def_label(mdbcomp__feedback__read_feedback_file_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__error_message_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(mdbcomp__feedback_module12)
	MR_init_entry1(mdbcomp__feedback__read_error_message_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_error_message_string_3_0);
	MR_init_label10(mdbcomp__feedback__read_error_message_string_3_0,3,4,5,7,10,11,12,13,9,15)
	MR_init_label5(mdbcomp__feedback__read_error_message_string_3_0,17,18,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_error_message_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_error_message_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_error_message_string_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Incorrect file format", 21);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i20);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_error_message_string_3_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Unexpected end of file", 22);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i20);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_error_message_string_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i19);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_error_message_string_3_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i19);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_error_message_string_3_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i10);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' Got: \'", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i11);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i12);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Expected: \'", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i13);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Program name didn\'t match, is this the right feedback file\?\n", 60);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i19);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_error_message_string_3_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Incorrect file format version; expected ", 40);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i19);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdbcomp__feedback__read_error_message_string_3_0_i17);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" on line ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i18);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i19);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i20);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__feedback__read_error_message_string_3_0_i21);
MR_def_label(mdbcomp__feedback__read_error_message_string_3_0,21)
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

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module13)
	MR_init_entry1(fn__mdbcomp__feedback__init_feedback_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__init_feedback_info_1_0);
	MR_init_label1(fn__mdbcomp__feedback__init_feedback_info_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_feedback_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__init_feedback_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__mdbcomp__feedback__init_feedback_info_1_0_i2);
MR_def_label(fn__mdbcomp__feedback__init_feedback_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module14)
	MR_init_entry1(mdbcomp__feedback__read_or_create_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_or_create_5_0);
	MR_init_label4(mdbcomp__feedback__read_or_create_5_0,2,7,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_or_create'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_or_create_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__feedback__read_feedback_file_4_0,
		mdbcomp__feedback__read_or_create_5_0_i2);
MR_def_label(mdbcomp__feedback__read_or_create_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_or_create_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_or_create_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__feedback__read_or_create_5_0_i7);
MR_def_label(mdbcomp__feedback__read_or_create_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__feedback__read_or_create_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_tempr1) == 0)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_or_create_5_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	}
MR_def_label(mdbcomp__feedback__read_or_create_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(exception__try_io_4_0);
MR_decl_entry(univ__univ_to_type_2_0);
MR_decl_entry(exception__rethrow_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module15)
	MR_init_entry1(mdbcomp__feedback__write_feedback_file_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__write_feedback_file_6_0);
	MR_init_label6(mdbcomp__feedback__write_feedback_file_6_0,2,4,7,11,10,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_feedback_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__write_feedback_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(io__open_output_4_0,
		mdbcomp__feedback__write_feedback_file_6_0_i2);
MR_def_label(mdbcomp__feedback__write_feedback_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__feedback__write_feedback_file_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdbcomp__feedback__write_feedback_file_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__feedback__write_feedback_file_2_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(exception__try_io_4_0,
		mdbcomp__feedback__write_feedback_file_6_0_i7);
MR_def_label(mdbcomp__feedback__write_feedback_file_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__feedback__write_feedback_file_6_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(io, error);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		mdbcomp__feedback__write_feedback_file_6_0_i11);
MR_def_label(mdbcomp__feedback__write_feedback_file_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__feedback__write_feedback_file_6_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mdbcomp__feedback__write_feedback_file_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(exception__rethrow_1_0);
MR_def_label(mdbcomp__feedback__write_feedback_file_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module16)
	MR_init_entry1(mdbcomp__feedback__read_no_check_line_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_no_check_line_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_no_check_line'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_no_check_line_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module17)
	MR_init_entry1(mdbcomp__feedback__read_program_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_program_name_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_program_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_program_name_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_4_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module18)
	MR_init_entry1(mdbcomp__feedback__read_data_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__read_data_5_0);
	MR_init_label5(mdbcomp__feedback__read_data_5_0,3,5,7,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_data'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__read_data_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__read_4_0,
		mdbcomp__feedback__read_data_5_0_i3);
MR_def_label(mdbcomp__feedback__read_data_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_data_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__feedback__read_data_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__feedback__read_data_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(2, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(2, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(mdbcomp__feedback__read_data_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__feedback__read_data_5_0_i10);
MR_def_label(mdbcomp__feedback__read_data_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mdbcomp__feedback__read_data_5_0_i13);
MR_def_label(mdbcomp__feedback__read_data_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module19)
	MR_init_entry1(mdbcomp__feedback__det_insert_feedback_data_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__det_insert_feedback_data_3_0);
	MR_init_label1(mdbcomp__feedback__det_insert_feedback_data_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert_feedback_data'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__det_insert_feedback_data_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__feedback__det_insert_feedback_data_3_0_i3);
	}
	MR_r4 = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_np_tailcall_ent(map__det_insert_4_0);
MR_def_label(mdbcomp__feedback__det_insert_feedback_data_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_np_tailcall_ent(map__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module20)
	MR_init_entry1(mdbcomp__feedback__display_read_error_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__display_read_error_4_0);
	MR_init_label1(mdbcomp__feedback__display_read_error_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'display_read_error'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__display_read_error_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdbcomp__feedback__read_error_message_string_3_0,
		mdbcomp__feedback__display_read_error_4_0_i2);
MR_def_label(mdbcomp__feedback__display_read_error_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__nl_3_0);
MR_decl_entry(io__write_4_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module21)
	MR_init_entry1(mdbcomp__feedback__write_feedback_file_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__write_feedback_file_2_6_0);
	MR_init_label9(mdbcomp__feedback__write_feedback_file_2_6_0,2,3,4,5,6,7,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_feedback_file_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__write_feedback_file_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("Mercury Compiler Feedback", 25);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i2);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__nl_3_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i3);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("18", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i4);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__nl_3_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i5);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i6);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__nl_3_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i7);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(map__values_2_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i8);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i10);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdbcomp__feedback__write_feedback_file_2_6_0_i11);
MR_def_label(mdbcomp__feedback__write_feedback_file_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__close_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module22)
	MR_init_entry1(__Unify___mdbcomp__feedback__feedback_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__feedback_data_0_0);
	MR_init_label4(__Unify___mdbcomp__feedback__feedback_data_0_0,23,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__feedback_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i23);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, call_site);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_data_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__feedback_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,
		__Unify___mdbcomp__feedback__feedback_data_0_0_i10);
MR_def_label(__Unify___mdbcomp__feedback__feedback_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__feedback__feedback_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module23)
	MR_init_entry1(__Compare___mdbcomp__feedback__feedback_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__feedback_data_0_0);
	MR_init_label9(__Compare___mdbcomp__feedback__feedback_data_0_0,3,2,9,13,7,5,20,22,80)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__feedback_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__feedback_data_0_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i80);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__feedback_data_0_0_i13);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i80);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, call_site);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,
		__Compare___mdbcomp__feedback__feedback_data_0_0_i22);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_data_0_0_i80);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_data_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module24)
	MR_init_entry1(__Unify___mdbcomp__feedback__feedback_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__feedback_info_0_0);
	MR_init_label2(__Unify___mdbcomp__feedback__feedback_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__feedback_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_info_0_0_i6);
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
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__feedback_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module25)
	MR_init_entry1(__Compare___mdbcomp__feedback__feedback_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__feedback_info_0_0);
	MR_init_label4(__Compare___mdbcomp__feedback__feedback_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__feedback_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_info_0_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__feedback_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__feedback_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__feedback__feedback_info_0_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__feedback_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_data);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___io__error_0_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module26)
	MR_init_entry1(__Unify___mdbcomp__feedback__feedback_read_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__feedback_read_error_0_0);
	MR_init_label8(__Unify___mdbcomp__feedback__feedback_read_error_0_0,5,6,7,11,15,38,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__feedback_read_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i38);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__error_0_0);
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__error_0_0);
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i15);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_error_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_error_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___io__error_0_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module27)
	MR_init_entry1(__Compare___mdbcomp__feedback__feedback_read_error_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__feedback_read_error_0_0);
	MR_init_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0,7,8,9,10,11,5,15,137,16,17)
	MR_init_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0,18,19,13,23,24,25,27,28,21,32)
	MR_init_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0,33,34,35,37,30,41,42,43,44,47)
	MR_init_label10(__Compare___mdbcomp__feedback__feedback_read_error_0_0,45,39,55,56,57,58,59,53,63,64)
	MR_init_label8(__Compare___mdbcomp__feedback__feedback_read_error_0_0,65,123,66,67,125,68,70,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__feedback_read_error_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i137);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i123);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i16);
	}
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i123);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i25);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___io__error_0_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i125);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i35);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___io__error_0_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i125);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__feedback__feedback_read_error_0_0_i47);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i75);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i123);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i58);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i123);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i65);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i66);
	}
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i67);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i68);
	}
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__feedback__feedback_read_error_0_0_i70);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_error_0_0_i75);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_error_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module28)
	MR_init_entry1(__Unify___mdbcomp__feedback__feedback_read_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__feedback_read_result_1_0);
	MR_init_label3(__Unify___mdbcomp__feedback__feedback_read_result_1_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__feedback_read_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_result_1_0_i16);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_result_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___mdbcomp__feedback__feedback_read_error_0_0);
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_result_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_read_result_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdbcomp__feedback__feedback_read_result_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module29)
	MR_init_entry1(__Compare___mdbcomp__feedback__feedback_read_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__feedback_read_result_1_0);
	MR_init_label5(__Compare___mdbcomp__feedback__feedback_read_result_1_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__feedback_read_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_result_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_result_1_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_result_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_result_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_result_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___mdbcomp__feedback__feedback_read_error_0_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_result_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_read_result_1_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdbcomp__feedback__feedback_read_result_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module30)
	MR_init_entry1(__Unify___mdbcomp__feedback__feedback_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__feedback_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__feedback_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module31)
	MR_init_entry1(__Compare___mdbcomp__feedback__feedback_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__feedback_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__feedback_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module32)
	MR_init_entry1(__Unify___mdbcomp__feedback__feedback_write_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__feedback_write_result_0_0);
	MR_init_label4(__Unify___mdbcomp__feedback__feedback_write_result_0_0,5,19,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__feedback_write_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_write_result_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_write_result_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__feedback_write_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_write_result_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_write_result_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__error_0_0);
MR_def_label(__Unify___mdbcomp__feedback__feedback_write_result_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__feedback_write_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__feedback_write_result_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___io__error_0_0);
MR_def_label(__Unify___mdbcomp__feedback__feedback_write_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module33)
	MR_init_entry1(__Compare___mdbcomp__feedback__feedback_write_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__feedback_write_result_0_0);
	MR_init_label7(__Compare___mdbcomp__feedback__feedback_write_result_0_0,30,31,5,11,34,9,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__feedback_write_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i31);
	}
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i31);
	}
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___io__error_0_0);
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__feedback_write_result_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__feedback_write_result_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_line_as_string_4_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module34)
	MR_init_entry1(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0);
	MR_init_label6(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,2,4,6,13,11,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_check_line__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0_i2);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_sv(1)) == 0)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0_i11);
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0_i13);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0_i10);
	}
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_decr_sp_and_return(3);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback_module35)
	MR_init_entry1(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0);
	MR_init_label3(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_no_check_line__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_decr_sp_and_return(1);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__strip_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback_module36)
	MR_init_entry1(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0);
	MR_init_label4(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0,2,4,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__read_program_name__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0_i2);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_decr_sp_and_return(1);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__strip_1_0,
		f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0_i9);
MR_def_label(f_109_100_98_99_111_109_112_95_95_102_101_101_100_98_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__feedback_maybe_bunch_0(void)
{
	mdbcomp__feedback_module0();
	mdbcomp__feedback_module1();
	mdbcomp__feedback_module2();
	mdbcomp__feedback_module3();
	mdbcomp__feedback_module4();
	mdbcomp__feedback_module5();
	mdbcomp__feedback_module6();
	mdbcomp__feedback_module7();
	mdbcomp__feedback_module8();
	mdbcomp__feedback_module9();
	mdbcomp__feedback_module10();
	mdbcomp__feedback_module11();
	mdbcomp__feedback_module12();
	mdbcomp__feedback_module13();
	mdbcomp__feedback_module14();
	mdbcomp__feedback_module15();
	mdbcomp__feedback_module16();
	mdbcomp__feedback_module17();
	mdbcomp__feedback_module18();
	mdbcomp__feedback_module19();
	mdbcomp__feedback_module20();
	mdbcomp__feedback_module21();
	mdbcomp__feedback_module22();
	mdbcomp__feedback_module23();
	mdbcomp__feedback_module24();
	mdbcomp__feedback_module25();
	mdbcomp__feedback_module26();
	mdbcomp__feedback_module27();
	mdbcomp__feedback_module28();
	mdbcomp__feedback_module29();
	mdbcomp__feedback_module30();
	mdbcomp__feedback_module31();
	mdbcomp__feedback_module32();
	mdbcomp__feedback_module33();
	mdbcomp__feedback_module34();
	mdbcomp__feedback_module35();
	mdbcomp__feedback_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__feedback__init(void);
void mercury__mdbcomp__feedback__init_type_tables(void);
void mercury__mdbcomp__feedback__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__feedback__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdbcomp__feedback__init_threadscope_string_table(void);
#endif

void mercury__mdbcomp__feedback__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__feedback_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0,
		mdbcomp__feedback__feedback_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0,
		mdbcomp__feedback__feedback_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_error_0,
		mdbcomp__feedback__feedback_read_error_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_result_1,
		mdbcomp__feedback__feedback_read_result_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__type_ctor_info_feedback_type_0,
		mdbcomp__feedback__feedback_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__type_ctor_info_feedback_write_result_0,
		mdbcomp__feedback__feedback_write_result_0_0);
	mercury__mdbcomp__feedback__init_debugger();
}

void mercury__mdbcomp__feedback__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__type_ctor_info_feedback_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_error_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__type_ctor_info_feedback_read_result_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__type_ctor_info_feedback_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__type_ctor_info_feedback_write_result_0);
	}
}


void mercury__mdbcomp__feedback__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__feedback__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdbcomp__feedback);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__feedback__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdbcomp__feedback__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
