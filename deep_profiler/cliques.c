/*
** Automatically generated from `cliques.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__cliques__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 149 "../library/array.int"
#include "array.mh"

#line 28 "cliques.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "cliques.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 36 "cliques.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "cliques.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "cliques.c"
#line 45 "cliques.c"
#include "cliques.mh"

#line 48 "cliques.c"
#line 49 "cliques.c"
#ifndef CLIQUES_DECL_GUARD
#define CLIQUES_DECL_GUARD

#line 53 "cliques.c"
#line 54 "cliques.c"

#endif
#line 57 "cliques.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_cliques__type_ctor_info_graph_0,
	mercury_data_cliques__type_ctor_info_visit_0;
MR_decl_label10(cliques__add_arc_4_0, 27,4,6,7,9,10,11,12,2,15)
MR_decl_label3(cliques__add_arc_4_0, 17,18,19)
MR_decl_label3(cliques__add_arcs_to_4_0, 10,3,4)
MR_decl_label10(cliques__dfs_6_0, 35,3,6,4,9,12,10,15,17,18)
MR_decl_label3(cliques__dfs_graph_2_5_0, 11,3,5)
MR_decl_label2(cliques__init_1_0, 2,4)
MR_decl_label7(cliques__inverse_2_4_0, 23,5,3,8,10,11,2)
MR_decl_label1(cliques__mklist_3_0, 2)
MR_decl_label7(cliques__topological_sort_2_0, 2,3,4,5,6,7,8)
MR_decl_label6(cliques__tsort_5_0, 23,3,6,4,9,10)
MR_decl_label2(__Unify___cliques__graph_0_0, 7,1)
MR_decl_label4(__Compare___cliques__graph_0_0, 3,2,5,22)
MR_def_extern_entry(cliques__init_1_0)
MR_def_extern_entry(cliques__add_arc_4_0)
MR_decl_static(cliques__dfs_6_0)
MR_decl_static(cliques__tsort_5_0)
MR_decl_static(cliques__mklist_3_0)
MR_decl_static(cliques__dfs_graph_2_5_0)
MR_decl_static(cliques__add_arcs_to_4_0)
MR_decl_static(cliques__inverse_2_4_0)
MR_def_extern_entry(cliques__topological_sort_2_0)
MR_def_extern_entry(__Unify___cliques__graph_0_0)
MR_def_extern_entry(__Compare___cliques__graph_0_0)
MR_decl_static(__Unify___cliques__visit_0_0)
MR_decl_static(__Compare___cliques__visit_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_TAG_COMMON(0,0,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_cliques__field_types_graph_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_array__ti_array_1set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_cliques__du_functor_desc_graph_0_0 = {
	"graph",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_cliques__field_types_graph_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_cliques__du_stag_ordered_graph_0_0[] = {
	&mercury_data_cliques__du_functor_desc_graph_0_0

};

const MR_DuPtagLayout mercury_data_cliques__du_ptag_ordered_graph_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_cliques__du_stag_ordered_graph_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_cliques__du_name_ordered_graph_0[] = {
	&mercury_data_cliques__du_functor_desc_graph_0_0
};

const MR_Integer mercury_data_cliques__functor_number_map_graph_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_cliques__type_ctor_info_graph_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___cliques__graph_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___cliques__graph_0_0)),
	"cliques",
	"graph",
	{ (void *)mercury_data_cliques__du_name_ordered_graph_0 },
	{ (void *)mercury_data_cliques__du_ptag_ordered_graph_0 },
	1,
	4,
	mercury_data_cliques__functor_number_map_graph_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_cliques__type_ctor_info_visit_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___cliques__visit_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___cliques__visit_0_0)),
	"cliques",
	"visit",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(array__init_3_0);

MR_BEGIN_MODULE(cliques_module0)
	MR_init_entry1(cliques__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__init_1_0);
	MR_init_label2(cliques__init_1_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cliques__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		cliques__init_1_0_i2);
MR_def_label(cliques__init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Integer) 16;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		cliques__init_1_0_i4);
MR_def_label(cliques__init_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__in_bounds_2_0);
MR_decl_entry(array__lookup_3_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(fn__array_util__u_1_0);
MR_decl_entry(array__set_4_0);
MR_decl_entry(fn__int__max_2_0);
MR_decl_entry(array__size_2_0);
MR_decl_entry(array__resize_4_0);

MR_BEGIN_MODULE(cliques_module1)
	MR_init_entry1(cliques__add_arc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__add_arc_4_0);
	MR_init_label10(cliques__add_arc_4_0,27,4,6,7,9,10,11,12,2,15)
	MR_init_label3(cliques__add_arc_4_0,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_arc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cliques__add_arc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(cliques__add_arc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(array__in_bounds_2_0,
		cliques__add_arc_4_0_i4);
MR_def_label(cliques__add_arc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cliques__add_arc_4_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(array__lookup_3_0,
		cliques__add_arc_4_0_i6);
MR_def_label(cliques__add_arc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		cliques__add_arc_4_0_i7);
MR_def_label(cliques__add_arc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		cliques__add_arc_4_0_i9);
MR_def_label(cliques__add_arc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__set_4_0,
		cliques__add_arc_4_0_i10);
MR_def_label(cliques__add_arc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__int__max_2_0,
		cliques__add_arc_4_0_i11);
MR_def_label(cliques__add_arc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__int__max_2_0,
		cliques__add_arc_4_0_i12);
MR_def_label(cliques__add_arc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(cliques__add_arc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(array__size_2_0,
		cliques__add_arc_4_0_i15);
MR_def_label(cliques__add_arc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__array_util__u_1_0,
		cliques__add_arc_4_0_i17);
MR_def_label(cliques__add_arc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = ((MR_Integer) MR_r2 * (MR_Integer) 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		cliques__add_arc_4_0_i18);
MR_def_label(cliques__add_arc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__resize_4_0,
		cliques__add_arc_4_0_i19);
MR_def_label(cliques__add_arc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(cliques__add_arc_4_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dense_bitset__member_2_0);
MR_decl_entry(fn__dense_bitset__insert_2_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(cliques_module2)
	MR_init_entry1(cliques__dfs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__dfs_6_0);
	MR_init_label10(cliques__dfs_6_0,35,3,6,4,9,12,10,15,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dfs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(cliques__dfs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(cliques__dfs_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cliques__dfs_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(cliques__dfs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(dense_bitset__member_2_0,
		cliques__dfs_6_0_i6);
MR_def_label(cliques__dfs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cliques__dfs_6_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(cliques__dfs_6_0_i35);
MR_def_label(cliques__dfs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__dense_bitset__insert_2_0,
		cliques__dfs_6_0_i9);
MR_def_label(cliques__dfs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		cliques__dfs_6_0_i12);
MR_def_label(cliques__dfs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cliques__dfs_6_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		cliques__dfs_6_0_i15);
MR_def_label(cliques__dfs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		cliques__dfs_6_0_i15);
MR_def_label(cliques__dfs_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		cliques__dfs_6_0_i17);
MR_def_label(cliques__dfs_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(cliques__dfs_6_0,
		cliques__dfs_6_0_i18);
MR_def_label(cliques__dfs_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(cliques__dfs_6_0_i35);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(cliques_module3)
	MR_init_entry1(cliques__tsort_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__tsort_5_0);
	MR_init_label6(cliques__tsort_5_0,23,3,6,4,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tsort'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(cliques__tsort_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(cliques__tsort_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cliques__tsort_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(cliques__tsort_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(dense_bitset__member_2_0,
		cliques__tsort_5_0_i6);
MR_def_label(cliques__tsort_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cliques__tsort_5_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(cliques__tsort_5_0_i23);
MR_def_label(cliques__tsort_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(cliques__dfs_6_0,
		cliques__tsort_5_0_i9);
MR_def_label(cliques__tsort_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__list_to_set_2_0,
		cliques__tsort_5_0_i10);
MR_def_label(cliques__tsort_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(cliques__tsort_5_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cliques_module4)
	MR_init_entry1(cliques__mklist_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__mklist_3_0);
	MR_init_label1(cliques__mklist_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mklist'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(cliques__mklist_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(cliques__mklist_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(cliques__mklist_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_np_localtailcall(cliques__mklist_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cliques_module5)
	MR_init_entry1(cliques__dfs_graph_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__dfs_graph_2_5_0);
	MR_init_label3(cliques__dfs_graph_2_5_0,11,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dfs_graph_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(cliques__dfs_graph_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(cliques__dfs_graph_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cliques__dfs_graph_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(cliques__dfs_graph_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(cliques__dfs_6_0,
		cliques__dfs_graph_2_5_0_i5);
MR_def_label(cliques__dfs_graph_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(cliques__dfs_graph_2_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cliques_module6)
	MR_init_entry1(cliques__add_arcs_to_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__add_arcs_to_4_0);
	MR_init_label3(cliques__add_arcs_to_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_arcs_to'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(cliques__add_arcs_to_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(cliques__add_arcs_to_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cliques__add_arcs_to_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(cliques__add_arcs_to_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(cliques__add_arc_4_0,
		cliques__add_arcs_to_4_0_i4);
MR_def_label(cliques__add_arcs_to_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(cliques__add_arcs_to_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cliques_module7)
	MR_init_entry1(cliques__inverse_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__inverse_2_4_0);
	MR_init_label7(cliques__inverse_2_4_0,23,5,3,8,10,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inverse_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(cliques__inverse_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(cliques__inverse_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(cliques__inverse_2_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__in_bounds_2_0,
		cliques__inverse_2_4_0_i5);
MR_def_label(cliques__inverse_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cliques__inverse_2_4_0_i3);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		cliques__inverse_2_4_0_i8);
MR_def_label(cliques__inverse_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		cliques__inverse_2_4_0_i8);
MR_def_label(cliques__inverse_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		cliques__inverse_2_4_0_i10);
MR_def_label(cliques__inverse_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(cliques__add_arcs_to_4_0,
		cliques__inverse_2_4_0_i11);
MR_def_label(cliques__inverse_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(cliques__inverse_2_4_0_i23);
	}
MR_def_label(cliques__inverse_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__dense_bitset__init_0_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(cliques_module8)
	MR_init_entry1(cliques__topological_sort_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cliques__topological_sort_2_0);
	MR_init_label7(cliques__topological_sort_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'topological_sort'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cliques__topological_sort_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(cliques__mklist_3_0,
		cliques__topological_sort_2_0_i2);
MR_def_label(cliques__topological_sort_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__dense_bitset__init_0_0,
		cliques__topological_sort_2_0_i3);
MR_def_label(cliques__topological_sort_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(cliques__dfs_graph_2_5_0,
		cliques__topological_sort_2_0_i4);
MR_def_label(cliques__topological_sort_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(cliques__init_1_0,
		cliques__topological_sort_2_0_i5);
MR_def_label(cliques__topological_sort_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(cliques__inverse_2_4_0,
		cliques__topological_sort_2_0_i6);
MR_def_label(cliques__topological_sort_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__dense_bitset__init_0_0,
		cliques__topological_sort_2_0_i7);
MR_def_label(cliques__topological_sort_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(cliques__tsort_5_0,
		cliques__topological_sort_2_0_i8);
MR_def_label(cliques__topological_sort_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(cliques_module9)
	MR_init_entry1(__Unify___cliques__graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___cliques__graph_0_0);
	MR_init_label2(__Unify___cliques__graph_0_0,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___cliques__graph_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___cliques__graph_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___cliques__graph_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
MR_def_label(__Unify___cliques__graph_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___cliques__graph_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(cliques_module10)
	MR_init_entry1(__Compare___cliques__graph_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___cliques__graph_0_0);
	MR_init_label4(__Compare___cliques__graph_0_0,3,2,5,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___cliques__graph_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___cliques__graph_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___cliques__graph_0_0_i2);
MR_def_label(__Compare___cliques__graph_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___cliques__graph_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___cliques__graph_0_0_i5);
MR_def_label(__Compare___cliques__graph_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___cliques__graph_0_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___cliques__graph_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cliques_module11)
	MR_init_entry1(__Unify___cliques__visit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___cliques__visit_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___cliques__visit_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cliques_module12)
	MR_init_entry1(__Compare___cliques__visit_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___cliques__visit_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___cliques__visit_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__cliques_maybe_bunch_0(void)
{
	cliques_module0();
	cliques_module1();
	cliques_module2();
	cliques_module3();
	cliques_module4();
	cliques_module5();
	cliques_module6();
	cliques_module7();
	cliques_module8();
	cliques_module9();
	cliques_module10();
	cliques_module11();
	cliques_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__cliques__init(void);
void mercury__cliques__init_type_tables(void);
void mercury__cliques__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__cliques__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__cliques__init_complexity_procs(void);
#endif

void mercury__cliques__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__cliques_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_cliques__type_ctor_info_graph_0,
		cliques__graph_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_cliques__type_ctor_info_visit_0,
		cliques__visit_0_0);
	mercury__cliques__init_debugger();
}

void mercury__cliques__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_cliques__type_ctor_info_graph_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_cliques__type_ctor_info_visit_0);
	}
}


void mercury__cliques__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__cliques__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__cliques);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__cliques__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
