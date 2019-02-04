/*
** Automatically generated from `coverage.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__coverage__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 27 "coverage.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 31 "coverage.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 35 "coverage.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 39 "coverage.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "coverage.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "coverage.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 51 "coverage.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 55 "coverage.c"
#line 56 "coverage.c"
#include "coverage.mh"

#line 59 "coverage.c"
#line 60 "coverage.c"
#ifndef COVERAGE_DECL_GUARD
#define COVERAGE_DECL_GUARD

#line 64 "coverage.c"
#line 65 "coverage.c"

#endif
#line 68 "coverage.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_coverage__type_ctor_info_coverage_after_0,
	mercury_data_coverage__type_ctor_info_coverage_before_0,
	mercury_data_coverage__type_ctor_info_coverage_info_0,
	mercury_data_coverage__type_ctor_info_coverage_reference_info_0,
	mercury_data_coverage__type_ctor_info_sum_coverage_after_0,
	mercury_data_coverage__type_ctor_info_sum_coverage_before_0;
MR_decl_label1(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0, 2)
MR_decl_label6(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0, 25,29,70,17,22,1)
MR_decl_label9(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0, 40,5,9,8,7,6,13,14,19)
MR_decl_label1(coverage__after_to_before_coverage_2_0, 3)
MR_decl_label8(coverage__check_coverage_regarding_detism_2_0, 3,11,13,58,20,27,33,59)
MR_decl_label6(coverage__conj_annotate_coverage_2_7_0, 5,32,8,9,11,13)
MR_decl_label3(coverage__disj_annotate_coverage_7_0, 2,4,6)
MR_decl_label2(coverage__get_branch_start_coverage_3_0, 3,2)
MR_decl_label3(coverage__get_coverage_before_2_0, 13,7,1)
MR_decl_label2(coverage__get_coverage_before_and_after_3_0, 3,1)
MR_decl_label10(coverage__goal_annotate_coverage_6_0, 23,24,26,27,38,39,44,5,6,22)
MR_decl_label10(coverage__goal_annotate_coverage_6_0, 7,9,13,8,15,16,29,30,32,33)
MR_decl_label10(coverage__goal_annotate_coverage_6_0, 35,36,2,46,50,45,53,54,58,56)
MR_decl_label10(coverage__goal_annotate_coverage_6_0, 60,61,62,63,64,65,66,67,68,70)
MR_decl_label7(coverage__goal_annotate_coverage_6_0, 73,71,75,76,77,78,79)
MR_decl_label10(coverage__ite_annotate_coverage_10_0, 2,3,4,5,6,8,10,11,12,13)
MR_decl_label10(coverage__ite_annotate_coverage_10_0, 17,20,18,22,23,24,25,26,27,28)
MR_decl_label10(coverage__ite_annotate_coverage_10_0, 29,30,31,32,33,34,35,36,37,38)
MR_decl_label10(coverage__ite_annotate_coverage_10_0, 39,40,41,42,43,44,45,46,47,48)
MR_decl_label2(coverage__negation_annotate_coverage_6_0, 2,3)
MR_decl_label5(coverage__procrep_annotate_with_coverage_6_0, 2,3,6,7,10)
MR_decl_label4(coverage__propagate_detism_coverage_3_0, 3,10,5,8)
MR_decl_label3(coverage__scope_annotate_coverage_7_0, 3,4,5)
MR_decl_label4(coverage__sum_switch_case_coverage_3_0, 3,7,5,15)
MR_decl_label10(coverage__switch_annotate_coverage_7_0, 4,6,5,16,18,20,8,21,24,25)
MR_decl_label10(coverage__switch_annotate_coverage_7_0, 26,27,28,29,30,31,32,33,34,36)
MR_decl_label10(coverage__switch_annotate_coverage_2_11_0, 66,5,6,13,12,17,18,20,24,25)
MR_decl_label1(coverage__switch_annotate_coverage_2_11_0, 30)
MR_decl_label4(fn__coverage__construct_before_after_coverage_2_0, 5,3,8,10)
MR_decl_label3(__Unify___coverage__coverage_after_0_0, 10,5,1)
MR_decl_label3(__Unify___coverage__coverage_before_0_0, 10,5,1)
MR_decl_label7(__Unify___coverage__coverage_info_0_0, 13,11,5,17,7,19,1)
MR_decl_label5(__Unify___coverage__coverage_reference_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___coverage__sum_coverage_after_0_0, 10,5,1)
MR_decl_label3(__Unify___coverage__sum_coverage_before_0_0, 10,5,1)
MR_decl_label4(__Compare___coverage__coverage_after_0_0, 18,7,5,9)
MR_decl_label4(__Compare___coverage__coverage_before_0_0, 18,7,5,9)
MR_decl_label10(__Compare___coverage__coverage_info_0_0, 62,68,72,49,54,60,104,5,7,9)
MR_decl_label5(__Compare___coverage__coverage_info_0_0, 77,86,23,87,79)
MR_decl_label6(__Compare___coverage__coverage_reference_info_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___coverage__sum_coverage_after_0_0, 18,7,5,9)
MR_decl_label4(__Compare___coverage__sum_coverage_before_0_0, 18,7,5,9)
MR_def_extern_entry(coverage__get_coverage_before_2_0)
MR_def_extern_entry(coverage__get_coverage_before_and_after_3_0)
MR_decl_static(fn__coverage__construct_before_after_coverage_2_0)
MR_decl_static(coverage__after_to_before_coverage_2_0)
MR_decl_static(coverage__get_branch_start_coverage_3_0)
MR_decl_static(coverage__check_coverage_regarding_detism_2_0)
MR_decl_static(coverage__propagate_detism_coverage_3_0)
MR_decl_static(coverage__goal_annotate_coverage_6_0)
MR_decl_static(coverage__conj_annotate_coverage_6_0)
MR_decl_static(coverage__conj_annotate_coverage_2_7_0)
MR_decl_static(coverage__disj_annotate_coverage_7_0)
MR_decl_static(coverage__switch_annotate_coverage_7_0)
MR_decl_static(coverage__switch_annotate_coverage_2_11_0)
MR_decl_static(coverage__ite_annotate_coverage_10_0)
MR_decl_static(coverage__negation_annotate_coverage_6_0)
MR_decl_static(coverage__scope_annotate_coverage_7_0)
MR_def_extern_entry(coverage__procrep_annotate_with_coverage_6_0)
MR_decl_static(coverage__sum_switch_case_coverage_3_0)
MR_decl_static(__Unify___coverage__coverage_after_0_0)
MR_decl_static(__Compare___coverage__coverage_after_0_0)
MR_decl_static(__Unify___coverage__coverage_before_0_0)
MR_decl_static(__Compare___coverage__coverage_before_0_0)
MR_def_extern_entry(__Unify___coverage__coverage_info_0_0)
MR_def_extern_entry(__Compare___coverage__coverage_info_0_0)
MR_decl_static(__Unify___coverage__coverage_reference_info_0_0)
MR_decl_static(__Compare___coverage__coverage_reference_info_0_0)
MR_decl_static(__Unify___coverage__sum_coverage_after_0_0)
MR_decl_static(__Compare___coverage__sum_coverage_after_0_0)
MR_decl_static(__Unify___coverage__sum_coverage_before_0_0)
MR_decl_static(__Compare___coverage__sum_coverage_before_0_0)
MR_decl_static(coverage__IntroducedFrom__pred__procrep_annotate_with_coverage__122__1_2_0)
MR_decl_static(coverage__IntroducedFrom__pred__goal_annotate_coverage__199__1_2_0)
MR_decl_static(coverage__IntroducedFrom__pred__after_count_from_either_source__960__1_2_0)
MR_decl_static(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0)
MR_decl_static(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0)
MR_decl_static(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__coverage__goal_annotate_coverage_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_before_0;
static const MR_UserClosureId
mercury_data__closure_layout__coverage__goal_annotate_coverage_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__coverage__procrep_annotate_with_coverage_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_after_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__coverage__goal_annotate_coverage_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(coverage, coverage_before),
MR_CTOR0_ADDR(coverage, coverage_before)
},
{
(MR_Word *) &mercury_data__closure_layout__coverage__goal_annotate_coverage_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__coverage__procrep_annotate_with_coverage_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(coverage, coverage_after),
MR_CTOR0_ADDR(coverage, coverage_after)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_case_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, case_rep),
MR_CTOR0_ADDR(coverage, coverage_info)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,2,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__coverage__switch_annotate_coverage_7_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__coverage__switch_annotate_coverage_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,2),
MR_COMMON(2,3),
MR_COMMON(2,3)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(coverage__sum_switch_case_coverage_3_0),
0
},
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_after_0_0 = {
	"after_unknown",
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

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_after_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_after_0_1 = {
	"after_known",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_after_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_after_0_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_after_0_0

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_after_0_1[] = {
	&mercury_data_coverage__du_functor_desc_coverage_after_0_1

};

const MR_DuPtagLayout mercury_data_coverage__du_ptag_ordered_coverage_after_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_coverage__du_stag_ordered_coverage_after_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_coverage_after_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_name_ordered_coverage_after_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_after_0_1,
	&mercury_data_coverage__du_functor_desc_coverage_after_0_0
};

const MR_Integer mercury_data_coverage__functor_number_map_coverage_after_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_after_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___coverage__coverage_after_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___coverage__coverage_after_0_0)),
	"coverage",
	"coverage_after",
	{ (void *)mercury_data_coverage__du_name_ordered_coverage_after_0 },
	{ (void *)mercury_data_coverage__du_ptag_ordered_coverage_after_0 },
	2,
	4,
	mercury_data_coverage__functor_number_map_coverage_after_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_before_0_0 = {
	"before_unknown",
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

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_before_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_before_0_1 = {
	"before_known",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_before_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_before_0_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_before_0_0

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_before_0_1[] = {
	&mercury_data_coverage__du_functor_desc_coverage_before_0_1

};

const MR_DuPtagLayout mercury_data_coverage__du_ptag_ordered_coverage_before_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_coverage__du_stag_ordered_coverage_before_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_coverage_before_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_name_ordered_coverage_before_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_before_0_1,
	&mercury_data_coverage__du_functor_desc_coverage_before_0_0
};

const MR_Integer mercury_data_coverage__functor_number_map_coverage_before_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_before_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___coverage__coverage_before_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___coverage__coverage_before_0_0)),
	"coverage",
	"coverage_before",
	{ (void *)mercury_data_coverage__du_name_ordered_coverage_before_0 },
	{ (void *)mercury_data_coverage__du_ptag_ordered_coverage_before_0 },
	2,
	4,
	mercury_data_coverage__functor_number_map_coverage_before_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_info_0_0 = {
	"coverage_unknown",
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

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_info_0_1 = {
	"coverage_known_same",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_info_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_info_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_info_0_2 = {
	"coverage_known",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_info_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_info_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_info_0_3 = {
	"coverage_known_before",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_info_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_info_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_info_0_4 = {
	"coverage_known_after",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_info_0_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_info_0_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_info_0_1[] = {
	&mercury_data_coverage__du_functor_desc_coverage_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_info_0_2[] = {
	&mercury_data_coverage__du_functor_desc_coverage_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_info_0_3[] = {
	&mercury_data_coverage__du_functor_desc_coverage_info_0_3,
	&mercury_data_coverage__du_functor_desc_coverage_info_0_4

};

const MR_DuPtagLayout mercury_data_coverage__du_ptag_ordered_coverage_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_coverage__du_stag_ordered_coverage_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_coverage_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_coverage_info_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_coverage__du_stag_ordered_coverage_info_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_name_ordered_coverage_info_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_info_0_2,
	&mercury_data_coverage__du_functor_desc_coverage_info_0_4,
	&mercury_data_coverage__du_functor_desc_coverage_info_0_3,
	&mercury_data_coverage__du_functor_desc_coverage_info_0_1,
	&mercury_data_coverage__du_functor_desc_coverage_info_0_0
};

const MR_Integer mercury_data_coverage__functor_number_map_coverage_info_0[] = {
	4,
	3,
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___coverage__coverage_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___coverage__coverage_info_0_0)),
	"coverage",
	"coverage_info",
	{ (void *)mercury_data_coverage__du_name_ordered_coverage_info_0 },
	{ (void *)mercury_data_coverage__du_ptag_ordered_coverage_info_0 },
	5,
	4,
	mercury_data_coverage__functor_number_map_coverage_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0report__type_ctor_info_call_site_perf_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_report__type_ctor_info_call_site_perf_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_coverage_point_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0profile__type_ctor_info_coverage_point_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_coverage_point_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;

const MR_PseudoTypeInfo mercury_data_coverage__field_types_coverage_reference_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0report__type_ctor_info_call_site_perf_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0profile__type_ctor_info_coverage_point_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_goal_path_0profile__type_ctor_info_coverage_point_0
};

const MR_ConstString mercury_data_coverage__field_names_coverage_reference_info_0_0[] = {
	"cri_proc",
	"cri_call_sites",
	"cri_solns_coverage_points",
	"cri_branch_coverage_points"
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_coverage_reference_info_0_0 = {
	"coverage_reference_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_coverage_reference_info_0_0,
	mercury_data_coverage__field_names_coverage_reference_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_coverage_reference_info_0_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_reference_info_0_0

};

const MR_DuPtagLayout mercury_data_coverage__du_ptag_ordered_coverage_reference_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_coverage_reference_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_name_ordered_coverage_reference_info_0[] = {
	&mercury_data_coverage__du_functor_desc_coverage_reference_info_0_0
};

const MR_Integer mercury_data_coverage__functor_number_map_coverage_reference_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_reference_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___coverage__coverage_reference_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___coverage__coverage_reference_info_0_0)),
	"coverage",
	"coverage_reference_info",
	{ (void *)mercury_data_coverage__du_name_ordered_coverage_reference_info_0 },
	{ (void *)mercury_data_coverage__du_ptag_ordered_coverage_reference_info_0 },
	1,
	4,
	mercury_data_coverage__functor_number_map_coverage_reference_info_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_sum_coverage_after_0_0 = {
	"sum_after_unknown",
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

const MR_PseudoTypeInfo mercury_data_coverage__field_types_sum_coverage_after_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_sum_coverage_after_0_1 = {
	"sum_after_known",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_sum_coverage_after_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_sum_coverage_after_0_0[] = {
	&mercury_data_coverage__du_functor_desc_sum_coverage_after_0_0

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_sum_coverage_after_0_1[] = {
	&mercury_data_coverage__du_functor_desc_sum_coverage_after_0_1

};

const MR_DuPtagLayout mercury_data_coverage__du_ptag_ordered_sum_coverage_after_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_coverage__du_stag_ordered_sum_coverage_after_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_sum_coverage_after_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_name_ordered_sum_coverage_after_0[] = {
	&mercury_data_coverage__du_functor_desc_sum_coverage_after_0_1,
	&mercury_data_coverage__du_functor_desc_sum_coverage_after_0_0
};

const MR_Integer mercury_data_coverage__functor_number_map_sum_coverage_after_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_sum_coverage_after_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___coverage__sum_coverage_after_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___coverage__sum_coverage_after_0_0)),
	"coverage",
	"sum_coverage_after",
	{ (void *)mercury_data_coverage__du_name_ordered_sum_coverage_after_0 },
	{ (void *)mercury_data_coverage__du_ptag_ordered_sum_coverage_after_0 },
	2,
	4,
	mercury_data_coverage__functor_number_map_sum_coverage_after_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_sum_coverage_before_0_0 = {
	"sum_before_unknown",
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

const MR_PseudoTypeInfo mercury_data_coverage__field_types_sum_coverage_before_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_coverage__du_functor_desc_sum_coverage_before_0_1 = {
	"sum_before_known",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_coverage__field_types_sum_coverage_before_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_sum_coverage_before_0_0[] = {
	&mercury_data_coverage__du_functor_desc_sum_coverage_before_0_0

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_stag_ordered_sum_coverage_before_0_1[] = {
	&mercury_data_coverage__du_functor_desc_sum_coverage_before_0_1

};

const MR_DuPtagLayout mercury_data_coverage__du_ptag_ordered_sum_coverage_before_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_coverage__du_stag_ordered_sum_coverage_before_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_coverage__du_stag_ordered_sum_coverage_before_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_coverage__du_name_ordered_sum_coverage_before_0[] = {
	&mercury_data_coverage__du_functor_desc_sum_coverage_before_0_1,
	&mercury_data_coverage__du_functor_desc_sum_coverage_before_0_0
};

const MR_Integer mercury_data_coverage__functor_number_map_sum_coverage_before_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_sum_coverage_before_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___coverage__sum_coverage_before_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___coverage__sum_coverage_before_0_0)),
	"coverage",
	"sum_coverage_before",
	{ (void *)mercury_data_coverage__du_name_ordered_sum_coverage_before_0 },
	{ (void *)mercury_data_coverage__du_ptag_ordered_sum_coverage_before_0 },
	2,
	4,
	mercury_data_coverage__functor_number_map_sum_coverage_before_0
};


static const MR_UserClosureId
mercury_data__closure_layout__coverage__procrep_annotate_with_coverage_6_0_1 = {
{
MR_PREDICATE,
"coverage",
"coverage",
"lambda_coverage_m_122",
2,
0
},
"coverage",
"coverage.m",
122,
"d1;c7;q;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__coverage__switch_annotate_coverage_7_0_1 = {
{
MR_PREDICATE,
"coverage",
"coverage",
"sum_switch_case_coverage",
3,
0
},
"coverage",
"coverage.m",
715,
"c8;q;?;s2-2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__coverage__goal_annotate_coverage_6_0_2 = {
{
MR_PREDICATE,
"coverage",
"coverage",
"lambda_coverage_m_960",
2,
0
},
"coverage",
"coverage.m",
960,
"c3;t;c4;s1-2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__coverage__goal_annotate_coverage_6_0_1 = {
{
MR_PREDICATE,
"coverage",
"coverage",
"lambda_coverage_m_199",
2,
0
},
"coverage",
"coverage.m",
199,
"c2;s1-7;c3;s2-13;t;c4;"
};



MR_BEGIN_MODULE(coverage_module0)
	MR_init_entry1(coverage__get_coverage_before_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__get_coverage_before_2_0);
	MR_init_label3(coverage__get_coverage_before_2_0,13,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_coverage_before'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__coverage__get_coverage_before_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(coverage__get_coverage_before_2_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(coverage__get_coverage_before_2_0_i13);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(coverage__get_coverage_before_2_0_i1);
	}
	}
MR_def_label(coverage__get_coverage_before_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_mask_field(MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(coverage__get_coverage_before_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(coverage__get_coverage_before_2_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(coverage__get_coverage_before_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module1)
	MR_init_entry1(coverage__get_coverage_before_and_after_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__get_coverage_before_and_after_3_0);
	MR_init_label2(coverage__get_coverage_before_and_after_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_coverage_before_and_after'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__coverage__get_coverage_before_and_after_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(coverage__get_coverage_before_and_after_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(coverage__get_coverage_before_and_after_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(coverage__get_coverage_before_and_after_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(coverage__get_coverage_before_and_after_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module2)
	MR_init_entry1(fn__coverage__construct_before_after_coverage_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__coverage__construct_before_after_coverage_2_0);
	MR_init_label4(fn__coverage__construct_before_after_coverage_2_0,5,3,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'construct_before_after_coverage'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__coverage__construct_before_after_coverage_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__coverage__construct_before_after_coverage_2_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__coverage__construct_before_after_coverage_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__coverage__construct_before_after_coverage_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_proceed();
	}
MR_def_label(fn__coverage__construct_before_after_coverage_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__coverage__construct_before_after_coverage_2_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__coverage__construct_before_after_coverage_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if ((MR_tempr1 != MR_r4)) {
		MR_GOTO_LAB(fn__coverage__construct_before_after_coverage_2_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__coverage__construct_before_after_coverage_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_tfield(2, MR_tempr1, 1) = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module3)
	MR_init_entry1(coverage__after_to_before_coverage_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__after_to_before_coverage_2_0);
	MR_init_label1(coverage__after_to_before_coverage_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'after_to_before_coverage'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__after_to_before_coverage_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(coverage__after_to_before_coverage_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(coverage__after_to_before_coverage_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(coverage_module4)
	MR_init_entry1(coverage__get_branch_start_coverage_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__get_branch_start_coverage_3_0);
	MR_init_label2(coverage__get_branch_start_coverage_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_branch_start_coverage'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__get_branch_start_coverage_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		coverage__get_branch_start_coverage_3_0_i3);
MR_def_label(coverage__get_branch_start_coverage_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__get_branch_start_coverage_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_decr_sp_and_return(1);
MR_def_label(coverage__get_branch_start_coverage_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module5)
	MR_init_entry1(coverage__check_coverage_regarding_detism_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__check_coverage_regarding_detism_2_0);
	MR_init_label8(coverage__check_coverage_regarding_detism_2_0,3,11,13,58,20,27,33,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_coverage_regarding_detism'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__check_coverage_regarding_detism_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i3) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i11) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i58) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i58) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i11) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i3) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i20) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i20));
MR_def_label(coverage__check_coverage_regarding_detism_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(coverage__check_coverage_regarding_detism_2_0_i58);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(coverage__check_coverage_regarding_detism_2_0_i13);
	}
	MR_r1 = (MR_tempr1 == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(coverage__check_coverage_regarding_detism_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),2)) {
		MR_GOTO_LAB(coverage__check_coverage_regarding_detism_2_0_i13);
	}
	MR_GOTO_LAB(coverage__check_coverage_regarding_detism_2_0_i58);
MR_def_label(coverage__check_coverage_regarding_detism_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(2, MR_tempr3, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 >= (MR_Integer) MR_tempr2);
	MR_proceed();
	}
MR_def_label(coverage__check_coverage_regarding_detism_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(coverage__check_coverage_regarding_detism_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i58) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i27) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i59) MR_AND
		MR_LABEL_AP(coverage__check_coverage_regarding_detism_2_0_i33));
MR_def_label(coverage__check_coverage_regarding_detism_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(coverage__check_coverage_regarding_detism_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(coverage__check_coverage_regarding_detism_2_0_i58);
	}
MR_def_label(coverage__check_coverage_regarding_detism_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_mask_field(MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module6)
	MR_init_entry1(coverage__propagate_detism_coverage_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__propagate_detism_coverage_3_0);
	MR_init_label4(coverage__propagate_detism_coverage_3_0,3,10,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_detism_coverage'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__propagate_detism_coverage_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i3) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i10) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i10) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i10) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i10) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i3) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i8) MR_AND
		MR_LABEL_AP(coverage__propagate_detism_coverage_3_0_i8));
MR_def_label(coverage__propagate_detism_coverage_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(coverage__propagate_detism_coverage_3_0_i5);
	}
MR_def_label(coverage__propagate_detism_coverage_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(coverage__propagate_detism_coverage_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(coverage__propagate_detism_coverage_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__require_2_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(fn__string__string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0;

MR_BEGIN_MODULE(coverage_module7)
	MR_init_entry1(coverage__goal_annotate_coverage_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__goal_annotate_coverage_6_0);
	MR_init_label10(coverage__goal_annotate_coverage_6_0,23,24,26,27,38,39,44,5,6,22)
	MR_init_label10(coverage__goal_annotate_coverage_6_0,7,9,13,8,15,16,29,30,32,33)
	MR_init_label10(coverage__goal_annotate_coverage_6_0,35,36,2,46,50,45,53,54,58,56)
	MR_init_label10(coverage__goal_annotate_coverage_6_0,60,61,62,63,64,65,66,67,68,70)
	MR_init_label7(coverage__goal_annotate_coverage_6_0,73,71,75,76,77,78,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_annotate_coverage'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__goal_annotate_coverage_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(0, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i23) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i26) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i38) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i44));
MR_def_label(coverage__goal_annotate_coverage_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_r4 = MR_tfield(0, MR_r5, 0);
	MR_np_call_localret_ent(coverage__conj_annotate_coverage_6_0,
		coverage__goal_annotate_coverage_6_0_i24);
MR_def_label(coverage__goal_annotate_coverage_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
MR_def_label(coverage__goal_annotate_coverage_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(coverage__disj_annotate_coverage_7_0,
		coverage__goal_annotate_coverage_6_0_i27);
MR_def_label(coverage__goal_annotate_coverage_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
MR_def_label(coverage__goal_annotate_coverage_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(2, MR_r5, 2);
	}
	MR_np_call_localret_ent(coverage__switch_annotate_coverage_7_0,
		coverage__goal_annotate_coverage_6_0_i39);
MR_def_label(coverage__goal_annotate_coverage_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i29);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i32);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i35);
	}
	MR_r6 = MR_tfield(3, MR_tempr2, 4);
	if (MR_INT_EQ(MR_tag(MR_r6),3)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i22);
	}
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(coverage__propagate_detism_coverage_3_0,
		coverage__goal_annotate_coverage_6_0_i6);
MR_def_label(coverage__goal_annotate_coverage_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
MR_def_label(coverage__goal_annotate_coverage_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r6, 0),
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i7) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i7) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i7) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5) MR_AND
		MR_LABEL_AP(coverage__goal_annotate_coverage_6_0_i5));
MR_def_label(coverage__goal_annotate_coverage_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		coverage__goal_annotate_coverage_6_0_i9);
MR_def_label(coverage__goal_annotate_coverage_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(coverage__IntroducedFrom__pred__goal_annotate_coverage__199__1_2_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = (MR_Word) MR_string_const("Coverage before call doesn\'t match calls port on call site", 58);
	}
	MR_np_call_localret_ent(require__require_2_0,
		coverage__goal_annotate_coverage_6_0_i13);
MR_def_label(coverage__goal_annotate_coverage_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_tempr1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		coverage__goal_annotate_coverage_6_0_i15);
MR_def_label(coverage__goal_annotate_coverage_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Couldn\'t look up call site for port counts GP: ", 47);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i16);
MR_def_label(coverage__goal_annotate_coverage_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		coverage__goal_annotate_coverage_6_0_i2);
MR_def_label(coverage__goal_annotate_coverage_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_tfield(3, MR_r5, 2);
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(coverage__ite_annotate_coverage_10_0,
		coverage__goal_annotate_coverage_6_0_i30);
MR_def_label(coverage__goal_annotate_coverage_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_r4;
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(coverage__negation_annotate_coverage_6_0,
		coverage__goal_annotate_coverage_6_0_i33);
MR_def_label(coverage__goal_annotate_coverage_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i2);
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_r5, 2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(coverage__scope_annotate_coverage_7_0,
		coverage__goal_annotate_coverage_6_0_i36);
MR_def_label(coverage__goal_annotate_coverage_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(map__search_3_0,
		coverage__goal_annotate_coverage_6_0_i46);
MR_def_label(coverage__goal_annotate_coverage_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i50);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i53);
	}
MR_def_label(coverage__goal_annotate_coverage_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(coverage__IntroducedFrom__pred__after_count_from_either_source__960__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_sv(4), 0);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("after_count_from_either_source: mismatch", 40);
	}
	MR_np_call_localret_ent(require__require_2_0,
		coverage__goal_annotate_coverage_6_0_i45);
MR_def_label(coverage__goal_annotate_coverage_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
MR_def_label(coverage__goal_annotate_coverage_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__coverage__construct_before_after_coverage_2_0,
		coverage__goal_annotate_coverage_6_0_i54);
MR_def_label(coverage__goal_annotate_coverage_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_sv(6) = MR_tempr2;
	}
	MR_np_call_localret_ent(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0,
		coverage__goal_annotate_coverage_6_0_i58);
MR_def_label(coverage__goal_annotate_coverage_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i56);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i70);
MR_def_label(coverage__goal_annotate_coverage_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__goal_annotate_coverage_6_0_i60);
MR_def_label(coverage__goal_annotate_coverage_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		coverage__goal_annotate_coverage_6_0_i61);
MR_def_label(coverage__goal_annotate_coverage_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, string_proc_label);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__goal_annotate_coverage_6_0_i62);
MR_def_label(coverage__goal_annotate_coverage_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i63);
MR_def_label(coverage__goal_annotate_coverage_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tProc: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i64);
MR_def_label(coverage__goal_annotate_coverage_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i65);
MR_def_label(coverage__goal_annotate_coverage_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tGoalPath: ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i66);
MR_def_label(coverage__goal_annotate_coverage_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i67);
MR_def_label(coverage__goal_annotate_coverage_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_coverage_complete failed\n\tCoverage: ", 42);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i68);
MR_def_label(coverage__goal_annotate_coverage_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		coverage__goal_annotate_coverage_6_0_i70);
MR_def_label(coverage__goal_annotate_coverage_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(coverage__check_coverage_regarding_detism_2_0,
		coverage__goal_annotate_coverage_6_0_i73);
MR_def_label(coverage__goal_annotate_coverage_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__goal_annotate_coverage_6_0_i71);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(coverage__goal_annotate_coverage_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__goal_annotate_coverage_6_0_i75);
MR_def_label(coverage__goal_annotate_coverage_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, detism_rep);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__goal_annotate_coverage_6_0_i76);
MR_def_label(coverage__goal_annotate_coverage_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i77);
MR_def_label(coverage__goal_annotate_coverage_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i78);
MR_def_label(coverage__goal_annotate_coverage_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_coverage_regarding_detism failed: ", 40);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__goal_annotate_coverage_6_0_i79);
MR_def_label(coverage__goal_annotate_coverage_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module8)
	MR_init_entry1(coverage__conj_annotate_coverage_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__conj_annotate_coverage_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_annotate_coverage'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__conj_annotate_coverage_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(coverage__conj_annotate_coverage_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0);

MR_BEGIN_MODULE(coverage_module9)
	MR_init_entry1(coverage__conj_annotate_coverage_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__conj_annotate_coverage_2_7_0);
	MR_init_label6(coverage__conj_annotate_coverage_2_7_0,5,32,8,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_annotate_coverage_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__conj_annotate_coverage_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(coverage__conj_annotate_coverage_2_7_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(coverage__conj_annotate_coverage_2_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(coverage__conj_annotate_coverage_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r4, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(coverage__conj_annotate_coverage_2_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__conj_annotate_coverage_2_7_0_i8);
MR_def_label(coverage__conj_annotate_coverage_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__conj_annotate_coverage_2_7_0_i9);
MR_def_label(coverage__conj_annotate_coverage_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(coverage__conj_annotate_coverage_2_7_0_i11);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(coverage__conj_annotate_coverage_2_7_0,
		coverage__conj_annotate_coverage_2_7_0_i13);
MR_def_label(coverage__conj_annotate_coverage_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(coverage__conj_annotate_coverage_2_7_0,
		coverage__conj_annotate_coverage_2_7_0_i13);
MR_def_label(coverage__conj_annotate_coverage_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__detism_get_solutions_1_0);

MR_BEGIN_MODULE(coverage_module10)
	MR_init_entry1(coverage__disj_annotate_coverage_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__disj_annotate_coverage_7_0);
	MR_init_label3(coverage__disj_annotate_coverage_7_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_annotate_coverage'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__disj_annotate_coverage_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__detism_get_solutions_1_0,
		coverage__disj_annotate_coverage_7_0_i2);
MR_def_label(coverage__disj_annotate_coverage_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,
		coverage__disj_annotate_coverage_7_0_i4);
MR_def_label(coverage__disj_annotate_coverage_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(coverage__disj_annotate_coverage_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(coverage__disj_annotate_coverage_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0;

MR_BEGIN_MODULE(coverage_module11)
	MR_init_entry1(coverage__switch_annotate_coverage_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__switch_annotate_coverage_7_0);
	MR_init_label10(coverage__switch_annotate_coverage_7_0,4,6,5,16,18,20,8,21,24,25)
	MR_init_label10(coverage__switch_annotate_coverage_7_0,26,27,28,29,30,31,32,33,34,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_annotate_coverage'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__switch_annotate_coverage_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r4 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(coverage__switch_annotate_coverage_2_11_0,
		coverage__switch_annotate_coverage_7_0_i4);
MR_def_label(coverage__switch_annotate_coverage_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(coverage__switch_annotate_coverage_7_0_i5);
MR_def_label(coverage__switch_annotate_coverage_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_r3;
MR_def_label(coverage__switch_annotate_coverage_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_7_0_i36);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_np_call_localret_ent(list__foldl_4_0,
		coverage__switch_annotate_coverage_7_0_i16);
MR_def_label(coverage__switch_annotate_coverage_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_7_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(coverage__switch_annotate_coverage_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_7_0_i20);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(coverage__switch_annotate_coverage_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_7_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
MR_def_label(coverage__switch_annotate_coverage_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, switch_can_fail_rep);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__switch_annotate_coverage_7_0_i21);
MR_def_label(coverage__switch_annotate_coverage_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__switch_annotate_coverage_7_0_i24);
MR_def_label(coverage__switch_annotate_coverage_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_before);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__switch_annotate_coverage_7_0_i25);
MR_def_label(coverage__switch_annotate_coverage_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_after);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__switch_annotate_coverage_7_0_i26);
MR_def_label(coverage__switch_annotate_coverage_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i27);
MR_def_label(coverage__switch_annotate_coverage_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", After: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i28);
MR_def_label(coverage__switch_annotate_coverage_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i29);
MR_def_label(coverage__switch_annotate_coverage_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tBefore: ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i30);
MR_def_label(coverage__switch_annotate_coverage_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i31);
MR_def_label(coverage__switch_annotate_coverage_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tCases: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i32);
MR_def_label(coverage__switch_annotate_coverage_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i33);
MR_def_label(coverage__switch_annotate_coverage_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_switch_coverage failed\n\tCanFail: ", 39);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__switch_annotate_coverage_7_0_i34);
MR_def_label(coverage__switch_annotate_coverage_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(coverage__switch_annotate_coverage_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module12)
	MR_init_entry1(coverage__switch_annotate_coverage_2_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__switch_annotate_coverage_2_11_0);
	MR_init_label10(coverage__switch_annotate_coverage_2_11_0,66,5,6,13,12,17,18,20,24,25)
	MR_init_label1(coverage__switch_annotate_coverage_2_11_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_annotate_coverage_2'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__switch_annotate_coverage_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i66);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(coverage__switch_annotate_coverage_2_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_r4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_tempr4 = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__switch_annotate_coverage_2_11_0_i5);
MR_def_label(coverage__switch_annotate_coverage_2_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i6);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i6);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i6);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i6);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = ((MR_Integer) MR_tfield(1, MR_sv(7), 0) - (MR_Integer) MR_tfield(1, MR_sv(5), 0));
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i17);
	}
MR_def_label(coverage__switch_annotate_coverage_2_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__search_3_0,
		coverage__switch_annotate_coverage_2_11_0_i13);
MR_def_label(coverage__switch_annotate_coverage_2_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i12);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i17);
	}
MR_def_label(coverage__switch_annotate_coverage_2_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 2);
	}
MR_def_label(coverage__switch_annotate_coverage_2_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__switch_annotate_coverage_2_11_0_i18);
MR_def_label(coverage__switch_annotate_coverage_2_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r9 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i20);
	}
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i20);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = ((MR_Integer) MR_tfield(1, MR_sv(5), 0) + (MR_Integer) MR_tfield(1, MR_sv(8), 0));
	MR_r10 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r10;
	MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i24);
	}
MR_def_label(coverage__switch_annotate_coverage_2_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(9);
	MR_sv(1) = MR_r9;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(coverage__switch_annotate_coverage_2_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i25);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(coverage__switch_annotate_coverage_2_11_0_i25);
	}
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = ((MR_Integer) MR_tfield(1, MR_sv(6), 0) + (MR_Integer) MR_tfield(1, MR_r4, 0));
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_localcall_lab(coverage__switch_annotate_coverage_2_11_0,
		coverage__switch_annotate_coverage_2_11_0_i30);
MR_def_label(coverage__switch_annotate_coverage_2_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_localcall_lab(coverage__switch_annotate_coverage_2_11_0,
		coverage__switch_annotate_coverage_2_11_0_i30);
MR_def_label(coverage__switch_annotate_coverage_2_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module13)
	MR_init_entry1(coverage__ite_annotate_coverage_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__ite_annotate_coverage_10_0);
	MR_init_label10(coverage__ite_annotate_coverage_10_0,2,3,4,5,6,8,10,11,12,13)
	MR_init_label10(coverage__ite_annotate_coverage_10_0,17,20,18,22,23,24,25,26,27,28)
	MR_init_label10(coverage__ite_annotate_coverage_10_0,29,30,31,32,33,34,35,36,37,38)
	MR_init_label10(coverage__ite_annotate_coverage_10_0,39,40,41,42,43,44,45,46,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_annotate_coverage'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__ite_annotate_coverage_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__ite_annotate_coverage_10_0_i2);
MR_def_label(coverage__ite_annotate_coverage_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__ite_annotate_coverage_10_0_i3);
MR_def_label(coverage__ite_annotate_coverage_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__ite_annotate_coverage_10_0_i4);
MR_def_label(coverage__ite_annotate_coverage_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__ite_annotate_coverage_10_0_i5);
MR_def_label(coverage__ite_annotate_coverage_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(coverage__after_to_before_coverage_2_0,
		coverage__ite_annotate_coverage_10_0_i6);
MR_def_label(coverage__ite_annotate_coverage_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(coverage__ite_annotate_coverage_10_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(coverage__get_branch_start_coverage_3_0,
		coverage__ite_annotate_coverage_10_0_i8);
MR_def_label(coverage__ite_annotate_coverage_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(coverage__get_branch_start_coverage_3_0,
		coverage__ite_annotate_coverage_10_0_i10);
MR_def_label(coverage__ite_annotate_coverage_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__ite_annotate_coverage_10_0_i11);
MR_def_label(coverage__ite_annotate_coverage_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__ite_annotate_coverage_10_0_i12);
MR_def_label(coverage__ite_annotate_coverage_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(coverage__ite_annotate_coverage_10_0_i13);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(coverage__ite_annotate_coverage_10_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_sv(7);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tfield(1, MR_tempr2, 0) + (MR_Integer) MR_tfield(1, MR_tempr3, 0));
	MR_r10 = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r8 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_r10;
	MR_GOTO_LAB(coverage__ite_annotate_coverage_10_0_i17);
	}
MR_def_label(coverage__ite_annotate_coverage_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	}
MR_def_label(coverage__ite_annotate_coverage_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,
		coverage__ite_annotate_coverage_10_0_i20);
MR_def_label(coverage__ite_annotate_coverage_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(coverage__ite_annotate_coverage_10_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(15);
MR_def_label(coverage__ite_annotate_coverage_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(10);
	MR_tempr2 = MR_sv(11);
	MR_tempr3 = MR_sv(7);
	MR_tempr4 = MR_sv(9);
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_before);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i22);
MR_def_label(coverage__ite_annotate_coverage_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_after);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i23);
MR_def_label(coverage__ite_annotate_coverage_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i24);
MR_def_label(coverage__ite_annotate_coverage_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i25);
MR_def_label(coverage__ite_annotate_coverage_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i26);
MR_def_label(coverage__ite_annotate_coverage_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i27);
MR_def_label(coverage__ite_annotate_coverage_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i28);
MR_def_label(coverage__ite_annotate_coverage_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		coverage__ite_annotate_coverage_10_0_i29);
MR_def_label(coverage__ite_annotate_coverage_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		coverage__ite_annotate_coverage_10_0_i30);
MR_def_label(coverage__ite_annotate_coverage_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i31);
MR_def_label(coverage__ite_annotate_coverage_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tGoalPath: ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i32);
MR_def_label(coverage__ite_annotate_coverage_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i33);
MR_def_label(coverage__ite_annotate_coverage_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i34);
MR_def_label(coverage__ite_annotate_coverage_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i35);
MR_def_label(coverage__ite_annotate_coverage_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tElse: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i36);
MR_def_label(coverage__ite_annotate_coverage_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i37);
MR_def_label(coverage__ite_annotate_coverage_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i38);
MR_def_label(coverage__ite_annotate_coverage_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i39);
MR_def_label(coverage__ite_annotate_coverage_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tThen: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i40);
MR_def_label(coverage__ite_annotate_coverage_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i41);
MR_def_label(coverage__ite_annotate_coverage_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i42);
MR_def_label(coverage__ite_annotate_coverage_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i43);
MR_def_label(coverage__ite_annotate_coverage_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tCond: ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i44);
MR_def_label(coverage__ite_annotate_coverage_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i45);
MR_def_label(coverage__ite_annotate_coverage_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i46);
MR_def_label(coverage__ite_annotate_coverage_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i47);
MR_def_label(coverage__ite_annotate_coverage_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_ite_coverage/4 failed\n\tWhole: ", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		coverage__ite_annotate_coverage_10_0_i48);
MR_def_label(coverage__ite_annotate_coverage_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module14)
	MR_init_entry1(coverage__negation_annotate_coverage_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__negation_annotate_coverage_6_0);
	MR_init_label2(coverage__negation_annotate_coverage_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negation_annotate_coverage'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__negation_annotate_coverage_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__negation_annotate_coverage_6_0_i2);
MR_def_label(coverage__negation_annotate_coverage_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__negation_annotate_coverage_6_0_i3);
MR_def_label(coverage__negation_annotate_coverage_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module15)
	MR_init_entry1(coverage__scope_annotate_coverage_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__scope_annotate_coverage_7_0);
	MR_init_label3(coverage__scope_annotate_coverage_7_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'scope_annotate_coverage'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__scope_annotate_coverage_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		coverage__scope_annotate_coverage_7_0_i3);
MR_def_label(coverage__scope_annotate_coverage_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__scope_annotate_coverage_7_0_i4);
MR_def_label(coverage__scope_annotate_coverage_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(coverage__scope_annotate_coverage_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(coverage__scope_annotate_coverage_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__calls_1_0);
MR_decl_entry(fn__measurements__exits_1_0);
MR_decl_entry(fn__mdbcomp__program_representation__empty_goal_path_0_0);

MR_BEGIN_MODULE(coverage_module16)
	MR_init_entry1(coverage__procrep_annotate_with_coverage_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__procrep_annotate_with_coverage_6_0);
	MR_init_label5(coverage__procrep_annotate_with_coverage_6_0,2,3,6,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'procrep_annotate_with_coverage'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__coverage__procrep_annotate_with_coverage_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_sv(7), 1);
	}
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		coverage__procrep_annotate_with_coverage_6_0_i2);
MR_def_label(coverage__procrep_annotate_with_coverage_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__exits_1_0,
		coverage__procrep_annotate_with_coverage_6_0_i3);
MR_def_label(coverage__procrep_annotate_with_coverage_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		coverage__procrep_annotate_with_coverage_6_0_i6);
MR_def_label(coverage__procrep_annotate_with_coverage_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		coverage__procrep_annotate_with_coverage_6_0_i7);
MR_def_label(coverage__procrep_annotate_with_coverage_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(coverage__IntroducedFrom__pred__procrep_annotate_with_coverage__122__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("Coverage after procedure not equal with exit count of procedure", 63);
	}
	MR_np_call_localret_ent(require__require_2_0,
		coverage__procrep_annotate_with_coverage_6_0_i10);
MR_def_label(coverage__procrep_annotate_with_coverage_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_sv(6), 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module17)
	MR_init_entry1(coverage__sum_switch_case_coverage_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__sum_switch_case_coverage_3_0);
	MR_init_label4(coverage__sum_switch_case_coverage_3_0,3,7,5,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sum_switch_case_coverage'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__sum_switch_case_coverage_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(coverage__sum_switch_case_coverage_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(coverage__sum_switch_case_coverage_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_r1, 2), 2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(coverage__sum_switch_case_coverage_3_0_i7) MR_AND
		MR_LABEL_AP(coverage__sum_switch_case_coverage_3_0_i5) MR_AND
		MR_LABEL_AP(coverage__sum_switch_case_coverage_3_0_i5) MR_AND
		MR_LABEL_AP(coverage__sum_switch_case_coverage_3_0_i15));
MR_def_label(coverage__sum_switch_case_coverage_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(coverage__sum_switch_case_coverage_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = ((MR_Integer) MR_tfield(1, MR_r2, 0) + (MR_Integer) MR_mask_field(MR_r3, 0));
	MR_proceed();
MR_def_label(coverage__sum_switch_case_coverage_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(coverage__sum_switch_case_coverage_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = ((MR_Integer) MR_tfield(1, MR_r2, 0) + (MR_Integer) MR_tfield(3, MR_r3, 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module18)
	MR_init_entry1(__Unify___coverage__coverage_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___coverage__coverage_after_0_0);
	MR_init_label3(__Unify___coverage__coverage_after_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___coverage__coverage_after_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_after_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_after_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_after_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___coverage__coverage_after_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_after_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_after_0_0,1)
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

MR_BEGIN_MODULE(coverage_module19)
	MR_init_entry1(__Compare___coverage__coverage_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___coverage__coverage_after_0_0);
	MR_init_label4(__Compare___coverage__coverage_after_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___coverage__coverage_after_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_after_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_after_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_after_0_0_i7);
	}
MR_def_label(__Compare___coverage__coverage_after_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_after_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_after_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_after_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_after_0_0,9)
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


MR_BEGIN_MODULE(coverage_module20)
	MR_init_entry1(__Unify___coverage__coverage_before_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___coverage__coverage_before_0_0);
	MR_init_label3(__Unify___coverage__coverage_before_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___coverage__coverage_before_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_before_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_before_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_before_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___coverage__coverage_before_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_before_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_before_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module21)
	MR_init_entry1(__Compare___coverage__coverage_before_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___coverage__coverage_before_0_0);
	MR_init_label4(__Compare___coverage__coverage_before_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___coverage__coverage_before_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_before_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_before_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_before_0_0_i7);
	}
MR_def_label(__Compare___coverage__coverage_before_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_before_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_before_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_before_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_before_0_0,9)
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


MR_BEGIN_MODULE(coverage_module22)
	MR_init_entry1(__Unify___coverage__coverage_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___coverage__coverage_info_0_0);
	MR_init_label7(__Unify___coverage__coverage_info_0_0,13,11,5,17,7,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___coverage__coverage_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___coverage__coverage_info_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___coverage__coverage_info_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___coverage__coverage_info_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___coverage__coverage_info_0_0_i17));
MR_def_label(__Unify___coverage__coverage_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___coverage__coverage_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i7);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_info_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__coverage_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___coverage__coverage_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module23)
	MR_init_entry1(__Compare___coverage__coverage_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___coverage__coverage_info_0_0);
	MR_init_label10(__Compare___coverage__coverage_info_0_0,62,68,72,49,54,60,104,5,7,9)
	MR_init_label5(__Compare___coverage__coverage_info_0_0,77,86,23,87,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___coverage__coverage_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i68);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i77));
MR_def_label(__Compare___coverage__coverage_info_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i68) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i72));
MR_def_label(__Compare___coverage__coverage_info_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_info_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i104);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i87) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i54) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i104) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i60));
MR_def_label(__Compare___coverage__coverage_info_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___coverage__coverage_info_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___coverage__coverage_info_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__coverage_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i87) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i87) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i7) MR_AND
		MR_LABEL_AP(__Compare___coverage__coverage_info_0_0_i104));
MR_def_label(__Compare___coverage__coverage_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___coverage__coverage_info_0_0_i9);
MR_def_label(__Compare___coverage__coverage_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i79);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___coverage__coverage_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i23);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i87);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i104);
	}
MR_def_label(__Compare___coverage__coverage_info_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___coverage__coverage_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i87);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_info_0_0_i86);
	}
MR_def_label(__Compare___coverage__coverage_info_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___coverage__coverage_info_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(coverage_module24)
	MR_init_entry1(__Unify___coverage__coverage_reference_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___coverage__coverage_reference_info_0_0);
	MR_init_label5(__Unify___coverage__coverage_reference_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___coverage__coverage_reference_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_reference_info_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0,
		__Unify___coverage__coverage_reference_info_0_0_i4);
MR_def_label(__Unify___coverage__coverage_reference_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_reference_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___coverage__coverage_reference_info_0_0_i6);
MR_def_label(__Unify___coverage__coverage_reference_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_reference_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___coverage__coverage_reference_info_0_0_i8);
MR_def_label(__Unify___coverage__coverage_reference_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___coverage__coverage_reference_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___coverage__coverage_reference_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___coverage__coverage_reference_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(coverage_module25)
	MR_init_entry1(__Compare___coverage__coverage_reference_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___coverage__coverage_reference_info_0_0);
	MR_init_label6(__Compare___coverage__coverage_reference_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___coverage__coverage_reference_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_reference_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___coverage__coverage_reference_info_0_0_i2);
MR_def_label(__Compare___coverage__coverage_reference_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___coverage__coverage_reference_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0,
		__Compare___coverage__coverage_reference_info_0_0_i5);
MR_def_label(__Compare___coverage__coverage_reference_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_reference_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___coverage__coverage_reference_info_0_0_i9);
MR_def_label(__Compare___coverage__coverage_reference_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_reference_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___coverage__coverage_reference_info_0_0_i13);
MR_def_label(__Compare___coverage__coverage_reference_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___coverage__coverage_reference_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___coverage__coverage_reference_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module26)
	MR_init_entry1(__Unify___coverage__sum_coverage_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___coverage__sum_coverage_after_0_0);
	MR_init_label3(__Unify___coverage__sum_coverage_after_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___coverage__sum_coverage_after_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___coverage__sum_coverage_after_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___coverage__sum_coverage_after_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__sum_coverage_after_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___coverage__sum_coverage_after_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___coverage__sum_coverage_after_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__sum_coverage_after_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module27)
	MR_init_entry1(__Compare___coverage__sum_coverage_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___coverage__sum_coverage_after_0_0);
	MR_init_label4(__Compare___coverage__sum_coverage_after_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___coverage__sum_coverage_after_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_after_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_after_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_after_0_0_i7);
	}
MR_def_label(__Compare___coverage__sum_coverage_after_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__sum_coverage_after_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__sum_coverage_after_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_after_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__sum_coverage_after_0_0,9)
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


MR_BEGIN_MODULE(coverage_module28)
	MR_init_entry1(__Unify___coverage__sum_coverage_before_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___coverage__sum_coverage_before_0_0);
	MR_init_label3(__Unify___coverage__sum_coverage_before_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___coverage__sum_coverage_before_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___coverage__sum_coverage_before_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___coverage__sum_coverage_before_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__sum_coverage_before_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___coverage__sum_coverage_before_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___coverage__sum_coverage_before_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___coverage__sum_coverage_before_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module29)
	MR_init_entry1(__Compare___coverage__sum_coverage_before_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___coverage__sum_coverage_before_0_0);
	MR_init_label4(__Compare___coverage__sum_coverage_before_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___coverage__sum_coverage_before_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_before_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_before_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_before_0_0_i7);
	}
MR_def_label(__Compare___coverage__sum_coverage_before_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__sum_coverage_before_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__sum_coverage_before_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___coverage__sum_coverage_before_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___coverage__sum_coverage_before_0_0,9)
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


MR_BEGIN_MODULE(coverage_module30)
	MR_init_entry1(coverage__IntroducedFrom__pred__procrep_annotate_with_coverage__122__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__IntroducedFrom__pred__procrep_annotate_with_coverage__122__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__procrep_annotate_with_coverage__122__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__IntroducedFrom__pred__procrep_annotate_with_coverage__122__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___coverage__coverage_after_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module31)
	MR_init_entry1(coverage__IntroducedFrom__pred__goal_annotate_coverage__199__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__IntroducedFrom__pred__goal_annotate_coverage__199__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__goal_annotate_coverage__199__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__IntroducedFrom__pred__goal_annotate_coverage__199__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___coverage__coverage_before_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module32)
	MR_init_entry1(coverage__IntroducedFrom__pred__after_count_from_either_source__960__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__coverage__IntroducedFrom__pred__after_count_from_either_source__960__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__after_count_from_either_source__960__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(coverage__IntroducedFrom__pred__after_count_from_either_source__960__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module33)
	MR_init_entry1(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0);
	MR_init_label9(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,40,5,9,8,7,6,13,14,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__disj_annotate_coverage_2__[4]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i40);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr4 = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i5);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i7);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, coverage_point);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i9);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i8);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i6);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i6);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(coverage__goal_annotate_coverage_6_0,
		f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i13);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i14);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i14);
	}
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = ((MR_Integer) MR_tfield(1, MR_sv(5), 0) + (MR_Integer) MR_tfield(1, MR_r1, 0));
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,
		f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i19);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_sv(1) = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,
		f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0_i19);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_50_95_95_91_52_93_95_48_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module34)
	MR_init_entry1(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0);
	MR_init_label6(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,25,29,70,17,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__check_ite_coverage__[7]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i25);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(1, MR_r3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i1);
	}
	}
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r6;
	MR_tempr2 = MR_r7;
	MR_r1 = MR_r8;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i29);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i29);
	}
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i29);
	}
	MR_tempr3 = MR_tfield(1, MR_r2, 0);
	MR_tempr4 = ((MR_Integer) MR_tfield(1, MR_tempr1, 0) + (MR_Integer) MR_tfield(1, MR_tempr2, 0));
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i1);
	}
	}
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r4;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i70);
	}
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i70);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i1);
	}
	}
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i22);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__detism_get_solutions_1_0,
		f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i17);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i22);
	}
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0_i22);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(coverage_module35)
	MR_init_entry1(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0);
	MR_init_label1(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__check_coverage_complete__[1, 3]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0_i2);
	}
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
MR_def_label(f_99_111_118_101_114_97_103_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__coverage_maybe_bunch_0(void)
{
	coverage_module0();
	coverage_module1();
	coverage_module2();
	coverage_module3();
	coverage_module4();
	coverage_module5();
	coverage_module6();
	coverage_module7();
	coverage_module8();
	coverage_module9();
	coverage_module10();
	coverage_module11();
	coverage_module12();
	coverage_module13();
	coverage_module14();
	coverage_module15();
	coverage_module16();
	coverage_module17();
	coverage_module18();
	coverage_module19();
	coverage_module20();
	coverage_module21();
	coverage_module22();
	coverage_module23();
	coverage_module24();
	coverage_module25();
	coverage_module26();
	coverage_module27();
	coverage_module28();
	coverage_module29();
	coverage_module30();
	coverage_module31();
	coverage_module32();
	coverage_module33();
	coverage_module34();
	coverage_module35();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__coverage__init(void);
void mercury__coverage__init_type_tables(void);
void mercury__coverage__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__coverage__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__coverage__init_complexity_procs(void);
#endif

void mercury__coverage__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__coverage_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_coverage__type_ctor_info_coverage_after_0,
		coverage__coverage_after_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_coverage__type_ctor_info_coverage_before_0,
		coverage__coverage_before_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_coverage__type_ctor_info_coverage_info_0,
		coverage__coverage_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_coverage__type_ctor_info_coverage_reference_info_0,
		coverage__coverage_reference_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_coverage__type_ctor_info_sum_coverage_after_0,
		coverage__sum_coverage_after_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_coverage__type_ctor_info_sum_coverage_before_0,
		coverage__sum_coverage_before_0_0);
	mercury__coverage__init_debugger();
}

void mercury__coverage__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_coverage__type_ctor_info_coverage_after_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_coverage__type_ctor_info_coverage_before_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_coverage__type_ctor_info_coverage_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_coverage__type_ctor_info_coverage_reference_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_coverage__type_ctor_info_sum_coverage_after_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_coverage__type_ctor_info_sum_coverage_before_0);
	}
}


void mercury__coverage__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__coverage__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__coverage);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__coverage__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
