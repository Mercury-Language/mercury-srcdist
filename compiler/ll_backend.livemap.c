/*
** Automatically generated from `livemap.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__livemap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.livemap.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.livemap.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.livemap.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.livemap.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.livemap.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.livemap.c"
#line 48 "ll_backend.livemap.c"
#include "ll_backend.livemap.mh"

#line 51 "ll_backend.livemap.c"
#line 52 "ll_backend.livemap.c"
#ifndef LL_BACKEND__LIVEMAP_DECL_GUARD
#define LL_BACKEND__LIVEMAP_DECL_GUARD

#line 56 "ll_backend.livemap.c"
#line 57 "ll_backend.livemap.c"

#endif
#line 60 "ll_backend.livemap.c"

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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__livemap__type_ctor_info_livemap_0,
	mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0;
MR_decl_label6(ll_backend__livemap__build_live_lval_info_7_0, 3,4,15,33,10,11)
MR_decl_label2(ll_backend__livemap__build_livemap_2_0, 3,4)
MR_decl_label9(ll_backend__livemap__build_livemap_fixpoint_3_0, 30,2,3,8,9,10,12,6,5)
MR_decl_label10(ll_backend__livemap__build_livemap_foreign_proc_components_5_0, 86,3,6,31,23,32,12,14,13,18)
MR_decl_label3(ll_backend__livemap__build_livemap_foreign_proc_components_5_0, 19,20,5)
MR_decl_label5(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0, 25,3,17,6,8)
MR_decl_label6(ll_backend__livemap__equal_livemaps_keys_3_0, 20,5,6,7,2,1)
MR_decl_label3(ll_backend__livemap__livemap_do_build_6_0, 10,3,12)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 148,208,101,147,217,211,6,210,11,216)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 16,17,231,24,232,28,224,215,34,35)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 48,42,43,44,39,40,51,47,37,36)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 54,56,218,59,63,61,68,69,71,72)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 221,74,75,76,77,156,79,78,82,83)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 167,85,86,87,212,93,94,214,99,213)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 104,222,106,107,229,110,111,230,225,119)
MR_decl_label10(ll_backend__livemap__livemap_do_build_instr_9_0, 121,226,228,223,220,219,135,136,227,139)
MR_decl_label1(ll_backend__livemap__livemap_do_build_instr_9_0, 140)
MR_decl_label3(ll_backend__livemap__livemap_insert_label_livevals_4_0, 4,6,2)
MR_decl_label4(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0, 24,6,8,4)
MR_decl_label4(ll_backend__livemap__livemap_insert_proper_livevals_3_0, 18,3,4,6)
MR_decl_label5(ll_backend__livemap__livemap_special_code_addr_2_0, 21,24,28,5,11)
MR_decl_label7(ll_backend__livemap__look_for_livevals_7_0, 2,6,7,8,3,10,11)
MR_decl_label2(ll_backend__livemap__make_live_in_mem_ref_3_0, 6,3)
MR_decl_label10(ll_backend__livemap__make_live_in_rval_3_0, 7,8,10,12,20,16,25,3,4,6)
MR_decl_label1(ll_backend__livemap__make_live_in_rval_3_0, 18)
MR_decl_label3(ll_backend__livemap__make_live_in_rvals_3_0, 10,3,4)
MR_decl_static(ll_backend__livemap__equal_livemaps_keys_3_0)
MR_decl_static(ll_backend__livemap__livemap_insert_proper_livevals_3_0)
MR_decl_static(ll_backend__livemap__build_live_lval_info_7_0)
MR_decl_static(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0)
MR_decl_static(ll_backend__livemap__build_livemap_foreign_proc_components_5_0)
MR_decl_static(fn__ll_backend__livemap__this_file_0_0)
MR_decl_static(ll_backend__livemap__look_for_livevals_7_0)
MR_decl_static(ll_backend__livemap__livemap_special_code_addr_2_0)
MR_decl_static(ll_backend__livemap__make_live_in_rvals_3_0)
MR_decl_static(ll_backend__livemap__make_live_in_rval_3_0)
MR_decl_static(ll_backend__livemap__make_live_in_mem_ref_3_0)
MR_decl_static(ll_backend__livemap__livemap_insert_label_livevals_4_0)
MR_decl_static(ll_backend__livemap__livemap_do_build_instr_9_0)
MR_decl_static(ll_backend__livemap__livemap_do_build_6_0)
MR_decl_static(ll_backend__livemap__build_livemap_fixpoint_3_0)
MR_def_extern_entry(ll_backend__livemap__build_livemap_2_0)
MR_decl_static(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0)
MR_def_extern_entry(__Unify___ll_backend__livemap__livemap_0_0)
MR_def_extern_entry(__Compare___ll_backend__livemap__livemap_0_0)
MR_def_extern_entry(__Unify___ll_backend__livemap__lvalset_0_0)
MR_def_extern_entry(__Compare___ll_backend__livemap__lvalset_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 1)
},
{
MR_TAG_COMMON(3,2,0)
},
{
MR_tbmkword(0, 2)
},
{
MR_TAG_COMMON(3,2,1)
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
5,
MR_TAG_COMMON(0,1,1)
},
{
3,
MR_TAG_COMMON(0,1,3)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(0,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__livemap__livemap_do_build_instr_9_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__livemap__livemap_do_build_instr_9_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,0),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__livemap__type_ctor_info_livemap_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__livemap__livemap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__livemap__livemap_0_0)),
	"ll_backend.livemap",
	"livemap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__livemap__lvalset_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__livemap__lvalset_0_0)),
	"ll_backend.livemap",
	"lvalset",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__livemap__livemap_do_build_instr_9_0_1 = {
{
MR_PREDICATE,
"ll_backend.livemap",
"ll_backend.livemap",
"livemap_insert_maybe_label_livevals",
4,
0
},
"ll_backend.livemap",
"livemap.m",
211,
"d1;c11;d9;c6;"
};


MR_decl_entry(map__lookup_3_0);
MR_decl_entry(set__equal_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module0)
	MR_init_entry1(ll_backend__livemap__equal_livemaps_keys_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__equal_livemaps_keys_3_0);
	MR_init_label6(ll_backend__livemap__equal_livemaps_keys_3_0,20,5,6,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_livemaps_keys'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__equal_livemaps_keys_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__equal_livemaps_keys_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__livemap__equal_livemaps_keys_3_0_i5);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__livemap__equal_livemaps_keys_3_0_i6);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__equal_2_0,
		ll_backend__livemap__equal_livemaps_keys_3_0_i7);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__equal_livemaps_keys_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__livemap__equal_livemaps_keys_3_0_i20);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__livemap_module1)
	MR_init_entry1(ll_backend__livemap__livemap_insert_proper_livevals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__livemap_insert_proper_livevals_3_0);
	MR_init_label4(ll_backend__livemap__livemap_insert_proper_livevals_3_0,18,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livemap_insert_proper_livevals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_insert_proper_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i4);
	}
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i18);
	}
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__livemap_insert_proper_livevals_3_0_i6);
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module2)
	MR_init_entry1(ll_backend__livemap__build_live_lval_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__build_live_lval_info_7_0);
	MR_init_label6(ll_backend__livemap__build_live_lval_info_7_0,3,4,15,33,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_live_lval_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__build_live_lval_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i4);
	}
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i15);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i33);
	}
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__build_live_lval_info_7_0_i10);
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0,
		ll_backend__livemap__build_live_lval_info_7_0_i11);
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module3)
	MR_init_entry1(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0);
	MR_init_label5(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,25,3,17,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_livemap_foreign_proc_inputs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 4);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i17);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,8)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i6);
	}
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i25);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i8);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module4)
	MR_init_entry1(ll_backend__livemap__build_livemap_foreign_proc_components_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__build_livemap_foreign_proc_components_5_0);
	MR_init_label10(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,86,3,6,31,23,32,12,14,13,18)
	MR_init_label3(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,19,20,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_livemap_foreign_proc_components'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__build_livemap_foreign_proc_components_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i31));
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,
		ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i20);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r6 = MR_tfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i32);
	}
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i23);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i5);
	}
	MR_r5 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 3);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i14);
	}
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i5);
	}
	MR_r5 = MR_tfield(3, MR_r4, 2);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i12);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i13);
	}
	MR_r5 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i14);
	}
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r4, 3);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i18);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i19);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0,
		ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i20);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i86);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module5)
	MR_init_entry1(fn__ll_backend__livemap__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__livemap__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__livemap__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("livemap.m", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module6)
	MR_init_entry1(ll_backend__livemap__look_for_livevals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__look_for_livevals_7_0);
	MR_init_label7(ll_backend__livemap__look_for_livevals_7_0,2,6,7,8,3,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'look_for_livevals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__look_for_livevals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__livemap__look_for_livevals_7_0_i2);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__look_for_livevals_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__livemap__look_for_livevals_7_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__look_for_livevals_7_0_i6);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__livemap__look_for_livevals_7_0_i7);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0,
		ll_backend__livemap__look_for_livevals_7_0_i8);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__livemap__look_for_livevals_7_0_i10);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" not preceded by livevals", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__livemap__look_for_livevals_7_0_i11);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("livemap.m", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module7)
	MR_init_entry1(ll_backend__livemap__livemap_special_code_addr_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__livemap_special_code_addr_2_0);
	MR_init_label5(ll_backend__livemap__livemap_special_code_addr_2_0,21,24,28,5,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livemap_special_code_addr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_special_code_addr_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i24));
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i28) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i28));
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_special_code_addr_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_proceed();
	}
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module8)
	MR_init_entry1(ll_backend__livemap__make_live_in_rvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__make_live_in_rvals_3_0);
	MR_init_label3(ll_backend__livemap__make_live_in_rvals_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_live_in_rvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__make_live_in_rvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__make_live_in_rvals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rvals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__livemap__make_live_in_rvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__make_live_in_rvals_3_0_i4);
MR_def_label(ll_backend__livemap__make_live_in_rvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__make_live_in_rvals_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__lval_access_rvals_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module9)
	MR_init_entry1(ll_backend__livemap__make_live_in_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__make_live_in_rval_3_0);
	MR_init_label10(ll_backend__livemap__make_live_in_rval_3_0,7,8,10,12,20,16,25,3,4,6)
	MR_init_label1(ll_backend__livemap__make_live_in_rval_3_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_live_in_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__make_live_in_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i25));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i8);
	}
	MR_r1 = MR_tempr1;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__make_live_in_rval_3_0_i12);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__make_live_in_rval_3_0_i10);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__make_live_in_rval_3_0_i12);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_rvals_3_0);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("livemap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("var rval should not propagate to the optimizer", 46);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i25));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i6);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i18);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_mem_ref_3_0);
	}
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__make_live_in_rval_3_0_i4);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i25));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i20) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i16) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i25));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module10)
	MR_init_entry1(ll_backend__livemap__make_live_in_mem_ref_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__make_live_in_mem_ref_3_0);
	MR_init_label2(ll_backend__livemap__make_live_in_mem_ref_3_0,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_live_in_mem_ref'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__make_live_in_mem_ref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_mem_ref_3_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_mem_ref_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__make_live_in_mem_ref_3_0_i6);
MR_def_label(ll_backend__livemap__make_live_in_mem_ref_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_rval_3_0);
	}
MR_def_label(ll_backend__livemap__make_live_in_mem_ref_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_rval_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ll_backend__livemap_module11)
	MR_init_entry1(ll_backend__livemap__livemap_insert_label_livevals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__livemap_insert_label_livevals_4_0);
	MR_init_label3(ll_backend__livemap__livemap_insert_label_livevals_4_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livemap_insert_label_livevals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_insert_label_livevals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__livemap__livemap_insert_label_livevals_4_0_i4);
MR_def_label(ll_backend__livemap__livemap_insert_label_livevals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_label_livevals_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__livemap_insert_label_livevals_4_0_i6);
MR_def_label(ll_backend__livemap__livemap_insert_label_livevals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0);
MR_def_label(ll_backend__livemap__livemap_insert_label_livevals_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svset__delete_3_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__ll_backend__opt_util__livevals_addr_1_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(ll_backend__livemap_module12)
	MR_init_entry1(ll_backend__livemap__livemap_do_build_instr_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__livemap_do_build_instr_9_0);
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,148,208,101,147,217,211,6,210,11,216)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,16,17,231,24,232,28,224,215,34,35)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,48,42,43,44,39,40,51,47,37,36)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,54,56,218,59,63,61,68,69,71,72)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,221,74,75,76,77,156,79,78,82,83)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,167,85,86,87,212,93,94,214,99,213)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,104,222,106,107,229,110,111,230,225,119)
	MR_init_label10(ll_backend__livemap__livemap_do_build_instr_9_0,121,226,228,223,220,219,135,136,227,139)
	MR_init_label1(ll_backend__livemap__livemap_do_build_instr_9_0,140)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livemap_do_build_instr'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_do_build_instr_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i208) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i147));
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i101);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("livevals found in backward scan in build_livemap", 48);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r6, 0),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i210) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i211) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i212) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i213) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i214) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i215) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i216) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i217) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i218) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i219) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i220) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i221) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i222) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i223) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i224) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i225) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i226) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i227) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i228) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i229) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i230) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i231) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i232) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i148));
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__livemap__build_live_lval_info_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i28);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i94);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i11);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("block found in backward scan in build_livemap", 45);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i16);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i17);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i24);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_livemap_instr: decr_sp_and_return", 39);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r6, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i28);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r6, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r6, 1);
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__livevals_addr_1_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i34);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("goto", 4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__look_for_livevals_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i35);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i37);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i48) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i42) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i51));
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i47) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i47));
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i43);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_label_livevals_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i44);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i54);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i40);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unknown code_addr type in build_livemap", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i36);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(3, MR_sv(1), 0);
	MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i39);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i54);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i54);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i56);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i72);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("if_val", 6);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__livemap__look_for_livevals_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i59);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i63);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i68);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_label_livevals_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i68);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__union_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i68);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i69);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i71);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i72);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i74);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i75);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i76);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i77);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i79);
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i78);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i156);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i82);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i83);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i85);
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i86);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i87);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i93);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i94);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r5;
	MR_r4 = MR_tfield(3, MR_r6, 1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i99);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("call", 4);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__livemap__look_for_livevals_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i104);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i106);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i107);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i110);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i111);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i119);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i121);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r6, 3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r6, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(3, MR_r6, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i135);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i136);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(svset__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i139);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i140);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i167);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module13)
	MR_init_entry1(ll_backend__livemap__livemap_do_build_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__livemap_do_build_6_0);
	MR_init_label3(ll_backend__livemap__livemap_do_build_6_0,10,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livemap_do_build'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_do_build_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__livemap_do_build_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
MR_def_label(ll_backend__livemap__livemap_do_build_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_do_build_instr_9_0,
		ll_backend__livemap__livemap_do_build_6_0_i12);
MR_def_label(ll_backend__livemap__livemap_do_build_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__livemap_module14)
	MR_init_entry1(ll_backend__livemap__build_livemap_fixpoint_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__build_livemap_fixpoint_3_0);
	MR_init_label9(ll_backend__livemap__build_livemap_fixpoint_3_0,30,2,3,8,9,10,12,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_livemap_fixpoint'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__build_livemap_fixpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i2);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_do_build_6_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i3);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i5);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i8);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i9);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i10);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__livemap__equal_livemaps_keys_3_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i12);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i30);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module15)
	MR_init_entry1(ll_backend__livemap__build_livemap_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__build_livemap_2_0);
	MR_init_label2(ll_backend__livemap__build_livemap_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_livemap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__livemap__build_livemap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__livemap__build_livemap_2_0_i3);
MR_def_label(ll_backend__livemap__build_livemap_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__livemap__build_livemap_2_0_i4);
MR_def_label(ll_backend__livemap__build_livemap_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__build_livemap_fixpoint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module16)
	MR_init_entry1(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0);
	MR_init_label4(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0,24,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'livemap_insert_maybe_label_livevals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0_i24);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0_i6);
MR_def_label(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0_i8);
MR_def_label(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0);
MR_def_label(ll_backend__livemap__livemap_insert_maybe_label_livevals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module17)
	MR_init_entry1(__Unify___ll_backend__livemap__livemap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__livemap__livemap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__livemap__livemap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
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

MR_BEGIN_MODULE(ll_backend__livemap_module18)
	MR_init_entry1(__Compare___ll_backend__livemap__livemap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__livemap__livemap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__livemap__livemap_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
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

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__livemap_module19)
	MR_init_entry1(__Unify___ll_backend__livemap__lvalset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__livemap__lvalset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__livemap__lvalset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__livemap_module20)
	MR_init_entry1(__Compare___ll_backend__livemap__lvalset_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__livemap__lvalset_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__livemap__lvalset_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__livemap_maybe_bunch_0(void)
{
	ll_backend__livemap_module0();
	ll_backend__livemap_module1();
	ll_backend__livemap_module2();
	ll_backend__livemap_module3();
	ll_backend__livemap_module4();
	ll_backend__livemap_module5();
	ll_backend__livemap_module6();
	ll_backend__livemap_module7();
	ll_backend__livemap_module8();
	ll_backend__livemap_module9();
	ll_backend__livemap_module10();
	ll_backend__livemap_module11();
	ll_backend__livemap_module12();
	ll_backend__livemap_module13();
	ll_backend__livemap_module14();
	ll_backend__livemap_module15();
	ll_backend__livemap_module16();
	ll_backend__livemap_module17();
	ll_backend__livemap_module18();
	ll_backend__livemap_module19();
	ll_backend__livemap_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__livemap__init(void);
void mercury__ll_backend__livemap__init_type_tables(void);
void mercury__ll_backend__livemap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__livemap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__livemap__init_complexity_procs(void);
#endif

void mercury__ll_backend__livemap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__livemap_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__livemap__type_ctor_info_livemap_0,
		ll_backend__livemap__livemap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0,
		ll_backend__livemap__lvalset_0_0);
	mercury__ll_backend__livemap__init_debugger();
}

void mercury__ll_backend__livemap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__livemap__type_ctor_info_livemap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0);
	}
}


void mercury__ll_backend__livemap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__livemap__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__livemap);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__livemap__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
