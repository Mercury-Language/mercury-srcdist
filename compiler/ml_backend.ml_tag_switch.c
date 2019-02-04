/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__ml_tag_switch__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ml_backend.ml_tag_switch.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ml_backend.ml_tag_switch.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.ml_tag_switch.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.ml_tag_switch.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ml_backend.ml_tag_switch.c"
#line 44 "ml_backend.ml_tag_switch.c"
#include "ml_backend.ml_tag_switch.mh"

#line 47 "ml_backend.ml_tag_switch.c"
#line 48 "ml_backend.ml_tag_switch.c"
#ifndef ML_BACKEND__ML_TAG_SWITCH_DECL_GUARD
#define ML_BACKEND__ML_TAG_SWITCH_DECL_GUARD

#line 52 "ml_backend.ml_tag_switch.c"
#line 53 "ml_backend.ml_tag_switch.c"

#endif
#line 56 "ml_backend.ml_tag_switch.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label8(ml_backend__ml_tag_switch__gen_ptag_case_9_0, 2,3,4,5,10,9,13,15)
MR_decl_label8(ml_backend__ml_tag_switch__gen_ptag_case_9_0, 7,18,21,20,23,17,31,34)
MR_decl_label4(ml_backend__ml_tag_switch__gen_ptag_case_9_0, 33,36,37,42)
MR_decl_label3(ml_backend__ml_tag_switch__gen_ptag_cases_9_0, 4,5,3)
MR_decl_label3(ml_backend__ml_tag_switch__gen_stag_cases_5_0, 4,5,3)
MR_decl_label8(ml_backend__ml_tag_switch__gen_stag_switch_10_0, 2,3,4,6,8,9,5,10)
MR_decl_label2(ml_backend__ml_tag_switch__gen_stag_switch_10_0, 11,12)
MR_decl_label8(ml_backend__ml_tag_switch__generate_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(ml_backend__ml_tag_switch__generate_9_0, 10,11,12,13)
MR_decl_static(ml_backend__ml_tag_switch__gen_stag_cases_5_0)
MR_decl_static(fn__ml_backend__ml_tag_switch__this_file_0_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_stag_switch_10_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_ptag_case_9_0)
MR_decl_static(ml_backend__ml_tag_switch__gen_ptag_cases_9_0)
MR_def_extern_entry(ml_backend__ml_tag_switch__generate_9_0)
MR_decl_static(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__113__1_2_0)

static const struct mercury_type_0 mercury_common_0[2] =
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
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_stag_goal_0;
static const struct mercury_type_1 mercury_common_1[2] =
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
MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_sectag_locn_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn),
MR_CTOR0_ADDR(backend_libs__rtti, sectag_locn)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_tag_switch__gen_ptag_case_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_tag_switch",
"ml_backend.ml_tag_switch",
"lambda_ml_tag_switch_m_113",
2,
0
},
"ml_backend.ml_tag_switch",
"ml_tag_switch.m",
113,
"d1;c14;"
};

MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_5_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module0)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_stag_cases_5_0);
	MR_init_label3(ml_backend__ml_tag_switch__gen_stag_cases_5_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_stag_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_cases_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_sv(3), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(3), 0) = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 1), 1);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_tag_switch__gen_stag_cases_5_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__ml_tag_switch__gen_stag_cases_5_0,
		ml_backend__ml_tag_switch__gen_stag_cases_5_0_i5);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_tag_switch__gen_stag_cases_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module1)
	MR_init_entry1(fn__ml_backend__ml_tag_switch__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_tag_switch__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_0);
MR_decl_entry(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module2)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_stag_switch_10_0);
	MR_init_label8(ml_backend__ml_tag_switch__gen_stag_switch_10_0,2,3,4,6,8,9,5,10)
	MR_init_label2(ml_backend__ml_tag_switch__gen_stag_switch_10_0,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_stag_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i2);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i3);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_r1;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_switch_10_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_tag_switch.m", 15);
	MR_r2 = (MR_Word) MR_string_const("gen_stag_switch: no stag", 24);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i5);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_switch_10_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_stag_switch_10_0_i5);
	}
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i9);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_stag_cases_5_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i10);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i11);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,11)
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
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_tag_switch__gen_stag_switch_10_0_i12);
MR_def_label(ml_backend__ml_tag_switch__gen_stag_switch_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module3)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_ptag_case_9_0);
	MR_init_label8(ml_backend__ml_tag_switch__gen_ptag_case_9_0,2,3,4,5,10,9,13,15)
	MR_init_label8(ml_backend__ml_tag_switch__gen_ptag_case_9_0,7,18,21,20,23,17,31,34)
	MR_init_label4(ml_backend__ml_tag_switch__gen_ptag_case_9_0,33,36,37,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_ptag_case_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_r7;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i2);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__113__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_tag_switch__this_file_0_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i3);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = (MR_Word) MR_string_const("ml_tag_switch.m: secondary tag locations differ", 47);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, stag_goal);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i5);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i9);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_tag_switch__this_file_0_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i10);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("no goal for non-shared tag", 26);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i13);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_sv(2), 0), 1), 1);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i42);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_tag_switch__this_file_0_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i15);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("more than one goal for non-shared tag", 37);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i17);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i23);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i21);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	if ((MR_r4 != MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i20);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i23);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i37);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i37);
	}
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 1), 1);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i42);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i36);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i34);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	if ((MR_r4 != MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i33);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i36);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r2 = (MR_Integer) 0;
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i37);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_case_9_0_i37);
	}
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 1), 1);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i42);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_stag_switch_10_0,
		ml_backend__ml_tag_switch__gen_ptag_case_9_0_i42);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_case_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module4)
	MR_init_entry1(ml_backend__ml_tag_switch__gen_ptag_cases_9_0);
	MR_init_label3(ml_backend__ml_tag_switch__gen_ptag_cases_9_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__gen_ptag_cases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_tag_switch__gen_ptag_cases_9_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_ptag_case_9_0,
		ml_backend__ml_tag_switch__gen_ptag_cases_9_0_i4);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_cases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_localcall_lab(ml_backend__ml_tag_switch__gen_ptag_cases_9_0,
		ml_backend__ml_tag_switch__gen_ptag_cases_9_0_i5);
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_cases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_tag_switch__gen_ptag_cases_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__switch_util__get_ptag_counts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__switch_util__type_ctor_info_ptag_case_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(backend_libs__switch_util__group_cases_by_ptag_3_0);
MR_decl_entry(backend_libs__switch_util__order_ptags_by_count_3_0);

MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module5)
	MR_init_entry1(ml_backend__ml_tag_switch__generate_9_0);
	MR_init_label8(ml_backend__ml_tag_switch__generate_9_0,2,3,4,5,6,7,8,9)
	MR_init_label4(ml_backend__ml_tag_switch__generate_9_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_tag_switch__generate_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_tag_switch__generate_9_0_i2);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_tag_switch__generate_9_0_i3);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_tag_switch__generate_9_0_i4);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__switch_util__get_ptag_counts_4_0,
		ml_backend__ml_tag_switch__generate_9_0_i5);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__ml_tag_switch__generate_9_0_i6);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(backend_libs__switch_util, ptag_case);
	MR_np_call_localret_ent(map__init_1_0,
		ml_backend__ml_tag_switch__generate_9_0_i7);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__switch_util__group_cases_by_ptag_3_0,
		ml_backend__ml_tag_switch__generate_9_0_i8);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(backend_libs__switch_util__order_ptags_by_count_3_0,
		ml_backend__ml_tag_switch__generate_9_0_i9);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_tag_switch__gen_ptag_cases_9_0,
		ml_backend__ml_tag_switch__generate_9_0_i10);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_switch_gen__ml_switch_generate_default_6_0,
		ml_backend__ml_tag_switch__generate_9_0_i11);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,11)
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
		ml_backend__ml_tag_switch__generate_9_0_i12);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_simplify_switch__ml_simplify_switch_5_0,
		ml_backend__ml_tag_switch__generate_9_0_i13);
MR_def_label(ml_backend__ml_tag_switch__generate_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_tag_switch_module6)
	MR_init_entry1(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__113__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__113__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_tag_switch__init(void);
void mercury__ml_backend__ml_tag_switch__init_type_tables(void);
void mercury__ml_backend__ml_tag_switch__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_tag_switch__write_out_proc_statics(FILE *fp);
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
	mercury__ml_backend__ml_tag_switch__init_debugger();
}

void mercury__ml_backend__ml_tag_switch__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
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

void mercury__ml_backend__ml_tag_switch__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_tag_switch__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
