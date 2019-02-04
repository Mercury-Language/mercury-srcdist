/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2012-08-08, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__add_solver__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.add_solver.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.make_hlds.add_solver.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.make_hlds.add_solver.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.make_hlds.add_solver.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.make_hlds.add_solver.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.make_hlds.add_solver.c"
#line 49 "hlds.make_hlds.add_solver.c"
#include "hlds.make_hlds.add_solver.mh"

#line 52 "hlds.make_hlds.add_solver.c"
#line 53 "hlds.make_hlds.add_solver.c"
#ifndef HLDS__MAKE_HLDS__ADD_SOLVER_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_SOLVER_DECL_GUARD

#line 57 "hlds.make_hlds.add_solver.c"
#line 58 "hlds.make_hlds.add_solver.c"

#endif
#line 61 "hlds.make_hlds.add_solver.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label10(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 12,14,15,16,17,13,19,20,21,22)
MR_decl_label10(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 23,25,24,30,31,40,41,42,50,51)
MR_decl_label4(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 53,60,61,63)
MR_decl_label10(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0, 2,3,5,6,7,8,9,10,11,12)
MR_decl_label10(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0, 13,20,21,22,27,28,30,34,35,37)
MR_decl_label1(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0, 41)
MR_decl_label9(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0, 4,5,6,7,3,9,10,11,12)
MR_decl_label9(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0, 4,5,6,7,3,9,10,11,12)
MR_decl_label9(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0, 4,5,6,7,3,9,10,11,12)
MR_decl_label9(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0, 4,5,6,7,3,9,10,11,12)
MR_decl_static(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0)
MR_decl_static(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0)
MR_decl_static(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0)
MR_decl_static(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0)
MR_def_extern_entry(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0)
MR_def_extern_entry(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
0
},
{
3
},
};



MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module0)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0);
	MR_init_label9(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,4,5,6,7,3,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solver_to_ground_repn_symname'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of ground ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of ground ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i12);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module1)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0);
	MR_init_label9(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,4,5,6,7,3,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solver_to_any_repn_symname'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of any ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of any ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i12);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module2)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0);
	MR_init_label9(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,4,5,6,7,3,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'repn_to_ground_solver_symname'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to ground ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to ground ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i12);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module3)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0);
	MR_init_label9(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,4,5,6,7,3,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'repn_to_any_solver_symname'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to any ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to any ", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i12);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(hlds__hlds_pred__init_markers_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_any_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_any_mode_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module4)
	MR_init_entry1(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0);
	MR_init_label10(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,2,3,5,6,7,8,9,10,11,12)
	MR_init_label10(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,13,20,21,22,27,28,30,34,35,37)
	MR_init_label1(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_solver_type_decl_items'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(17) = MR_r8;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i2);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i3);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i5);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(12) = MR_tfield(0, MR_r2, 3);
	MR_sv(8) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i6);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i7);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i8);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i9);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i10);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i11);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i12);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tempr3 = MR_sv(15);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tempr5 = MR_sv(16);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr3;
	MR_r7 = MR_sv(15);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_tempr5;
	MR_r14 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i20);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i21);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i22);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(11);
	MR_r7 = MR_sv(15);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(17);
	MR_r14 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i27);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i28);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_sv(12) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i30);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(12);
	MR_r7 = MR_sv(15);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(8);
	MR_r14 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i34);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i35);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_sv(13) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i37);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(13);
	MR_r7 = MR_sv(15);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(16);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i41);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(require__sorry_2_0);
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_modify_trail_3_0);
MR_decl_entry(hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module5)
	MR_init_entry1(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0);
	MR_init_label10(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,12,14,15,16,17,13,19,20,21,22)
	MR_init_label10(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,23,25,24,30,31,40,41,42,50,51)
	MR_init_label4(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,53,60,61,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_solver_type_clause_items'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(14) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(16) = MR_r5;
	MR_sv(17) = MR_r6;
	MR_sv(18) = MR_r7;
	MR_sv(15) = MR_r8;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i2);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_tfield(0, MR_r2, 3);
	MR_sv(13) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i3);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i4);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i5);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i6);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i7);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i8);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i9);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i10);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i11);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i12);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i16);
	}
	MR_r1 = (MR_Integer) 4;
	MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_solver", 25);
	MR_r2 = (MR_Word) MR_string_const("solver type conversion functions for this backend", 49);
	MR_np_call_localret_ent(require__sorry_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i19);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i20);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i21);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i22);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_modify_trail_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i23);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),4)) {
		MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("Y = X", 5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i24);
	}
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("Y = X;", 6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	}
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i30);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i31);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(10);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(2, MR_tempr3, 4) = MR_sv(6);
	MR_tfield(2, MR_tempr3, 5) = MR_sv(7);
	MR_tfield(2, MR_tempr3, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 3) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tempr4;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i40);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i41);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i42);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(11);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(2, MR_tempr3, 4) = MR_sv(6);
	MR_tfield(2, MR_tempr3, 5) = MR_sv(7);
	MR_tfield(2, MR_tempr3, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 3) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tempr4;
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i50);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r4;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i51);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(12) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i53);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(2, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(7);
	MR_tfield(2, MR_tempr2, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 3) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(18);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i60);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i61);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(14) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i63);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(14);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(7);
	MR_tfield(2, MR_tempr2, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) -1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(16);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_pass_3_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__add_solver_maybe_bunch_0(void)
{
	hlds__make_hlds__add_solver_module0();
	hlds__make_hlds__add_solver_module1();
	hlds__make_hlds__add_solver_module2();
	hlds__make_hlds__add_solver_module3();
	hlds__make_hlds__add_solver_module4();
	hlds__make_hlds__add_solver_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_solver__init(void);
void mercury__hlds__make_hlds__add_solver__init_type_tables(void);
void mercury__hlds__make_hlds__add_solver__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_solver__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_solver__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__add_solver__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__add_solver__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__add_solver_maybe_bunch_0();
	mercury__hlds__make_hlds__add_solver__init_debugger();
}

void mercury__hlds__make_hlds__add_solver__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__make_hlds__add_solver__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__add_solver__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__add_solver);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_solver__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__add_solver__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
