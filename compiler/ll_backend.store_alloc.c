/*
** Automatically generated from `store_alloc.m'
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
INIT mercury__ll_backend__store_alloc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "ll_backend.store_alloc.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "ll_backend.store_alloc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ll_backend.store_alloc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ll_backend.store_alloc.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "ll_backend.store_alloc.c"
#line 44 "ll_backend.store_alloc.c"
#include "ll_backend.store_alloc.mh"

#line 47 "ll_backend.store_alloc.c"
#line 48 "ll_backend.store_alloc.c"
#ifndef LL_BACKEND__STORE_ALLOC_DECL_GUARD
#define LL_BACKEND__STORE_ALLOC_DECL_GUARD

#line 52 "ll_backend.store_alloc.c"
#line 53 "ll_backend.store_alloc.c"

#endif
#line 56 "ll_backend.store_alloc.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__store_alloc__type_ctor_info_where_stored_0,
	mercury_data_ll_backend__store_alloc__type_ctor_info_store_map_run_type_0,
	mercury_data_ll_backend__store_alloc__type_ctor_info_store_alloc_info_0,
	mercury_data_ll_backend__store_alloc__type_ctor_info_last_locns_0;
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0, 54,12,11,13,55,15,56,18)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0, 57,21,22,23,58,25,59,27)
MR_decl_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0, 28,29,30,31,32,60,34,53)
MR_decl_label8(ll_backend__store_alloc__allocate_store_maps_5_0, 2,5,6,7,8,9,3,10)
MR_decl_label8(ll_backend__store_alloc__allocate_store_maps_5_0, 11,12,13,14,16,15,19,21)
MR_decl_label3(ll_backend__store_alloc__allocate_store_maps_5_0, 22,23,24)
MR_decl_label1(ll_backend__store_alloc__merge_last_locations_2_0, 2)
MR_decl_label3(ll_backend__store_alloc__next_free_reg_3_0, 12,3,2)
MR_decl_label8(ll_backend__store_alloc__store_alloc_allocate_extras_6_0, 37,5,4,8,10,12,7,14)
MR_decl_label4(ll_backend__store_alloc__store_alloc_allocate_extras_6_0, 15,16,17,3)
MR_decl_label8(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0, 30,4,8,10,7,12,13,5)
MR_decl_label2(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0, 15,3)
MR_decl_label3(ll_backend__store_alloc__store_alloc_in_cases_8_0, 4,5,3)
MR_decl_label7(ll_backend__store_alloc__store_alloc_in_conj_8_0, 23,5,6,8,4,9,10)
MR_decl_label6(ll_backend__store_alloc__store_alloc_in_disj_8_0, 4,6,5,7,8,3)
MR_decl_label8(ll_backend__store_alloc__store_alloc_in_goal_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ll_backend__store_alloc__store_alloc_in_goal_8_0, 10,13,15,16,19,17,21,22)
MR_decl_label8(ll_backend__store_alloc__store_alloc_in_goal_8_0, 23,24,25,26,27,28,29,11)
MR_decl_label5(ll_backend__store_alloc__store_alloc_in_par_conj_8_0, 4,5,6,3,7)
MR_decl_label5(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0, 19,5,4,7,3)
MR_decl_label3(fn__ll_backend__store_alloc__initial_last_locns_1_0, 4,5,3)
MR_decl_label3(__Unify___ll_backend__store_alloc__store_alloc_info_0_0, 4,8,1)
MR_decl_label4(__Compare___ll_backend__store_alloc__store_alloc_info_0_0, 3,2,5,21)
MR_decl_static(fn__ll_backend__store_alloc__initial_last_locns_1_0)
MR_decl_static(ll_backend__store_alloc__merge_last_locations_2_0)
MR_decl_static(fn__ll_backend__store_alloc__this_file_0_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0)
MR_decl_static(ll_backend__store_alloc__next_free_reg_3_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_allocate_extras_6_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_in_goal_8_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_in_conj_8_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_in_par_conj_8_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_in_disj_8_0)
MR_decl_static(ll_backend__store_alloc__store_alloc_in_cases_8_0)
MR_def_extern_entry(ll_backend__store_alloc__allocate_store_maps_5_0)
MR_decl_static(__Unify___ll_backend__store_alloc__last_locns_0_0)
MR_decl_static(__Compare___ll_backend__store_alloc__last_locns_0_0)
MR_decl_static(__Unify___ll_backend__store_alloc__store_alloc_info_0_0)
MR_decl_static(__Compare___ll_backend__store_alloc__store_alloc_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__store_alloc__store_map_run_type_0_0)
MR_def_extern_entry(__Compare___ll_backend__store_alloc__store_map_run_type_0_0)
MR_decl_static(__Unify___ll_backend__store_alloc__where_stored_0_0)
MR_decl_static(__Compare___ll_backend__store_alloc__where_stored_0_0)
MR_decl_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, lval)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__store_alloc__type_ctor_info_where_stored_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__store_alloc__where_stored_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__store_alloc__where_stored_0_0)),
	"ll_backend.store_alloc",
	"where_stored",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0 = {
	"final_allocation",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1 = {
	"for_stack_opt",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[] = {
	&mercury_data_ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
	&mercury_data_ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[] = {
	&mercury_data_ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
	&mercury_data_ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

const MR_Integer mercury_data_ll_backend__store_alloc__functor_number_map_store_map_run_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__store_alloc__type_ctor_info_store_map_run_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__store_alloc__store_map_run_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__store_alloc__store_map_run_type_0_0)),
	"ll_backend.store_alloc",
	"store_map_run_type",
	{ (void *)mercury_data_ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0 },
	{ (void *)mercury_data_ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0 },
	2,
	4,
	mercury_data_ll_backend__store_alloc__functor_number_map_store_map_run_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__store_alloc__field_types_store_alloc_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0
};

const MR_ConstString mercury_data_ll_backend__store_alloc__field_names_store_alloc_info_0_0[] = {
	"module_info",
	"stack_slots"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0 = {
	"store_alloc_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__store_alloc__field_types_store_alloc_info_0_0,
	mercury_data_ll_backend__store_alloc__field_names_store_alloc_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[] = {
	&mercury_data_ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[] = {
	&mercury_data_ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

const MR_Integer mercury_data_ll_backend__store_alloc__functor_number_map_store_alloc_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__store_alloc__type_ctor_info_store_alloc_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__store_alloc__store_alloc_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__store_alloc__store_alloc_info_0_0)),
	"ll_backend.store_alloc",
	"store_alloc_info",
	{ (void *)mercury_data_ll_backend__store_alloc__du_name_ordered_store_alloc_info_0 },
	{ (void *)mercury_data_ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0 },
	1,
	4,
	mercury_data_ll_backend__store_alloc__functor_number_map_store_alloc_info_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_lval_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__store_alloc__type_ctor_info_last_locns_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__store_alloc__last_locns_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__store_alloc__last_locns_0_0)),
	"ll_backend.store_alloc",
	"last_locns",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 },
	-1,
	0,
	NULL
};

MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__map__det_insert_3_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module0)
	MR_init_entry1(fn__ll_backend__store_alloc__initial_last_locns_1_0);
	MR_init_label3(fn__ll_backend__store_alloc__initial_last_locns_1_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__store_alloc__initial_last_locns_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ll_backend__store_alloc__initial_last_locns_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(fn__ll_backend__store_alloc__initial_last_locns_1_0,
		fn__ll_backend__store_alloc__initial_last_locns_1_0_i4);
MR_def_label(fn__ll_backend__store_alloc__initial_last_locns_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		fn__ll_backend__store_alloc__initial_last_locns_1_0_i5);
MR_def_label(fn__ll_backend__store_alloc__initial_last_locns_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__map__det_insert_3_0);
MR_def_label(fn__ll_backend__store_alloc__initial_last_locns_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__store_alloc_module1)
	MR_init_entry1(ll_backend__store_alloc__merge_last_locations_2_0);
	MR_init_label1(ll_backend__store_alloc__merge_last_locations_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__merge_last_locations_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__merge_last_locations_2_0_i2);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(ll_backend__store_alloc__merge_last_locations_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__store_alloc_module2)
	MR_init_entry1(fn__ll_backend__store_alloc__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__store_alloc__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("store_alloc.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(map__delete_3_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module3)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0);
	MR_init_label5(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,19,5,4,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0_i3);
	}
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__store_alloc__store_alloc_remove_nonlive_4_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0_i19);
MR_def_label(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__delete_3_0,
		ll_backend__store_alloc__store_alloc_remove_nonlive_4_0_i7);
MR_def_label(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0_i19);
MR_def_label(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module4)
	MR_init_entry1(ll_backend__store_alloc__next_free_reg_3_0);
	MR_init_label3(ll_backend__store_alloc__next_free_reg_3_0,12,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__next_free_reg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ll_backend__store_alloc__next_free_reg_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__store_alloc__next_free_reg_3_0_i3);
MR_def_label(ll_backend__store_alloc__next_free_reg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__next_free_reg_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ll_backend__store_alloc__next_free_reg_3_0_i12);
MR_def_label(ll_backend__store_alloc__next_free_reg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module5)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0);
	MR_init_label8(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,30,4,8,10,7,12,13,5)
	MR_init_label2(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,15,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i4);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i7);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i10);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i5);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ll_backend__store_alloc__next_free_reg_3_0,
		ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i12);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i13);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i15);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i15);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0_i30);
MR_def_label(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module6)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_allocate_extras_6_0);
	MR_init_label8(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,37,5,4,8,10,12,7,14)
	MR_init_label4(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,15,16,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_allocate_extras_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i3);
	}
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i4);
	}
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i37);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i8);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_llds__stack_slot_to_abs_locn_1_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i10);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__member_2_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i12);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i7);
	}
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_sv(4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i15);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__store_alloc__next_free_reg_3_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i14);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i16);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i17);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_allocate_extras_6_0_i37);
MR_def_label(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_pre_births_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_post_births_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__goal_util__goal_is_branched_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_store_map_3_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module7)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_in_goal_8_0);
	MR_init_label8(ll_backend__store_alloc__store_alloc_in_goal_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ll_backend__store_alloc__store_alloc_in_goal_8_0,10,13,15,16,19,17,21,22)
	MR_init_label8(ll_backend__store_alloc__store_alloc_in_goal_8_0,23,24,25,26,27,28,29,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_in_goal_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_deaths_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i2);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_pre_births_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i3);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_deaths_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i4);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_post_births_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i6);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i7);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i8);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i9);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i10);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__goal_is_branched_1_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i13);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_goal_8_0_i11);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i15);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i16);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_store_map_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i19);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_goal_8_0_i17);
	}
	MR_r3 = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_goal_8_0_i22);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(fn__map__init_0_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i21);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i23);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_remove_nonlive_4_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i24);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(map__keys_2_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i25);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i26);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_7_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i27);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_allocate_extras_6_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i28);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_store_map_3_0,
		ll_backend__store_alloc__store_alloc_in_goal_8_0_i29);
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__store_alloc__store_alloc_in_goal_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module8)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_in_conj_8_0);
	MR_init_label7(ll_backend__store_alloc__store_alloc_in_conj_8_0,23,5,6,8,4,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_in_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_conj_8_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		ll_backend__store_alloc__store_alloc_in_conj_8_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		ll_backend__store_alloc__store_alloc_in_conj_8_0_i6);
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_conj_8_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		ll_backend__store_alloc__store_alloc_in_conj_8_0_i8);
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		ll_backend__store_alloc__store_alloc_in_conj_8_0_i9);
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__store_alloc__store_alloc_in_conj_8_0,
		ll_backend__store_alloc__store_alloc_in_conj_8_0_i10);
MR_def_label(ll_backend__store_alloc__store_alloc_in_conj_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module9)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_in_par_conj_8_0);
	MR_init_label5(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,4,5,6,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_in_par_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_par_conj_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		ll_backend__store_alloc__store_alloc_in_par_conj_8_0_i4);
MR_def_label(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,
		ll_backend__store_alloc__store_alloc_in_par_conj_8_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ll_backend__store_alloc__store_alloc_in_par_conj_8_0_i6);
MR_def_label(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ll_backend__store_alloc__store_alloc_in_par_conj_8_0_i7);
MR_def_label(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module10)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_in_disj_8_0);
	MR_init_label6(ll_backend__store_alloc__store_alloc_in_disj_8_0,4,6,5,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_in_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_disj_8_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		ll_backend__store_alloc__store_alloc_in_disj_8_0_i4);
MR_def_label(ll_backend__store_alloc__store_alloc_in_disj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_disj_8_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_disj_8_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_in_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
MR_def_label(ll_backend__store_alloc__store_alloc_in_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		ll_backend__store_alloc__store_alloc_in_disj_8_0_i7);
MR_def_label(ll_backend__store_alloc__store_alloc_in_disj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__store_alloc__store_alloc_in_disj_8_0,
		ll_backend__store_alloc__store_alloc_in_disj_8_0_i8);
MR_def_label(ll_backend__store_alloc__store_alloc_in_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__store_alloc__store_alloc_in_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__store_alloc_module11)
	MR_init_entry1(ll_backend__store_alloc__store_alloc_in_cases_8_0);
	MR_init_label3(ll_backend__store_alloc__store_alloc_in_cases_8_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__store_alloc__store_alloc_in_cases_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__store_alloc_in_cases_8_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		ll_backend__store_alloc__store_alloc_in_cases_8_0_i4);
MR_def_label(ll_backend__store_alloc__store_alloc_in_cases_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(ll_backend__store_alloc__store_alloc_in_cases_8_0,
		ll_backend__store_alloc__store_alloc_in_cases_8_0_i5);
MR_def_label(ll_backend__store_alloc__store_alloc_in_cases_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ll_backend__store_alloc__store_alloc_in_cases_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(ll_backend__follow_vars__find_final_follow_vars_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(ll_backend__follow_vars__find_follow_vars_in_goal_8_0);
MR_decl_entry(hlds__hlds_llds__goal_info_set_follow_vars_3_0);
MR_decl_entry(ll_backend__liveness__initial_liveness_4_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0);
MR_decl_entry(ll_backend__trace_gen__trace_fail_vars_3_0);
MR_decl_entry(ll_backend__code_util__build_input_arg_list_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_stack_slots_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module12)
	MR_init_entry1(ll_backend__store_alloc__allocate_store_maps_5_0);
	MR_init_label8(ll_backend__store_alloc__allocate_store_maps_5_0,2,5,6,7,8,9,3,10)
	MR_init_label8(ll_backend__store_alloc__allocate_store_maps_5_0,11,12,13,14,16,15,19,21)
	MR_init_label3(ll_backend__store_alloc__allocate_store_maps_5_0,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__store_alloc__allocate_store_maps_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i2);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ll_backend__store_alloc__allocate_store_maps_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i5);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__follow_vars__find_final_follow_vars_3_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i6);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i7);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__follow_vars__find_follow_vars_in_goal_8_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i8);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_set_follow_vars_3_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i9);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(ll_backend__store_alloc__allocate_store_maps_5_0_i11);
	}
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i10);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(ll_backend__liveness__initial_liveness_4_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i12);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i13);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i14);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_needs_fail_vars_4_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i16);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__store_alloc__allocate_store_maps_5_0_i15);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__trace_gen__trace_fail_vars_3_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i19);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i19);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__code_util__build_input_arg_list_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i21);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ll_backend__store_alloc__initial_last_locns_1_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i22);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_stack_slots_2_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i23);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		ll_backend__store_alloc__allocate_store_maps_5_0_i24);
MR_def_label(ll_backend__store_alloc__allocate_store_maps_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module13)
	MR_init_entry1(__Unify___ll_backend__store_alloc__last_locns_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__store_alloc__last_locns_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
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

MR_BEGIN_MODULE(ll_backend__store_alloc_module14)
	MR_init_entry1(__Compare___ll_backend__store_alloc__last_locns_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__store_alloc__last_locns_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module15)
	MR_init_entry1(__Unify___ll_backend__store_alloc__store_alloc_info_0_0);
	MR_init_label3(__Unify___ll_backend__store_alloc__store_alloc_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__store_alloc__store_alloc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__store_alloc__store_alloc_info_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ll_backend__store_alloc__store_alloc_info_0_0_i4);
MR_def_label(__Unify___ll_backend__store_alloc__store_alloc_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__store_alloc__store_alloc_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__store_alloc__store_alloc_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__store_alloc__store_alloc_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module16)
	MR_init_entry1(__Compare___ll_backend__store_alloc__store_alloc_info_0_0);
	MR_init_label4(__Compare___ll_backend__store_alloc__store_alloc_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__store_alloc__store_alloc_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__store_alloc__store_alloc_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__store_alloc__store_alloc_info_0_0_i2);
MR_def_label(__Compare___ll_backend__store_alloc__store_alloc_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__store_alloc__store_alloc_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ll_backend__store_alloc__store_alloc_info_0_0_i5);
MR_def_label(__Compare___ll_backend__store_alloc__store_alloc_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__store_alloc__store_alloc_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__store_alloc__store_alloc_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__store_alloc_module17)
	MR_init_entry1(__Unify___ll_backend__store_alloc__store_map_run_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__store_alloc__store_map_run_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module18)
	MR_init_entry1(__Compare___ll_backend__store_alloc__store_map_run_type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__store_alloc__store_map_run_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module19)
	MR_init_entry1(__Unify___ll_backend__store_alloc__where_stored_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__store_alloc__where_stored_0_0)
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

MR_BEGIN_MODULE(ll_backend__store_alloc_module20)
	MR_init_entry1(__Compare___ll_backend__store_alloc__where_stored_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__store_alloc__where_stored_0_0)
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

MR_decl_entry(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ll_backend__store_alloc_module21)
	MR_init_entry1(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0);
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,54,12,11,13,55,15,56,18)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,57,21,22,23,58,25,59,27)
	MR_init_label8(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,28,29,30,31,32,60,34,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i53);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i53) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i54) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i55) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i56) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i57) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i58) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i59) MR_AND
		MR_LABEL_AP(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i60));
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i11);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_conj_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i12);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_par_conj_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i13);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_disj_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i15);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__merge_last_locations_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_cases_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i18);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__merge_last_locations_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i21);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i22);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i23);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i25);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_sv(8) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i27);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_resume_vars_and_loc_3_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i28);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i29);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i30);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__store_alloc_in_goal_8_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i31);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__store_alloc__merge_last_locations_2_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i32);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ll_backend__store_alloc__this_file_0_0,
		f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0_i34);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("store_alloc_in_goal_2: unexpected shorthand", 43);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_108_108_95_98_97_99_107_101_110_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_111_114_101_95_97_108_108_111_99_95_105_110_95_103_111_97_108_95_50_95_95_91_56_93_95_48_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__store_alloc_maybe_bunch_0(void)
{
	ll_backend__store_alloc_module0();
	ll_backend__store_alloc_module1();
	ll_backend__store_alloc_module2();
	ll_backend__store_alloc_module3();
	ll_backend__store_alloc_module4();
	ll_backend__store_alloc_module5();
	ll_backend__store_alloc_module6();
	ll_backend__store_alloc_module7();
	ll_backend__store_alloc_module8();
	ll_backend__store_alloc_module9();
	ll_backend__store_alloc_module10();
	ll_backend__store_alloc_module11();
	ll_backend__store_alloc_module12();
	ll_backend__store_alloc_module13();
	ll_backend__store_alloc_module14();
	ll_backend__store_alloc_module15();
	ll_backend__store_alloc_module16();
	ll_backend__store_alloc_module17();
	ll_backend__store_alloc_module18();
	ll_backend__store_alloc_module19();
	ll_backend__store_alloc_module20();
	ll_backend__store_alloc_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__store_alloc__init(void);
void mercury__ll_backend__store_alloc__init_type_tables(void);
void mercury__ll_backend__store_alloc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__store_alloc__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__store_alloc__init_complexity_procs(void);
#endif

void mercury__ll_backend__store_alloc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__store_alloc_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__store_alloc__type_ctor_info_where_stored_0,
		ll_backend__store_alloc__where_stored_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__store_alloc__type_ctor_info_store_map_run_type_0,
		ll_backend__store_alloc__store_map_run_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__store_alloc__type_ctor_info_store_alloc_info_0,
		ll_backend__store_alloc__store_alloc_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__store_alloc__type_ctor_info_last_locns_0,
		ll_backend__store_alloc__last_locns_0_0);
	mercury__ll_backend__store_alloc__init_debugger();
}

void mercury__ll_backend__store_alloc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__store_alloc__type_ctor_info_where_stored_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__store_alloc__type_ctor_info_store_map_run_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__store_alloc__type_ctor_info_store_alloc_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__store_alloc__type_ctor_info_last_locns_0);
	}
}


void mercury__ll_backend__store_alloc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__store_alloc__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__store_alloc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
