/*
** Automatically generated from `jumpopt.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__jumpopt__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.jumpopt.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.jumpopt.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 36 "ll_backend.jumpopt.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.jumpopt.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ll_backend.jumpopt.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "ll_backend.jumpopt.c"
#line 49 "ll_backend.jumpopt.c"
#include "ll_backend.jumpopt.mh"

#line 52 "ll_backend.jumpopt.c"
#line 53 "ll_backend.jumpopt.c"
#ifndef LL_BACKEND__JUMPOPT_DECL_GUARD
#define LL_BACKEND__JUMPOPT_DECL_GUARD

#line 57 "ll_backend.jumpopt.c"
#line 58 "ll_backend.jumpopt.c"

#endif
#line 61 "ll_backend.jumpopt.c"

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
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_Word * f2[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__jumpopt__type_ctor_info_new_remain_0;
MR_decl_label5(ll_backend__jumpopt__adjust_livevals_3_0, 5,9,8,2,3)
MR_decl_label7(ll_backend__jumpopt__final_dest_2_6_0, 38,5,4,8,12,2,3)
MR_decl_label6(ll_backend__jumpopt__jump_opt_build_forkmap_4_0, 26,3,7,10,4,5)
MR_decl_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0, 91,3,6,7,14,16,19,17,20,23)
MR_decl_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0, 26,21,27,30,33,28,34,37,40,35)
MR_decl_label6(ll_backend__jumpopt__jump_opt_build_maps_14_0, 41,44,48,50,43,4)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 1176,3,5,533,7,8,11,9,14,21)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 22,24,25,28,26,31,38,40,42,43)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 41,46,48,54,55,58,56,68,73,71)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 81,77,78,88,90,86,98,100,96,108)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 106,115,117,119,121,123,124,125,127,128)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 113,131,133,134,135,137,142,141,136,152)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 156,150,130,164,166,168,169,176,180,185)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 187,182,189,191,195,198,200,204,179,210)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 212,218,216,220,224,207,231,233,235,238)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 240,242,244,245,249,253,248,256,258,277)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 278,279,234,286,288,177,304,305,308,306)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 312,318,319,322,320,325,332,338,337,342)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 347,349,352,335,336,362,367,371,375,358)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 359,382,392,409,377,378,423,433,435,457)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 417,418,474,479,481,484,482,490,473,333)
MR_decl_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0, 500,502,504,505,643,508,512,515,646,513)
MR_decl_label7(ll_backend__jumpopt__jump_opt_instr_list_16_0, 518,524,525,509,4,535,1179)
MR_decl_label10(ll_backend__jumpopt__needs_workaround_2_0, 5,4,15,18,28,30,39,10,3,210)
MR_decl_label1(ll_backend__jumpopt__needs_workaround_2_0, 1)
MR_decl_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 2,4,6,7,8,9,10,11,12,14)
MR_decl_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 15,16,17,18,13,22,20,26,28,19)
MR_decl_label4(ll_backend__jumpopt__optimize_jumps_in_proc_12_0, 30,31,34,32)
MR_decl_label8(ll_backend__jumpopt__short_foreign_proc_component_5_0, 24,27,53,5,7,4,12,11)
MR_decl_label2(ll_backend__jumpopt__short_label_3_0, 3,2)
MR_decl_label10(ll_backend__jumpopt__short_labels_lval_3_0, 39,42,3,65,5,6,10,11,13,66)
MR_decl_label10(ll_backend__jumpopt__short_labels_lval_3_0, 15,17,64,20,63,23,62,26,29,30)
MR_decl_label5(ll_backend__jumpopt__short_labels_lval_3_0, 61,32,34,60,36)
MR_decl_label10(ll_backend__jumpopt__short_labels_rval_3_0, 99,37,46,100,41,51,54,103,4,5)
MR_decl_label9(ll_backend__jumpopt__short_labels_rval_3_0, 7,31,22,35,13,15,12,102,44)
MR_decl_label6(ll_backend__jumpopt__short_maybe_labels_3_0, 27,5,7,9,6,12)
MR_decl_label3(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0, 3,4,7)
MR_decl_label4(__Unify___ll_backend__jumpopt__new_remain_0_0, 14,5,7,1)
MR_decl_label6(__Compare___ll_backend__jumpopt__new_remain_0_0, 24,7,5,9,11,16)
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
MR_decl_static(ll_backend__jumpopt__short_maybe_labels_3_0)
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_0 mercury_common_0[4] =
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
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_TAG_COMMON(0,4,0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[6] =
{
{
0,
MR_tbmkword(0, 1)
},
{
0,
MR_tbmkword(0, 0)
},
{
6,
MR_tbmkword(0, 0)
},
{
7,
MR_TAG_COMMON(0,7,0)
},
{
3,
MR_TAG_COMMON(0,7,0)
},
{
4,
MR_TAG_COMMON(0,7,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const struct mercury_type_2 mercury_common_2[1] =
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
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__jumpopt__jump_opt_instr_list_16_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,0),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[5] =
{
{
MR_TAG_COMMON(3,1,2),
MR_string_const("shortcircuit", 12)
},
{
MR_TAG_COMMON(1,5,1),
MR_string_const("", 0)
},
{
MR_TAG_COMMON(3,8,0),
MR_string_const("discard this frame", 18)
},
{
MR_TAG_COMMON(3,8,1),
MR_string_const("setup PC on return from tailcall", 32)
},
{
MR_TAG_COMMON(3,8,2),
MR_string_const("setup curfr on return from tailcall", 35)
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_string_const("", 0)
},
{
MR_string_const("r1 = old r1", 11)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
0,
1
}
},
};

static const struct mercury_type_7 mercury_common_7[5] =
{
{
MR_tbmkword(0, 2)
},
{
MR_TAG_COMMON(3,1,3)
},
{
MR_TAG_COMMON(3,1,4)
},
{
MR_TAG_COMMON(3,1,5)
},
{
MR_tbmkword(0, 1)
},
};

static const struct mercury_type_8 mercury_common_8[3] =
{
{
1,
MR_tbmkword(0, 1),
MR_TAG_COMMON(0,7,1)
},
{
1,
MR_tbmkword(0, 0),
MR_TAG_COMMON(0,7,2)
},
{
1,
MR_tbmkword(0, 2),
MR_TAG_COMMON(0,7,3)
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
2,
{
MR_tbmkword(0, 13),
MR_TAG_COMMON(0,7,0),
MR_TAG_COMMON(0,7,4)
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
728,
"d2;c18;d8;c2;q;c1;"
};


MR_decl_entry(ll_backend__opt_util__skip_comments_2_0);
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(ll_backend__opt_util__skip_comments_livevals_2_0);
MR_decl_entry(ll_backend__opt_util__is_proceed_next_2_0);
MR_decl_entry(ll_backend__opt_util__is_sdproceed_next_2_0);
MR_decl_entry(ll_backend__opt_util__is_succeed_next_2_0);
MR_decl_entry(ll_backend__opt_util__find_no_fallthrough_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module0)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_build_maps_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_build_maps_14_0);
	MR_init_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0,91,3,6,7,14,16,19,17,20,23)
	MR_init_label10(ll_backend__jumpopt__jump_opt_build_maps_14_0,26,21,27,30,33,28,34,37,40,35)
	MR_init_label6(ll_backend__jumpopt__jump_opt_build_maps_14_0,41,44,48,50,43,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_build_maps'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_build_maps_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_decr_sp_and_return(11);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r9 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
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
	MR_sv(9) = MR_tfield(3, MR_tempr2, 1);
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
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i7);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tfield(1, MR_r1, 0);
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i14);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i14);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_livevals_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i16);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i19);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i20);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_proceed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i23);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i26);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i27);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i30);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i28);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i33);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i34);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__is_succeed_next_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i37);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i35);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i40);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i41);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_sv(7);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i44);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i43);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__find_no_fallthrough_2_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i48);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_maps_14_0_i50);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i91);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,43)
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
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i91);
MR_def_label(ll_backend__jumpopt__jump_opt_build_maps_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_maps_14_0_i91);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__is_forkproceed_next_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module1)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_build_forkmap_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_build_forkmap_4_0);
	MR_init_label6(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,26,3,7,10,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_build_forkmap'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_build_forkmap_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i10);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i26);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_build_forkmap_4_0_i26);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module2)
	MR_init_entry1(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__jumpopt__block_may_be_duplicated_1_0);
	MR_init_label3(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'block_may_be_duplicated'/2 mode 0 */
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
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 6);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 10);
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

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module3)
	MR_init_entry1(fn__ll_backend__jumpopt__redirect_comment_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__jumpopt__redirect_comment_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'redirect_comment'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__jumpopt__redirect_comment_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" (redirected return)", 20);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module4)
	MR_init_entry1(ll_backend__jumpopt__needs_workaround_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__needs_workaround_2_0);
	MR_init_label10(ll_backend__jumpopt__needs_workaround_2_0,5,4,15,18,28,30,39,10,3,210)
	MR_init_label1(ll_backend__jumpopt__needs_workaround_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'needs_workaround'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__needs_workaround_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,12)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i5);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i4);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,13)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 3);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i39);
	}
	if (MR_PTAG_TEST(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i28);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i15);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i30);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = ((MR_Integer) MR_tempr2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__jumpopt__needs_workaround_2_0_i10);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i210);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,8)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i210);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__needs_workaround_2_0_i210);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__lval_0_0);
	}
MR_def_label(ll_backend__jumpopt__needs_workaround_2_0,210)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__jumpopt__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
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
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module6)
	MR_init_entry1(ll_backend__jumpopt__adjust_livevals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__adjust_livevals_3_0);
	MR_init_label5(ll_backend__jumpopt__adjust_livevals_3_0,5,9,8,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjust_livevals'/3 mode 0 */
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
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__adjust_livevals_3_0_i5);
MR_def_label(ll_backend__jumpopt__adjust_livevals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__adjust_livevals_3_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__final_dest_2_6_0);
	MR_init_label7(ll_backend__jumpopt__final_dest_2_6_0,38,5,4,8,12,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'final_dest_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__final_dest_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr3;
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i4);
	}
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r3 = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__final_dest_2_6_0_i8);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__jumpopt__final_dest_2_6_0_i12);
MR_def_label(ll_backend__jumpopt__final_dest_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i2);
	}
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ll_backend__jumpopt__final_dest_2_6_0_i38);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__final_dest_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'final_dest'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__final_dest_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(ll_backend__jumpopt__final_dest_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module9)
	MR_init_entry1(ll_backend__jumpopt__short_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_label_3_0);
	MR_init_label2(ll_backend__jumpopt__short_label_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_label'/3 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ll_backend__jumpopt__final_dest_2_6_0);
	}
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
	MR_init_entry1(ll_backend__jumpopt__short_maybe_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_maybe_labels_3_0);
	MR_init_label6(ll_backend__jumpopt__short_maybe_labels_3_0,27,5,7,9,6,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_maybe_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_maybe_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_maybe_labels_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_maybe_labels_3_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i12);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i7);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_maybe_labels_3_0_i6);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i9);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i12);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__short_maybe_labels_3_0_i12);
MR_def_label(ll_backend__jumpopt__short_maybe_labels_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module11)
	MR_init_entry1(ll_backend__jumpopt__short_labels_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_labels_rval_3_0);
	MR_init_label10(ll_backend__jumpopt__short_labels_rval_3_0,99,37,46,100,41,51,54,103,4,5)
	MR_init_label9(ll_backend__jumpopt__short_labels_rval_3_0,7,31,22,35,13,15,12,102,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_labels_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i99) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i46) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i100) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i51));
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_lval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i37);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	MR_r2 = (MR_Word) MR_string_const("var rval in short_labels_rval", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i41);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i7);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i102);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r2, 0),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i103);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i4);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i5);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i31) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_rval_3_0_i35));
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r5),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r5, 0),3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i54);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i13);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_labels_rval_3_0_i12);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i15);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_rval_3_0_i44);
MR_def_label(ll_backend__jumpopt__short_labels_rval_3_0,44)
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module12)
	MR_init_entry1(ll_backend__jumpopt__short_labels_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_labels_lval_3_0);
	MR_init_label10(ll_backend__jumpopt__short_labels_lval_3_0,39,42,3,65,5,6,10,11,13,66)
	MR_init_label10(ll_backend__jumpopt__short_labels_lval_3_0,15,17,64,20,63,23,62,26,29,30)
	MR_init_label5(ll_backend__jumpopt__short_labels_lval_3_0,61,32,34,60,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_labels_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_labels_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i39) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i42));
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i34) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i13) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i3) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i10) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i29) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i17));
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i60) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i61) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i62) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i63) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i64) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i65) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i66) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i30) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__short_labels_lval_3_0_i11));
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i5);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i6);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 3);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lvar lval in short_labels_lval", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i15);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i20);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,20)
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
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i23);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,23)
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
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i26);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 4);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i32);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__short_labels_lval_3_0_i36);
MR_def_label(ll_backend__jumpopt__short_labels_lval_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_foreign_proc_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(ll_backend__opt_util__is_this_label_next_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_labels_2_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(ll_backend__code_util__neg_rval_2_0);
MR_decl_entry(ll_backend__opt_util__filter_out_r1_3_0);
MR_decl_entry(ll_backend__opt_util__filter_out_livevals_2_0);
MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(ll_backend__jumpopt_module13)
	MR_init_entry1(ll_backend__jumpopt__jump_opt_instr_list_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__jump_opt_instr_list_16_0);
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,1176,3,5,533,7,8,11,9,14,21)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,22,24,25,28,26,31,38,40,42,43)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,41,46,48,54,55,58,56,68,73,71)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,81,77,78,88,90,86,98,100,96,108)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,106,115,117,119,121,123,124,125,127,128)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,113,131,133,134,135,137,142,141,136,152)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,156,150,130,164,166,168,169,176,180,185)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,187,182,189,191,195,198,200,204,179,210)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,212,218,216,220,224,207,231,233,235,238)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,240,242,244,245,249,253,248,256,258,277)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,278,279,234,286,288,177,304,305,308,306)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,312,318,319,322,320,325,332,338,337,342)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,347,349,352,335,336,362,367,371,375,358)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,359,382,392,409,377,378,423,433,435,457)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,417,418,474,479,481,484,482,490,473,333)
	MR_init_label10(ll_backend__jumpopt__jump_opt_instr_list_16_0,500,502,504,505,643,508,512,515,646,513)
	MR_init_label7(ll_backend__jumpopt__jump_opt_instr_list_16_0,518,524,525,509,4,535,1179)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'jump_opt_instr_list'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__jump_opt_instr_list_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,1176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i3);
	}
	MR_r1 = MR_r13;
	MR_r2 = MR_r14;
	MR_decr_sp_and_return(28);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r16 = MR_tfield(1, MR_r1, 0);
	MR_r15 = MR_tfield(0, MR_r16, 0);
	if (MR_INT_EQ(MR_tag(MR_r15),3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i533);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r17 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r16;
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_sv(16) = MR_r15;
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r14 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,533)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r15, 0),
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i21) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i7) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i318) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i332) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i508) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i68) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i24) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i176) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i38) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i5) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i54) MR_AND
		MR_LABEL_AP(ll_backend__jumpopt__jump_opt_instr_list_16_0_i304));
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,7)
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
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i8);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i11);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i9);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(27);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i14);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,21)
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i22);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("instr_list: block", 17);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,24)
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
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_maybe_labels_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i25);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i28);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i26);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i31);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
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
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	MR_tempr4 = MR_r15;
	MR_sv(16) = MR_tempr4;
	MR_sv(17) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(18) = MR_tfield(3, MR_tempr4, 1);
	MR_sv(19) = MR_tfield(3, MR_tempr4, 3);
	MR_sv(20) = MR_tfield(3, MR_tempr4, 4);
	MR_sv(21) = MR_tfield(3, MR_tempr4, 5);
	MR_sv(22) = MR_tfield(3, MR_tempr4, 6);
	MR_sv(23) = MR_tfield(3, MR_tempr4, 7);
	MR_sv(24) = MR_tfield(3, MR_tempr4, 8);
	MR_sv(25) = MR_tfield(3, MR_tempr4, 9);
	MR_sv(26) = MR_tfield(3, MR_tempr4, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, foreign_proc_component);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr4, 2);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i40);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(23),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i42);
	}
	MR_r15 = MR_r2;
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
	MR_r16 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_r16;
	MR_r14 = MR_r15;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i41);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(23);
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i43);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
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
	MR_tempr3 = MR_sv(12);
	MR_sv(12) = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = (MR_Integer) 1;
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i46);
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,46)
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
	MR_sv(27) = MR_r13;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some redirects)", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i48);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(23);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(19);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(20);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(21);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(22);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 8) = MR_sv(24);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(25);
	MR_tfield(3, MR_tempr1, 10) = MR_sv(26);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,54)
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
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i55);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i58);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i56);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(27);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (redirect)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i312);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r17 = MR_tempr1;
	MR_tempr3 = MR_r15;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i177);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr4 = MR_r16;
	MR_sv(17) = MR_tfield(0, MR_tempr4, 1);
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i73);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i71);
	}
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i204);
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(15);
	MR_r17 = MR_tempr1;
	MR_r15 = MR_sv(16);
	MR_r1 = MR_sv(18);
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i78);
	}
	MR_tempr2 = MR_tfield(3, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i78);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__is_this_label_next_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i81);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i77);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(14);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,77)
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,78)
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i88);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i86);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i90);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i156);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i98);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i96);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i100);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i156);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i108);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i106);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i156);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i113);
	}
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i115);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i113);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i117);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i119);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i113);
	}
	MR_sv(19) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__block_may_be_duplicated_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i121);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i113);
	}
	MR_r1 = MR_sv(19);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_labels_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i123);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i124);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i125);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
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
	}
	MR_np_localcall_lab(ll_backend__jumpopt__jump_opt_instr_list_16_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i127);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i128);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i164);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i131);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i130);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i133);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_tfield(0, MR_r2, 0);
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("shortcircuited jump: ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i134);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i135);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i137);
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
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i136);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i142);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i141);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(20);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i136);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(20);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i152);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i150);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i150);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(17);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__adjust_livevals_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i156);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(27) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i164);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(27) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i164);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i166);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_tfield(1, MR_r1, 1);
	MR_sv(14) = MR_tfield(1, MR_r1, 0);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i168);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i169);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i525);
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
	MR_r16 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(27);
	MR_r14 = MR_r16;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r17 = MR_tempr1;
	MR_tempr3 = MR_r15;
	MR_tempr2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i177);
	}
	MR_sv(22) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_r16;
	MR_sv(17) = MR_tfield(0, MR_tempr4, 1);
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
	MR_sv(27) = MR_r13;
	MR_sv(21) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i180);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	MR_sv(18) = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i182);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i185);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i187);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i189);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r1 = MR_sv(18);
	MR_r3 = (MR_Integer) 0;
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	MR_sv(20) = MR_tfield(0, MR_r2, 1);
	MR_sv(19) = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i191);
	}
	if (MR_PTAG_TESTR(MR_sv(19),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i195);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i198);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i179);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i200);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(19);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(20);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(18);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i204);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i643);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i207);
	}
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i210);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i207);
	}
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__opt_util__skip_comments_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i212);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i207);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i207);
	}
	MR_sv(20) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(19) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i216);
	}
	MR_sv(18) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i218);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i207);
	}
	MR_r6 = MR_sv(18);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r6;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i220);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i224);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(19);
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i231);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i646);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i233);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i235);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	MR_sv(18) = MR_r2;
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i238);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__opt_util__is_sdproceed_next_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i240);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i242);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_tfield(1, MR_r1, 0);
	MR_sv(20) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_r1_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i244);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i245);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	if (MR_LTAGS_TEST(MR_sv(19),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	if (MR_LTAGS_TESTR(MR_sv(18),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i249);
	}
	MR_r3 = MR_tfield(1, MR_sv(19), 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	MR_r2 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i248);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(18),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	MR_r2 = MR_tfield(1, MR_sv(19), 0);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ll_backend__code_util__neg_rval_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i253);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_np_call_localret_ent(ll_backend__jumpopt__needs_workaround_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i256);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i234);
	}
	if (MR_PTAG_TESTR(MR_sv(18),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i258);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(18), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i258);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i258);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i258);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tfield(1, MR_r2, 1) = MR_sv(20);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i277);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("shortcircuit bool computation", 29);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(20);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i277);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i278);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i279);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i525);
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
	MR_r16 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(27);
	MR_r14 = MR_r16;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i286);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i646);
	}
	MR_r1 = (MR_Word) MR_string_const("shortcircuited jump: ", 21);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i288);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(21);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,177)
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,304)
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
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(19) = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i305);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i308);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i306);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(27);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(19);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (redirect)", 11);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i312);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,318)
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
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	MR_tempr3 = MR_r15;
	MR_sv(16) = MR_tempr3;
	MR_sv(17) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(19) = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(19);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_labels_rval_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i319);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i322);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i320);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_sv(27);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i325);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r15;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r17 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i333);
	}
	MR_r18 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(22) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(21) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(20) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(19) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(18) = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_r16;
	MR_sv(17) = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_sv(22),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i338);
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
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i337);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(22),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i336);
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(23) = MR_r4;
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i342);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i335);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i335);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i335);
	}
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i347);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i335);
	}
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_livevals_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i349);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(19) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tempr2 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_sv(18) = MR_r2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i352);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,352)
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i375);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,335)
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(22),0,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i359);
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i362);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i358);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i358);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i358);
	}
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i367);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i358);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("", 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tempr2 = MR_sv(17);
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i371);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,371)
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i375);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_sv(27) = MR_sv(12);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i500);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,358)
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(22),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i378);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_sv(22), 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i378);
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
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i382);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i392);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,392)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i377);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(20) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(21) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(18);
	MR_r2 = MR_sv(17);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i409);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,409)
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
	MR_sv(27) = MR_sv(12);
	MR_r1 = MR_tempr7;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i500);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,377)
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(22),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i418);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_sv(22), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i418);
	}
	if (MR_LTAGS_TEST(MR_r13,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i418);
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
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(24) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(25) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr4;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i423);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,6)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i433);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,433)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i417);
	}
	MR_r1 = MR_sv(25);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i435);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(24);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(3,9,0);
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
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(18);
	MR_sv(12) = MR_r2;
	MR_tempr3 = MR_sv(17);
	MR_sv(17) = MR_tempr1;
	MR_sv(18) = MR_tempr4;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i457);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(23);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
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
	MR_tag_alloc_heap(MR_sv(27), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(27), 0) = MR_tempr14;
	MR_r1 = MR_tempr13;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i500);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,417)
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
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,418)
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
	MR_sv(24) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(24);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i474);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,474)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i473);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i473);
	}
	MR_sv(24) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i479);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,479)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i473);
	}
	MR_r2 = MR_sv(24);
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(23);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_5_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i481);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,481)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(23);
	MR_sv(23) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(23);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i484);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,484)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i482);
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
	MR_sv(27) = MR_sv(12);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i500);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,482)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(23);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(19);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(20);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(21);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(22);
	MR_r2 = MR_sv(17);
	MR_sv(17) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ll_backend__jumpopt__redirect_comment_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i490);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,490)
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
	MR_sv(27) = MR_sv(12);
	MR_r1 = MR_tempr3;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i500);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_sv(12);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i500);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,333)
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
	MR_sv(27) = MR_r13;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,500)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i502);
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,502)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_tfield(1, MR_r1, 1);
	MR_sv(14) = MR_tfield(1, MR_r1, 0);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i504);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,504)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i505);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,505)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i525);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,643)
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
	MR_r16 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(27);
	MR_r14 = MR_r16;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,508)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r15;
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i509);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i509);
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
	MR_sv(17) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(12) = MR_tfield(3, MR_tempr3, 1);
	MR_sv(18) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(27) = MR_r13;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__short_label_3_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i512);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i515);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,515)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i513);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,646)
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
	MR_r13 = MR_sv(27);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,513)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r1 = MR_sv(17);
	MR_r2 = (MR_Word) MR_string_const(" (some shortcircuits)", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i518);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,518)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_sv(15);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i524);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,524)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__jumpopt__jump_opt_instr_list_16_0_i525);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,525)
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
	MR_r16 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r13 = MR_sv(27);
	MR_r14 = MR_r16;
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i4);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,509)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r16;
	MR_tfield(1, MR_tempr1, 1) = MR_r14;
	MR_sv(16) = MR_r15;
	MR_r15 = (MR_Integer) 0;
	MR_r1 = MR_sv(15);
	MR_r14 = MR_tempr1;
	}
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(16),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i1179);
	}
	if (MR_INT_NE(MR_r15,1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i535);
	}
	MR_succip_word = MR_sv(28);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i1176);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,535)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
MR_def_label(ll_backend__jumpopt__jump_opt_instr_list_16_0,1179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(28);
	MR_GOTO_LAB(ll_backend__jumpopt__jump_opt_instr_list_16_0_i1176);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
	MR_init_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,2,4,6,7,8,9,10,11,12,14)
	MR_init_label10(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,15,16,17,18,13,22,20,26,28,19)
	MR_init_label4(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,30,31,34,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_jumps_in_proc'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i2);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i4);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i6);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i7);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i8);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i9);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_build_maps_14_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i10);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i11);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_build_forkmap_4_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i12);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i14);
	}
	MR_r10 = MR_sv(1);
	MR_r12 = MR_sv(2);
	MR_r11 = MR_sv(4);
	MR_r13 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r8 = MR_r13;
	MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i13);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i15);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i16);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i17);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i18);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_sv(1);
	MR_r12 = MR_sv(2);
	MR_r11 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r9 = MR_sv(10);
	MR_r8 = MR_tempr1;
	}
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i20);
	}
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r13 = (MR_Word) MR_tbmkword(0, 0);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_16_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i22);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(8);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i19);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_r13, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r13, 0) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r14 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__jump_opt_instr_list_16_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i26);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i28);
	}
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	MR_r1 = MR_sv(16);
	MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i19);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jumpopt.m", 9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("jumpopt_main: lost the next label number", 40);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i19);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(list__reverse_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i30);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__opt_util__filter_out_bad_livevals_2_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i31);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i34);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__optimize_jumps_in_proc_12_0_i32);
	}
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(18);
MR_def_label(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__jumpopt_module15)
	MR_init_entry1(ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__jumpopt__short_foreign_proc_component_5_0);
	MR_init_label8(ll_backend__jumpopt__short_foreign_proc_component_5_0,24,27,53,5,7,4,12,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'short_foreign_proc_component'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__jumpopt__short_foreign_proc_component_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r2),3)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i27);
	}
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i24);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i53);
	}
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i5);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__jumpopt__final_dest_2_6_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i7);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,7)
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
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i12);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__jumpopt__short_foreign_proc_component_5_0_i12);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__jumpopt__short_foreign_proc_component_5_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__jumpopt__short_foreign_proc_component_5_0,11)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__jumpopt__new_remain_0_0);
	MR_init_label4(__Unify___ll_backend__jumpopt__new_remain_0_0,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__jumpopt__new_remain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i14);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__jumpopt__new_remain_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__jumpopt__new_remain_0_0_i7);
MR_def_label(__Unify___ll_backend__jumpopt__new_remain_0_0,7)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__jumpopt__new_remain_0_0);
	MR_init_label6(__Compare___ll_backend__jumpopt__new_remain_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__jumpopt__new_remain_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__jumpopt__new_remain_0_0_i11);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__jumpopt__new_remain_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__jumpopt__new_remain_0_0,16)
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
void mercury__ll_backend__jumpopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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

void mercury__ll_backend__jumpopt__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__jumpopt);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__jumpopt__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
