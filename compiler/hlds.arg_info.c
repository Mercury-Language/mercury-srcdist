/*
** Automatically generated from `arg_info.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__arg_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.arg_info.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.arg_info.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "hlds.arg_info.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "hlds.arg_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.arg_info.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.arg_info.c"
#line 49 "hlds.arg_info.c"
#include "hlds.arg_info.mh"

#line 52 "hlds.arg_info.c"
#line 53 "hlds.arg_info.c"
#ifndef HLDS__ARG_INFO_DECL_GUARD
#define HLDS__ARG_INFO_DECL_GUARD

#line 57 "hlds.arg_info.c"
#line 58 "hlds.arg_info.c"

#endif
#line 61 "hlds.arg_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
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
MR_decl_label2(hlds__arg_info__compute_in_and_out_vars_6_0, 3,2)
MR_decl_label6(hlds__arg_info__compute_in_and_out_vars_2_6_0, 63,8,10,12,64,1)
MR_decl_label2(hlds__arg_info__generate_arg_info_2_0, 2,3)
MR_decl_label6(hlds__arg_info__generate_pred_arg_info_3_0, 13,3,4,5,6,7)
MR_decl_label4(hlds__arg_info__generate_proc_arg_info_4_0, 2,3,5,6)
MR_decl_label10(hlds__arg_info__generate_proc_list_arg_info_4_0, 19,3,4,5,6,7,8,9,10,11)
MR_decl_label2(hlds__arg_info__generate_proc_list_arg_info_4_0, 12,13)
MR_decl_label1(hlds__arg_info__make_arg_infos_5_0, 3)
MR_decl_label5(hlds__arg_info__make_arg_infos_list_6_0, 3,9,11,14,8)
MR_decl_label2(hlds__arg_info__partition_args_3_0, 2,5)
MR_decl_label6(hlds__arg_info__partition_args_4_0, 10,11,5,7,4,2)
MR_decl_label5(hlds__arg_info__partition_generic_call_args_7_0, 4,5,6,7,2)
MR_decl_label9(hlds__arg_info__partition_proc_args_5_0, 2,3,4,6,8,9,10,11,7)
MR_decl_label9(hlds__arg_info__partition_proc_args_2_10_0, 64,3,8,12,10,15,13,17,1)
MR_decl_label7(hlds__arg_info__partition_proc_call_args_7_0, 2,4,6,7,8,9,5)
MR_decl_label2(hlds__arg_info__unify_arg_info_2_0, 3,4)
MR_decl_static(hlds__arg_info__make_arg_infos_list_6_0)
MR_def_extern_entry(hlds__arg_info__make_arg_infos_5_0)
MR_def_extern_entry(hlds__arg_info__generate_proc_arg_info_4_0)
MR_decl_static(hlds__arg_info__generate_proc_list_arg_info_4_0)
MR_decl_static(hlds__arg_info__generate_pred_arg_info_3_0)
MR_def_extern_entry(hlds__arg_info__generate_arg_info_2_0)
MR_decl_static(hlds__arg_info__compute_in_and_out_vars_2_6_0)
MR_def_extern_entry(hlds__arg_info__compute_in_and_out_vars_6_0)
MR_def_extern_entry(hlds__arg_info__unify_arg_info_2_0)
MR_def_extern_entry(hlds__arg_info__partition_args_4_0)
MR_def_extern_entry(hlds__arg_info__partition_args_3_0)
MR_decl_static(hlds__arg_info__partition_proc_args_2_10_0)
MR_def_extern_entry(hlds__arg_info__partition_proc_args_5_0)
MR_def_extern_entry(hlds__arg_info__partition_proc_call_args_7_0)
MR_def_extern_entry(hlds__arg_info__partition_generic_call_args_7_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
2,
0
}
},
{
{
1,
0
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_TAG_COMMON(0,0,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(1,1,0)
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
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,1,2),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
};



MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module0)
	MR_init_entry1(hlds__arg_info__make_arg_infos_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__make_arg_infos_list_6_0);
	MR_init_label5(hlds__arg_info__make_arg_infos_list_6_0,3,9,11,14,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_infos_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__make_arg_infos_list_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_list_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_list_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__arg_info__make_arg_infos_list_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_list_6_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__make_arg_infos_list_6_0_i9);
MR_def_label(hlds__arg_info__make_arg_infos_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_list_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r5 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) + (MR_Integer) 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_localcall_lab(hlds__arg_info__make_arg_infos_list_6_0,
		hlds__arg_info__make_arg_infos_list_6_0_i14);
MR_def_label(hlds__arg_info__make_arg_infos_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r5 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r1 = MR_sv(5);
	}
	MR_np_localcall_lab(hlds__arg_info__make_arg_infos_list_6_0,
		hlds__arg_info__make_arg_infos_list_6_0_i14);
MR_def_label(hlds__arg_info__make_arg_infos_list_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__arg_info__make_arg_infos_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.make_arg_infos_list\'/6", 47);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module1)
	MR_init_entry1(hlds__arg_info__make_arg_infos_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__make_arg_infos_5_0);
	MR_init_label1(hlds__arg_info__make_arg_infos_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_infos'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__make_arg_infos_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__arg_info__make_arg_infos_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Integer) 2;
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(hlds__arg_info__make_arg_infos_list_6_0);
	}
MR_def_label(hlds__arg_info__make_arg_infos_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(hlds__arg_info__make_arg_infos_list_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_arg_info_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module2)
	MR_init_entry1(hlds__arg_info__generate_proc_arg_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_proc_arg_info_4_0);
	MR_init_label4(hlds__arg_info__generate_proc_arg_info_4_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_arg_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__generate_proc_arg_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__arg_info__generate_proc_arg_info_4_0_i2);
MR_def_label(hlds__arg_info__generate_proc_arg_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		hlds__arg_info__generate_proc_arg_info_4_0_i3);
MR_def_label(hlds__arg_info__generate_proc_arg_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__arg_info__generate_proc_arg_info_4_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = (MR_Integer) 2;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_list_6_0,
		hlds__arg_info__generate_proc_arg_info_4_0_i6);
MR_def_label(hlds__arg_info__generate_proc_arg_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_list_6_0,
		hlds__arg_info__generate_proc_arg_info_4_0_i6);
MR_def_label(hlds__arg_info__generate_proc_arg_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_arg_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module3)
	MR_init_entry1(hlds__arg_info__generate_proc_list_arg_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_proc_list_arg_info_4_0);
	MR_init_label10(hlds__arg_info__generate_proc_list_arg_info_4_0,19,3,4,5,6,7,8,9,10,11)
	MR_init_label2(hlds__arg_info__generate_proc_list_arg_info_4_0,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_proc_list_arg_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__generate_proc_list_arg_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__generate_proc_list_arg_info_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(13);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i4);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i5);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i6);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i7);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i8);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__generate_proc_arg_info_4_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i9);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i10);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i11);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i12);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		hlds__arg_info__generate_proc_list_arg_info_4_0_i13);
MR_def_label(hlds__arg_info__generate_proc_list_arg_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(hlds__arg_info__generate_proc_list_arg_info_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);

MR_BEGIN_MODULE(hlds__arg_info_module4)
	MR_init_entry1(hlds__arg_info__generate_pred_arg_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_pred_arg_info_3_0);
	MR_init_label6(hlds__arg_info__generate_pred_arg_info_3_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_pred_arg_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__generate_pred_arg_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__generate_pred_arg_info_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i4);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i5);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i6);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__arg_info__generate_proc_list_arg_info_4_0,
		hlds__arg_info__generate_pred_arg_info_3_0_i7);
MR_def_label(hlds__arg_info__generate_pred_arg_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__arg_info__generate_pred_arg_info_3_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(hlds__arg_info_module5)
	MR_init_entry1(hlds__arg_info__generate_arg_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__generate_arg_info_2_0);
	MR_init_label2(hlds__arg_info__generate_arg_info_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_arg_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__generate_arg_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		hlds__arg_info__generate_arg_info_2_0_i2);
MR_def_label(hlds__arg_info__generate_arg_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__arg_info__generate_arg_info_2_0_i3);
MR_def_label(hlds__arg_info__generate_arg_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__arg_info__generate_pred_arg_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module6)
	MR_init_entry1(hlds__arg_info__compute_in_and_out_vars_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__compute_in_and_out_vars_2_6_0);
	MR_init_label6(hlds__arg_info__compute_in_and_out_vars_2_6_0,63,8,10,12,64,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_in_and_out_vars_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__compute_in_and_out_vars_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i63);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i64);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i64);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(hlds__arg_info__compute_in_and_out_vars_2_6_0,
		hlds__arg_info__compute_in_and_out_vars_2_6_0_i8);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__compute_in_and_out_vars_2_6_0_i10);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_2_6_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__compute_in_and_out_vars_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module7)
	MR_init_entry1(hlds__arg_info__compute_in_and_out_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__compute_in_and_out_vars_6_0);
	MR_init_label2(hlds__arg_info__compute_in_and_out_vars_6_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_in_and_out_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__compute_in_and_out_vars_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__arg_info__compute_in_and_out_vars_2_6_0,
		hlds__arg_info__compute_in_and_out_vars_6_0_i3);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__compute_in_and_out_vars_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__arg_info__compute_in_and_out_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.compute_in_and_out_vars\'/6", 51);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module8)
	MR_init_entry1(hlds__arg_info__unify_arg_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__unify_arg_info_2_0);
	MR_init_label2(hlds__arg_info__unify_arg_info_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_arg_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__unify_arg_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__unify_arg_info_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_proceed();
MR_def_label(hlds__arg_info__unify_arg_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__arg_info__unify_arg_info_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_proceed();
MR_def_label(hlds__arg_info__unify_arg_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.unify_arg_info\'/2", 42);
	MR_r3 = (MR_Word) MR_string_const("nondet unify!", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module9)
	MR_init_entry1(hlds__arg_info__partition_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_args_4_0);
	MR_init_label6(hlds__arg_info__partition_args_4_0,10,11,5,7,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_args_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(hlds__arg_info__partition_args_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(hlds__arg_info__partition_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_sv(1), 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i4);
	}
MR_def_label(hlds__arg_info__partition_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i4);
	}
MR_def_label(hlds__arg_info__partition_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	}
MR_def_label(hlds__arg_info__partition_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(hlds__arg_info__partition_args_4_0_i11);
	}
	MR_proceed();
MR_def_label(hlds__arg_info__partition_args_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__arg_info_module10)
	MR_init_entry1(hlds__arg_info__partition_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_args_3_0);
	MR_init_label2(hlds__arg_info__partition_args_3_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_args_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__arg_info__partition_args_4_0,
		hlds__arg_info__partition_args_3_0_i2);
MR_def_label(hlds__arg_info__partition_args_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__arg_info__partition_args_3_0_i5);
MR_def_label(hlds__arg_info__partition_args_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__arg_info_module11)
	MR_init_entry1(hlds__arg_info__partition_proc_args_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_proc_args_2_10_0);
	MR_init_label9(hlds__arg_info__partition_proc_args_2_10_0,64,3,8,12,10,15,13,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_proc_args_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__arg_info__partition_proc_args_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__arg_info__partition_proc_args_2_10_0_i8);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__arg_info__partition_proc_args_2_10_0_i12);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i64);
	}
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__arg_info__partition_proc_args_2_10_0_i15);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i64);
	}
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__arg_info__partition_proc_args_2_10_0_i17);
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__arg_info__partition_proc_args_2_10_0_i64);
	}
MR_def_label(hlds__arg_info__partition_proc_args_2_10_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(hlds__arg_info_module12)
	MR_init_entry1(hlds__arg_info__partition_proc_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_proc_args_5_0);
	MR_init_label9(hlds__arg_info__partition_proc_args_5_0,2,3,4,6,8,9,10,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_proc_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_proc_args_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__arg_info__partition_proc_args_5_0_i2);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__arg_info__partition_proc_args_5_0_i3);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__arg_info__partition_proc_args_5_0_i4);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		hlds__arg_info__partition_proc_args_5_0_i6);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_args_5_0_i8);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_args_5_0_i9);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_args_5_0_i10);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_2_10_0,
		hlds__arg_info__partition_proc_args_5_0_i11);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_args_5_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__partition_proc_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.do_partition_proc_args\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module13)
	MR_init_entry1(hlds__arg_info__partition_proc_call_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_proc_call_args_7_0);
	MR_init_label7(hlds__arg_info__partition_proc_call_args_7_0,2,4,6,7,8,9,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_proc_call_args'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_proc_call_args_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__arg_info__partition_proc_call_args_7_0_i2);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		hlds__arg_info__partition_proc_call_args_7_0_i4);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_call_args_7_0_i6);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_call_args_7_0_i7);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_proc_call_args_7_0_i8);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_2_10_0,
		hlds__arg_info__partition_proc_call_args_7_0_i9);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_proc_call_args_7_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__partition_proc_call_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.do_partition_proc_args\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__arg_info_module14)
	MR_init_entry1(hlds__arg_info__partition_generic_call_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__arg_info__partition_generic_call_args_7_0);
	MR_init_label5(hlds__arg_info__partition_generic_call_args_7_0,4,5,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_generic_call_args'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__arg_info__partition_generic_call_args_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_generic_call_args_7_0_i4);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_generic_call_args_7_0_i5);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__arg_info__partition_generic_call_args_7_0_i6);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__arg_info__partition_proc_args_2_10_0,
		hlds__arg_info__partition_generic_call_args_7_0_i7);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__arg_info__partition_generic_call_args_7_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__arg_info__partition_generic_call_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.arg_info", 13);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.arg_info.do_partition_proc_args\'/7", 50);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__arg_info_maybe_bunch_0(void)
{
	hlds__arg_info_module0();
	hlds__arg_info_module1();
	hlds__arg_info_module2();
	hlds__arg_info_module3();
	hlds__arg_info_module4();
	hlds__arg_info_module5();
	hlds__arg_info_module6();
	hlds__arg_info_module7();
	hlds__arg_info_module8();
	hlds__arg_info_module9();
	hlds__arg_info_module10();
	hlds__arg_info_module11();
	hlds__arg_info_module12();
	hlds__arg_info_module13();
	hlds__arg_info_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__arg_info__init(void);
void mercury__hlds__arg_info__init_type_tables(void);
void mercury__hlds__arg_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__arg_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__arg_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__arg_info__init_threadscope_string_table(void);
#endif

void mercury__hlds__arg_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__arg_info_maybe_bunch_0();
	mercury__hlds__arg_info__init_debugger();
}

void mercury__hlds__arg_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__arg_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__arg_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__arg_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__arg_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__arg_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
