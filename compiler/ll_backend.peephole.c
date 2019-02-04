/*
** Automatically generated from `peephole.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.peephole.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.peephole.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.peephole.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.peephole.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ll_backend.peephole.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.peephole.c"
#line 48 "ll_backend.peephole.c"
#include "ll_backend.peephole.mh"

#line 51 "ll_backend.peephole.c"
#line 52 "ll_backend.peephole.c"
#ifndef LL_BACKEND__PEEPHOLE_DECL_GUARD
#define LL_BACKEND__PEEPHOLE_DECL_GUARD

#line 56 "ll_backend.peephole.c"
#line 57 "ll_backend.peephole.c"

#endif
#line 60 "ll_backend.peephole.c"

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
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__peephole__type_ctor_info_pattern_0;
MR_decl_label6(ll_backend__peephole__build_peephole_jump_label_map_4_0, 31,3,7,5,13,1)
MR_decl_label6(ll_backend__peephole__combine_decr_sp_2_0, 61,4,11,14,5,6)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 3,8,10,12,6,22,24,26,32,35)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 37,38,40,41,51,68,71,74,69,79)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 82,78,85,89,91,93,96,100,99,104)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 106,108,98,114,120,119,117,127,113,141)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 140,151,149,160,164,168,173,174,178,1)
MR_decl_label5(ll_backend__peephole__peephole_opt_instr_5_0, 3,4,7,8,2)
MR_decl_label4(ll_backend__peephole__peephole_optimize_2_4_0, 24,4,5,6)
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
6,
MR_TAG_COMMON(3,1,0)
},
{
6,
MR_tbmkword(0, 1)
},
{
6,
MR_tbmkword(0, 0)
},
{
6,
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

static const struct mercury_type_4 mercury_vector_common_4_0[6] =
{
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(1,2,4)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__build_peephole_jump_label_map_4_0);
	MR_init_label6(ll_backend__peephole__build_peephole_jump_label_map_4_0,31,3,7,5,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_peephole_jump_label_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__build_peephole_jump_label_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i7);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i5);
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
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i13);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,5)
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
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i13);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i31);
	}
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module1)
	MR_init_entry1(ll_backend__peephole__peephole_pick_one_val_label_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_pick_one_val_label_5_0);
	MR_init_label2(ll_backend__peephole__peephole_pick_one_val_label_5_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_pick_one_val_label'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_pick_one_val_label_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_r5 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i2);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i2);
	}
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
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
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_pick_one_val_label_5_0_i1);
	}
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
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
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(ll_backend__opt_util__is_const_condition_2_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
MR_decl_entry(__Unify___ll_backend__llds__code_addr_0_0);
MR_decl_entry(ll_backend__opt_util__is_this_label_next_3_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_livevals_2_0);
MR_decl_entry(ll_backend__opt_util__no_stack_straight_line_3_0);
MR_decl_entry(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__peephole_module2)
	MR_init_entry1(ll_backend__peephole__peephole_match_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_match_4_0);
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,3,8,10,12,6,22,24,26,32,35)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,37,38,40,41,51,68,71,74,69,79)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,82,78,85,89,91,93,96,100,99,104)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,106,108,98,114,120,119,117,127,113,141)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,140,151,149,160,164,168,173,174,178,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_match'/4 mode 0 */
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
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i96) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i35) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i173) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i89) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1) MR_AND
		MR_LABEL_AP(ll_backend__peephole__peephole_match_4_0_i1));
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr4, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr4, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
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
		ll_backend__peephole__peephole_match_4_0_i8);
MR_def_label(ll_backend__peephole__peephole_match_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i6);
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
		ll_backend__peephole__peephole_match_4_0_i10);
MR_def_label(ll_backend__peephole__peephole_match_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i12);
MR_def_label(ll_backend__peephole__peephole_match_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(3), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__straight_alternative_3_0,
		ll_backend__peephole__peephole_match_4_0_i22);
MR_def_label(ll_backend__peephole__peephole_match_4_0,22)
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
		ll_backend__peephole__peephole_match_4_0_i24);
MR_def_label(ll_backend__peephole__peephole_match_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("curfr==maxfr", 12);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ll_backend__peephole__peephole_match_4_0_i26);
MR_def_label(ll_backend__peephole__peephole_match_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i32);
MR_def_label(ll_backend__peephole__peephole_match_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i168);
MR_def_label(ll_backend__peephole__peephole_match_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__peephole__peephole_match_4_0_i37);
MR_def_label(ll_backend__peephole__peephole_match_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__peephole__build_peephole_jump_label_map_4_0,
		ll_backend__peephole__peephole_match_4_0_i38);
MR_def_label(ll_backend__peephole__peephole_match_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__peephole__peephole_match_4_0_i40);
MR_def_label(ll_backend__peephole__peephole_match_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i41);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i41);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_tempr4, 0), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__peephole__peephole_pick_one_val_label_5_0,
		ll_backend__peephole__peephole_match_4_0_i51);
MR_def_label(ll_backend__peephole__peephole_match_4_0,51)
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
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr4, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 6;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_const_condition_2_0,
		ll_backend__peephole__peephole_match_4_0_i71);
MR_def_label(ll_backend__peephole__peephole_match_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i69);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i74);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_match_4_0_i79);
MR_def_label(ll_backend__peephole__peephole_match_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i78);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i78);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		ll_backend__peephole__peephole_match_4_0_i82);
MR_def_label(ll_backend__peephole__peephole_match_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i78);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__peephole__peephole_match_4_0_i85);
MR_def_label(ll_backend__peephole__peephole_match_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__peephole, pattern);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__peephole__peephole_match_4_0_i91);
MR_def_label(ll_backend__peephole__peephole_match_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__peephole__peephole_match_4_0_i93);
MR_def_label(ll_backend__peephole__peephole_match_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i168);
MR_def_label(ll_backend__peephole__peephole_match_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i100);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tfield(0, MR_sv(1), 1);
	MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i99);
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tfield(0, MR_sv(1), 1);
MR_def_label(ll_backend__peephole__peephole_match_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__next_assign_to_redoip_6_0,
		ll_backend__peephole__peephole_match_4_0_i104);
MR_def_label(ll_backend__peephole__peephole_match_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i98);
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
		ll_backend__peephole__peephole_match_4_0_i106);
MR_def_label(ll_backend__peephole__peephole_match_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i98);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i108);
MR_def_label(ll_backend__peephole__peephole_match_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__peephole_match_4_0_i114);
MR_def_label(ll_backend__peephole__peephole_match_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i113);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,9)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i113);
	}
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	MR_r5 = MR_tempr3;
	MR_r7 = MR_tfield(3, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i117);
	}
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i120);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i119);
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i117);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r4 = MR_r6;
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i113);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i113);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
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
MR_def_label(ll_backend__peephole__peephole_match_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__peephole_match_4_0_i141);
MR_def_label(ll_backend__peephole__peephole_match_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i140);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i140);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i140);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tfield(1, MR_tempr5, 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i149);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stack_straight_line_3_0,
		ll_backend__peephole__peephole_match_4_0_i151);
MR_def_label(ll_backend__peephole__peephole_match_4_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i149);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr4, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i149);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i149);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i168);
MR_def_label(ll_backend__peephole__peephole_match_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,
		ll_backend__peephole__peephole_match_4_0_i160);
MR_def_label(ll_backend__peephole__peephole_match_4_0,160)
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
		ll_backend__peephole__peephole_match_4_0_i164);
MR_def_label(ll_backend__peephole__peephole_match_4_0,164)
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
		ll_backend__peephole__peephole_match_4_0_i168);
MR_def_label(ll_backend__peephole__peephole_match_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_match_4_0_i174);
MR_def_label(ll_backend__peephole__peephole_match_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,21)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__peephole_match_4_0_i178);
MR_def_label(ll_backend__peephole__peephole_match_4_0,178)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_opt_instr_5_0);
	MR_init_label5(ll_backend__peephole__peephole_opt_instr_5_0,3,4,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_opt_instr'/5 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__peephole__peephole_match_4_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i4);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(ll_backend__peephole__peephole_opt_instr_5_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i8);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module4)
	MR_init_entry1(ll_backend__peephole__peephole_optimize_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_optimize_2_4_0);
	MR_init_label4(ll_backend__peephole__peephole_optimize_2_4_0,24,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_optimize_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_optimize_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_2_4_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__peephole__peephole_optimize_2_4_0,
		ll_backend__peephole__peephole_optimize_2_4_0_i4);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module5)
	MR_init_entry1(ll_backend__peephole__peephole_optimize_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_optimize_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_optimize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__peephole__peephole_optimize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(ll_backend__peephole__peephole_optimize_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module6)
	MR_init_entry1(ll_backend__peephole__combine_decr_sp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__combine_decr_sp_2_0);
	MR_init_label6(ll_backend__peephole__combine_decr_sp_2_0,61,4,11,14,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'combine_decr_sp'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__peephole__combine_decr_sp_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i61);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__peephole__combine_decr_sp_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i4);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
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
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,25)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if ((MR_sv(3) != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i14);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 26;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_tempr4, 1);
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module7)
	MR_init_entry1(__Unify___ll_backend__peephole__pattern_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__peephole__pattern_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__peephole__pattern_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___ll_backend__peephole__pattern_0__[1, 2]_0'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_108_108_95_98_97_99_107_101_110_100_95_95_112_101_101_112_104_111_108_101_95_95_112_97_116_116_101_114_110_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___ll_backend__peephole__pattern_0__[2, 3]_0'/3 mode 0 */
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
void mercury__ll_backend__peephole__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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

void mercury__ll_backend__peephole__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__peephole);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__peephole__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
