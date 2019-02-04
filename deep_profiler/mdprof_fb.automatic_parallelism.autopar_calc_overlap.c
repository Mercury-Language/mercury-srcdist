/*
** Automatically generated from `autopar_calc_overlap.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 32 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 40 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 44 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 53 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#include "mdprof_fb.automatic_parallelism.autopar_calc_overlap.mh"

#line 56 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 57 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_CALC_OVERLAP_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_CALC_OVERLAP_DECL_GUARD

#line 61 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"
#line 62 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"

#endif
#line 65 "mdprof_fb.automatic_parallelism.autopar_calc_overlap.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Code * f2;
	MR_Integer f3;
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
	MR_Word * f3[9];
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
	MR_Word * f3[10];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[13];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[11];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[12];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_12 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_find_production_or_consumption_0,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_is_last_par_conjunct_0,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0;
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0, 2)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0, 2)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0, 2)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0, 35,36,4,11,3)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0, 3)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0, 4,2)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0, 3)
MR_decl_label7(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0, 2,3,4,6,5,9,10)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0, 2)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label2(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0, 13,15)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0, 2,3,4,5)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0, 2,3,4,5,6,8,9,10,11,12)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0, 13,14,16,17,15,19,24,31,32,34)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0, 36,39,40,41,42,43,44,28,47,48)
MR_decl_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0, 51)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0, 2,4,5,6,8,9,11,12,13,15)
MR_decl_label3(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0, 16,17,18)
MR_decl_label8(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0, 2,5,7,9,4,3,14,15)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0, 2,5,6,8,4,9)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0, 2,5,6,8,4,9)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0, 56,55,14,11,16,23)
MR_decl_label4(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0, 2,3,5,7)
MR_decl_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0, 2,3,6,5,7,4)
MR_decl_label5(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0, 2,3,6,5,8)
MR_decl_label3(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0, 12,5,1)
MR_decl_label5(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0, 3,2,19,7,5)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0)
MR_decl_static(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0)
MR_decl_static(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_0)
MR_decl_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_CTOR1_ADDR(lazy, lazy),
MR_CTOR0_ADDR(var_use_analysis, var_use_info)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__feedback__automatic_parallelism, seq_conj),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR1_ADDR(mdbcomp__program_representation, goal_rep),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, pard_goal_detail_annotation)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,4)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,4)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,7)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,7)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[10] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_calc_overlap, production_or_consumption)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
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
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_calc_overlap, production_or_consumption)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_calc_overlap, production_or_consumption)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
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
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,7),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, parallelisation_cost_data),
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, parallelisation_cost_data)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_2,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_2;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,8),
MR_INT_CTOR_ADDR,
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,8),
MR_INT_CTOR_ADDR,
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_types__conj_produced_and_consumed_vars_5_0);
static const struct mercury_type_4 mercury_common_4[4] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_types__conj_produced_and_consumed_vars_5_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0),
0
},
{
MR_COMMON(14,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_0),
0
},
{
MR_COMMON(14,1),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
9,
{
MR_COMMON(0,6),
MR_COMMON(0,11),
MR_COMMON(0,11),
MR_COMMON(0,11),
MR_COMMON(0,11),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,12),
MR_COMMON(0,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_float_box_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_3,
(MR_Word *) (MR_Integer) 0
},
10,
{
MR_COMMON(5,0),
MR_COMMON(0,8),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_COMMON(0,9),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0),
1,
MR_TAG_COMMON(0,4,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_4;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_4,
(MR_Word *) (MR_Integer) 0
},
13,
{
MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, implicit_parallelism_info),
MR_COMMON(1,5),
MR_COMMON(1,6),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,13),
MR_COMMON(0,13),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
11,
{
MR_COMMON(1,4),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,14),
MR_COMMON(0,14),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_5;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_5,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_COMMON(9,0),
MR_COMMON(1,6),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_COMMON(0,13),
MR_COMMON(0,13),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_7;
static const struct mercury_type_11 mercury_common_11[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_6,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(0,9),
MR_COMMON(0,8),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,13),
MR_COMMON(0,13),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_7,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_COMMON(12,0),
MR_COMMON(0,8),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_CTOR0_ADDR(private_builtin, float_box),
MR_COMMON(0,13),
MR_COMMON(0,13),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
7,
{
MR_COMMON(0,6),
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,14),
MR_COMMON(0,14),
MR_COMMON(1,8),
MR_COMMON(1,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_3;
static const struct mercury_type_13 mercury_common_13[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,8),
MR_INT_CTOR_ADDR,
MR_COMMON(1,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_FLOAT_CTOR_ADDR,
MR_COMMON(0,8),
MR_INT_CTOR_ADDR,
MR_COMMON(1,9)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_4;
static const struct mercury_type_14 mercury_common_14[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,9),
MR_COMMON(1,9),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,9),
MR_COMMON(1,9),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};

static const MR_EnumFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0 = {
	"find_production",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1 = {
	"find_consumption",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_find_production_or_consumption_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0,
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1,
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_find_production_or_consumption_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0)),
	"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
	"find_production_or_consumption",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_find_production_or_consumption_0 },
	2,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0 = {
	"is_last_par_conjunct",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1 = {
	"not_last_par_conjunct",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_is_last_par_conjunct_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0,
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_is_last_par_conjunct_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0,
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_is_last_par_conjunct_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_is_last_par_conjunct_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0)),
	"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
	"is_last_par_conjunct",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_is_last_par_conjunct_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_is_last_par_conjunct_0 },
	2,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_is_last_par_conjunct_0
};

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_DuArgLocn mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_locns_production_or_consumption_0_0[] = {
	{ 0, 0, -1 },
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0 = {
	"consumption",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0,
	NULL,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_locns_production_or_consumption_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

const MR_DuArgLocn mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_locns_production_or_consumption_0_1[] = {
	{ 0, 0, -1 },
};

static const MR_DuFunctorDesc mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1 = {
	"production",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1,
	NULL,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_locns_production_or_consumption_0_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1

};

const MR_DuPtagLayout mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_name_ordered_production_or_consumption_0[] = {
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0,
	&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1
};

const MR_Integer mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_production_or_consumption_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0)),
	"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
	"production_or_consumption",
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_name_ordered_production_or_consumption_0 },
	{ (void *)mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0 },
	2,
	4,
	mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_production_or_consumption_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_4 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"lambda_autopar_calc_overlap_m_514",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
514,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"var_productions",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
510,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"lambda_autopar_calc_overlap_m_506",
3,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
506,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"var_consumptions",
4,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
499,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"var_production_time_to_map",
5,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
383,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"var_production_time_to_map",
5,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
383,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_7 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"lambda_autopar_calc_overlap_m_226",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_6 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"get_productions_map",
8,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
226,
"97"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_5 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"lambda_autopar_calc_overlap_m_184",
12,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_4 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"calculate_dependent_parallel_cost_2",
13,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
184,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_3 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"lambda_autopar_calc_overlap_m_177",
10,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_2 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"get_consumptions_and_productions_list",
9,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
177,
"49"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_types",
"mdprof_fb.automatic_parallelism.autopar_types",
"conj_produced_and_consumed_vars",
5,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
147,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_1 = {
{
MR_PREDICATE,
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"calculate_parallel_cost_step",
9,
0
},
"mdprof_fb.automatic_parallelism.autopar_calc_overlap",
"autopar_calc_overlap.m",
87,
"49"
};


MR_decl_entry(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__measurements__init_empty_parallel_exec_metrics_7_0);
MR_decl_entry(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_goals_middle_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0;
MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module0)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,13,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_parallel_cost'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(7) = MR_f(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(4) = MR_f(1);
	MR_r2 = MR_tfield(0, MR_sv(1), 2);
	MR_sv(11) = MR_tfield(0, MR_r2, 4);
	MR_sv(14) = MR_tfield(0, MR_r2, 5);
	MR_sv(17) = MR_tfield(0, MR_r2, 8);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(13) = MR_f(1);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(16) = MR_f(1);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(19) = MR_f(1);
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(7));
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(4));
	MR_r1 = MR_sv(8);
	MR_f(3) = MR_float_from_dword_ptr(&MR_sv(13));
	MR_f(4) = MR_float_from_dword_ptr(&MR_sv(16));
	MR_f(5) = MR_float_from_dword_ptr(&MR_sv(19));
	MR_f(6) = MR_tempf1;
	}
	MR_np_call_localret_ent(fn__measurements__init_empty_parallel_exec_metrics_7_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(8);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_goals_middle_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, parallelisation_cost_data);
	MR_r6 = MR_sv(9);
	MR_r7 = (MR_Integer) 1;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 10);
	MR_tempr3 = MR_sv(10);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_r1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_r1, 9) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0);
	MR_init_label2(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calc_cost_and_dead_time_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0_i2);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempf1 = MR_f(1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_tempr2, 1));
	MR_tempf3 = MR_word_to_float(MR_tfield(0, MR_tempr2, 0));
	MR_f(2) = ((MR_f(2) + MR_f(1)) - MR_tempf3);
	MR_f(3) = ((MR_f(3) + MR_tempf3) - MR_tempf1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_f(2);
	MR_f(2) = MR_f(3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calc_cost_and_dead_time'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0_i3);
	}
	MR_f(1) = (MR_Float) 0.0000000000000000;
	MR_f(2) = (MR_Float) 0.0000000000000000;
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_tempr1, 1));
	MR_f(2) = (MR_f(1) - MR_word_to_float(MR_tfield(0, MR_tempr1, 0)));
	MR_f(3) = (MR_Float) 0.0000000000000000;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__measurements__parallel_exec_metrics_get_num_calls_1_0);
MR_decl_entry(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0);
MR_decl_entry(fn__measurements__goal_cost_get_percall_1_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(fn__set__intersect_2_0);
MR_decl_entry(fn__map__sorted_keys_1_0);
MR_decl_entry(fn__set__from_sorted_list_1_0);
MR_decl_entry(list__foldl4_10_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__foldl5_12_0);
MR_decl_entry(fn__set__count_1_0);
MR_decl_entry(fn__measurements__init_parallel_exec_metrics_incomplete_6_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,2,3,4,5,6,8,9,10,11,12)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,13,14,16,17,15,19,24,31,32,34)
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,36,39,40,41,42,43,44,28,47,48)
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_parallel_cost_step'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	MR_sv(18) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(9) = MR_tfield(0, MR_tfield(0, MR_r1, 2), 13);
	MR_sv(14) = MR_r5;
	MR_sv(15) = MR_r6;
	MR_sv(16) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__parallel_exec_metrics_get_num_calls_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(3) = MR_f(1);
	MR_sv(21) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(23) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(fn__map__sorted_keys_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__from_sorted_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (((MR_Integer) MR_sv(14) - (MR_Integer) 1) * (MR_Integer) MR_tfield(0, MR_tfield(0, MR_sv(18), 2), 4));
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i16);
	}
	* (MR_Float *) &MR_sv(8) = MR_f(1);
	MR_f(1) = (MR_Float) 0.0000000000000000;
	* (MR_Float *) &MR_sv(8) = (MR_float_from_dword_ptr(&MR_sv(8)) + MR_f(1));
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(23);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(8) = MR_f(1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(18), 2), 3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(8) = (MR_float_from_dword_ptr(&MR_sv(8)) + MR_f(1));
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(23);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(8));
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word(MR_tempf3);
	MR_tempf4 = MR_float_from_dword_ptr(&MR_sv(3));
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word((MR_tempf3 + MR_tempf4));
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	* (MR_Float *) &MR_sv(20) = (MR_tempf4 + MR_f(1));
	MR_sv(23) = MR_r2;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_sv(9), 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(8));
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word(MR_tempf3);
	MR_tempf4 = MR_float_from_dword_ptr(&MR_sv(3));
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word((MR_tempf3 + MR_tempf4));
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	* (MR_Float *) &MR_sv(20) = (MR_tempf4 + MR_f(1));
	MR_sv(23) = MR_r2;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i28);
	}
	MR_sv(21) = MR_r1;
	MR_sv(23) = MR_r2;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(23);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(4);
	MR_r10 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r11 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__foldl4_10_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i31);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(list__reverse_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i32);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(15);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(23);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i34);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_r2;
	MR_r4 = MR_r2;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r6 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r8 = MR_sv(9);
	MR_r9 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_r10 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(8)));
	MR_r11 = MR_r10;
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl5_12_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word((MR_word_to_float(MR_r2) + (MR_float_from_dword_ptr(&MR_sv(3)) - MR_word_to_float(MR_r1))));
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i39);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_tfield(0, MR_tfield(0, MR_sv(18), 2), 6);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__count_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i40);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(11) * (MR_Integer) MR_r1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i41);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(20) = MR_f(1);
	MR_sv(11) = MR_tfield(0, MR_tfield(0, MR_sv(18), 2), 7);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__count_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i42);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(11) * (MR_Integer) MR_r1);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i43);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(13) = MR_f(1);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i44);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(3) = MR_float_from_dword_ptr(&MR_sv(3));
	{
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(20));
	MR_tempf2 = MR_f(2);
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(13));
	MR_f(4) = MR_tempf1;
	MR_f(5) = MR_tempf2;
	MR_r1 = MR_sv(17);
	}
	MR_np_call_localret_ent(fn__measurements__init_parallel_exec_metrics_incomplete_6_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(8));
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word(MR_tempf3);
	MR_tempf4 = MR_float_from_dword_ptr(&MR_sv(3));
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word((MR_tempf3 + MR_tempf4));
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	* (MR_Float *) &MR_sv(20) = (MR_tempf4 + MR_f(1));
	MR_sv(23) = MR_r2;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i47);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(3) = MR_float_from_dword_ptr(&MR_sv(3));
	MR_sv(9) = MR_r1;
	MR_f(1) = (MR_Float) 0.0000000000000000;
	MR_f(2) = (MR_Float) 0.0000000000000000;
	MR_f(4) = MR_float_from_dword_ptr(&MR_sv(20));
	MR_f(5) = (MR_Float) 0.0000000000000000;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__measurements__init_parallel_exec_metrics_incomplete_6_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i48);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(23);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(8)));
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0_i51);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_r1 = ((MR_Integer) MR_sv(14) + (MR_Integer) 1);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(18);
	MR_decr_sp_and_return(24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module4)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_parallel_cost_step'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_r1);
	MR_r9 = MR_tempr1;
	if ((MR_tempr1 != MR_sv(1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0_i3);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r5 = MR_sv(7);
	MR_sv(9) = MR_tempr1;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0_i4);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r5 = MR_sv(7);
	MR_sv(9) = MR_r9;
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(fn__float__max_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module5)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0);
	MR_init_label7(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,2,3,4,6,5,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_dependent_parallel_cost_consumption'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	* (MR_Float *) &MR_sv(16) = MR_f(1);
	* (MR_Float *) &MR_sv(2) = MR_word_to_float(MR_tfield(0, MR_tempr1, 1));
	* (MR_Float *) &MR_sv(4) = MR_f(2);
	* (MR_Float *) &MR_sv(9) = MR_f(3);
	MR_sv(13) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_sv(20) = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r1 = MR_sv(20);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_float_from_dword_ptr(&MR_sv(16));
	* (MR_Float *) &MR_sv(16) = MR_word_to_float(MR_r1);
	* (MR_Float *) &MR_sv(4) = (MR_float_from_dword_ptr(&MR_sv(4)) + (MR_float_from_dword_ptr(&MR_sv(2)) - MR_tempf1));
	MR_f(1) = MR_word_to_float(MR_r1);
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(4));
	}
	MR_np_call_localret_ent(fn__float__max_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(19) = MR_f(1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(5), 2), 7);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(7) = (MR_float_from_dword_ptr(&MR_sv(19)) + MR_f(1));
	if ((MR_float_from_dword_ptr(&MR_sv(16)) <= MR_float_from_dword_ptr(&MR_sv(4)))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i5);
	}
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(5), 2), 8);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(9)));
	MR_tfield(0, MR_tempr1, 1) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(4)));
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(14) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(7)) + MR_f(1)));
	* (MR_Float *) &MR_sv(12) = MR_word_to_float(MR_r3);
	MR_r4 = MR_sv(17);
	MR_r1 = MR_sv(20);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i9);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(7)));
	* (MR_Float *) &MR_sv(12) = MR_float_from_dword_ptr(&MR_sv(9));
	MR_sv(14) = MR_sv(13);
	MR_r4 = MR_sv(17);
	MR_r1 = MR_sv(20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	* (MR_Float *) &MR_sv(7) = MR_word_to_float(MR_r3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(2));
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(7));
	MR_f(3) = MR_float_from_dword_ptr(&MR_sv(12));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module6)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_dependent_parallel_cost_production'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	* (MR_Float *) &MR_sv(4) = MR_f(2);
	* (MR_Float *) &MR_sv(6) = MR_f(3);
	* (MR_Float *) &MR_sv(8) = MR_f(4);
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 2), 6);
	MR_np_call_localret_ent(fn__float__float_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_f(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_sv(2));
	MR_f(2) = ((MR_float_from_dword_ptr(&MR_sv(6)) + (MR_f(1) - MR_float_from_dword_ptr(&MR_sv(4)))) + MR_tempf1);
	MR_f(3) = MR_float_from_dword_ptr(&MR_sv(8));
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module7)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_dependent_parallel_cost_2'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_float_to_word(MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr1, 0)));
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_0);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempf1 = MR_f(1);
	MR_tempr4 = MR_r6;
	MR_f(1) = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr4, 0));
	MR_tempf2 = MR_f(2);
	MR_f(2) = MR_tempf1;
	MR_tempf3 = MR_f(3);
	MR_f(3) = MR_tempf2;
	MR_f(4) = MR_tempf3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt00010000000000000000 = 0.00010000000000000000;
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module8)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,35,36,4,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_time_for_waits_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempf2 = (MR_f(2) + (MR_word_to_float(MR_tfield(0, MR_tempr1, 0)) - MR_f(1)));
	MR_f(3) = MR_tempf2;
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_tempr1, 1));
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_tempf3 = (MR_tempf2 + (MR_Float) 0.00010000000000000000);
	MR_tempf4 = MR_word_to_float(MR_tfield(0, MR_tempr1, 0));
	if ((MR_tempf3 >= MR_tempf4)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_tempf2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	* (MR_Float *) &(MR_tfield(0, MR_tempr5, 0)) = MR_tempf4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr6;
	MR_r1 = (MR_Word) MR_string_const("adjust_time_for_waits: Adjustment didn\'t work, time occurs before the current execution. Time: %f, Start: %f.", 109);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0_i36);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float MR_tempf1;
	MR_tempf1 = (MR_f(1) + (MR_Float) 0.00010000000000000000);
	if ((MR_f(3) > MR_tempf1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0_i11);
	}
	MR_f(1) = MR_f(3);
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(2) = MR_f(3);
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0_i35);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("adjust_time_for_waits: Ran out of executions", 44);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module9)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0);
	MR_init_label8(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,2,5,7,9,4,3,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_productions_map'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	* (MR_Float *) &MR_sv(3) = MR_f(1);
	MR_sv(6) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r2, 2), 1), 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempr3 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_r2, 1));
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	MR_tempf1 = (MR_float_from_dword_ptr(&MR_sv(3)) + (MR_Float) 0.00010000000000000000);
	MR_tempf2 = MR_word_to_float(MR_tfield(0, MR_r2, 0));
	if ((MR_tempf1 >= MR_tempf2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("adjust_time_for_waits: Time occurs before the current execution", 63);
	}
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempf1 = (MR_f(1) + (MR_Float) 0.00010000000000000000);
	if ((MR_float_from_dword_ptr(&MR_sv(3)) > MR_tempf1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 65537;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tempf3 = MR_float_from_dword_ptr(&MR_sv(3));
	MR_tfield(0, MR_tempr2, 4) = MR_float_to_word(MR_tempf3);
	MR_r4 = MR_r1;
	MR_sv(1) = MR_sv(6);
	MR_r5 = MR_sv(4);
	* (MR_Float *) &MR_sv(8) = MR_tempf3;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_f(2) = MR_float_from_dword_ptr(&MR_sv(3));
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 65537;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tempf2 = MR_f(1);
	MR_tfield(0, MR_tempr1, 4) = MR_float_to_word(MR_tempf2);
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r5 = MR_sv(4);
	* (MR_Float *) &MR_sv(8) = MR_tempf2;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("adjust_time_for_waits: Time occurs after all executions", 55);
	MR_np_call_localret_ent(require__error_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(set__fold_4_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = (MR_float_from_dword_ptr(&MR_sv(8)) + MR_f(1));
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__lazy__force_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module10)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,2,3,6,5,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_production_time_to_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(3), 2), 6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0_i5);
	}
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(3), 2), 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(2)) + MR_f(1)));
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0_i7);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(2)) + MR_float_from_dword_ptr(&MR_tfield(0, MR_r1, 0))));
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_calc_overlap", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const("Found consumption when looking for production", 45);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module11)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,56,55,14,11,16,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_consumptions_and_productions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i55);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i56);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	* (MR_Float *) &(MR_tfield(1, MR_tempr1, 0)) = MR_word_to_float(MR_tfield(0, MR_tempr2, 1));
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_word_to_float(MR_tfield(0, MR_tempr2, 1));
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_tempr1, 1));
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tempf3 = MR_word_to_float(MR_tfield(0, MR_tempr2, 1));
	if ((MR_tempf3 >= MR_f(1))) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i16);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	* (MR_Float *) &(MR_tfield(1, MR_tempr4, 0)) = MR_tempf3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempf3 = MR_f(1);
	* (MR_Float *) &(MR_tfield(0, MR_tempr1, 0)) = MR_tempf3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_r4;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__map_3_0);
MR_decl_entry(fn__set__difference_2_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module12)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,2,4,5,6,8,9,11,12,13,15)
	MR_init_label3(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_consumptions_and_productions_list'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tfield(0, MR_r1, 2), 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	* (MR_Float *) &MR_sv(6) = MR_f(1);
	MR_sv(7) = MR_r4;
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 65537;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(6)));
	MR_sv(4) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 65537;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_float_to_word(MR_float_from_dword_ptr(&MR_sv(6)));
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__map_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0_i18);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_f(1) = (MR_float_from_dword_ptr(&MR_sv(6)) + MR_f(1));
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module13)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0);
	MR_init_label4(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0,2,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_consumptions'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 2), 7);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(2)) + MR_float_from_dword_ptr(&MR_tfield(0, MR_r1, 0))));
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(2)) + (MR_Float) 0.0000000000000000));
	MR_decr_sp_and_return(4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_calc_overlap", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const("Found production when looking for consumption", 45);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module14)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0);
	MR_init_label5(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0,2,3,6,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_productions'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	* (MR_Float *) &MR_sv(2) = MR_f(1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_sv(3), 2), 6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0_i5);
	}
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(3), 2), 4);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(2)) + MR_f(1)));
	MR_decr_sp_and_return(5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_float_to_word((MR_float_from_dword_ptr(&MR_sv(2)) + MR_float_from_dword_ptr(&MR_tfield(0, MR_r1, 0))));
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_fb.automatic_parallelism.autopar_calc_overlap", 52);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", 85);
	MR_r3 = (MR_Word) MR_string_const("Found consumption when looking for production", 45);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module15)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module16)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module17)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module18)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module19)
	MR_init_entry1(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0);
	MR_init_label3(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3, MR_tempf4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i1);
	}
	MR_tempf3 = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr1, 0));
	MR_tempf4 = MR_float_from_dword_ptr(&MR_tfield(0, MR_tempr2, 0));
	MR_r1 = (MR_tempf3 == MR_tempf4);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_Float MR_tempf1, MR_tempf2;
	MR_tempr3 = MR_sv(1);
	MR_tempf1 = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr3, 0));
	MR_tempr4 = MR_sv(2);
	MR_tempf2 = MR_float_from_dword_ptr(&MR_tfield(1, MR_tempr4, 0));
	MR_r1 = (MR_tempf1 == MR_tempf2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module20)
	MR_init_entry1(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0);
	MR_init_label5(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i2);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i7);
	}
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_f(1) = MR_float_from_dword_ptr(&MR_mask_field(MR_tempr1, 0));
	MR_tempr2 = MR_sv(2);
	MR_f(2) = MR_float_from_dword_ptr(&MR_mask_field(MR_tempr2, 0));
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
	}
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module21)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__calculate_parallel_cost__65__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module22)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__calculate_parallel_cost__65__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r2;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r1, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module23)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__calculate_parallel_cost__69__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module24)
	MR_init_entry1(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__calculate_parallel_cost__69__2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r2;
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r1, 9);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module25)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_consumptions_and_productions_list__506__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_r2, 1));
	MR_f(2) = MR_word_to_float(MR_tfield(0, MR_r1, 1));
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module26)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__get_consumptions_and_productions_list__514__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_f(1) = MR_word_to_float(MR_tfield(0, MR_r2, 1));
	MR_f(2) = MR_word_to_float(MR_tfield(0, MR_r1, 1));
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module27)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,2,5,6,8,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_calc_sequential_cost__ho1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module28)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0);
	MR_init_label6(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,2,5,6,8,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_calc_sequential_cost__ho2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__goal_cost_get_percall_1_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_compact);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module29)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__calculate_parallel_cost_step__177__1'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempf3 = MR_word_to_float(MR_r5);
	MR_r5 = MR_tempr2;
	MR_f(1) = MR_tempf3;
	MR_r2 = (MR_Integer) 65540;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__177__1_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_float_to_word(MR_f(1));
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module30)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__calculate_parallel_cost_step__184__1'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Float MR_tempf1, MR_tempf2, MR_tempf3;
	MR_tempf1 = MR_word_to_float(MR_r3);
	MR_r3 = MR_r2;
	MR_tempf2 = MR_word_to_float(MR_r4);
	MR_r4 = MR_r6;
	MR_tempf3 = MR_word_to_float(MR_r5);
	MR_r5 = MR_r7;
	MR_f(1) = MR_tempf1;
	MR_f(2) = MR_tempf2;
	MR_f(3) = MR_tempf3;
	MR_r2 = (MR_Integer) 196611;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__184__1_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_float_to_word(MR_f(1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_float_to_word(MR_f(2));
	MR_r3 = MR_float_to_word(MR_f(3));
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_calc_overlap_module31)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0);
	MR_init_label1(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__calculate_parallel_cost_step__226__1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Float MR_tempf1;
	MR_tempf1 = MR_word_to_float(MR_r3);
	MR_r3 = MR_r2;
	MR_f(1) = MR_tempf1;
	MR_r2 = (MR_Integer) 65539;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__calculate_parallel_cost_step__226__1_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_float_to_word(MR_f(1));
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module0();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module1();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module2();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module3();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module4();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module5();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module6();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module7();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module8();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module9();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module10();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module11();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module12();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module13();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module14();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module15();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module16();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module17();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module18();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module19();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module20();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module21();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module22();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module23();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module24();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module25();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module26();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module27();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module28();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module29();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module30();
	mdprof_fb__automatic_parallelism__autopar_calc_overlap_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_find_production_or_consumption_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__find_production_or_consumption_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_is_last_par_conjunct_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__is_last_par_conjunct_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0,
		mdprof_fb__automatic_parallelism__autopar_calc_overlap__production_or_consumption_0_0);
	mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_find_production_or_consumption_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_is_last_par_conjunct_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0);
	}
}


void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism__autopar_calc_overlap);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
