/*
** Automatically generated from `basic_block.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
INIT mercury__ll_backend__basic_block__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.basic_block.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.basic_block.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ll_backend.basic_block.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ll_backend.basic_block.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ll_backend.basic_block.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ll_backend.basic_block.c"
#line 48 "ll_backend.basic_block.c"
#include "ll_backend.basic_block.mh"

#line 51 "ll_backend.basic_block.c"
#line 52 "ll_backend.basic_block.c"
#ifndef LL_BACKEND__BASIC_BLOCK_DECL_GUARD
#define LL_BACKEND__BASIC_BLOCK_DECL_GUARD

#line 56 "ll_backend.basic_block.c"
#line 57 "ll_backend.basic_block.c"

#endif
#line 60 "ll_backend.basic_block.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0,
	mercury_data_ll_backend__basic_block__type_ctor_info_block_map_0;
MR_decl_label8(ll_backend__basic_block__build_block_map_10_0, 58,4,6,8,12,14,16,17)
MR_decl_label8(ll_backend__basic_block__build_block_map_10_0, 18,20,23,13,27,29,33,34)
MR_decl_label4(ll_backend__basic_block__create_basic_blocks_8_0, 2,4,5,6)
MR_decl_label8(ll_backend__basic_block__extend_basic_blocks_5_0, 43,3,7,9,10,12,14,17)
MR_decl_label8(ll_backend__basic_block__extend_basic_blocks_5_0, 19,20,21,23,24,4,5,27)
MR_decl_label3(ll_backend__basic_block__flatten_basic_blocks_3_0, 15,4,5)
MR_decl_label5(ll_backend__basic_block__take_until_end_of_block_3_0, 29,4,7,6,10)
MR_decl_label6(__Unify___ll_backend__basic_block__block_info_0_0, 4,6,8,10,14,1)
MR_decl_label8(__Compare___ll_backend__basic_block__block_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_static(ll_backend__basic_block__take_until_end_of_block_3_0)
MR_decl_static(ll_backend__basic_block__build_block_map_10_0)
MR_def_extern_entry(ll_backend__basic_block__create_basic_blocks_8_0)
MR_def_extern_entry(ll_backend__basic_block__extend_basic_blocks_5_0)
MR_def_extern_entry(ll_backend__basic_block__flatten_basic_blocks_3_0)
MR_def_extern_entry(__Unify___ll_backend__basic_block__block_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__basic_block__block_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__basic_block__block_map_0_0)
MR_def_extern_entry(__Compare___ll_backend__basic_block__block_map_0_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__212__1_2_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__214__1_2_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__216__1_2_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__218__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_COMMON(1,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__basic_block__field_types_block_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

const MR_ConstString mercury_data_ll_backend__basic_block__field_names_block_info_0_0[] = {
	"starting_label",
	"label_instr",
	"later_instrs",
	"fallen_into",
	"jump_dests",
	"fall_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__basic_block__du_functor_desc_block_info_0_0 = {
	"block_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__basic_block__field_types_block_info_0_0,
	mercury_data_ll_backend__basic_block__field_names_block_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__basic_block__du_stag_ordered_block_info_0_0[] = {
	&mercury_data_ll_backend__basic_block__du_functor_desc_block_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__basic_block__du_ptag_ordered_block_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__basic_block__du_stag_ordered_block_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__basic_block__du_name_ordered_block_info_0[] = {
	&mercury_data_ll_backend__basic_block__du_functor_desc_block_info_0_0
};

const MR_Integer mercury_data_ll_backend__basic_block__functor_number_map_block_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__basic_block__block_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__basic_block__block_info_0_0)),
	"ll_backend.basic_block",
	"block_info",
	{ (void *)mercury_data_ll_backend__basic_block__du_name_ordered_block_info_0 },
	{ (void *)mercury_data_ll_backend__basic_block__du_ptag_ordered_block_info_0 },
	1,
	4,
	mercury_data_ll_backend__basic_block__functor_number_map_block_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__basic_block__type_ctor_info_block_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__basic_block__block_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__basic_block__block_map_0_0)),
	"ll_backend.basic_block",
	"block_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__basic_block__type_ctor_info_block_info_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_212",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
212,
"d2;c6;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_214",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
214,
"d2;c6;t;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_3 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_216",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
216,
"d2;c6;t;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_4 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_218",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
218,
"d2;c6;t;c18;"
};

MR_decl_entry(fn__ll_backend__opt_util__can_instr_branch_away_1_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module0)
	MR_init_entry1(ll_backend__basic_block__take_until_end_of_block_3_0);
	MR_init_label5(ll_backend__basic_block__take_until_end_of_block_3_0,29,4,7,6,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'take_until_end_of_block'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__take_until_end_of_block_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_3_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__basic_block__take_until_end_of_block_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr3, 0), 0);
	MR_r3 = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_3_0_i4);
	}
	MR_tempr2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr2;
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(ll_backend__basic_block__take_until_end_of_block_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_branch_away_1_0,
		ll_backend__basic_block__take_until_end_of_block_3_0_i7);
MR_def_label(ll_backend__basic_block__take_until_end_of_block_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ll_backend__basic_block__take_until_end_of_block_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ll_backend__basic_block__take_until_end_of_block_3_0,
		ll_backend__basic_block__take_until_end_of_block_3_0_i10);
MR_def_label(ll_backend__basic_block__take_until_end_of_block_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(svset__insert_3_0);
MR_decl_entry(list__last_2_0);
MR_decl_entry(ll_backend__opt_util__possible_targets_3_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module1)
	MR_init_entry1(ll_backend__basic_block__build_block_map_10_0);
	MR_init_label8(ll_backend__basic_block__build_block_map_10_0,58,4,6,8,12,14,16,17)
	MR_init_label8(ll_backend__basic_block__build_block_map_10_0,18,20,23,13,27,29,33,34)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'build_block_map'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__build_block_map_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i58);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(ll_backend__basic_block__build_block_map_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_tempr2, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	}
	MR_np_call_localret_ent(ll_backend__basic_block__take_until_end_of_block_3_0,
		ll_backend__basic_block__build_block_map_10_0_i12);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__basic_block__build_block_map_10_0_i6);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		ll_backend__basic_block__build_block_map_10_0_i8);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("", 0);
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__basic_block__take_until_end_of_block_3_0,
		ll_backend__basic_block__build_block_map_10_0_i12);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__last_2_0,
		ll_backend__basic_block__build_block_map_10_0_i14);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i13);
	}
	MR_sv(8) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__opt_util__possible_targets_3_0,
		ll_backend__basic_block__build_block_map_10_0_i16);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__basic_block__build_block_map_10_0_i17);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	}
	MR_np_localcall_lab(ll_backend__basic_block__build_block_map_10_0,
		ll_backend__basic_block__build_block_map_10_0_i18);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i33);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i33);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr4;
	MR_sv(3) = MR_tempr3;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i33);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_np_localcall_lab(ll_backend__basic_block__build_block_map_10_0,
		ll_backend__basic_block__build_block_map_10_0_i27);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i33);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_tempr4;
	MR_sv(3) = MR_tempr3;
	MR_r3 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__basic_block__build_block_map_10_0_i34);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__opt_util__get_prologue_4_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module2)
	MR_init_entry1(ll_backend__basic_block__create_basic_blocks_8_0);
	MR_init_label4(ll_backend__basic_block__create_basic_blocks_8_0,2,4,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'create_basic_blocks'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__basic_block__create_basic_blocks_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(ll_backend__opt_util__get_prologue_4_0,
		ll_backend__basic_block__create_basic_blocks_8_0_i2);
MR_def_label(ll_backend__basic_block__create_basic_blocks_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__basic_block__create_basic_blocks_8_0_i4);
MR_def_label(ll_backend__basic_block__create_basic_blocks_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__basic_block__create_basic_blocks_8_0_i5);
MR_def_label(ll_backend__basic_block__create_basic_blocks_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__basic_block__build_block_map_10_0,
		ll_backend__basic_block__create_basic_blocks_8_0_i6);
MR_def_label(ll_backend__basic_block__create_basic_blocks_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(svmap__delete_3_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module3)
	MR_init_entry1(ll_backend__basic_block__extend_basic_blocks_5_0);
	MR_init_label8(ll_backend__basic_block__extend_basic_blocks_5_0,43,3,7,9,10,12,14,17)
	MR_init_label8(ll_backend__basic_block__extend_basic_blocks_5_0,19,20,21,23,24,4,5,27)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'extend_basic_blocks'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__basic_block__extend_basic_blocks_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(19);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i7);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i4);
	}
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i9);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i10);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__212__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr4 = MR_r1;
	MR_sv(12) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(14) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(15) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(16) = MR_ctfield(0, MR_tempr4, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("basic_block.m", 13);
	MR_r3 = (MR_Word) MR_string_const("extend_basic_blocks: block label mismatch", 41);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i12);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__214__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(12);
	MR_r2 = (MR_Word) MR_string_const("basic_block.m", 13);
	MR_r3 = (MR_Word) MR_string_const("extend_basic_blocks: next block label mismatch", 46);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i14);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__216__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(11);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("basic_block.m", 13);
	MR_r3 = (MR_Word) MR_string_const("extend_basic_blocks: fall through mismatch", 42);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i17);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__218__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("basic_block.m", 13);
	MR_r3 = (MR_Word) MR_string_const("extend_basic_blocks: fall into mismatch", 39);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i19);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i20);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i21);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(16);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(svmap__det_update_4_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i23);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(svmap__delete_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i24);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(19);
	MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i43);
	}
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__basic_block__extend_basic_blocks_5_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i27);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ll_backend__basic_block_module4)
	MR_init_entry1(ll_backend__basic_block__flatten_basic_blocks_3_0);
	MR_init_label3(ll_backend__basic_block__flatten_basic_blocks_3_0,15,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'flatten_basic_blocks'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__basic_block__flatten_basic_blocks_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__flatten_basic_blocks_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__basic_block__flatten_basic_blocks_3_0,
		ll_backend__basic_block__flatten_basic_blocks_3_0_i4);
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__basic_block__flatten_basic_blocks_3_0_i5);
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(__Unify___ll_backend__llds__instruction_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module5)
	MR_init_entry1(__Unify___ll_backend__basic_block__block_info_0_0);
	MR_init_label6(__Unify___ll_backend__basic_block__block_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__basic_block__block_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i14);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i4);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instruction_0_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i6);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i8);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i10);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__label_0_0);
MR_decl_entry(__Compare___ll_backend__llds__instruction_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module6)
	MR_init_entry1(__Compare___ll_backend__basic_block__block_info_0_0);
	MR_init_label8(__Compare___ll_backend__basic_block__block_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__basic_block__block_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i2);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i5);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__instruction_0_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i9);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i13);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i17);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i21);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module7)
	MR_init_entry1(__Unify___ll_backend__basic_block__block_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__basic_block__block_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
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

MR_BEGIN_MODULE(ll_backend__basic_block_module8)
	MR_init_entry1(__Compare___ll_backend__basic_block__block_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__basic_block__block_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__basic_block_module9)
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__212__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__212__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__212__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__basic_block_module10)
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__214__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__214__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__214__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__basic_block_module11)
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__216__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__216__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__216__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__basic_block_module12)
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__218__1_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__218__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__218__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__basic_block_maybe_bunch_0(void)
{
	ll_backend__basic_block_module0();
	ll_backend__basic_block_module1();
	ll_backend__basic_block_module2();
	ll_backend__basic_block_module3();
	ll_backend__basic_block_module4();
	ll_backend__basic_block_module5();
	ll_backend__basic_block_module6();
	ll_backend__basic_block_module7();
	ll_backend__basic_block_module8();
	ll_backend__basic_block_module9();
	ll_backend__basic_block_module10();
	ll_backend__basic_block_module11();
	ll_backend__basic_block_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__basic_block__init(void);
void mercury__ll_backend__basic_block__init_type_tables(void);
void mercury__ll_backend__basic_block__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__basic_block__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__basic_block__init_complexity_procs(void);
#endif

void mercury__ll_backend__basic_block__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__basic_block_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0,
		ll_backend__basic_block__block_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__basic_block__type_ctor_info_block_map_0,
		ll_backend__basic_block__block_map_0_0);
	mercury__ll_backend__basic_block__init_debugger();
}

void mercury__ll_backend__basic_block__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__basic_block__type_ctor_info_block_map_0);
	}
}


void mercury__ll_backend__basic_block__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__basic_block__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__basic_block);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__basic_block__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
