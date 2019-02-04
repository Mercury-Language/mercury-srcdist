/*
** Automatically generated from `goal_store.m'
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
INIT mercury__transform_hlds__goal_store__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.goal_store.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.goal_store.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.goal_store.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.goal_store.c"
#line 40 "transform_hlds.goal_store.c"
#include "transform_hlds.goal_store.mh"

#line 43 "transform_hlds.goal_store.c"
#line 44 "transform_hlds.goal_store.c"
#ifndef TRANSFORM_HLDS__GOAL_STORE_DECL_GUARD
#define TRANSFORM_HLDS__GOAL_STORE_DECL_GUARD

#line 48 "transform_hlds.goal_store.c"
#line 49 "transform_hlds.goal_store.c"

#endif
#line 52 "transform_hlds.goal_store.c"


struct mercury_type_0 {
	MR_Word * f1[3];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Unsigned f1[2];
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
	MR_Word * f7;
	MR_Word * f8;
	MR_Word * f9;
	MR_Integer f10;
};
static const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0,
	mercury_data_transform_hlds__goal_store__type_ctor_info_goal_store_1;
MR_decl_label4(transform_hlds__goal_store__direct_ancestor_6_0, 1,2,3,6)
MR_decl_label1(transform_hlds__goal_store__goal_store_all_ancestors_6_0, 2)
MR_decl_label8(fn__transform_hlds__goal_store__ancestors_2_6_0, 26,6,4,9,10,11,12,13)
MR_decl_label1(fn__transform_hlds__goal_store__ancestors_2_6_0, 29)
MR_def_extern_entry(transform_hlds__goal_store__goal_store_init_1_0)
MR_def_extern_entry(fn__transform_hlds__goal_store__goal_store_init_0_0)
MR_def_extern_entry(transform_hlds__goal_store__goal_store_det_insert_4_0)
MR_def_extern_entry(transform_hlds__goal_store__goal_store_lookup_3_0)
MR_def_extern_entry(transform_hlds__goal_store__goal_store_member_3_0)
MR_decl_static(fn__transform_hlds__goal_store__ancestors_2_6_0)
MR_def_extern_entry(transform_hlds__goal_store__goal_store_all_ancestors_6_0)
MR_decl_static(transform_hlds__goal_store__direct_ancestor_6_0)
MR_def_extern_entry(__Unify___transform_hlds__goal_store__goal_store_1_0)
MR_def_extern_entry(__Compare___transform_hlds__goal_store__goal_store_1_0)
MR_def_extern_entry(__Unify___transform_hlds__goal_store__stored_goal_0_0)
MR_def_extern_entry(__Compare___transform_hlds__goal_store__stored_goal_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__instmap, instmap)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(2,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
1,
MR_COMMON(0,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__goal_store__ancestors_2_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__goal_store__ancestors_2_6_0_1,
MR_COMMON(3,0),
7,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
1,
MR_COMMON(0,2),
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_BOOL_CTOR_ADDR,
1
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0hlds__instmap__type_ctor_info_instmap_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0,
	(MR_TypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__goal_store__stored_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__goal_store__stored_goal_0_0)),
	"transform_hlds.goal_store",
	"stored_goal",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0hlds__instmap__type_ctor_info_instmap_0 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__plain_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0hlds__instmap__type_ctor_info_instmap_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0hlds__instmap__type_ctor_info_instmap_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__goal_store__type_ctor_info_goal_store_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__goal_store__goal_store_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__goal_store__goal_store_1_0)),
	"transform_hlds.goal_store",
	"goal_store",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__pseudo_1__plain_pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0hlds__instmap__type_ctor_info_instmap_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__goal_store__ancestors_2_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.goal_store",
"transform_hlds.goal_store",
"direct_ancestor",
6,
0
},
"transform_hlds.goal_store",
"goal_store.m",
109,
"d1;c7;"
};

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module0)
	MR_init_entry1(transform_hlds__goal_store__goal_store_init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__goal_store__goal_store_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__init_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__goal_store_module1)
	MR_init_entry1(fn__transform_hlds__goal_store__goal_store_init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__goal_store__goal_store_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__init_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module2)
	MR_init_entry1(transform_hlds__goal_store__goal_store_det_insert_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__goal_store__goal_store_det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module3)
	MR_init_entry1(transform_hlds__goal_store__goal_store_lookup_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__goal_store__goal_store_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__member_3_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module4)
	MR_init_entry1(transform_hlds__goal_store__goal_store_member_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__goal_store__goal_store_member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(map__member_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(fn__set__insert_2_0);
MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module5)
	MR_init_entry1(fn__transform_hlds__goal_store__ancestors_2_6_0);
	MR_init_label8(fn__transform_hlds__goal_store__ancestors_2_6_0,26,6,4,9,10,11,12,13)
	MR_init_label1(fn__transform_hlds__goal_store__ancestors_2_6_0,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__goal_store__ancestors_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__goal_store__ancestors_2_6_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(set__member_2_0,
		fn__transform_hlds__goal_store__ancestors_2_6_0_i6);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__goal_store__ancestors_2_6_0_i4);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(fn__transform_hlds__goal_store__ancestors_2_6_0_i26);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(4);
	MR_tempr5 = MR_sv(5);
	MR_tempr6 = MR_sv(6);
	MR_r1 = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr7, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__goal_store__direct_ancestor_6_0);
	MR_tfield(0, MR_tempr7, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr7, 3) = MR_r1;
	MR_tfield(0, MR_tempr7, 4) = MR_tempr1;
	MR_tfield(0, MR_tempr7, 5) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 6) = MR_tempr3;
	MR_tfield(0, MR_tempr7, 7) = MR_tempr4;
	MR_tfield(0, MR_tempr7, 8) = MR_tempr5;
	MR_r2 = MR_tempr7;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		fn__transform_hlds__goal_store__ancestors_2_6_0_i9);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		fn__transform_hlds__goal_store__ancestors_2_6_0_i10);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__append_2_0,
		fn__transform_hlds__goal_store__ancestors_2_6_0_i11);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		fn__transform_hlds__goal_store__ancestors_2_6_0_i12);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_np_localcall_lab(fn__transform_hlds__goal_store__ancestors_2_6_0,
		fn__transform_hlds__goal_store__ancestors_2_6_0_i13);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__set__union_2_0);
MR_def_label(fn__transform_hlds__goal_store__ancestors_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__set__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__goal_store_module6)
	MR_init_entry1(transform_hlds__goal_store__goal_store_all_ancestors_6_0);
	MR_init_label1(transform_hlds__goal_store__goal_store_all_ancestors_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__goal_store__goal_store_all_ancestors_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r1;
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__goal_store__goal_store_all_ancestors_6_0_i2);
MR_def_label(transform_hlds__goal_store__goal_store_all_ancestors_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__transform_hlds__goal_store__ancestors_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(builtin__compare_3_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(hlds__goal_util__can_reorder_goals_old_7_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module7)
	MR_init_entry1(transform_hlds__goal_store__direct_ancestor_6_0);
	MR_init_label4(transform_hlds__goal_store__direct_ancestor_6_0,1,2,3,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__goal_store__direct_ancestor_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.goal_store.direct_ancestor/6-0", 10,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_r3;
	MR_fv(3) = MR_r4;
	MR_fv(4) = MR_r5;
	MR_fv(5) = MR_r6;
	MR_fv(10) = MR_r1;
	MR_fv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_fv(6);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__goal_store__direct_ancestor_6_0_i1);
MR_def_label(transform_hlds__goal_store__direct_ancestor_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_ctfield(0, MR_r1, 0);
	MR_fv(7) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_fv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_fv(1);
	MR_np_call_localret_ent(map__member_3_0,
		transform_hlds__goal_store__direct_ancestor_6_0_i2);
MR_def_label(transform_hlds__goal_store__direct_ancestor_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_fv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_fv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_fv(10);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		transform_hlds__goal_store__direct_ancestor_6_0_i3);
MR_def_label(transform_hlds__goal_store__direct_ancestor_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(9);
	MR_r5 = MR_fv(8);
	MR_r6 = MR_fv(7);
	MR_r7 = MR_fv(6);
	MR_np_call_localret_ent(hlds__goal_util__can_reorder_goals_old_7_0,
		transform_hlds__goal_store__direct_ancestor_6_0_i6);
MR_def_label(transform_hlds__goal_store__direct_ancestor_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module8)
	MR_init_entry1(__Unify___transform_hlds__goal_store__goal_store_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__goal_store__goal_store_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module9)
	MR_init_entry1(__Compare___transform_hlds__goal_store__goal_store_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__goal_store__goal_store_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module10)
	MR_init_entry1(__Unify___transform_hlds__goal_store__stored_goal_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__goal_store__stored_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(transform_hlds__goal_store_module11)
	MR_init_entry1(__Compare___transform_hlds__goal_store__stored_goal_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__goal_store__stored_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__instmap, instmap);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__goal_store_maybe_bunch_0(void)
{
	transform_hlds__goal_store_module0();
	transform_hlds__goal_store_module1();
	transform_hlds__goal_store_module2();
	transform_hlds__goal_store_module3();
	transform_hlds__goal_store_module4();
	transform_hlds__goal_store_module5();
	transform_hlds__goal_store_module6();
	transform_hlds__goal_store_module7();
	transform_hlds__goal_store_module8();
	transform_hlds__goal_store_module9();
	transform_hlds__goal_store_module10();
	transform_hlds__goal_store_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__goal_store__init(void);
void mercury__transform_hlds__goal_store__init_type_tables(void);
void mercury__transform_hlds__goal_store__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__goal_store__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__goal_store__init_complexity_procs(void);
#endif

void mercury__transform_hlds__goal_store__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__goal_store_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0,
		transform_hlds__goal_store__stored_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__goal_store__type_ctor_info_goal_store_1,
		transform_hlds__goal_store__goal_store_1_0);
	mercury__transform_hlds__goal_store__init_debugger();
}

void mercury__transform_hlds__goal_store__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__goal_store__type_ctor_info_stored_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__goal_store__type_ctor_info_goal_store_1);
	}
}


void mercury__transform_hlds__goal_store__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__goal_store__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__goal_store__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
