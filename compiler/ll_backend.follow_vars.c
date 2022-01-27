/*
** Automatically generated from `follow_vars.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__ll_backend__follow_vars__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.follow_vars.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.follow_vars.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.follow_vars.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.follow_vars.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.follow_vars.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.follow_vars.c"
#line 49 "ll_backend.follow_vars.c"
#include "ll_backend.follow_vars.mh"

#line 52 "ll_backend.follow_vars.c"
#line 53 "ll_backend.follow_vars.c"
#ifndef LL_BACKEND__FOLLOW_VARS_DECL_GUARD
#define LL_BACKEND__FOLLOW_VARS_DECL_GUARD

#line 57 "ll_backend.follow_vars.c"
#line 58 "ll_backend.follow_vars.c"

#endif
#line 61 "ll_backend.follow_vars.c"

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
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label4(ll_backend__follow_vars__find_final_follow_vars_4_0, 2,3,4,5)
MR_decl_label8(ll_backend__follow_vars__find_final_follow_vars_2_7_0, 35,3,19,5,8,11,10,12)
MR_decl_label9(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0, 44,3,8,7,10,13,12,14,5)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0, 23,3,6,5)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_in_call_7_0, 2,3,4,5)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_in_cases_10_0, 22,4,8,10)
MR_decl_label9(ll_backend__follow_vars__find_follow_vars_in_conj_11_0, 63,6,5,4,11,12,13,16,20)
MR_decl_label1(ll_backend__follow_vars__find_follow_vars_in_goal_10_0, 2)
MR_decl_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0, 3,7,6,9,4,12,13,11,209,18)
MR_decl_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0, 19,20,21,22,23,25,26,27,28,29)
MR_decl_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0, 30,31,32,33,34,35,15,37,40,41)
MR_decl_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0, 44,45,48,49,36,52,51,213,56,53)
MR_decl_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0, 61,58,63,57,67,68,66,74,76,71)
MR_decl_label2(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0, 72,70)
MR_decl_label4(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0, 21,4,8,9)
MR_decl_static(ll_backend__follow_vars__find_final_follow_vars_2_7_0)
MR_def_extern_entry(ll_backend__follow_vars__find_final_follow_vars_4_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_call_7_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0)
MR_def_extern_entry(ll_backend__follow_vars__find_follow_vars_in_goal_10_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_cases_10_0)
MR_decl_static(ll_backend__follow_vars__find_follow_vars_in_conj_11_0)
MR_decl_static(ll_backend__follow_vars__is_reg_r_arg_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(1,1)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(ll_backend__follow_vars__is_reg_r_arg_1_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_1 = {
{
MR_PREDICATE,
"ll_backend.follow_vars",
"ll_backend.follow_vars",
"is_reg_r_arg",
1,
0
},
"ll_backend.follow_vars",
"follow_vars.m",
272,
"127"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module0)
	MR_init_entry1(ll_backend__follow_vars__find_final_follow_vars_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_final_follow_vars_2_7_0);
	MR_init_label8(ll_backend__follow_vars__find_final_follow_vars_2_7_0,35,3,19,5,8,11,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_final_follow_vars_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_final_follow_vars_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r1, 0);
	MR_r7 = MR_tfield(0, MR_r6, 0);
	MR_r5 = MR_tfield(0, MR_r7, 1);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i5);
	}
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i35);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(0, MR_r7, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tfield(0, MR_r6, 1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__follow_vars__find_final_follow_vars_2_7_0_i8);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i10);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_final_follow_vars_2_7_0_i11);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i35);
	}
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_final_follow_vars_2_7_0_i12);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__follow_vars__find_final_follow_vars_2_7_0_i35);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module1)
	MR_init_entry1(ll_backend__follow_vars__find_final_follow_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_final_follow_vars_4_0);
	MR_init_label4(ll_backend__follow_vars__find_final_follow_vars_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_final_follow_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__follow_vars__find_final_follow_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__follow_vars__find_final_follow_vars_4_0_i2);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__follow_vars__find_final_follow_vars_4_0_i3);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_final_follow_vars_4_0_i4);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	}
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__follow_vars__find_final_follow_vars_4_0_i5);
MR_def_label(ll_backend__follow_vars__find_final_follow_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__follow_vars__find_final_follow_vars_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__insert_4_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module2)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0);
	MR_init_label9(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,44,3,8,7,10,13,12,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_from_arginfo'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__insert_4_0,
		ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i8);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i7);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i10);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i12);
	}
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i13);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i44);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i14);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i44);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0_i44);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module3)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_call_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_in_call_7_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_in_call_7_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_in_call'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_call_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ll_backend__follow_vars__find_follow_vars_in_call_7_0_i2);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__follow_vars__find_follow_vars_in_call_7_0_i3);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_follow_vars_in_call_7_0_i4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__follow_vars__find_follow_vars_in_call_7_0_i5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_call_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module4)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,23,3,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_from_generic_in_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__insert_4_0,
		ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0_i6);
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0_i5);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0_i23);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module5)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_in_goal_10_0);
	MR_init_label1(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_in_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__follow_vars__find_follow_vars_in_goal_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_10_0_i2);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_store_map_3_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(parse_tree__prog_data__lookup_var_types_3_0);
MR_decl_entry(hlds__arg_info__generic_call_arg_reg_types_6_0);
MR_decl_entry(hlds__arg_info__make_arg_infos_6_0);
MR_decl_entry(hlds__arg_info__partition_args_3_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(ll_backend__call_gen__generic_call_info_8_0);
MR_decl_entry(hlds__hlds_llds__goal_set_follow_vars_3_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__follow_vars_module6)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0);
	MR_init_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,3,7,6,9,4,12,13,11,209,18)
	MR_init_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,19,20,21,22,23,25,26,27,28,29)
	MR_init_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,30,31,32,33,34,35,15,37,40,41)
	MR_init_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,44,45,48,49,36,52,51,213,56,53)
	MR_init_label10(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,61,58,63,57,67,68,66,74,76,71)
	MR_init_label2(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,72,70)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_in_goal_expr'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i3);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i4);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r8 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i6);
	}
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i7);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i9);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i11);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i12);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i13);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i15);
	}
	MR_r8 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r8,3)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i209);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(5) = MR_r8;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(9) = MR_r2;
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 5);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i18);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_types_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i19);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__arg_info__generic_call_arg_reg_types_6_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i20);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_6_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i21);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i22);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__arg_info__partition_args_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i23);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i25);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i26);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i27);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i28);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i29);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i30);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__generic_call_info_8_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i31);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i32);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_from_arginfo_7_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i33);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i34);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_from_generic_in_vars_6_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i35);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i36);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(9) = MR_r2;
	MR_tempr3 = MR_r5;
	MR_sv(10) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(11) = MR_tempr4;
	MR_tempr5 = MR_r7;
	MR_sv(12) = MR_tempr5;
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i37);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr5;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i40);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i41);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr5;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i44);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i45);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i48);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i49);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i51);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i52);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i53);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i213);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_proceed();
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_call_7_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i56);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i57);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_r8 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(8) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i58);
	}
	MR_r9 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i61);
	}
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_tempr2 = MR_r8;
	MR_decr_sp(13);
	MR_proceed();
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,2)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i58);
	}
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r8;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i63);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i66);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i67);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i68);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i70);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i72);
	}
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(9) = MR_r2;
	MR_tempr2 = MR_r5;
	MR_sv(10) = MR_tempr2;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r7;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i74);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i71);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__set_4_0,
		ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0_i76);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(12);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.follow_vars", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.follow_vars.find_follow_vars_in_goal_expr\'/12", 67);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module7)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,21,4,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_in_independent_goals'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,
		ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0_i4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tempr5 = MR_r5;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_sv(7) = MR_tempr5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0_i8);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	}
	MR_np_localcall_lab(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,
		ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0_i9);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_independent_goals_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module8)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_in_cases_10_0);
	MR_init_label4(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,22,4,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_in_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_cases_10_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_tempr1 = MR_r5;
	MR_r5 = MR_sv(2);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,
		ll_backend__follow_vars__find_follow_vars_in_cases_10_0_i4);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_tempr5 = MR_r5;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_cases_10_0_i8);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,
		ll_backend__follow_vars__find_follow_vars_in_cases_10_0_i10);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_cases_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module9)
	MR_init_entry1(ll_backend__follow_vars__find_follow_vars_in_conj_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__find_follow_vars_in_conj_11_0);
	MR_init_label9(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,63,6,5,4,11,12,13,16,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_follow_vars_in_conj'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__find_follow_vars_in_conj_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i63);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_proceed();
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r8 = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	MR_r9 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i6);
	}
	MR_r10 = MR_tfield(2, MR_tempr1, 3);
	if (MR_INT_NE(MR_r10,0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i4);
	}
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r8;
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i5);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r9, 3);
	if (MR_RTAGS_TEST(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i4);
	}
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r8;
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i11);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r8;
	MR_r4 = (MR_Integer) 1;
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_localcall_lab(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,
		ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i12);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_expr_12_0,
		ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i13);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr4;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_set_follow_vars_3_0,
		ll_backend__follow_vars__find_follow_vars_in_conj_11_0_i20);
MR_def_label(ll_backend__follow_vars__find_follow_vars_in_conj_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__follow_vars_module10)
	MR_init_entry1(ll_backend__follow_vars__is_reg_r_arg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__follow_vars__is_reg_r_arg_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_reg_r_arg'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__follow_vars__is_reg_r_arg_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tfield(0, MR_r1, 1), 0), 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__follow_vars_maybe_bunch_0(void)
{
	ll_backend__follow_vars_module0();
	ll_backend__follow_vars_module1();
	ll_backend__follow_vars_module2();
	ll_backend__follow_vars_module3();
	ll_backend__follow_vars_module4();
	ll_backend__follow_vars_module5();
	ll_backend__follow_vars_module6();
	ll_backend__follow_vars_module7();
	ll_backend__follow_vars_module8();
	ll_backend__follow_vars_module9();
	ll_backend__follow_vars_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__follow_vars__init(void);
void mercury__ll_backend__follow_vars__init_type_tables(void);
void mercury__ll_backend__follow_vars__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__follow_vars__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__follow_vars__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__follow_vars__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__follow_vars__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__follow_vars_maybe_bunch_0();
	mercury__ll_backend__follow_vars__init_debugger();
}

void mercury__ll_backend__follow_vars__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__follow_vars__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__follow_vars__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ll_backend__follow_vars);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__follow_vars__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__follow_vars__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
