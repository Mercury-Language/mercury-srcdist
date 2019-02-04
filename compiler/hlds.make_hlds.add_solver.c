/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__make_hlds__add_solver__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.add_solver.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.add_solver.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.make_hlds.add_solver.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.make_hlds.add_solver.c"
#line 40 "hlds.make_hlds.add_solver.c"
#include "hlds.make_hlds.add_solver.mh"

#line 43 "hlds.make_hlds.add_solver.c"
#line 44 "hlds.make_hlds.add_solver.c"
#ifndef HLDS__MAKE_HLDS__ADD_SOLVER_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_SOLVER_DECL_GUARD

#line 48 "hlds.make_hlds.add_solver.c"
#line 49 "hlds.make_hlds.add_solver.c"

#endif
#line 52 "hlds.make_hlds.add_solver.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
};
static const struct mercury_type_1 mercury_common_1[];
MR_decl_label8(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0, 18,19,20,21,22)
MR_decl_label8(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0, 4,5,6,7,3,8,9,10)
MR_decl_label1(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0, 11)
MR_decl_label8(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0, 4,5,6,7,3,8,9,10)
MR_decl_label1(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0, 11)
MR_decl_label8(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0, 4,5,6,7,3,8,9,10)
MR_decl_label1(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0, 11)
MR_decl_label8(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0, 4,5,6,7,3,8,9,10)
MR_decl_label1(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0, 11)
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
	MR_init_label8(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,4,5,6,7,3,8,9,10)
	MR_init_label1(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of ground ", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i8);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of ground ", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module1)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0);
	MR_init_label8(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,4,5,6,7,3,8,9,10)
	MR_init_label1(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of any ", 22);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i8);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation of any ", 22);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module2)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0);
	MR_init_label8(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,4,5,6,7,3,8,9,10)
	MR_init_label1(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to ground ", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i8);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to ground ", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module3)
	MR_init_entry1(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0);
	MR_init_label8(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,4,5,6,7,3,8,9,10)
	MR_init_label1(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i4);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i5);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i6);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to any ", 22);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i7);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i8);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i9);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i10);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("representation to any ", 22);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0_i11);
MR_def_label(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
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
	MR_init_label8(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,10,11,12,13,14,15,16,17)
	MR_init_label5(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(15) = MR_r7;
	MR_sv(16) = MR_r8;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i2);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i3);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i4);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i5);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i6);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i7);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i8);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i9);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i10);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i11);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i12);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r14 = MR_sv(16);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(13);
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(17);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i14);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i15);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
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
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(10);
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(17);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(13);
	MR_r14 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i16);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i17);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(13) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i18);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(17);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(8);
	MR_r14 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i19);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i20);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i21);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(2);
	MR_r7 = MR_sv(16);
	MR_r8 = (MR_Integer) 2;
	MR_r9 = MR_sv(17);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(4);
	MR_r14 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__module_add_pred_or_func_17_0,
		hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0_i22);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_decl_items_11_0,22)
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
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_solver_module5)
	MR_init_entry1(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0);
	MR_init_label8(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,10,11,12,13,14,15,16,17)
	MR_init_label8(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,18,19,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_sv(18) = MR_r8;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i2);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i3);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i4);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i5);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i6);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i7);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i8);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i9);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i10);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i11);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i12);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i13);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i14);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(13) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("Y = X;", 6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i15);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i16);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(14);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(2, MR_tempr3, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr3, 5) = MR_sv(11);
	MR_tfield(2, MR_tempr3, 6) = MR_sv(13);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_tfield(3, MR_r1, 2) = MR_tempr3;
	MR_r6 = MR_sv(18);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(1,1,1);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i17);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i18);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i19);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr3, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr4;
	MR_tfield(2, MR_tempr3, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr3, 5) = MR_sv(11);
	MR_tfield(2, MR_tempr3, 6) = MR_sv(13);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(18);
	MR_tfield(3, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(15);
	MR_r5 = MR_sv(16);
	MR_r6 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i20);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i21);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i22);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr2, 3) = MR_tempr3;
	MR_tfield(2, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 6) = MR_sv(13);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(18);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i23);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i24);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("X", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_any_mode_0_0,
		hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0_i25);
MR_def_label(hlds__make_hlds__add_solver__add_solver_type_clause_items_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("Y", 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 4) = MR_sv(10);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(11);
	MR_tfield(2, MR_tempr2, 6) = MR_sv(13);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(18);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(14);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__add_item_clause_10_0);
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
void mercury__hlds__make_hlds__add_solver__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_solver__init_complexity_procs(void);
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

void mercury__hlds__make_hlds__add_solver__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_solver__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
