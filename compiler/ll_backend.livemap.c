/*
** Automatically generated from `livemap.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.livemap.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.livemap.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.livemap.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.livemap.c"
#line 40 "ll_backend.livemap.c"
#include "ll_backend.livemap.mh"

#line 43 "ll_backend.livemap.c"
#line 44 "ll_backend.livemap.c"
#ifndef LL_BACKEND__LIVEMAP_DECL_GUARD
#define LL_BACKEND__LIVEMAP_DECL_GUARD

#line 48 "ll_backend.livemap.c"
#line 49 "ll_backend.livemap.c"

#endif
#line 52 "ll_backend.livemap.c"

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
	mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0,
	mercury_data_ll_backend__livemap__type_ctor_info_livemap_0;
MR_decl_label6(ll_backend__livemap__build_live_lval_info_7_0, 3,14,32,7,8,4)
MR_decl_label2(ll_backend__livemap__build_livemap_2_0, 2,3)
MR_decl_label8(ll_backend__livemap__build_livemap_fixpoint_3_0, 26,2,3,4,7,8,9,11)
MR_decl_label1(ll_backend__livemap__build_livemap_fixpoint_3_0, 6)
MR_decl_label8(ll_backend__livemap__build_livemap_foreign_proc_components_5_0, 68,7,10,13,33,14,11,20)
MR_decl_label6(ll_backend__livemap__build_livemap_foreign_proc_components_5_0, 23,24,25,21,26,3)
MR_decl_label5(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0, 25,17,6,8,3)
MR_decl_label6(ll_backend__livemap__equal_livemaps_keys_3_0, 19,4,5,6,2,1)
MR_decl_label3(ll_backend__livemap__livemap_do_build_6_0, 11,12,3)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 108,157,8,10,159,12,160,15)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 16,161,19,162,22,163,24,25)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 26,30,31,28,38,32,39,43)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 44,46,164,49,50,165,166,55)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 58,57,63,64,66,67,167,69)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 70,168,169,75,76,170,79,80)
MR_decl_label8(ll_backend__livemap__livemap_do_build_instr_9_0, 171,172,173,87,88,174,175,93)
MR_decl_label7(ll_backend__livemap__livemap_do_build_instr_9_0, 94,176,97,177,101,178,104)
MR_decl_label3(ll_backend__livemap__livemap_insert_label_livevals_4_0, 3,5,2)
MR_decl_label4(ll_backend__livemap__livemap_insert_proper_livevals_3_0, 18,4,6,3)
MR_decl_label5(ll_backend__livemap__livemap_special_code_addr_2_0, 4,5,6,13,17)
MR_decl_label7(ll_backend__livemap__look_for_livevals_7_0, 2,6,7,8,3,11,9)
MR_decl_label3(ll_backend__livemap__make_live_in_mem_ref_3_0, 13,21,7)
MR_decl_label8(ll_backend__livemap__make_live_in_rval_3_0, 4,5,7,9,11,13,15,19)
MR_decl_label3(ll_backend__livemap__make_live_in_rval_3_0, 20,17,16)
MR_decl_label3(ll_backend__livemap__make_live_in_rvals_3_0, 11,4,3)
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
MR_def_extern_entry(__Unify___ll_backend__livemap__livemap_0_0)
MR_def_extern_entry(__Compare___ll_backend__livemap__livemap_0_0)
MR_def_extern_entry(__Unify___ll_backend__livemap__lvalset_0_0)
MR_def_extern_entry(__Compare___ll_backend__livemap__lvalset_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_0 mercury_common_0[3] =
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
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
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
4,
MR_TAG_COMMON(0,1,1)
},
{
3,
MR_TAG_COMMON(0,1,3)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
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
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

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
	{ (void *)&mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0
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
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 },
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
"livemap_insert_label_livevals",
4,
0
},
"ll_backend.livemap",
"livemap.m",
193,
"d1;c11;d9;c6;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(set__equal_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module0)
	MR_init_entry1(ll_backend__livemap__equal_livemaps_keys_3_0);
	MR_init_label6(ll_backend__livemap__equal_livemaps_keys_3_0,19,4,5,6,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__equal_livemaps_keys_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__equal_livemaps_keys_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__livemap__equal_livemaps_keys_3_0_i4);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__livemap__equal_livemaps_keys_3_0_i5);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set__equal_2_0,
		ll_backend__livemap__equal_livemaps_keys_3_0_i6);
MR_def_label(ll_backend__livemap__equal_livemaps_keys_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__equal_livemaps_keys_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__livemap__equal_livemaps_keys_3_0_i19);
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
	MR_init_label4(ll_backend__livemap__livemap_insert_proper_livevals_3_0,18,4,6,3)
MR_BEGIN_CODE

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
	while (1) {
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i3);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i4);
	}
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	continue;
	}
	break; } /* end while */
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__livemap_insert_proper_livevals_3_0_i6);
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__livemap_insert_proper_livevals_3_0_i18);
MR_def_label(ll_backend__livemap__livemap_insert_proper_livevals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module2)
	MR_init_entry1(ll_backend__livemap__build_live_lval_info_7_0);
	MR_init_label6(ll_backend__livemap__build_live_lval_info_7_0,3,14,32,7,8,4)
MR_BEGIN_CODE

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
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i32);
	}
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__build_live_lval_info_7_0_i7);
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0,
		ll_backend__livemap__build_live_lval_info_7_0_i8);
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__livemap__build_live_lval_info_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_live_lval_info_7_0_i14);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module3)
	MR_init_entry1(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0);
	MR_init_label5(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,25,17,6,8,3)
MR_BEGIN_CODE

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
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i3);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 4);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i17);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0_i25);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module4)
	MR_init_entry1(ll_backend__livemap__build_livemap_foreign_proc_components_5_0);
	MR_init_label8(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,68,7,10,13,33,14,11,20)
	MR_init_label6(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,23,24,25,21,26,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__build_livemap_foreign_proc_components_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i3);
	}
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i33) MR_AND
		MR_LABEL_AP(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i10));
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ll_backend__livemap__build_livemap_foreign_proc_inputs_3_0,
		ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i25);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i11);
	}
	MR_r5 = MR_ctfield(3, MR_r4, 2);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i13);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i14);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 3);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i26);
	}
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i33);
	}
	MR_r5 = MR_ctfield(3, MR_r4, 2);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i20);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i21);
	}
	MR_r5 = MR_ctfield(3, MR_r4, 3);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i23);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(1, MR_r5, 0);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i24);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0,
		ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i25);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 4);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i26);
	}
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
	}
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_foreign_proc_components_5_0_i68);
MR_def_label(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module5)
	MR_init_entry1(fn__ll_backend__livemap__this_file_0_0);
MR_BEGIN_CODE

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
	MR_init_label7(ll_backend__livemap__look_for_livevals_7_0,2,6,7,8,3,11,9)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__livemap__look_for_livevals_7_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_proper_livevals_3_0,
		ll_backend__livemap__look_for_livevals_7_0_i8);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ll_backend__livemap__look_for_livevals_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" not preceded by livevals", 25);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__livemap__look_for_livevals_7_0_i11);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("livemap.m", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__look_for_livevals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module7)
	MR_init_entry1(ll_backend__livemap__livemap_special_code_addr_2_0);
	MR_init_label5(ll_backend__livemap__livemap_special_code_addr_2_0,4,5,6,13,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_special_code_addr_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i13));
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i17) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_special_code_addr_2_0_i17));
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,2);
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_special_code_addr_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_special_code_addr_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module8)
	MR_init_entry1(ll_backend__livemap__make_live_in_rvals_3_0);
	MR_init_label3(ll_backend__livemap__make_live_in_rvals_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__make_live_in_rvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__make_live_in_rvals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rvals_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__make_live_in_rvals_3_0_i4);
MR_def_label(ll_backend__livemap__make_live_in_rvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ll_backend__livemap__make_live_in_rvals_3_0_i11);
MR_def_label(ll_backend__livemap__make_live_in_rvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__lval_access_rvals_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module9)
	MR_init_entry1(ll_backend__livemap__make_live_in_rval_3_0);
	MR_init_label8(ll_backend__livemap__make_live_in_rval_3_0,4,5,7,9,11,13,15,19)
	MR_init_label3(ll_backend__livemap__make_live_in_rval_3_0,20,17,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__make_live_in_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i15));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i5);
	}
	MR_r1 = MR_tempr1;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__make_live_in_rval_3_0_i9);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__make_live_in_rval_3_0_i7);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__make_live_in_rval_3_0_i9);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_rvals_3_0);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("livemap.m", 9);
	MR_r2 = (MR_Word) MR_string_const("var rval should not propagate to the optimizer", 46);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i15));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i16);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i17);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_rval_3_0_i19);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_mem_ref_3_0);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__make_live_in_rval_3_0_i20);
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i15));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__livemap__make_live_in_rval_3_0_i15));
MR_def_label(ll_backend__livemap__make_live_in_rval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module10)
	MR_init_entry1(ll_backend__livemap__make_live_in_mem_ref_3_0);
	MR_init_label3(ll_backend__livemap__make_live_in_mem_ref_3_0,13,21,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__make_live_in_mem_ref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_mem_ref_3_0_i13);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__livemap__make_live_in_mem_ref_3_0_i21);
	}
MR_def_label(ll_backend__livemap__make_live_in_mem_ref_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_rval_3_0);
MR_def_label(ll_backend__livemap__make_live_in_mem_ref_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__make_live_in_mem_ref_3_0_i7);
MR_def_label(ll_backend__livemap__make_live_in_mem_ref_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ll_backend__livemap__make_live_in_rval_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ll_backend__livemap_module11)
	MR_init_entry1(ll_backend__livemap__livemap_insert_label_livevals_4_0);
	MR_init_label3(ll_backend__livemap__livemap_insert_label_livevals_4_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_insert_label_livevals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__livemap__livemap_insert_label_livevals_4_0_i3);
MR_def_label(ll_backend__livemap__livemap_insert_label_livevals_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_insert_label_livevals_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__livemap__livemap_insert_label_livevals_4_0_i5);
MR_def_label(ll_backend__livemap__livemap_insert_label_livevals_4_0,5)
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

MR_decl_entry(set__delete_3_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(fn__ll_backend__opt_util__livevals_addr_1_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(ll_backend__livemap_module12)
	MR_init_entry1(ll_backend__livemap__livemap_do_build_instr_9_0);
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,108,157,8,10,159,12,160,15)
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,16,161,19,162,22,163,24,25)
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,26,30,31,28,38,32,39,43)
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,44,46,164,49,50,165,166,55)
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,58,57,63,64,66,67,167,69)
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,70,168,169,75,76,170,79,80)
	MR_init_label8(ll_backend__livemap__livemap_do_build_instr_9_0,171,172,173,87,88,174,175,93)
	MR_init_label7(ll_backend__livemap__livemap_do_build_instr_9_0,94,176,97,177,101,178,104)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_do_build_instr_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i157) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i10));
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_proceed();
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i8);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("livevals found in backward scan in build_livemap", 48);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r6, 0),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i159) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i160) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i161) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i162) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i163) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i164) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i165) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i166) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i167) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i168) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i169) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i170) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i171) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i172) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i173) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i174) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i175) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i176) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i177) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i178) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i108));
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i12);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("block found in backward scan in build_livemap", 45);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i15);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i16);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,16)
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
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("call", 4);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(ll_backend__livemap__look_for_livevals_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i19);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r5;
	MR_r4 = MR_ctfield(3, MR_r6, 1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i22);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r6, 1);
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__livevals_addr_1_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i24);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("goto", 4);
	MR_np_call_localret_ent(ll_backend__livemap__look_for_livevals_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i25);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i44);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i28);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i30);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_label_livevals_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i31);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i44);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i32);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__livemap__livemap_do_build_instr_9_0_i38));
	}
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i44);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i39);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unknown label type in build_livemap", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i43);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i44);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i46);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i67);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i49);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i50);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__livemap__livemap_insert_label_livevals_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ll_backend__livemap__build_live_lval_info_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i104);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("if_val", 6);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ll_backend__livemap__look_for_livevals_7_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i55);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i57);
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
		ll_backend__livemap__livemap_do_build_instr_9_0_i58);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i63);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_insert_label_livevals_4_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i63);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__union_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i63);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_special_code_addr_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i64);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_instr_9_0_i66);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i67);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i69);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i70);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(3, MR_r6, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i75);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i76);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,76)
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
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i79);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i80);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(3, MR_r6, 1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(3, MR_r6, 1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i87);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i88);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r6, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_r6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__delete_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i93);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__lval_access_rvals_2_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i94);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rvals_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r6, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ll_backend__livemap__make_live_in_rval_3_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i97);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__livemap__this_file_0_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i101);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_livemap_instr: decr_sp_and_return", 39);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r6, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ll_backend__livemap__build_livemap_foreign_proc_components_5_0,
		ll_backend__livemap__livemap_do_build_instr_9_0_i104);
MR_def_label(ll_backend__livemap__livemap_do_build_instr_9_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__livemap_module13)
	MR_init_entry1(ll_backend__livemap__livemap_do_build_6_0);
	MR_init_label3(ll_backend__livemap__livemap_do_build_6_0,11,12,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__livemap_do_build_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__livemap_do_build_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__livemap__livemap_do_build_instr_9_0,
		ll_backend__livemap__livemap_do_build_6_0_i12);
MR_def_label(ll_backend__livemap__livemap_do_build_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(ll_backend__livemap__livemap_do_build_6_0_i11);
MR_def_label(ll_backend__livemap__livemap_do_build_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__livemap_module14)
	MR_init_entry1(ll_backend__livemap__build_livemap_fixpoint_3_0);
	MR_init_label8(ll_backend__livemap__build_livemap_fixpoint_3_0,26,2,3,4,7,8,9,11)
	MR_init_label1(ll_backend__livemap__build_livemap_fixpoint_3_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__livemap__build_livemap_fixpoint_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i2);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__livemap__livemap_do_build_6_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i3);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i7);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i8);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i9);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__livemap__equal_livemaps_keys_3_0,
		ll_backend__livemap__build_livemap_fixpoint_3_0_i11);
MR_def_label(ll_backend__livemap__build_livemap_fixpoint_3_0,11)
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
	MR_GOTO_LAB(ll_backend__livemap__build_livemap_fixpoint_3_0_i26);
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
	MR_init_label2(ll_backend__livemap__build_livemap_2_0,2,3)
MR_BEGIN_CODE

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
		ll_backend__livemap__build_livemap_2_0_i2);
MR_def_label(ll_backend__livemap__build_livemap_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__livemap__build_livemap_2_0_i3);
MR_def_label(ll_backend__livemap__build_livemap_2_0,3)
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

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__livemap_module16)
	MR_init_entry1(__Unify___ll_backend__livemap__livemap_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ll_backend__livemap_module17)
	MR_init_entry1(__Compare___ll_backend__livemap__livemap_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ll_backend__livemap_module18)
	MR_init_entry1(__Unify___ll_backend__livemap__lvalset_0_0);
MR_BEGIN_CODE

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
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__livemap_module19)
	MR_init_entry1(__Compare___ll_backend__livemap__lvalset_0_0);
MR_BEGIN_CODE

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
	MR_np_tailcall_ent(__Compare___list__list_1_0);
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__livemap__init(void);
void mercury__ll_backend__livemap__init_type_tables(void);
void mercury__ll_backend__livemap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__livemap__write_out_proc_statics(FILE *fp);
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
		mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0,
		ll_backend__livemap__lvalset_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__livemap__type_ctor_info_livemap_0,
		ll_backend__livemap__livemap_0_0);
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
		&mercury_data_ll_backend__livemap__type_ctor_info_lvalset_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__livemap__type_ctor_info_livemap_0);
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

void mercury__ll_backend__livemap__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__livemap__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
