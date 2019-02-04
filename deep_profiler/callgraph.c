/*
** Automatically generated from `callgraph.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__callgraph__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 248 "../library/array.int"
#include "array.mh"

#line 28 "callgraph.c"
#line 284 "profile.int"
#include "profile.mh"

#line 32 "callgraph.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "callgraph.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 40 "callgraph.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 44 "callgraph.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "callgraph.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "callgraph.c"
#line 53 "callgraph.c"
#include "callgraph.mh"

#line 56 "callgraph.c"
#line 57 "callgraph.c"
#ifndef CALLGRAPH_DECL_GUARD
#define CALLGRAPH_DECL_GUARD

#line 61 "callgraph.c"
#line 62 "callgraph.c"

#endif
#line 65 "callgraph.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];
MR_decl_label2(callgraph__add_call_site_arcs_5_0, 4,3)
MR_decl_label2(callgraph__add_csd_arcs_5_0, 3,2)
MR_decl_label1(callgraph__add_pd_arcs_5_0, 2)
MR_decl_label3(callgraph__find_cliques_2_0, 2,4,5)
MR_decl_label5(callgraph__foldl_2__ho2_6_0, 19,12,4,5,7)
MR_decl_label3(callgraph__foldl__ho1_4_0, 10,2,12)
MR_decl_label3(callgraph__make_clique_indexes_4_0, 3,4,7)
MR_def_extern_entry(callgraph__find_cliques_2_0)
MR_def_extern_entry(callgraph__make_clique_indexes_4_0)
MR_decl_static(callgraph__pdi_to_pdptr_2_0)
MR_decl_static(callgraph__add_pd_arcs_5_0)
MR_decl_static(callgraph__add_csd_arcs_5_0)
MR_decl_static(callgraph__add_call_site_arcs_5_0)
MR_decl_static(callgraph__index_clique_4_0)
MR_decl_static(callgraph__index_clique_member_4_0)
MR_decl_static(callgraph__foldl__ho1_4_0)
MR_decl_static(callgraph__foldl_2__ho2_6_0)

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__find_cliques_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_initial_deep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cliques__type_ctor_info_graph_0;
static const MR_UserClosureId
mercury_data__closure_layout__callgraph__add_pd_arcs_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
static const MR_UserClosureId
mercury_data__closure_layout__callgraph__add_call_site_arcs_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__callgraph__find_cliques_2_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic),
MR_CTOR0_ADDR(cliques, graph),
MR_CTOR0_ADDR(cliques, graph)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__callgraph__add_pd_arcs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_array_slot),
MR_CTOR0_ADDR(cliques, graph),
MR_CTOR0_ADDR(cliques, graph)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__callgraph__add_call_site_arcs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(profile, initial_deep),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, call_site_dynamic_ptr),
MR_CTOR0_ADDR(cliques, graph),
MR_CTOR0_ADDR(cliques, graph)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(profile, clique_ptr)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__make_clique_indexes_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__callgraph__index_clique_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__callgraph__make_clique_indexes_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__callgraph__index_clique_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr),
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(callgraph__index_clique_4_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(callgraph__pdi_to_pdptr_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__foldl_2__ho2_6_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__callgraph__foldl_2__ho2_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(profile, proc_dynamic_ptr)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__callgraph__foldl_2__ho2_6_0_1 = {
{
MR_PREDICATE,
"callgraph",
"callgraph",
"pdi_to_pdptr",
2,
0
},
"callgraph",
"callgraph.m",
102,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__index_clique_4_0_1 = {
{
MR_PREDICATE,
"callgraph",
"callgraph",
"index_clique_member",
4,
0
},
"callgraph",
"callgraph.m",
170,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__add_call_site_arcs_5_0_1 = {
{
MR_PREDICATE,
"callgraph",
"callgraph",
"add_csd_arcs",
5,
0
},
"callgraph",
"callgraph.m",
136,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__add_pd_arcs_5_0_1 = {
{
MR_PREDICATE,
"callgraph",
"callgraph",
"add_call_site_arcs",
5,
0
},
"callgraph",
"callgraph.m",
123,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__make_clique_indexes_4_0_1 = {
{
MR_PREDICATE,
"callgraph",
"callgraph",
"index_clique",
4,
0
},
"callgraph",
"callgraph.m",
164,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__callgraph__find_cliques_2_0_1 = {
{
MR_PREDICATE,
"callgraph",
"callgraph",
"add_pd_arcs",
5,
0
},
"callgraph",
"callgraph.m",
114,
"5"
};


MR_decl_entry(cliques__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cliques__type_ctor_info_graph_0;
MR_decl_entry(array_util__array_foldl_from_1_4_1);
MR_decl_entry(cliques__topological_sort_2_0);

MR_BEGIN_MODULE(callgraph_module0)
	MR_init_entry1(callgraph__find_cliques_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__find_cliques_2_0);
	MR_init_label3(callgraph__find_cliques_2_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_cliques'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__callgraph__find_cliques_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(cliques__init_1_0,
		callgraph__find_cliques_2_0_i2);
MR_def_label(callgraph__find_cliques_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(callgraph__add_pd_arcs_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(cliques, graph);
	MR_r4 = MR_tfield(0, MR_tempr3, 3);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		callgraph__find_cliques_2_0_i4);
MR_def_label(callgraph__find_cliques_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(cliques__topological_sort_2_0,
		callgraph__find_cliques_2_0_i5);
MR_def_label(callgraph__find_cliques_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(callgraph__foldl__ho1_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__array__array_1_0);
MR_decl_entry(array__init_3_0);

MR_BEGIN_MODULE(callgraph_module1)
	MR_init_entry1(callgraph__make_clique_indexes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__make_clique_indexes_4_0);
	MR_init_label3(callgraph__make_clique_indexes_4_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_clique_indexes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__callgraph__make_clique_indexes_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__array__array_1_0,
		callgraph__make_clique_indexes_4_0_i3);
MR_def_label(callgraph__make_clique_indexes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) -1;
	}
	MR_np_call_localret_ent(array__init_3_0,
		callgraph__make_clique_indexes_4_0_i4);
MR_def_label(callgraph__make_clique_indexes_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(array_util__array_foldl_from_1_4_1,
		callgraph__make_clique_indexes_4_0_i7);
MR_def_label(callgraph__make_clique_indexes_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(callgraph_module2)
	MR_init_entry1(callgraph__pdi_to_pdptr_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__pdi_to_pdptr_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pdi_to_pdptr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__pdi_to_pdptr_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
MR_decl_entry(array__to_list_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(callgraph_module3)
	MR_init_entry1(callgraph__add_pd_arcs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__add_pd_arcs_5_0);
	MR_init_label1(callgraph__add_pd_arcs_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_pd_arcs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__add_pd_arcs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_r3, 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		callgraph__add_pd_arcs_5_0_i2);
MR_def_label(callgraph__add_pd_arcs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(callgraph__add_call_site_arcs_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(cliques, graph);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_0;
MR_decl_entry(array__lookup_3_0);
MR_decl_entry(cliques__add_arc_4_0);

MR_BEGIN_MODULE(callgraph_module4)
	MR_init_entry1(callgraph__add_csd_arcs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__add_csd_arcs_5_0);
	MR_init_label2(callgraph__add_csd_arcs_5_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_csd_arcs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__add_csd_arcs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(callgraph__add_csd_arcs_5_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		callgraph__add_csd_arcs_5_0_i3);
MR_def_label(callgraph__add_csd_arcs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(cliques__add_arc_4_0);
	}
MR_def_label(callgraph__add_csd_arcs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;

MR_BEGIN_MODULE(callgraph_module5)
	MR_init_entry1(callgraph__add_call_site_arcs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__add_call_site_arcs_5_0);
	MR_init_label2(callgraph__add_call_site_arcs_5_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_call_site_arcs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__add_call_site_arcs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(callgraph__add_call_site_arcs_5_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(profile, call_site_dynamic_ptr);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_r3, 1);
	MR_np_call_localret_ent(array__to_list_2_0,
		callgraph__add_call_site_arcs_5_0_i4);
MR_def_label(callgraph__add_call_site_arcs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(callgraph__add_csd_arcs_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(cliques, graph);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(callgraph__add_call_site_arcs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_tailcall_ent(callgraph__add_csd_arcs_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array_util__array_list_foldl_4_0);

MR_BEGIN_MODULE(callgraph_module6)
	MR_init_entry1(callgraph__index_clique_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__index_clique_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index_clique'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__index_clique_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(callgraph__index_clique_member_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(array_util__array_list_foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(callgraph_module7)
	MR_init_entry1(callgraph__index_clique_member_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__index_clique_member_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index_clique_member'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__index_clique_member_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, clique_ptr);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(callgraph_module8)
	MR_init_entry1(callgraph__foldl__ho1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__foldl__ho1_4_0);
	MR_init_label3(callgraph__foldl__ho1_4_0,10,2,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__foldl__ho1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(callgraph__foldl__ho1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 100000;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(callgraph__foldl_2__ho2_6_0,
		callgraph__foldl__ho1_4_0_i2);
MR_def_label(callgraph__foldl__ho1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(callgraph__foldl__ho1_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(callgraph__foldl__ho1_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(callgraph__foldl__ho1_4_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(callgraph_module9)
	MR_init_entry1(callgraph__foldl_2__ho2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__callgraph__foldl_2__ho2_6_0);
	MR_init_label5(callgraph__foldl_2__ho2_6_0,19,12,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_2__ho2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(callgraph__foldl_2__ho2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(callgraph__foldl_2__ho2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(callgraph__foldl_2__ho2_6_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(callgraph__foldl_2__ho2_6_0_i4);
	}
MR_def_label(callgraph__foldl_2__ho2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(callgraph__foldl_2__ho2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		callgraph__foldl_2__ho2_6_0_i5);
MR_def_label(callgraph__foldl_2__ho2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		callgraph__foldl_2__ho2_6_0_i7);
MR_def_label(callgraph__foldl_2__ho2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(callgraph__foldl_2__ho2_6_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__callgraph_maybe_bunch_0(void)
{
	callgraph_module0();
	callgraph_module1();
	callgraph_module2();
	callgraph_module3();
	callgraph_module4();
	callgraph_module5();
	callgraph_module6();
	callgraph_module7();
	callgraph_module8();
	callgraph_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__callgraph__init(void);
void mercury__callgraph__init_type_tables(void);
void mercury__callgraph__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__callgraph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__callgraph__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__callgraph__init_threadscope_string_table(void);
#endif

void mercury__callgraph__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__callgraph_maybe_bunch_0();
	mercury__callgraph__init_debugger();
}

void mercury__callgraph__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__callgraph__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__callgraph__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__callgraph);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__callgraph__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__callgraph__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
