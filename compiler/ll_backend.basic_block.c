/*
** Automatically generated from `basic_block.m'
** by the Mercury compiler,
** version 11.07.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__basic_block__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.basic_block.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "ll_backend.basic_block.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.basic_block.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.basic_block.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.basic_block.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.basic_block.c"
#line 49 "ll_backend.basic_block.c"
#include "ll_backend.basic_block.mh"

#line 52 "ll_backend.basic_block.c"
#line 53 "ll_backend.basic_block.c"
#ifndef LL_BACKEND__BASIC_BLOCK_DECL_GUARD
#define LL_BACKEND__BASIC_BLOCK_DECL_GUARD

#line 57 "ll_backend.basic_block.c"
#line 58 "ll_backend.basic_block.c"

#endif
#line 61 "ll_backend.basic_block.c"

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
MR_decl_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0, 5,2)
MR_decl_label10(ll_backend__basic_block__build_block_map_10_0, 64,4,6,8,12,14,16,17,18,13)
MR_decl_label5(ll_backend__basic_block__build_block_map_10_0, 19,21,24,20,28)
MR_decl_label4(ll_backend__basic_block__create_basic_blocks_8_0, 2,4,5,6)
MR_decl_label10(ll_backend__basic_block__extend_basic_blocks_5_0, 49,3,7,9,10,12,14,17,19,20)
MR_decl_label6(ll_backend__basic_block__extend_basic_blocks_5_0, 21,23,24,4,5,27)
MR_decl_label4(ll_backend__basic_block__flatten_basic_blocks_4_0, 18,4,5,7)
MR_decl_label5(ll_backend__basic_block__take_until_end_of_block_4_0, 33,3,4,7,6)
MR_decl_label6(__Unify___ll_backend__basic_block__block_info_0_0, 4,6,8,10,14,1)
MR_decl_label9(__Compare___ll_backend__basic_block__block_info_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_static(ll_backend__basic_block__take_until_end_of_block_4_0)
MR_decl_static(ll_backend__basic_block__build_block_map_10_0)
MR_def_extern_entry(ll_backend__basic_block__create_basic_blocks_8_0)
MR_def_extern_entry(ll_backend__basic_block__extend_basic_blocks_5_0)
MR_def_extern_entry(ll_backend__basic_block__flatten_basic_blocks_4_0)
MR_def_extern_entry(__Unify___ll_backend__basic_block__block_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__basic_block__block_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__basic_block__block_map_0_0)
MR_def_extern_entry(__Compare___ll_backend__basic_block__block_map_0_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_0)
MR_decl_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0)

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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__basic_block__field_types_block_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

const MR_ConstString mercury_data_ll_backend__basic_block__field_names_block_info_0_0[] = {
	"bi_starting_label",
	"bi_label_instr",
	"bi_later_instrs",
	"bi_num_later_instrs",
	"bi_fallen_into",
	"bi_jump_dests",
	"bi_fall_dest"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__basic_block__du_functor_desc_block_info_0_0 = {
	"block_info",
	7,
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
	14,
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
	14,
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
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_4 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_228",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
228,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_3 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_226",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
226,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_2 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_224",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
224,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__basic_block__extend_basic_blocks_5_0_1 = {
{
MR_PREDICATE,
"ll_backend.basic_block",
"ll_backend.basic_block",
"lambda_basic_block_m_222",
2,
0
},
"ll_backend.basic_block",
"basic_block.m",
222,
"23"
};


MR_decl_entry(fn__ll_backend__opt_util__can_instr_branch_away_1_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module0)
	MR_init_entry1(ll_backend__basic_block__take_until_end_of_block_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__take_until_end_of_block_4_0);
	MR_init_label5(ll_backend__basic_block__take_until_end_of_block_4_0,33,3,4,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'take_until_end_of_block'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__take_until_end_of_block_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__basic_block__take_until_end_of_block_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__basic_block__take_until_end_of_block_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r3 = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_4_0_i4);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ll_backend__basic_block__take_until_end_of_block_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_branch_away_1_0,
		ll_backend__basic_block__take_until_end_of_block_4_0_i7);
MR_def_label(ll_backend__basic_block__take_until_end_of_block_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_4_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__basic_block__take_until_end_of_block_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__basic_block__take_until_end_of_block_4_0_i33);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(set__insert_3_0);
MR_decl_entry(ll_backend__opt_util__possible_targets_3_0);
MR_decl_entry(fn__ll_backend__opt_util__can_instr_fall_through_1_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module1)
	MR_init_entry1(ll_backend__basic_block__build_block_map_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__build_block_map_10_0);
	MR_init_label10(ll_backend__basic_block__build_block_map_10_0,64,4,6,8,12,14,16,17,18,13)
	MR_init_label5(ll_backend__basic_block__build_block_map_10_0,19,21,24,20,28)
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
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i64);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_proceed();
MR_def_label(ll_backend__basic_block__build_block_map_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__basic_block__take_until_end_of_block_4_0,
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
	MR_np_call_localret_ent(set__insert_3_0,
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
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ll_backend__basic_block__take_until_end_of_block_4_0,
		ll_backend__basic_block__build_block_map_10_0_i12);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i14);
	}
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_r7;
	MR_r3 = (MR_Integer) 1;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = (MR_Integer) 0;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i13);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0,
		ll_backend__basic_block__build_block_map_10_0_i16);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(ll_backend__opt_util__possible_targets_3_0,
		ll_backend__basic_block__build_block_map_10_0_i17);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__opt_util__can_instr_fall_through_1_0,
		ll_backend__basic_block__build_block_map_10_0_i18);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r6 = MR_sv(10);
	MR_r5 = MR_sv(11);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_localcall_lab(ll_backend__basic_block__build_block_map_10_0,
		ll_backend__basic_block__build_block_map_10_0_i19);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i20);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_GOTO_LAB(ll_backend__basic_block__build_block_map_10_0_i20);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 6) = MR_tempr1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	}
MR_def_label(ll_backend__basic_block__build_block_map_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__basic_block__build_block_map_10_0_i28);
MR_def_label(ll_backend__basic_block__build_block_map_10_0,28)
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
	MR_decr_sp_and_return(12);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__create_basic_blocks_8_0);
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
MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module3)
	MR_init_entry1(ll_backend__basic_block__extend_basic_blocks_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__extend_basic_blocks_5_0);
	MR_init_label10(ll_backend__basic_block__extend_basic_blocks_5_0,49,3,7,9,10,12,14,17,19,20)
	MR_init_label6(ll_backend__basic_block__extend_basic_blocks_5_0,21,23,24,4,5,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extend_basic_blocks'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__basic_block__extend_basic_blocks_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(21);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
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
	MR_sv(19) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i9);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i10);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_tempr3;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(13) = MR_tfield(0, MR_r1, 0);
	MR_sv(14) = MR_tfield(0, MR_r1, 2);
	MR_sv(15) = MR_tfield(0, MR_r1, 3);
	MR_sv(16) = MR_tfield(0, MR_r1, 4);
	MR_sv(17) = MR_tfield(0, MR_r1, 5);
	MR_sv(18) = MR_tfield(0, MR_r1, 6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.basic_block", 22);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", 56);
	MR_r4 = (MR_Word) MR_string_const("block label mismatch", 20);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i12);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(13);
	MR_r2 = (MR_Word) MR_string_const("ll_backend.basic_block", 22);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", 56);
	MR_r4 = (MR_Word) MR_string_const("next block label mismatch", 25);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i14);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(12);
	MR_tfield(0, MR_r1, 4) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.basic_block", 22);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", 56);
	MR_r4 = (MR_Word) MR_string_const("fall through mismatch", 21);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i17);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(16);
	MR_tfield(0, MR_r1, 4) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.basic_block", 22);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.basic_block.extend_basic_blocks\'/5", 56);
	MR_r4 = (MR_Word) MR_string_const("fall into mismatch", 18);
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i19);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i20);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_sv(15));
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i21);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(18);
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__basic_block__extend_basic_blocks_5_0_i23);
MR_def_label(ll_backend__basic_block__extend_basic_blocks_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__delete_3_0,
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
	MR_succip_word = MR_sv(21);
	MR_GOTO_LAB(ll_backend__basic_block__extend_basic_blocks_5_0_i49);
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
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__basic_block_module4)
	MR_init_entry1(ll_backend__basic_block__flatten_basic_blocks_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__flatten_basic_blocks_4_0);
	MR_init_label4(ll_backend__basic_block__flatten_basic_blocks_4_0,18,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_basic_blocks'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__basic_block__flatten_basic_blocks_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__basic_block__flatten_basic_blocks_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__basic_block__flatten_basic_blocks_4_0,
		ll_backend__basic_block__flatten_basic_blocks_4_0_i4);
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__basic_block__flatten_basic_blocks_4_0_i5);
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(1, MR_r2, 1) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__basic_block__flatten_basic_blocks_4_0_i7);
MR_def_label(ll_backend__basic_block__flatten_basic_blocks_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(2));
	MR_decr_sp_and_return(3);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__basic_block__block_info_0_0);
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
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i4);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instruction_0_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i6);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i8);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__basic_block__block_info_0_0_i10);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__basic_block__block_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__basic_block__block_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__basic_block__block_info_0_0);
	MR_init_label9(__Compare___ll_backend__basic_block__block_info_0_0,3,2,5,9,13,17,21,25,61)
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
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
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
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i5);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__instruction_0_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i9);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i13);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i17);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i21);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__basic_block__block_info_0_0_i25);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__basic_block__block_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__basic_block__block_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__basic_block_module7)
	MR_init_entry1(__Unify___ll_backend__basic_block__block_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__basic_block__block_map_0_0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__basic_block__block_map_0_0);
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
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__222__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__222__1_2_0)
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
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__224__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__224__1_2_0)
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
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__226__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__226__1_2_0)
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
	MR_init_entry1(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__extend_basic_blocks__228__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__basic_block__IntroducedFrom__pred__extend_basic_blocks__228__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__basic_block_module13)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0);
	MR_init_label2(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reverse_and_count_list__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0_i2);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_98_97_115_105_99_95_98_108_111_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_110_100_95_99_111_117_110_116_95_108_105_115_116_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
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
	ll_backend__basic_block_module13();
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
#ifdef MR_THREADSCOPE
void mercury__ll_backend__basic_block__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__ll_backend__basic_block__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
