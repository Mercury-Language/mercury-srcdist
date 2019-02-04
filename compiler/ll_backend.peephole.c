/*
** Automatically generated from `peephole.m'
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
INIT mercury__ll_backend__peephole__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.peephole.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.peephole.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.peephole.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.peephole.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.peephole.c"
#line 44 "ll_backend.peephole.c"
#include "ll_backend.peephole.mh"

#line 47 "ll_backend.peephole.c"
#line 48 "ll_backend.peephole.c"
#ifndef LL_BACKEND__PEEPHOLE_DECL_GUARD
#define LL_BACKEND__PEEPHOLE_DECL_GUARD

#line 52 "ll_backend.peephole.c"
#line 53 "ll_backend.peephole.c"

#endif
#line 56 "ll_backend.peephole.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1[2];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
};
static const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__peephole__type_ctor_info_pattern_0;
MR_decl_label5(ll_backend__peephole__build_peephole_jump_label_map_4_0, 22,5,4,8,3)
MR_decl_label6(ll_backend__peephole__combine_decr_sp_2_0, 4,11,14,5,6,3)
MR_decl_label8(ll_backend__peephole__peephole_match_4_0, 5,9,11,13,8,18,20,22)
MR_decl_label8(ll_backend__peephole__peephole_match_4_0, 24,27,30,32,33,35,37,29)
MR_decl_label8(ll_backend__peephole__peephole_match_4_0, 39,45,44,42,48,38,54,53)
MR_decl_label8(ll_backend__peephole__peephole_match_4_0, 61,59,67,69,75,76,77,78)
MR_decl_label8(ll_backend__peephole__peephole_match_4_0, 79,85,88,91,94,89,96,99)
MR_decl_label8(ll_backend__peephole__peephole_match_4_0, 95,102,106,107,111,113,115,117)
MR_decl_label2(ll_backend__peephole__peephole_match_4_0, 119,1)
MR_decl_label5(ll_backend__peephole__peephole_opt_instr_5_0, 3,4,8,7,2)
MR_decl_label1(ll_backend__peephole__peephole_optimize_4_0, 2)
MR_decl_label4(ll_backend__peephole__peephole_optimize_2_4_0, 4,5,6,3)
MR_decl_label2(ll_backend__peephole__peephole_pick_one_val_label_5_0, 2,1)
MR_decl_static(ll_backend__peephole__build_peephole_jump_label_map_4_0)
MR_decl_static(ll_backend__peephole__peephole_pick_one_val_label_5_0)
MR_decl_static(ll_backend__peephole__peephole_match_4_0)
MR_decl_static(ll_backend__peephole__peephole_opt_instr_5_0)
MR_decl_static(ll_backend__peephole__peephole_optimize_2_4_0)
MR_def_extern_entry(ll_backend__peephole__peephole_optimize_4_0)
MR_def_extern_entry(ll_backend__peephole__combine_decr_sp_2_0)
MR_decl_static(__Unify___ll_backend__peephole__pattern_0_0)
MR_decl_static(__Compare___ll_backend__peephole__pattern_0_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_TAG_COMMON(0,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
0,
1
}
},
{
{
0,
0
}
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
5,
MR_TAG_COMMON(3,1,0)
},
{
5,
MR_tbmkword(0, 1)
},
{
5,
MR_tbmkword(0, 0)
},
{
5,
MR_TAG_COMMON(3,1,1)
},
{
0,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_TAG_COMMON(3,2,0),
MR_string_const("early discard", 13)
},
{
MR_TAG_COMMON(3,2,2),
MR_string_const("return from optimized away mkframe", 34)
},
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_0 = {
	"incr_sp",
	0
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__peephole__enum_value_ordered_pattern_0[] = {
	&mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_0
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__peephole__enum_name_ordered_pattern_0[] = {
	&mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_0
};

const MR_Integer mercury_data_ll_backend__peephole__functor_number_map_pattern_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__peephole__type_ctor_info_pattern_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__peephole__pattern_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__peephole__pattern_0_0)),
	"ll_backend.peephole",
	"pattern",
	{ (void *)mercury_data_ll_backend__peephole__enum_name_ordered_pattern_0 },
	{ (void *)mercury_data_ll_backend__peephole__enum_value_ordered_pattern_0 },
	1,
	4,
	mercury_data_ll_backend__peephole__functor_number_map_pattern_0
};

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__peephole_module0)
	MR_init_entry1(ll_backend__peephole__build_peephole_jump_label_map_4_0);
	MR_init_label5(ll_backend__peephole__build_peephole_jump_label_map_4_0,22,5,4,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__build_peephole_jump_label_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i5);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i8);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i8);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i22);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module1)
	MR_init_entry1(ll_backend__peephole__peephole_pick_one_val_label_5_0);
	MR_init_label2(ll_backend__peephole__peephole_pick_one_val_label_5_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_pick_one_val_label_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_r5 = MR_ctfield(0, MR_tempr3, 1);
	MR_r4 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i2);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_pick_one_val_label_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i1);
	}
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_pick_one_val_label_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__next_assign_to_redoip_6_0);
MR_decl_entry(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ll_backend__opt_util__straight_alternative_3_0);
MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_livevals_2_0);
MR_decl_entry(ll_backend__opt_util__no_stack_straight_line_3_0);
MR_decl_entry(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(ll_backend__opt_util__is_const_condition_2_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
MR_decl_entry(__Unify___ll_backend__llds__code_addr_0_0);
MR_decl_entry(ll_backend__opt_util__is_this_label_next_3_0);
MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0);

MR_BEGIN_MODULE(ll_backend__peephole_module2)
	MR_init_entry1(ll_backend__peephole__peephole_match_4_0);
	MR_init_label8(ll_backend__peephole__peephole_match_4_0,5,9,11,13,8,18,20,22)
	MR_init_label8(ll_backend__peephole__peephole_match_4_0,24,27,30,32,33,35,37,29)
	MR_init_label8(ll_backend__peephole__peephole_match_4_0,39,45,44,42,48,38,54,53)
	MR_init_label8(ll_backend__peephole__peephole_match_4_0,61,59,67,69,75,76,77,78)
	MR_init_label8(ll_backend__peephole__peephole_match_4_0,79,85,88,91,94,89,96,99)
	MR_init_label8(ll_backend__peephole__peephole_match_4_0,95,102,106,107,111,113,115,117)
	MR_init_label2(ll_backend__peephole__peephole_match_4_0,119,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_match_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i27) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i75) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i88) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i106) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i113) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1));
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(8) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr5 = MR_r2;
	MR_sv(2) = MR_tempr5;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__next_assign_to_redoip_6_0,
		ll_backend__peephole__peephole_match_4_0_i9);
MR_def_label(ll_backend__peephole__peephole_match_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i8);
	}
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,
		ll_backend__peephole__peephole_match_4_0_i11);
MR_def_label(ll_backend__peephole__peephole_match_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i13);
MR_def_label(ll_backend__peephole__peephole_match_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(3), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__straight_alternative_3_0,
		ll_backend__peephole__peephole_match_4_0_i18);
MR_def_label(ll_backend__peephole__peephole_match_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,
		ll_backend__peephole__peephole_match_4_0_i20);
MR_def_label(ll_backend__peephole__peephole_match_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("curfr==maxfr", 12);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ll_backend__peephole__peephole_match_4_0_i22);
MR_def_label(ll_backend__peephole__peephole_match_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i24);
MR_def_label(ll_backend__peephole__peephole_match_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i119);
MR_def_label(ll_backend__peephole__peephole_match_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i32);
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__peephole__peephole_match_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__next_assign_to_redoip_6_0,
		ll_backend__peephole__peephole_match_4_0_i33);
MR_def_label(ll_backend__peephole__peephole_match_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i29);
	}
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__touches_nondet_ctrl_1_0,
		ll_backend__peephole__peephole_match_4_0_i35);
MR_def_label(ll_backend__peephole__peephole_match_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i37);
MR_def_label(ll_backend__peephole__peephole_match_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__peephole_match_4_0_i39);
MR_def_label(ll_backend__peephole__peephole_match_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,8)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i38);
	}
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 2);
	MR_r5 = MR_tempr3;
	MR_r7 = MR_ctfield(3, MR_tempr2, 1);
	MR_r4 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_tempr3,0,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i45);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i44);
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i42);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r4 = MR_r6;
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i38);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r7;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r7;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__peephole_match_4_0_i54);
MR_def_label(ll_backend__peephole__peephole_match_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i53);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i53);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_ctfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i59);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stack_straight_line_3_0,
		ll_backend__peephole__peephole_match_4_0_i61);
MR_def_label(ll_backend__peephole__peephole_match_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr4, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i59);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i59);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(1, MR_tempr3, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i119);
MR_def_label(ll_backend__peephole__peephole_match_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,
		ll_backend__peephole__peephole_match_4_0_i67);
MR_def_label(ll_backend__peephole__peephole_match_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const(" (added discard)", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i69);
MR_def_label(ll_backend__peephole__peephole_match_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i119);
MR_def_label(ll_backend__peephole__peephole_match_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__peephole__peephole_match_4_0_i76);
MR_def_label(ll_backend__peephole__peephole_match_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__peephole__build_peephole_jump_label_map_4_0,
		ll_backend__peephole__peephole_match_4_0_i77);
MR_def_label(ll_backend__peephole__peephole_match_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__peephole__peephole_match_4_0_i78);
MR_def_label(ll_backend__peephole__peephole_match_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i79);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__peephole__peephole_pick_one_val_label_5_0,
		ll_backend__peephole__peephole_match_4_0_i85);
MR_def_label(ll_backend__peephole__peephole_match_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr8 = MR_sv(8);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_const_condition_2_0,
		ll_backend__peephole__peephole_match_4_0_i91);
MR_def_label(ll_backend__peephole__peephole_match_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i89);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i94);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_match_4_0_i96);
MR_def_label(ll_backend__peephole__peephole_match_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i95);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i95);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		ll_backend__peephole__peephole_match_4_0_i99);
MR_def_label(ll_backend__peephole__peephole_match_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i95);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__peephole__peephole_match_4_0_i102);
MR_def_label(ll_backend__peephole__peephole_match_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_match_4_0_i107);
MR_def_label(ll_backend__peephole__peephole_match_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,16)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__peephole_match_4_0_i111);
MR_def_label(ll_backend__peephole__peephole_match_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r4, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__peephole, pattern);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__peephole__peephole_match_4_0_i115);
MR_def_label(ll_backend__peephole__peephole_match_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__peephole__peephole_match_4_0_i117);
MR_def_label(ll_backend__peephole__peephole_match_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i119);
MR_def_label(ll_backend__peephole__peephole_match_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module3)
	MR_init_entry1(ll_backend__peephole__peephole_opt_instr_5_0);
	MR_init_label5(ll_backend__peephole__peephole_opt_instr_5_0,3,4,8,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_opt_instr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i3);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__peephole__peephole_match_4_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i4);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i7);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__peephole__peephole_opt_instr_5_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i8);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module4)
	MR_init_entry1(ll_backend__peephole__peephole_optimize_2_4_0);
	MR_init_label4(ll_backend__peephole__peephole_optimize_2_4_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_optimize_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_2_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__peephole__peephole_optimize_2_4_0,
		ll_backend__peephole__peephole_optimize_2_4_0_i4);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__peephole__peephole_opt_instr_5_0,
		ll_backend__peephole__peephole_optimize_2_4_0_i5);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_2_4_0_i6);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_2_4_0_i6);
	}
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module5)
	MR_init_entry1(ll_backend__peephole__peephole_optimize_4_0);
	MR_init_label1(ll_backend__peephole__peephole_optimize_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__peephole__peephole_optimize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_np_tailcall_ent(ll_backend__peephole__peephole_optimize_2_4_0);
MR_def_label(ll_backend__peephole__peephole_optimize_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__peephole__peephole_optimize_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module6)
	MR_init_entry1(ll_backend__peephole__combine_decr_sp_2_0);
	MR_init_label6(ll_backend__peephole__combine_decr_sp_2_0,4,11,14,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__peephole__combine_decr_sp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__peephole__combine_decr_sp_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i4);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i11);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,20)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if ((MR_sv(3) != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i14);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module7)
	MR_init_entry1(__Unify___ll_backend__peephole__pattern_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__peephole__pattern_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module8)
	MR_init_entry1(__Compare___ll_backend__peephole__pattern_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__peephole__pattern_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module9)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module10)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__peephole_maybe_bunch_0(void)
{
	ll_backend__peephole_module0();
	ll_backend__peephole_module1();
	ll_backend__peephole_module2();
	ll_backend__peephole_module3();
	ll_backend__peephole_module4();
	ll_backend__peephole_module5();
	ll_backend__peephole_module6();
	ll_backend__peephole_module7();
	ll_backend__peephole_module8();
	ll_backend__peephole_module9();
	ll_backend__peephole_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__peephole__init(void);
void mercury__ll_backend__peephole__init_type_tables(void);
void mercury__ll_backend__peephole__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__peephole__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__peephole__init_complexity_procs(void);
#endif

void mercury__ll_backend__peephole__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__peephole_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__peephole__type_ctor_info_pattern_0,
		ll_backend__peephole__pattern_0_0);
	mercury__ll_backend__peephole__init_debugger();
}

void mercury__ll_backend__peephole__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__peephole__type_ctor_info_pattern_0);
	}
}


void mercury__ll_backend__peephole__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__peephole__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__peephole__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
