/*
** Automatically generated from `code_util.m'
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
INIT mercury__ll_backend__code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "ll_backend.code_util.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "ll_backend.code_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.code_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.code_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.code_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.code_util.c"
#line 49 "ll_backend.code_util.c"
#include "ll_backend.code_util.mh"

#line 52 "ll_backend.code_util.c"
#line 53 "ll_backend.code_util.c"
#ifndef LL_BACKEND__CODE_UTIL_DECL_GUARD
#define LL_BACKEND__CODE_UTIL_DECL_GUARD

#line 57 "ll_backend.code_util.c"
#line 58 "ll_backend.code_util.c"

#endif
#line 61 "ll_backend.code_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__code_util__type_ctor_info_immed_0;
MR_decl_label3(ll_backend__code_util__build_input_arg_list_2_0, 2,3,5)
MR_decl_label4(ll_backend__code_util__build_input_arg_list_2_2_0, 9,10,4,2)
MR_decl_label4(ll_backend__code_util__cases_may_alloc_temp_frame_2_0, 15,3,5,4)
MR_decl_label4(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0, 15,3,5,4)
MR_decl_label10(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0, 82,3,4,6,8,11,10,13,12,9)
MR_decl_label7(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0, 17,19,21,23,20,25,27)
MR_decl_label4(ll_backend__code_util__max_mentioned_abs_reg_2_3_0, 18,3,6,4)
MR_decl_label4(ll_backend__code_util__max_mentioned_reg_2_3_0, 23,3,7,4)
MR_decl_label10(ll_backend__code_util__neg_rval_2_0, 6,8,10,12,14,16,18,20,22,24)
MR_decl_label10(ll_backend__code_util__neg_rval_2_0, 26,28,30,32,34,36,38,4,44,42)
MR_decl_label1(ll_backend__code_util__neg_rval_2_0, 2)
MR_decl_label4(ll_backend__code_util__negate_the_test_2_0, 6,4,10,3)
MR_decl_label2(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0, 2,5)
MR_decl_label10(fn__ll_backend__code_util__lvals_in_lval_1_0, 3,4,5,6,7,8,9,10,12,13)
MR_decl_label10(fn__ll_backend__code_util__lvals_in_lval_1_0, 11,15,16,17,18,20,21,23,85,25)
MR_decl_label3(fn__ll_backend__code_util__lvals_in_lvals_1_0, 17,4,5)
MR_decl_label4(fn__ll_backend__code_util__lvals_in_mem_ref_1_0, 12,3,6,7)
MR_decl_label10(fn__ll_backend__code_util__lvals_in_rval_1_0, 54,4,3,6,8,10,11,9,13,14)
MR_decl_label4(fn__ll_backend__code_util__make_entry_label_4_0, 2,5,4,7)
MR_decl_label3(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0, 4,3,6)
MR_decl_label1(fn__ll_backend__code_util__make_internal_label_4_0, 2)
MR_decl_label7(fn__ll_backend__code_util__make_local_entry_label_4_0, 2,3,19,7,5,13,12)
MR_decl_label6(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0, 2,18,6,4,12,11)
MR_decl_label5(fn__ll_backend__code_util__size_of_cell_args_1_0, 6,4,3,7,2)
MR_decl_static(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0)
MR_def_extern_entry(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0)
MR_def_extern_entry(fn__ll_backend__code_util__make_entry_label_4_0)
MR_def_extern_entry(fn__ll_backend__code_util__make_local_entry_label_4_0)
MR_def_extern_entry(fn__ll_backend__code_util__make_internal_label_4_0)
MR_def_extern_entry(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0)
MR_def_extern_entry(ll_backend__code_util__arg_loc_to_register_2_0)
MR_decl_static(ll_backend__code_util__max_mentioned_reg_2_3_0)
MR_def_extern_entry(ll_backend__code_util__max_mentioned_reg_2_0)
MR_decl_static(ll_backend__code_util__max_mentioned_abs_reg_2_3_0)
MR_def_extern_entry(ll_backend__code_util__max_mentioned_abs_reg_2_0)
MR_def_extern_entry(ll_backend__code_util__goal_may_alloc_temp_frame_2_0)
MR_decl_static(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0)
MR_decl_static(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0)
MR_decl_static(ll_backend__code_util__cases_may_alloc_temp_frame_2_0)
MR_def_extern_entry(ll_backend__code_util__neg_rval_2_0)
MR_def_extern_entry(ll_backend__code_util__negate_the_test_2_0)
MR_def_extern_entry(fn__ll_backend__code_util__lvals_in_rval_1_0)
MR_def_extern_entry(fn__ll_backend__code_util__lvals_in_lval_1_0)
MR_decl_static(fn__ll_backend__code_util__lvals_in_mem_ref_1_0)
MR_def_extern_entry(fn__ll_backend__code_util__lvals_in_lvals_1_0)
MR_decl_static(ll_backend__code_util__build_input_arg_list_2_2_0)
MR_def_extern_entry(ll_backend__code_util__build_input_arg_list_2_0)
MR_def_extern_entry(fn__ll_backend__code_util__size_of_cell_args_1_0)
MR_def_extern_entry(__Unify___ll_backend__code_util__immed_0_0)
MR_def_extern_entry(__Compare___ll_backend__code_util__immed_0_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0,
MR_tbmkword(0, 0)
},
{
0,
MR_tbmkword(0, 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__code_util__type_ctor_info_immed_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__code_util__immed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__code_util__immed_0_0)),
	"ll_backend.code_util",
	"immed",
	{ 0 },
	{ (void *)&mercury_data_maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0);

MR_BEGIN_MODULE(ll_backend__code_util_module0)
	MR_init_entry1(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0);
	MR_init_label6(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,2,18,6,4,12,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_local_entry_label_from_rtti'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i2);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i4);
	}
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(2), 12) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i6);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr3, 6);
	MR_r3 = MR_tfield(0, MR_tempr3, 7);
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r7 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i12);
	}
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i11);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r7)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i18);
	}
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0_i18);
	}
	MR_sv(2) = MR_r1;
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module1)
	MR_init_entry1(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__make_entry_label_from_rtti_2_0);
	MR_init_label3(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_entry_label_from_rtti'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__make_entry_label_from_rtti_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 12) >> (MR_Integer) 1) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i3);
	}
	}
	MR_np_call_localret_ent(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,
		fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i4);
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i6);
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module2)
	MR_init_entry1(fn__ll_backend__code_util__make_entry_label_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__make_entry_label_4_0);
	MR_init_label4(fn__ll_backend__code_util__make_entry_label_4_0,2,5,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_entry_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__make_entry_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		fn__ll_backend__code_util__make_entry_label_4_0_i2);
MR_def_label(fn__ll_backend__code_util__make_entry_label_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 12) >> (MR_Integer) 1) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_4_0_i4);
	}
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ll_backend__code_util__make_local_entry_label_from_rtti_2_0,
		fn__ll_backend__code_util__make_entry_label_4_0_i5);
MR_def_label(fn__ll_backend__code_util__make_entry_label_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__code_util__make_entry_label_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_entry_label_4_0_i7);
MR_def_label(fn__ll_backend__code_util__make_entry_label_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module3)
	MR_init_entry1(fn__ll_backend__code_util__make_local_entry_label_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__make_local_entry_label_4_0);
	MR_init_label7(fn__ll_backend__code_util__make_local_entry_label_4_0,2,3,19,7,5,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_local_entry_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__make_local_entry_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		fn__ll_backend__code_util__make_local_entry_label_4_0_i2);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_local_entry_label_4_0_i3);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i5);
	}
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_sv(1), 12) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i7);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr3, 6);
	MR_r3 = MR_tfield(0, MR_tempr3, 7);
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r7 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i13);
	}
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i12);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r7)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i19);
	}
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i19);
	}
	MR_sv(2) = MR_r1;
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module4)
	MR_init_entry1(fn__ll_backend__code_util__make_internal_label_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__make_internal_label_4_0);
	MR_init_label1(fn__ll_backend__code_util__make_internal_label_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_internal_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__make_internal_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_3_0,
		fn__ll_backend__code_util__make_internal_label_4_0_i2);
MR_def_label(fn__ll_backend__code_util__make_internal_label_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__get_proc_label_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module5)
	MR_init_entry1(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0);
	MR_init_label2(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_proc_label_from_code_addr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0_i2);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__llds__get_proc_label_1_0);
MR_def_label(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.code_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.code_util.extract_proc_label_from_code_addr\'/1", 67);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module6)
	MR_init_entry1(ll_backend__code_util__arg_loc_to_register_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__arg_loc_to_register_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'arg_loc_to_register'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__arg_loc_to_register_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module7)
	MR_init_entry1(ll_backend__code_util__max_mentioned_reg_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__max_mentioned_reg_2_3_0);
	MR_init_label4(ll_backend__code_util__max_mentioned_reg_2_3_0,23,3,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_mentioned_reg_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__max_mentioned_reg_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__code_util__max_mentioned_reg_2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__max_mentioned_reg_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__code_util__max_mentioned_reg_2_3_0_i7);
MR_def_label(ll_backend__code_util__max_mentioned_reg_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i23);
	}
MR_def_label(ll_backend__code_util__max_mentioned_reg_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module8)
	MR_init_entry1(ll_backend__code_util__max_mentioned_reg_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__max_mentioned_reg_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_mentioned_reg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__max_mentioned_reg_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(ll_backend__code_util__max_mentioned_reg_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module9)
	MR_init_entry1(ll_backend__code_util__max_mentioned_abs_reg_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__max_mentioned_abs_reg_2_3_0);
	MR_init_label4(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,18,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_mentioned_abs_reg_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__max_mentioned_abs_reg_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i6);
MR_def_label(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i18);
	}
MR_def_label(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module10)
	MR_init_entry1(ll_backend__code_util__max_mentioned_abs_reg_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__max_mentioned_abs_reg_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_mentioned_abs_reg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__max_mentioned_abs_reg_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(ll_backend__code_util__max_mentioned_abs_reg_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module11)
	MR_init_entry1(ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_may_alloc_temp_frame'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);

MR_BEGIN_MODULE(ll_backend__code_util_module12)
	MR_init_entry1(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0);
	MR_init_label10(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,82,3,4,6,8,11,10,13,12,9)
	MR_init_label7(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,17,19,21,23,20,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_may_alloc_temp_frame_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i4);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i6);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i9);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 2), 0);
	MR_np_localcall_lab(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i11);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i13);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i82);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i17);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i82);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i20);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i21);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i82);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i25);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__cases_may_alloc_temp_frame_2_0);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.code_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.code_util.goal_may_alloc_temp_frame_2\'/2", 62);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module13)
	MR_init_entry1(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
	MR_init_label4(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0,15,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_may_alloc_temp_frame'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0_i5);
MR_def_label(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module14)
	MR_init_entry1(ll_backend__code_util__cases_may_alloc_temp_frame_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__cases_may_alloc_temp_frame_2_0);
	MR_init_label4(ll_backend__code_util__cases_may_alloc_temp_frame_2_0,15,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_may_alloc_temp_frame'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__cases_may_alloc_temp_frame_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__code_util__cases_may_alloc_temp_frame_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__cases_may_alloc_temp_frame_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__cases_may_alloc_temp_frame_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
	MR_np_call_localret_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__cases_may_alloc_temp_frame_2_0_i5);
MR_def_label(ll_backend__code_util__cases_may_alloc_temp_frame_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__cases_may_alloc_temp_frame_2_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__cases_may_alloc_temp_frame_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__cases_may_alloc_temp_frame_2_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module15)
	MR_init_entry1(ll_backend__code_util__neg_rval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__neg_rval_2_0);
	MR_init_label10(ll_backend__code_util__neg_rval_2_0,6,8,10,12,14,16,18,20,22,24)
	MR_init_label10(ll_backend__code_util__neg_rval_2_0,26,28,30,32,34,36,38,4,44,42)
	MR_init_label1(ll_backend__code_util__neg_rval_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'neg_rval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__neg_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i4);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,12)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,31)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 32);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,36)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 33);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,34)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 35);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,35)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 34);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,33)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i16);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 36);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,32)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 31);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,25)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i20);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,23)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i22);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,24)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,22)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i26);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 25);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,13)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,15)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i30);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,20)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i32);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 17);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,18)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i34);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 19);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,19)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i36);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 18);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,17)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 20);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,16)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 15);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i42);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i44);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_proceed();
MR_def_label(ll_backend__code_util__neg_rval_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_proceed();
MR_def_label(ll_backend__code_util__neg_rval_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_proceed();
MR_def_label(ll_backend__code_util__neg_rval_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module16)
	MR_init_entry1(ll_backend__code_util__negate_the_test_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__negate_the_test_2_0);
	MR_init_label4(ll_backend__code_util__negate_the_test_2_0,6,4,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negate_the_test'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__negate_the_test_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__negate_the_test_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,9)) {
		MR_GOTO_LAB(ll_backend__code_util__negate_the_test_2_0_i4);
	}
	MR_r2 = MR_tempr1;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__code_util__negate_the_test_2_0_i6);
MR_def_label(ll_backend__code_util__negate_the_test_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__code_util__negate_the_test_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ll_backend__code_util__negate_the_test_2_0,
		ll_backend__code_util__negate_the_test_2_0_i10);
MR_def_label(ll_backend__code_util__negate_the_test_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__code_util__negate_the_test_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.code_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.code_util.negate_the_test\'/2", 50);
	MR_r3 = (MR_Word) MR_string_const("empty list", 10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__code_util_module17)
	MR_init_entry1(fn__ll_backend__code_util__lvals_in_rval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__lvals_in_rval_1_0);
	MR_init_label10(fn__ll_backend__code_util__lvals_in_rval_1_0,54,4,3,6,8,10,11,9,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lvals_in_rval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__lvals_in_rval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__code_util__lvals_in_lval_1_0,
		fn__ll_backend__code_util__lvals_in_rval_1_0_i4);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i6);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i54);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i9);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ll_backend__code_util__lvals_in_rval_1_0,
		fn__ll_backend__code_util__lvals_in_rval_1_0_i10);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ll_backend__code_util__lvals_in_rval_1_0,
		fn__ll_backend__code_util__lvals_in_rval_1_0_i11);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__code_util__lvals_in_mem_ref_1_0);
MR_def_label(fn__ll_backend__code_util__lvals_in_rval_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_rval_1_0_i54);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module18)
	MR_init_entry1(fn__ll_backend__code_util__lvals_in_lval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__lvals_in_lval_1_0);
	MR_init_label10(fn__ll_backend__code_util__lvals_in_lval_1_0,3,4,5,6,7,8,9,10,12,13)
	MR_init_label10(fn__ll_backend__code_util__lvals_in_lval_1_0,11,15,16,17,18,20,21,23,85,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lvals_in_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__lvals_in_lval_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ll_backend__code_util__lvals_in_rval_1_0,
		fn__ll_backend__code_util__lvals_in_lval_1_0_i12);
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__code_util__lvals_in_rval_1_0,
		fn__ll_backend__code_util__lvals_in_lval_1_0_i13);
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i18);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__code_util__lvals_in_rval_1_0);
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__code_util__lvals_in_rval_1_0);
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__code_util__lvals_in_rval_1_0);
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i25);
	}
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ll_backend__code_util__lvals_in_rval_1_0);
MR_def_label(fn__ll_backend__code_util__lvals_in_lval_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lval_1_0_i85);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module19)
	MR_init_entry1(fn__ll_backend__code_util__lvals_in_mem_ref_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__lvals_in_mem_ref_1_0);
	MR_init_label4(fn__ll_backend__code_util__lvals_in_mem_ref_1_0,12,3,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lvals_in_mem_ref'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__code_util__lvals_in_mem_ref_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_mem_ref_1_0_i3);
	}
MR_def_label(fn__ll_backend__code_util__lvals_in_mem_ref_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__code_util__lvals_in_rval_1_0);
MR_def_label(fn__ll_backend__code_util__lvals_in_mem_ref_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_mem_ref_1_0_i12);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ll_backend__code_util__lvals_in_rval_1_0,
		fn__ll_backend__code_util__lvals_in_mem_ref_1_0_i6);
MR_def_label(fn__ll_backend__code_util__lvals_in_mem_ref_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__code_util__lvals_in_rval_1_0,
		fn__ll_backend__code_util__lvals_in_mem_ref_1_0_i7);
MR_def_label(fn__ll_backend__code_util__lvals_in_mem_ref_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module20)
	MR_init_entry1(fn__ll_backend__code_util__lvals_in_lvals_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__lvals_in_lvals_1_0);
	MR_init_label3(fn__ll_backend__code_util__lvals_in_lvals_1_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lvals_in_lvals'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__lvals_in_lvals_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__lvals_in_lvals_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__lvals_in_lvals_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ll_backend__code_util__lvals_in_lval_1_0,
		fn__ll_backend__code_util__lvals_in_lvals_1_0_i4);
MR_def_label(fn__ll_backend__code_util__lvals_in_lvals_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ll_backend__code_util__lvals_in_lvals_1_0,
		fn__ll_backend__code_util__lvals_in_lvals_1_0_i5);
MR_def_label(fn__ll_backend__code_util__lvals_in_lvals_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module21)
	MR_init_entry1(ll_backend__code_util__build_input_arg_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__build_input_arg_list_2_2_0);
	MR_init_label4(ll_backend__code_util__build_input_arg_list_2_2_0,9,10,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_input_arg_list_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__build_input_arg_list_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__build_input_arg_list_2_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(3);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__code_util__build_input_arg_list_2_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(3);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ll_backend__code_util__build_input_arg_list_2_2_0_i10);
	}
	MR_proceed();
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module22)
	MR_init_entry1(ll_backend__code_util__build_input_arg_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__code_util__build_input_arg_list_2_0);
	MR_init_label3(ll_backend__code_util__build_input_arg_list_2_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_input_arg_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__build_input_arg_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ll_backend__code_util__build_input_arg_list_2_0_i2);
MR_def_label(ll_backend__code_util__build_input_arg_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__code_util__build_input_arg_list_2_0_i3);
MR_def_label(ll_backend__code_util__build_input_arg_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__code_util__build_input_arg_list_2_0_i5);
MR_def_label(ll_backend__code_util__build_input_arg_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__code_util__build_input_arg_list_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module23)
	MR_init_entry1(fn__ll_backend__code_util__size_of_cell_args_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__code_util__size_of_cell_args_1_0);
	MR_init_label5(fn__ll_backend__code_util__size_of_cell_args_1_0,6,4,3,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size_of_cell_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__size_of_cell_args_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__size_of_cell_args_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__ll_backend__code_util__size_of_cell_args_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__size_of_cell_args_1_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 2;
	MR_GOTO_LAB(fn__ll_backend__code_util__size_of_cell_args_1_0_i3);
MR_def_label(fn__ll_backend__code_util__size_of_cell_args_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Integer) 1;
MR_def_label(fn__ll_backend__code_util__size_of_cell_args_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__size_of_cell_args_1_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__ll_backend__code_util__size_of_cell_args_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__ll_backend__code_util__size_of_cell_args_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__code_util_module24)
	MR_init_entry1(__Unify___ll_backend__code_util__immed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__code_util__immed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__code_util__immed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__code_util_module25)
	MR_init_entry1(__Compare___ll_backend__code_util__immed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__code_util__immed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__code_util__immed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__code_util_maybe_bunch_0(void)
{
	ll_backend__code_util_module0();
	ll_backend__code_util_module1();
	ll_backend__code_util_module2();
	ll_backend__code_util_module3();
	ll_backend__code_util_module4();
	ll_backend__code_util_module5();
	ll_backend__code_util_module6();
	ll_backend__code_util_module7();
	ll_backend__code_util_module8();
	ll_backend__code_util_module9();
	ll_backend__code_util_module10();
	ll_backend__code_util_module11();
	ll_backend__code_util_module12();
	ll_backend__code_util_module13();
	ll_backend__code_util_module14();
	ll_backend__code_util_module15();
	ll_backend__code_util_module16();
	ll_backend__code_util_module17();
	ll_backend__code_util_module18();
	ll_backend__code_util_module19();
	ll_backend__code_util_module20();
	ll_backend__code_util_module21();
	ll_backend__code_util_module22();
	ll_backend__code_util_module23();
	ll_backend__code_util_module24();
	ll_backend__code_util_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__code_util__init(void);
void mercury__ll_backend__code_util__init_type_tables(void);
void mercury__ll_backend__code_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__code_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__code_util__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__code_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__code_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__code_util__type_ctor_info_immed_0,
		ll_backend__code_util__immed_0_0);
	mercury__ll_backend__code_util__init_debugger();
}

void mercury__ll_backend__code_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__code_util__type_ctor_info_immed_0);
	}
}


void mercury__ll_backend__code_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__code_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__code_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__code_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__code_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
