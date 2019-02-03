/*
** Automatically generated from `atsort.m'
** by the Mercury compiler,
** version 11.07-beta-2011-11-14, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__libs__atsort__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "libs.atsort.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "libs.atsort.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "libs.atsort.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "libs.atsort.c"
#line 41 "libs.atsort.c"
#include "libs.atsort.mh"

#line 44 "libs.atsort.c"
#line 45 "libs.atsort.c"
#ifndef LIBS__ATSORT_DECL_GUARD
#define LIBS__ATSORT_DECL_GUARD

#line 49 "libs.atsort.c"
#line 50 "libs.atsort.c"

#endif
#line 53 "libs.atsort.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__atsort__type_ctor_info_relmap_1;
MR_decl_label5(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0, 3,4,7,6,10)
MR_decl_label10(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0, 2,6,4,10,16,18,46,13,23,24)
MR_decl_label10(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0, 25,26,29,30,31,32,33,34,35,36)
MR_decl_label6(libs__atsort__atsort_can_choose_5_0, 30,3,6,10,9,4)
MR_decl_label4(libs__atsort__atsort_choose_pref_3_0, 20,6,4,3)
MR_decl_label6(libs__atsort__atsort_closure_2_4_0, 23,3,6,4,9,10)
MR_decl_label3(libs__atsort__atsort_map_delete_all_nodes_3_0, 11,3,5)
MR_decl_label4(libs__atsort__atsort_map_delete_all_sink_links_4_0, 12,3,5,6)
MR_decl_label4(libs__atsort__atsort_map_delete_all_source_links_4_0, 12,3,5,6)
MR_decl_label6(libs__atsort__atsort_map_delete_this_element_4_0, 21,3,6,8,9,4)
MR_decl_label4(libs__atsort__atsort_maybe_insert_3_0, 20,3,6,4)
MR_decl_label4(libs__atsort__atsort_must_avoid_2_0, 19,6,2,1)
MR_decl_label10(libs__atsort__atsort_repeat_source_sink_10_0, 47,2,3,6,7,8,9,10,11,12)
MR_decl_label4(libs__atsort__atsort_repeat_source_sink_10_0, 13,15,14,49)
MR_decl_label6(libs__atsort__atsort_source_sink_9_0, 41,3,6,4,12,10)
MR_decl_static(libs__atsort__atsort_must_avoid_2_0)
MR_decl_static(libs__atsort__atsort_can_choose_5_0)
MR_decl_static(libs__atsort__atsort_choose_pref_3_0)
MR_decl_static(libs__atsort__atsort_map_delete_this_element_4_0)
MR_decl_static(libs__atsort__atsort_map_delete_all_source_links_4_0)
MR_decl_static(libs__atsort__atsort_map_delete_all_sink_links_4_0)
MR_decl_static(libs__atsort__atsort_map_delete_all_nodes_3_0)
MR_decl_static(libs__atsort__atsort_source_sink_9_0)
MR_decl_static(libs__atsort__atsort_repeat_source_sink_10_0)
MR_def_extern_entry(libs__atsort__atsort_6_0)
MR_decl_static(libs__atsort__atsort_maybe_insert_3_0)
MR_decl_static(libs__atsort__atsort_closure_2_4_0)
MR_def_extern_entry(libs__atsort__atsort_closure_3_0)
MR_def_extern_entry(__Unify___libs__atsort__relmap_1_0)
MR_def_extern_entry(__Compare___libs__atsort__relmap_1_0)
MR_def_extern_entry(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0)
MR_decl_static(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0)
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__atsort__type_ctor_info_relmap_1 = {
	1,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__atsort__relmap_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__atsort__relmap_1_0)),
	"libs.atsort",
	"relmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_1 },
	-1,
	0,
	NULL
};



MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(libs__atsort_module0)
	MR_init_entry1(libs__atsort__atsort_must_avoid_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_must_avoid_2_0);
	MR_init_label4(libs__atsort__atsort_must_avoid_2_0,19,6,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_must_avoid'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_must_avoid_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_must_avoid_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_must_avoid_2_0_i2);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(list__member_2_0,
		libs__atsort__atsort_must_avoid_2_0_i6);
MR_def_label(libs__atsort__atsort_must_avoid_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(libs__atsort__atsort_must_avoid_2_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(libs__atsort__atsort_must_avoid_2_0_i19);
MR_def_label(libs__atsort__atsort_must_avoid_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(libs__atsort__atsort_must_avoid_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(libs__atsort_module1)
	MR_init_entry1(libs__atsort__atsort_can_choose_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_can_choose_5_0);
	MR_init_label6(libs__atsort__atsort_can_choose_5_0,30,3,6,10,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_can_choose'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_can_choose_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_can_choose_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_can_choose_5_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(libs__atsort__atsort_can_choose_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__atsort__atsort_can_choose_5_0_i6);
MR_def_label(libs__atsort__atsort_can_choose_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_can_choose_5_0_i4);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_must_avoid_2_0,
		libs__atsort__atsort_can_choose_5_0_i10);
MR_def_label(libs__atsort__atsort_can_choose_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_can_choose_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(libs__atsort__atsort_can_choose_5_0_i30);
	}
MR_def_label(libs__atsort__atsort_can_choose_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(libs__atsort__atsort_can_choose_5_0_i30);
MR_def_label(libs__atsort__atsort_can_choose_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(libs__atsort__atsort_can_choose_5_0_i30);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(libs__atsort_module2)
	MR_init_entry1(libs__atsort__atsort_choose_pref_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_choose_pref_3_0);
	MR_init_label4(libs__atsort__atsort_choose_pref_3_0,20,6,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_choose_pref'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_choose_pref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_choose_pref_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_choose_pref_3_0_i3);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		libs__atsort__atsort_choose_pref_3_0_i6);
MR_def_label(libs__atsort__atsort_choose_pref_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_choose_pref_3_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(libs__atsort__atsort_choose_pref_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(libs__atsort__atsort_choose_pref_3_0_i20);
MR_def_label(libs__atsort__atsort_choose_pref_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.atsort", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.atsort.atsort_choose_pref\'/3", 44);
	MR_r3 = (MR_Word) MR_string_const("cannot choose any node in atsort", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_all_3_1);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(libs__atsort_module3)
	MR_init_entry1(libs__atsort__atsort_map_delete_this_element_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_map_delete_this_element_4_0);
	MR_init_label6(libs__atsort__atsort_map_delete_this_element_4_0,21,3,6,8,9,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_map_delete_this_element'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_map_delete_this_element_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_map_delete_this_element_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_map_delete_this_element_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(libs__atsort__atsort_map_delete_this_element_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__atsort__atsort_map_delete_this_element_4_0_i6);
MR_def_label(libs__atsort__atsort_map_delete_this_element_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_map_delete_this_element_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__delete_all_3_1,
		libs__atsort__atsort_map_delete_this_element_4_0_i8);
MR_def_label(libs__atsort__atsort_map_delete_this_element_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		libs__atsort__atsort_map_delete_this_element_4_0_i9);
MR_def_label(libs__atsort__atsort_map_delete_this_element_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(libs__atsort__atsort_map_delete_this_element_4_0_i21);
MR_def_label(libs__atsort__atsort_map_delete_this_element_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(libs__atsort__atsort_map_delete_this_element_4_0_i21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(libs__atsort_module4)
	MR_init_entry1(libs__atsort__atsort_map_delete_all_source_links_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_map_delete_all_source_links_4_0);
	MR_init_label4(libs__atsort__atsort_map_delete_all_source_links_4_0,12,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_map_delete_all_source_links'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_map_delete_all_source_links_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_map_delete_all_source_links_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_map_delete_all_source_links_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(libs__atsort__atsort_map_delete_all_source_links_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__atsort__atsort_map_delete_all_source_links_4_0_i5);
MR_def_label(libs__atsort__atsort_map_delete_all_source_links_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_this_element_4_0,
		libs__atsort__atsort_map_delete_all_source_links_4_0_i6);
MR_def_label(libs__atsort__atsort_map_delete_all_source_links_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__atsort__atsort_map_delete_all_source_links_4_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__atsort_module5)
	MR_init_entry1(libs__atsort__atsort_map_delete_all_sink_links_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_map_delete_all_sink_links_4_0);
	MR_init_label4(libs__atsort__atsort_map_delete_all_sink_links_4_0,12,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_map_delete_all_sink_links'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_map_delete_all_sink_links_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_map_delete_all_sink_links_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_map_delete_all_sink_links_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(libs__atsort__atsort_map_delete_all_sink_links_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__atsort__atsort_map_delete_all_sink_links_4_0_i5);
MR_def_label(libs__atsort__atsort_map_delete_all_sink_links_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_this_element_4_0,
		libs__atsort__atsort_map_delete_all_sink_links_4_0_i6);
MR_def_label(libs__atsort__atsort_map_delete_all_sink_links_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__atsort__atsort_map_delete_all_sink_links_4_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(libs__atsort_module6)
	MR_init_entry1(libs__atsort__atsort_map_delete_all_nodes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_map_delete_all_nodes_3_0);
	MR_init_label3(libs__atsort__atsort_map_delete_all_nodes_3_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_map_delete_all_nodes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_map_delete_all_nodes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_map_delete_all_nodes_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_map_delete_all_nodes_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(libs__atsort__atsort_map_delete_all_nodes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__delete_3_0,
		libs__atsort__atsort_map_delete_all_nodes_3_0_i5);
MR_def_label(libs__atsort__atsort_map_delete_all_nodes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(libs__atsort__atsort_map_delete_all_nodes_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__atsort_module7)
	MR_init_entry1(libs__atsort__atsort_source_sink_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_source_sink_9_0);
	MR_init_label6(libs__atsort__atsort_source_sink_9_0,41,3,6,4,12,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_source_sink'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_source_sink_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_source_sink_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(9);
MR_def_label(libs__atsort__atsort_source_sink_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__atsort__atsort_source_sink_9_0_i6);
MR_def_label(libs__atsort__atsort_source_sink_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i41);
	}
MR_def_label(libs__atsort__atsort_source_sink_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__search_3_0,
		libs__atsort__atsort_source_sink_9_0_i12);
MR_def_label(libs__atsort__atsort_source_sink_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r7 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i41);
	}
MR_def_label(libs__atsort__atsort_source_sink_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r7 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(libs__atsort__atsort_source_sink_9_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_elems_3_0);

MR_BEGIN_MODULE(libs__atsort_module8)
	MR_init_entry1(libs__atsort__atsort_repeat_source_sink_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_repeat_source_sink_10_0);
	MR_init_label10(libs__atsort__atsort_repeat_source_sink_10_0,47,2,3,6,7,8,9,10,11,12)
	MR_init_label4(libs__atsort__atsort_repeat_source_sink_10_0,13,15,14,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_repeat_source_sink'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_repeat_source_sink_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__atsort__atsort_source_sink_9_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i2);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_repeat_source_sink_10_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_repeat_source_sink_10_0_i3);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i6);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__delete_elems_3_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i7);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_all_source_links_4_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i8);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_all_sink_links_4_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i9);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_all_nodes_3_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i10);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_all_nodes_3_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i11);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_all_nodes_3_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i12);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_all_nodes_3_0,
		libs__atsort__atsort_repeat_source_sink_10_0_i13);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_repeat_source_sink_10_0_i15);
	}
	MR_r6 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(libs__atsort__atsort_repeat_source_sink_10_0_i14);
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	}
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_repeat_source_sink_10_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r6;
	MR_r6 = MR_tempr1;
	}
MR_def_label(libs__atsort__atsort_repeat_source_sink_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(libs__atsort__atsort_repeat_source_sink_10_0_i47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__atsort_module9)
	MR_init_entry1(libs__atsort__atsort_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__atsort__atsort_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__atsort_module10)
	MR_init_entry1(libs__atsort__atsort_maybe_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_maybe_insert_3_0);
	MR_init_label4(libs__atsort__atsort_maybe_insert_3_0,20,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_maybe_insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_maybe_insert_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_maybe_insert_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_maybe_insert_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(libs__atsort__atsort_maybe_insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		libs__atsort__atsort_maybe_insert_3_0_i6);
MR_def_label(libs__atsort__atsort_maybe_insert_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_maybe_insert_3_0_i4);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(libs__atsort__atsort_maybe_insert_3_0_i20);
MR_def_label(libs__atsort__atsort_maybe_insert_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(libs__atsort__atsort_maybe_insert_3_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__atsort_module11)
	MR_init_entry1(libs__atsort__atsort_closure_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_closure_2_4_0);
	MR_init_label6(libs__atsort__atsort_closure_2_4_0,23,3,6,4,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_closure_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__atsort__atsort_closure_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(libs__atsort__atsort_closure_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(libs__atsort__atsort_closure_2_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(libs__atsort__atsort_closure_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_0,
		libs__atsort__atsort_closure_2_4_0_i6);
MR_def_label(libs__atsort__atsort_closure_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__atsort__atsort_closure_2_4_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__atsort__atsort_closure_2_4_0_i23);
MR_def_label(libs__atsort__atsort_closure_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__atsort__atsort_closure_2_4_0_i9);
MR_def_label(libs__atsort__atsort_closure_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(libs__atsort__atsort_maybe_insert_3_0,
		libs__atsort__atsort_closure_2_4_0_i10);
MR_def_label(libs__atsort__atsort_closure_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(libs__atsort__atsort_closure_2_4_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__atsort_module12)
	MR_init_entry1(libs__atsort__atsort_closure_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__atsort__atsort_closure_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atsort_closure'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__atsort__atsort_closure_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(libs__atsort__atsort_closure_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__atsort_module13)
	MR_init_entry1(__Unify___libs__atsort__relmap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__atsort__relmap_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__atsort__relmap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(libs__atsort_module14)
	MR_init_entry1(__Compare___libs__atsort__relmap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__atsort__relmap_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__atsort__relmap_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(libs__atsort_module15)
	MR_init_entry1(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0);
	MR_init_label5(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0,3,4,7,6,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__atsort__[4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0_i3);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0_i4);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0_i7);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libs.atsort", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140libs.atsort.atsort\'/6", 32);
	MR_r3 = (MR_Word) MR_string_const("succ and pred nodelists differ", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0_i10);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_95_91_52_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(libs__atsort_module16)
	MR_init_entry1(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0);
	MR_init_label10(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,2,6,4,10,16,18,46,13,23,24)
	MR_init_label10(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,25,26,29,30,31,32,33,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__atsort_main__[5]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(8) = MR_r1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(libs__atsort__atsort_repeat_source_sink_10_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i2);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i6);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_sv(10) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tempr4 = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i10);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(12) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__member_2_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i16);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i13);
	}
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_must_avoid_2_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i18);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i13);
	}
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i23);
	}
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__atsort__atsort_can_choose_5_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i24);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__atsort__atsort_choose_pref_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i25);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(list__delete_all_3_1,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i26);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_sv(11);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i29);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_this_element_4_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i30);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(11) = MR_tfield(1, MR_sv(10), 0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i31);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(libs__atsort__atsort_map_delete_this_element_4_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i32);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tfield(1, MR_sv(10), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__delete_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i33);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tfield(1, MR_sv(10), 0);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__delete_3_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i34);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i35);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0_i36);
MR_def_label(f_108_105_98_115_95_95_97_116_115_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_116_115_111_114_116_95_109_97_105_110_95_95_91_53_93_95_48_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__condense_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__atsort_maybe_bunch_0(void)
{
	libs__atsort_module0();
	libs__atsort_module1();
	libs__atsort_module2();
	libs__atsort_module3();
	libs__atsort_module4();
	libs__atsort_module5();
	libs__atsort_module6();
	libs__atsort_module7();
	libs__atsort_module8();
	libs__atsort_module9();
	libs__atsort_module10();
	libs__atsort_module11();
	libs__atsort_module12();
	libs__atsort_module13();
	libs__atsort_module14();
	libs__atsort_module15();
	libs__atsort_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__atsort__init(void);
void mercury__libs__atsort__init_type_tables(void);
void mercury__libs__atsort__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__atsort__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__atsort__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__libs__atsort__init_threadscope_string_table(void);
#endif

void mercury__libs__atsort__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__atsort_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__atsort__type_ctor_info_relmap_1,
		libs__atsort__relmap_1_0);
	mercury__libs__atsort__init_debugger();
}

void mercury__libs__atsort__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__atsort__type_ctor_info_relmap_1);
	}
}


void mercury__libs__atsort__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__atsort__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__atsort);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__atsort__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__atsort__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
