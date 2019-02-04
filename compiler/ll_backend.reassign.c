/*
** Automatically generated from `reassign.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__reassign__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.reassign.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.reassign.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "ll_backend.reassign.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "ll_backend.reassign.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "ll_backend.reassign.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "ll_backend.reassign.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "ll_backend.reassign.c"
#line 52 "ll_backend.reassign.c"
#include "ll_backend.reassign.mh"

#line 55 "ll_backend.reassign.c"
#line 56 "ll_backend.reassign.c"
#ifndef LL_BACKEND__REASSIGN_DECL_GUARD
#define LL_BACKEND__REASSIGN_DECL_GUARD

#line 60 "ll_backend.reassign.c"
#line 61 "ll_backend.reassign.c"

#endif
#line 64 "ll_backend.reassign.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__reassign__type_ctor_info_known_contents_0,
	mercury_data_ll_backend__reassign__type_ctor_info_dependent_lval_map_0;
MR_decl_label8(ll_backend__reassign__clobber_dependents_5_0, 3,5,6,2,8,13,12,15)
MR_decl_label3(ll_backend__reassign__clobber_dependents_5_0, 16,17,10)
MR_decl_label4(ll_backend__reassign__make_dependent_4_0, 3,5,2,7)
MR_decl_label3(ll_backend__reassign__make_not_dependent_4_0, 3,5,2)
MR_decl_label3(ll_backend__reassign__no_implicit_alias_target_1_0, 11,4,1)
MR_decl_label8(ll_backend__reassign__record_known_6_0, 2,4,3,7,9,10,6,11)
MR_decl_label6(ll_backend__reassign__record_known_6_0, 12,13,14,15,16,17)
MR_decl_label8(ll_backend__reassign__record_known_lval_rval_6_0, 3,5,6,2,7,8,9,10)
MR_decl_label2(ll_backend__reassign__record_known_lval_rval_6_0, 11,12)
MR_decl_label3(ll_backend__reassign__remove_reassign_2_0, 2,3,4)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 130,104,10,11,12,14,16,18)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 15,20,23,21,29,30,32,33)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 35,36,38,39,41,42,44,45)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 48,49,51,53,54,56,57,59)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 64,65,66,67,68,69,72,74)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 76,77,79,82,83,85,86,88)
MR_decl_label8(ll_backend__reassign__remove_reassign_loop_5_0, 89,91,92,94,95,96,97,99)
MR_decl_label4(ll_backend__reassign__remove_reassign_loop_5_0, 100,101,137,3)
MR_decl_label5(ll_backend__reassign__update_embdedded_frame_2_7_0, 13,3,4,5,2)
MR_decl_static(ll_backend__reassign__clobber_dependents_5_0)
MR_decl_static(ll_backend__reassign__update_embdedded_frame_2_7_0)
MR_decl_static(ll_backend__reassign__update_embdedded_frame_5_0)
MR_decl_static(ll_backend__reassign__no_implicit_alias_target_1_0)
MR_decl_static(ll_backend__reassign__record_known_lval_rval_6_0)
MR_decl_static(ll_backend__reassign__record_known_6_0)
MR_decl_static(fn__ll_backend__reassign__this_file_0_0)
MR_decl_static(ll_backend__reassign__remove_reassign_loop_5_0)
MR_def_extern_entry(ll_backend__reassign__remove_reassign_2_0)
MR_decl_static(ll_backend__reassign__clobber_dependent_3_0)
MR_decl_static(ll_backend__reassign__make_not_dependent_4_0)
MR_decl_static(ll_backend__reassign__make_dependent_4_0)
MR_decl_static(__Unify___ll_backend__reassign__dependent_lval_map_0_0)
MR_decl_static(__Compare___ll_backend__reassign__dependent_lval_map_0_0)
MR_decl_static(__Unify___ll_backend__reassign__known_contents_0_0)
MR_decl_static(__Compare___ll_backend__reassign__known_contents_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, rval)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_TAG_COMMON(0,0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__clobber_dependents_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__reassign__clobber_dependents_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(ll_backend__reassign__clobber_dependent_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_lval_rval_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_lval_rval_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_6_0_2;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__reassign__record_known_lval_rval_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__reassign__record_known_lval_rval_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__reassign__record_known_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__reassign__record_known_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_CTOR0_ADDR(ll_backend__llds, lval),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__reassign__type_ctor_info_known_contents_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__reassign__known_contents_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__reassign__known_contents_0_0)),
	"ll_backend.reassign",
	"known_contents",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__reassign__type_ctor_info_dependent_lval_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__reassign__dependent_lval_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__reassign__dependent_lval_map_0_0)),
	"ll_backend.reassign",
	"dependent_lval_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__clobber_dependents_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.reassign",
"ll_backend.reassign",
"clobber_dependent",
3,
0
},
"ll_backend.reassign",
"reassign.m",
378,
"d1;c6;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_lval_rval_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.reassign",
"ll_backend.reassign",
"make_not_dependent",
4,
0
},
"ll_backend.reassign",
"reassign.m",
444,
"d1;c7;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_lval_rval_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.reassign",
"ll_backend.reassign",
"make_dependent",
4,
0
},
"ll_backend.reassign",
"reassign.m",
451,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.reassign",
"ll_backend.reassign",
"make_not_dependent",
4,
0
},
"ll_backend.reassign",
"reassign.m",
444,
"d1;c7;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__reassign__record_known_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.reassign",
"ll_backend.reassign",
"make_dependent",
4,
0
},
"ll_backend.reassign",
"reassign.m",
451,
"d1;c11;"
};

MR_decl_entry(map__search_3_0);
MR_decl_entry(set__fold_4_1);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(ll_backend__code_util__lvals_in_rval_2_0);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ll_backend__reassign_module0)
	MR_init_entry1(ll_backend__reassign__clobber_dependents_5_0);
	MR_init_label8(ll_backend__reassign__clobber_dependents_5_0,3,5,6,2,8,13,12,15)
	MR_init_label3(ll_backend__reassign__clobber_dependents_5_0,16,17,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__clobber_dependents_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__reassign__clobber_dependents_5_0_i3);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__clobber_dependents_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(set__fold_4_1,
		ll_backend__reassign__clobber_dependents_5_0_i5);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__reassign__clobber_dependents_5_0_i6);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__clobber_dependents_5_0_i8);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__clobber_dependents_5_0_i8);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__reassign__clobber_dependents_5_0_i12);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__reassign__clobber_dependents_5_0_i13);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(ll_backend__reassign__clobber_dependents_5_0_i15);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(ll_backend__reassign__clobber_dependents_5_0_i10);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__clobber_dependents_5_0_i16);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__clobber_dependents_5_0_i17);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__reassign__clobber_dependents_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__llds__stack_slot_num_to_lval_2_0);
MR_decl_entry(svmap__delete_3_0);

MR_BEGIN_MODULE(ll_backend__reassign_module1)
	MR_init_entry1(ll_backend__reassign__update_embdedded_frame_2_7_0);
	MR_init_label5(ll_backend__reassign__update_embdedded_frame_2_7_0,13,3,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__update_embdedded_frame_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__reassign__update_embdedded_frame_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(ll_backend__reassign__update_embdedded_frame_2_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__ll_backend__llds__stack_slot_num_to_lval_2_0,
		ll_backend__reassign__update_embdedded_frame_2_7_0_i3);
MR_def_label(ll_backend__reassign__update_embdedded_frame_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__update_embdedded_frame_2_7_0_i4);
MR_def_label(ll_backend__reassign__update_embdedded_frame_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_call_localret_ent(svmap__delete_3_0,
		ll_backend__reassign__update_embdedded_frame_2_7_0_i5);
MR_def_label(ll_backend__reassign__update_embdedded_frame_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__reassign__update_embdedded_frame_2_7_0_i13);
MR_def_label(ll_backend__reassign__update_embdedded_frame_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__reassign_module2)
	MR_init_entry1(ll_backend__reassign__update_embdedded_frame_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__update_embdedded_frame_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(ll_backend__reassign__update_embdedded_frame_2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__reassign_module3)
	MR_init_entry1(ll_backend__reassign__no_implicit_alias_target_1_0);
	MR_init_label3(ll_backend__reassign__no_implicit_alias_target_1_0,11,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__no_implicit_alias_target_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(ll_backend__reassign__no_implicit_alias_target_1_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__reassign__no_implicit_alias_target_1_0_i11);
	}
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2));
	MR_proceed();
MR_def_label(ll_backend__reassign__no_implicit_alias_target_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__reassign__no_implicit_alias_target_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__reassign__no_implicit_alias_target_1_0_i1));
MR_def_label(ll_backend__reassign__no_implicit_alias_target_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);
MR_decl_entry(ll_backend__code_util__lvals_in_lval_2_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(ll_backend__reassign_module4)
	MR_init_entry1(ll_backend__reassign__record_known_lval_rval_6_0);
	MR_init_label8(ll_backend__reassign__record_known_lval_rval_6_0,3,5,6,2,7,8,9,10)
	MR_init_label2(ll_backend__reassign__record_known_lval_rval_6_0,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__record_known_lval_rval_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__reassign__record_known_lval_rval_6_0_i3);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__record_known_lval_rval_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__record_known_lval_rval_6_0_i5);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__reassign__make_not_dependent_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__reassign__record_known_lval_rval_6_0_i6);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__reassign__record_known_lval_rval_6_0_i7);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(5) = MR_sv(3);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lval_2_0,
		ll_backend__reassign__record_known_lval_rval_6_0_i8);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__record_known_lval_rval_6_0_i9);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__reassign__record_known_lval_rval_6_0_i10);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__reassign__make_dependent_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__reassign__record_known_lval_rval_6_0_i11);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(svmap__set_4_0,
		ll_backend__reassign__record_known_lval_rval_6_0_i12);
MR_def_label(ll_backend__reassign__record_known_lval_rval_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(ll_backend__reassign_module5)
	MR_init_entry1(ll_backend__reassign__record_known_6_0);
	MR_init_label8(ll_backend__reassign__record_known_6_0,2,4,3,7,9,10,6,11)
	MR_init_label6(ll_backend__reassign__record_known_6_0,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__record_known_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__record_known_6_0_i2);
MR_def_label(ll_backend__reassign__record_known_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__reassign__record_known_6_0_i4);
MR_def_label(ll_backend__reassign__record_known_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__record_known_6_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__reassign__record_known_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__reassign__record_known_6_0_i7);
MR_def_label(ll_backend__reassign__record_known_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__record_known_6_0_i6);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__record_known_6_0_i9);
MR_def_label(ll_backend__reassign__record_known_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__reassign__make_not_dependent_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__reassign__record_known_6_0_i10);
MR_def_label(ll_backend__reassign__record_known_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ll_backend__reassign__record_known_6_0_i11);
MR_def_label(ll_backend__reassign__record_known_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(5) = MR_sv(4);
MR_def_label(ll_backend__reassign__record_known_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_lval_2_0,
		ll_backend__reassign__record_known_6_0_i12);
MR_def_label(ll_backend__reassign__record_known_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__code_util__lvals_in_rval_2_0,
		ll_backend__reassign__record_known_6_0_i13);
MR_def_label(ll_backend__reassign__record_known_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__append_3_1,
		ll_backend__reassign__record_known_6_0_i14);
MR_def_label(ll_backend__reassign__record_known_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__reassign__make_dependent_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__reassign__record_known_6_0_i15);
MR_def_label(ll_backend__reassign__record_known_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(svmap__set_4_0,
		ll_backend__reassign__record_known_6_0_i16);
MR_def_label(ll_backend__reassign__record_known_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__reassign__record_known_6_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ll_backend__reassign__record_known_lval_rval_6_0);
MR_def_label(ll_backend__reassign__record_known_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__reassign_module6)
	MR_init_entry1(fn__ll_backend__reassign__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__reassign__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("reassign.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__reassign_module7)
	MR_init_entry1(ll_backend__reassign__remove_reassign_loop_5_0);
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,130,104,10,11,12,14,16,18)
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,15,20,23,21,29,30,32,33)
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,35,36,38,39,41,42,44,45)
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,48,49,51,53,54,56,57,59)
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,64,65,66,67,68,69,72,74)
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,76,77,79,82,83,85,86,88)
	MR_init_label8(ll_backend__reassign__remove_reassign_loop_5_0,89,91,92,94,95,96,97,99)
	MR_init_label4(ll_backend__reassign__remove_reassign_loop_5_0,100,101,137,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__remove_reassign_loop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i3);
	}
	MR_r5 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_INT_EQ(MR_tag(MR_r5),3)) {
		MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i10);
	}
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
	}
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r5, 0),
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i104) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i29) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i44) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i104) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i51) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i53) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i56) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i104) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i64) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i72) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i74) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i76) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i79) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i104) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i82) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i85) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i88) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i91) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i94) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__reassign__remove_reassign_loop_5_0_i99));
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__ll_backend__reassign__this_file_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i12);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("remove_reassign_loop: block", 27);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i137);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i16);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i18);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i20);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__reassign__no_implicit_alias_target_1_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i23);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i21);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__reassign__record_known_6_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i30);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i33);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i36);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i39);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i42);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i45);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(3, MR_r5, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i49);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_call_localret_ent(svmap__delete_3_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i69);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i54);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(3, MR_r5, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i57);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_call_localret_ent(svmap__delete_3_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i69);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 5);
	MR_r1 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(ll_backend__reassign__update_embdedded_frame_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i65);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i66);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i67);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_call_localret_ent(svmap__delete_3_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i68);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(svmap__delete_3_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i69);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 2);
	}
	MR_np_call_localret_ent(ll_backend__reassign__update_embdedded_frame_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i77);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i83);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i86);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i89);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i92);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(ll_backend__reassign__clobber_dependents_5_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i95);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i97);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i100);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_loop_5_0_i101);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__reassign__remove_reassign_loop_5_0_i130);
MR_def_label(ll_backend__reassign__remove_reassign_loop_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__reassign_module8)
	MR_init_entry1(ll_backend__reassign__remove_reassign_2_0);
	MR_init_label3(ll_backend__reassign__remove_reassign_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__reassign__remove_reassign_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_2_0_i2);
MR_def_label(ll_backend__reassign__remove_reassign_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__reassign__remove_reassign_2_0_i3);
MR_def_label(ll_backend__reassign__remove_reassign_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__reassign__remove_reassign_loop_5_0,
		ll_backend__reassign__remove_reassign_2_0_i4);
MR_def_label(ll_backend__reassign__remove_reassign_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__reverse_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__reassign_module9)
	MR_init_entry1(ll_backend__reassign__clobber_dependent_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__clobber_dependent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_np_tailcall_ent(map__delete_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__delete_3_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(ll_backend__reassign_module10)
	MR_init_entry1(ll_backend__reassign__make_not_dependent_4_0);
	MR_init_label3(ll_backend__reassign__make_not_dependent_4_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__make_not_dependent_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__reassign__make_not_dependent_4_0_i3);
MR_def_label(ll_backend__reassign__make_not_dependent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__make_not_dependent_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__reassign__make_not_dependent_4_0_i5);
MR_def_label(ll_backend__reassign__make_not_dependent_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_update_4_0);
MR_def_label(ll_backend__reassign__make_not_dependent_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__reassign_module11)
	MR_init_entry1(ll_backend__reassign__make_dependent_4_0);
	MR_init_label4(ll_backend__reassign__make_dependent_4_0,3,5,2,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__reassign__make_dependent_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__reassign__make_dependent_4_0_i3);
MR_def_label(ll_backend__reassign__make_dependent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__reassign__make_dependent_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__reassign__make_dependent_4_0_i5);
MR_def_label(ll_backend__reassign__make_dependent_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_update_4_0);
MR_def_label(ll_backend__reassign__make_dependent_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		ll_backend__reassign__make_dependent_4_0_i7);
MR_def_label(ll_backend__reassign__make_dependent_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__reassign_module12)
	MR_init_entry1(__Unify___ll_backend__reassign__dependent_lval_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__reassign__dependent_lval_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
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

MR_BEGIN_MODULE(ll_backend__reassign_module13)
	MR_init_entry1(__Compare___ll_backend__reassign__dependent_lval_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__reassign__dependent_lval_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__reassign_module14)
	MR_init_entry1(__Unify___ll_backend__reassign__known_contents_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__reassign__known_contents_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__reassign_module15)
	MR_init_entry1(__Compare___ll_backend__reassign__known_contents_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__reassign__known_contents_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__reassign_maybe_bunch_0(void)
{
	ll_backend__reassign_module0();
	ll_backend__reassign_module1();
	ll_backend__reassign_module2();
	ll_backend__reassign_module3();
	ll_backend__reassign_module4();
	ll_backend__reassign_module5();
	ll_backend__reassign_module6();
	ll_backend__reassign_module7();
	ll_backend__reassign_module8();
	ll_backend__reassign_module9();
	ll_backend__reassign_module10();
	ll_backend__reassign_module11();
	ll_backend__reassign_module12();
	ll_backend__reassign_module13();
	ll_backend__reassign_module14();
	ll_backend__reassign_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__reassign__init(void);
void mercury__ll_backend__reassign__init_type_tables(void);
void mercury__ll_backend__reassign__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__reassign__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__reassign__init_complexity_procs(void);
#endif

void mercury__ll_backend__reassign__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__reassign_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__reassign__type_ctor_info_known_contents_0,
		ll_backend__reassign__known_contents_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__reassign__type_ctor_info_dependent_lval_map_0,
		ll_backend__reassign__dependent_lval_map_0_0);
	mercury__ll_backend__reassign__init_debugger();
}

void mercury__ll_backend__reassign__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__reassign__type_ctor_info_known_contents_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__reassign__type_ctor_info_dependent_lval_map_0);
	}
}


void mercury__ll_backend__reassign__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__reassign__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__reassign);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__reassign__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
