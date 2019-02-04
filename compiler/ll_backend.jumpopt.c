/*
** Automatically generated from `jumpopt.m'
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
INIT mercury__ll_backend__jumpopt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.jumpopt.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.jumpopt.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.jumpopt.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.jumpopt.c"
#line 40 "ll_backend.jumpopt.c"
#include "ll_backend.jumpopt.mh"

#line 43 "ll_backend.jumpopt.c"
#line 44 "ll_backend.jumpopt.c"
#ifndef LL_BACKEND__JUMPOPT_DECL_GUARD
#define LL_BACKEND__JUMPOPT_DECL_GUARD

#line 48 "ll_backend.jumpopt.c"
#line 49 "ll_backend.jumpopt.c"

#endif
#line 52 "ll_backend.jumpopt.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_String f2;
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2[3];
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1[2];
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[3];
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
static const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0;
MR_decl_label5(ll_backend__jumpopt__adjust_livevals_3_0, 5,9,8,2,3)
MR_decl_label7(ll_backend__jumpopt__final_dest_2_6_0, 36,5,4,8,11,2,3)
MR_decl_label6(ll_backend__jumpopt__jump_opt_build_forkmap_4_0, 25,7,9,4,5,3)
MR_decl_label8(ll_backend__jumpopt__jump_opt_build_maps_14_0, 84,6,7,11,13,16,14,17)
MR_decl_label8(ll_backend__jumpopt__jump_opt_build_maps_14_0, 20,22,18,23,26,28,24,29)
MR_decl_label8(ll_backend__jumpopt__jump_opt_build_maps_14_0, 32,34,30,35,38,42,43,37)
MR_decl_label2(ll_backend__jumpopt__jump_opt_build_maps_14_0, 4,3)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 993,365,10,11,12,14,15,18)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 16,20,24,30,29,32,37,39)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 40,27,28,45,50,52,53,42)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 43,58,68,70,54,55,76,86)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 88,89,71,72,91,95,97,100)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 98,102,90,25,109,111,112,113)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 116,120,123,121,125,117,131,136)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 134,142,138,139,145,147,144,150)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 152,149,155,154,161,163,164,166)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 168,169,170,171,172,159,174,176)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 177,178,180,183,182,179,187,190)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 186,173,132,199,201,202,203,206)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 207,209,208,211,216,220,225,227)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 222,229,231,235,238,240,241,219)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 246,248,254,252,256,257,244,261)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 263,265,267,269,271,273,274,280)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 278,277,284,286,292,293,294,463)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 264,301,303,217,325,326,328,329)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 327,331,332,336,337,340,338,346)
MR_decl_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0, 347,350,468,348,352,353,354,4)
MR_decl_label3(ll_backend__jumpopt__jump_opt_instr_list_16_0, 357,995,3)
MR_decl_label8(ll_backend__jumpopt__needs_workaround_2_0, 206,10,9,37,21,22,25,14)
MR_decl_label3(ll_backend__jumpopt__needs_workaround_2_0, 17,207,1)
MR_decl_label8(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 10,12,13,14,15,16,11,19)
MR_decl_label8(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 18,20,23,22,17,25,26,29)
MR_decl_label1(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 27)
MR_decl_label8(ll_backend__jumpopt__short_foreign_proc_component_5_0, 8,21,47,11,13,10,17,16)
MR_decl_label2(ll_backend__jumpopt__short_label_3_0, 3,2)
MR_decl_label5(ll_backend__jumpopt__short_labels_3_0, 5,7,4,9,3)
MR_decl_label8(ll_backend__jumpopt__short_labels_lval_3_0, 4,5,6,7,8,9,10,13)
MR_decl_label8(ll_backend__jumpopt__short_labels_lval_3_0, 58,18,59,20,60,22,61,24)
MR_decl_label8(ll_backend__jumpopt__short_labels_lval_3_0, 62,26,63,28,29,64,31,32)
MR_decl_label1(ll_backend__jumpopt__short_labels_lval_3_0, 33)
MR_decl_label8(ll_backend__jumpopt__short_labels_rval_3_0, 81,5,6,82,9,10,85,33)
MR_decl_label8(ll_backend__jumpopt__short_labels_rval_3_0, 34,84,31,11,14,15,18,41)
MR_decl_label4(ll_backend__jumpopt__short_labels_rval_3_0, 21,25,27,24)
MR_decl_label3(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0, 3,4,7)
MR_decl_label3(__Unify___ll_backend__jumpopt__new_remain_0_0, 27,5,1)
MR_decl_label5(__Compare___ll_backend__jumpopt__new_remain_0_0, 5,3,39,9,36)
MR_decl_static(ll_backend__jumpopt__jump_opt_build_maps_14_0)
MR_decl_static(ll_backend__jumpopt__jump_opt_build_forkmap_4_0)
MR_decl_static(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0)
MR_decl_static(fn__ll_backend__jumpopt__redirect_comment_1_0)
MR_decl_static(ll_backend__jumpopt__needs_workaround_2_0)
MR_decl_static(fn__ll_backend__jumpopt__this_file_0_0)
MR_decl_static(ll_backend__jumpopt__adjust_livevals_3_0)
MR_decl_static(ll_backend__jumpopt__final_dest_2_6_0)
MR_decl_static(ll_backend__jumpopt__final_dest_5_0)
MR_decl_static(ll_backend__jumpopt__short_label_3_0)
MR_decl_static(ll_backend__jumpopt__short_labels_3_0)
MR_decl_static(ll_backend__jumpopt__short_labels_rval_3_0)
MR_decl_static(ll_backend__jumpopt__short_labels_lval_3_0)
MR_decl_static(ll_backend__jumpopt__jump_opt_instr_list_16_0)
MR_def_extern_entry(ll_backend__jumpopt__optimize_jumps_in_proc_12_0)
MR_decl_static(ll_backend__jumpopt__short_foreign_proc_component_5_0)
MR_decl_static(__Unify___ll_backend__jumpopt__new_remain_0_0)
MR_decl_static(__Compare___ll_backend__jumpopt__new_remain_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
{
{
MR_TAG_COMMON(0,4,3),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[6] =
{
{
0,
MR_tbmkword(0, 0)
},
{
0,
MR_tbmkword(0, 1)
},
{
7,
MR_TAG_COMMON(0,2,0)
},
{
3,
MR_TAG_COMMON(0,2,0)
},
{
6,
MR_TAG_COMMON(0,2,0)
},
{
5,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
MR_tbmkword(0, 2)
},
{
MR_TAG_COMMON(3,1,2)
},
{
MR_TAG_COMMON(3,1,3)
},
{
MR_TAG_COMMON(3,1,4)
},
{
MR_tbmkword(0, 1)
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
1,
MR_tbmkword(0, 1),
MR_TAG_COMMON(0,2,1)
},
{
1,
MR_tbmkword(0, 0),
MR_TAG_COMMON(0,2,2)
},
{
1,
MR_tbmkword(0, 2),
MR_TAG_COMMON(0,2,3)
},
};

static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_TAG_COMMON(3,3,0),
MR_string_const("discard this frame", 18)
},
{
MR_TAG_COMMON(3,3,1),
MR_string_const("setup PC on return from tailcall", 32)
},
{
MR_TAG_COMMON(3,3,2),
MR_string_const("setup curfr on return from tailcall", 35)
},
{
MR_TAG_COMMON(3,1,5),
MR_string_const("shortcircuit", 12)
},
{
MR_TAG_COMMON(1,6,1),
MR_string_const("", 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
2,
{
MR_tbmkword(0, 13),
MR_TAG_COMMON(0,2,0),
MR_TAG_COMMON(0,2,4)
}
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_string_const("", 0)
},
{
MR_string_const("r1 = old r1", 11)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
0,
1
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, instruction)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__jumpopt__jump_opt_instr_list_16_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__jumpopt__jump_opt_instr_list_16_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(8,0),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__jumpopt__field_types_new_remain_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

const MR_ConstString mercury_data_ll_backend__jumpopt__field_names_new_remain_0_0[] = {
	"new_instructions",
	"remaining_instructions"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_0 = {
	"specified",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__jumpopt__field_types_new_remain_0_0,
	mercury_data_ll_backend__jumpopt__field_names_new_remain_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_1 = {
	"usual_case",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_0[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_1[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__jumpopt__du_ptag_ordered_new_remain_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__jumpopt__du_stag_ordered_new_remain_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__jumpopt__du_name_ordered_new_remain_0[] = {
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_0,
	&mercury_data_ll_backend__jumpopt__du_functor_desc_new_remain_0_1
};

const MR_Integer mercury_data_ll_backend__jumpopt__functor_number_map_new_remain_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__jumpopt__new_remain_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__jumpopt__new_remain_0_0)),
	"ll_backend.jumpopt",
	"new_remain",
	{ (void *)mercury_data_ll_backend__jumpopt__du_name_ordered_new_remain_0 },
	{ (void *)mercury_data_ll_backend__jumpopt__du_ptag_ordered_new_remain_0 },
	2,
	4,
	mercury_data_ll_backend__jumpopt__functor_number_map_new_remain_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__jumpopt__jump_opt_instr_list_16_0_1 = {
{
MR_PREDICATE,
"ll_backend.jumpopt",
"ll_backend.jumpopt",
"short_foreign_proc_component",
5,
0
},
"ll_backend.jumpopt",
"jumpopt.m",
715,
"d2;c18;d7;c2;q;c1;"
};

MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_livevals_2_0);
MR_decl_entry(ll_backend__opt_util__is_proceed_next_2_0);
MR_decl_entry(ll_backend__opt_util__is_sdproceed_next_2_0);
MR_decl_entry(ll_backend__opt_util__is_succeed_next_2_0);
MR_decl_entry(ll_backend__opt_util__find_no_fallthrough_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module0)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_build_maps_14_0);
	MR_init_label8(ll_backend__jumpopt__jump_opt_build_maps_14_0,84,6,7,11,13,16,14,17)
	MR_init_label8(ll_backend__jumpopt__jump_opt_build_maps_14_0,20,22,18,23,26,28,24,29)
	MR_init_label8(ll_backend__jumpopt__jump_opt_build_maps_14_0,32,34,30,35,38,42,43,37)
	MR_init_label2(ll_backend__jumpopt__jump_opt_build_maps_14_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_build_maps_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i6);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i7);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i11);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i11);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i13);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i16);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i17);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_proceed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i20);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i22);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i23);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i26);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i24);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i28);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i29);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_succeed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i32);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i30);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i34);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i35);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_sv(7);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i38);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i37);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__find_no_fallthrough_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i42);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i43);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i84);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i84);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i84);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__is_forkproceed_next_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module1)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_build_forkmap_4_0);
	MR_init_label6(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,25,7,9,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_build_forkmap_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_forkproceed_next_3_0,
		ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i7);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i9);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i25);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i25);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module2)
	MR_init_entry1(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
	MR_init_label3(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,3,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,22)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i4);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 6);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 9);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module3)
	MR_init_entry1(fn__ll_backend__jumpopt__redirect_comment_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__jumpopt__redirect_comment_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" (redirected return)", 20);
	MR_np_tailcall_ent(fn__string__append_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module4)
	MR_init_entry1(ll_backend__jumpopt__needs_workaround_2_0);
	MR_init_label8(ll_backend__jumpopt__needs_workaround_2_0,206,10,9,37,21,22,25,14)
	MR_init_label3(ll_backend__jumpopt__needs_workaround_2_0,17,207,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__needs_workaround_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i206);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,8)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i207);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i207);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,12)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i10);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i9);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,13)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(3, MR_r2, 2);
	MR_r2 = MR_ctfield(3, MR_r2, 3);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i14);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i21);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i37);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i22);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i17);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module5)
	MR_init_entry1(fn__ll_backend__jumpopt__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__jumpopt__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module6)
	MR_init_entry1(ll_backend__jumpopt__adjust_livevals_3_0);
	MR_init_label5(ll_backend__jumpopt__adjust_livevals_3_0,5,9,8,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__adjust_livevals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__adjust_livevals_3_0_i5);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i2);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__adjust_livevals_3_0_i9);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	MR_r2 = (MR_Word) MR_string_const("adjust_livevals: BetweenLivevals and PrevLivevals differ", 56);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module7)
	MR_init_entry1(ll_backend__jumpopt__final_dest_2_6_0);
	MR_init_label7(ll_backend__jumpopt__final_dest_2_6_0,36,5,4,8,11,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__final_dest_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i5);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i4);
	}
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r5, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__final_dest_2_6_0_i8);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__jumpopt__final_dest_2_6_0_i11);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i36);
	}
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module8)
	MR_init_entry1(ll_backend__jumpopt__final_dest_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__final_dest_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ll_backend__jumpopt__final_dest_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module9)
	MR_init_entry1(ll_backend__jumpopt__short_label_3_0);
	MR_init_label2(ll_backend__jumpopt__short_label_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_label_3_0_i3);
MR_def_label(ll_backend__jumpopt__short_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_label_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__jumpopt__final_dest_2_6_0);
MR_def_label(ll_backend__jumpopt__short_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module10)
	MR_init_entry1(ll_backend__jumpopt__short_labels_3_0);
	MR_init_label5(ll_backend__jumpopt__short_labels_3_0,5,7,4,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_labels_3_0_i5);
MR_def_label(ll_backend__jumpopt__short_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_3_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_labels_3_0_i7);
MR_def_label(ll_backend__jumpopt__short_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_3_0,
		ll_backend__jumpopt__short_labels_3_0_i9);
MR_def_label(ll_backend__jumpopt__short_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_3_0,
		ll_backend__jumpopt__short_labels_3_0_i9);
MR_def_label(ll_backend__jumpopt__short_labels_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module11)
	MR_init_entry1(ll_backend__jumpopt__short_labels_rval_3_0);
	MR_init_label8(ll_backend__jumpopt__short_labels_rval_3_0,81,5,6,82,9,10,85,33)
	MR_init_label8(ll_backend__jumpopt__short_labels_rval_3_0,34,84,31,11,14,15,18,41)
	MR_init_label4(ll_backend__jumpopt__short_labels_rval_3_0,21,25,27,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i81) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i82) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i10));
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_lval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i5);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	MR_r2 = (MR_Word) MR_string_const("var rval in short_labels_rval", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_ctfield(2, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i9);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i11);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i84);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i85);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i33);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i34);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i31);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i41) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i18));
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r5),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r5, 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i41);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r5, 0),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i41);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r5, 0),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i21);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r5, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i41);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i25);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i27);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module12)
	MR_init_entry1(ll_backend__jumpopt__short_labels_lval_3_0);
	MR_init_label8(ll_backend__jumpopt__short_labels_lval_3_0,4,5,6,7,8,9,10,13)
	MR_init_label8(ll_backend__jumpopt__short_labels_lval_3_0,58,18,59,20,60,22,61,24)
	MR_init_label8(ll_backend__jumpopt__short_labels_lval_3_0,62,26,63,28,29,64,31,32)
	MR_init_label1(ll_backend__jumpopt__short_labels_lval_3_0,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i4) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i13));
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i6) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i8) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i9) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i10));
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i58) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i59) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i64) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i32) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i33));
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i18);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i20);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i22);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i24);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i26);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i28);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i29);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i31);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lvar lval in short_labels_lval", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_livevals_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(ll_backend__opt_util__is_this_label_next_3_0);
MR_decl_entry(ll_backend__opt_util__filter_out_labels_2_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
MR_decl_entry(ll_backend__code_util__neg_rval_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_r1_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ll_backend__jumpopt_module13)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_instr_list_16_0);
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,993,365,10,11,12,14,15,18)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,16,20,24,30,29,32,37,39)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,40,27,28,45,50,52,53,42)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,43,58,68,70,54,55,76,86)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,88,89,71,72,91,95,97,100)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,98,102,90,25,109,111,112,113)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,116,120,123,121,125,117,131,136)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,134,142,138,139,145,147,144,150)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,152,149,155,154,161,163,164,166)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,168,169,170,171,172,159,174,176)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,177,178,180,183,182,179,187,190)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,186,173,132,199,201,202,203,206)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,207,209,208,211,216,220,225,227)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,222,229,231,235,238,240,241,219)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,246,248,254,252,256,257,244,261)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,263,265,267,269,271,273,274,280)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,278,277,284,286,292,293,294,463)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,264,301,303,217,325,326,328,329)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,327,331,332,336,337,340,338,346)
	MR_init_label8(ll_backend__jumpopt__jump_opt_instr_list_16_0,347,350,468,348,352,353,354,4)
	MR_init_label3(ll_backend__jumpopt__jump_opt_instr_list_16_0,357,995,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_instr_list_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(27);
	MR_sv(27) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,993)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i3);
	}
	MR_r16 = MR_ctfield(1, MR_r1, 0);
	MR_r15 = MR_ctfield(0, MR_r16, 0);
	if (MR_INT_EQ(MR_tag(MR_r15),3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i10);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r17 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r16;
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_sv(16) = MR_r15;
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r14 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r15, 0),
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i11) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i14) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i116) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i131) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i206) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i216) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i325) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i365) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i336) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i346));
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(16) = MR_r15;
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__this_file_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i12);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_list: block", 17);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_tempr2 = MR_r16;
	MR_sv(14) = MR_tempr2;
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i15);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i18);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(26);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i20);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r15;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 2);
	MR_r17 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i25);
	}
	MR_r18 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(22) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(21) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(20) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(19) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(18) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_r16;
	MR_sv(17) = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_sv(22),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_tempr3;
	MR_sv(16) = MR_tempr2;
	MR_r4 = MR_r18;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i29);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(22),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i28);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(16) = MR_r15;
	MR_r4 = MR_r18;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(23) = MR_r4;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i32);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i27);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i27);
	}
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i37);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i27);
	}
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i39);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(19) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(18);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_sv(17) = MR_tempr3;
	MR_sv(18) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i40);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(19);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(17);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i53);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_r15 = MR_sv(16);
	MR_r18 = MR_sv(23);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(22),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i43);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(16) = MR_r15;
	MR_tempr2 = MR_r18;
	MR_sv(23) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i45);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i42);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i42);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i42);
	}
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i50);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(18);
	MR_r1 = MR_sv(17);
	MR_sv(17) = MR_tempr1;
	MR_sv(18) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i52);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(24);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i53);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i109);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_r15 = MR_sv(16);
	MR_r18 = MR_sv(23);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(22),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_sv(22), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i55);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_tempr2 = MR_r9;
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(16) = MR_r15;
	MR_tempr3 = MR_r18;
	MR_sv(23) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i58);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i68);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(20) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(21) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(18);
	MR_r1 = MR_sv(17);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,4,2);
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i70);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(21);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i109);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_r15 = MR_sv(16);
	MR_r18 = MR_sv(23);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(22),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_sv(22), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i72);
	}
	if (MR_LTAGS_TEST(MR_r13,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i72);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_tempr2 = MR_r9;
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_tempr3 = MR_r13;
	MR_sv(12) = MR_tempr3;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(16) = MR_r15;
	MR_tempr4 = MR_r18;
	MR_sv(23) = MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(24) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(25) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i76);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr3, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i86);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i88);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(24);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("branch around if cannot tail call", 33);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_sv(22) = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_sv(23) = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(18);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(17);
	MR_sv(17) = MR_tempr1;
	MR_sv(18) = MR_tempr4;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,4,2);
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i89);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(23);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(17);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("non tail call", 13);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tempr15 = MR_sv(22);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr15;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_tempr15;
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_sv(21);
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr12;
	MR_tfield(1, MR_tempr13, 1) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr14, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr14;
	MR_tfield(0, MR_tempr14, 0) = MR_sv(24);
	MR_tfield(0, MR_tempr14, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_sv(26), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(26), 0) = MR_tempr14;
	MR_r1 = MR_tempr13;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i109);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_r15 = MR_sv(16);
	MR_r18 = MR_sv(23);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(16) = MR_r15;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r18;
	MR_sv(23) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i91);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i90);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i90);
	}
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i95);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i90);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i97);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_sv(23) = MR_r2;
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i100);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i98);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i109);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(23);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = MR_sv(19);
	MR_tfield(3, MR_tempr2, 4) = MR_sv(20);
	MR_tfield(3, MR_tempr2, 5) = MR_sv(21);
	MR_tfield(3, MR_tempr2, 6) = MR_sv(22);
	MR_r1 = MR_sv(17);
	MR_sv(17) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i102);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr3;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i109);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_sv(12);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i109);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(16) = MR_r15;
	MR_sv(26) = MR_r13;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i111);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_ctfield(1, MR_r1, 1);
	MR_sv(14) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i112);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i113);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i354);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 1;
	MR_r14 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r15;
	MR_tempr1 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i117);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i117);
	}
	MR_sv(1) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(13) = MR_r14;
	MR_tempr5 = MR_r16;
	MR_sv(14) = MR_tempr5;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(12) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(18) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(26) = MR_r13;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i120);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i123);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i121);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i125);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r17 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r16;
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_sv(16) = MR_r15;
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r14 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r17 = MR_tempr1;
	MR_tempr3 = MR_r15;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i132);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr4 = MR_r16;
	MR_sv(17) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_tempr4;
	MR_sv(15) = MR_tempr1;
	MR_sv(16) = MR_tempr3;
	MR_sv(18) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i136);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i134);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i199);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_tempr2 = MR_sv(15);
	MR_r17 = MR_tempr2;
	MR_r15 = MR_sv(16);
	MR_r1 = MR_sv(18);
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i139);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i139);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i142);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i138);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i199);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_r17 = MR_sv(15);
	MR_r15 = MR_sv(16);
	MR_r1 = MR_sv(18);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(15) = MR_r17;
	MR_sv(16) = MR_r15;
	MR_sv(18) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(18);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i145);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i144);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i147);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i190);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i150);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i149);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i152);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i190);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i155);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i154);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i190);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i159);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i161);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i159);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i163);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i164);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i159);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(19) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i166);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i159);
	}
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_labels_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i168);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i169);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i170);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_sv(12);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__jumpopt__jump_opt_instr_list_16_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i171);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i172);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i199);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i174);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i173);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i176);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(17);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("shortcircuited jump: ", 21);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i177);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i178);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i180);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(20);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i183);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i182);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(20);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(20);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr5;
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i187);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i186);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i186);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(17);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i190);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i199);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(26) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i199);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_sv(12);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i199);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r16;
	MR_sv(15) = MR_r17;
	MR_sv(16) = MR_r15;
	MR_sv(26) = MR_r13;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i201);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_ctfield(1, MR_r1, 1);
	MR_sv(14) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i202);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i203);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i354);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 1;
	MR_r14 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_tempr2 = MR_r16;
	MR_sv(14) = MR_tempr2;
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i207);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i209);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i208);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i211);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r17 = MR_tempr1;
	MR_tempr3 = MR_r15;
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i217);
	}
	MR_sv(22) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_r16;
	MR_sv(17) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_tempr4;
	MR_sv(15) = MR_tempr1;
	MR_sv(16) = MR_tempr3;
	MR_sv(26) = MR_r13;
	MR_sv(21) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i220);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	MR_sv(18) = MR_ctfield(1, MR_r1, 1);
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i222);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i225);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i227);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i229);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r1 = MR_sv(18);
	MR_r3 = (MR_Integer) 0;
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(19) = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i231);
	}
	if (MR_PTAG_TESTR(MR_sv(19),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i235);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i238);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i219);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i240);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(20);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i241);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i463);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i244);
	}
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i246);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i244);
	}
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i248);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i244);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i244);
	}
	MR_sv(20) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(19) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i252);
	}
	MR_sv(18) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i254);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i244);
	}
	MR_r6 = MR_sv(18);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r6;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i256);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(20);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (switched)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i257);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(19);
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i261);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i468);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i263);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i265);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	MR_sv(18) = MR_r2;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i267);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i269);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	MR_r1 = MR_sv(18);
	MR_sv(18) = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i271);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_sv(18) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(20) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i273);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i274);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	if (MR_LTAGS_TEST(MR_sv(19),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	if (MR_LTAGS_TESTR(MR_sv(18),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i278);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(19), 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i280);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i277);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(18),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(19), 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	MR_r2 = MR_sv(12);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_np_call_localret_ent(ll_backend__jumpopt__needs_workaround_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i284);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i264);
	}
	if (MR_PTAG_TESTR(MR_sv(18),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i286);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(18), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i286);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i286);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i286);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(20);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i292);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("shortcircuit bool computation", 29);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(20);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i292);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i293);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i294);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,294)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i354);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,463)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 1;
	MR_r14 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i301);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i468);
	}
	MR_r1 = (MR_Word) MR_string_const("shortcircuited jump: ", 21);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i303);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(21);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r18 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r16;
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_sv(16) = MR_r15;
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_r17;
	MR_r14 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_tempr3 = MR_r16;
	MR_sv(14) = MR_tempr3;
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_tempr4 = MR_r15;
	MR_sv(16) = MR_tempr4;
	MR_sv(17) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(18) = MR_ctfield(3, MR_tempr4, 1);
	MR_sv(19) = MR_ctfield(3, MR_tempr4, 3);
	MR_sv(20) = MR_ctfield(3, MR_tempr4, 4);
	MR_sv(21) = MR_ctfield(3, MR_tempr4, 5);
	MR_sv(22) = MR_ctfield(3, MR_tempr4, 6);
	MR_sv(23) = MR_ctfield(3, MR_tempr4, 7);
	MR_sv(24) = MR_ctfield(3, MR_tempr4, 8);
	MR_sv(25) = MR_ctfield(3, MR_tempr4, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr4, 2);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i326);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(23),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i328);
	}
	MR_r14 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i327);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(23);
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i329);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(12);
	MR_sv(12) = MR_tempr2;
	MR_r14 = (MR_Integer) 1;
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i331);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r15 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(15) = MR_r1;
	MR_sv(26) = MR_r13;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some redirects)", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i332);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(23);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(19);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(20);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(21);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(22);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(24);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(25);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_tempr2 = MR_r16;
	MR_sv(14) = MR_tempr2;
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i337);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i340);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i338);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(26);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (redirect)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i352);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_tempr2 = MR_r16;
	MR_sv(14) = MR_tempr2;
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i347);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i350);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i348);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,468)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r14 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r13 = MR_sv(26);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(26);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (redirect)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i352);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i353);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i354);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r15 = (MR_Integer) 0;
	MR_r14 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(26);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(16),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i995);
	}
	if (MR_INT_NE(MR_r15,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i357);
	}
	MR_succip_word = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i993);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,995)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i993);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r13;
	MR_r2 = MR_r14;
	MR_decr_sp_and_return(27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_bad_livevals_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module14)
	MR_init_entry1(ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
	MR_init_label8(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,10,12,13,14,15,16,11,19)
	MR_init_label8(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,18,20,23,22,17,25,26,29)
	MR_init_label1(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i2);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i3);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i4);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i5);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i6);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i7);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_build_maps_14_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i8);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i9);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i10);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i12);
	}
	MR_r10 = MR_sv(1);
	MR_r12 = MR_sv(2);
	MR_r11 = MR_sv(4);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i11);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i13);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i14);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i15);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i16);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_sv(1);
	MR_r12 = MR_sv(2);
	MR_r11 = MR_sv(4);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r9 = MR_sv(10);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i18);
	}
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r13 = (MR_Word) MR_tbmkword(0, 0);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_16_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i19);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i25);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r13, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r13, 0) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_16_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i20);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__this_file_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i23);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("jumpopt_main: lost the next label number", 40);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i17);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i25);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_bad_livevals_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i26);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i29);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i27);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module15)
	MR_init_entry1(ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_init_label8(ll_backend__jumpopt__short_foreign_proc_component_5_0,8,21,47,11,13,10,17,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_foreign_proc_component_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i21);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i8);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i47);
	}
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i11);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i13);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i17);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i17);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module16)
	MR_init_entry1(__Unify___ll_backend__jumpopt__new_remain_0_0);
	MR_init_label3(__Unify___ll_backend__jumpopt__new_remain_0_0,27,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__jumpopt__new_remain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i27);
	}
	MR_r1 = (MR_r2 == MR_r1);
	MR_proceed();
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__jumpopt__new_remain_0_0_i5);
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module17)
	MR_init_entry1(__Compare___ll_backend__jumpopt__new_remain_0_0);
	MR_init_label5(__Compare___ll_backend__jumpopt__new_remain_0_0,5,3,39,9,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__jumpopt__new_remain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__jumpopt__new_remain_0_0_i9);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i36);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__jumpopt_maybe_bunch_0(void)
{
	ll_backend__jumpopt_module0();
	ll_backend__jumpopt_module1();
	ll_backend__jumpopt_module2();
	ll_backend__jumpopt_module3();
	ll_backend__jumpopt_module4();
	ll_backend__jumpopt_module5();
	ll_backend__jumpopt_module6();
	ll_backend__jumpopt_module7();
	ll_backend__jumpopt_module8();
	ll_backend__jumpopt_module9();
	ll_backend__jumpopt_module10();
	ll_backend__jumpopt_module11();
	ll_backend__jumpopt_module12();
	ll_backend__jumpopt_module13();
	ll_backend__jumpopt_module14();
	ll_backend__jumpopt_module15();
	ll_backend__jumpopt_module16();
	ll_backend__jumpopt_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__jumpopt__init(void);
void mercury__ll_backend__jumpopt__init_type_tables(void);
void mercury__ll_backend__jumpopt__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__jumpopt__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__jumpopt__init_complexity_procs(void);
#endif

void mercury__ll_backend__jumpopt__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__jumpopt_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0,
		ll_backend__jumpopt__new_remain_0_0);
	mercury__ll_backend__jumpopt__init_debugger();
}

void mercury__ll_backend__jumpopt__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0);
	}
}


void mercury__ll_backend__jumpopt__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__jumpopt__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__jumpopt__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
