/*
** Automatically generated from `graph_colour.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__libs__graph_colour__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "libs.graph_colour.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "libs.graph_colour.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "libs.graph_colour.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "libs.graph_colour.c"
#line 40 "libs.graph_colour.c"
#include "libs.graph_colour.mh"

#line 43 "libs.graph_colour.c"
#line 44 "libs.graph_colour.c"
#ifndef LIBS__GRAPH_COLOUR_DECL_GUARD
#define LIBS__GRAPH_COLOUR_DECL_GUARD

#line 48 "libs.graph_colour.c"
#line 49 "libs.graph_colour.c"

#endif
#line 52 "libs.graph_colour.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(libs__graph_colour__divide_constraints_6_0, 33,4,7,9,12,10,16,5)
MR_decl_label4(libs__graph_colour__find_all_colours_3_0, 15,4,5,6)
MR_decl_label5(libs__graph_colour__group_elements_2_0, 2,3,5,6,7)
MR_decl_label8(libs__graph_colour__next_colour_4_0, 4,3,7,5,10,11,14,13)
MR_decl_label6(libs__graph_colour__next_colour_4_0, 18,20,16,22,23,26)
MR_decl_static(libs__graph_colour__divide_constraints_6_0)
MR_decl_static(libs__graph_colour__next_colour_4_0)
MR_decl_static(libs__graph_colour__find_all_colours_3_0)
MR_def_extern_entry(libs__graph_colour__group_elements_2_0)

MR_decl_entry(set__member_2_0);
MR_decl_entry(set__delete_3_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(set__difference_3_0);

MR_BEGIN_MODULE(libs__graph_colour_module0)
	MR_init_entry1(libs__graph_colour__divide_constraints_6_0);
	MR_init_label8(libs__graph_colour__divide_constraints_6_0,33,4,7,9,12,10,16,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__graph_colour__divide_constraints_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__graph_colour__divide_constraints_6_0_i33);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(libs__graph_colour__divide_constraints_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_sv(6) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_np_localcall_lab(libs__graph_colour__divide_constraints_6_0,
		libs__graph_colour__divide_constraints_6_0_i4);
MR_def_label(libs__graph_colour__divide_constraints_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__member_2_0,
		libs__graph_colour__divide_constraints_6_0_i7);
MR_def_label(libs__graph_colour__divide_constraints_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__graph_colour__divide_constraints_6_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		libs__graph_colour__divide_constraints_6_0_i9);
MR_def_label(libs__graph_colour__divide_constraints_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__empty_1_0,
		libs__graph_colour__divide_constraints_6_0_i12);
MR_def_label(libs__graph_colour__divide_constraints_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__graph_colour__divide_constraints_6_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(3);
	MR_sv(2) = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		libs__graph_colour__divide_constraints_6_0_i16);
MR_def_label(libs__graph_colour__divide_constraints_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_sv(2) = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		libs__graph_colour__divide_constraints_6_0_i16);
MR_def_label(libs__graph_colour__divide_constraints_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(libs__graph_colour__divide_constraints_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(set__remove_least_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(set__singleton_set_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
MR_decl_entry(list__append_3_1);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(libs__graph_colour_module1)
	MR_init_entry1(libs__graph_colour__next_colour_4_0);
	MR_init_label8(libs__graph_colour__next_colour_4_0,4,3,7,5,10,11,14,13)
	MR_init_label6(libs__graph_colour__next_colour_4_0,18,20,16,22,23,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__graph_colour__next_colour_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__graph_colour__next_colour_4_0_i3);
	}
	MR_np_call_localret_ent(set__init_1_0,
		libs__graph_colour__next_colour_4_0_i4);
MR_def_label(libs__graph_colour__next_colour_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(libs__graph_colour__next_colour_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(set__remove_least_3_0,
		libs__graph_colour__next_colour_4_0_i7);
MR_def_label(libs__graph_colour__next_colour_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__graph_colour__next_colour_4_0_i5);
	}
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r5;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(libs__graph_colour__next_colour_4_0_i10);
MR_def_label(libs__graph_colour__next_colour_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r1 = (MR_Word) MR_string_const("graph_colour.m", 14);
	MR_r2 = (MR_Word) MR_string_const("choose_var: no vars!", 20);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		libs__graph_colour__next_colour_4_0_i10);
MR_def_label(libs__graph_colour__next_colour_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(libs__graph_colour__divide_constraints_6_0,
		libs__graph_colour__next_colour_4_0_i11);
MR_def_label(libs__graph_colour__next_colour_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__graph_colour__next_colour_4_0_i13);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		libs__graph_colour__next_colour_4_0_i14);
MR_def_label(libs__graph_colour__next_colour_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		libs__graph_colour__next_colour_4_0_i26);
MR_def_label(libs__graph_colour__next_colour_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		libs__graph_colour__next_colour_4_0_i18);
MR_def_label(libs__graph_colour__next_colour_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__graph_colour__next_colour_4_0_i16);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__singleton_set_2_1,
		libs__graph_colour__next_colour_4_0_i20);
MR_def_label(libs__graph_colour__next_colour_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		libs__graph_colour__next_colour_4_0_i26);
MR_def_label(libs__graph_colour__next_colour_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(libs__graph_colour__next_colour_4_0,
		libs__graph_colour__next_colour_4_0_i22);
MR_def_label(libs__graph_colour__next_colour_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		libs__graph_colour__next_colour_4_0_i23);
MR_def_label(libs__graph_colour__next_colour_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__append_3_1,
		libs__graph_colour__next_colour_4_0_i26);
MR_def_label(libs__graph_colour__next_colour_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__graph_colour_module2)
	MR_init_entry1(libs__graph_colour__find_all_colours_3_0);
	MR_init_label4(libs__graph_colour__find_all_colours_3_0,15,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__graph_colour__find_all_colours_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__graph_colour__find_all_colours_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(libs__graph_colour__find_all_colours_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__graph_colour__next_colour_4_0,
		libs__graph_colour__find_all_colours_3_0_i4);
MR_def_label(libs__graph_colour__find_all_colours_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		libs__graph_colour__find_all_colours_3_0_i5);
MR_def_label(libs__graph_colour__find_all_colours_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(libs__graph_colour__find_all_colours_3_0,
		libs__graph_colour__find_all_colours_3_0_i6);
MR_def_label(libs__graph_colour__find_all_colours_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__power_union_2_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(libs__graph_colour_module3)
	MR_init_entry1(libs__graph_colour__group_elements_2_0);
	MR_init_label5(libs__graph_colour__group_elements_2_0,2,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__graph_colour__group_elements_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(set__power_union_2_0,
		libs__graph_colour__group_elements_2_0_i2);
MR_def_label(libs__graph_colour__group_elements_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(set__init_1_0,
		libs__graph_colour__group_elements_2_0_i3);
MR_def_label(libs__graph_colour__group_elements_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(set__delete_3_0,
		libs__graph_colour__group_elements_2_0_i5);
MR_def_label(libs__graph_colour__group_elements_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		libs__graph_colour__group_elements_2_0_i6);
MR_def_label(libs__graph_colour__group_elements_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(libs__graph_colour__find_all_colours_3_0,
		libs__graph_colour__group_elements_2_0_i7);
MR_def_label(libs__graph_colour__group_elements_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__list_to_set_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__graph_colour_maybe_bunch_0(void)
{
	libs__graph_colour_module0();
	libs__graph_colour_module1();
	libs__graph_colour_module2();
	libs__graph_colour_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__graph_colour__init(void);
void mercury__libs__graph_colour__init_type_tables(void);
void mercury__libs__graph_colour__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__graph_colour__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__graph_colour__init_complexity_procs(void);
#endif

void mercury__libs__graph_colour__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__graph_colour_maybe_bunch_0();
	mercury__libs__graph_colour__init_debugger();
}

void mercury__libs__graph_colour__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__libs__graph_colour__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__graph_colour__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__graph_colour);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__graph_colour__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
