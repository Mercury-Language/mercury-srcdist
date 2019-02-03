/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.mark_tail_calls.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.mark_tail_calls.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.mark_tail_calls.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.mark_tail_calls.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.mark_tail_calls.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.mark_tail_calls.c"
#line 49 "hlds.mark_tail_calls.c"
#include "hlds.mark_tail_calls.mh"

#line 52 "hlds.mark_tail_calls.c"
#line 53 "hlds.mark_tail_calls.c"
#ifndef HLDS__MARK_TAIL_CALLS_DECL_GUARD
#define HLDS__MARK_TAIL_CALLS_DECL_GUARD

#line 57 "hlds.mark_tail_calls.c"
#line 58 "hlds.mark_tail_calls.c"

#endif
#line 61 "hlds.mark_tail_calls.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0;
MR_decl_label6(hlds__mark_tail_calls__find_maybe_output_args_2_5_0, 62,8,10,12,63,1)
MR_decl_label4(hlds__mark_tail_calls__is_output_arg_rename_4_0, 5,4,8,1)
MR_decl_label10(hlds__mark_tail_calls__mark_tail_calls_6_0, 2,3,4,5,7,8,9,10,13,12)
MR_decl_label4(hlds__mark_tail_calls__mark_tail_calls_6_0, 16,17,18,20)
MR_decl_label3(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0, 18,4,6)
MR_decl_label4(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0, 28,5,7,9)
MR_decl_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0, 3,142,7,8,9,4,13,12,17,18)
MR_decl_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0, 16,24,27,22,23,21,31,30,39,37)
MR_decl_label1(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0, 34)
MR_decl_label3(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0, 17,4,5)
MR_decl_label7(hlds__mark_tail_calls__match_output_args_2_0, 38,3,10,11,21,8,1)
MR_decl_static(hlds__mark_tail_calls__find_maybe_output_args_2_5_0)
MR_decl_static(hlds__mark_tail_calls__is_output_arg_rename_4_0)
MR_decl_static(hlds__mark_tail_calls__match_output_args_2_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0)
MR_decl_static(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0)
MR_def_extern_entry(hlds__mark_tail_calls__mark_tail_calls_6_0)
MR_decl_static(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0)
MR_decl_static(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0)

static const MR_EnumFunctorDesc mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0 = {
	"found_tail_calls",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1 = {
	"not_found_tail_calls",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0[] = {
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0[] = {
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_0,
	&mercury_data_hlds__mark_tail_calls__enum_functor_desc_found_tail_calls_0_1
};

const MR_Integer mercury_data_hlds__mark_tail_calls__functor_number_map_found_tail_calls_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0)),
	"hlds.mark_tail_calls",
	"found_tail_calls",
	{ (void *)mercury_data_hlds__mark_tail_calls__enum_name_ordered_found_tail_calls_0 },
	{ (void *)mercury_data_hlds__mark_tail_calls__enum_value_ordered_found_tail_calls_0 },
	2,
	4,
	mercury_data_hlds__mark_tail_calls__functor_number_map_found_tail_calls_0
};



MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module0)
	MR_init_entry1(hlds__mark_tail_calls__find_maybe_output_args_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__find_maybe_output_args_2_5_0);
	MR_init_label6(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,62,8,10,12,63,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_maybe_output_args_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__find_maybe_output_args_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i62);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i63);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i63);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i8);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i12);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,
		hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i12);
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__find_maybe_output_args_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module1)
	MR_init_entry1(hlds__mark_tail_calls__is_output_arg_rename_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__is_output_arg_rename_4_0);
	MR_init_label4(hlds__mark_tail_calls__is_output_arg_rename_4_0,5,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_output_arg_rename'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__is_output_arg_rename_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i4);
	}
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__is_output_arg_rename_4_0,
		hlds__mark_tail_calls__is_output_arg_rename_4_0_i5);
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__mark_tail_calls__is_output_arg_rename_4_0_i8);
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__is_output_arg_rename_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__mark_tail_calls__is_output_arg_rename_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module2)
	MR_init_entry1(hlds__mark_tail_calls__match_output_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__match_output_args_2_0);
	MR_init_label7(hlds__mark_tail_calls__match_output_args_2_0,38,3,10,11,21,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_output_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__match_output_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.match_output_args\'/2", 52);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__mark_tail_calls__match_output_args_2_0_i21);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i8);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i10);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i38);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__mark_tail_calls__match_output_args_2_0_i11);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__mark_tail_calls__match_output_args_2_0_i38);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.match_output_args\'/2", 52);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__mark_tail_calls__match_output_args_2_0_i21);
MR_def_label(hlds__mark_tail_calls__match_output_args_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module3)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0);
	MR_init_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,3,142,7,8,9,4,13,12,17,18)
	MR_init_label10(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,16,24,27,22,23,21,31,30,39,37)
	MR_init_label1(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r7 = MR_tempr1;
	if (!((((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 4))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 5))))) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_proceed();
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i4);
	}
	MR_r8 = MR_tfield(3, MR_r7, 1);
	if (MR_INT_NE(MR_r8,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i142);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_r5, 1);
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r6;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(3, MR_r7, 2);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i7);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i8);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(0, MR_r5, 1);
	MR_r5 = MR_tfield(3, MR_r7, 1);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i13);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,6)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i16);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 4);
	MR_r5 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i17);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i18);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i21);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_tempr1 != MR_r2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i23);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if ((MR_tempr1 != MR_r3)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r6;
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__match_output_args_2_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i24);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i22);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i27);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(7);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r7,3,3)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i30);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(0, MR_r5, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r5 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i31);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i34);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r7, 3);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i23);
	}
	MR_sv(1) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__is_output_arg_rename_4_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i39);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0_i37);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.mark_tail_calls_in_goal\'/9", 58);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module4)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0);
	MR_init_label3(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_goals'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0_i4);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0,
		hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0_i5);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_goals_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module5)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0);
	MR_init_label3(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_cases'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0_i4);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0,
		hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0_i6);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_cases_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module6)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0);
	MR_init_label4(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,28,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls_in_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0_i28);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0_i5);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr3;
	}
	MR_np_localcall_lab(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,
		hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0_i9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_in_conj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_tail_call_events_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module7)
	MR_init_entry1(hlds__mark_tail_calls__mark_tail_calls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_tail_calls__mark_tail_calls_6_0);
	MR_init_label10(hlds__mark_tail_calls__mark_tail_calls_6_0,2,3,4,5,7,8,9,10,13,12)
	MR_init_label4(hlds__mark_tail_calls__mark_tail_calls_6_0,16,17,18,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_tail_calls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__mark_tail_calls__mark_tail_calls_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_r5;
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i2);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i3);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i4);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i5);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i7);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i9);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i10);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__find_maybe_output_args_2_5_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i13);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i12);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i17);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.mark_tail_calls", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.mark_tail_calls.find_maybe_output_args\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("list length mismatch", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i16);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__mark_tail_calls__mark_tail_calls_in_goal_9_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i17);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		hlds__mark_tail_calls__mark_tail_calls_6_0_i18);
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__mark_tail_calls__mark_tail_calls_6_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_has_tail_call_events_3_0);
	}
MR_def_label(hlds__mark_tail_calls__mark_tail_calls_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_has_tail_call_events_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_tail_calls_module8)
	MR_init_entry1(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__mark_tail_calls__found_tail_calls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__mark_tail_calls__found_tail_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__mark_tail_calls_module9)
	MR_init_entry1(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__mark_tail_calls__found_tail_calls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__mark_tail_calls__found_tail_calls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__mark_tail_calls_maybe_bunch_0(void)
{
	hlds__mark_tail_calls_module0();
	hlds__mark_tail_calls_module1();
	hlds__mark_tail_calls_module2();
	hlds__mark_tail_calls_module3();
	hlds__mark_tail_calls_module4();
	hlds__mark_tail_calls_module5();
	hlds__mark_tail_calls_module6();
	hlds__mark_tail_calls_module7();
	hlds__mark_tail_calls_module8();
	hlds__mark_tail_calls_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__mark_tail_calls__init(void);
void mercury__hlds__mark_tail_calls__init_type_tables(void);
void mercury__hlds__mark_tail_calls__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__mark_tail_calls__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__mark_tail_calls__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__mark_tail_calls__init_threadscope_string_table(void);
#endif

void mercury__hlds__mark_tail_calls__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__mark_tail_calls_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0,
		hlds__mark_tail_calls__found_tail_calls_0_0);
	mercury__hlds__mark_tail_calls__init_debugger();
}

void mercury__hlds__mark_tail_calls__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__mark_tail_calls__type_ctor_info_found_tail_calls_0);
	}
}


void mercury__hlds__mark_tail_calls__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__mark_tail_calls__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__mark_tail_calls);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__mark_tail_calls__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__mark_tail_calls__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
