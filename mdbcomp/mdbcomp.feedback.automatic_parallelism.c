/*
** Automatically generated from `feedback.automatic_parallelism.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdbcomp__feedback__automatic_parallelism__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 28 "mdbcomp.feedback.automatic_parallelism.c"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 32 "mdbcomp.feedback.automatic_parallelism.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdbcomp.feedback.automatic_parallelism.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 40 "mdbcomp.feedback.automatic_parallelism.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 44 "mdbcomp.feedback.automatic_parallelism.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "mdbcomp.feedback.automatic_parallelism.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdbcomp.feedback.automatic_parallelism.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 56 "mdbcomp.feedback.automatic_parallelism.c"
#line 35 "../library/store.int2"
#include "store.mh"

#line 60 "mdbcomp.feedback.automatic_parallelism.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 64 "mdbcomp.feedback.automatic_parallelism.c"
#line 65 "mdbcomp.feedback.automatic_parallelism.c"
#include "mdbcomp.feedback.automatic_parallelism.mh"

#line 68 "mdbcomp.feedback.automatic_parallelism.c"
#line 69 "mdbcomp.feedback.automatic_parallelism.c"
#ifndef MDBCOMP__FEEDBACK__AUTOMATIC_PARALLELISM_DECL_GUARD
#define MDBCOMP__FEEDBACK__AUTOMATIC_PARALLELISM_DECL_GUARD

#line 73 "mdbcomp.feedback.automatic_parallelism.c"
#line 74 "mdbcomp.feedback.automatic_parallelism.c"

#endif
#line 77 "mdbcomp.feedback.automatic_parallelism.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Integer f4;
	MR_Integer f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
	MR_Integer f4[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_callee_rep_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0;
MR_decl_label3(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0, 6,7,8)
MR_decl_label1(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0, 5)
MR_decl_label5(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0, 5,6,18,7,1)
MR_decl_label3(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0, 10,5,1)
MR_decl_label7(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0, 4,6,8,11,13,17,1)
MR_decl_label3(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0, 4,8,1)
MR_decl_label4(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0, 4,6,11,1)
MR_decl_label3(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0, 12,5,1)
MR_decl_label2(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0, 4,1)
MR_decl_label3(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0, 10,5,1)
MR_decl_label3(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0, 5,9,1)
MR_decl_label2(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0, 6,1)
MR_decl_label1(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0, 6)
MR_decl_label10(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0, 7,8,5,12,50,13,10,17,18,55)
MR_decl_label5(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0, 15,22,41,23,42)
MR_decl_label6(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0, 24,7,5,9,11,16)
MR_decl_label10(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0, 3,2,5,9,13,17,21,25,30,34)
MR_decl_label2(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0, 38,86)
MR_decl_label10(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label5(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0, 37,41,45,49,109)
MR_decl_label5(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0, 3,2,5,9,30)
MR_decl_label4(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0, 18,7,5,9)
MR_decl_label10(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label1(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0, 77)
MR_decl_label4(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0, 18,7,5,9)
MR_decl_label6(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0, 3,2,5,9,14,51)
MR_decl_label6(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0, 3,2,5,9,13,37)
MR_decl_label2(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0, 3,2)
MR_def_extern_entry(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0)
MR_def_extern_entry(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0)
MR_def_extern_entry(mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_0)
MR_def_extern_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0)
MR_def_extern_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_0)
MR_def_extern_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_0)
MR_def_extern_entry(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0)
MR_def_extern_entry(__Unify___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0)
MR_def_extern_entry(__Compare___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0)
MR_decl_static(mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__410__1_6_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
1
},
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction),
2
},
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj),
1
},
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj),
2
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_COMMON(0,0),
1,
2
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
2,
33,
65
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_2;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0_1,
MR_COMMON(2,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
MR_COMMON(0,0),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_2,
MR_COMMON(2,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(5,0),
MR_COMMON(0,2),
MR_COMMON(0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_1,
MR_COMMON(2,0)
},
6,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
MR_COMMON(0,0)
},
{
1,
2
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
{
2,
1,
2
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_best_par_algorithm_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_0 = {
	"bpa_complete_branches",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_best_par_algorithm_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_best_par_algorithm_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_1 = {
	"bpa_complete_size",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_best_par_algorithm_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_2 = {
	"bpa_complete",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_3 = {
	"bpa_greedy",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_best_par_algorithm_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_2,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_3

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_best_par_algorithm_0_1[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_best_par_algorithm_0_2[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_best_par_algorithm_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_best_par_algorithm_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_best_par_algorithm_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_best_par_algorithm_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_best_par_algorithm_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_2,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_1,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_best_par_algorithm_0_3
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_best_par_algorithm_0[] = {
	1,
	2,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"best_par_algorithm",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_best_par_algorithm_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_best_par_algorithm_0 },
	4,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_best_par_algorithm_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0 = {
	"unknown_callee",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1[] = {
	"nc_module_name",
	"nc_proc_name"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1 = {
	"named_callee",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_callee_rep_0_1,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_callee_rep_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_callee_rep_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_callee_rep_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_1,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_callee_rep_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_callee_rep_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_callee_rep_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"callee_rep",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_callee_rep_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_callee_rep_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_callee_rep_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunction_1_0[] = {
	"cpc_goal_path",
	"cpc_maybe_push_goal",
	"cpc_first_conj_num",
	"cpc_is_dependent",
	"cpc_goals_before",
	"cpc_goals_before_cost",
	"cpc_conjs",
	"cpc_goals_after",
	"cpc_goals_after_cost",
	"cpc_par_exec_metrics"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0 = {
	"candidate_par_conjunction",
	10,
	208,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunction_1_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunction_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunction_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunction_1_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"candidate_par_conjunction",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunction_1 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunction_1 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunction_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_params_0_0[] = {
	"cpcp_desired_parallelism",
	"cpcp_intermodule_var_use",
	"cpcp_sparking_cost",
	"cpcp_sparking_delay",
	"cpcp_barrier_cost",
	"cpcp_future_signal_cost",
	"cpcp_future_wait_cost",
	"cpcp_context_wakeup_delay",
	"cpcp_clique_threshold",
	"cpcp_call_site_threshold",
	"cpcp_speedup_threshold",
	"cpcp_parallelise_dep_conjs",
	"cpcp_best_par_alg"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0 = {
	"candidate_par_conjunctions_params",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_params_0_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_params_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_params_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_params_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"candidate_par_conjunctions_params",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_params_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_params_0 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_params_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1 = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__pseudo_1
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0[] = {
	"cpcp_var_table",
	"cpcp_push_goals",
	"cpcp_par_conjs"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0 = {
	"candidate_par_conjunctions_proc",
	3,
	4,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_candidate_par_conjunctions_proc_1_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_candidate_par_conjunctions_proc_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_candidate_par_conjunctions_proc_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_candidate_par_conjunctions_proc_1_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"candidate_par_conjunctions_proc",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_candidate_par_conjunctions_proc_1 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_candidate_par_conjunctions_proc_1 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_candidate_par_conjunctions_proc_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	&mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"candidate_par_conjunctions_proc",
	{ 0 },
	{ (void *)&mercury_data_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0 = {
	"conjuncts_are_dependent",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_conjuncts_are_dependent_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1 = {
	"conjuncts_are_independent",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_conjuncts_are_dependent_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_conjuncts_are_dependent_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_conjuncts_are_dependent_0_1
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_conjuncts_are_dependent_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"conjuncts_are_dependent",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_conjuncts_are_dependent_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_conjuncts_are_dependent_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_conjuncts_are_dependent_0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0 = {
	"cost_above_par_threshold",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1 = {
	"cost_not_above_par_threshold",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__enum_value_ordered_cost_above_par_threshold_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__enum_name_ordered_cost_above_par_threshold_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_cost_above_par_threshold_0_1
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_cost_above_par_threshold_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"cost_above_par_threshold",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__enum_name_ordered_cost_above_par_threshold_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__enum_value_ordered_cost_above_par_threshold_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_cost_above_par_threshold_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_parallel_exec_metrics_0_0[] = {
	"pem_num_calls",
	"pem_seq_time",
	"pem_par_time",
	"pem_par_overhead_xpark_cost",
	"pem_par_overhead_barrier",
	"pem_par_overhead_signals",
	"pem_par_overhead_waits",
	"pem_first_conj_dead_time",
	"pem_future_dead_time"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0 = {
	"parallel_exec_metrics",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_parallel_exec_metrics_0_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_parallel_exec_metrics_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallel_exec_metrics_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallel_exec_metrics_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"parallel_exec_metrics",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallel_exec_metrics_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallel_exec_metrics_0 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_parallel_exec_metrics_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0 = {
	"do_not_parallelise_dep_conjs",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1 = {
	"parallelise_dep_conjs",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_parallelise_dep_conjs_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_parallelise_dep_conjs_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallelise_dep_conjs_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_parallelise_dep_conjs_0_1
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_parallelise_dep_conjs_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"parallelise_dep_conjs",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_parallelise_dep_conjs_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_parallelise_dep_conjs_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_parallelise_dep_conjs_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"pard_goal",
	{ 0 },
	{ (void *)&mercury_data_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0[] = {
	"pga_cost_percall",
	"pga_coat_above_threshold",
	"pga_var_productions",
	"pga_var_consumptions"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0 = {
	"pard_goal_annotation",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_pard_goal_annotation_0_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_pard_goal_annotation_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_pard_goal_annotation_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_pard_goal_annotation_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"pard_goal_annotation",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_pard_goal_annotation_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_pard_goal_annotation_0 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_pard_goal_annotation_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0[] = {
	"pg_goal_path",
	"pg_pushee_lo",
	"pg_pushee_hi",
	"pg_pushed_into"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0 = {
	"push_goal",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__feedback__automatic_parallelism__field_types_push_goal_0_0,
	mercury_data_mdbcomp__feedback__automatic_parallelism__field_names_push_goal_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__feedback__automatic_parallelism__du_stag_ordered_push_goal_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__du_functor_desc_push_goal_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"push_goal",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_name_ordered_push_goal_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__du_ptag_ordered_push_goal_0 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_push_goal_0
};

static const MR_NotagFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 = {
	"seq_conj",
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	"sc_conjs"
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"seq_conj",
	{ (void *)&mercury_data_mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 },
	{ (void *)&mercury_data_mdbcomp__feedback__automatic_parallelism__notag_functor_desc_seq_conj_1 },
	1,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_seq_conj_1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0 = {
	"estimate_speedup_naively",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1 = {
	"estimate_speedup_by_num_vars",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_2 = {
	"estimate_speedup_by_overlap",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__enum_value_ordered_speedup_estimate_alg_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_1,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_2,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_speedup_estimate_alg_0_0
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"speedup_estimate_alg",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__enum_name_ordered_speedup_estimate_alg_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__enum_value_ordered_speedup_estimate_alg_0 },
	3,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_speedup_estimate_alg_0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0 = {
	"stat_mean",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1 = {
	"stat_median",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__enum_value_ordered_stat_measure_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__feedback__automatic_parallelism__enum_name_ordered_stat_measure_0[] = {
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_0,
	&mercury_data_mdbcomp__feedback__automatic_parallelism__enum_functor_desc_stat_measure_0_1
};

const MR_Integer mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_stat_measure_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0)),
	"mdbcomp.feedback.automatic_parallelism",
	"stat_measure",
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__enum_name_ordered_stat_measure_0 },
	{ (void *)mercury_data_mdbcomp__feedback__automatic_parallelism__enum_value_ordered_stat_measure_0 },
	2,
	4,
	mercury_data_mdbcomp__feedback__automatic_parallelism__functor_number_map_stat_measure_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_2 = {
{
MR_PREDICATE,
"mdbcomp.feedback.automatic_parallelism",
"mdbcomp.feedback.automatic_parallelism",
"convert_seq_conj",
3,
0
},
"mdbcomp.feedback.automatic_parallelism",
"feedback.automatic_parallelism.m",
412,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.feedback.automatic_parallelism",
"mdbcomp.feedback.automatic_parallelism",
"lambda_feedback_automatic_parallelism_m_410",
6,
0
},
"mdbcomp.feedback.automatic_parallelism",
"feedback.automatic_parallelism.m",
409,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0_1 = {
{
MR_PREDICATE,
"mdbcomp.feedback.automatic_parallelism",
"mdbcomp.feedback.automatic_parallelism",
"convert_candidate_par_conjunction",
3,
0
},
"mdbcomp.feedback.automatic_parallelism",
"feedback.automatic_parallelism.m",
402,
"6"
};


MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module0)
	MR_init_entry1(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0);
	MR_init_label1(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_candidate_par_conjunctions_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction);
	MR_tfield(0, MR_tempr3, 1) = MR_r2;
	MR_tempr4 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0_i5);
MR_def_label(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module1)
	MR_init_entry1(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0);
	MR_init_label3(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_candidate_par_conjunction'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__410__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tempr5 = MR_r4;
	MR_tfield(0, MR_tempr1, 6) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_r2;
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj);
	MR_tfield(0, MR_tempr4, 1) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	* (MR_Float *) &MR_sv(6) = MR_word_to_float(MR_tfield(0, MR_tempr5, 5));
	MR_sv(12) = MR_tfield(0, MR_tempr5, 7);
	* (MR_Float *) &MR_sv(8) = MR_word_to_float(MR_tfield(0, MR_tempr5, 8));
	MR_sv(9) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r4 = MR_tfield(0, MR_tempr5, 6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_i6);
MR_def_label(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_i7);
MR_def_label(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0_i8);
MR_def_label(mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunction_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 10);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(12);
	MR_tfield(0, MR_r2, 5) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(6)));
	MR_tfield(0, MR_r2, 6) = MR_sv(11);
	MR_tfield(0, MR_r2, 7) = MR_r1;
	MR_tfield(0, MR_r2, 8) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(8)));
	MR_tfield(0, MR_r2, 9) = MR_sv(9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module2)
	MR_init_entry1(mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_seq_conj'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__feedback__automatic_parallelism__convert_seq_conj_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module3)
	MR_init_entry1(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_exec_metrics_get_speedup'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module4)
	MR_init_entry1(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_exec_metrics_get_time_saving'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_r1, 1)) - MR_word_to_float(MR_tfield(0, MR_r1, 2))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module5)
	MR_init_entry1(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_exec_metrics_get_overheads'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((((MR_word_to_float(MR_tfield(0, MR_r1, 3)) + MR_word_to_float(MR_tfield(0, MR_r1, 4))) + MR_word_to_float(MR_tfield(0, MR_r1, 5))) + MR_word_to_float(MR_tfield(0, MR_r1, 6))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module6)
	MR_init_entry1(fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parallel_exec_metrics_get_cpu_time'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_r1, 1)) + (((MR_word_to_float(MR_tfield(0, MR_r1, 3)) + MR_word_to_float(MR_tfield(0, MR_r1, 4))) + MR_word_to_float(MR_tfield(0, MR_r1, 5))) + MR_word_to_float(MR_tfield(0, MR_r1, 6)))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module7)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_init_label5(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,5,6,18,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,1)
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

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module8)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_init_label10(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,7,8,5,12,50,13,10,17,18,55)
	MR_init_label5(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,15,22,41,23,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i13);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i41);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i23);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0_i55);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module9)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_init_label3(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module10)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_init_label6(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,9)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i11);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__callee_rep_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module11)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_init_label7(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,4,6,8,11,13,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i17);
	}
	MR_incr_sp(22);
	MR_sv(22) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(21) = MR_r1;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	* (MR_Float *) &MR_sv(5) = MR_word_to_float(MR_tfield(0, MR_tempr3, 5));
	MR_sv(6) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 7);
	* (MR_Float *) &MR_sv(9) = MR_word_to_float(MR_tfield(0, MR_tempr3, 8));
	MR_sv(10) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(11) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 4);
	* (MR_Float *) &MR_sv(15) = MR_word_to_float(MR_tfield(0, MR_tempr4, 5));
	MR_sv(16) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 7);
	* (MR_Float *) &MR_sv(19) = MR_word_to_float(MR_tfield(0, MR_tempr4, 8));
	MR_sv(20) = MR_tfield(0, MR_tempr4, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i4);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i6);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i8);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	if ((MR_float_from_dword_ptr(&MR_sv(5)) != MR_float_from_dword_ptr(&MR_sv(15)))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj);
	MR_tfield(0, MR_r1, 1) = MR_sv(21);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i11);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i13);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	if ((MR_float_from_dword_ptr(&MR_sv(9)) != MR_float_from_dword_ptr(&MR_sv(19)))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(22);
	MR_decr_sp(22);
	MR_np_tailcall_ent(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(22);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module12)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_init_label10(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,3,2,5,9,13,17,21,25,30,34)
	MR_init_label2(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,38,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i3);
	}
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(23) = MR_r1;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 9);
	* (MR_Float *) &MR_sv(21) = MR_word_to_float(MR_tfield(0, MR_tempr5, 8));
	MR_sv(19) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 6);
	* (MR_Float *) &MR_sv(17) = MR_word_to_float(MR_tfield(0, MR_tempr5, 5));
	MR_sv(15) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 9);
	* (MR_Float *) &MR_sv(10) = MR_word_to_float(MR_tfield(0, MR_tempr6, 8));
	MR_sv(8) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 6);
	* (MR_Float *) &MR_sv(6) = MR_word_to_float(MR_tfield(0, MR_tempr6, 5));
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i13);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i17);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i21);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(6)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(17)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i25);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj);
	MR_tfield(0, MR_r1, 1) = MR_sv(23);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i30);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i34);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(10)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(21)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i38);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0_i86);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(22);
	MR_succip_word = MR_sv(24);
	MR_decr_sp(24);
	MR_np_tailcall_ent(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module13)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_init_label3(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i8);
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
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 6);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 7);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 8);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 8);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 9);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 9);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 10);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 10);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 12);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 12);
	MR_r1 = MR_tfield(0, MR_tempr3, 11);
	MR_r2 = MR_tfield(0, MR_tempr4, 11);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i4);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module14)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_init_label10(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label5(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,37,41,45,49,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i3);
	}
	MR_incr_sp(27);
	MR_sv(27) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 11);
	* (MR_Float *) &MR_sv(24) = MR_word_to_float(MR_tfield(0, MR_tempr5, 10));
	MR_sv(22) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 11);
	* (MR_Float *) &MR_sv(11) = MR_word_to_float(MR_tfield(0, MR_tempr6, 10));
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i13);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i17);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i21);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i25);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i29);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i33);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i37);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i41);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(11)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(24)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i45);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i49);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0_i109);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(26);
	MR_succip_word = MR_sv(27);
	MR_decr_sp(27);
	MR_np_tailcall_ent(__Compare___mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module15)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module16)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_var_table_0;
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module17)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_init_label4(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,4,6,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i11);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, var_table);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i4);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i6);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module18)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_init_label5(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,3,2,5,9,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, var_table);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i30);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, push_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, candidate_par_conjunction);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module19)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_init_label3(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module20)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_init_label4(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module21)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module22)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module23)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_init_label2(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 8);
	MR_r2 = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module24)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_init_label10(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label1(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i3);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	* (MR_Float *) &MR_sv(34) = MR_word_to_float(MR_tfield(0, MR_tempr1, 8));
	* (MR_Float *) &MR_sv(32) = MR_word_to_float(MR_tfield(0, MR_tempr1, 7));
	* (MR_Float *) &MR_sv(30) = MR_word_to_float(MR_tfield(0, MR_tempr1, 6));
	* (MR_Float *) &MR_sv(28) = MR_word_to_float(MR_tfield(0, MR_tempr1, 5));
	* (MR_Float *) &MR_sv(26) = MR_word_to_float(MR_tfield(0, MR_tempr1, 4));
	* (MR_Float *) &MR_sv(24) = MR_word_to_float(MR_tfield(0, MR_tempr1, 3));
	* (MR_Float *) &MR_sv(22) = MR_word_to_float(MR_tfield(0, MR_tempr1, 2));
	* (MR_Float *) &MR_sv(20) = MR_word_to_float(MR_tfield(0, MR_tempr1, 1));
	MR_tempr2 = MR_sv(1);
	* (MR_Float *) &MR_sv(18) = MR_word_to_float(MR_tfield(0, MR_tempr2, 8));
	* (MR_Float *) &MR_sv(16) = MR_word_to_float(MR_tfield(0, MR_tempr2, 7));
	* (MR_Float *) &MR_sv(14) = MR_word_to_float(MR_tfield(0, MR_tempr2, 6));
	* (MR_Float *) &MR_sv(12) = MR_word_to_float(MR_tfield(0, MR_tempr2, 5));
	* (MR_Float *) &MR_sv(10) = MR_word_to_float(MR_tfield(0, MR_tempr2, 4));
	* (MR_Float *) &MR_sv(8) = MR_word_to_float(MR_tfield(0, MR_tempr2, 3));
	* (MR_Float *) &MR_sv(6) = MR_word_to_float(MR_tfield(0, MR_tempr2, 2));
	* (MR_Float *) &MR_sv(3) = MR_word_to_float(MR_tfield(0, MR_tempr2, 1));
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(3)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(20)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(6)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(22)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i13);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(8)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(24)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i17);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(10)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(26)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i21);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(12)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(28)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i25);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(14)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(30)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i29);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(16)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(32)));
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i33);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0_i77);
	}
	MR_r1 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(18)));
	MR_r2 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(34)));
	MR_succip_word = MR_sv(35);
	MR_decr_sp(35);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module25)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_init_label3(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module26)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_init_label4(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i7);
	}
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0,9)
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

MR_decl_entry(__Unify___mdbcomp__program_representation__goal_rep_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module27)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_rep_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__goal_rep_1_0);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module28)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback__automatic_parallelism, pard_goal_annotation);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_rep_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module29)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_init_label3(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i9);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 2);
	MR_r3 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i5);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module30)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_init_label6(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,3,2,5,9,14,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i14);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module31)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_init_label2(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i6);
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
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module32)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_init_label6(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i5);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i9);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i13);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__push_goal_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module33)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_init_label1(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module34)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_init_label2(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0_i2);
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__feedback__automatic_parallelism__seq_conj_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module35)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module36)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module37)
	MR_init_entry1(__Unify___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module38)
	MR_init_entry1(__Compare___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(mdbcomp__feedback__automatic_parallelism_module39)
	MR_init_entry1(mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__410__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__410__1_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_candidate_par_conjunction__410__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__410__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdbcomp__feedback__automatic_parallelism__IntroducedFrom__pred__convert_candidate_par_conjunction__410__1_6_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__feedback__automatic_parallelism_maybe_bunch_0(void)
{
	mdbcomp__feedback__automatic_parallelism_module0();
	mdbcomp__feedback__automatic_parallelism_module1();
	mdbcomp__feedback__automatic_parallelism_module2();
	mdbcomp__feedback__automatic_parallelism_module3();
	mdbcomp__feedback__automatic_parallelism_module4();
	mdbcomp__feedback__automatic_parallelism_module5();
	mdbcomp__feedback__automatic_parallelism_module6();
	mdbcomp__feedback__automatic_parallelism_module7();
	mdbcomp__feedback__automatic_parallelism_module8();
	mdbcomp__feedback__automatic_parallelism_module9();
	mdbcomp__feedback__automatic_parallelism_module10();
	mdbcomp__feedback__automatic_parallelism_module11();
	mdbcomp__feedback__automatic_parallelism_module12();
	mdbcomp__feedback__automatic_parallelism_module13();
	mdbcomp__feedback__automatic_parallelism_module14();
	mdbcomp__feedback__automatic_parallelism_module15();
	mdbcomp__feedback__automatic_parallelism_module16();
	mdbcomp__feedback__automatic_parallelism_module17();
	mdbcomp__feedback__automatic_parallelism_module18();
	mdbcomp__feedback__automatic_parallelism_module19();
	mdbcomp__feedback__automatic_parallelism_module20();
	mdbcomp__feedback__automatic_parallelism_module21();
	mdbcomp__feedback__automatic_parallelism_module22();
	mdbcomp__feedback__automatic_parallelism_module23();
	mdbcomp__feedback__automatic_parallelism_module24();
	mdbcomp__feedback__automatic_parallelism_module25();
	mdbcomp__feedback__automatic_parallelism_module26();
	mdbcomp__feedback__automatic_parallelism_module27();
	mdbcomp__feedback__automatic_parallelism_module28();
	mdbcomp__feedback__automatic_parallelism_module29();
	mdbcomp__feedback__automatic_parallelism_module30();
	mdbcomp__feedback__automatic_parallelism_module31();
	mdbcomp__feedback__automatic_parallelism_module32();
	mdbcomp__feedback__automatic_parallelism_module33();
	mdbcomp__feedback__automatic_parallelism_module34();
	mdbcomp__feedback__automatic_parallelism_module35();
	mdbcomp__feedback__automatic_parallelism_module36();
	mdbcomp__feedback__automatic_parallelism_module37();
	mdbcomp__feedback__automatic_parallelism_module38();
	mdbcomp__feedback__automatic_parallelism_module39();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__feedback__automatic_parallelism__init(void);
void mercury__mdbcomp__feedback__automatic_parallelism__init_type_tables(void);
void mercury__mdbcomp__feedback__automatic_parallelism__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__feedback__automatic_parallelism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__feedback__automatic_parallelism__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdbcomp__feedback__automatic_parallelism__init_threadscope_string_table(void);
#endif

void mercury__mdbcomp__feedback__automatic_parallelism__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__feedback__automatic_parallelism_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0,
		mdbcomp__feedback__automatic_parallelism__best_par_algorithm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_callee_rep_0,
		mdbcomp__feedback__automatic_parallelism__callee_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
		mdbcomp__feedback__automatic_parallelism__candidate_par_conjunction_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
		mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_params_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
		mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0,
		mdbcomp__feedback__automatic_parallelism__candidate_par_conjunctions_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0,
		mdbcomp__feedback__automatic_parallelism__conjuncts_are_dependent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0,
		mdbcomp__feedback__automatic_parallelism__cost_above_par_threshold_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0,
		mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0,
		mdbcomp__feedback__automatic_parallelism__parallelise_dep_conjs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0,
		mdbcomp__feedback__automatic_parallelism__pard_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0,
		mdbcomp__feedback__automatic_parallelism__pard_goal_annotation_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0,
		mdbcomp__feedback__automatic_parallelism__push_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
		mdbcomp__feedback__automatic_parallelism__seq_conj_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0,
		mdbcomp__feedback__automatic_parallelism__speedup_estimate_alg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0,
		mdbcomp__feedback__automatic_parallelism__stat_measure_0_0);
	mercury__mdbcomp__feedback__automatic_parallelism__init_debugger();
}

void mercury__mdbcomp__feedback__automatic_parallelism__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_callee_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallelise_dep_conjs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_speedup_estimate_alg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0);
	}
}


void mercury__mdbcomp__feedback__automatic_parallelism__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__feedback__automatic_parallelism__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdbcomp__feedback__automatic_parallelism);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__feedback__automatic_parallelism__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdbcomp__feedback__automatic_parallelism__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
