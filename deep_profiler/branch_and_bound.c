/*
** Automatically generated from `branch_and_bound.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__branch_and_bound__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "branch_and_bound.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "branch_and_bound.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "branch_and_bound.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "branch_and_bound.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "branch_and_bound.c"
#line 45 "branch_and_bound.c"
#include "branch_and_bound.mh"

#line 48 "branch_and_bound.c"
#line 49 "branch_and_bound.c"
#ifndef BRANCH_AND_BOUND_DECL_GUARD
#define BRANCH_AND_BOUND_DECL_GUARD

#line 53 "branch_and_bound.c"
#line 54 "branch_and_bound.c"

#endif
#line 57 "branch_and_bound.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[8];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_branch_and_bound__type_ctor_info_best_solutions_1,
	mercury_data_branch_and_bound__type_ctor_info_bnb_profile_0,
	mercury_data_branch_and_bound__type_ctor_info_bnb_state_1;
MR_decl_label10(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0, 3,4,7,8,10,6,13,14,15,17)
MR_decl_label1(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0, 16)
MR_decl_label1(branch_and_bound__add_alternative_1_0, 2)
MR_decl_label1(branch_and_bound__branch_and_bound_4_0, 5)
MR_decl_label1(branch_and_bound__close_alternative_1_0, 2)
MR_decl_label1(branch_and_bound__num_alternatives_3_0, 2)
MR_decl_label10(branch_and_bound__test_complete_solution_2_0, 2,4,5,9,13,8,21,7,23,24)
MR_decl_label1(branch_and_bound__test_complete_solution_2_0, 27)
MR_decl_label8(branch_and_bound__test_incomplete_solution_2_0, 3,4,8,9,7,5,13,16)
MR_decl_label4(__Unify___branch_and_bound__best_solutions_1_0, 12,5,7,1)
MR_decl_label2(__Unify___branch_and_bound__bnb_profile_0_0, 4,1)
MR_decl_label4(__Unify___branch_and_bound__bnb_state_1_0, 5,7,11,1)
MR_decl_label6(__Compare___branch_and_bound__best_solutions_1_0, 24,7,5,9,11,16)
MR_decl_label10(__Compare___branch_and_bound__bnb_profile_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label5(__Compare___branch_and_bound__bnb_state_1_0, 3,2,6,10,30)
MR_def_extern_entry(branch_and_bound__branch_and_bound_4_0)
MR_def_extern_entry(branch_and_bound__test_incomplete_solution_2_0)
MR_def_extern_entry(branch_and_bound__score_solution_3_0)
MR_def_extern_entry(branch_and_bound__add_alternative_1_0)
MR_def_extern_entry(branch_and_bound__close_alternative_1_0)
MR_def_extern_entry(branch_and_bound__num_alternatives_3_0)
MR_decl_static(branch_and_bound__profile_not_best_solution_2_0)
MR_decl_static(branch_and_bound__test_complete_solution_2_0)
MR_decl_static(branch_and_bound__branch_and_bound_2_4_0)
MR_decl_static(__Unify___branch_and_bound__best_solutions_1_0)
MR_decl_static(__Compare___branch_and_bound__best_solutions_1_0)
MR_def_extern_entry(__Unify___branch_and_bound__bnb_profile_0_0)
MR_def_extern_entry(__Compare___branch_and_bound__bnb_profile_0_0)
MR_def_extern_entry(__Unify___branch_and_bound__bnb_state_1_0)
MR_def_extern_entry(__Compare___branch_and_bound__bnb_state_1_0)
MR_decl_static(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
MR_CTOR1_ADDR(branch_and_bound, bnb_state),
1
},
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_COMMON(0,0),
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
1,
MR_FLOAT_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_branch_and_bound__type_ctor_info_bnb_profile_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(branch_and_bound, bnb_profile)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__branch_and_bound__branch_and_bound_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__branch_and_bound__branch_and_bound_4_0_1,
MR_COMMON(4,0)
},
5,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
MR_COMMON(2,0),
MR_CTOR0_ADDR(unit, unit),
MR_COMMON(3,0)
}
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
0,
0,
0,
0,
0,
1,
0,
0
}
},
};

static const MR_DuFunctorDesc mercury_data_branch_and_bound__du_functor_desc_best_solutions_1_0 = {
	"no_best_solutions",
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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_branch_and_bound__field_types_best_solutions_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_ConstString mercury_data_branch_and_bound__field_names_best_solutions_1_1[] = {
	"bs_solutions",
	"bs_objective_value"
};

static const MR_DuFunctorDesc mercury_data_branch_and_bound__du_functor_desc_best_solutions_1_1 = {
	"best_solutions",
	2,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_branch_and_bound__field_types_best_solutions_1_1,
	mercury_data_branch_and_bound__field_names_best_solutions_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_stag_ordered_best_solutions_1_0[] = {
	&mercury_data_branch_and_bound__du_functor_desc_best_solutions_1_0

};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_stag_ordered_best_solutions_1_1[] = {
	&mercury_data_branch_and_bound__du_functor_desc_best_solutions_1_1

};

const MR_DuPtagLayout mercury_data_branch_and_bound__du_ptag_ordered_best_solutions_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_branch_and_bound__du_stag_ordered_best_solutions_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_branch_and_bound__du_stag_ordered_best_solutions_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_name_ordered_best_solutions_1[] = {
	&mercury_data_branch_and_bound__du_functor_desc_best_solutions_1_1,
	&mercury_data_branch_and_bound__du_functor_desc_best_solutions_1_0
};

const MR_Integer mercury_data_branch_and_bound__functor_number_map_best_solutions_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_branch_and_bound__type_ctor_info_best_solutions_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___branch_and_bound__best_solutions_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___branch_and_bound__best_solutions_1_0)),
	"branch_and_bound",
	"best_solutions",
	{ (void *)mercury_data_branch_and_bound__du_name_ordered_best_solutions_1 },
	{ (void *)mercury_data_branch_and_bound__du_ptag_ordered_best_solutions_1 },
	2,
	4,
	mercury_data_branch_and_bound__functor_number_map_best_solutions_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_branch_and_bound__field_types_bnb_profile_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_branch_and_bound__field_names_bnb_profile_0_0[] = {
	"bnbp_tests_succeeded",
	"bnbp_tests_failed",
	"bnbp_new_best_solution",
	"bnbp_new_equal_solution",
	"bnbp_not_best_solution",
	"bnbp_open_branches",
	"bnbp_closed_branches",
	"bnbp_time_msecs"
};

static const MR_DuFunctorDesc mercury_data_branch_and_bound__du_functor_desc_bnb_profile_0_0 = {
	"bnb_profile",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_branch_and_bound__field_types_bnb_profile_0_0,
	mercury_data_branch_and_bound__field_names_bnb_profile_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_stag_ordered_bnb_profile_0_0[] = {
	&mercury_data_branch_and_bound__du_functor_desc_bnb_profile_0_0

};

const MR_DuPtagLayout mercury_data_branch_and_bound__du_ptag_ordered_bnb_profile_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_branch_and_bound__du_stag_ordered_bnb_profile_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_name_ordered_bnb_profile_0[] = {
	&mercury_data_branch_and_bound__du_functor_desc_bnb_profile_0_0
};

const MR_Integer mercury_data_branch_and_bound__functor_number_map_bnb_profile_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_branch_and_bound__type_ctor_info_bnb_profile_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___branch_and_bound__bnb_profile_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___branch_and_bound__bnb_profile_0_0)),
	"branch_and_bound",
	"bnb_profile",
	{ (void *)mercury_data_branch_and_bound__du_name_ordered_bnb_profile_0 },
	{ (void *)mercury_data_branch_and_bound__du_ptag_ordered_bnb_profile_0 },
	1,
	4,
	mercury_data_branch_and_bound__functor_number_map_bnb_profile_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mutvar__type_ctor_info_mutvar_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_branch_and_bound__pti_best_solutions_1__pseudo_1 = {
	&mercury_data_branch_and_bound__type_ctor_info_best_solutions_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mutvar__pti_mutvar_1__pseudo_branch_and_bound__pti_best_solutions_1__pseudo_1 = {
	&mercury_data_mutvar__type_ctor_info_mutvar_1,
{	(MR_PseudoTypeInfo) &mercury_data_branch_and_bound__pti_best_solutions_1__pseudo_1
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_float_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_mutvar__ti_mutvar_1branch_and_bound__type_ctor_info_bnb_profile_0 = {
	&mercury_data_mutvar__type_ctor_info_mutvar_1,
{	(MR_TypeInfo) &mercury_data_branch_and_bound__type_ctor_info_bnb_profile_0
}};

const MR_PseudoTypeInfo mercury_data_branch_and_bound__field_types_bnb_state_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mutvar__pti_mutvar_1__pseudo_branch_and_bound__pti_best_solutions_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data___vpti_func_2__pseudo_1__plain_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_mutvar__ti_mutvar_1branch_and_bound__type_ctor_info_bnb_profile_0
};

const MR_ConstString mercury_data_branch_and_bound__field_names_bnb_state_1_0[] = {
	"best_solutions_mutable",
	"objective_function",
	"profile"
};

static const MR_DuFunctorDesc mercury_data_branch_and_bound__du_functor_desc_bnb_state_1_0 = {
	"bnb_state",
	3,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_branch_and_bound__field_types_bnb_state_1_0,
	mercury_data_branch_and_bound__field_names_bnb_state_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_stag_ordered_bnb_state_1_0[] = {
	&mercury_data_branch_and_bound__du_functor_desc_bnb_state_1_0

};

const MR_DuPtagLayout mercury_data_branch_and_bound__du_ptag_ordered_bnb_state_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_branch_and_bound__du_stag_ordered_bnb_state_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_branch_and_bound__du_name_ordered_bnb_state_1[] = {
	&mercury_data_branch_and_bound__du_functor_desc_bnb_state_1_0
};

const MR_Integer mercury_data_branch_and_bound__functor_number_map_bnb_state_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_branch_and_bound__type_ctor_info_bnb_state_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___branch_and_bound__bnb_state_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___branch_and_bound__bnb_state_1_0)),
	"branch_and_bound",
	"bnb_state",
	{ (void *)mercury_data_branch_and_bound__du_name_ordered_bnb_state_1 },
	{ (void *)mercury_data_branch_and_bound__du_ptag_ordered_bnb_state_1 },
	1,
	4,
	mercury_data_branch_and_bound__functor_number_map_bnb_state_1
};


static const MR_UserClosureId
mercury_data__closure_layout__branch_and_bound__branch_and_bound_4_0_1 = {
{
MR_PREDICATE,
"branch_and_bound",
"branch_and_bound",
"branch_and_bound_2",
4,
0
},
"branch_and_bound",
"branch_and_bound.m",
146,
"8"
};


extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(benchmarking__benchmark_det_5_0);

MR_BEGIN_MODULE(branch_and_bound_module0)
	MR_init_entry1(branch_and_bound__branch_and_bound_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__branch_and_bound_4_0);
	MR_init_label1(branch_and_bound__branch_and_bound_4_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'branch_and_bound'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__branch_and_bound__branch_and_bound_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(branch_and_bound__branch_and_bound_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(benchmarking__benchmark_det_5_0,
		branch_and_bound__branch_and_bound_4_0_i5);
MR_def_label(branch_and_bound__branch_and_bound_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__get_mutvar_2_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(mutvar__set_mutvar_2_0);
MR_decl_entry(builtin__semidet_fail_0_0);

MR_BEGIN_MODULE(branch_and_bound_module1)
	MR_init_entry1(branch_and_bound__test_incomplete_solution_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__test_incomplete_solution_2_0);
	MR_init_label8(branch_and_bound__test_incomplete_solution_2_0,3,4,8,9,7,5,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_incomplete_solution'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__branch_and_bound__test_incomplete_solution_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(branch_and_bound, best_solutions);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__test_incomplete_solution_2_0_i3);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__test_incomplete_solution_2_0_i4);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(branch_and_bound__test_incomplete_solution_2_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(branch_and_bound__test_incomplete_solution_2_0_i7);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_sv(2), 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(branch_and_bound__test_incomplete_solution_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__branch_and_bound__test_incomplete_solution_2_0_i9);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_sv(4)))) {
		MR_GOTO_LAB(branch_and_bound__test_incomplete_solution_2_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		branch_and_bound__test_incomplete_solution_2_0_i16);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tfield(0, MR_r1, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		branch_and_bound__test_incomplete_solution_2_0_i13);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__semidet_fail_0_0);
MR_def_label(branch_and_bound__test_incomplete_solution_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module2)
	MR_init_entry1(branch_and_bound__score_solution_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__score_solution_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'score_solution'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__branch_and_bound__score_solution_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(branch_and_bound__score_solution_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module3)
	MR_init_entry1(branch_and_bound__add_alternative_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__add_alternative_1_0);
	MR_init_label1(branch_and_bound__add_alternative_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_alternative'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__branch_and_bound__add_alternative_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__add_alternative_1_0_i2);
MR_def_label(branch_and_bound__add_alternative_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_tfield(0, MR_r1, 5) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mutvar__set_mutvar_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module4)
	MR_init_entry1(branch_and_bound__close_alternative_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__close_alternative_1_0);
	MR_init_label1(branch_and_bound__close_alternative_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'close_alternative'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__branch_and_bound__close_alternative_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__close_alternative_1_0_i2);
MR_def_label(branch_and_bound__close_alternative_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = ((MR_Integer) MR_tfield(0, MR_r1, 6) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mutvar__set_mutvar_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module5)
	MR_init_entry1(branch_and_bound__num_alternatives_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__num_alternatives_3_0);
	MR_init_label1(branch_and_bound__num_alternatives_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_alternatives'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__branch_and_bound__num_alternatives_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__num_alternatives_3_0_i2);
MR_def_label(branch_and_bound__num_alternatives_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_r2 = MR_tfield(0, MR_tempr1, 6);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module6)
	MR_init_entry1(branch_and_bound__profile_not_best_solution_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__profile_not_best_solution_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'profile_not_best_solution'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(branch_and_bound__profile_not_best_solution_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_r2, 4) = ((MR_Integer) MR_tfield(0, MR_r1, 4) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_r1, 7);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module7)
	MR_init_entry1(branch_and_bound__test_complete_solution_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__test_complete_solution_2_0);
	MR_init_label10(branch_and_bound__test_complete_solution_2_0,2,4,5,9,13,8,21,7,23,24)
	MR_init_label1(branch_and_bound__test_complete_solution_2_0,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_complete_solution'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(branch_and_bound__test_complete_solution_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(branch_and_bound__test_complete_solution_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__branch_and_bound__test_complete_solution_2_0_i2);
MR_def_label(branch_and_bound__test_complete_solution_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(branch_and_bound, best_solutions);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__test_complete_solution_2_0_i4);
MR_def_label(branch_and_bound__test_complete_solution_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		branch_and_bound__test_complete_solution_2_0_i5);
MR_def_label(branch_and_bound__test_complete_solution_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(branch_and_bound__test_complete_solution_2_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr3, 2) = ((MR_Integer) MR_tfield(0, MR_r1, 2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_r1, 7);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r4 = MR_r5;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(branch_and_bound__test_complete_solution_2_0_i8);
	}
MR_def_label(branch_and_bound__test_complete_solution_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr4, 1);
	MR_r5 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_word_to_float(MR_sv(5)) >= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(branch_and_bound__test_complete_solution_2_0_i13);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr3, 2) = ((MR_Integer) MR_tfield(0, MR_r1, 2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_r1, 7);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r4 = MR_r5;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(branch_and_bound__test_complete_solution_2_0_i8);
	}
MR_def_label(branch_and_bound__test_complete_solution_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) != MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(branch_and_bound__test_complete_solution_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 8);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr3, 3) = ((MR_Integer) MR_tfield(0, MR_r1, 3) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr3, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_tfield(0, MR_r1, 7);
	MR_r2 = MR_sv(1);
	MR_tempr4 = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r4 = MR_tempr4;
	MR_r1 = MR_sv(6);
	}
MR_def_label(branch_and_bound__test_complete_solution_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		branch_and_bound__test_complete_solution_2_0_i21);
MR_def_label(branch_and_bound__test_complete_solution_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		branch_and_bound__test_complete_solution_2_0_i27);
MR_def_label(branch_and_bound__test_complete_solution_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(branch_and_bound__profile_not_best_solution_2_0,
		branch_and_bound__test_complete_solution_2_0_i23);
MR_def_label(branch_and_bound__test_complete_solution_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		branch_and_bound__test_complete_solution_2_0_i24);
MR_def_label(branch_and_bound__test_complete_solution_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(builtin__semidet_fail_0_0);
MR_def_label(branch_and_bound__test_complete_solution_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module8)
	MR_init_entry1(branch_and_bound__branch_and_bound_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__branch_and_bound__branch_and_bound_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'branch_and_bound_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(branch_and_bound__branch_and_bound_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(branch_and_bound_module9)
	MR_init_entry1(__Unify___branch_and_bound__best_solutions_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___branch_and_bound__best_solutions_1_0);
	MR_init_label4(__Unify___branch_and_bound__best_solutions_1_0,12,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___branch_and_bound__best_solutions_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__best_solutions_1_0_i12);
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
		MR_GOTO_LAB(__Unify___branch_and_bound__best_solutions_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___branch_and_bound__best_solutions_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___branch_and_bound__best_solutions_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__best_solutions_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___branch_and_bound__best_solutions_1_0_i7);
MR_def_label(__Unify___branch_and_bound__best_solutions_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__best_solutions_1_0_i1);
	}
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___branch_and_bound__best_solutions_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(branch_and_bound_module10)
	MR_init_entry1(__Compare___branch_and_bound__best_solutions_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___branch_and_bound__best_solutions_1_0);
	MR_init_label6(__Compare___branch_and_bound__best_solutions_1_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___branch_and_bound__best_solutions_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__best_solutions_1_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__best_solutions_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__best_solutions_1_0_i7);
	}
MR_def_label(__Compare___branch_and_bound__best_solutions_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___branch_and_bound__best_solutions_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___branch_and_bound__best_solutions_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__best_solutions_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___branch_and_bound__best_solutions_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___branch_and_bound__best_solutions_1_0_i11);
MR_def_label(__Compare___branch_and_bound__best_solutions_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__best_solutions_1_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___branch_and_bound__best_solutions_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(branch_and_bound_module11)
	MR_init_entry1(__Unify___branch_and_bound__bnb_profile_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___branch_and_bound__bnb_profile_0_0);
	MR_init_label2(__Unify___branch_and_bound__bnb_profile_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___branch_and_bound__bnb_profile_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i4);
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
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_profile_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___branch_and_bound__bnb_profile_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___branch_and_bound__bnb_profile_0_0,1)
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

MR_BEGIN_MODULE(branch_and_bound_module12)
	MR_init_entry1(__Compare___branch_and_bound__bnb_profile_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___branch_and_bound__bnb_profile_0_0);
	MR_init_label10(__Compare___branch_and_bound__bnb_profile_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___branch_and_bound__bnb_profile_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i2);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i5);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i9);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i13);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i17);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i21);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i25);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___branch_and_bound__bnb_profile_0_0_i29);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_profile_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___branch_and_bound__bnb_profile_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mutvar__mutvar_1_0);
MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(branch_and_bound_module13)
	MR_init_entry1(__Unify___branch_and_bound__bnb_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___branch_and_bound__bnb_state_1_0);
	MR_init_label4(__Unify___branch_and_bound__bnb_state_1_0,5,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___branch_and_bound__bnb_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_state_1_0_i11);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(branch_and_bound, best_solutions);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mutvar__mutvar_1_0,
		__Unify___branch_and_bound__bnb_state_1_0_i5);
MR_def_label(__Unify___branch_and_bound__bnb_state_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_state_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___branch_and_bound__bnb_state_1_0_i7);
MR_def_label(__Unify___branch_and_bound__bnb_state_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___branch_and_bound__bnb_state_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mutvar__mutvar_1_0);
MR_def_label(__Unify___branch_and_bound__bnb_state_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___branch_and_bound__bnb_state_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mutvar__mutvar_1_0);
MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(branch_and_bound_module14)
	MR_init_entry1(__Compare___branch_and_bound__bnb_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___branch_and_bound__bnb_state_1_0);
	MR_init_label5(__Compare___branch_and_bound__bnb_state_1_0,3,2,6,10,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___branch_and_bound__bnb_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_state_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(__Compare___branch_and_bound__bnb_state_1_0_i2);
MR_def_label(__Compare___branch_and_bound__bnb_state_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___branch_and_bound__bnb_state_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr7 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr7, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr7, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(branch_and_bound, best_solutions);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tempr4 = MR_tempr7;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr6;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(__Compare___mutvar__mutvar_1_0,
		__Compare___branch_and_bound__bnb_state_1_0_i6);
MR_def_label(__Compare___branch_and_bound__bnb_state_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_state_1_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___branch_and_bound__bnb_state_1_0_i10);
MR_def_label(__Compare___branch_and_bound__bnb_state_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___branch_and_bound__bnb_state_1_0_i30);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mutvar__mutvar_1_0);
MR_def_label(__Compare___branch_and_bound__bnb_state_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__new_mutvar_2_1);
MR_decl_entry(mutvar__new_mutvar_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(require__unexpected_2_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(branch_and_bound_module15)
	MR_init_entry1(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0);
	MR_init_label10(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,3,4,7,8,10,6,13,14,15,17)
	MR_init_label1(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__branch_and_bound_2__[4]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(branch_and_bound, best_solutions);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i3);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(branch_and_bound, bnb_profile);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i4);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_save_maxfr(MR_sv(7));
	MR_sv(10) = (MR_Word) MR_maxfr;
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i7);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(branch_and_bound__test_complete_solution_2_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i8);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_np_call_localret_ent(builtin__semidet_fail_0_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i10);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_redoip_slot_word(MR_tempr1) = MR_sv(8);
	MR_redofr_slot_word(MR_tempr1) = MR_sv(9);
	MR_r1 = (MR_Word) MR_string_const("branch_and_bound", 16);
	MR_r2 = (MR_Word) MR_string_const("Failure driven loop must fail", 29);
	}
	MR_np_call_localret_ent(require__unexpected_2_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i13);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(7));
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i14);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i15);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i17);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i16);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0_i16);
MR_def_label(f_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_114_97_110_99_104_95_97_110_100_95_98_111_117_110_100_95_50_95_95_91_52_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__branch_and_bound_maybe_bunch_0(void)
{
	branch_and_bound_module0();
	branch_and_bound_module1();
	branch_and_bound_module2();
	branch_and_bound_module3();
	branch_and_bound_module4();
	branch_and_bound_module5();
	branch_and_bound_module6();
	branch_and_bound_module7();
	branch_and_bound_module8();
	branch_and_bound_module9();
	branch_and_bound_module10();
	branch_and_bound_module11();
	branch_and_bound_module12();
	branch_and_bound_module13();
	branch_and_bound_module14();
	branch_and_bound_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__branch_and_bound__init(void);
void mercury__branch_and_bound__init_type_tables(void);
void mercury__branch_and_bound__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__branch_and_bound__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__branch_and_bound__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__branch_and_bound__init_threadscope_string_table(void);
#endif

void mercury__branch_and_bound__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__branch_and_bound_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_branch_and_bound__type_ctor_info_best_solutions_1,
		branch_and_bound__best_solutions_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_branch_and_bound__type_ctor_info_bnb_profile_0,
		branch_and_bound__bnb_profile_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_branch_and_bound__type_ctor_info_bnb_state_1,
		branch_and_bound__bnb_state_1_0);
	mercury__branch_and_bound__init_debugger();
}

void mercury__branch_and_bound__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_branch_and_bound__type_ctor_info_best_solutions_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_branch_and_bound__type_ctor_info_bnb_profile_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_branch_and_bound__type_ctor_info_bnb_state_1);
	}
}


void mercury__branch_and_bound__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__branch_and_bound__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__branch_and_bound);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__branch_and_bound__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__branch_and_bound__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
