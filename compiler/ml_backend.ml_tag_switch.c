/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_tag_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_tag_switch.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_tag_switch.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "ml_backend.ml_tag_switch.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.ml_tag_switch.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ml_backend.ml_tag_switch.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ml_tag_switch.c"
#line 49 "ml_backend.ml_tag_switch.c"
#include "ml_backend.ml_tag_switch.mh"

#line 52 "ml_backend.ml_tag_switch.c"
#line 53 "ml_backend.ml_tag_switch.c"
#ifndef ML_BACKEND__ML_TAG_SWITCH_DECL_GUARD
#define ML_BACKEND__ML_TAG_SWITCH_DECL_GUARD

#line 57 "ml_backend.ml_tag_switch.c"
#line 58 "ml_backend.ml_tag_switch.c"

#endif
#line 61 "ml_backend.ml_tag_switch.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0,
	mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0,
	mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stags_0;
MR_decl_label5(ml_backend__ml_tag_switch__build_stag_rev_map_3_0, 25,3,5,4,11)
MR_decl_label10(ml_backend__ml_tag_switch__gen_ptag_case_10_0, 3,5,6,13,12,10,8,21,26,52)
MR_decl_label10(ml_backend__ml_tag_switch__gen_ptag_case_10_0, 24,22,28,29,30,35,31,40,7,46)
MR_decl_label3(ml_backend__ml_tag_switch__gen_ptag_cases_10_0, 14,4,5)
MR_decl_label5(ml_backend__ml_tag_switch__gen_stag_cases_5_0, 21,4,9,10,12)
MR_decl_label10(ml_backend__ml_tag_switch__gen_stag_switch_11_0, 2,3,4,7,11,10,6,13,14,15)
MR_decl_label1(ml_backend__ml_tag_switch__gen_stag_switch_11_0, 17)
MR_decl_label2(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0, 2,3)
MR_decl_label10(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0, 2,6,7,8,10,12,13,14,15,16)
MR_decl_label2(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0, 19,20)
MR_decl_label2(__Unify___ml_backend__ml_tag_switch__stags_0_0, 6,1)
MR_decl_label4(__Compare___ml_backend__ml_tag_switch__stags_0_0, 3,2,5,21)
MR_decl_static(fn__ml_backend__ml_tag_switch__make_ptag_match_1_0)
MR_decl_static(ml_backend__ml_tag_switch__build_stag_rev_map_3_0)
MR_decl_static(fn__ml_backend__ml_tag_switch__make_match_value_1_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_stag_cases_5_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_stag_switch_11_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_ptag_case_10_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_ptag_cases_10_0)
MR_def_extern_entry(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0)
MR_decl_static(__Unify___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0)
MR_decl_static(__Compare___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0)
MR_decl_static(__Unify___ml_backend__ml_tag_switch__stag_rev_map_0_0)
MR_decl_static(__Compare___ml_backend__ml_tag_switch__stag_rev_map_0_0)
MR_decl_static(__Unify___ml_backend__ml_tag_switch__stags_0_0)
MR_decl_static(__Compare___ml_backend__ml_tag_switch__stags_0_0)
MR_decl_static(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__169__1_2_0)
MR_decl_static(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__189__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_stag_cases_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_5;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_stag_cases_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,0),
MR_COMMON(4,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__ml_backend__ml_tag_switch__make_match_value_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__ml_backend__ml_tag_switch__make_ptag_match_1_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(fn__ml_backend__ml_tag_switch__make_ptag_match_1_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(fn__ml_backend__ml_tag_switch__make_ptag_match_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
5
},
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_INT_CTOR_ADDR,
MR_COMMON(3,2),
MR_COMMON(3,2),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(unit, unit),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0 = {
	"no_case_is_split_between_ptags",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1 = {
	"some_case_is_split_between_ptags",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[] = {
	&mercury_data_ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
	&mercury_data_ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[] = {
	&mercury_data_ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
	&mercury_data_ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

const MR_Integer mercury_data_ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0)),
	"ml_backend.ml_tag_switch",
	"is_a_case_split_between_ptags",
	{ (void *)mercury_data_ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0 },
	{ (void *)mercury_data_ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0 },
	2,
	4,
	mercury_data_ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stags_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stags_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tag_switch__stag_rev_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tag_switch__stag_rev_map_0_0)),
	"ml_backend.ml_tag_switch",
	"stag_rev_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_tag_switch__field_types_stags_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_tag_switch__du_functor_desc_stags_0_0 = {
	"stags",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_tag_switch__field_types_stags_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[] = {
	&mercury_data_ml_backend__ml_tag_switch__du_functor_desc_stags_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_tag_switch__du_name_ordered_stags_0[] = {
	&mercury_data_ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

const MR_Integer mercury_data_ml_backend__ml_tag_switch__functor_number_map_stags_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_tag_switch__stags_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_tag_switch__stags_0_0)),
	"ml_backend.ml_tag_switch",
	"stags",
	{ (void *)mercury_data_ml_backend__ml_tag_switch__du_name_ordered_stags_0 },
	{ (void *)mercury_data_ml_backend__ml_tag_switch__du_ptag_ordered_stags_0 },
	1,
	4,
	mercury_data_ml_backend__ml_tag_switch__functor_number_map_stags_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"gen_tagged_case_code",
9,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
76,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_5 = {
{
MR_FUNCTION,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"make_ptag_match",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
221,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_4 = {
{
MR_FUNCTION,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"make_ptag_match",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
221,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"lambda_ml_tag_switch_m_189",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
189,
"d1;c20;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"make_ptag_match",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
221,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_10_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"lambda_ml_tag_switch_m_169",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
169,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_stag_cases_5_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"make_match_value",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
320,
"d1;c11;"
};



MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module0)
	MR_init_entry1(fn__ml_backend__ml_tag_switch__make_ptag_match_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tag_switch__make_ptag_match_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_ptag_match'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tag_switch__make_ptag_match_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module1)
	MR_init_entry1(ml_backend__ml_tag_switch__build_stag_rev_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__build_stag_rev_map_3_0);
	MR_init_label5(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,25,3,5,4,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_stag_rev_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__build_stag_rev_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__build_stag_rev_map_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ml_backend__ml_tag_switch__build_stag_rev_map_3_0_i5);
MR_def_label(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__build_stag_rev_map_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ml_backend__ml_tag_switch__build_stag_rev_map_3_0_i11);
MR_def_label(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ml_backend__ml_tag_switch__build_stag_rev_map_3_0_i11);
MR_def_label(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ml_backend__ml_tag_switch__build_stag_rev_map_3_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module2)
	MR_init_entry1(fn__ml_backend__ml_tag_switch__make_match_value_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_tag_switch__make_match_value_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_match_value'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tag_switch__make_match_value_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module3)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_stag_cases_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__gen_stag_cases_5_0);
	MR_init_label5(ml_backend__ml_tag_switch__gen_stag_cases_5_0,21,4,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_stag_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_stag_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_cases_5_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ml_backend__ml_tag_switch__gen_stag_cases_5_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(5), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(5), 0) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_tag_switch__gen_stag_cases_5_0_i9);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ml_backend__ml_tag_switch__gen_stag_cases_5_0_i10);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_tag_switch__gen_stag_cases_5_0,
		ml_backend__ml_tag_switch__gen_stag_cases_5_0_i12);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(fn__ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
MR_decl_entry(list__sort_2_0);
MR_decl_entry(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module4)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_stag_switch_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__gen_stag_switch_11_0);
	MR_init_label10(ml_backend__ml_tag_switch__gen_stag_switch_11_0,2,3,4,7,11,10,6,13,14,15)
	MR_init_label1(ml_backend__ml_tag_switch__gen_stag_switch_11_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_stag_switch'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_stag_switch_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i2);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i3);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_switch_11_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr2;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_stag_cases_5_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i13);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_switch_11_0_i10);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i11);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_stag_cases_5_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i13);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_r2 = (MR_Word) MR_string_const("gen_stag_switch: no stag", 24);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i6);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_stag_cases_5_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i13);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i14);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i15);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_tag_switch__gen_stag_switch_11_0_i17);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module5)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_ptag_case_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__gen_ptag_case_10_0);
	MR_init_label10(ml_backend__ml_tag_switch__gen_ptag_case_10_0,3,5,6,13,12,10,8,21,26,52)
	MR_init_label10(ml_backend__ml_tag_switch__gen_ptag_case_10_0,24,22,28,29,30,35,31,40,7,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_ptag_case'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_ptag_case_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_r8;
	MR_sv(12) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(13) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_r6;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i3);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__169__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_r3 = (MR_Word) MR_string_const("ml_tag_switch.m: secondary tag locations differ", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i5);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i6);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i12);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_sv(9), 0), 1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i13);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_sv(11);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i46);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_r2 = (MR_Word) MR_string_const("more than one goal for non-shared tag", 37);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i7);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_r2 = (MR_Word) MR_string_const("no goal for non-shared tag", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i7);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__189__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_r3 = (MR_Word) MR_string_const(">1 ptag with secondary tag", 26);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i21);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i52);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i26);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	if ((MR_tempr1 != MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i24);
	}
	}
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
	MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i22);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i28);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__build_stag_rev_map_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i29);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i30);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i31);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_10_0_i31);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i35);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_sv(11);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i46);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_stag_switch_11_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i40);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	}
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_10_0_i46);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module6)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_ptag_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__gen_ptag_cases_10_0);
	MR_init_label3(ml_backend__ml_tag_switch__gen_ptag_cases_10_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_ptag_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_ptag_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_cases_10_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_cases_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_ptag_case_10_0,
		ml_backend__ml_tag_switch__gen_ptag_cases_10_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_tag_switch__gen_ptag_cases_10_0,
		ml_backend__ml_tag_switch__gen_ptag_cases_10_0_i5);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__switch_util__get_ptag_counts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
MR_decl_entry(backend_libs__switch_util__group_cases_by_ptag_10_0);
MR_decl_entry(backend_libs__switch_util__order_ptags_by_count_3_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module7)
	MR_init_entry1(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0);
	MR_init_label10(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,2,6,7,8,10,12,13,14,15,16)
	MR_init_label2(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_generate_tag_switch'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i2);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i6);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i7);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__switch_util__get_ptag_counts_4_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i8);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(11) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i10);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r4 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_tempr1;
	MR_r9 = MR_sv(9);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__group_cases_by_ptag_10_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i12);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(backend_libs__switch_util__order_ptags_by_count_3_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i13);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_ptag_cases_10_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i14);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i15);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i16);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 5) = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i19);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,
		ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0_i20);
MR_def_label(ml_backend__ml_tag_switch__ml_generate_tag_switch_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module8)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__gen_tagged_case_code_9_0);
	MR_init_label2(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_tagged_case_code'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(0, MR_r2, 3);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_0,
		ml_backend__ml_tag_switch__gen_tagged_case_code_9_0_i2);
MR_def_label(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ml_backend__ml_tag_switch__gen_tagged_case_code_9_0_i3);
MR_def_label(ml_backend__ml_tag_switch__gen_tagged_case_code_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module9)
	MR_init_entry1(__Unify___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module10)
	MR_init_entry1(__Compare___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module11)
	MR_init_entry1(__Unify___ml_backend__ml_tag_switch__stag_rev_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tag_switch__stag_rev_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tag_switch__stag_rev_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module12)
	MR_init_entry1(__Compare___ml_backend__ml_tag_switch__stag_rev_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tag_switch__stag_rev_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tag_switch__stag_rev_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_tag_switch, stags);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module13)
	MR_init_entry1(__Unify___ml_backend__ml_tag_switch__stags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_tag_switch__stags_0_0);
	MR_init_label2(__Unify___ml_backend__ml_tag_switch__stags_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_tag_switch__stags_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_tag_switch__stags_0_0_i6);
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
		MR_GOTO_LAB(__Unify___ml_backend__ml_tag_switch__stags_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ml_backend__ml_tag_switch__stags_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_tag_switch__stags_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module14)
	MR_init_entry1(__Compare___ml_backend__ml_tag_switch__stags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_tag_switch__stags_0_0);
	MR_init_label4(__Compare___ml_backend__ml_tag_switch__stags_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_tag_switch__stags_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tag_switch__stags_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_tag_switch__stags_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_tag_switch__stags_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_tag_switch__stags_0_0,2)
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
		__Compare___ml_backend__ml_tag_switch__stags_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_tag_switch__stags_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_tag_switch__stags_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ml_tag_switch__stags_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module15)
	MR_init_entry1(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__169__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__169__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__gen_ptag_case__169__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__169__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module16)
	MR_init_entry1(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__189__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__189__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__gen_ptag_case__189__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__189__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_tag_switch_maybe_bunch_0(void)
{
	ml_backend__ml_tag_switch_module0();
	ml_backend__ml_tag_switch_module1();
	ml_backend__ml_tag_switch_module2();
	ml_backend__ml_tag_switch_module3();
	ml_backend__ml_tag_switch_module4();
	ml_backend__ml_tag_switch_module5();
	ml_backend__ml_tag_switch_module6();
	ml_backend__ml_tag_switch_module7();
	ml_backend__ml_tag_switch_module8();
	ml_backend__ml_tag_switch_module9();
	ml_backend__ml_tag_switch_module10();
	ml_backend__ml_tag_switch_module11();
	ml_backend__ml_tag_switch_module12();
	ml_backend__ml_tag_switch_module13();
	ml_backend__ml_tag_switch_module14();
	ml_backend__ml_tag_switch_module15();
	ml_backend__ml_tag_switch_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_tag_switch__init(void);
void mercury__ml_backend__ml_tag_switch__init_type_tables(void);
void mercury__ml_backend__ml_tag_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_tag_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_tag_switch__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_tag_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_tag_switch_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0,
		ml_backend__ml_tag_switch__is_a_case_split_between_ptags_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0,
		ml_backend__ml_tag_switch__stag_rev_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stags_0,
		ml_backend__ml_tag_switch__stags_0_0);
	mercury__ml_backend__ml_tag_switch__init_debugger();
}

void mercury__ml_backend__ml_tag_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_tag_switch__type_ctor_info_stags_0);
	}
}


void mercury__ml_backend__ml_tag_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_tag_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_tag_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_tag_switch__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
