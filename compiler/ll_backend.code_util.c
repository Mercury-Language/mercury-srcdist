/*
** Automatically generated from `code_util.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 27 "ll_backend.code_util.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 31 "ll_backend.code_util.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 35 "ll_backend.code_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.code_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.code_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.code_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.code_util.c"
#line 52 "ll_backend.code_util.c"
#include "ll_backend.code_util.mh"

#line 55 "ll_backend.code_util.c"
#line 56 "ll_backend.code_util.c"
#ifndef LL_BACKEND__CODE_UTIL_DECL_GUARD
#define LL_BACKEND__CODE_UTIL_DECL_GUARD

#line 60 "ll_backend.code_util.c"
#line 61 "ll_backend.code_util.c"

#endif
#line 64 "ll_backend.code_util.c"

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
MR_decl_label3(ll_backend__code_util__build_input_arg_list_2_0, 2,3,4)
MR_decl_label4(ll_backend__code_util__build_input_arg_list_2_2_0, 7,8,4,2)
MR_decl_label4(ll_backend__code_util__cases_may_alloc_temp_frame_2_0, 15,3,5,4)
MR_decl_label4(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0, 15,3,5,4)
MR_decl_label8(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0, 56,7,9,11,13,15,17,18)
MR_decl_label8(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0, 20,24,26,25,28,42,27,32)
MR_decl_label2(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0, 3,2)
MR_decl_label5(ll_backend__code_util__lvals_in_lval_2_0, 44,28,29,31,34)
MR_decl_label3(ll_backend__code_util__lvals_in_lvals_2_0, 14,4,5)
MR_decl_label4(ll_backend__code_util__lvals_in_mem_ref_2_0, 14,22,7,8)
MR_decl_label8(ll_backend__code_util__lvals_in_rval_2_0, 4,5,7,9,13,14,15,11)
MR_decl_label1(ll_backend__code_util__lvals_in_rval_2_0, 10)
MR_decl_label4(ll_backend__code_util__max_mentioned_abs_reg_2_3_0, 18,3,6,4)
MR_decl_label4(ll_backend__code_util__max_mentioned_reg_2_3_0, 23,3,7,4)
MR_decl_label8(ll_backend__code_util__neg_rval_2_0, 16,17,18,19,20,21,22,23)
MR_decl_label8(ll_backend__code_util__neg_rval_2_0, 24,25,26,27,28,29,30,31)
MR_decl_label6(ll_backend__code_util__neg_rval_2_0, 32,33,10,6,8,2)
MR_decl_label4(ll_backend__code_util__negate_the_test_2_0, 6,4,7,3)
MR_decl_label2(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0, 2,5)
MR_decl_label1(fn__ll_backend__code_util__make_entry_label_4_0, 2)
MR_decl_label7(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0, 4,2,5,7,14,13,12)
MR_decl_label1(fn__ll_backend__code_util__make_internal_label_4_0, 2)
MR_decl_label6(fn__ll_backend__code_util__make_local_entry_label_4_0, 2,3,5,12,11,10)
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
MR_decl_static(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0)
MR_decl_static(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0)
MR_decl_static(ll_backend__code_util__cases_may_alloc_temp_frame_2_0)
MR_def_extern_entry(ll_backend__code_util__neg_rval_2_0)
MR_def_extern_entry(ll_backend__code_util__negate_the_test_2_0)
MR_def_extern_entry(ll_backend__code_util__lvals_in_rval_2_0)
MR_def_extern_entry(ll_backend__code_util__lvals_in_lval_2_0)
MR_decl_static(ll_backend__code_util__lvals_in_mem_ref_2_0)
MR_def_extern_entry(ll_backend__code_util__lvals_in_lvals_2_0)
MR_decl_static(ll_backend__code_util__build_input_arg_list_2_2_0)
MR_def_extern_entry(ll_backend__code_util__build_input_arg_list_2_0)
MR_def_extern_entry(__Unify___ll_backend__code_util__immed_0_0)
MR_def_extern_entry(__Compare___ll_backend__code_util__immed_0_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0,
MR_tbmkword(0, 1)
},
{
0,
MR_tbmkword(0, 0)
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
	13,
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
	MR_init_entry1(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0);
	MR_init_label7(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,4,2,5,7,14,13,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__make_entry_label_from_rtti_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 15);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i2);
	}
	}
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i4);
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i5);
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 14);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i12);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr3, 7);
	MR_r3 = MR_ctfield(0, MR_tempr3, 6);
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r7 = MR_ctfield(0, MR_tempr2, 0);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i13);
	}
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r7)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i12);
	}
	if ((MR_r2 != MR_r4)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0_i12);
	}
	MR_sv(1) = MR_r1;
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module1)
	MR_init_entry1(fn__ll_backend__code_util__make_entry_label_4_0);
	MR_init_label1(fn__ll_backend__code_util__make_entry_label_4_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ll_backend__code_util__make_entry_label_from_rtti_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module2)
	MR_init_entry1(fn__ll_backend__code_util__make_local_entry_label_4_0);
	MR_init_label6(fn__ll_backend__code_util__make_local_entry_label_4_0,2,3,5,12,11,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__make_local_entry_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,
		fn__ll_backend__code_util__make_local_entry_label_4_0_i2);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_from_rtti_1_0,
		fn__ll_backend__code_util__make_local_entry_label_4_0_i3);
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 14);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_tempr3, 7);
	MR_r3 = MR_ctfield(0, MR_tempr3, 6);
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r7 = MR_ctfield(0, MR_tempr2, 0);
	MR_r6 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i11);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r7)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i10);
	}
	if ((MR_r2 != MR_r4)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__make_local_entry_label_4_0_i10);
	}
	MR_sv(1) = MR_r1;
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ll_backend__code_util__make_local_entry_label_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module3)
	MR_init_entry1(fn__ll_backend__code_util__make_internal_label_4_0);
	MR_init_label1(fn__ll_backend__code_util__make_internal_label_4_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__get_proc_label_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__code_util_module4)
	MR_init_entry1(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0);
	MR_init_label2(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__ll_backend__llds__get_proc_label_1_0);
MR_def_label(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0_i5);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__ll_backend__code_util__extract_proc_label_from_code_addr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("code_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("extract_label_from_code_addr failed", 35);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module5)
	MR_init_entry1(ll_backend__code_util__arg_loc_to_register_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__arg_loc_to_register_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ll_backend__code_util_module6)
	MR_init_entry1(ll_backend__code_util__max_mentioned_reg_2_3_0);
	MR_init_label4(ll_backend__code_util__max_mentioned_reg_2_3_0,23,3,7,4)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i4);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i4);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__code_util__max_mentioned_reg_2_3_0_i7);
MR_def_label(ll_backend__code_util__max_mentioned_reg_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__max_mentioned_reg_2_3_0_i23);
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


MR_BEGIN_MODULE(ll_backend__code_util_module7)
	MR_init_entry1(ll_backend__code_util__max_mentioned_reg_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ll_backend__code_util_module8)
	MR_init_entry1(ll_backend__code_util__max_mentioned_abs_reg_2_3_0);
	MR_init_label4(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,18,3,6,4)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i4);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(int__max_3_0,
		ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i6);
MR_def_label(ll_backend__code_util__max_mentioned_abs_reg_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__code_util__max_mentioned_abs_reg_2_3_0_i18);
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


MR_BEGIN_MODULE(ll_backend__code_util_module9)
	MR_init_entry1(ll_backend__code_util__max_mentioned_abs_reg_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ll_backend__code_util_module10)
	MR_init_entry1(ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__goal_may_alloc_temp_frame_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);

MR_BEGIN_MODULE(ll_backend__code_util_module11)
	MR_init_entry1(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0);
	MR_init_label8(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,56,7,9,11,13,15,17,18)
	MR_init_label8(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,20,24,26,25,28,42,27,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i15) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i32));
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__cases_may_alloc_temp_frame_2_0);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 1), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i56);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i18);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i20);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i56);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i42);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i56);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_ctfield(3, MR_r1, 2), 0);
	}
	MR_np_localcall_lab(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i26);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_localcall_lab(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i28);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i27);
	}
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0_i56);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module12)
	MR_init_entry1(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0);
	MR_init_label2(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	MR_np_call_localret_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0,
		ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0_i3);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__code_util__goal_may_alloc_temp_frame_2_shorthand_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__code_util__goal_may_alloc_temp_frame_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module13)
	MR_init_entry1(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0);
	MR_init_label4(ll_backend__code_util__goal_list_may_alloc_temp_frame_2_0,15,3,5,4)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
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
	MR_init_label4(ll_backend__code_util__cases_may_alloc_temp_frame_2_0,15,3,5,4)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1), 0);
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
	MR_init_label8(ll_backend__code_util__neg_rval_2_0,16,17,18,19,20,21,22,23)
	MR_init_label8(ll_backend__code_util__neg_rval_2_0,24,25,26,27,28,29,30,31)
	MR_init_label6(ll_backend__code_util__neg_rval_2_0,32,33,10,6,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__neg_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i6);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i10);
	}
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr2),
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i18) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i19) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i22) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i23) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i25) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i26) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i27) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i29) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2) MR_AND
		MR_LABEL_AP(ll_backend__code_util__neg_rval_2_0_i2));
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 15);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 20);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 19);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 18);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 17);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 21);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 31);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 30);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 35);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 34);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 33);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 32);
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_tempr1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,8)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i8);
	}
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__code_util__neg_rval_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_proceed();
	}
MR_def_label(ll_backend__code_util__neg_rval_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module16)
	MR_init_entry1(ll_backend__code_util__negate_the_test_2_0);
	MR_init_label4(ll_backend__code_util__negate_the_test_2_0,6,4,7,3)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,9)) {
		MR_GOTO_LAB(ll_backend__code_util__negate_the_test_2_0_i4);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__code_util__negate_the_test_2_0_i6);
MR_def_label(ll_backend__code_util__negate_the_test_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__code_util__negate_the_test_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ll_backend__code_util__negate_the_test_2_0,
		ll_backend__code_util__negate_the_test_2_0_i7);
MR_def_label(ll_backend__code_util__negate_the_test_2_0,7)
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
	MR_r1 = (MR_Word) MR_string_const("code_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("negate_the_test on empty list", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__code_util_module17)
	MR_init_entry1(ll_backend__code_util__lvals_in_rval_2_0);
	MR_init_label8(ll_backend__code_util__lvals_in_rval_2_0,4,5,7,9,13,14,15,11)
	MR_init_label1(ll_backend__code_util__lvals_in_rval_2_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__lvals_in_rval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i9));
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lval_2_0,
		ll_backend__code_util__lvals_in_rval_2_0_i5);
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i9));
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_rval_2_0_i10);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_rval_2_0_i11);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_rval_2_0_i13);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__code_util__lvals_in_mem_ref_2_0);
	}
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__code_util__lvals_in_rval_2_0_i14);
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__code_util__lvals_in_rval_2_0_i15);
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_rval_2_0_i9));
MR_def_label(ll_backend__code_util__lvals_in_rval_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module18)
	MR_init_entry1(ll_backend__code_util__lvals_in_lval_2_0);
	MR_init_label5(ll_backend__code_util__lvals_in_lval_2_0,44,28,29,31,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__lvals_in_lval_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_lval_2_0_i34);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__code_util__lvals_in_lval_2_0_i34));
MR_def_label(ll_backend__code_util__lvals_in_lval_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__code_util__lvals_in_lval_2_0_i28);
MR_def_label(ll_backend__code_util__lvals_in_lval_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__code_util__lvals_in_lval_2_0_i29);
MR_def_label(ll_backend__code_util__lvals_in_lval_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(ll_backend__code_util__lvals_in_lval_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ll_backend__code_util__lvals_in_rval_2_0);
MR_def_label(ll_backend__code_util__lvals_in_lval_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module19)
	MR_init_entry1(ll_backend__code_util__lvals_in_mem_ref_2_0);
	MR_init_label4(ll_backend__code_util__lvals_in_mem_ref_2_0,14,22,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__code_util__lvals_in_mem_ref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_mem_ref_2_0_i14);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_mem_ref_2_0_i22);
	}
	}
MR_def_label(ll_backend__code_util__lvals_in_mem_ref_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__code_util__lvals_in_rval_2_0);
MR_def_label(ll_backend__code_util__lvals_in_mem_ref_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__code_util__lvals_in_mem_ref_2_0_i7);
MR_def_label(ll_backend__code_util__lvals_in_mem_ref_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__code_util__lvals_in_mem_ref_2_0_i8);
MR_def_label(ll_backend__code_util__lvals_in_mem_ref_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module20)
	MR_init_entry1(ll_backend__code_util__lvals_in_lvals_2_0);
	MR_init_label3(ll_backend__code_util__lvals_in_lvals_2_0,14,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__code_util__lvals_in_lvals_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__code_util__lvals_in_lvals_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__code_util__lvals_in_lvals_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lval_2_0,
		ll_backend__code_util__lvals_in_lvals_2_0_i4);
MR_def_label(ll_backend__code_util__lvals_in_lvals_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__code_util__lvals_in_lvals_2_0,
		ll_backend__code_util__lvals_in_lvals_2_0_i5);
MR_def_label(ll_backend__code_util__lvals_in_lvals_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__code_util_module21)
	MR_init_entry1(ll_backend__code_util__build_input_arg_list_2_2_0);
	MR_init_label4(ll_backend__code_util__build_input_arg_list_2_2_0,7,8,4,2)
MR_BEGIN_CODE

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
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ll_backend__code_util__build_input_arg_list_2_2_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(ll_backend__code_util__build_input_arg_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(3);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ll_backend__code_util__build_input_arg_list_2_2_0_i8);
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
	MR_init_label3(ll_backend__code_util__build_input_arg_list_2_0,2,3,4)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		ll_backend__code_util__build_input_arg_list_2_0_i3);
MR_def_label(ll_backend__code_util__build_input_arg_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		ll_backend__code_util__build_input_arg_list_2_0_i4);
MR_def_label(ll_backend__code_util__build_input_arg_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__code_util__build_input_arg_list_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__code_util_module23)
	MR_init_entry1(__Unify___ll_backend__code_util__immed_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ll_backend__code_util_module24)
	MR_init_entry1(__Compare___ll_backend__code_util__immed_0_0);
MR_BEGIN_CODE

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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
