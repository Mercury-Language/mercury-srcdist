/*
** Automatically generated from `autopar_reports.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__autopar_reports__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 53 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#include "mdprof_fb.automatic_parallelism.autopar_reports.mh"

#line 56 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 57 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_REPORTS_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_REPORTS_DECL_GUARD

#line 61 "mdprof_fb.automatic_parallelism.autopar_reports.c"
#line 62 "mdprof_fb.automatic_parallelism.autopar_reports.c"

#endif
#line 65 "mdprof_fb.automatic_parallelism.autopar_reports.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__[];
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0, 3,4,5,6,7,8,9,11,17,18)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0, 19,20,10,23,29,30,31,32,33,34)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0, 35)
MR_decl_label1(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0, 4)
MR_decl_label7(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0, 3,31,6,7,5,9,10)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0, 2,5,9,10,11,12,13,14,15,16)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0, 17)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 2,4,6,7,8,9,3,10,11,12)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 13,14,16,18,19,20,21,22,23,24)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 25,27,29,30,31,32,33,34,35,36)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 37,38,39,40,41,42,43,44,45,46)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 47,48,49,50,51,52,53,54,55,56)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 57,58,59,60,61,62,63,64,65,66)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 67,68,69,70,71,74,72,77,78,79)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 80,81,82,84,85,86,87,88,89,90)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 91,92,93,94,95,96,97,98,99,100)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0, 101,102,103,104)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0, 5,7,8,10,28,43,57,84,85,88)
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0, 89,90,91)
MR_decl_label9(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0, 2,3,4,5,6,7,8,9,11)
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0, 2,3,4)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0, 54,4,5,3,12,19,20,8,7,22)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0, 24,25,26,27)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0, 2,5,6,7,8,9,10,11,12,13)
MR_decl_label8(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0, 14,15,16,17,18,19,3,22)
MR_decl_label9(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0, 31,3,9,10,12,13,14,15,16)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0, 2,3,4,5,6)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__63__1_3_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__204__1_1_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__162__1_1_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__302__1_1_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__306__1_2_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__354__1_1_0)
MR_decl_static(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1;
static const struct mercury_type_0 mercury_common_0[10] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunctions_proc),
MR_TAG_COMMON(0,0,0)
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
MR_COMMON(0,2)
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
MR_CTOR1_ADDR(cord, cord),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
MR_TAG_COMMON(0,0,0)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__,
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_2;
static const struct mercury_type_2 mercury_common_2[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(0,6),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,9),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(0,5)
}
},
};

static const struct mercury_type_3 mercury_common_3[8] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__63__1_3_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__354__1_1_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__302__1_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__306__1_2_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__204__1_1_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__162__1_1_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
MR_string_const("no", 2)
},
{
MR_string_const("yes, the more shared variables the less overlap there is", 56)
},
{
MR_string_const("yes, use overlap calculation", 28)
},
{
MR_string_const("yes, pretend they\'re independent", 32)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_1;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,1),
MR_COMMON(0,5)
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal),
MR_COMMON(0,5)
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0))
};


static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"format_var_use_line",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
406,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"format_var_use_line",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
406,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_1 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"lambda_autopar_reports_m_162",
2,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
162,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_2 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"lambda_autopar_reports_m_204",
2,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
204,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.program_representation",
"mdbcomp.program_representation",
"lookup_var_name",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
183,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_2 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"lambda_autopar_reports_m_306",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
306,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_1 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"lambda_autopar_reports_m_302",
2,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
302,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_1 = {
{
MR_FUNCTION,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"lambda_autopar_reports_m_354",
2,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
354,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"create_candidate_parallel_conj_report",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
146,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"create_push_goal_report",
2,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
145,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"create_candidate_parallel_conj_proc_report",
2,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
120,
"94"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_reports",
"mdprof_fb.automatic_parallelism.autopar_reports",
"lambda_autopar_reports_m_63",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_reports",
"autopar_reports.m",
63,
"6"
};


MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module0)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0);
	MR_init_label7(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,3,31,6,7,5,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'best_par_algorithm_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("complete", 8);
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("greedy", 6);
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complete-branches(", 18);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("complete-size(", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,5,7,8,10,28,43,57,84,85,88)
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,89,90,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_feedback_autopar_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(15) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__foldl_4_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_sv(14) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_tfield(0, MR_r2, 4);
	MR_sv(7) = MR_tfield(0, MR_r2, 5);
	MR_sv(8) = MR_tfield(0, MR_r2, 6);
	MR_sv(9) = MR_tfield(0, MR_r2, 7);
	MR_sv(10) = MR_tfield(0, MR_r2, 8);
	MR_sv(11) = MR_tfield(0, MR_r2, 9);
	MR_sv(12) = MR_tfield(0, MR_r2, 10);
	MR_sv(13) = MR_tfield(0, MR_r2, 11);
	MR_r1 = MR_tfield(0, MR_r2, 12);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17, MR_tempr18, MR_tempr19, MR_tempr20, MR_tempr21, MR_tempr22, MR_tempr23, MR_tempr24, MR_tempr25;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_r8 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_r10 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 1);
	MR_r11 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 1);
	MR_r12 = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr11, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr11, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 1);
	MR_r14 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr13, 0) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr14, 0) = MR_tempr13;
	MR_tfield(1, MR_tempr14, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr13;
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = (MR_Word) MR_TAG_COMMON(2,4,0);
	MR_tfield(1, MR_tempr11, 1) = MR_tempr15;
	MR_tag_alloc_heap(MR_tempr16, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr16, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr16, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr17, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr17, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr17, 1) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr18, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr18, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr18, 1) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr19, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr19, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr19, 1) = MR_tempr18;
	MR_tag_alloc_heap(MR_tempr20, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr20, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr20, 1) = MR_tempr19;
	MR_tag_alloc_heap(MR_tempr21, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr21, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr21, 1) = MR_tempr20;
	MR_tag_alloc_heap(MR_tempr22, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr22, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr22, 1) = MR_tempr21;
	MR_tag_alloc_heap(MR_tempr23, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr23, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr23, 1) = MR_tempr22;
	MR_tag_alloc_heap(MR_tempr24, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr24, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr24, 1) = MR_tempr23;
	MR_tag_alloc_heap(MR_tempr25, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr25, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr25, 1) = MR_tempr24;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr25;
	MR_r1 = (MR_Word) MR_string_const("  Candidate parallel conjunctions:\n    Desired parallelism:       %f\n    Intermodule var use:       %s\n    Sparking cost:             %d\n    Sparking delay:    " "        %d\n    Barrier cost:              %d\n    Future signal cost:        %d\n    Future wait cost:          %d\n    Context wakeup delay:      %d\n    Clique th" "reshold:          %d\n    Call site threshold:       %d\n    Speedup threshold:         %f\n    Dependent conjs:           %s\n    BestParAlgorithm:          %s\n   " " # of par procs with conjs: %d\n    # of par conjunctions:     %d\n    Parallel conjunctions:\n\n", 573);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r13 = MR_tfield(1, MR_sv(13), 0);
	if (MR_INT_NE(MR_r13,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,4,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r12;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r10;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_r9;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_r8;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r7;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_r6;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_r5;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_r4;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_r3;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr11;
	MR_r1 = (MR_Word) MR_string_const("  Candidate parallel conjunctions:\n    Desired parallelism:       %f\n    Intermodule var use:       %s\n    Sparking cost:             %d\n    Sparking delay:    " "        %d\n    Barrier cost:              %d\n    Future signal cost:        %d\n    Future wait cost:          %d\n    Context wakeup delay:      %d\n    Clique th" "reshold:          %d\n    Call site threshold:       %d\n    Speedup threshold:         %f\n    Dependent conjs:           %s\n    BestParAlgorithm:          %s\n   " " # of par procs with conjs: %d\n    # of par conjunctions:     %d\n    Parallel conjunctions:\n\n", 573);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r13,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,4,2);
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r12;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r10;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_r9;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_r8;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r7;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_r6;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_r5;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_r4;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_r3;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr11;
	MR_r1 = (MR_Word) MR_string_const("  Candidate parallel conjunctions:\n    Desired parallelism:       %f\n    Intermodule var use:       %s\n    Sparking cost:             %d\n    Sparking delay:    " "        %d\n    Barrier cost:              %d\n    Future signal cost:        %d\n    Future wait cost:          %d\n    Context wakeup delay:      %d\n    Clique th" "reshold:          %d\n    Call site threshold:       %d\n    Speedup threshold:         %f\n    Dependent conjs:           %s\n    BestParAlgorithm:          %s\n   " " # of par procs with conjs: %d\n    # of par conjunctions:     %d\n    Parallel conjunctions:\n\n", 573);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,4,3);
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r12;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r11;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r10;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_r9;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_r8;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_r7;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_r6;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_r5;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr10, 0) = MR_r4;
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr11, 0) = MR_r3;
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr11;
	MR_r1 = (MR_Word) MR_string_const("  Candidate parallel conjunctions:\n    Desired parallelism:       %f\n    Intermodule var use:       %s\n    Sparking cost:             %d\n    Sparking delay:    " "        %d\n    Barrier cost:              %d\n    Future signal cost:        %d\n    Future wait cost:          %d\n    Context wakeup delay:      %d\n    Clique th" "reshold:          %d\n    Call site threshold:       %d\n    Speedup threshold:         %f\n    Dependent conjs:           %s\n    BestParAlgorithm:          %s\n   " " # of par procs with conjs: %d\n    # of par conjunctions:     %d\n    Parallel conjunctions:\n\n", 573);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i85);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i88);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i89);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i90);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0_i91);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__print_proc_label_to_string_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,2,5,9,10,11,12,13,14,15,16)
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_candidate_parallel_conj_proc_report'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(program_representation_utils__print_proc_label_to_string_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("    ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(program_representation_utils__print_goal_to_strings_5_0);
MR_decl_entry(fn__message__indent_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0);
	MR_init_label9(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,31,3,9,10,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_sequential_conjuncts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr5 = MR_r5;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tempr6 = MR_r3;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr6;
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = MR_r6;
	MR_tempr7 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr7, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_tempr7;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(program_representation_utils__print_goal_to_strings_5_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0_i31);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);
MR_decl_entry(fn__message__nl_indent_1_0);
MR_decl_entry(fn__measurement_units__two_decimal_fraction_1_0);
MR_decl_entry(fn__message__nl_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module4)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,2,5,6,7,8,9,10,11,12,13)
	MR_init_label8(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,14,15,16,17,18,19,3,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_sequential_conjunction'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(12) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i3);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% conjunction: ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__message__nl_indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Cost: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__message__nl_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__message__nl_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__snoc_2_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module5)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,54,4,5,3,12,19,20,8,7,22)
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_parallel_conjuncts'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i3);
	}
	MR_sv(8) = MR_r6;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(")\n", 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__cord__snoc_2_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_r7 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr6 = MR_r4;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tempr7 = MR_r3;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr7;
	MR_tempr4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_tfield(0, MR_tempr4, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr7;
	MR_sv(4) = MR_tempr6;
	MR_sv(8) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr4;
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(program_representation_utils__print_goal_to_strings_5_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(8) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r9;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_reports", 47);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_reports.format_parallel_conjuncts\'/7", 87);
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("empty conjunct in parallel conjunction", 38);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i54);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("&\n", 2);
	}
	MR_np_call_localret_ent(fn__cord__snoc_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0_i54);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module6)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0);
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_parallel_conjunction'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_0);
MR_decl_entry(mdbcomp__program_representation__lookup_var_name_3_0);
MR_decl_entry(set__map_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0);
MR_decl_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__cord__from_list_1_0);
MR_decl_entry(fn__measurement_units__commas_1_0);
MR_decl_entry(fn__measurement_units__four_decimal_fraction_1_0);
MR_decl_entry(mdbcomp__goal_path__rev_goal_path_from_string_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module7)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,2,4,6,7,8,9,3,10,11,12)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,13,14,16,18,19,20,21,22,23,24)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,25,27,29,30,31,32,33,34,35,36)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,37,38,39,40,41,42,43,44,45,46)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,47,48,49,50,51,52,53,54,55,56)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,57,58,59,60,61,62,63,64,65,66)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,67,68,69,70,71,74,72,77,78,79)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,80,81,82,84,85,86,87,88,89,90)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,91,92,93,94,95,96,97,98,99,100)
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,101,102,103,104)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_candidate_parallel_conj_report'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
	MR_sv(24) = MR_r1;
	MR_sv(21) = MR_tfield(0, MR_r2, 0);
	MR_sv(16) = MR_tfield(0, MR_r2, 1);
	MR_sv(25) = MR_tfield(0, MR_r2, 3);
	MR_sv(22) = MR_tfield(0, MR_r2, 4);
	MR_sv(23) = MR_tfield(0, MR_r2, 5);
	MR_sv(1) = MR_tfield(0, MR_r2, 6);
	MR_sv(2) = MR_tfield(0, MR_r2, 7);
	MR_sv(3) = MR_tfield(0, MR_r2, 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 9);
	MR_sv(13) = MR_tempr1;
	MR_sv(17) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(26) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(25),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i4);
	}
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_sv(12) = (MR_Word) MR_string_const("no", 2);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__program_representation__lookup_var_name_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(24);
	MR_tempr2 = MR_sv(25);
	MR_sv(25) = MR_r1;
	MR_sv(12) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(12);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(set__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("on ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_float_to_word((MR_word_to_float(MR_sv(10)) + MR_word_to_float(MR_sv(11))));
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("      Path: ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(16),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i16);
	}
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_sv(16) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(20) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", hi ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i21);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i22);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", lo ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("      PushGoal: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i25);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(fn__list__map_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i27);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(20);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(27);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_sv(17) = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__commas_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i35);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(25);
	MR_sv(25) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i37);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__four_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i38);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i39);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i40);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i41);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i42);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i43);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      Total dead time: ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i44);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i45);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      Future dead time: ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i46);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      First conj dead time: ", 29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i49);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      Time saving: ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i50);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i51);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      Speedup: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i52);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i53);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      ParOverheads total: ", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i54);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i55);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      WaitsCost: ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i56);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i57);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      SignalsCost: ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i58);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i59);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      BarrierCost: ", 20);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i60);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i61);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      SparkCost: ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i62);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i63);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      ParTime: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i64);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i65);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      SeqTime: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i66);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i67);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      NumCalls: ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i68);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i69);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("      Dependent: ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i70);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i71);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(21);
	MR_sv(21) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_from_string_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i74);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i72);
	}
	MR_r1 = MR_sv(24);
	MR_r4 = MR_sv(22);
	MR_r5 = MR_sv(23);
	MR_r3 = MR_r2;
	MR_r6 = MR_sv(26);
	MR_r2 = (MR_Integer) 4;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i77);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_reports", 47);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_reports.create_candidate_parallel_conj_report\'/3", 99);
	MR_r3 = (MR_Word) MR_string_const("couldn\'t parse goal path", 24);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i77);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_sv(22) = MR_r4;
	MR_sv(25) = MR_r3;
	MR_sv(26) = MR_r6;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i78);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i79);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = (MR_Word) MR_string_const("Goals before:\n", 14);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i80);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(23);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i81);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i82);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i84);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(26) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(24);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i85);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i86);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = (MR_Word) MR_string_const("Parallel conjunction:\n", 22);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i87);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(23);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i88);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i89);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(25);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i90);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i91);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = (MR_Word) MR_string_const("Goals after:\n", 13);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i92);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(25);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i93);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i94);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_np_call_localret_ent(fn__message__nl_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i95);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_np_call_localret_ent(fn__message__nl_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i96);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__message__nl_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i97);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(25);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i98);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i99);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i100);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i101);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i102);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i103);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0_i104);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(27);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(28);
	MR_decr_sp(28);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module8)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0);
	MR_init_label9(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,2,3,4,5,6,7,8,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_push_goal_report'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", hi ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", lo ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n      PushGoal: ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__from_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module9)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_var_use_line'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__lookup_var_name_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("    ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module10)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,3,4,5,6,7,8,9,11,17,18)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,19,20,10,23,29,30,31,32,33,34)
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = (MR_Word) MR_string_const("above threshold", 15);
	}
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = (MR_Word) MR_string_const("not above threshold", 19);
	MR_np_call_localret_ent(fn__measurement_units__two_decimal_fraction_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cost: ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Productions:", 12);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i19);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i29);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Consumptions:", 13);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i30);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i33);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0_i35);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module11)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__63__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__63__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_feedback_autopar_report__63__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__63__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module12)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__204__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__204__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__create_candidate_parallel_conj_report__204__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__204__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("                %s\n", 19);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module13)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__162__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__162__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__create_push_goal_report__162__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__162__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("        %s\n", 11);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__std_util__id_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module14)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__302__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__302__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__format_parallel_conjuncts__302__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__302__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__std_util__id_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module15)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__306__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__306__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__format_parallel_conjuncts__306__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__306__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r2) + MR_word_to_float(MR_tfield(0, MR_tfield(0, MR_r1, 2), 0))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module16)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__354__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__354__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__format_sequential_conjuncts__354__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__354__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__std_util__id_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_reports_module17)
	MR_init_entry1(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0);
	MR_init_label1(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__count_conjunctions_in_procs__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 2);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_109_100_112_114_111_102_95_102_98_95_95_97_117_116_111_109_97_116_105_99_95_112_97_114_97_108_108_101_108_105_115_109_95_95_97_117_116_111_112_97_114_95_114_101_112_111_114_116_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism__autopar_reports_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism__autopar_reports_module0();
	mdprof_fb__automatic_parallelism__autopar_reports_module1();
	mdprof_fb__automatic_parallelism__autopar_reports_module2();
	mdprof_fb__automatic_parallelism__autopar_reports_module3();
	mdprof_fb__automatic_parallelism__autopar_reports_module4();
	mdprof_fb__automatic_parallelism__autopar_reports_module5();
	mdprof_fb__automatic_parallelism__autopar_reports_module6();
	mdprof_fb__automatic_parallelism__autopar_reports_module7();
	mdprof_fb__automatic_parallelism__autopar_reports_module8();
	mdprof_fb__automatic_parallelism__autopar_reports_module9();
	mdprof_fb__automatic_parallelism__autopar_reports_module10();
	mdprof_fb__automatic_parallelism__autopar_reports_module11();
	mdprof_fb__automatic_parallelism__autopar_reports_module12();
	mdprof_fb__automatic_parallelism__autopar_reports_module13();
	mdprof_fb__automatic_parallelism__autopar_reports_module14();
	mdprof_fb__automatic_parallelism__autopar_reports_module15();
	mdprof_fb__automatic_parallelism__autopar_reports_module16();
	mdprof_fb__automatic_parallelism__autopar_reports_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__autopar_reports__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism__autopar_reports_maybe_bunch_0();
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__, 5) =
			MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism__autopar_reports);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
