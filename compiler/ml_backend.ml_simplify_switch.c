/*
** Automatically generated from `ml_simplify_switch.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_simplify_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_simplify_switch.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_simplify_switch.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.ml_simplify_switch.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.ml_simplify_switch.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ml_backend.ml_simplify_switch.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.ml_simplify_switch.c"
#line 49 "ml_backend.ml_simplify_switch.c"
#include "ml_backend.ml_simplify_switch.mh"

#line 52 "ml_backend.ml_simplify_switch.c"
#line 53 "ml_backend.ml_simplify_switch.c"
#ifndef ML_BACKEND__ML_SIMPLIFY_SWITCH_DECL_GUARD
#define ML_BACKEND__ML_SIMPLIFY_SWITCH_DECL_GUARD

#line 57 "ml_backend.ml_simplify_switch.c"
#line 58 "ml_backend.ml_simplify_switch.c"

#endif
#line 61 "ml_backend.ml_simplify_switch.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0;
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0, 2,8,9,10,11,12,16,28,15,58)
MR_decl_label2(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0, 59,53)
MR_decl_label1(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0, 2)
MR_decl_label5(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0, 9,3,16,17,13)
MR_decl_label7(ml_backend__ml_simplify_switch__generate_cases_8_0, 38,4,5,8,25,26,27)
MR_decl_label2(ml_backend__ml_simplify_switch__insert_case_into_map_4_0, 3,12)
MR_decl_label3(ml_backend__ml_simplify_switch__insert_range_into_map_5_0, 10,2,3)
MR_decl_label6(ml_backend__ml_simplify_switch__is_dense_switch_2_0, 2,3,4,6,7,1)
MR_decl_label8(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0, 7,8,2,3,10,11,12,14)
MR_decl_label10(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0, 2,11,9,7,6,16,19,21,18,23)
MR_decl_label10(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0, 24,25,26,28,29,3,4,35,38,40)
MR_decl_label4(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0, 37,42,33,43)
MR_decl_label4(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0, 26,4,3,7)
MR_decl_label10(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0, 5,6,7,8,9,12,13,10,15,18)
MR_decl_label3(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0, 66,3,38)
MR_decl_label5(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0, 3,8,52,14,19)
MR_decl_label6(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0, 5,8,58,11,15,16)
MR_decl_static(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0)
MR_decl_static(ml_backend__ml_simplify_switch__is_dense_switch_2_0)
MR_decl_static(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0)
MR_decl_static(ml_backend__ml_simplify_switch__insert_range_into_map_5_0)
MR_decl_static(ml_backend__ml_simplify_switch__insert_case_into_map_4_0)
MR_decl_static(ml_backend__ml_simplify_switch__generate_cases_8_0)
MR_decl_static(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0)
MR_decl_static(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0)
MR_decl_static(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0)
MR_def_extern_entry(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0)
MR_decl_static(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0)
MR_decl_static(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0)
MR_decl_static(__Unify___ml_backend__ml_simplify_switch__case_labels_map_0_0)
MR_decl_static(__Compare___ml_backend__ml_simplify_switch__case_labels_map_0_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__is_dense_switch_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_simplify_switch__is_dense_switch_2_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__generate_cases_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_simplify_switch__generate_cases_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_COMMON(2,0),
MR_COMMON(2,0)
}
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
MR_string_const("case of dense switch", 20)
},
{
MR_string_const("branch to end of dense switch", 29)
},
{
MR_string_const("switch (using dense jump table)", 31)
},
{
MR_string_const("End of dense switch", 19)
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
8,
MR_TAG_COMMON(1,4,0)
},
{
8,
MR_TAG_COMMON(1,4,1)
},
{
0,
MR_tbmkword(0, 1)
},
{
8,
MR_TAG_COMMON(1,4,2)
},
{
8,
MR_TAG_COMMON(1,4,3)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_simplify_switch__case_labels_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_simplify_switch__case_labels_map_0_0)),
	"ml_backend.ml_simplify_switch",
	"case_labels_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_simplify_switch",
"ml_backend.ml_simplify_switch",
"find_min_and_max_in_case_cond",
5,
0
},
"ml_backend.ml_simplify_switch",
"ml_simplify_switch.m",
247,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__generate_cases_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_simplify_switch",
"ml_backend.ml_simplify_switch",
"insert_case_into_map",
4,
0
},
"ml_backend.ml_simplify_switch",
"ml_simplify_switch.m",
376,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_simplify_switch",
"ml_backend.ml_simplify_switch",
"find_min_and_max_in_case",
5,
0
},
"ml_backend.ml_simplify_switch",
"ml_simplify_switch.m",
238,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_simplify_switch__is_dense_switch_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_simplify_switch",
"ml_backend.ml_simplify_switch",
"find_min_and_max_in_case",
5,
0
},
"ml_backend.ml_simplify_switch",
"ml_simplify_switch.m",
238,
"5"
};



MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module0)
	MR_init_entry1(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_simplify_switch__is_integral_type_1_0);
	MR_init_label10(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,5,6,7,8,9,12,13,10,15,18)
	MR_init_label3(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,66,3,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_integral_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i3);
	}
	MR_r2 = MR_tfield(2, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i10);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i38);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	}
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 4)) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 2))))) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0_i66);
	}
MR_def_label(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__int__max_int_0_0);
MR_decl_entry(fn__int__min_int_0_0);
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(fn__backend_libs__switch_util__switch_density_2_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module1)
	MR_init_entry1(ml_backend__ml_simplify_switch__is_dense_switch_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__is_dense_switch_2_0);
	MR_init_label6(ml_backend__ml_simplify_switch__is_dense_switch_2_0,2,3,4,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_dense_switch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__is_dense_switch_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_simplify_switch__is_dense_switch_2_0_i2);
MR_def_label(ml_backend__ml_simplify_switch__is_dense_switch_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__is_dense_switch_2_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__int__max_int_0_0,
		ml_backend__ml_simplify_switch__is_dense_switch_2_0_i3);
MR_def_label(ml_backend__ml_simplify_switch__is_dense_switch_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__int__min_int_0_0,
		ml_backend__ml_simplify_switch__is_dense_switch_2_0_i4);
MR_def_label(ml_backend__ml_simplify_switch__is_dense_switch_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		ml_backend__ml_simplify_switch__is_dense_switch_2_0_i6);
MR_def_label(ml_backend__ml_simplify_switch__is_dense_switch_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (((MR_Integer) MR_r2 - (MR_Integer) MR_tempr1) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_density_2_0,
		ml_backend__ml_simplify_switch__is_dense_switch_2_0_i7);
MR_def_label(ml_backend__ml_simplify_switch__is_dense_switch_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_simplify_switch__is_dense_switch_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module2)
	MR_init_entry1(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0);
	MR_init_label8(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,7,8,2,3,10,11,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_eliminate_default'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = (((MR_Integer) MR_sv(4) - (MR_Integer) MR_sv(3)) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i7);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__backend_libs__switch_util__switch_density_2_0,
		ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i8);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__int__max_int_0_0,
		ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i11);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__int__max_int_0_0,
		ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i11);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__int__min_int_0_0,
		ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i12);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0_i14);
MR_def_label(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module3)
	MR_init_entry1(ml_backend__ml_simplify_switch__insert_range_into_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__insert_range_into_map_5_0);
	MR_init_label3(ml_backend__ml_simplify_switch__insert_range_into_map_5_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_range_into_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__insert_range_into_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_simplify_switch__insert_range_into_map_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_range_into_map_5_0_i2);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ml_simplify_switch__insert_range_into_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		ml_backend__ml_simplify_switch__insert_range_into_map_5_0_i3);
MR_def_label(ml_backend__ml_simplify_switch__insert_range_into_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_range_into_map_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module4)
	MR_init_entry1(ml_backend__ml_simplify_switch__insert_case_into_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__insert_case_into_map_4_0);
	MR_init_label2(ml_backend__ml_simplify_switch__insert_case_into_map_4_0,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_case_into_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__insert_case_into_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i12);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i12);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i12);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i12);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(ml_backend__ml_simplify_switch__insert_range_into_map_5_0);
	}
MR_def_label(ml_backend__ml_simplify_switch__insert_case_into_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i12);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__insert_case_into_map_4_0_i12);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
	}
MR_def_label(ml_backend__ml_simplify_switch__insert_case_into_map_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_simplify_switch", 29);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", 64);
	MR_r3 = (MR_Word) MR_string_const("non-int case", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_new_label_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module5)
	MR_init_entry1(ml_backend__ml_simplify_switch__generate_cases_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__generate_cases_8_0);
	MR_init_label7(ml_backend__ml_simplify_switch__generate_cases_8_0,38,4,5,8,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_cases'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__generate_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__generate_cases_8_0_i38);
	}
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_label_3_0,
		ml_backend__ml_simplify_switch__generate_cases_8_0_i4);
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__insert_case_into_map_4_0,
		ml_backend__ml_simplify_switch__generate_cases_8_0_i5);
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_simplify_switch__insert_case_into_map_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ml_simplify_switch__generate_cases_8_0_i8);
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_tempr7 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tempr8 = MR_sv(1);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr8;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_simplify_switch__generate_cases_8_0,
		ml_backend__ml_simplify_switch__generate_cases_8_0_i25);
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_simplify_switch__generate_cases_8_0_i26);
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_simplify_switch__generate_cases_8_0_i27);
MR_def_label(ml_backend__ml_simplify_switch__generate_cases_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module6)
	MR_init_entry1(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_simplify_switch__get_case_labels_4_0);
	MR_init_label4(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,26,4,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_case_labels'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		fn__ml_backend__ml_simplify_switch__get_case_labels_4_0_i4);
MR_def_label(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,
		fn__ml_backend__ml_simplify_switch__get_case_labels_4_0_i7);
MR_def_label(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,
		fn__ml_backend__ml_simplify_switch__get_case_labels_4_0_i7);
MR_def_label(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module7)
	MR_init_entry1(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0);
	MR_init_label5(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,3,8,52,14,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_case_match_conds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,5,2);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0_i52);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0_i8);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tfield(3, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_tempr3, 2) = MR_r2;
	MR_tfield(3, MR_tempr3, 3) = MR_tfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_tfield(3, MR_r1, 3) = MR_tempr3;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_r1, 2) = MR_tfield(0, MR_r3, 0);
	MR_tfield(3, MR_r1, 3) = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0_i14);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tfield(3, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_tempr3, 2) = MR_r2;
	MR_tfield(3, MR_tempr3, 3) = MR_tfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_sv(1) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_r1 = MR_r3;
	}
	MR_np_localcall_lab(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,
		fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0_i19);
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(0, MR_r4, 0);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_r3;
	}
	MR_np_localcall_lab(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,
		fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0_i19);
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module8)
	MR_init_entry1(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0);
	MR_init_label6(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,5,8,58,11,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_switch_to_if_else_chain'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i58);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r7 = MR_tfield(0, MR_tempr1, 1);
	MR_r8 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i11);
	}
	MR_r1 = MR_r5;
	MR_decr_sp(6);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r8;
	MR_tfield(1, MR_r1, 1) = MR_r7;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_0,
		fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i15);
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,
		fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0_i16);
MR_def_label(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
MR_decl_entry(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0);
MR_decl_entry(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(list__length_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module9)
	MR_init_entry1(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);
	MR_init_label10(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,2,11,9,7,6,16,19,21,18,23)
	MR_init_label10(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,24,25,26,28,29,3,4,35,38,40)
	MR_init_label4(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,37,42,33,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_simplify_switch'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i2);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i7);
	}
	MR_tempr1 = MR_tfield(2, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i9);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i11);
	}
	MR_sv(7) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 5);
	MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i6);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i6);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i4);
	}
	MR_r2 = MR_tfield(2, MR_r3, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i6);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 4)) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 2))))) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ml_target_util__globals_target_supports_computed_goto_1_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i16);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i19);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 308;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i21);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i3);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i23);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 421;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i24);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 419;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i25);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__is_dense_switch_2_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i26);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i3);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__maybe_eliminate_default_7_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i28);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i29);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i33);
	}
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_simplify_switch__is_integral_type_1_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i35);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i33);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_target_util__globals_target_supports_int_switch_1_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i38);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 308;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i40);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i33);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_0,
		ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i42);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 5);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i43);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i43);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0_i43);
	}
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__min_3_0);
MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module10)
	MR_init_entry1(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0);
	MR_init_label5(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,9,3,16,17,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_min_and_max_in_case_cond'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i13);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i13);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i13);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr3, 0);
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(int__min_3_0,
		ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i9);
MR_def_label(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i17);
MR_def_label(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i13);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(int__min_3_0,
		ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i16);
MR_def_label(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__max_3_0,
		ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0_i17);
MR_def_label(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_simplify_switch", 29);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", 73);
	MR_r3 = (MR_Word) MR_string_const("non-int case", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module11)
	MR_init_entry1(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0);
	MR_init_label1(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_min_and_max_in_case'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_0,
		ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0_i2);
MR_def_label(ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module12)
	MR_init_entry1(__Unify___ml_backend__ml_simplify_switch__case_labels_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_simplify_switch__case_labels_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_simplify_switch__case_labels_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
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

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module13)
	MR_init_entry1(__Compare___ml_backend__ml_simplify_switch__case_labels_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_simplify_switch__case_labels_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_simplify_switch__case_labels_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(ml_backend__ml_simplify_switch_module14)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,2,8,9,10,11,12,16,28,15,58)
	MR_init_label2(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,59,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__generate_dense_switch__[6]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i2);
	}
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_r8;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_label_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_sv(7) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_r6;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_r1 = MR_r8;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_label_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__generate_cases_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_label_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_simplify_switch__get_case_labels_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr9 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr9;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i16);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,5,3);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr4, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_r9 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r8 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = (MR_Word) MR_TAG_COMMON(3,5,4);
	MR_tfield(0, MR_tempr8, 1) = MR_tempr9;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr7;
	MR_r5 = MR_tempr8;
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i15);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r5;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,5,3);
	MR_tempr7 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r6 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r9 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r8 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(3,5,4);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr5;
	MR_r5 = MR_tempr6;
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i15);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r5;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,5,3);
	MR_tempr7 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr3, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(3,5,4);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr7;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_tempr5;
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i58);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0_i59);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_115_105_109_112_108_105_102_121_95_115_119_105_116_99_104_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(2));
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 26);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr8 = MR_sv(5);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr5, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(2, MR_tempr5, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_r4;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr7;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_simplify_switch_maybe_bunch_0(void)
{
	ml_backend__ml_simplify_switch_module0();
	ml_backend__ml_simplify_switch_module1();
	ml_backend__ml_simplify_switch_module2();
	ml_backend__ml_simplify_switch_module3();
	ml_backend__ml_simplify_switch_module4();
	ml_backend__ml_simplify_switch_module5();
	ml_backend__ml_simplify_switch_module6();
	ml_backend__ml_simplify_switch_module7();
	ml_backend__ml_simplify_switch_module8();
	ml_backend__ml_simplify_switch_module9();
	ml_backend__ml_simplify_switch_module10();
	ml_backend__ml_simplify_switch_module11();
	ml_backend__ml_simplify_switch_module12();
	ml_backend__ml_simplify_switch_module13();
	ml_backend__ml_simplify_switch_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_simplify_switch__init(void);
void mercury__ml_backend__ml_simplify_switch__init_type_tables(void);
void mercury__ml_backend__ml_simplify_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_simplify_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_simplify_switch__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_simplify_switch__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_simplify_switch__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_simplify_switch_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0,
		ml_backend__ml_simplify_switch__case_labels_map_0_0);
	mercury__ml_backend__ml_simplify_switch__init_debugger();
}

void mercury__ml_backend__ml_simplify_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0);
	}
}


void mercury__ml_backend__ml_simplify_switch__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_simplify_switch__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_simplify_switch);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_simplify_switch__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_simplify_switch__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
