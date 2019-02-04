/*
** Automatically generated from `lookup_util.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__lookup_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.lookup_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.lookup_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.lookup_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.lookup_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.lookup_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.lookup_util.c"
#line 49 "ll_backend.lookup_util.c"
#include "ll_backend.lookup_util.mh"

#line 52 "ll_backend.lookup_util.c"
#line 53 "ll_backend.lookup_util.c"
#ifndef LL_BACKEND__LOOKUP_UTIL_DECL_GUARD
#define LL_BACKEND__LOOKUP_UTIL_DECL_GUARD

#line 57 "ll_backend.lookup_util.c"
#line 58 "ll_backend.lookup_util.c"

#endif
#line 61 "ll_backend.lookup_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label8(ll_backend__lookup_util__figure_out_output_vars_3_0, 2,5,3,7,8,9,10,13)
MR_decl_label10(ll_backend__lookup_util__generate_constants_for_arm_9_0, 2,3,4,5,7,8,9,11,12,1)
MR_decl_label10(ll_backend__lookup_util__generate_constants_for_disjunct_9_0, 2,4,5,6,7,9,10,11,13,14)
MR_decl_label2(ll_backend__lookup_util__generate_constants_for_disjunct_9_0, 15,1)
MR_decl_label4(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0, 32,4,6,1)
MR_decl_label4(ll_backend__lookup_util__generate_offset_assigns_5_0, 20,3,9,11)
MR_decl_label6(ll_backend__lookup_util__get_arm_rvals_5_0, 41,4,5,7,9,1)
MR_decl_label2(ll_backend__lookup_util__is_output_var_4_0, 2,3)
MR_decl_label7(ll_backend__lookup_util__rval_is_constant_2_0, 41,3,7,6,12,11,1)
MR_decl_label4(ll_backend__lookup_util__set_liveness_and_end_branch_7_0, 2,3,5,6)
MR_def_extern_entry(ll_backend__lookup_util__figure_out_output_vars_3_0)
MR_decl_static(ll_backend__lookup_util__rval_is_constant_2_0)
MR_decl_static(ll_backend__lookup_util__get_arm_rvals_5_0)
MR_def_extern_entry(ll_backend__lookup_util__generate_constants_for_arm_9_0)
MR_def_extern_entry(ll_backend__lookup_util__generate_constants_for_disjunct_9_0)
MR_def_extern_entry(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0)
MR_def_extern_entry(ll_backend__lookup_util__set_liveness_and_end_branch_7_0)
MR_def_extern_entry(ll_backend__lookup_util__generate_offset_assigns_5_0)
MR_decl_static(ll_backend__lookup_util__is_output_var_4_0)
MR_decl_static(ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__217__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_0 mercury_common_0[3] =
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
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_util__figure_out_output_vars_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_util__figure_out_output_vars_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_CTOR0_ADDR(hlds__instmap, instmap),
MR_COMMON(0,0)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_util__generate_offset_assigns_5_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__lookup_util__generate_offset_assigns_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(0,2)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_util__generate_offset_assigns_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.lookup_util",
"ll_backend.lookup_util",
"lambda_lookup_util_m_217",
1,
0
},
"ll_backend.lookup_util",
"lookup_util.m",
217,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__lookup_util__figure_out_output_vars_3_0_1 = {
{
MR_PREDICATE,
"ll_backend.lookup_util",
"ll_backend.lookup_util",
"is_output_var",
4,
0
},
"ll_backend.lookup_util",
"lookup_util.m",
104,
"14"
};


MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(ll_backend__code_info__get_instmap_2_0);
MR_decl_entry(ll_backend__code_info__get_module_info_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module0)
	MR_init_entry1(ll_backend__lookup_util__figure_out_output_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__figure_out_output_vars_3_0);
	MR_init_label8(ll_backend__lookup_util__figure_out_output_vars_3_0,2,5,3,7,8,9,10,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'figure_out_output_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_util__figure_out_output_vars_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i2);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i5);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__figure_out_output_vars_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_instmap_2_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i7);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_info__get_module_info_2_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i8);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i9);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i10);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__lookup_util__is_output_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ll_backend__lookup_util__figure_out_output_vars_3_0_i13);
MR_def_label(ll_backend__lookup_util__figure_out_output_vars_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__filter_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__exprn_aux__const_is_constant_3_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module1)
	MR_init_entry1(ll_backend__lookup_util__rval_is_constant_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__rval_is_constant_2_0);
	MR_init_label7(ll_backend__lookup_util__rval_is_constant_2_0,41,3,7,6,12,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_is_constant'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_util__rval_is_constant_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	/* continue */ } /* end while */
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__lookup_util__rval_is_constant_2_0,
		ll_backend__lookup_util__rval_is_constant_2_0_i7);
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i41);
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i11);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__exprn_aux__const_is_constant_3_0,
		ll_backend__lookup_util__rval_is_constant_2_0_i12);
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__lookup_util__rval_is_constant_2_0_i41);
MR_def_label(ll_backend__lookup_util__rval_is_constant_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__produce_variable_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(cord__is_empty_1_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module2)
	MR_init_entry1(ll_backend__lookup_util__get_arm_rvals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__get_arm_rvals_5_0);
	MR_init_label6(ll_backend__lookup_util__get_arm_rvals_5_0,41,4,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_arm_rvals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_util__get_arm_rvals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_util__get_arm_rvals_5_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__lookup_util__get_arm_rvals_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__code_info__produce_variable_5_0,
		ll_backend__lookup_util__get_arm_rvals_5_0_i4);
MR_def_label(ll_backend__lookup_util__get_arm_rvals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(cord__is_empty_1_0,
		ll_backend__lookup_util__get_arm_rvals_5_0_i5);
MR_def_label(ll_backend__lookup_util__get_arm_rvals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__get_arm_rvals_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__lookup_util__rval_is_constant_2_0,
		ll_backend__lookup_util__get_arm_rvals_5_0_i7);
MR_def_label(ll_backend__lookup_util__get_arm_rvals_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__get_arm_rvals_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(ll_backend__lookup_util__get_arm_rvals_5_0,
		ll_backend__lookup_util__get_arm_rvals_5_0_i9);
MR_def_label(ll_backend__lookup_util__get_arm_rvals_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__get_arm_rvals_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ll_backend__lookup_util__get_arm_rvals_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__remember_position_2_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ll_backend__code_gen__generate_goal_5_0);
MR_decl_entry(ll_backend__code_info__get_forward_live_vars_2_0);
MR_decl_entry(ll_backend__code_info__get_exprn_opts_2_0);
MR_decl_entry(ll_backend__code_info__generate_branch_end_6_0);
MR_decl_entry(ll_backend__code_info__reset_to_position_3_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module3)
	MR_init_entry1(ll_backend__lookup_util__generate_constants_for_arm_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__generate_constants_for_arm_9_0);
	MR_init_label10(ll_backend__lookup_util__generate_constants_for_arm_9_0,2,3,4,5,7,8,9,11,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_constants_for_arm'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_util__generate_constants_for_arm_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i2);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i3);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i4);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(cord__is_empty_1_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i5);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_arm_9_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i7);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_info__get_exprn_opts_2_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i8);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__get_arm_rvals_5_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i9);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_arm_9_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i11);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_util__generate_constants_for_arm_9_0_i12);
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__lookup_util__generate_constants_for_arm_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_set_resume_point_3_0);
MR_decl_entry(ll_backend__code_info__set_resume_point_to_unknown_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module4)
	MR_init_entry1(ll_backend__lookup_util__generate_constants_for_disjunct_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__generate_constants_for_disjunct_9_0);
	MR_init_label10(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,2,4,5,6,7,9,10,11,13,14)
	MR_init_label2(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_constants_for_disjunct'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_util__generate_constants_for_disjunct_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_resume_point_3_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i2);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__remember_position_2_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i4);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i5);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_gen__generate_goal_5_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i6);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(cord__is_empty_1_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i7);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i9);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__code_info__get_exprn_opts_2_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i10);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__lookup_util__get_arm_rvals_5_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i11);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__set_resume_point_to_unknown_2_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i13);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__generate_branch_end_6_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i14);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__code_info__reset_to_position_3_0,
		ll_backend__lookup_util__generate_constants_for_disjunct_9_0_i15);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_util_module5)
	MR_init_entry1(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__generate_constants_for_disjuncts_8_0);
	MR_init_label4(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_constants_for_disjuncts'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_util__generate_constants_for_disjuncts_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__lookup_util__generate_constants_for_disjunct_9_0,
		ll_backend__lookup_util__generate_constants_for_disjuncts_8_0_i4);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,
		ll_backend__lookup_util__generate_constants_for_disjuncts_8_0_i6);
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__lookup_util__generate_constants_for_disjuncts_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__set_forward_live_vars_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(ll_backend__code_info__maybe_make_vars_forward_dead_4_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module6)
	MR_init_entry1(ll_backend__lookup_util__set_liveness_and_end_branch_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__set_liveness_and_end_branch_7_0);
	MR_init_label4(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_liveness_and_end_branch'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_util__set_liveness_and_end_branch_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__get_forward_live_vars_2_0,
		ll_backend__lookup_util__set_liveness_and_end_branch_7_0_i2);
MR_def_label(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_info__set_forward_live_vars_3_0,
		ll_backend__lookup_util__set_liveness_and_end_branch_7_0_i3);
MR_def_label(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__lookup_util__set_liveness_and_end_branch_7_0_i5);
MR_def_label(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_info__maybe_make_vars_forward_dead_4_0,
		ll_backend__lookup_util__set_liveness_and_end_branch_7_0_i6);
MR_def_label(ll_backend__lookup_util__set_liveness_and_end_branch_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ll_backend__code_info__generate_branch_end_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__code_info__assign_lval_to_var_5_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module7)
	MR_init_entry1(ll_backend__lookup_util__generate_offset_assigns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__generate_offset_assigns_5_0);
	MR_init_label4(ll_backend__lookup_util__generate_offset_assigns_5_0,20,3,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_offset_assigns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__lookup_util__generate_offset_assigns_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__lookup_util__generate_offset_assigns_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__lookup_util__generate_offset_assigns_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__lookup_util__generate_offset_assigns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr5 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr5;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ll_backend__code_info__assign_lval_to_var_5_0,
		ll_backend__lookup_util__generate_offset_assigns_5_0_i9);
MR_def_label(ll_backend__lookup_util__generate_offset_assigns_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__217__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.lookup_util", 22);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.lookup_util.generate_offset_assigns\'/5", 60);
	MR_r4 = (MR_Word) MR_string_const("nonempty code", 13);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__lookup_util__generate_offset_assigns_5_0_i11);
MR_def_label(ll_backend__lookup_util__generate_offset_assigns_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__lookup_util__generate_offset_assigns_5_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);

MR_BEGIN_MODULE(ll_backend__lookup_util_module8)
	MR_init_entry1(ll_backend__lookup_util__is_output_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__is_output_var_4_0);
	MR_init_label2(ll_backend__lookup_util__is_output_var_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_output_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_util__is_output_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		ll_backend__lookup_util__is_output_var_4_0_i2);
MR_def_label(ll_backend__lookup_util__is_output_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		ll_backend__lookup_util__is_output_var_4_0_i3);
MR_def_label(ll_backend__lookup_util__is_output_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_util__mode_is_output_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__lookup_util_module9)
	MR_init_entry1(ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__217__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__217__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_offset_assigns__217__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__217__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(cord__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__lookup_util_maybe_bunch_0(void)
{
	ll_backend__lookup_util_module0();
	ll_backend__lookup_util_module1();
	ll_backend__lookup_util_module2();
	ll_backend__lookup_util_module3();
	ll_backend__lookup_util_module4();
	ll_backend__lookup_util_module5();
	ll_backend__lookup_util_module6();
	ll_backend__lookup_util_module7();
	ll_backend__lookup_util_module8();
	ll_backend__lookup_util_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__lookup_util__init(void);
void mercury__ll_backend__lookup_util__init_type_tables(void);
void mercury__ll_backend__lookup_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__lookup_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__lookup_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__lookup_util__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__lookup_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__lookup_util_maybe_bunch_0();
	mercury__ll_backend__lookup_util__init_debugger();
}

void mercury__ll_backend__lookup_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ll_backend__lookup_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__lookup_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__lookup_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__lookup_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__lookup_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
