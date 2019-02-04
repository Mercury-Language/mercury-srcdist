/*
** Automatically generated from `switch_gen.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__switch_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.switch_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.switch_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.switch_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.switch_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.switch_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.switch_gen.c"
#line 49 "ll_backend.switch_gen.c"
#include "ll_backend.switch_gen.mh"

#line 52 "ll_backend.switch_gen.c"
#line 53 "ll_backend.switch_gen.c"
#ifndef LL_BACKEND__SWITCH_GEN_DECL_GUARD
#define LL_BACKEND__SWITCH_GEN_DECL_GUARD

#line 57 "ll_backend.switch_gen.c"
#line 58 "ll_backend.switch_gen.c"

#endif
#line 61 "ll_backend.switch_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label10(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0, 6,5,8,10,12,13,3,14,15,19)
MR_decl_label10(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0, 18,22,25,17,32,34,35,38,39,41)
MR_decl_label9(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0, 42,43,44,45,46,47,48,49,50)
MR_decl_label10(ll_backend__switch_gen__generate_switch_8_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ll_backend__switch_gen__generate_switch_8_0, 12,13,14,18,20,21,23,15,29,33)
MR_decl_label10(ll_backend__switch_gen__generate_switch_8_0, 35,37,38,39,40,43,30,31,49,50)
MR_decl_label10(ll_backend__switch_gen__generate_switch_8_0, 51,47,28,57,60,61,63,64,68,66)
MR_decl_label10(ll_backend__switch_gen__generate_switch_8_0, 65,76,74,73,62,59,86,87,88,90)
MR_decl_label2(ll_backend__switch_gen__generate_switch_8_0, 93,94)
MR_decl_label10(ll_backend__switch_gen__order_and_generate_cases_12_0, 3,5,8,9,10,2,12,14,15,16)
MR_decl_label4(ll_backend__switch_gen__order_and_generate_cases_12_0, 19,21,22,18)
MR_decl_label10(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0, 2,11,12,13,14,15,16,19,24,25)
MR_decl_label10(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0, 18,34,37,38,40,33,5,54,55,4)
MR_decl_label5(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0, 28,4,5,6,8)
MR_decl_label5(ll_backend__switch_gen__separate_reserved_address_cases_3_0, 37,4,6,8,10)
MR_decl_label5(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0, 2,3,5,7,10)
MR_decl_label2(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0, 3,5)
MR_decl_static(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0)
MR_decl_static(ll_backend__switch_gen__separate_reserved_address_cases_3_0)
MR_decl_static(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0)
MR_decl_static(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0)
MR_decl_static(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0)
MR_decl_static(ll_backend__switch_gen__order_and_generate_cases_12_0)
MR_def_extern_entry(ll_backend__switch_gen__generate_switch_8_0)
MR_decl_static(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_tagged_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_2;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case),
MR_COMMON(0,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag),
MR_INT_CTOR_ADDR
},
};

MR_decl_entry(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0);
MR_decl_entry(backend_libs__switch_util__get_int_tag_2_0);
MR_decl_entry(backend_libs__switch_util__get_string_tag_2_0);
MR_decl_entry(fn__hlds__hlds_data__project_tagged_cons_id_tag_1_0);
MR_decl_entry(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0);
MR_decl_entry(fn__int__plus_2_0);
static const struct mercury_type_2 mercury_common_2[9] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(backend_libs__switch_util__get_int_tag_2_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(backend_libs__switch_util__get_string_tag_2_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(backend_libs__switch_util__get_string_tag_2_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(fn__hlds__hlds_data__project_tagged_cons_id_tag_1_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(fn__int__plus_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_3;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_3,
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


static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_3 = {
{
MR_FUNCTION,
"int",
"int",
"plus",
3,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
618,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_2 = {
{
MR_FUNCTION,
"backend_libs.switch_util",
"backend_libs.switch_util",
"estimate_switch_tag_test_cost",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
617,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_data",
"hlds.hlds_data",
"project_tagged_cons_id_tag",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
616,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_3 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"get_string_tag",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
251,
"100"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_2 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"get_string_tag",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
234,
"91"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_switch_8_0_1 = {
{
MR_PREDICATE,
"backend_libs.switch_util",
"backend_libs.switch_util",
"get_int_tag",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
191,
"55"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"project_cons_name_and_tag",
3,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
654,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_2 = {
{
MR_FUNCTION,
"ll_backend.switch_gen",
"ll_backend.switch_gen",
"estimate_cost_of_case_test",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
606,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_1 = {
{
MR_FUNCTION,
"ll_backend.switch_gen",
"ll_backend.switch_gen",
"estimate_cost_of_case_test",
2,
0
},
"ll_backend.switch_gen",
"switch_gen.m",
606,
"5"
};



MR_BEGIN_MODULE(ll_backend__switch_gen_module0)
	MR_init_entry1(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0);
	MR_init_label2(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_contains_reserved_addr_tag'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__switch_gen_module1)
	MR_init_entry1(ll_backend__switch_gen__separate_reserved_address_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_gen__separate_reserved_address_cases_3_0);
	MR_init_label5(ll_backend__switch_gen__separate_reserved_address_cases_3_0,37,4,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separate_reserved_address_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__separate_reserved_address_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__switch_gen__separate_reserved_address_cases_3_0,
		ll_backend__switch_gen__separate_reserved_address_cases_3_0_i4);
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,12)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__ll_backend__switch_gen__list_contains_reserved_addr_tag_1_0,
		ll_backend__switch_gen__separate_reserved_address_cases_3_0_i8);
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_reserved_address_cases_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__switch_gen__separate_reserved_address_cases_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module2)
	MR_init_entry1(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_gen__separate_cannot_succeed_cases_3_0);
	MR_init_label5(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,28,4,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separate_cannot_succeed_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,
		ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i4);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i5);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i6);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(ll_backend__code_info__get_pred_id_2_0);
MR_decl_entry(ll_backend__code_info__get_proc_id_2_0);
MR_decl_entry(hlds__goal_form__count_recursive_calls_5_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(assoc_list__values_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module3)
	MR_init_entry1(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0);
	MR_init_label10(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,2,11,12,13,14,15,16,19,24,25)
	MR_init_label10(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,18,34,37,38,40,33,5,54,55,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'order_can_and_cannot_succeed_cases'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(ll_backend__switch_gen__separate_cannot_succeed_cases_3_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i2);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i4);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i5);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i5);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i5);
	}
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_sv(8), 3);
	MR_sv(5) = MR_tfield(0, MR_sv(1), 3);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i11);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i12);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_info__get_pred_id_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i13);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_proc_id_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i14);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i15);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__goal_form__count_recursive_calls_5_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i16);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i19);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i19);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i24);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i18);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i18);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r2 = (MR_Integer) 427;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i25);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i34);
	}
	if (MR_INT_LE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i34);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i37);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i33);
	}
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i33);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_sv(1);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Integer) 428;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i38);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i40);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_sv(8) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i54);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_sv(8) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i54);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0_i55);
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(assoc_list__values_2_0);
	}
MR_def_label(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__generate_failure_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(ll_backend__unify_gen__generate_raw_tag_test_case_11_0);
MR_decl_entry(fn__cord__from_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_tagged_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0);
MR_decl_entry(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module4)
	MR_init_entry1(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0);
	MR_init_label10(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,6,5,8,10,12,13,3,14,15,19)
	MR_init_label10(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,18,22,25,17,32,34,35,38,39,41)
	MR_init_label9(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,42,43,44,45,46,47,48,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_if_then_else_chain_cases'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i3);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i5);
	}
	MR_sv(15) = MR_r4;
	MR_sv(5) = MR_r9;
	MR_sv(12) = MR_r10;
	MR_r1 = MR_r11;
	MR_np_call_localret_ent(ll_backend__code_info__generate_failure_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i6);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_sv(14) = MR_r2;
	MR_r2 = MR_sv(15);
	MR_sv(13) = MR_r1;
	MR_sv(15) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("end of the switch on ", 21);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i10);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r4;
	MR_sv(5) = MR_r9;
	MR_sv(12) = MR_r10;
	MR_sv(16) = MR_r11;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i8);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_sv(16);
	MR_sv(15) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("end of the switch on ", 21);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i10);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(15);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i12);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i13);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(18);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_r10;
	MR_tempr2 = MR_r11;
	MR_sv(16) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i14);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i15);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i19);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r6 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(8);
	MR_r8 = MR_sv(16);
	MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i18);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i17);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(15);
	MR_r6 = MR_sv(1);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(8);
	MR_r8 = MR_sv(16);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(1) = MR_r6;
	MR_r7 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__unify_gen__generate_raw_tag_test_case_11_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i22);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(17) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(11) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("skip to the end of the switch on ", 33);
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i25);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("next case", 9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i39);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i32);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(list__map2_4_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i34);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i35);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i38);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i39);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(ll_backend__trace_gen__maybe_generate_internal_event_code_5_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i41);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i42);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i43);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r3;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i44);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i45);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i46);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i47);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i48);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i49);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(14) = MR_r3;
	MR_r1 = MR_sv(16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0_i50);
MR_def_label(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__search_type_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(fn__hlds__hlds_data__get_maybe_cheaper_tag_test_1_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module5)
	MR_init_entry1(ll_backend__switch_gen__order_and_generate_cases_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_gen__order_and_generate_cases_12_0);
	MR_init_label10(ll_backend__switch_gen__order_and_generate_cases_12_0,3,5,8,9,10,2,12,14,15,16)
	MR_init_label4(ll_backend__switch_gen__order_and_generate_cases_12_0,19,21,22,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'order_and_generate_cases'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__switch_gen__order_and_generate_cases_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_tempr2 = MR_r9;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__search_type_defn_3_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i3);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_12_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i5);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_12_0_i2);
	}
	MR_r2 = (((MR_Integer) MR_tfield(1, MR_r1, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_12_0_i2);
	}
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__switch_gen__separate_reserved_address_cases_3_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i8);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i9);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i10);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i12);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_can_and_cannot_succeed_cases_5_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i12);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i14);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i15);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i16);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i19);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__order_and_generate_cases_12_0_i18);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i21);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_data__get_maybe_cheaper_tag_test_1_0,
		ll_backend__switch_gen__order_and_generate_cases_12_0_i22);
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r11 = MR_sv(9);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0);
	}
MR_def_label(ll_backend__switch_gen__order_and_generate_cases_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r1 = MR_sv(10);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(9);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ll_backend__switch_gen__generate_if_then_else_chain_cases_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__get_next_label_3_0);
MR_decl_entry(fn__ll_backend__code_info__variable_type_2_0);
MR_decl_entry(backend_libs__switch_util__tag_cases_5_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);
MR_decl_entry(ll_backend__code_info__get_globals_2_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0);
MR_decl_entry(fn__ll_backend__code_info__variable_name_2_0);
MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
MR_decl_entry(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(ll_backend__code_info__get_maybe_trace_info_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(backend_libs__switch_util__filter_out_failing_cases_if_needed_5_0);
MR_decl_entry(backend_libs__switch_util__find_int_lookup_switch_params_11_0);
MR_decl_entry(ll_backend__lookup_switch__is_lookup_switch_9_0);
MR_decl_entry(ll_backend__lookup_switch__generate_int_lookup_switch_13_0);
MR_decl_entry(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0);
MR_decl_entry(ll_backend__dense_switch__generate_dense_switch_12_0);
MR_decl_entry(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0);
MR_decl_entry(ll_backend__string_switch__generate_string_hash_switch_11_0);
MR_decl_entry(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0);
MR_decl_entry(ll_backend__string_switch__generate_string_binary_switch_11_0);
MR_decl_entry(ll_backend__tag_switch__generate_tag_switch_13_0);
MR_decl_entry(ll_backend__code_info__after_all_branches_4_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module6)
	MR_init_entry1(ll_backend__switch_gen__generate_switch_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__switch_gen__generate_switch_8_0);
	MR_init_label10(ll_backend__switch_gen__generate_switch_8_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ll_backend__switch_gen__generate_switch_8_0,12,13,14,18,20,21,23,15,29,33)
	MR_init_label10(ll_backend__switch_gen__generate_switch_8_0,35,37,38,39,40,43,30,31,49,50)
	MR_init_label10(ll_backend__switch_gen__generate_switch_8_0,51,47,28,57,60,61,63,64,68,66)
	MR_init_label10(ll_backend__switch_gen__generate_switch_8_0,65,76,74,73,62,59,86,87,88,90)
	MR_init_label2(ll_backend__switch_gen__generate_switch_8_0,93,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_switch'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__switch_gen__generate_switch_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(18) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i2);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_next_label_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i3);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i4);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_type_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i5);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__switch_util__tag_cases_5_0,
		ll_backend__switch_gen__generate_switch_8_0_i6);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, tagged_case);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i7);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(ll_backend__code_info__get_globals_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i8);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 417;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i9);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i10);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i11);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_0,
		ll_backend__switch_gen__generate_switch_8_0_i12);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__code_info__variable_name_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i13);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__switch_gen__generate_switch_8_0_i14);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i18);
	}
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_sv(20) = MR_r3;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i20);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i21);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i15);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i23);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_tfield(1, MR_r1, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i15);
	}
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_sv(19);
	MR_r9 = MR_sv(20);
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(20);
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i28);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i29);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i31);
	}
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(14) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(15) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(16) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 429;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ll_backend__switch_gen__generate_switch_8_0_i33);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i30);
	}
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__code_info__get_maybe_trace_info_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i35);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i30);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 421;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i37);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i30);
	}
	if (MR_INT_LE(MR_sv(12),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i30);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 419;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i38);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__switch_util__filter_out_failing_cases_if_needed_5_0,
		ll_backend__switch_gen__generate_switch_8_0_i39);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(13);
	}
	MR_np_call_localret_ent(backend_libs__switch_util__find_int_lookup_switch_params_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i40);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(18);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(20);
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__is_lookup_switch_9_0,
		ll_backend__switch_gen__generate_switch_8_0_i43);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i30);
	}
	MR_r1 = MR_sv(19);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__lookup_switch__generate_int_lookup_switch_13_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i47);
	}
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_sv(17) = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(14) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 420;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i49);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i47);
	}
	if (MR_INT_LE(MR_sv(12),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i47);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 418;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i50);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__dense_switch__tagged_case_list_is_dense_switch_9_0,
		ll_backend__switch_gen__generate_switch_8_0_i51);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i47);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(20);
	}
	MR_np_call_localret_ent(ll_backend__dense_switch__generate_dense_switch_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),3)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i57);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i59);
	}
	MR_sv(9) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_sv(20) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__switch_util__filter_out_failing_cases_if_needed_5_0,
		ll_backend__switch_gen__generate_switch_8_0_i60);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i61);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i62);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 422;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i63);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 423;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i64);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) < (MR_Integer) MR_sv(17))) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i65);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(18);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__lookup_switch__is_lookup_switch_9_0,
		ll_backend__switch_gen__generate_switch_8_0_i68);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i66);
	}
	MR_r1 = MR_sv(19);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_hash_lookup_switch_10_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_hash_switch_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i73);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(18);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__lookup_switch__is_lookup_switch_9_0,
		ll_backend__switch_gen__generate_switch_8_0_i76);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i74);
	}
	MR_r1 = MR_sv(19);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_binary_lookup_switch_10_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__string_switch__generate_string_binary_switch_11_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_sv(20) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i86);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 424;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		ll_backend__switch_gen__generate_switch_8_0_i87);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(17) < (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i88);
	}
	if (MR_INT_LE(MR_sv(6),1)) {
		MR_GOTO_LAB(ll_backend__switch_gen__generate_switch_8_0_i88);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__tag_switch__generate_tag_switch_13_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(20);
	MR_np_call_localret_ent(ll_backend__switch_gen__order_and_generate_cases_12_0,
		ll_backend__switch_gen__generate_switch_8_0_i90);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ll_backend__switch_gen__generate_switch_8_0_i93);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__code_info__after_all_branches_4_0,
		ll_backend__switch_gen__generate_switch_8_0_i94);
MR_def_label(ll_backend__switch_gen__generate_switch_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(ll_backend__switch_gen_module7)
	MR_init_entry1(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0);
	MR_init_label5(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0,2,3,5,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'estimate_cost_of_case_test'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_data__project_tagged_cons_id_tag_1_0,
		fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_i2);
MR_def_label(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__switch_util__estimate_switch_tag_test_cost_1_0,
		fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_i3);
MR_def_label(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, tagged_cons_id);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_i5);
MR_def_label(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_i7);
MR_def_label(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__list__foldl_3_0,
		fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0_i10);
MR_def_label(fn__ll_backend__switch_gen__estimate_cost_of_case_test_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__switch_gen_maybe_bunch_0(void)
{
	ll_backend__switch_gen_module0();
	ll_backend__switch_gen_module1();
	ll_backend__switch_gen_module2();
	ll_backend__switch_gen_module3();
	ll_backend__switch_gen_module4();
	ll_backend__switch_gen_module5();
	ll_backend__switch_gen_module6();
	ll_backend__switch_gen_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__switch_gen__init(void);
void mercury__ll_backend__switch_gen__init_type_tables(void);
void mercury__ll_backend__switch_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__switch_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__switch_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__switch_gen__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__switch_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__switch_gen_maybe_bunch_0();
	mercury__ll_backend__switch_gen__init_debugger();
}

void mercury__ll_backend__switch_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__switch_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__switch_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__switch_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__switch_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__switch_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
