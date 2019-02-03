/*
** Automatically generated from `make_tags.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_tags__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_tags.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.make_tags.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.make_tags.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.make_tags.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.make_tags.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.make_tags.c"
#line 49 "hlds.make_tags.c"
#include "hlds.make_tags.mh"

#line 52 "hlds.make_tags.c"
#line 53 "hlds.make_tags.c"
#ifndef HLDS__MAKE_TAGS_DECL_GUARD
#define HLDS__MAKE_TAGS_DECL_GUARD

#line 57 "hlds.make_tags.c"
#line 58 "hlds.make_tags.c"

#endif
#line 61 "hlds.make_tags.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_tags__type_ctor_info_direct_arg_cond_0;
MR_decl_label10(hlds__make_tags__assign_constructor_tags_8_0, 2,3,4,5,7,6,8,10,12,18)
MR_decl_label10(hlds__make_tags__assign_constructor_tags_8_0, 21,15,22,9,26,29,25,34,33,36)
MR_decl_label10(hlds__make_tags__assign_constructor_tags_8_0, 37,68,39,41,42,44,45,31,46,47)
MR_decl_label5(hlds__make_tags__assign_constructor_tags_8_0, 49,50,53,54,55)
MR_decl_label4(hlds__make_tags__assign_enum_constants_5_0, 13,3,4,7)
MR_decl_label6(hlds__make_tags__assign_reserved_numeric_addresses_9_0, 35,3,4,5,7,13)
MR_decl_label6(hlds__make_tags__assign_reserved_symbolic_addresses_9_0, 26,3,4,5,8,10)
MR_decl_label4(hlds__make_tags__assign_shared_local_tags_6_0, 13,3,4,7)
MR_decl_label5(hlds__make_tags__assign_shared_remote_tags_7_0, 19,3,4,8,10)
MR_decl_label9(hlds__make_tags__assign_unshared_tags_7_0, 76,3,4,10,6,13,19,21,16)
MR_decl_label3(hlds__make_tags__compute_cheaper_tag_test_2_0, 3,9,2)
MR_decl_label2(hlds__make_tags__ctors_are_all_constants_1_0, 2,1)
MR_decl_label5(hlds__make_tags__separate_out_constants_3_0, 8,9,5,4,2)
MR_decl_label1(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0, 1)
MR_decl_label5(__Unify___hlds__make_tags__direct_arg_cond_0_0, 5,6,18,7,1)
MR_decl_label10(__Compare___hlds__make_tags__direct_arg_cond_0_0, 7,8,5,12,13,10,17,18,54,15)
MR_decl_label5(__Compare___hlds__make_tags__direct_arg_cond_0_0, 21,40,22,41,23)
MR_decl_static(hlds__make_tags__assign_enum_constants_5_0)
MR_decl_static(hlds__make_tags__assign_reserved_numeric_addresses_9_0)
MR_decl_static(hlds__make_tags__assign_reserved_symbolic_addresses_9_0)
MR_decl_static(hlds__make_tags__assign_shared_local_tags_6_0)
MR_decl_static(hlds__make_tags__assign_shared_remote_tags_7_0)
MR_decl_static(hlds__make_tags__assign_unshared_tags_7_0)
MR_decl_static(hlds__make_tags__ctors_are_all_constants_1_0)
MR_decl_static(hlds__make_tags__separate_out_constants_3_0)
MR_def_extern_entry(hlds__make_tags__assign_constructor_tags_8_0)
MR_def_extern_entry(hlds__make_tags__compute_cheaper_tag_test_2_0)
MR_def_extern_entry(hlds__make_tags__post_process_type_defns_3_0)
MR_decl_static(__Unify___hlds__make_tags__direct_arg_cond_0_0)
MR_decl_static(__Compare___hlds__make_tags__direct_arg_cond_0_0)
MR_decl_static(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
12,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_tags__assign_constructor_tags_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_reserved_address_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_tags__assign_constructor_tags_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_data, cons_tag),
MR_CTOR0_ADDR(hlds__hlds_data, reserved_address)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0),
0
},
};

static const MR_DuFunctorDesc mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_0 = {
	"direct_arg_builtin_type",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_1 = {
	"direct_arg_asserted",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_tags__field_types_direct_arg_cond_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_2 = {
	"direct_arg_same_module",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_tags__field_types_direct_arg_cond_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_3 = {
	"direct_arg_different_module",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_tags__du_stag_ordered_direct_arg_cond_0_0[] = {
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_0,
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_1,
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_3

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_tags__du_stag_ordered_direct_arg_cond_0_1[] = {
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_2

};

const MR_DuPtagLayout mercury_data_hlds__make_tags__du_ptag_ordered_direct_arg_cond_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_hlds__make_tags__du_stag_ordered_direct_arg_cond_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_tags__du_stag_ordered_direct_arg_cond_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_tags__du_name_ordered_direct_arg_cond_0[] = {
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_1,
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_0,
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_3,
	&mercury_data_hlds__make_tags__du_functor_desc_direct_arg_cond_0_2
};

const MR_Integer mercury_data_hlds__make_tags__functor_number_map_direct_arg_cond_0[] = {
	1,
	0,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_tags__type_ctor_info_direct_arg_cond_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_tags__direct_arg_cond_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_tags__direct_arg_cond_0_0)),
	"hlds.make_tags",
	"direct_arg_cond",
	{ (void *)mercury_data_hlds__make_tags__du_name_ordered_direct_arg_cond_0 },
	{ (void *)mercury_data_hlds__make_tags__du_ptag_ordered_direct_arg_cond_0 },
	4,
	4,
	mercury_data_hlds__make_tags__functor_number_map_direct_arg_cond_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_tags__assign_constructor_tags_8_0_1 = {
{
MR_FUNCTION,
"hlds.make_tags",
"hlds.make_tags",
"lambda_make_tags_m_203",
2,
0
},
"hlds.make_tags",
"make_tags.m",
203,
"78"
};


extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(hlds__make_tags_module0)
	MR_init_entry1(hlds__make_tags__assign_enum_constants_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_enum_constants_5_0);
	MR_init_label4(hlds__make_tags__assign_enum_constants_5_0,13,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_enum_constants'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__assign_enum_constants_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__make_tags__assign_enum_constants_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_enum_constants_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(hlds__make_tags__assign_enum_constants_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_enum_constants_5_0_i4);
MR_def_label(hlds__make_tags__assign_enum_constants_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_enum_constants_5_0_i7);
MR_def_label(hlds__make_tags__assign_enum_constants_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__make_tags__assign_enum_constants_5_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module1)
	MR_init_entry1(hlds__make_tags__assign_reserved_numeric_addresses_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_reserved_numeric_addresses_9_0);
	MR_init_label6(hlds__make_tags__assign_reserved_numeric_addresses_9_0,35,3,4,5,7,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_reserved_numeric_addresses'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__assign_reserved_numeric_addresses_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__make_tags__assign_reserved_numeric_addresses_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_reserved_numeric_addresses_9_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_tags__assign_reserved_numeric_addresses_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r7 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(hlds__make_tags__assign_reserved_numeric_addresses_9_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_tags__assign_reserved_numeric_addresses_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_reserved_numeric_addresses_9_0_i5);
MR_def_label(hlds__make_tags__assign_reserved_numeric_addresses_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_reserved_numeric_addresses_9_0_i7);
	}
	MR_r5 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_reserved_numeric_addresses_9_0_i13);
MR_def_label(hlds__make_tags__assign_reserved_numeric_addresses_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_reserved_numeric_addresses_9_0_i13);
MR_def_label(hlds__make_tags__assign_reserved_numeric_addresses_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__make_tags__assign_reserved_numeric_addresses_9_0_i35);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module2)
	MR_init_entry1(hlds__make_tags__assign_reserved_symbolic_addresses_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_reserved_symbolic_addresses_9_0);
	MR_init_label6(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,26,3,4,5,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_reserved_symbolic_addresses'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__assign_reserved_symbolic_addresses_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_reserved_symbolic_addresses_9_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r7 = MR_tfield(1, MR_r2, 0);
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(hlds__make_tags__assign_reserved_symbolic_addresses_9_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_reserved_symbolic_addresses_9_0_i5);
MR_def_label(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(7);
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_reserved_symbolic_addresses_9_0_i8);
MR_def_label(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_reserved_symbolic_addresses_9_0_i10);
MR_def_label(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_tags__assign_reserved_symbolic_addresses_9_0_i26);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module3)
	MR_init_entry1(hlds__make_tags__assign_shared_local_tags_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_shared_local_tags_6_0);
	MR_init_label4(hlds__make_tags__assign_shared_local_tags_6_0,13,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_shared_local_tags'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__assign_shared_local_tags_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__make_tags__assign_shared_local_tags_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_shared_local_tags_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__make_tags__assign_shared_local_tags_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_shared_local_tags_6_0_i4);
MR_def_label(hlds__make_tags__assign_shared_local_tags_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_shared_local_tags_6_0_i7);
MR_def_label(hlds__make_tags__assign_shared_local_tags_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__make_tags__assign_shared_local_tags_6_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module4)
	MR_init_entry1(hlds__make_tags__assign_shared_remote_tags_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_shared_remote_tags_7_0);
	MR_init_label5(hlds__make_tags__assign_shared_remote_tags_7_0,19,3,4,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_shared_remote_tags'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__assign_shared_remote_tags_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__make_tags__assign_shared_remote_tags_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_shared_remote_tags_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__make_tags__assign_shared_remote_tags_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_shared_remote_tags_7_0_i4);
MR_def_label(hlds__make_tags__assign_shared_remote_tags_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_shared_remote_tags_7_0_i8);
	}
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_shared_remote_tags_7_0_i10);
MR_def_label(hlds__make_tags__assign_shared_remote_tags_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r4;
	MR_r5 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_shared_remote_tags_7_0_i10);
MR_def_label(hlds__make_tags__assign_shared_remote_tags_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__make_tags__assign_shared_remote_tags_7_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__make_tags_module5)
	MR_init_entry1(hlds__make_tags__assign_unshared_tags_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_unshared_tags_7_0);
	MR_init_label9(hlds__make_tags__assign_unshared_tags_7_0,76,3,4,10,6,13,19,21,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_unshared_tags'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__assign_unshared_tags_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_unshared_tags_7_0_i4);
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i6);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i10);
	}
	MR_r5 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(map__set_4_0);
	}
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(map__set_4_0);
	}
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(4))) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i13);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_tags__assign_shared_remote_tags_7_0);
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) > (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i19);
	}
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_unshared_tags_7_0_i21);
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r4;
	MR_r5 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_unshared_tags_7_0_i21);
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_tags__assign_unshared_tags_7_0_i76);
	}
MR_def_label(hlds__make_tags__assign_unshared_tags_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_tags", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_tags.assign_unshared_tags\'/7", 49);
	MR_r3 = (MR_Word) MR_string_const("exceeded max tag", 16);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module6)
	MR_init_entry1(hlds__make_tags__ctors_are_all_constants_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__ctors_are_all_constants_1_0);
	MR_init_label2(hlds__make_tags__ctors_are_all_constants_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ctors_are_all_constants'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__ctors_are_all_constants_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__ctors_are_all_constants_1_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__ctors_are_all_constants_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(hlds__make_tags__ctors_are_all_constants_1_0);
MR_def_label(hlds__make_tags__ctors_are_all_constants_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_tags__ctors_are_all_constants_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module7)
	MR_init_entry1(hlds__make_tags__separate_out_constants_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__separate_out_constants_3_0);
	MR_init_label5(hlds__make_tags__separate_out_constants_3_0,8,9,5,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separate_out_constants'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_tags__separate_out_constants_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__separate_out_constants_3_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(hlds__make_tags__separate_out_constants_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(hlds__make_tags__separate_out_constants_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__separate_out_constants_3_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(hlds__make_tags__separate_out_constants_3_0_i4);
	}
MR_def_label(hlds__make_tags__separate_out_constants_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(hlds__make_tags__separate_out_constants_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(hlds__make_tags__separate_out_constants_3_0_i9);
	}
	MR_proceed();
MR_def_label(hlds__make_tags__separate_out_constants_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_decl_entry(parse_tree__prog_type__type_ctor_should_be_notag_8_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(require__sorry_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__map__values_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_reserved_address_0;
MR_decl_entry(fn__list__filter_map_2_0);
MR_decl_entry(int__pow_3_0);

MR_BEGIN_MODULE(hlds__make_tags_module8)
	MR_init_entry1(hlds__make_tags__assign_constructor_tags_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__assign_constructor_tags_8_0);
	MR_init_label10(hlds__make_tags__assign_constructor_tags_8_0,2,3,4,5,7,6,8,10,12,18)
	MR_init_label10(hlds__make_tags__assign_constructor_tags_8_0,21,15,22,9,26,29,25,34,33,36)
	MR_init_label10(hlds__make_tags__assign_constructor_tags_8_0,37,68,39,41,42,44,45,31,46,47)
	MR_init_label5(hlds__make_tags__assign_constructor_tags_8_0,49,50,53,54,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_constructor_tags'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_tags__assign_constructor_tags_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 224;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i2);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 225;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i3);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 226;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i4);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 238;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i5);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i7);
	}
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i6);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_tags__assign_constructor_tags_8_0_i8);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 231;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		hlds__make_tags__assign_constructor_tags_8_0_i10);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__make_tags__ctors_are_all_constants_1_0,
		hlds__make_tags__assign_constructor_tags_8_0_i12);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i9);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i15);
	}
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_constructor_tags_8_0_i18);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_constructor_tags_8_0_i21);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(14);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(hlds__make_tags__assign_enum_constants_5_0,
		hlds__make_tags__assign_constructor_tags_8_0_i22);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(14);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_should_be_notag_8_0,
		hlds__make_tags__assign_constructor_tags_8_0_i26);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__make_tags__assign_constructor_tags_8_0_i29);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i31);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__make_tags__separate_out_constants_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i36);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("make_tags", 9);
	MR_r2 = (MR_Word) MR_string_const("--reserve-tag with num_tag_bits = 0", 35);
	MR_np_call_localret_ent(require__sorry_2_0,
		hlds__make_tags__assign_constructor_tags_8_0_i33);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__make_tags__separate_out_constants_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i36);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__make_tags__assign_reserved_numeric_addresses_9_0,
		hlds__make_tags__assign_constructor_tags_8_0_i37);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i39);
	}
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_tags__assign_constructor_tags_8_0_i41);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__make_tags__assign_reserved_symbolic_addresses_9_0,
		hlds__make_tags__assign_constructor_tags_8_0_i68);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__values_1_0,
		hlds__make_tags__assign_constructor_tags_8_0_i42);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, reserved_address);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		hlds__make_tags__assign_constructor_tags_8_0_i44);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__make_tags__assign_unshared_tags_7_0,
		hlds__make_tags__assign_constructor_tags_8_0_i45);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_decr_sp_and_return(14);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(int__pow_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i46);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__make_tags__separate_out_constants_3_0,
		hlds__make_tags__assign_constructor_tags_8_0_i47);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__assign_constructor_tags_8_0_i49);
	}
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_tags__assign_unshared_tags_7_0,
		hlds__make_tags__assign_constructor_tags_8_0_i55);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_tags__assign_constructor_tags_8_0_i50);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_tags__assign_constructor_tags_8_0_i53);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_tags__assign_shared_local_tags_6_0,
		hlds__make_tags__assign_constructor_tags_8_0_i54);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__make_tags__assign_unshared_tags_7_0,
		hlds__make_tags__assign_constructor_tags_8_0_i55);
MR_def_label(hlds__make_tags__assign_constructor_tags_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__make_tags_module9)
	MR_init_entry1(hlds__make_tags__compute_cheaper_tag_test_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__compute_cheaper_tag_test_2_0);
	MR_init_label3(hlds__make_tags__compute_cheaper_tag_test_2_0,3,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_cheaper_tag_test'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_tags__compute_cheaper_tag_test_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__make_tags__compute_cheaper_tag_test_2_0_i3);
MR_def_label(hlds__make_tags__compute_cheaper_tag_test_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_r2, 0);
	MR_r6 = MR_tempr3;
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,1)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_tempr4, 1);
	MR_r7 = MR_tfield(1, MR_tempr2, 1);
	MR_r8 = MR_tfield(0, MR_tempr3, 1);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i9);
	}
	if (MR_INT_LE(MR_r7,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_r6;
	MR_tfield(1, MR_r1, 2) = MR_tempr4;
	MR_tfield(1, MR_r1, 3) = MR_r8;
	MR_decr_sp_and_return(1);
	}
MR_def_label(hlds__make_tags__compute_cheaper_tag_test_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_tags__compute_cheaper_tag_test_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_r5;
	MR_tfield(1, MR_r1, 1) = MR_r8;
	MR_tfield(1, MR_r1, 2) = MR_r3;
	MR_tfield(1, MR_r1, 3) = MR_r6;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__make_tags__compute_cheaper_tag_test_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module10)
	MR_init_entry1(hlds__make_tags__post_process_type_defns_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_tags__post_process_type_defns_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'post_process_type_defns'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_tags__post_process_type_defns_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__import_status_0_0);

MR_BEGIN_MODULE(hlds__make_tags_module11)
	MR_init_entry1(__Unify___hlds__make_tags__direct_arg_cond_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_tags__direct_arg_cond_0_0);
	MR_init_label5(__Unify___hlds__make_tags__direct_arg_cond_0_0,5,6,18,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_tags__direct_arg_cond_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_tags__direct_arg_cond_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___hlds__make_tags__direct_arg_cond_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__make_tags__direct_arg_cond_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_tags__direct_arg_cond_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__make_tags__direct_arg_cond_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___hlds__make_tags__direct_arg_cond_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__make_tags__direct_arg_cond_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_tags__direct_arg_cond_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_tags__direct_arg_cond_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__import_status_0_0);
MR_def_label(__Unify___hlds__make_tags__direct_arg_cond_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__import_status_0_0);

MR_BEGIN_MODULE(hlds__make_tags_module12)
	MR_init_entry1(__Compare___hlds__make_tags__direct_arg_cond_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_tags__direct_arg_cond_0_0);
	MR_init_label10(__Compare___hlds__make_tags__direct_arg_cond_0_0,7,8,5,12,13,10,17,18,54,15)
	MR_init_label5(__Compare___hlds__make_tags__direct_arg_cond_0_0,21,40,22,41,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_tags__direct_arg_cond_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i54);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i41);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i40);
	}
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i22);
	}
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_tags__direct_arg_cond_0_0_i23);
	}
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__make_tags__direct_arg_cond_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__import_status_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_tags_module13)
	MR_init_entry1(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0);
	MR_init_label1(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__assign_constructor_tags__203__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__203__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_tags_maybe_bunch_0(void)
{
	hlds__make_tags_module0();
	hlds__make_tags_module1();
	hlds__make_tags_module2();
	hlds__make_tags_module3();
	hlds__make_tags_module4();
	hlds__make_tags_module5();
	hlds__make_tags_module6();
	hlds__make_tags_module7();
	hlds__make_tags_module8();
	hlds__make_tags_module9();
	hlds__make_tags_module10();
	hlds__make_tags_module11();
	hlds__make_tags_module12();
	hlds__make_tags_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_tags__init(void);
void mercury__hlds__make_tags__init_type_tables(void);
void mercury__hlds__make_tags__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_tags__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_tags__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_tags__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_tags__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_tags_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_tags__type_ctor_info_direct_arg_cond_0,
		hlds__make_tags__direct_arg_cond_0_0);
	mercury__hlds__make_tags__init_debugger();
}

void mercury__hlds__make_tags__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_tags__type_ctor_info_direct_arg_cond_0);
	}
}


void mercury__hlds__make_tags__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_tags__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_tags);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_tags__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_tags__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
