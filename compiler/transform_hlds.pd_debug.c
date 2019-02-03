/*
** Automatically generated from `pd_debug.m'
** by the Mercury compiler,
** version 11.07.2-beta-2012-06-26, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__pd_debug__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.pd_debug.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.pd_debug.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.pd_debug.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.pd_debug.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.pd_debug.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.pd_debug.c"
#line 49 "transform_hlds.pd_debug.c"
#include "transform_hlds.pd_debug.mh"

#line 52 "transform_hlds.pd_debug.c"
#line 53 "transform_hlds.pd_debug.c"
#ifndef TRANSFORM_HLDS__PD_DEBUG_DECL_GUARD
#define TRANSFORM_HLDS__PD_DEBUG_DECL_GUARD

#line 57 "transform_hlds.pd_debug.c"
#line 58 "transform_hlds.pd_debug.c"

#endif
#line 61 "transform_hlds.pd_debug.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];
MR_decl_label2(transform_hlds__pd_debug__pd_debug_do_io_4_0, 11,13)
MR_decl_label2(transform_hlds__pd_debug__pd_debug_message_5_0, 11,13)
MR_decl_label4(transform_hlds__pd_debug__pd_debug_message_context_6_0, 4,5,13,15)
MR_decl_label5(transform_hlds__pd_debug__pd_debug_output_goal_5_0, 2,3,4,7,5)
MR_decl_label10(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0, 12,13,14)
MR_decl_label10(transform_hlds__pd_debug__pd_debug_output_version_6_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(transform_hlds__pd_debug__pd_debug_output_version_6_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label10(transform_hlds__pd_debug__pd_debug_output_version_6_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label7(transform_hlds__pd_debug__pd_debug_output_version_6_0, 32,34,35,38,39,40,36)
MR_decl_label6(transform_hlds__pd_debug__pd_debug_register_version_5_0, 2,3,4,7,8,5)
MR_decl_label5(transform_hlds__pd_debug__pd_debug_search_version_result_4_0, 2,3,4,7,5)
MR_decl_label3(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0, 3,24,8)
MR_decl_label2(transform_hlds__pd_debug__pd_debug_write_4_0, 11,13)
MR_decl_label8(transform_hlds__pd_debug__pd_debug_write_instmap_3_0, 2,3,4,5,6,7,10,8)
MR_decl_label5(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0, 2,3,4,8,5)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_do_io_4_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_output_goal_5_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_search_version_result_4_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_register_version_5_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_write_instmap_3_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_message_5_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_message_context_6_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_write_4_0)
MR_def_extern_entry(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0)
MR_decl_static(transform_hlds__pd_debug__pd_debug_output_version_6_0)
MR_decl_static(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0)
MR_decl_static(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0)

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_debug__pd_debug_output_version_6_0_1;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__pd_debug__pd_debug_output_version_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_debug__pd_debug_output_version_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_util",
"hlds.hlds_out.hlds_out_util",
"write_pred_proc_id",
4,
0
},
"transform_hlds.pd_debug",
"pd_debug.m",
170,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_util",
"hlds.hlds_out.hlds_out_util",
"write_pred_proc_id",
4,
0
},
"transform_hlds.pd_debug",
"pd_debug.m",
207,
"7"
};


MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module0)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_do_io_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_do_io_4_0);
	MR_init_label2(transform_hlds__pd_debug__pd_debug_do_io_4_0,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_do_io'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_do_io_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_do_io_4_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__pd_debug__pd_debug_do_io_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__transform_hlds__pd_debug__pd_debug_do_io_4_0_i11);
MR_def_label(transform_hlds__pd_debug__pd_debug_do_io_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_do_io_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_module_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module1)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_output_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_output_goal_5_0);
	MR_init_label5(transform_hlds__pd_debug__pd_debug_output_goal_5_0,2,3,4,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_output_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_output_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_5_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_5_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__pd_debug__pd_debug_output_goal_5_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_output_goal_5_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,
		transform_hlds__pd_debug__pd_debug_output_goal_5_0_i7);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_debug_module2)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_search_version_result_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_search_version_result_4_0);
	MR_init_label5(transform_hlds__pd_debug__pd_debug_search_version_result_4_0,2,3,4,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_search_version_result'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_search_version_result_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_debug__pd_debug_search_version_result_4_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_search_version_result_4_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__pd_debug__pd_debug_search_version_result_4_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_search_version_result_4_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0,
		transform_hlds__pd_debug__pd_debug_search_version_result_4_0_i7);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module3)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_register_version_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_register_version_5_0);
	MR_init_label6(transform_hlds__pd_debug__pd_debug_register_version_5_0,2,3,4,7,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_register_version'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_register_version_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_debug__pd_debug_register_version_5_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_register_version_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_register_version_5_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_register_version_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__pd_debug__pd_debug_register_version_5_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_register_version_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_register_version_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("Registering version:\n", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_register_version_5_0_i7);
MR_def_label(transform_hlds__pd_debug__pd_debug_register_version_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__pd_debug__pd_debug_output_version_6_0,
		transform_hlds__pd_debug__pd_debug_register_version_5_0_i8);
MR_def_label(transform_hlds__pd_debug__pd_debug_register_version_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_register_version_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__pd_info__pd_info_get_instmap_2_0);
MR_decl_entry(transform_hlds__pd_info__pd_info_get_proc_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_mode__write_instmap_6_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module4)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_write_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_write_instmap_3_0);
	MR_init_label8(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,2,3,4,5,6,7,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_write_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_write_instmap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i5);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i6);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i7);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,
		transform_hlds__pd_debug__pd_debug_write_instmap_3_0_i10);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_instmap_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module5)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_message_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_message_5_0);
	MR_init_label2(transform_hlds__pd_debug__pd_debug_message_5_0,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_message'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_message_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_message_5_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(io__format_4_0,
		transform_hlds__pd_debug__pd_debug_message_5_0_i11);
MR_def_label(transform_hlds__pd_debug__pd_debug_message_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_message_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__write_context_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module6)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_message_context_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_message_context_6_0);
	MR_init_label4(transform_hlds__pd_debug__pd_debug_message_context_6_0,4,5,13,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_message_context'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_message_context_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_message_context_6_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__write_context_3_0,
		transform_hlds__pd_debug__pd_debug_message_context_6_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_message_context_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		transform_hlds__pd_debug__pd_debug_message_context_6_0_i5);
MR_def_label(transform_hlds__pd_debug__pd_debug_message_context_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__format_4_0,
		transform_hlds__pd_debug__pd_debug_message_context_6_0_i13);
MR_def_label(transform_hlds__pd_debug__pd_debug_message_context_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_message_context_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module7)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_write_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_write_4_0);
	MR_init_label2(transform_hlds__pd_debug__pd_debug_write_4_0,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_write'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_write_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_write_4_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(io__write_3_0,
		transform_hlds__pd_debug__pd_debug_write_4_0_i11);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module8)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0);
	MR_init_label5(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0,2,3,4,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_write_pred_proc_id_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 70;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0_i8);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__instmap__instmap_restrict_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module9)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_output_version_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_output_version_6_0);
	MR_init_label10(transform_hlds__pd_debug__pd_debug_output_version_6_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(transform_hlds__pd_debug__pd_debug_output_version_6_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label10(transform_hlds__pd_debug__pd_debug_output_version_6_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label7(transform_hlds__pd_debug__pd_debug_output_version_6_0,32,34,35,38,39,40,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_output_version'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_debug__pd_debug_output_version_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(0, MR_sv(3), 1);
	MR_sv(10) = MR_tfield(0, MR_r2, 0);
	MR_sv(11) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": (PredProcId :", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i5);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i6);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i7);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i8);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(io__write_int_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i9);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i10);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i11);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" initial cost: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i12);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i13);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i14);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" cost delta: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i15);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i16);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i17);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i18);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i19);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i20);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_restrict_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i21);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" args: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i22);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i23);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i24);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i25);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i26);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i27);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i28);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i29);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i30);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Parents: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i31);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i32);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i34);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i35);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_output_version_6_0_i36);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i38);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Unfolded goal\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i39);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0,
		transform_hlds__pd_debug__pd_debug_output_version_6_0_i40);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_version_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__pd_debug_module10)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0);
	MR_init_label3(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0,3,24,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_search_version_result_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("Specialised version not found.\n", 31);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("Exact match found.\n", 19);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("More general version.\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0_i8);
MR_def_label(transform_hlds__pd_debug__pd_debug_search_version_result_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__pd_debug__pd_debug_output_version_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_vars_2_0);

MR_BEGIN_MODULE(transform_hlds__pd_debug_module11)
	MR_init_entry1(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__pd_debug__pd_debug_output_goal_2_5_0);
	MR_init_label10(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pd_debug_output_goal_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_proc_info_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i2);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i3);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_instmap_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i4);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_info__pd_info_get_module_info_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i5);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i6);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i7);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_restrict_3_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i8);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i9);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i10);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i11);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i12);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_9_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i13);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		transform_hlds__pd_debug__pd_debug_output_goal_2_5_0_i14);
MR_def_label(transform_hlds__pd_debug__pd_debug_output_goal_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__flush_output_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__pd_debug_maybe_bunch_0(void)
{
	transform_hlds__pd_debug_module0();
	transform_hlds__pd_debug_module1();
	transform_hlds__pd_debug_module2();
	transform_hlds__pd_debug_module3();
	transform_hlds__pd_debug_module4();
	transform_hlds__pd_debug_module5();
	transform_hlds__pd_debug_module6();
	transform_hlds__pd_debug_module7();
	transform_hlds__pd_debug_module8();
	transform_hlds__pd_debug_module9();
	transform_hlds__pd_debug_module10();
	transform_hlds__pd_debug_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__pd_debug__init(void);
void mercury__transform_hlds__pd_debug__init_type_tables(void);
void mercury__transform_hlds__pd_debug__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__pd_debug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__pd_debug__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__pd_debug__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__pd_debug__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__pd_debug_maybe_bunch_0();
	mercury__transform_hlds__pd_debug__init_debugger();
}

void mercury__transform_hlds__pd_debug__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__pd_debug__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__pd_debug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__pd_debug);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__pd_debug__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__pd_debug__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
