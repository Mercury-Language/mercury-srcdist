/*
** Automatically generated from `peephole.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__ll_backend__peephole__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.peephole.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.peephole.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.peephole.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.peephole.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ll_backend.peephole.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.peephole.c"
#line 49 "ll_backend.peephole.c"
#include "ll_backend.peephole.mh"

#line 52 "ll_backend.peephole.c"
#line 53 "ll_backend.peephole.c"
#ifndef LL_BACKEND__PEEPHOLE_DECL_GUARD
#define LL_BACKEND__PEEPHOLE_DECL_GUARD

#line 57 "ll_backend.peephole.c"
#line 58 "ll_backend.peephole.c"

#endif
#line 61 "ll_backend.peephole.c"

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
	MR_Integer f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__peephole__type_ctor_info_pattern_0;
MR_decl_label6(ll_backend__peephole__build_peephole_jump_label_map_4_0, 35,3,6,5,11,1)
MR_decl_label6(ll_backend__peephole__combine_decr_sp_2_0, 94,4,11,14,5,6)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 8,10,12,6,22,24,26,29,3,33)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 34,36,37,47,32,67,70,65,75,78)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 74,81,64,87,89,85,96,95,98,100)
MR_decl_label10(ll_backend__peephole__peephole_match_4_0, 102,94,108,114,113,111,121,107,135,134)
MR_decl_label9(ll_backend__peephole__peephole_match_4_0, 145,143,154,158,162,92,168,172,1)
MR_decl_label8(ll_backend__peephole__peephole_opt_instr_5_0, 2,5,8,9,3,15,17,11)
MR_decl_label3(ll_backend__peephole__peephole_optimize_5_0, 3,2,6)
MR_decl_label4(ll_backend__peephole__peephole_optimize_2_4_0, 33,4,5,6)
MR_decl_label2(ll_backend__peephole__peephole_pick_one_val_label_5_0, 2,1)
MR_decl_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0, 6,4,8,10,3,17,16,22,21,27)
MR_decl_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0, 26,34,32,36,38,31,47,45,49,51)
MR_decl_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0, 44,60,58,57,68,69,67,74,75,73)
MR_decl_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0, 82,80,84,86,79,95,93,92,105,103)
MR_decl_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0, 102,113,112,118,117,123,122,130,128,127)
MR_decl_label5(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0, 140,138,183,137,184)
MR_decl_label4(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0, 26,4,6,7)
MR_decl_label10(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0, 4,3,11,7,8,18,19,6,27,23)
MR_decl_label3(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0, 24,32,22)
MR_decl_static(ll_backend__peephole__build_peephole_jump_label_map_4_0)
MR_decl_static(ll_backend__peephole__peephole_pick_one_val_label_5_0)
MR_decl_static(ll_backend__peephole__peephole_match_4_0)
MR_decl_static(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0)
MR_decl_static(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0)
MR_decl_static(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0)
MR_decl_static(ll_backend__peephole__peephole_opt_instr_5_0)
MR_decl_static(ll_backend__peephole__peephole_optimize_2_4_0)
MR_def_extern_entry(ll_backend__peephole__peephole_optimize_5_0)
MR_def_extern_entry(ll_backend__peephole__combine_decr_sp_2_0)
MR_decl_static(__Unify___ll_backend__peephole__pattern_0_0)
MR_decl_static(__Compare___ll_backend__peephole__pattern_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
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
MR_TAG_COMMON(1,0,1)
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

static const MR_EnumFunctorDesc mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_0 = {
	"pattern_incr_sp",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_1 = {
	"pattern_mkword",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__peephole__enum_value_ordered_pattern_0[] = {
	&mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_0,
	&mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__peephole__enum_name_ordered_pattern_0[] = {
	&mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_0,
	&mercury_data_ll_backend__peephole__enum_functor_desc_pattern_0_1
};

const MR_Integer mercury_data_ll_backend__peephole__functor_number_map_pattern_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__peephole__type_ctor_info_pattern_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__peephole__pattern_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__peephole__pattern_0_0)),
	"ll_backend.peephole",
	"pattern",
	{ (void *)mercury_data_ll_backend__peephole__enum_name_ordered_pattern_0 },
	{ (void *)mercury_data_ll_backend__peephole__enum_value_ordered_pattern_0 },
	2,
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
	MR_init_label6(ll_backend__peephole__build_peephole_jump_label_map_4_0,35,3,6,5,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_peephole_jump_label_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__build_peephole_jump_label_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i6);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i11);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__peephole__build_peephole_jump_label_map_4_0_i11);
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__peephole__build_peephole_jump_label_map_4_0_i35);
	}
MR_def_label(ll_backend__peephole__build_peephole_jump_label_map_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
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
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
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
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,8,10,12,6,22,24,26,29,3,33)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,34,36,37,47,32,67,70,65,75,78)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,74,81,64,87,89,85,96,95,98,100)
	MR_init_label10(ll_backend__peephole__peephole_match_4_0,102,94,108,114,113,111,121,107,135,134)
	MR_init_label9(ll_backend__peephole__peephole_match_4_0,145,143,154,158,162,92,168,172,1)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
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
	MR_Word MR_tempr1, MR_tempr2;
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__straight_alternative_3_0,
		ll_backend__peephole__peephole_match_4_0_i22);
MR_def_label(ll_backend__peephole__peephole_match_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i29);
MR_def_label(ll_backend__peephole__peephole_match_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i162);
MR_def_label(ll_backend__peephole__peephole_match_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i32);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__peephole__peephole_match_4_0_i33);
MR_def_label(ll_backend__peephole__peephole_match_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__peephole__build_peephole_jump_label_map_4_0,
		ll_backend__peephole__peephole_match_4_0_i34);
MR_def_label(ll_backend__peephole__peephole_match_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ll_backend__peephole__peephole_match_4_0_i36);
MR_def_label(ll_backend__peephole__peephole_match_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i37);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,37)
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
		ll_backend__peephole__peephole_match_4_0_i47);
MR_def_label(ll_backend__peephole__peephole_match_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr7 = MR_sv(8);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr7;
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
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,9)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i64);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_const_condition_2_0,
		ll_backend__peephole__peephole_match_4_0_i67);
MR_def_label(ll_backend__peephole__peephole_match_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i65);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i70);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_match_4_0_i75);
MR_def_label(ll_backend__peephole__peephole_match_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i74);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i74);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		ll_backend__peephole__peephole_match_4_0_i78);
MR_def_label(ll_backend__peephole__peephole_match_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i74);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__peephole__peephole_match_4_0_i81);
MR_def_label(ll_backend__peephole__peephole_match_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,24)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i85);
	}
	MR_sv(3) = MR_tfield(3, MR_r4, 1);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__peephole, pattern);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__peephole__peephole_match_4_0_i87);
MR_def_label(ll_backend__peephole__peephole_match_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stackvars_til_decr_sp_4_0,
		ll_backend__peephole__peephole_match_4_0_i89);
MR_def_label(ll_backend__peephole__peephole_match_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i162);
MR_def_label(ll_backend__peephole__peephole_match_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i92);
	}
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
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i96);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tfield(0, MR_sv(3), 1);
	MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i95);
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(2) = MR_r5;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_tfield(0, MR_sv(3), 1);
MR_def_label(ll_backend__peephole__peephole_match_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__next_assign_to_redoip_6_0,
		ll_backend__peephole__peephole_match_4_0_i98);
MR_def_label(ll_backend__peephole__peephole_match_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i94);
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
		ll_backend__peephole__peephole_match_4_0_i100);
MR_def_label(ll_backend__peephole__peephole_match_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i94);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i102);
MR_def_label(ll_backend__peephole__peephole_match_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__peephole_match_4_0_i108);
MR_def_label(ll_backend__peephole__peephole_match_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i107);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,9)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i107);
	}
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	MR_r5 = MR_tempr3;
	MR_r7 = MR_tfield(3, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i111);
	}
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i114);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i113);
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i111);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r4 = MR_r6;
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i107);
	}
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i121);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r7;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i107);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__peephole_match_4_0_i135);
MR_def_label(ll_backend__peephole__peephole_match_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i134);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i134);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i134);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__peephole__peephole_match_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i143);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__no_stack_straight_line_3_0,
		ll_backend__peephole__peephole_match_4_0_i145);
MR_def_label(ll_backend__peephole__peephole_match_4_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i143);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i143);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i143);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i162);
MR_def_label(ll_backend__peephole__peephole_match_4_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_0,
		ll_backend__peephole__peephole_match_4_0_i154);
MR_def_label(ll_backend__peephole__peephole_match_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = (MR_Word) MR_string_const(" (added discard)", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i158);
MR_def_label(ll_backend__peephole__peephole_match_4_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__peephole__peephole_match_4_0_i162);
MR_def_label(ll_backend__peephole__peephole_match_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_match_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,20)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_match_4_0_i168);
MR_def_label(ll_backend__peephole__peephole_match_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,21)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__peephole_match_4_0_i172);
MR_def_label(ll_backend__peephole__peephole_match_4_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_match_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
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
	MR_init_entry1(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0);
	MR_init_label10(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,4,3,11,7,8,18,19,6,27,23)
	MR_init_label3(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,24,32,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_tagged_ptr_components_in_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(2, MR_r4, 0);
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i4);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_sv(3),0,14)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i8);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i8);
	}
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i11);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	if (MR_RTAGS_TESTR(MR_sv(4),3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_sv(1) != MR_r2)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i18);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i19);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i22);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i24);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i24);
	}
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i27);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0_i32);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module4)
	MR_init_entry1(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0);
	MR_init_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,6,4,8,10,3,17,16,22,21,27)
	MR_init_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,26,34,32,36,38,31,47,45,49,51)
	MR_init_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,44,60,58,57,68,69,67,74,75,73)
	MR_init_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,82,80,84,86,79,95,93,92,105,103)
	MR_init_label10(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,102,113,112,118,117,123,122,130,128,127)
	MR_init_label5(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,140,138,183,137,184)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_tagged_ptr_components_in_instr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i3);
	}
	MR_sv(9) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(10) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i6);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r6;
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i10);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i16);
	}
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(11) = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i17);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,15)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i21);
	}
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i22);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,9)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i26);
	}
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(11) = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i27);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,12)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 8);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i34);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r6;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i38);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(9) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i47);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i45);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i49);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r6;
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i51);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,31)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 2);
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i60);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i58);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i184);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,34)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i67);
	}
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i68);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i69);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 34;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,33)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i73);
	}
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(10) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i74);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i75);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 33;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,32)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i79);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i82);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i80);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i84);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r6;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i86);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 32;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,13)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i92);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i95);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i93);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i184);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,22)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i102);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i105);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i103);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i184);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,23)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i112);
	}
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i113);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,21)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i117);
	}
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(11) = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i118);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,14)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i122);
	}
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i123);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i130);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i128);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i184);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,20)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i137);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	MR_sv(11) = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i140);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i138);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,10)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i184);
	}
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_r5) == MR_mktag((MR_Integer) 1)) || ((MR_Integer) MR_r5 == (MR_Integer) MR_tbmkword(0, 1))) || (MR_tag(MR_r5) == MR_mktag((MR_Integer) 2))) || ((MR_Integer) MR_r5 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_tag(MR_r5) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r5, 0) == (MR_Integer) 11))))) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0_i183);
	}
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r4;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module5)
	MR_init_entry1(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0);
	MR_init_label4(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,26,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_tagged_ptr_components_in_instrs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0_i4);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,
		ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0_i7);
MR_def_label(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module6)
	MR_init_entry1(ll_backend__peephole__peephole_opt_instr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_opt_instr_5_0);
	MR_init_label8(ll_backend__peephole__peephole_opt_instr_5_0,2,5,8,9,3,15,17,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_opt_instr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__peephole__peephole_opt_instr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i2);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__peephole__peephole_match_4_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i5);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__peephole__peephole_opt_instr_5_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i9);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i11);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i11);
	}
	MR_sv(6) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 0);
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__peephole, pattern);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i15);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_opt_instr_5_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_0,
		ll_backend__peephole__peephole_opt_instr_5_0_i17);
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__peephole__peephole_opt_instr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module7)
	MR_init_entry1(ll_backend__peephole__peephole_optimize_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_optimize_2_4_0);
	MR_init_label4(ll_backend__peephole__peephole_optimize_2_4_0,33,4,5,6)
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
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_2_4_0_i33);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__peephole__peephole_optimize_2_4_0,
		ll_backend__peephole__peephole_optimize_2_4_0_i4);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__peephole__peephole_opt_instr_5_0,
		ll_backend__peephole__peephole_optimize_2_4_0_i5);
MR_def_label(ll_backend__peephole__peephole_optimize_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
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


MR_BEGIN_MODULE(ll_backend__peephole_module8)
	MR_init_entry1(ll_backend__peephole__peephole_optimize_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__peephole_optimize_5_0);
	MR_init_label3(ll_backend__peephole__peephole_optimize_5_0,3,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_optimize'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__peephole__peephole_optimize_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_5_0_i2);
MR_def_label(ll_backend__peephole__peephole_optimize_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__peephole__peephole_optimize_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__peephole_optimize_5_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_np_tailcall_ent(ll_backend__peephole__peephole_optimize_2_4_0);
MR_def_label(ll_backend__peephole__peephole_optimize_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_tailcall_ent(ll_backend__peephole__peephole_optimize_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module9)
	MR_init_entry1(ll_backend__peephole__combine_decr_sp_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__peephole__combine_decr_sp_2_0);
	MR_init_label6(ll_backend__peephole__combine_decr_sp_2_0,94,4,11,14,5,6)
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
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i94);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__peephole__combine_decr_sp_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i4);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__peephole__combine_decr_sp_2_0_i11);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if ((MR_sv(3) != MR_tempr1)) {
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__peephole__combine_decr_sp_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 26;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__peephole__combine_decr_sp_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__peephole_module10)
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
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__peephole_module11)
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
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
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
	ll_backend__peephole_module11();
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
#ifdef MR_THREADSCOPE
void mercury__ll_backend__peephole__init_threadscope_string_table(void);
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
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ll_backend__peephole);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__peephole__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__peephole__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
