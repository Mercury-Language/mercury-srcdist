/*
** Automatically generated from `ssdebug.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ssdebug__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.ssdebug.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.ssdebug.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.ssdebug.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.ssdebug.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.ssdebug.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "transform_hlds.ssdebug.c"
#line 48 "transform_hlds.ssdebug.c"
#include "transform_hlds.ssdebug.mh"

#line 51 "transform_hlds.ssdebug.c"
#line 52 "transform_hlds.ssdebug.c"
#ifndef TRANSFORM_HLDS__SSDEBUG_DECL_GUARD
#define TRANSFORM_HLDS__SSDEBUG_DECL_GUARD

#line 56 "transform_hlds.ssdebug.c"
#line 57 "transform_hlds.ssdebug.c"

#endif
#line 60 "transform_hlds.ssdebug.c"

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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label6(transform_hlds__ssdebug__check_arguments_modes_2_0, 6,12,14,9,8,5)
MR_decl_label8(transform_hlds__ssdebug__commit_goal_changes_10_0, 2,3,4,5,6,7,9,10)
MR_decl_label10(transform_hlds__ssdebug__make_arg_list_18_0, 4,5,7,8,11,14,3,16,19,17)
MR_decl_label9(transform_hlds__ssdebug__make_arg_list_18_0, 21,22,23,24,26,27,35,37,38)
MR_decl_label3(transform_hlds__ssdebug__make_fail_call_2_0, 2,3,4)
MR_decl_label4(transform_hlds__ssdebug__make_handle_event_9_0, 2,3,4,5)
MR_decl_label10(transform_hlds__ssdebug__make_proc_id_construction_7_0, 2,3,4,6,8,9,12,14,16,19)
MR_decl_label4(transform_hlds__ssdebug__make_recursive_call_6_0, 2,3,5,7)
MR_decl_label4(transform_hlds__ssdebug__make_retry_var_6_0, 2,5,6,8)
MR_decl_label1(transform_hlds__ssdebug__make_switch_goal_5_0, 2)
MR_decl_label10(transform_hlds__ssdebug__make_var_value_18_0, 2,5,6,8,10,11,14,16,17,18)
MR_decl_label10(transform_hlds__ssdebug__make_var_value_18_0, 19,21,22,23,24,25,28,31,29,41)
MR_decl_label6(transform_hlds__ssdebug__make_var_value_18_0, 46,51,52,12,56,59)
MR_decl_label6(transform_hlds__ssdebug__process_proc_8_0, 2,4,6,8,10,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_det_8_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_det_8_0, 13,16,17,18,19,20,21,22,23,27)
MR_decl_label10(transform_hlds__ssdebug__process_proc_det_8_0, 28,29,30,31,32,33,34,38,39,40)
MR_decl_label4(transform_hlds__ssdebug__process_proc_det_8_0, 41,42,43,44)
MR_decl_label10(transform_hlds__ssdebug__process_proc_erroneous_8_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_erroneous_8_0, 13,16,17,18,19,20,22,23,24,25)
MR_decl_label1(transform_hlds__ssdebug__process_proc_erroneous_8_0, 26)
MR_decl_label10(transform_hlds__ssdebug__process_proc_failure_8_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_failure_8_0, 13,16,17,18,19,23,24,25,26,27)
MR_decl_label10(transform_hlds__ssdebug__process_proc_failure_8_0, 28,29,30,35,38,45,46,47,48,49)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_8_0, 2,3,4,5,6,7,8,9,11,12)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_8_0, 13,16,17,18,19,22,23,24,25,26)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_8_0, 30,31,32,34,35,36,37,38,39,40)
MR_decl_label10(transform_hlds__ssdebug__process_proc_nondet_8_0, 41,42,43,44,45,46,47,55,61,66)
MR_decl_label4(transform_hlds__ssdebug__process_proc_nondet_8_0, 69,75,78,79)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_8_0, 2,3,4,5,6,7,8,11,13,14)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_8_0, 16,17,18,21,22,23,24,25,26,27)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_8_0, 28,32,33,34,35,39,40,41,42,43)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_8_0, 44,45,46,47,48,49,50,51,52,53)
MR_decl_label10(transform_hlds__ssdebug__process_proc_semi_8_0, 56,59,60,61,62,68,69,73,76,77)
MR_decl_label1(transform_hlds__ssdebug__process_proc_semi_8_0, 10)
MR_decl_label1(transform_hlds__ssdebug__wrap_with_purity_scope_4_0, 2)
MR_decl_label3(fn__transform_hlds__ssdebug__list_var_value_type_0_0, 2,5,6)
MR_decl_static(transform_hlds__ssdebug__make_retry_var_6_0)
MR_decl_static(transform_hlds__ssdebug__make_recursive_call_6_0)
MR_decl_static(transform_hlds__ssdebug__make_switch_goal_5_0)
MR_decl_static(transform_hlds__ssdebug__wrap_with_purity_scope_4_0)
MR_decl_static(transform_hlds__ssdebug__commit_goal_changes_10_0)
MR_decl_static(transform_hlds__ssdebug__make_handle_event_9_0)
MR_decl_static(transform_hlds__ssdebug__make_proc_id_construction_7_0)
MR_decl_static(fn__transform_hlds__ssdebug__list_var_value_type_0_0)
MR_decl_static(transform_hlds__ssdebug__make_var_value_18_0)
MR_decl_static(transform_hlds__ssdebug__make_arg_list_18_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_det_8_0)
MR_decl_static(transform_hlds__ssdebug__make_fail_call_2_0)
MR_decl_static(transform_hlds__ssdebug__check_arguments_modes_2_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_semi_8_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_nondet_8_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_failure_8_0)
MR_decl_static(transform_hlds__ssdebug__process_proc_erroneous_8_0)
MR_def_extern_entry(transform_hlds__ssdebug__process_proc_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_string_const("ModuleName", 10)
},
{
MR_string_const("PredName", 8)
},
{
MR_string_const("VarName", 7)
},
{
MR_string_const("VarPos", 6)
},
{
MR_string_const("list", 4)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(0,1,4),
MR_string_const("[|]", 3)
},
};



MR_decl_entry(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(svvarset__new_named_var_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module0)
	MR_init_entry1(transform_hlds__ssdebug__make_retry_var_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_retry_var_6_0);
	MR_init_label4(transform_hlds__ssdebug__make_retry_var_6_0,2,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_retry_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_retry_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i2);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("ssdb_retry", 10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i5);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i6);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_retry_var_6_0_i8);
MR_def_label(transform_hlds__ssdebug__make_retry_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__builtin_state_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module1)
	MR_init_entry1(transform_hlds__ssdebug__make_recursive_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_recursive_call_6_0);
	MR_init_label4(transform_hlds__ssdebug__make_recursive_call_6_0,2,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_recursive_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_recursive_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i2);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i3);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__builtin_state_4_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i5);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__make_recursive_call_6_0_i7);
MR_def_label(transform_hlds__ssdebug__make_recursive_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module2)
	MR_init_entry1(transform_hlds__ssdebug__make_switch_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_switch_goal_5_0);
	MR_init_label1(transform_hlds__ssdebug__make_switch_goal_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_switch_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_switch_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_switch_goal_5_0_i2);
MR_def_label(transform_hlds__ssdebug__make_switch_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr7 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("ssdb_retry", 10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_string_const("do_retry", 8);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_string_const("do_not_retry", 12);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr6, 1) = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module3)
	MR_init_entry1(transform_hlds__ssdebug__wrap_with_purity_scope_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__wrap_with_purity_scope_4_0);
	MR_init_label1(transform_hlds__ssdebug__wrap_with_purity_scope_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrap_with_purity_scope'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__wrap_with_purity_scope_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__wrap_with_purity_scope_4_0_i2);
MR_def_label(transform_hlds__ssdebug__wrap_with_purity_scope_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_proc_info_4_0);
MR_decl_entry(check_hlds__purity__repuritycheck_proc_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_info_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module4)
	MR_init_entry1(transform_hlds__ssdebug__commit_goal_changes_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__commit_goal_changes_10_0);
	MR_init_label8(transform_hlds__ssdebug__commit_goal_changes_10_0,2,3,4,5,6,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'commit_goal_changes'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__commit_goal_changes_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r7;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i2);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i3);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i4);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i5);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i6);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_proc_info_4_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i7);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__purity__repuritycheck_proc_4_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i9);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_info_4_0,
		transform_hlds__ssdebug__commit_goal_changes_10_0_i10);
MR_def_label(transform_hlds__ssdebug__commit_goal_changes_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module5)
	MR_init_entry1(transform_hlds__ssdebug__make_handle_event_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_handle_event_9_0);
	MR_init_label4(transform_hlds__ssdebug__make_handle_event_9_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_handle_event'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_handle_event_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i2);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i3);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i4);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		transform_hlds__ssdebug__make_handle_event_9_0_i5);
MR_def_label(transform_hlds__ssdebug__make_handle_event_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(hlds__hlds_goal__make_string_const_construction_alloc_8_0);
MR_decl_entry(hlds__hlds_goal__construct_functor_4_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module6)
	MR_init_entry1(transform_hlds__ssdebug__make_proc_id_construction_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_proc_id_construction_7_0);
	MR_init_label10(transform_hlds__ssdebug__make_proc_id_construction_7_0,2,3,4,6,8,9,12,14,16,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_proc_id_construction'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_proc_id_construction_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i2);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i3);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i4);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i6);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i8);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i9);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("ssdb_proc_id", 12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("ProcId", 6);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i12);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i14);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i16);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_proc_id_construction_7_0_i19);
MR_def_label(transform_hlds__ssdebug__make_proc_id_construction_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_list_module_0_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module7)
	MR_init_entry1(fn__transform_hlds__ssdebug__list_var_value_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ssdebug__list_var_value_type_0_0);
	MR_init_label3(fn__transform_hlds__ssdebug__list_var_value_type_0_0,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_var_value_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ssdebug__list_var_value_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		fn__transform_hlds__ssdebug__list_var_value_type_0_0_i2);
MR_def_label(fn__transform_hlds__ssdebug__list_var_value_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("var_value", 9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		fn__transform_hlds__ssdebug__list_var_value_type_0_0_i5);
MR_def_label(fn__transform_hlds__ssdebug__list_var_value_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		fn__transform_hlds__ssdebug__list_var_value_type_0_0_i6);
MR_def_label(fn__transform_hlds__ssdebug__list_var_value_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("list", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(parse_tree__prog_type__construct_type_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__lookup_name_3_0);
MR_decl_entry(hlds__hlds_goal__make_int_const_construction_alloc_8_0);
MR_decl_entry(hlds__instmap__var_is_ground_in_instmap_3_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(map__is_empty_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module8)
	MR_init_entry1(transform_hlds__ssdebug__make_var_value_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_var_value_18_0);
	MR_init_label10(transform_hlds__ssdebug__make_var_value_18_0,2,5,6,8,10,11,14,16,17,18)
	MR_init_label10(transform_hlds__ssdebug__make_var_value_18_0,19,21,22,23,24,25,28,31,29,41)
	MR_init_label6(transform_hlds__ssdebug__make_var_value_18_0,46,51,52,12,56,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_var_value'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_var_value_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_sv(13) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(17) = MR_r10;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0,
		transform_hlds__ssdebug__make_var_value_18_0_i2);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("var_value", 9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i5);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i6);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__make_string_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_var_value_18_0_i8);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_int_const_construction_alloc_8_0,
		transform_hlds__ssdebug__make_var_value_18_0_i10);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_string_const("VarDesc", 7);
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i11);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__instmap__var_is_ground_in_instmap_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i14);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_var_value_18_0_i12);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i16);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i17);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i18);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		transform_hlds__ssdebug__make_var_value_18_0_i19);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i21);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		transform_hlds__ssdebug__make_var_value_18_0_i22);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		transform_hlds__ssdebug__make_var_value_18_0_i23);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(14) = MR_tempr1;
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__make_var_value_18_0_i24);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__make_var_value_18_0_i25);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("bound_head_var", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 3;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(6);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(20);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i28);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__ssdebug__make_var_value_18_0_i31);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_var_value_18_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i46);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_var_value_18_0_i41);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i46);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__make_var_value_18_0_i51);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(17);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i52);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("unbound_head_var", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr3 = MR_sv(18);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(14);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i56);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_var_value_18_0_i59);
MR_def_label(transform_hlds__ssdebug__make_var_value_18_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(17);
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module9)
	MR_init_entry1(transform_hlds__ssdebug__make_arg_list_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_arg_list_18_0);
	MR_init_label10(transform_hlds__ssdebug__make_arg_list_18_0,4,5,7,8,11,14,3,16,19,17)
	MR_init_label9(transform_hlds__ssdebug__make_arg_list_18_0,21,22,23,24,26,27,35,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_list'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_arg_list_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i3);
	}
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("EmptyVarList", 12);
	MR_r3 = MR_r8;
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i4);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__list_var_value_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i5);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i7);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i8);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("list", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i11);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("[]", 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i14);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_decr_sp_and_return(13);
	}
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i16);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(12) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i19);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i17);
	}
	MR_sv(2) = MR_sv(5);
	MR_sv(3) = MR_sv(6);
	MR_sv(4) = MR_sv(7);
	MR_sv(7) = MR_sv(12);
	MR_r4 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_r3 = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("FullListVar", 11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(transform_hlds__ssdebug__make_arg_list_18_0_i22);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(12);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_var_value_18_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i21);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r8;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r2 = (MR_Word) MR_string_const("FullListVar", 11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(svvarset__new_named_var_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i23);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__transform_hlds__ssdebug__list_var_value_type_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i24);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr3 = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i26);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_list_module_0_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i27);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("list", 4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__construct_functor_4_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i35);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i37);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__make_arg_list_18_0_i38);
MR_def_label(transform_hlds__ssdebug__make_arg_list_18_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__hlds_goal__get_hlds_goal_info_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__goal_util__update_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_instantiated_head_vars_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__goal_util__create_renaming_9_0);
MR_decl_entry(hlds__hlds_goal__rename_some_vars_in_goal_3_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module10)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_det_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_det_8_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_det_8_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_det_8_0,13,16,17,18,19,20,21,22,23,27)
	MR_init_label10(transform_hlds__ssdebug__process_proc_det_8_0,28,29,30,31,32,33,34,38,39,40)
	MR_init_label4(transform_hlds__ssdebug__process_proc_det_8_0,41,42,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_det'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_det_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_7_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i9);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r8;
	MR_sv(13) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_instantiated_head_vars_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__goal_util__create_renaming_9_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i20);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r5;
	MR_sv(12) = MR_tempr2;
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i21);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(17);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_sv(13) = MR_r3;
	MR_sv(16) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("DoRetry", 7);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_exit", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i27);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_r1 = MR_sv(16);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i28);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i29);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i30);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i31);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i32);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i33);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_5_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i34);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i38);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i39);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i40);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i41);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i42);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i43);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ssdebug__wrap_with_purity_scope_4_0,
		transform_hlds__ssdebug__process_proc_det_8_0_i44);
MR_def_label(transform_hlds__ssdebug__process_proc_det_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module11)
	MR_init_entry1(transform_hlds__ssdebug__make_fail_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__make_fail_call_2_0);
	MR_init_label3(transform_hlds__ssdebug__make_fail_call_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_fail_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__make_fail_call_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		transform_hlds__ssdebug__make_fail_call_2_0_i2);
MR_def_label(transform_hlds__ssdebug__make_fail_call_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		transform_hlds__ssdebug__make_fail_call_2_0_i3);
MR_def_label(transform_hlds__ssdebug__make_fail_call_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		transform_hlds__ssdebug__make_fail_call_2_0_i4);
MR_def_label(transform_hlds__ssdebug__make_fail_call_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("false", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 7;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_output_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module12)
	MR_init_entry1(transform_hlds__ssdebug__check_arguments_modes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__check_arguments_modes_2_0);
	MR_init_label6(transform_hlds__ssdebug__check_arguments_modes_2_0,6,12,14,9,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_arguments_modes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__check_arguments_modes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__ssdebug__check_arguments_modes_2_0_i5);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__ssdebug__check_arguments_modes_2_0_i6);
MR_def_label(transform_hlds__ssdebug__check_arguments_modes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		transform_hlds__ssdebug__check_arguments_modes_2_0_i12);
MR_def_label(transform_hlds__ssdebug__check_arguments_modes_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ssdebug__check_arguments_modes_2_0_i9);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_output_2_0,
		transform_hlds__ssdebug__check_arguments_modes_2_0_i14);
MR_def_label(transform_hlds__ssdebug__check_arguments_modes_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__check_arguments_modes_2_0_i8);
	}
MR_def_label(transform_hlds__ssdebug__check_arguments_modes_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(transform_hlds__ssdebug__check_arguments_modes_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(transform_hlds__ssdebug__check_arguments_modes_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_list_determinism_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module13)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_semi_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_semi_8_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_8_0,2,3,4,5,6,7,8,11,13,14)
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_8_0,16,17,18,21,22,23,24,25,26,27)
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_8_0,28,32,33,34,35,39,40,41,42,43)
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_8_0,44,45,46,47,48,49,50,51,52,53)
	MR_init_label10(transform_hlds__ssdebug__process_proc_semi_8_0,56,59,60,61,62,68,69,73,76,77)
	MR_init_label1(transform_hlds__ssdebug__process_proc_semi_8_0,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_semi'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_semi_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(26);
	MR_sv(26) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__check_arguments_modes_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ssdebug__process_proc_semi_8_0_i10);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_7_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i14);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r8;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i21);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_instantiated_head_vars_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__goal_util__create_renaming_9_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r5;
	MR_sv(13) = MR_tempr2;
	MR_sv(17) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_some_vars_in_goal_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i26);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(16);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(17);
	MR_r9 = MR_sv(18);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i27);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_sv(18) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("DoRetryA", 8);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i28);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(14) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_exit", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(18);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i32);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_sv(19) = MR_r3;
	MR_sv(20) = MR_r4;
	MR_r1 = MR_sv(17);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i33);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(19);
	MR_r9 = MR_sv(20);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i34);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(21) = MR_r4;
	MR_sv(16) = MR_r3;
	MR_sv(23) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("DoRetryB", 8);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i35);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(8) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_fail", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(16);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i39);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(22) = MR_tempr1;
	MR_sv(24) = MR_r3;
	MR_sv(25) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_fail_call_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i40);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i41);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i42);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i43);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i44);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i45);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i46);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i47);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i48);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i49);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i50);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i51);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(20);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_5_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i52);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_5_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i53);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i56);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i59);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i60);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i61);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i62);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i68);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i69);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i73);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(17);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i76);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ssdebug__wrap_with_purity_scope_4_0,
		transform_hlds__ssdebug__process_proc_semi_8_0_i77);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(23);
	MR_r5 = MR_sv(21);
	MR_r6 = MR_sv(22);
	MR_r7 = MR_sv(24);
	MR_r8 = MR_sv(25);
	MR_succip_word = MR_sv(26);
	MR_decr_sp(26);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
MR_def_label(transform_hlds__ssdebug__process_proc_semi_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(26);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_add_feature_3_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module14)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_nondet_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_nondet_8_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_8_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_8_0,13,16,17,18,19,22,23,24,25,26)
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_8_0,30,31,32,34,35,36,37,38,39,40)
	MR_init_label10(transform_hlds__ssdebug__process_proc_nondet_8_0,41,42,43,44,45,46,47,55,61,66)
	MR_init_label4(transform_hlds__ssdebug__process_proc_nondet_8_0,69,75,78,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_nondet'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_nondet_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_7_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i9);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r8;
	MR_sv(13) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call_nondet", 24);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(16);
	MR_r9 = MR_sv(17);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(12) = MR_r2;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(13) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("handle_event_exit_nondet", 24);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("handle_event_redo_nondet", 24);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(19) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(19);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(18) = MR_r4;
	MR_sv(15) = MR_r3;
	MR_sv(20) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("DoRetry", 7);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i26);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_fail_nondet", 24);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i30);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(19) = MR_tempr1;
	MR_sv(21) = MR_r3;
	MR_sv(22) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_fail_call_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i31);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i32);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(11) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i34);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i35);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i36);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i37);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i38);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i39);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i40);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i41);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i42);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i43);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_determinism_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i44);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i45);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i46);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_5_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i47);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(17);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i55);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i61);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i66);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(11);
	MR_r1 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i69);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i75);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i78);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ssdebug__wrap_with_purity_scope_4_0,
		transform_hlds__ssdebug__process_proc_nondet_8_0_i79);
MR_def_label(transform_hlds__ssdebug__process_proc_nondet_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(20);
	MR_r5 = MR_sv(18);
	MR_r6 = MR_sv(19);
	MR_r7 = MR_sv(21);
	MR_r8 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module15)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_failure_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_failure_8_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_failure_8_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_failure_8_0,13,16,17,18,19,23,24,25,26,27)
	MR_init_label10(transform_hlds__ssdebug__process_proc_failure_8_0,28,29,30,35,38,45,46,47,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_failure'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_failure_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_7_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i9);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r8;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(13);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(10);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(14) = MR_r4;
	MR_sv(12) = MR_r3;
	MR_sv(16) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("DoRetry", 7);
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_retry_var_6_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(6) = MR_tempr5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_fail", 17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(15) = MR_tempr1;
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_fail_call_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_recursive_call_6_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i26);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i27);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i28);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i29);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_switch_goal_5_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i30);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i35);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_add_feature_3_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i38);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i45);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i46);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i47);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i48);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ssdebug__wrap_with_purity_scope_4_0,
		transform_hlds__ssdebug__process_proc_failure_8_0_i49);
MR_def_label(transform_hlds__ssdebug__process_proc_failure_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ssdebug_module16)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_erroneous_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_erroneous_8_0);
	MR_init_label10(transform_hlds__ssdebug__process_proc_erroneous_8_0,2,3,4,5,6,7,8,9,11,12)
	MR_init_label10(transform_hlds__ssdebug__process_proc_erroneous_8_0,13,16,17,18,19,20,22,23,24,25)
	MR_init_label1(transform_hlds__ssdebug__process_proc_erroneous_8_0,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc_erroneous'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ssdebug__process_proc_erroneous_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__get_hlds_goal_info_1_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i3);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i4);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i5);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i6);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_proc_id_construction_7_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i7);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i8);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i9);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i11);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i12);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_arg_list_18_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i13);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("handle_event_call", 17);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(transform_hlds__ssdebug__make_handle_event_9_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i16);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i17);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i18);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 6;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i19);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i20);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i22);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i23);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i24);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i25);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		transform_hlds__ssdebug__process_proc_erroneous_8_0_i26);
MR_def_label(transform_hlds__ssdebug__process_proc_erroneous_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(12);
	MR_r8 = MR_sv(13);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(transform_hlds__ssdebug__commit_goal_changes_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);

MR_BEGIN_MODULE(transform_hlds__ssdebug_module17)
	MR_init_entry1(transform_hlds__ssdebug__process_proc_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ssdebug__process_proc_8_0);
	MR_init_label6(transform_hlds__ssdebug__process_proc_8_0,2,4,6,8,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ssdebug__process_proc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		transform_hlds__ssdebug__process_proc_8_0_i2);
MR_def_label(transform_hlds__ssdebug__process_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i12) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i8) MR_AND
		MR_LABEL_AP(transform_hlds__ssdebug__process_proc_8_0_i10));
MR_def_label(transform_hlds__ssdebug__process_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_det_8_0);
MR_def_label(transform_hlds__ssdebug__process_proc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_semi_8_0);
MR_def_label(transform_hlds__ssdebug__process_proc_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_erroneous_8_0);
MR_def_label(transform_hlds__ssdebug__process_proc_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_failure_8_0);
MR_def_label(transform_hlds__ssdebug__process_proc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ssdebug__process_proc_nondet_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ssdebug_maybe_bunch_0(void)
{
	transform_hlds__ssdebug_module0();
	transform_hlds__ssdebug_module1();
	transform_hlds__ssdebug_module2();
	transform_hlds__ssdebug_module3();
	transform_hlds__ssdebug_module4();
	transform_hlds__ssdebug_module5();
	transform_hlds__ssdebug_module6();
	transform_hlds__ssdebug_module7();
	transform_hlds__ssdebug_module8();
	transform_hlds__ssdebug_module9();
	transform_hlds__ssdebug_module10();
	transform_hlds__ssdebug_module11();
	transform_hlds__ssdebug_module12();
	transform_hlds__ssdebug_module13();
	transform_hlds__ssdebug_module14();
	transform_hlds__ssdebug_module15();
	transform_hlds__ssdebug_module16();
	transform_hlds__ssdebug_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ssdebug__init(void);
void mercury__transform_hlds__ssdebug__init_type_tables(void);
void mercury__transform_hlds__ssdebug__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ssdebug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ssdebug__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ssdebug__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ssdebug_maybe_bunch_0();
	mercury__transform_hlds__ssdebug__init_debugger();
}

void mercury__transform_hlds__ssdebug__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ssdebug__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ssdebug__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ssdebug);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ssdebug__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
