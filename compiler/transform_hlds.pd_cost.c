/*
** Automatically generated from `pd_cost.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__pd_cost__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.pd_cost.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.pd_cost.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.pd_cost.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.pd_cost.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.pd_cost.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.pd_cost.c"
#line 49 "transform_hlds.pd_cost.c"
#include "transform_hlds.pd_cost.mh"

#line 52 "transform_hlds.pd_cost.c"
#line 53 "transform_hlds.pd_cost.c"
#ifndef TRANSFORM_HLDS__PD_COST_DECL_GUARD
#define TRANSFORM_HLDS__PD_COST_DECL_GUARD

#line 57 "transform_hlds.pd_cost.c"
#line 58 "transform_hlds.pd_cost.c"

#endif
#line 61 "transform_hlds.pd_cost.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label3(transform_hlds__pd_cost__cases_cost_3_0, 10,3,4)
MR_decl_label3(transform_hlds__pd_cost__goal_costs_3_0, 10,3,4)
MR_decl_label10(transform_hlds__pd_cost__goal_expr_cost_3_0, 5,4,8,9,3,10,13,12,16,17)
MR_decl_label10(transform_hlds__pd_cost__goal_expr_cost_3_0, 14,19,20,21,18,22,147,28,29,24)
MR_decl_label5(transform_hlds__pd_cost__goal_expr_cost_3_0, 31,30,36,39,38)
MR_decl_label10(transform_hlds__pd_cost__unify_cost_3_0, 21,3,6,9,4,13,12,18,19,11)
MR_decl_label1(transform_hlds__pd_cost__unify_cost_3_0, 20)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_reg_assign_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_simple_test_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_stack_flush_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_builtin_call_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_call_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_higher_order_call_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_heap_assign_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_heap_incr_0_0)
MR_decl_static(transform_hlds__pd_cost__unify_cost_3_0)
MR_def_extern_entry(transform_hlds__pd_cost__goal_cost_2_0)
MR_decl_static(transform_hlds__pd_cost__goal_expr_cost_3_0)
MR_decl_static(transform_hlds__pd_cost__goal_costs_3_0)
MR_decl_static(transform_hlds__pd_cost__cases_cost_3_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_fold_0_0)
MR_def_extern_entry(fn__transform_hlds__pd_cost__cost_of_recursive_fold_0_0)
MR_decl_static(transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
static const struct mercury_type_0 mercury_common_0[4] =
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
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_cost__unify_cost_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_cost__unify_cost_3_0_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_cost__unify_cost_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,3)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_cost__unify_cost_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,2),
MR_COMMON(0,3)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_cost__unify_cost_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.pd_cost",
"transform_hlds.pd_cost",
"lambda_pd_cost_m_157",
2,
0
},
"transform_hlds.pd_cost",
"pd_cost.m",
157,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_cost__unify_cost_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.pd_cost",
"transform_hlds.pd_cost",
"lambda_pd_cost_m_157",
2,
0
},
"transform_hlds.pd_cost",
"pd_cost.m",
157,
"35"
};



MR_BEGIN_MODULE(transform_hlds__pd_cost_module0)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_reg_assign_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_reg_assign_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_reg_assign'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_reg_assign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module1)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_simple_test_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_simple_test_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_simple_test'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_simple_test_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module2)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_stack_flush_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_stack_flush_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_stack_flush'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_stack_flush_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module3)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_builtin_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_builtin_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_builtin_call'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_builtin_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module4)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_call'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module5)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_higher_order_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_higher_order_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_higher_order_call'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_higher_order_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module6)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_heap_assign_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_heap_assign_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_heap_assign'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_heap_assign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module7)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_heap_incr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_heap_incr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_heap_incr'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_heap_incr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_cost_module8)
	MR_init_entry1(transform_hlds__pd_cost__unify_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_cost__unify_cost_3_0);
	MR_init_label10(transform_hlds__pd_cost__unify_cost_3_0,21,3,6,9,4,13,12,18,19,11)
	MR_init_label1(transform_hlds__pd_cost__unify_cost_3_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_cost__unify_cost_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		transform_hlds__pd_cost__unify_cost_3_0_i6);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__pd_cost__unify_cost_3_0_i9);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 3 + ((MR_Integer) MR_r1 * (MR_Integer) 2));
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i11);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r2, 4);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = (MR_Integer) 3;
	MR_r5 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r5, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i12);
	}
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = (MR_Integer) 0;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(list__filter_3_0,
		transform_hlds__pd_cost__unify_cost_3_0_i18);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__pd_cost__unify_cost_3_0_i19);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(1) + (MR_Integer) 3) + ((MR_Integer) MR_r1 * (MR_Integer) 2));
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__unify_cost_3_0_i20);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(transform_hlds__pd_cost__unify_cost_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module9)
	MR_init_entry1(transform_hlds__pd_cost__goal_cost_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_cost__goal_cost_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_cost'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_cost__goal_cost_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(transform_hlds__pd_cost__goal_expr_cost_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__f_105_110_116_95_95_47_47_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_cost_module10)
	MR_init_entry1(transform_hlds__pd_cost__goal_expr_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_cost__goal_expr_cost_3_0);
	MR_init_label10(transform_hlds__pd_cost__goal_expr_cost_3_0,5,4,8,9,3,10,13,12,16,17)
	MR_init_label10(transform_hlds__pd_cost__goal_expr_cost_3_0,14,19,20,21,18,22,147,28,29,24)
	MR_init_label5(transform_hlds__pd_cost__goal_expr_cost_3_0,31,30,36,39,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_cost__goal_expr_cost_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i5);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i8);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 5;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i8);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i9);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(2) + (MR_Integer) 3) + ((MR_Integer) 1 * (MR_Integer) MR_r1));
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(transform_hlds__pd_cost__goal_costs_3_0);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_costs_3_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i13);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 5);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i16);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 * (MR_Integer) MR_r1);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i17);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 + (MR_Integer) 5) + (MR_Integer) 8);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_localcall_lab(transform_hlds__pd_cost__goal_expr_cost_3_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i19);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_localcall_lab(transform_hlds__pd_cost__goal_expr_cost_3_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i20);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i21);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i22);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_np_tailcall_ent(transform_hlds__pd_cost__goal_cost_2_0);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i24);
	}
	MR_r2 = MR_tfield(2, MR_r1, 3);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i147);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i28);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_47_47_2_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i29);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 8 + ((MR_Integer) 1 * (MR_Integer) MR_r1));
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i30);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i31);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(transform_hlds__pd_cost__goal_cost_2_0);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i36);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_r2 = (MR_Integer) 3;
	MR_np_tailcall_ent(transform_hlds__pd_cost__cases_cost_3_0);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_expr_cost_3_0_i38);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__pd_cost__goal_expr_cost_3_0_i39);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__pd_cost__unify_cost_3_0);
MR_def_label(transform_hlds__pd_cost__goal_expr_cost_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.pd_cost", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.pd_cost.goal_expr_cost\'/3", 51);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module11)
	MR_init_entry1(transform_hlds__pd_cost__goal_costs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_cost__goal_costs_3_0);
	MR_init_label3(transform_hlds__pd_cost__goal_costs_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_costs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_cost__goal_costs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_cost__goal_costs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__goal_costs_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__goal_costs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_expr_cost_3_0,
		transform_hlds__pd_cost__goal_costs_3_0_i4);
MR_def_label(transform_hlds__pd_cost__goal_costs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__pd_cost__goal_costs_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module12)
	MR_init_entry1(transform_hlds__pd_cost__cases_cost_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_cost__cases_cost_3_0);
	MR_init_label3(transform_hlds__pd_cost__cases_cost_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_cost'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_cost__cases_cost_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__pd_cost__cases_cost_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_cost__cases_cost_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__pd_cost__cases_cost_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_expr_cost_3_0,
		transform_hlds__pd_cost__cases_cost_3_0_i4);
MR_def_label(transform_hlds__pd_cost__cases_cost_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__pd_cost__cases_cost_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module13)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_eliminate_switch'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module14)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_fold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_fold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_fold'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_fold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_cost_module15)
	MR_init_entry1(fn__transform_hlds__pd_cost__cost_of_recursive_fold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__pd_cost__cost_of_recursive_fold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cost_of_recursive_fold'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__pd_cost__cost_of_recursive_fold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__contains_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_cost_module16)
	MR_init_entry1(transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__unify_cost__157__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(parse_tree__set_of_var__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__pd_cost_maybe_bunch_0(void)
{
	transform_hlds__pd_cost_module0();
	transform_hlds__pd_cost_module1();
	transform_hlds__pd_cost_module2();
	transform_hlds__pd_cost_module3();
	transform_hlds__pd_cost_module4();
	transform_hlds__pd_cost_module5();
	transform_hlds__pd_cost_module6();
	transform_hlds__pd_cost_module7();
	transform_hlds__pd_cost_module8();
	transform_hlds__pd_cost_module9();
	transform_hlds__pd_cost_module10();
	transform_hlds__pd_cost_module11();
	transform_hlds__pd_cost_module12();
	transform_hlds__pd_cost_module13();
	transform_hlds__pd_cost_module14();
	transform_hlds__pd_cost_module15();
	transform_hlds__pd_cost_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__pd_cost__init(void);
void mercury__transform_hlds__pd_cost__init_type_tables(void);
void mercury__transform_hlds__pd_cost__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__pd_cost__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__pd_cost__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__pd_cost__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__pd_cost__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__pd_cost_maybe_bunch_0();
	mercury__transform_hlds__pd_cost__init_debugger();
}

void mercury__transform_hlds__pd_cost__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__pd_cost__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__pd_cost__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__pd_cost);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__pd_cost__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__pd_cost__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
