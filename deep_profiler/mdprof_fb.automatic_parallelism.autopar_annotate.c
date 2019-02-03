/*
** Automatically generated from `autopar_annotate.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 32 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 40 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 53 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#include "mdprof_fb.automatic_parallelism.autopar_annotate.mh"

#line 56 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 57 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#ifndef MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_ANNOTATE_DECL_GUARD
#define MDPROF_FB__AUTOMATIC_PARALLELISM__AUTOPAR_ANNOTATE_DECL_GUARD

#line 61 "mdprof_fb.automatic_parallelism.autopar_annotate.c"
#line 62 "mdprof_fb.automatic_parallelism.autopar_annotate.c"

#endif
#line 65 "mdprof_fb.automatic_parallelism.autopar_annotate.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0, 4,5,3,6,7,8,9,10)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0, 4,5,3,6,7,8,10,11,12,13)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0, 4,3,7,6,10,11,9,14,15,16)
MR_decl_label9(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0, 17,13,20,19,23,24,22,26,28)
MR_decl_label9(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0, 2,3,4,5,9,10,11,12,13)
MR_decl_label10(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0, 4,5,3,6,7,8,10,11,12,13)
MR_def_extern_entry(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0)
MR_decl_static(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0)



extern const MR_TypeCtorInfo_Struct mercury_data_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0;
MR_decl_entry(mdbcomp__goal_path__update_goal_attribute_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(set__insert_3_0);
MR_decl_entry(program_representation_utils__atomic_goal_get_vars_2_0);
MR_decl_entry(fn__set__from_list_1_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(program_representation_utils__inst_map_ground_vars_5_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_annotate_module0)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,4,3,7,6,10,11,9,14,15,16)
	MR_init_label9(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,17,13,20,19,23,24,22,26,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_annotate_with_instmap'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i3);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r4 = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i6);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r4 = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i9);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i13);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(program_representation_utils__atomic_goal_get_vars_2_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i14);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__from_list_1_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i15);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__difference_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i16);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(program_representation_utils__inst_map_ground_vars_5_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i17);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r4 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i19);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr2, 3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i20);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r4 = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i22);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i23);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i24);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_tempr2;
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i26);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	MR_r4 = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdprof_fb__automatic_parallelism__autopar_types, inst_map_info);
	}
	MR_np_call_localret_ent(mdbcomp__goal_path__update_goal_attribute_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0_i28);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__union_3_0);
MR_decl_entry(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_annotate_module1)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0);
	MR_init_label8(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,4,5,3,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_annotate_with_instmap'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__union_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__union_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__conj_annotate_with_instmap_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__program_representation_utils__merge_inst_map_4_0);
MR_decl_entry(set__intersect_3_0);

MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_annotate_module2)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,4,5,3,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_annotate_with_instmap'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__union_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 7;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set__intersect_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__disj_annotate_with_instmap_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_annotate_module3)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0);
	MR_init_label10(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,4,5,3,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_annotate_with_instmap'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i5);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 2);
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i6);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_localcall_lab(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i7);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__union_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i8);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 7;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set__intersect_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__program_representation_utils__merge_seen_duplicate_instantiation_2_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__switch_annotate_with_instmap_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdprof_fb__automatic_parallelism__autopar_annotate_module4)
	MR_init_entry1(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0);
	MR_init_label9(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,2,3,4,5,9,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ite_annotate_with_instmap'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i2);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i3);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i4);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i5);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i5);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i5);
	}
	MR_sv(3) = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i9);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(set__union_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i10);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__union_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i11);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__intersect_3_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i12);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tfield(0, MR_sv(2), 1);
	}
	MR_np_call_localret_ent(fn__program_representation_utils__merge_inst_map_4_0,
		mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0_i13);
MR_def_label(mdprof_fb__automatic_parallelism__autopar_annotate__ite_annotate_with_instmap_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdprof_fb__automatic_parallelism__autopar_annotate_maybe_bunch_0(void)
{
	mdprof_fb__automatic_parallelism__autopar_annotate_module0();
	mdprof_fb__automatic_parallelism__autopar_annotate_module1();
	mdprof_fb__automatic_parallelism__autopar_annotate_module2();
	mdprof_fb__automatic_parallelism__autopar_annotate_module3();
	mdprof_fb__automatic_parallelism__autopar_annotate_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_type_tables(void);
void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_threadscope_string_table(void);
#endif

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdprof_fb__automatic_parallelism__autopar_annotate_maybe_bunch_0();
	mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_debugger();
}

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdprof_fb__automatic_parallelism__autopar_annotate);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdprof_fb__automatic_parallelism__autopar_annotate__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
