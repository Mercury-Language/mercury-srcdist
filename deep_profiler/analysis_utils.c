/*
** Automatically generated from `analysis_utils.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__analysis_utils__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 284 "profile.int"
#include "profile.mh"

#line 28 "analysis_utils.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 32 "analysis_utils.c"
#line 250 "../library/array.int"
#include "array.mh"

#line 36 "analysis_utils.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 40 "analysis_utils.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 44 "analysis_utils.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 48 "analysis_utils.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "analysis_utils.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 56 "analysis_utils.c"
#line 57 "analysis_utils.c"
#include "analysis_utils.mh"

#line 60 "analysis_utils.c"
#line 61 "analysis_utils.c"
#ifndef ANALYSIS_UTILS_DECL_GUARD
#define ANALYSIS_UTILS_DECL_GUARD

#line 65 "analysis_utils.c"
#line 66 "analysis_utils.c"

#endif
#line 69 "analysis_utils.c"

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
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_analysis_utils__type_ctor_info_callee_0,
	mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1,
	mercury_data_analysis_utils__type_ctor_info_cost_and_callees_0,
	mercury_data_analysis_utils__type_ctor_info_higher_order_0;
MR_decl_label10(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0, 4,6,7,8,9,10,11,12,13,3)
MR_decl_label10(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0, 17,19,20,21,22,23,24,26,15,27)
MR_decl_label3(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0, 29,30,32)
MR_decl_label8(analysis_utils__build_recursive_call_site_cost_map_6_0, 4,3,8,6,12,14,15,17)
MR_decl_label10(analysis_utils__build_recursive_call_site_cost_map_6_1, 4,3,11,9,15,17,18,20,8,6)
MR_decl_label3(analysis_utils__build_recursive_call_site_cost_map_6_1, 26,25,28)
MR_decl_label10(analysis_utils__build_recursive_call_site_counts_map_5_0, 5,6,8,13,15,16,14,12,19,3)
MR_decl_label10(analysis_utils__build_recursive_call_site_counts_map_5_0, 24,28,30,31,32,27,33,38,36,40)
MR_decl_label2(analysis_utils__build_recursive_call_site_counts_map_5_0, 35,22)
MR_decl_label10(analysis_utils__build_static_call_site_cost_and_callee_map_4_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label10(analysis_utils__build_static_call_site_cost_and_callee_map_4_0, 11,15,14,18,17,21,20,24,23,27)
MR_decl_label3(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0, 2,3,4)
MR_decl_label5(analysis_utils__call_site_dynamic_get_count_and_callee_4_0, 3,5,6,7,2)
MR_decl_label2(analysis_utils__cost_and_callees_is_recursive_2_0, 3,2)
MR_decl_label5(analysis_utils__deep_get_maybe_procrep_3_0, 2,5,7,6,3)
MR_decl_label6(analysis_utils__find_clique_first_and_other_procs_4_0, 2,3,6,8,11,5)
MR_decl_label4(analysis_utils__proc_dynamic_paired_call_site_slots_3_0, 2,3,4,5)
MR_decl_label5(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0, 2,3,4,5,6)
MR_decl_label5(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0, 2,3,4,5,6)
MR_decl_label2(__Unify___analysis_utils__callee_0_0, 4,1)
MR_decl_label4(__Unify___analysis_utils__cost_and_callees_1_0, 4,6,8,1)
MR_decl_label4(__Compare___analysis_utils__callee_0_0, 3,2,5,21)
MR_decl_label6(__Compare___analysis_utils__cost_and_callees_1_0, 3,2,5,9,13,37)
MR_def_extern_entry(analysis_utils__find_clique_first_and_other_procs_4_0)
MR_def_extern_entry(analysis_utils__deep_get_maybe_procrep_3_0)
MR_def_extern_entry(analysis_utils__build_static_call_site_cost_and_callee_map_4_0)
MR_decl_static(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0)
MR_def_extern_entry(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0)
MR_def_extern_entry(analysis_utils__proc_dynamic_paired_call_site_slots_3_0)
MR_def_extern_entry(analysis_utils__build_recursive_call_site_cost_map_6_0)
MR_def_extern_entry(analysis_utils__build_recursive_call_site_cost_map_6_1)
MR_def_extern_entry(analysis_utils__cost_and_callees_is_recursive_2_0)
MR_decl_static(analysis_utils__call_site_dynamic_get_count_and_callee_4_0)
MR_decl_static(analysis_utils__build_recursive_call_site_counts_map_5_0)
MR_def_extern_entry(__Unify___analysis_utils__callee_0_0)
MR_def_extern_entry(__Compare___analysis_utils__callee_0_0)
MR_def_extern_entry(__Unify___analysis_utils__cost_and_callees_0_0)
MR_def_extern_entry(__Compare___analysis_utils__cost_and_callees_0_0)
MR_def_extern_entry(__Unify___analysis_utils__cost_and_callees_1_0)
MR_def_extern_entry(__Compare___analysis_utils__cost_and_callees_1_0)
MR_def_extern_entry(__Unify___analysis_utils__higher_order_0_0)
MR_def_extern_entry(__Compare___analysis_utils__higher_order_0_0)
MR_decl_static(analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_0)
MR_decl_static(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0)
MR_decl_static(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(profile, proc_static_ptr)
}
},
{
{
MR_CTOR1_ADDR(analysis_utils, cost_and_callees),
MR_CTOR0_ADDR(analysis_utils, callee)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(profile, call_site_static_ptr),
MR_CTOR0_ADDR(profile, call_site_array_slot)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path),
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__find_clique_first_and_other_procs_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__find_clique_first_and_other_procs_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
MR_string_const("Cannot find procedure representation", 36)
},
{
MR_string_const("Could not detect recursion type", 31)
},
{
MR_string_const("No average recursion depth for this recursion type", 50)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_1_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(analysis_utils, callee),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_1_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, clique_ptr),
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_1_2;
static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_counts_map_5_0_1;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(5,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(measurements, cs_cost_csq)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_1_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(5,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(measurements, cs_cost_csq)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_recursive_call_site_counts_map_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(profile, deep),
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_INT_CTOR_ADDR,
MR_COMMON(0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_counts_map_5_0_2;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis_utils__build_recursive_call_site_counts_map_5_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

MR_decl_entry(fn__int__plus_2_0);
static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__int__plus_2_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;

const MR_PseudoTypeInfo mercury_data_analysis_utils__field_types_callee_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
};

const MR_ConstString mercury_data_analysis_utils__field_names_callee_0_0[] = {
	"c_clique",
	"c_csd"
};

static const MR_DuFunctorDesc mercury_data_analysis_utils__du_functor_desc_callee_0_0 = {
	"callee",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis_utils__field_types_callee_0_0,
	mercury_data_analysis_utils__field_names_callee_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_analysis_utils__du_stag_ordered_callee_0_0[] = {
	&mercury_data_analysis_utils__du_functor_desc_callee_0_0

};

const MR_DuPtagLayout mercury_data_analysis_utils__du_ptag_ordered_callee_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis_utils__du_stag_ordered_callee_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis_utils__du_name_ordered_callee_0[] = {
	&mercury_data_analysis_utils__du_functor_desc_callee_0_0
};

const MR_Integer mercury_data_analysis_utils__functor_number_map_callee_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis_utils__callee_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis_utils__callee_0_0)),
	"analysis_utils",
	"callee",
	{ (void *)mercury_data_analysis_utils__du_name_ordered_callee_0 },
	{ (void *)mercury_data_analysis_utils__du_ptag_ordered_callee_0 },
	1,
	4,
	mercury_data_analysis_utils__functor_number_map_callee_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_cs_cost_csq_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_higher_order_0;

const MR_PseudoTypeInfo mercury_data_analysis_utils__field_types_cost_and_callees_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_measurements__type_ctor_info_cs_cost_csq_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_analysis_utils__type_ctor_info_higher_order_0
};

const MR_ConstString mercury_data_analysis_utils__field_names_cost_and_callees_1_0[] = {
	"cac_cost",
	"cac_exits",
	"cac_callees",
	"cac_call_site_is_ho"
};

static const MR_DuFunctorDesc mercury_data_analysis_utils__du_functor_desc_cost_and_callees_1_0 = {
	"cost_and_callees",
	4,
	4,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis_utils__field_types_cost_and_callees_1_0,
	mercury_data_analysis_utils__field_names_cost_and_callees_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_analysis_utils__du_stag_ordered_cost_and_callees_1_0[] = {
	&mercury_data_analysis_utils__du_functor_desc_cost_and_callees_1_0

};

const MR_DuPtagLayout mercury_data_analysis_utils__du_ptag_ordered_cost_and_callees_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis_utils__du_stag_ordered_cost_and_callees_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis_utils__du_name_ordered_cost_and_callees_1[] = {
	&mercury_data_analysis_utils__du_functor_desc_cost_and_callees_1_0
};

const MR_Integer mercury_data_analysis_utils__functor_number_map_cost_and_callees_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis_utils__cost_and_callees_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis_utils__cost_and_callees_1_0)),
	"analysis_utils",
	"cost_and_callees",
	{ (void *)mercury_data_analysis_utils__du_name_ordered_cost_and_callees_1 },
	{ (void *)mercury_data_analysis_utils__du_ptag_ordered_cost_and_callees_1 },
	1,
	4,
	mercury_data_analysis_utils__functor_number_map_cost_and_callees_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_callee_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
	&mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1,
{	(MR_TypeInfo) &mercury_data_analysis_utils__type_ctor_info_callee_0
}};

const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_cost_and_callees_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis_utils__cost_and_callees_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis_utils__cost_and_callees_0_0)),
	"analysis_utils",
	"cost_and_callees",
	{ 0 },
	{ (void *)&mercury_data_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_analysis_utils__enum_functor_desc_higher_order_0_0 = {
	"first_order_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_analysis_utils__enum_functor_desc_higher_order_0_1 = {
	"higher_order_call",
	1
};

const MR_EnumFunctorDescPtr mercury_data_analysis_utils__enum_value_ordered_higher_order_0[] = {
	&mercury_data_analysis_utils__enum_functor_desc_higher_order_0_0,
	&mercury_data_analysis_utils__enum_functor_desc_higher_order_0_1
};

const MR_EnumFunctorDescPtr mercury_data_analysis_utils__enum_name_ordered_higher_order_0[] = {
	&mercury_data_analysis_utils__enum_functor_desc_higher_order_0_0,
	&mercury_data_analysis_utils__enum_functor_desc_higher_order_0_1
};

const MR_Integer mercury_data_analysis_utils__functor_number_map_higher_order_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis_utils__type_ctor_info_higher_order_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis_utils__higher_order_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis_utils__higher_order_0_0)),
	"analysis_utils",
	"higher_order",
	{ (void *)mercury_data_analysis_utils__enum_name_ordered_higher_order_0 },
	{ (void *)mercury_data_analysis_utils__enum_value_ordered_higher_order_0 },
	2,
	4,
	mercury_data_analysis_utils__functor_number_map_higher_order_0
};


static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_counts_map_5_0_2 = {
{
MR_FUNCTION,
"int",
"int",
"plus",
3,
0
},
"analysis_utils",
"analysis_utils.m",
351,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_counts_map_5_0_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"call_site_dynamic_get_count_and_callee",
4,
0
},
"analysis_utils",
"analysis_utils.m",
349,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_1_2 = {
{
MR_FUNCTION,
"analysis_utils",
"analysis_utils",
"lambda2_analysis_utils_m_272",
4,
0
},
"analysis_utils",
"analysis_utils.m",
272,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_1_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"build_recursive_call_site_counts_map",
5,
0
},
"analysis_utils",
"analysis_utils.m",
324,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_0_2 = {
{
MR_FUNCTION,
"analysis_utils",
"analysis_utils",
"lambda_analysis_utils_m_272",
4,
0
},
"analysis_utils",
"analysis_utils.m",
272,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_recursive_call_site_cost_map_6_0_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"build_recursive_call_site_counts_map",
5,
0
},
"analysis_utils",
"analysis_utils.m",
324,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"call_site_dynamic_get_callee_and_costs",
5,
0
},
"analysis_utils",
"analysis_utils.m",
179,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis_utils__find_clique_first_and_other_procs_4_0_1 = {
{
MR_PREDICATE,
"analysis_utils",
"analysis_utils",
"lambda_analysis_utils_m_134",
2,
0
},
"analysis_utils",
"analysis_utils.m",
134,
"14"
};


MR_decl_entry(profile__deep_lookup_clique_members_3_0);
MR_decl_entry(profile__deep_lookup_clique_parents_3_0);
MR_decl_entry(profile__valid_call_site_dynamic_ptr_2_0);
MR_decl_entry(profile__deep_lookup_call_site_dynamics_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
MR_decl_entry(list__negated_filter_3_0);

MR_BEGIN_MODULE(analysis_utils_module0)
	MR_init_entry1(analysis_utils__find_clique_first_and_other_procs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__find_clique_first_and_other_procs_4_0);
	MR_init_label6(analysis_utils__find_clique_first_and_other_procs_4_0,2,3,6,8,11,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_clique_first_and_other_procs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__find_clique_first_and_other_procs_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(profile__deep_lookup_clique_members_3_0,
		analysis_utils__find_clique_first_and_other_procs_4_0_i2);
MR_def_label(analysis_utils__find_clique_first_and_other_procs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_parents_3_0,
		analysis_utils__find_clique_first_and_other_procs_4_0_i3);
MR_def_label(analysis_utils__find_clique_first_and_other_procs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		analysis_utils__find_clique_first_and_other_procs_4_0_i6);
MR_def_label(analysis_utils__find_clique_first_and_other_procs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__find_clique_first_and_other_procs_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_dynamics_3_0,
		analysis_utils__find_clique_first_and_other_procs_4_0_i8);
MR_def_label(analysis_utils__find_clique_first_and_other_procs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__negated_filter_3_0,
		analysis_utils__find_clique_first_and_other_procs_4_0_i11);
MR_def_label(analysis_utils__find_clique_first_and_other_procs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(analysis_utils__find_clique_first_and_other_procs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_get_maybe_progrep_2_0);
MR_decl_entry(profile__deep_lookup_proc_statics_3_0);
MR_decl_entry(program_representation_utils__progrep_search_proc_3_0);

MR_BEGIN_MODULE(analysis_utils_module1)
	MR_init_entry1(analysis_utils__deep_get_maybe_procrep_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__deep_get_maybe_procrep_3_0);
	MR_init_label5(analysis_utils__deep_get_maybe_procrep_3_0,2,5,7,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deep_get_maybe_procrep'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__deep_get_maybe_procrep_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(profile__deep_get_maybe_progrep_2_0,
		analysis_utils__deep_get_maybe_procrep_3_0_i2);
MR_def_label(analysis_utils__deep_get_maybe_procrep_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(analysis_utils__deep_get_maybe_procrep_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		analysis_utils__deep_get_maybe_procrep_3_0_i5);
MR_def_label(analysis_utils__deep_get_maybe_procrep_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(program_representation_utils__progrep_search_proc_3_0,
		analysis_utils__deep_get_maybe_procrep_3_0_i7);
MR_def_label(analysis_utils__deep_get_maybe_procrep_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__deep_get_maybe_procrep_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(analysis_utils__deep_get_maybe_procrep_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
MR_def_label(analysis_utils__deep_get_maybe_procrep_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_call_site_statics_3_0);
MR_decl_entry(profile__deep_lookup_css_own_3_0);
MR_decl_entry(profile__deep_lookup_css_desc_3_0);
MR_decl_entry(fn__measurements__calls_1_0);
MR_decl_entry(fn__measurements__callseqs_1_0);
MR_decl_entry(fn__measurements__inherit_callseqs_1_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__measurements__build_cs_cost_csq_2_0);
MR_decl_entry(fn__measurements__exits_1_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(fn__set__set_1_0);

MR_BEGIN_MODULE(analysis_utils_module2)
	MR_init_entry1(analysis_utils__build_static_call_site_cost_and_callee_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__build_static_call_site_cost_and_callee_map_4_0);
	MR_init_label10(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,2,3,4,5,6,7,8,9,10,12)
	MR_init_label10(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,11,15,14,18,17,21,20,24,23,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_static_call_site_cost_and_callee_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__build_static_call_site_cost_and_callee_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i2);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_css_own_3_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i3);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(profile__deep_lookup_css_desc_3_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i4);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i5);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i6);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i7);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i8);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_2_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i9);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__exits_1_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i10);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	if (!((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 3)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i12);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(4) = MR_tfield(0, MR_r3, 4);
	MR_GOTO_LAB(analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i11);
	}
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	}
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i15);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i18);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i21);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i23);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_np_call_localret_ent(fn__set__init_0_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i24);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_np_call_localret_ent(fn__set__set_1_0,
		analysis_utils__build_static_call_site_cost_and_callee_map_4_0_i27);
MR_def_label(analysis_utils__build_static_call_site_cost_and_callee_map_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__lookup_call_site_dynamics_3_0);
MR_decl_entry(profile__lookup_csd_desc_3_0);
MR_decl_entry(profile__lookup_clique_index_3_0);

MR_BEGIN_MODULE(analysis_utils_module3)
	MR_init_entry1(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__call_site_dynamic_get_callee_and_costs_5_0);
	MR_init_label3(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_get_callee_and_costs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_np_call_localret_ent(profile__lookup_call_site_dynamics_3_0,
		analysis_utils__call_site_dynamic_get_callee_and_costs_5_0_i2);
MR_def_label(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 18);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__lookup_csd_desc_3_0,
		analysis_utils__call_site_dynamic_get_callee_and_costs_5_0_i3);
MR_def_label(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 9);
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
	}
	MR_np_call_localret_ent(profile__lookup_clique_index_3_0,
		analysis_utils__call_site_dynamic_get_callee_and_costs_5_0_i4);
MR_def_label(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(3), 2);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__to_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
MR_decl_entry(list__map3_5_0);
MR_decl_entry(fn__measurements__sum_own_infos_1_0);
MR_decl_entry(fn__measurements__sum_inherit_infos_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(profile__lookup_call_site_statics_3_0);

MR_BEGIN_MODULE(analysis_utils_module4)
	MR_init_entry1(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
	MR_init_label10(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,4,6,7,8,9,10,11,12,13,3)
	MR_init_label10(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,17,19,20,21,22,23,24,26,15,27)
	MR_init_label3(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,29,30,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_dynamic_call_site_cost_and_callee_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i3);
	}
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i4);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map3_5_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i6);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__sum_own_infos_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i7);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__sum_inherit_infos_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i8);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i9);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i10);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i11);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(7) + (MR_Integer) MR_r1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i12);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_2_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i13);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__exits_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i26);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r4, 0);
	MR_sv(3) = MR_r3;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i17);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(analysis_utils__call_site_dynamic_get_callee_and_costs_5_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i19);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i20);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i21);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__measurements__inherit_callseqs_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i22);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(7) + (MR_Integer) MR_r1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i23);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_2_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i24);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__exits_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i26);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_np_call_localret_ent(fn__set__set_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i29);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Integer) 0;
	MR_f(1) = (MR_Float) 0.0000000000000000;
	}
	MR_np_call_localret_ent(fn__measurements__build_cs_cost_csq_2_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i27);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_np_call_localret_ent(fn__set__set_1_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i29);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__lookup_call_site_statics_3_0,
		analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i30);
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (!((((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 3)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0_i32);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_r1, 4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_r3 = MR_tfield(0, MR_r1, 4);
	MR_r5 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_proc_dynamics_3_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(analysis_utils_module5)
	MR_init_entry1(analysis_utils__proc_dynamic_paired_call_site_slots_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__proc_dynamic_paired_call_site_slots_3_0);
	MR_init_label4(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_dynamic_paired_call_site_slots'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__proc_dynamic_paired_call_site_slots_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(profile__deep_lookup_proc_dynamics_3_0,
		analysis_utils__proc_dynamic_paired_call_site_slots_3_0_i2);
MR_def_label(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(profile__deep_lookup_proc_statics_3_0,
		analysis_utils__proc_dynamic_paired_call_site_slots_3_0_i3);
MR_def_label(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 8);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		analysis_utils__proc_dynamic_paired_call_site_slots_3_0_i4);
MR_def_label(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_static_ptr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__to_list_2_0,
		analysis_utils__proc_dynamic_paired_call_site_slots_3_0_i5);
MR_def_label(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(assoc_list__from_corresponding_lists_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(measurements__recursion_depth_is_base_case_1_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__map__map_values_only_2_0);

MR_BEGIN_MODULE(analysis_utils_module6)
	MR_init_entry1(analysis_utils__build_recursive_call_site_cost_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__build_recursive_call_site_cost_map_6_0);
	MR_init_label8(analysis_utils__build_recursive_call_site_cost_map_6_0,4,3,8,6,12,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call_site_cost_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__build_recursive_call_site_cost_map_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i4);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	* (MR_Float *) &MR_sv(5) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr1, 2));
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(measurements__recursion_depth_is_base_case_1_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i8);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i17);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i12);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__build_recursive_call_site_counts_map_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i14);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i15);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 65537;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(5)));
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		analysis_utils__build_recursive_call_site_cost_map_6_0_i17);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(analysis_utils_module7)
	MR_init_entry1(analysis_utils__build_recursive_call_site_cost_map_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__build_recursive_call_site_cost_map_6_1);
	MR_init_label10(analysis_utils__build_recursive_call_site_cost_map_6_1,4,3,11,9,15,17,18,20,8,6)
	MR_init_label3(analysis_utils__build_recursive_call_site_cost_map_6_1,26,25,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call_site_cost_map'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__build_recursive_call_site_cost_map_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_1_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i4);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_1_i6);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_1_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	* (MR_Float *) &MR_sv(5) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr1, 2));
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(measurements__recursion_depth_is_base_case_1_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i11);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_1_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i20);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis_utils__proc_dynamic_paired_call_site_slots_3_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i15);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__build_recursive_call_site_counts_map_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i17);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i18);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 65537;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(5)));
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, cs_cost_csq);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__map_values_only_2_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i20);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis_utils", 14);
	MR_r2 = (MR_Word) MR_string_const("Expected valid depth for known recursion type", 45);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_1_i25);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("; and ", 6);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		analysis_utils__build_recursive_call_site_cost_map_6_1_i26);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_cost_map_6_1_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_proceed();
MR_def_label(analysis_utils__build_recursive_call_site_cost_map_6_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(analysis_utils_module8)
	MR_init_entry1(analysis_utils__cost_and_callees_is_recursive_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__cost_and_callees_is_recursive_2_0);
	MR_init_label2(analysis_utils__cost_and_callees_is_recursive_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_and_callees_is_recursive'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis_utils__cost_and_callees_is_recursive_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(analysis_utils__cost_and_callees_is_recursive_2_0_i2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(set__member_2_1,
		analysis_utils__cost_and_callees_is_recursive_2_0_i3);
MR_def_label(analysis_utils__cost_and_callees_is_recursive_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if ((MR_sv(1) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(analysis_utils__cost_and_callees_is_recursive_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(profile__deep_lookup_csd_own_3_0);
MR_decl_entry(profile__deep_lookup_clique_maybe_child_3_0);

MR_BEGIN_MODULE(analysis_utils_module9)
	MR_init_entry1(analysis_utils__call_site_dynamic_get_count_and_callee_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__call_site_dynamic_get_count_and_callee_4_0);
	MR_init_label5(analysis_utils__call_site_dynamic_get_count_and_callee_4_0,3,5,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_site_dynamic_get_count_and_callee'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis_utils__call_site_dynamic_get_count_and_callee_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		analysis_utils__call_site_dynamic_get_count_and_callee_4_0_i3);
MR_def_label(analysis_utils__call_site_dynamic_get_count_and_callee_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__call_site_dynamic_get_count_and_callee_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		analysis_utils__call_site_dynamic_get_count_and_callee_4_0_i5);
MR_def_label(analysis_utils__call_site_dynamic_get_count_and_callee_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		analysis_utils__call_site_dynamic_get_count_and_callee_4_0_i6);
MR_def_label(analysis_utils__call_site_dynamic_get_count_and_callee_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_maybe_child_3_0,
		analysis_utils__call_site_dynamic_get_count_and_callee_4_0_i7);
MR_def_label(analysis_utils__call_site_dynamic_get_count_and_callee_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(analysis_utils__call_site_dynamic_get_count_and_callee_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__to_list_1_0);
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__list__foldl_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(analysis_utils_module10)
	MR_init_entry1(analysis_utils__build_recursive_call_site_counts_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__build_recursive_call_site_counts_map_5_0);
	MR_init_label10(analysis_utils__build_recursive_call_site_counts_map_5_0,5,6,8,13,15,16,14,12,19,3)
	MR_init_label10(analysis_utils__build_recursive_call_site_counts_map_5_0,24,28,30,31,32,27,33,38,36,40)
	MR_init_label2(analysis_utils__build_recursive_call_site_counts_map_5_0,35,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_recursive_call_site_counts_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis_utils__build_recursive_call_site_counts_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(analysis_utils__call_site_dynamic_get_count_and_callee_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_r4;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__array__to_list_1_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i5);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i6);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i8);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(analysis_utils__build_recursive_call_site_counts_map_5_0_i12);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i13);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i14);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i16);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i19);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i35);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r3, 0);
	MR_sv(5) = MR_tfield(0, MR_r5, 0);
	MR_sv(4) = MR_r4;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i24);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__valid_call_site_dynamic_ptr_2_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i28);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(profile__deep_lookup_csd_own_3_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i30);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__calls_1_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i31);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(profile__deep_lookup_clique_maybe_child_3_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i32);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i33);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = (MR_Integer) 0;
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i38);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis_utils__build_recursive_call_site_counts_map_5_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(profile__deep_lookup_call_site_statics_3_0,
		analysis_utils__build_recursive_call_site_counts_map_5_0_i40);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, reverse_goal_path);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(analysis_utils__build_recursive_call_site_counts_map_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_utils_module11)
	MR_init_entry1(__Unify___analysis_utils__callee_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis_utils__callee_0_0);
	MR_init_label2(__Unify___analysis_utils__callee_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis_utils__callee_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis_utils__callee_0_0_i4);
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
		MR_GOTO_LAB(__Unify___analysis_utils__callee_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___analysis_utils__callee_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis_utils__callee_0_0,1)
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

MR_BEGIN_MODULE(analysis_utils_module12)
	MR_init_entry1(__Compare___analysis_utils__callee_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis_utils__callee_0_0);
	MR_init_label4(__Compare___analysis_utils__callee_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis_utils__callee_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___analysis_utils__callee_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis_utils__callee_0_0_i2);
MR_def_label(__Compare___analysis_utils__callee_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis_utils__callee_0_0,2)
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
		__Compare___analysis_utils__callee_0_0_i5);
MR_def_label(__Compare___analysis_utils__callee_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis_utils__callee_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___analysis_utils__callee_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_utils_module13)
	MR_init_entry1(__Unify___analysis_utils__cost_and_callees_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis_utils__cost_and_callees_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis_utils__cost_and_callees_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis_utils, callee);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___analysis_utils__cost_and_callees_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(analysis_utils_module14)
	MR_init_entry1(__Compare___analysis_utils__cost_and_callees_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis_utils__cost_and_callees_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis_utils__cost_and_callees_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurements__cs_cost_csq_0_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(analysis_utils_module15)
	MR_init_entry1(__Unify___analysis_utils__cost_and_callees_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis_utils__cost_and_callees_1_0);
	MR_init_label4(__Unify___analysis_utils__cost_and_callees_1_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis_utils__cost_and_callees_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___analysis_utils__cost_and_callees_1_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r1;
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
	MR_np_call_localret_ent(__Unify___measurements__cs_cost_csq_0_0,
		__Unify___analysis_utils__cost_and_callees_1_0_i4);
MR_def_label(__Unify___analysis_utils__cost_and_callees_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis_utils__cost_and_callees_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___analysis_utils__cost_and_callees_1_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___analysis_utils__cost_and_callees_1_0_i6);
MR_def_label(__Unify___analysis_utils__cost_and_callees_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis_utils__cost_and_callees_1_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(8);
MR_def_label(__Unify___analysis_utils__cost_and_callees_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis_utils__cost_and_callees_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___measurements__cs_cost_csq_0_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(analysis_utils_module16)
	MR_init_entry1(__Compare___analysis_utils__cost_and_callees_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis_utils__cost_and_callees_1_0);
	MR_init_label6(__Compare___analysis_utils__cost_and_callees_1_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis_utils__cost_and_callees_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___analysis_utils__cost_and_callees_1_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(__Compare___analysis_utils__cost_and_callees_1_0_i2);
MR_def_label(__Compare___analysis_utils__cost_and_callees_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis_utils__cost_and_callees_1_0,2)
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
	MR_np_call_localret_ent(__Compare___measurements__cs_cost_csq_0_0,
		__Compare___analysis_utils__cost_and_callees_1_0_i5);
MR_def_label(__Compare___analysis_utils__cost_and_callees_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis_utils__cost_and_callees_1_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___analysis_utils__cost_and_callees_1_0_i9);
MR_def_label(__Compare___analysis_utils__cost_and_callees_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis_utils__cost_and_callees_1_0_i37);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___analysis_utils__cost_and_callees_1_0_i13);
MR_def_label(__Compare___analysis_utils__cost_and_callees_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis_utils__cost_and_callees_1_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___analysis_utils__cost_and_callees_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_utils_module17)
	MR_init_entry1(__Unify___analysis_utils__higher_order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis_utils__higher_order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis_utils__higher_order_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_utils_module18)
	MR_init_entry1(__Compare___analysis_utils__higher_order_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis_utils__higher_order_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis_utils__higher_order_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_utils_module19)
	MR_init_entry1(analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_clique_first_and_other_procs__134__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis_utils__IntroducedFrom__pred__find_clique_first_and_other_procs__134__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
MR_decl_entry(fn__float__round_to_int_1_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(fn__measurements__build_cs_cost_csq_percall_2_0);

MR_BEGIN_MODULE(analysis_utils_module20)
	MR_init_entry1(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0);
	MR_init_label5(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__build_recursive_call_site_cost_map__272__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(5) = MR_f(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0_i2);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(5));
	MR_f(2) = MR_tempf1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0_i3);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__round_to_int_1_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0_i4);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0_i5);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(5) = MR_f(1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0_i6);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(5));
	MR_f(2) = MR_tempf1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__measurements__build_cs_cost_csq_percall_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_utils_module21)
	MR_init_entry1(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0);
	MR_init_label5(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__build_recursive_call_site_cost_map__272__2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(5) = MR_f(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0_i2);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(5));
	MR_f(2) = MR_tempf1;
	}
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0_i3);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__float__round_to_int_1_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0_i4);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0_i5);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(5) = MR_f(1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0_i6);
MR_def_label(fn__analysis_utils__IntroducedFrom__func__build_recursive_call_site_cost_map__272__2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(5));
	MR_f(2) = MR_tempf1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__measurements__build_cs_cost_csq_percall_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__analysis_utils_maybe_bunch_0(void)
{
	analysis_utils_module0();
	analysis_utils_module1();
	analysis_utils_module2();
	analysis_utils_module3();
	analysis_utils_module4();
	analysis_utils_module5();
	analysis_utils_module6();
	analysis_utils_module7();
	analysis_utils_module8();
	analysis_utils_module9();
	analysis_utils_module10();
	analysis_utils_module11();
	analysis_utils_module12();
	analysis_utils_module13();
	analysis_utils_module14();
	analysis_utils_module15();
	analysis_utils_module16();
	analysis_utils_module17();
	analysis_utils_module18();
	analysis_utils_module19();
	analysis_utils_module20();
	analysis_utils_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__analysis_utils__init(void);
void mercury__analysis_utils__init_type_tables(void);
void mercury__analysis_utils__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__analysis_utils__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__analysis_utils__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__analysis_utils__init_threadscope_string_table(void);
#endif

void mercury__analysis_utils__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__analysis_utils_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis_utils__type_ctor_info_callee_0,
		analysis_utils__callee_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1,
		analysis_utils__cost_and_callees_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis_utils__type_ctor_info_cost_and_callees_0,
		analysis_utils__cost_and_callees_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis_utils__type_ctor_info_higher_order_0,
		analysis_utils__higher_order_0_0);
	mercury__analysis_utils__init_debugger();
}

void mercury__analysis_utils__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis_utils__type_ctor_info_callee_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis_utils__type_ctor_info_cost_and_callees_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis_utils__type_ctor_info_cost_and_callees_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis_utils__type_ctor_info_higher_order_0);
	}
}


void mercury__analysis_utils__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__analysis_utils__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__analysis_utils);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__analysis_utils__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__analysis_utils__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
