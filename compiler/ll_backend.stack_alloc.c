/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__stack_alloc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "../library/array.int"
#include "array.mh"

#line 28 "ll_backend.stack_alloc.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "ll_backend.stack_alloc.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.stack_alloc.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.stack_alloc.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.stack_alloc.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.stack_alloc.c"
#line 49 "ll_backend.stack_alloc.c"
#include "ll_backend.stack_alloc.mh"

#line 52 "ll_backend.stack_alloc.c"
#line 53 "ll_backend.stack_alloc.c"
#ifndef LL_BACKEND__STACK_ALLOC_DECL_GUARD
#define LL_BACKEND__STACK_ALLOC_DECL_GUARD

#line 57 "ll_backend.stack_alloc.c"
#line 58 "ll_backend.stack_alloc.c"

#endif
#line 61 "ll_backend.stack_alloc.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__stack_alloc__type_ctor_info_stack_alloc_0;
MR_decl_label2(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0, 5,7)
MR_decl_label1(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0, 3)
MR_decl_label3(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0, 20,4,6)
MR_decl_label4(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0, 25,3,5,10)
MR_decl_label4(ll_backend__stack_alloc__allocate_same_stack_slot_5_0, 25,3,5,10)
MR_decl_label7(ll_backend__stack_alloc__allocate_stack_slots_2_6_0, 23,3,7,4,5,10,11)
MR_decl_label10(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0, 2,3,4,5,7,9,6,11,13,14)
MR_decl_label10(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0, 15,16,18,21,22,24,25,26,27,29)
MR_decl_label8(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0, 30,31,32,33,34,35,36,37)
MR_decl_label2(ll_backend__stack_alloc__var_is_not_dummy_2_0, 4,5)
MR_decl_label1(__Unify___ll_backend__stack_alloc__stack_alloc_0_0, 8)
MR_decl_label2(__Compare___ll_backend__stack_alloc__stack_alloc_0_0, 3,2)
MR_decl_static(ll_backend__stack_alloc__allocate_same_stack_slot_5_0)
MR_decl_static(ll_backend__stack_alloc__allocate_stack_slots_2_6_0)
MR_decl_static(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0)
MR_def_extern_entry(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0)
MR_decl_static(ll_backend__stack_alloc__var_is_not_dummy_2_0)
MR_decl_static(__Unify___ll_backend__stack_alloc__stack_alloc_0_0)
MR_decl_static(__Compare___ll_backend__stack_alloc__stack_alloc_0_0)
MR_decl_static(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)
MR_decl_static(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)
MR_decl_static(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__type_util__type_ctor_info_is_dummy_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_TAG_COMMON(0,0,0)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__,
MR_CTOR0_ADDR(ll_backend__stack_alloc, stack_alloc)
}
},
{
{
MR_CTOR1_ADDR(array, array),
MR_CTOR0_ADDR(check_hlds__type_util, is_dummy_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type),
MR_TAG_COMMON(0,0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0_1;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,4)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_NotagFunctorDesc mercury_data_ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
	"stack_alloc",
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__stack_alloc__functor_number_map_stack_alloc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__stack_alloc__type_ctor_info_stack_alloc_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__stack_alloc__stack_alloc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__stack_alloc__stack_alloc_0_0)),
	"ll_backend.stack_alloc",
	"stack_alloc",
	{ (void *)&mercury_data_ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
	{ (void *)&mercury_data_ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
	1,
	4,
	mercury_data_ll_backend__stack_alloc__functor_number_map_stack_alloc_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 3,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0))
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_alloc",
"ll_backend.stack_alloc",
"var_is_not_dummy",
2,
0
},
"ll_backend.stack_alloc",
"stack_alloc.m",
178,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_alloc",
"ll_backend.stack_alloc",
"var_is_not_dummy",
2,
0
},
"ll_backend.stack_alloc",
"stack_alloc.m",
178,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.stack_alloc",
"ll_backend.stack_alloc",
"var_is_not_dummy",
2,
0
},
"ll_backend.stack_alloc",
"stack_alloc.m",
178,
"6"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module0)
	MR_init_entry1(ll_backend__stack_alloc__allocate_same_stack_slot_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__allocate_same_stack_slot_5_0);
	MR_init_label4(ll_backend__stack_alloc__allocate_same_stack_slot_5_0,25,3,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_same_stack_slot'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__allocate_same_stack_slot_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__stack_alloc__allocate_same_stack_slot_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_same_stack_slot_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__stack_alloc__allocate_same_stack_slot_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_same_stack_slot_5_0_i5);
	}
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(2, MR_r5, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__stack_alloc__allocate_same_stack_slot_5_0_i10);
MR_def_label(ll_backend__stack_alloc__allocate_same_stack_slot_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r5, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__stack_alloc__allocate_same_stack_slot_5_0_i10);
MR_def_label(ll_backend__stack_alloc__allocate_same_stack_slot_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__stack_alloc__allocate_same_stack_slot_5_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module1)
	MR_init_entry1(ll_backend__stack_alloc__allocate_stack_slots_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__allocate_stack_slots_2_6_0);
	MR_init_label7(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,23,3,7,4,5,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_stack_slots_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__allocate_stack_slots_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i7);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i4);
	}
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_sv(5);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i10);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i10);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__stack_alloc__allocate_same_stack_slot_5_0,
		ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i11);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ll_backend__stack_alloc__allocate_stack_slots_2_6_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_alloc_module2)
	MR_init_entry1(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0);
	MR_init_label4(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0,25,3,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_dummy_stack_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0_i5);
	}
	MR_tag_alloc_heap(MR_r5, 2, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(2, MR_r5, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0_i10);
MR_def_label(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r5, 0) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r6 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0_i10);
MR_def_label(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__liveness__initial_liveness_4_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
MR_decl_entry(ll_backend__trace_gen__trace_fail_vars_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__set_to_bitset_1_0);
MR_decl_entry(fn__parse_tree__set_of_var__init_0_0);
MR_decl_entry(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(ll_backend__live_vars__build_dummy_type_array_4_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0);
MR_decl_entry(ll_backend__trace_gen__trace_reserved_slots_6_0);
MR_decl_entry(parse_tree__set_of_var__graph_colour_group_elements_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_stack_slots_3_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module3)
	MR_init_entry1(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0);
	MR_init_label10(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,2,3,4,5,7,9,6,11,13,14)
	MR_init_label10(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,15,16,18,21,22,24,25,26,27,29)
	MR_init_label8(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,30,31,32,33,34,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'allocate_stack_slots_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i2);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i3);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i4);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i5);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i7);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_fail_vars_3_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i9);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__set_to_bitset_1_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i11);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i11);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__body_should_use_typeinfo_liveness_3_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i13);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 308;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i14);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i15);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_dummy_type_array_4_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i16);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_sv(2) | ((MR_Integer) MR_sv(3) << (MR_Integer) 1));
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__init_0_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i18);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i21);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i22);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i24);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i25);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__do_we_need_maxfr_slot_5_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i26);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_reserved_slots_6_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i27);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i29);
	}
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__set_of_var__graph_colour_group_elements_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i32);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i30);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i31);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__set_of_var__graph_colour_group_elements_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i32);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i33);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i34);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i35);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__stack_alloc__allocate_stack_slots_2_6_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i36);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Integer) -1;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__stack_alloc__allocate_dummy_stack_slots_5_0,
		ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0_i37);
MR_def_label(ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_stack_slots_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__type_util__type_ctor_info_is_dummy_type_0;
MR_decl_entry(array__lookup_3_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module4)
	MR_init_entry1(ll_backend__stack_alloc__var_is_not_dummy_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__var_is_not_dummy_2_0);
	MR_init_label2(ll_backend__stack_alloc__var_is_not_dummy_2_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_is_not_dummy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__var_is_not_dummy_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ll_backend__stack_alloc__var_is_not_dummy_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__ll_backend__stack_alloc__var_is_not_dummy_2_0_i4);
MR_def_label(ll_backend__stack_alloc__var_is_not_dummy_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__type_util, is_dummy_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		ll_backend__stack_alloc__var_is_not_dummy_2_0_i5);
MR_def_label(ll_backend__stack_alloc__var_is_not_dummy_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module5)
	MR_init_entry1(__Unify___ll_backend__stack_alloc__stack_alloc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__stack_alloc__stack_alloc_0_0);
	MR_init_label1(__Unify___ll_backend__stack_alloc__stack_alloc_0_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__stack_alloc__stack_alloc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__stack_alloc__stack_alloc_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___ll_backend__stack_alloc__stack_alloc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module6)
	MR_init_entry1(__Compare___ll_backend__stack_alloc__stack_alloc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__stack_alloc__stack_alloc_0_0);
	MR_init_label2(__Compare___ll_backend__stack_alloc__stack_alloc_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__stack_alloc__stack_alloc_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__stack_alloc__stack_alloc_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__stack_alloc__stack_alloc_0_0_i2);
MR_def_label(__Compare___ll_backend__stack_alloc__stack_alloc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__stack_alloc__stack_alloc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__union_list_1_0);
MR_decl_entry(parse_tree__set_of_var__filter_3_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module7)
	MR_init_entry1(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
	MR_init_label2(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_list_1_0,
		ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0_i5);
MR_def_label(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_alloc__var_is_not_dummy_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_sv(1), 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__filter_3_0,
		ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0_i7);
MR_def_label(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__set__insert_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__union_2_0);

MR_BEGIN_MODULE(ll_backend__stack_alloc_module8)
	MR_init_entry1(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
	MR_init_label3(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0,20,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0_i20);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_2_0,
		ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0_i4);
MR_def_label(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_alloc__var_is_not_dummy_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_sv(1), 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__filter_3_0,
		ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0_i6);
MR_def_label(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__set__insert_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__stack_alloc_module9)
	MR_init_entry1(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
	MR_init_label1(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__stack_alloc__var_is_not_dummy_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__filter_3_0,
		ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0_i3);
MR_def_label(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__insert_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__stack_alloc_maybe_bunch_0(void)
{
	ll_backend__stack_alloc_module0();
	ll_backend__stack_alloc_module1();
	ll_backend__stack_alloc_module2();
	ll_backend__stack_alloc_module3();
	ll_backend__stack_alloc_module4();
	ll_backend__stack_alloc_module5();
	ll_backend__stack_alloc_module6();
	ll_backend__stack_alloc_module7();
	ll_backend__stack_alloc_module8();
	ll_backend__stack_alloc_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__stack_alloc__init(void);
void mercury__ll_backend__stack_alloc__init_type_tables(void);
void mercury__ll_backend__stack_alloc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__stack_alloc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__stack_alloc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__stack_alloc__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__stack_alloc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__stack_alloc_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__stack_alloc__type_ctor_info_stack_alloc_0,
		ll_backend__stack_alloc__stack_alloc_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__, 5) =
			MR_ENTRY_AP(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__, 6) =
			MR_ENTRY_AP(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__, 7) =
			MR_ENTRY_AP(ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__ll_backend__stack_alloc__init_debugger();
}

void mercury__ll_backend__stack_alloc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__stack_alloc__type_ctor_info_stack_alloc_0);
	}
}


void mercury__ll_backend__stack_alloc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__stack_alloc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__stack_alloc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__stack_alloc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__stack_alloc__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
