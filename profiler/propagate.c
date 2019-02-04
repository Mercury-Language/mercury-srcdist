/*
** Automatically generated from `propagate.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__propagate__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "propagate.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "propagate.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "propagate.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "propagate.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "propagate.c"
#line 45 "propagate.c"
#include "propagate.mh"

#line 48 "propagate.c"
#line 49 "propagate.c"
#ifndef PROPAGATE_DECL_GUARD
#define PROPAGATE_DECL_GUARD

#line 53 "propagate.c"
#line 54 "propagate.c"

#endif
#line 57 "propagate.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_propagate__type_ctor_info_cycle_info_0,
	mercury_data_propagate__type_ctor_info_cycle_to_preds_map_0,
	mercury_data_propagate__type_ctor_info_pred_to_cycle_map_0;
MR_decl_label3(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0, 17,4,5)
MR_decl_label2(propagate__accumulate_propagated_counts_5_0, 2,3)
MR_decl_label2(propagate__accumulate_self_counts_5_0, 2,3)
MR_decl_label4(propagate__add_to_cycle_map_6_0, 11,3,4,5)
MR_decl_label10(propagate__add_to_parent_map_8_0, 39,3,4,5,10,9,8,6,15,17)
MR_decl_label2(propagate__add_to_parent_map_8_0, 14,18)
MR_decl_label5(propagate__build_parent_map_2_10_0, 12,3,4,5,6)
MR_decl_label10(propagate__identify_cycles_2_10_0, 38,3,4,7,11,12,13,14,9,8)
MR_decl_label2(propagate__identify_cycles_2_10_0, 16,17)
MR_decl_label10(propagate__process_cycle_5_0, 4,5,6,7,8,3,2,10,11,12)
MR_decl_label10(propagate__process_cycle_5_0, 13,14,16,18,19,20,22,23,24,25)
MR_decl_label10(propagate__propagate_counts_5_0, 2,3,4,5,7,8,9,10,12,13)
MR_decl_label2(propagate__propagate_counts_5_0, 14,15)
MR_decl_label10(propagate__propagate_counts_2_5_0, 39,3,5,7,8,10,12,9,4,16)
MR_decl_label7(propagate__propagate_counts_2_5_0, 17,18,19,20,21,22,23)
MR_decl_label9(propagate__propagate_counts_3_6_0, 16,3,4,5,6,7,8,9,10)
MR_decl_label3(propagate__update_cycles_2_4_0, 10,3,4)
MR_decl_label5(propagate__update_cycles_3_5_0, 12,3,4,5,6)
MR_decl_label3(fn__propagate__assoc_list_to_pred_info_list_1_0, 17,4,5)
MR_decl_label3(__Unify___propagate__cycle_info_0_0, 4,9,1)
MR_decl_label4(__Compare___propagate__cycle_info_0_0, 3,2,5,28)
MR_decl_static(propagate__add_to_cycle_map_6_0)
MR_decl_static(propagate__identify_cycles_2_10_0)
MR_decl_static(propagate__update_cycles_3_5_0)
MR_decl_static(propagate__update_cycles_2_4_0)
MR_decl_static(propagate__propagate_counts_3_6_0)
MR_decl_static(propagate__add_to_parent_map_8_0)
MR_decl_static(propagate__build_parent_map_2_10_0)
MR_decl_static(fn__propagate__assoc_list_to_pred_info_list_1_0)
MR_decl_static(propagate__process_cycle_5_0)
MR_decl_static(propagate__propagate_counts_2_5_0)
MR_def_extern_entry(propagate__propagate_counts_5_0)
MR_decl_static(propagate__accumulate_self_counts_5_0)
MR_decl_static(propagate__accumulate_propagated_counts_5_0)
MR_decl_static(__Unify___propagate__cycle_info_0_0)
MR_decl_static(__Compare___propagate__cycle_info_0_0)
MR_decl_static(__Unify___propagate__cycle_to_preds_map_0_0)
MR_decl_static(__Compare___propagate__cycle_to_preds_map_0_0)
MR_decl_static(__Unify___propagate__pred_to_cycle_map_0_0)
MR_decl_static(__Compare___propagate__pred_to_cycle_map_0_0)
MR_decl_static(propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_0)
MR_decl_static(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_key_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(digraph, digraph),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(digraph, digraph_key),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(digraph, digraph_key),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__propagate__identify_cycles_2_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__propagate__identify_cycles_2_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_STRING_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(prof_info, prof_node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__propagate__process_cycle_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__propagate__process_cycle_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__propagate__process_cycle_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,0),
MR_COMMON(2,1),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__propagate__process_cycle_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,0),
MR_COMMON(2,1),
MR_STRING_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_propagate__field_types_cycle_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_propagate__field_names_cycle_info_0_0[] = {
	"pred_to_cycle_map",
	"cycle_to_preds_map"
};

static const MR_DuFunctorDesc mercury_data_propagate__du_functor_desc_cycle_info_0_0 = {
	"cycle_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_propagate__field_types_cycle_info_0_0,
	mercury_data_propagate__field_names_cycle_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_propagate__du_stag_ordered_cycle_info_0_0[] = {
	&mercury_data_propagate__du_functor_desc_cycle_info_0_0

};

const MR_DuPtagLayout mercury_data_propagate__du_ptag_ordered_cycle_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_propagate__du_stag_ordered_cycle_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_propagate__du_name_ordered_cycle_info_0[] = {
	&mercury_data_propagate__du_functor_desc_cycle_info_0_0
};

const MR_Integer mercury_data_propagate__functor_number_map_cycle_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_propagate__type_ctor_info_cycle_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___propagate__cycle_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___propagate__cycle_info_0_0)),
	"propagate",
	"cycle_info",
	{ (void *)mercury_data_propagate__du_name_ordered_cycle_info_0 },
	{ (void *)mercury_data_propagate__du_ptag_ordered_cycle_info_0 },
	1,
	4,
	mercury_data_propagate__functor_number_map_cycle_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_propagate__type_ctor_info_cycle_to_preds_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___propagate__cycle_to_preds_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___propagate__cycle_to_preds_map_0_0)),
	"propagate",
	"cycle_to_preds_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_propagate__type_ctor_info_pred_to_cycle_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___propagate__pred_to_cycle_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___propagate__pred_to_cycle_map_0_0)),
	"propagate",
	"pred_to_cycle_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__propagate__process_cycle_5_0_2 = {
{
MR_PREDICATE,
"propagate",
"propagate",
"accumulate_propagated_counts",
5,
0
},
"propagate",
"propagate.m",
268,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__propagate__process_cycle_5_0_1 = {
{
MR_PREDICATE,
"propagate",
"propagate",
"accumulate_self_counts",
5,
0
},
"propagate",
"propagate.m",
251,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__propagate__identify_cycles_2_10_0_1 = {
{
MR_PREDICATE,
"propagate",
"propagate",
"lambda_propagate_m_107",
3,
0
},
"propagate",
"propagate.m",
107,
"27"
};


extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(multi_map__set_4_0);

MR_BEGIN_MODULE(propagate_module0)
	MR_init_entry1(propagate__add_to_cycle_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__add_to_cycle_map_6_0);
	MR_init_label4(propagate__add_to_cycle_map_6_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_to_cycle_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__add_to_cycle_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(propagate__add_to_cycle_map_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__add_to_cycle_map_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(propagate__add_to_cycle_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(6) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		propagate__add_to_cycle_map_6_0_i4);
MR_def_label(propagate__add_to_cycle_map_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		propagate__add_to_cycle_map_6_0_i5);
MR_def_label(propagate__add_to_cycle_map_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(propagate__add_to_cycle_map_6_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(digraph__dfsrev_5_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(require__error_1_0);
MR_decl_entry(list__delete_elems_3_0);

MR_BEGIN_MODULE(propagate_module1)
	MR_init_entry1(propagate__identify_cycles_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__identify_cycles_2_10_0);
	MR_init_label10(propagate__identify_cycles_2_10_0,38,3,4,7,11,12,13,14,9,8)
	MR_init_label2(propagate__identify_cycles_2_10_0,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identify_cycles_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__identify_cycles_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(propagate__identify_cycles_2_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__identify_cycles_2_10_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(15);
MR_def_label(propagate__identify_cycles_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(8) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(10) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(digraph__dfsrev_5_0,
		propagate__identify_cycles_2_10_0_i4);
MR_def_label(propagate__identify_cycles_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		propagate__identify_cycles_2_10_0_i7);
MR_def_label(propagate__identify_cycles_2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__identify_cycles_2_10_0_i9);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(propagate__identify_cycles_2_10_0_i11);
	}
	MR_r3 = MR_sv(8);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_sv(9);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__append_3_1,
		propagate__identify_cycles_2_10_0_i16);
MR_def_label(propagate__identify_cycles_2_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(1) = MR_r2;
	MR_sv(12) = MR_tfield(1, MR_r1, 0);
	MR_sv(13) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(14) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		propagate__identify_cycles_2_10_0_i12);
MR_def_label(propagate__identify_cycles_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		propagate__identify_cycles_2_10_0_i13);
MR_def_label(propagate__identify_cycles_2_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(propagate__add_to_cycle_map_6_0,
		propagate__identify_cycles_2_10_0_i14);
MR_def_label(propagate__identify_cycles_2_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__append_3_1,
		propagate__identify_cycles_2_10_0_i16);
MR_def_label(propagate__identify_cycles_2_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("identify_cycles_2: empty list\n", 30);
	MR_np_call_localret_ent(require__error_1_0,
		propagate__identify_cycles_2_10_0_i8);
MR_def_label(propagate__identify_cycles_2_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__append_3_1,
		propagate__identify_cycles_2_10_0_i16);
MR_def_label(propagate__identify_cycles_2_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		propagate__identify_cycles_2_10_0_i17);
MR_def_label(propagate__identify_cycles_2_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(propagate__identify_cycles_2_10_0_i38);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__get_prof_node_4_0);
MR_decl_entry(prof_info__prof_node_set_cycle_num_3_0);
MR_decl_entry(prof_info__update_prof_node_5_0);

MR_BEGIN_MODULE(propagate_module2)
	MR_init_entry1(propagate__update_cycles_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__update_cycles_3_5_0);
	MR_init_label5(propagate__update_cycles_3_5_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_cycles_3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__update_cycles_3_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(propagate__update_cycles_3_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__update_cycles_3_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(propagate__update_cycles_3_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__update_cycles_3_5_0_i4);
MR_def_label(propagate__update_cycles_3_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_node_set_cycle_num_3_0,
		propagate__update_cycles_3_5_0_i5);
MR_def_label(propagate__update_cycles_3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(prof_info__update_prof_node_5_0,
		propagate__update_cycles_3_5_0_i6);
MR_def_label(propagate__update_cycles_3_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(propagate__update_cycles_3_5_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module3)
	MR_init_entry1(propagate__update_cycles_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__update_cycles_2_4_0);
	MR_init_label3(propagate__update_cycles_2_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_cycles_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__update_cycles_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(propagate__update_cycles_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__update_cycles_2_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(propagate__update_cycles_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(propagate__update_cycles_3_5_0,
		propagate__update_cycles_2_4_0_i4);
MR_def_label(propagate__update_cycles_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(propagate__update_cycles_2_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__pred_info_get_entire_3_0);
MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
MR_decl_entry(prof_info__prof_node_get_propagated_counts_2_0);
MR_decl_entry(prof_info__prof_node_set_propagated_counts_3_0);

MR_BEGIN_MODULE(propagate_module4)
	MR_init_entry1(propagate__propagate_counts_3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__propagate_counts_3_6_0);
	MR_init_label9(propagate__propagate_counts_3_6_0,16,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_counts_3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__propagate_counts_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(propagate__propagate_counts_3_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__propagate_counts_3_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(9);
MR_def_label(propagate__propagate_counts_3_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(prof_info__pred_info_get_entire_3_0,
		propagate__propagate_counts_3_6_0_i4);
MR_def_label(propagate__propagate_counts_3_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		propagate__propagate_counts_3_6_0_i5);
MR_def_label(propagate__propagate_counts_3_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		propagate__propagate_counts_3_6_0_i6);
MR_def_label(propagate__propagate_counts_3_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_float_to_word((MR_word_to_float(MR_r1) * MR_word_to_float(MR_sv(1))));
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__propagate_counts_3_6_0_i7);
MR_def_label(propagate__propagate_counts_3_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(prof_info__prof_node_get_propagated_counts_2_0,
		propagate__propagate_counts_3_6_0_i8);
MR_def_label(propagate__propagate_counts_3_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) + MR_word_to_float(MR_sv(7))));
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(prof_info__prof_node_set_propagated_counts_3_0,
		propagate__propagate_counts_3_6_0_i9);
MR_def_label(propagate__propagate_counts_3_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(prof_info__update_prof_node_5_0,
		propagate__propagate_counts_3_6_0_i10);
MR_def_label(propagate__propagate_counts_3_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(propagate__propagate_counts_3_6_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__pred_info_get_pred_name_2_0);
MR_decl_entry(prof_info__pred_info_get_counts_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(propagate_module5)
	MR_init_entry1(propagate__add_to_parent_map_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__add_to_parent_map_8_0);
	MR_init_label10(propagate__add_to_parent_map_8_0,39,3,4,5,10,9,8,6,15,17)
	MR_init_label2(propagate__add_to_parent_map_8_0,14,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_to_parent_map'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__add_to_parent_map_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(propagate__add_to_parent_map_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(propagate__add_to_parent_map_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(prof_info__pred_info_get_pred_name_2_0,
		propagate__add_to_parent_map_8_0_i4);
MR_def_label(propagate__add_to_parent_map_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(prof_info__pred_info_get_counts_2_0,
		propagate__add_to_parent_map_8_0_i5);
MR_def_label(propagate__add_to_parent_map_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		propagate__add_to_parent_map_8_0_i10);
MR_def_label(propagate__add_to_parent_map_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i8);
MR_def_label(propagate__add_to_parent_map_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i6);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
MR_def_label(propagate__add_to_parent_map_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_sv(7));
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i39);
MR_def_label(propagate__add_to_parent_map_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__search_3_0,
		propagate__add_to_parent_map_8_0_i15);
MR_def_label(propagate__add_to_parent_map_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_sv(7));
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		propagate__add_to_parent_map_8_0_i17);
MR_def_label(propagate__add_to_parent_map_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(7));
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i39);
	}
MR_def_label(propagate__add_to_parent_map_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		propagate__add_to_parent_map_8_0_i18);
MR_def_label(propagate__add_to_parent_map_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(7));
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(propagate__add_to_parent_map_8_0_i39);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__prof_node_get_parent_list_2_0);

MR_BEGIN_MODULE(propagate_module6)
	MR_init_entry1(propagate__build_parent_map_2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__build_parent_map_2_10_0);
	MR_init_label5(propagate__build_parent_map_2_10_0,12,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_parent_map_2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__build_parent_map_2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(propagate__build_parent_map_2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__build_parent_map_2_10_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(propagate__build_parent_map_2_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__build_parent_map_2_10_0_i4);
MR_def_label(propagate__build_parent_map_2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(prof_info__prof_node_get_parent_list_2_0,
		propagate__build_parent_map_2_10_0_i5);
MR_def_label(propagate__build_parent_map_2_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(propagate__add_to_parent_map_8_0,
		propagate__build_parent_map_2_10_0_i6);
MR_def_label(propagate__build_parent_map_2_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tempr1);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_tempr2);
	MR_r7 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(propagate__build_parent_map_2_10_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__pred_info_init_3_0);

MR_BEGIN_MODULE(propagate_module7)
	MR_init_entry1(fn__propagate__assoc_list_to_pred_info_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__propagate__assoc_list_to_pred_info_list_1_0);
	MR_init_label3(fn__propagate__assoc_list_to_pred_info_list_1_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assoc_list_to_pred_info_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__propagate__assoc_list_to_pred_info_list_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__propagate__assoc_list_to_pred_info_list_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__propagate__assoc_list_to_pred_info_list_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__propagate__assoc_list_to_pred_info_list_1_0,
		fn__propagate__assoc_list_to_pred_info_list_1_0_i4);
MR_def_label(fn__propagate__assoc_list_to_pred_info_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(prof_info__pred_info_init_3_0,
		fn__propagate__assoc_list_to_pred_info_list_1_0_i5);
MR_def_label(fn__propagate__assoc_list_to_pred_info_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(list__foldl_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__prof_info__prof_node_init_cycle_7_0);
extern const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(propagate_module8)
	MR_init_entry1(propagate__process_cycle_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__process_cycle_5_0);
	MR_init_label10(propagate__process_cycle_5_0,4,5,6,7,8,3,2,10,11,12)
	MR_init_label10(propagate__process_cycle_5_0,13,14,16,18,19,20,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_cycle'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__process_cycle_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__process_cycle_5_0_i3);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		propagate__process_cycle_5_0_i4);
MR_def_label(propagate__process_cycle_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__process_cycle_5_0_i5);
MR_def_label(propagate__process_cycle_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(prof_info__prof_node_get_parent_list_2_0,
		propagate__process_cycle_5_0_i6);
MR_def_label(propagate__process_cycle_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(propagate__add_to_parent_map_8_0,
		propagate__process_cycle_5_0_i7);
MR_def_label(propagate__process_cycle_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r5 = ((MR_Integer) 0 + (MR_Integer) MR_tempr1);
	MR_r6 = ((MR_Integer) 0 + (MR_Integer) MR_tempr2);
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(propagate__build_parent_map_2_10_0,
		propagate__process_cycle_5_0_i8);
MR_def_label(propagate__process_cycle_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		propagate__process_cycle_5_0_i10);
MR_def_label(propagate__process_cycle_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("build_parent_map: empty cycle list\n", 35);
	MR_np_call_localret_ent(require__error_1_0,
		propagate__process_cycle_5_0_i2);
MR_def_label(propagate__process_cycle_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		propagate__process_cycle_5_0_i10);
MR_def_label(propagate__process_cycle_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__propagate__assoc_list_to_pred_info_list_1_0,
		propagate__process_cycle_5_0_i11);
MR_def_label(propagate__process_cycle_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		propagate__process_cycle_5_0_i12);
MR_def_label(propagate__process_cycle_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" as a whole >", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		propagate__process_cycle_5_0_i13);
MR_def_label(propagate__process_cycle_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("< cycle ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		propagate__process_cycle_5_0_i14);
MR_def_label(propagate__process_cycle_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(propagate__accumulate_self_counts_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		propagate__process_cycle_5_0_i16);
MR_def_label(propagate__process_cycle_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(propagate__accumulate_propagated_counts_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		propagate__process_cycle_5_0_i18);
MR_def_label(propagate__process_cycle_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0,
		propagate__process_cycle_5_0_i19);
MR_def_label(propagate__process_cycle_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(prof_info__pred_info_init_3_0,
		propagate__process_cycle_5_0_i20);
MR_def_label(propagate__process_cycle_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__prof_info__prof_node_init_cycle_7_0,
		propagate__process_cycle_5_0_i22);
MR_def_label(propagate__process_cycle_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = ((MR_Integer) 0 - (MR_Integer) MR_sv(7));
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		propagate__process_cycle_5_0_i23);
MR_def_label(propagate__process_cycle_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		propagate__process_cycle_5_0_i24);
MR_def_label(propagate__process_cycle_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__float__float_1_0,
		propagate__process_cycle_5_0_i25);
MR_def_label(propagate__process_cycle_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_tempr1) + MR_word_to_float(MR_sv(6))));
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(propagate__propagate_counts_3_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(multi_map__lookup_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(list__drop_3_0);
MR_decl_entry(prof_info__prof_node_get_initial_counts_2_0);
MR_decl_entry(prof_info__prof_node_get_total_calls_2_0);

MR_BEGIN_MODULE(propagate_module9)
	MR_init_entry1(propagate__propagate_counts_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__propagate_counts_2_5_0);
	MR_init_label10(propagate__propagate_counts_2_5_0,39,3,5,7,8,10,12,9,4,16)
	MR_init_label7(propagate__propagate_counts_2_5_0,17,18,19,20,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_counts_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__propagate_counts_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(propagate__propagate_counts_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(propagate__propagate_counts_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(propagate__propagate_counts_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		propagate__propagate_counts_2_5_0_i5);
MR_def_label(propagate__propagate_counts_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(propagate__propagate_counts_2_5_0_i4);
	}
	MR_sv(5) = MR_r2;
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(multi_map__lookup_3_0,
		propagate__propagate_counts_2_5_0_i7);
MR_def_label(propagate__propagate_counts_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		propagate__propagate_counts_2_5_0_i8);
MR_def_label(propagate__propagate_counts_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		propagate__propagate_counts_2_5_0_i10);
MR_def_label(propagate__propagate_counts_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(propagate__propagate_counts_2_5_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(propagate__process_cycle_5_0,
		propagate__propagate_counts_2_5_0_i12);
MR_def_label(propagate__propagate_counts_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(propagate__propagate_counts_2_5_0_i39);
	}
MR_def_label(propagate__propagate_counts_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("propagate_counts_2: list_drop failed\n", 37);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(propagate__propagate_counts_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__propagate_counts_2_5_0_i16);
MR_def_label(propagate__propagate_counts_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(prof_info__prof_node_get_initial_counts_2_0,
		propagate__propagate_counts_2_5_0_i17);
MR_def_label(propagate__propagate_counts_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(prof_info__prof_node_get_propagated_counts_2_0,
		propagate__propagate_counts_2_5_0_i18);
MR_def_label(propagate__propagate_counts_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(prof_info__prof_node_get_parent_list_2_0,
		propagate__propagate_counts_2_5_0_i19);
MR_def_label(propagate__propagate_counts_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(prof_info__prof_node_get_total_calls_2_0,
		propagate__propagate_counts_2_5_0_i20);
MR_def_label(propagate__propagate_counts_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		propagate__propagate_counts_2_5_0_i21);
MR_def_label(propagate__propagate_counts_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_float_to_word((MR_word_to_float(MR_r1) + MR_word_to_float(MR_sv(7))));
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__float__float_1_0,
		propagate__propagate_counts_2_5_0_i22);
MR_def_label(propagate__propagate_counts_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(propagate__propagate_counts_3_6_0,
		propagate__propagate_counts_2_5_0_i23);
MR_def_label(propagate__propagate_counts_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(propagate__propagate_counts_2_5_0_i39);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(prof_info__prof_get_addrdeclmap_2_0);
MR_decl_entry(prof_info__prof_get_profnodemap_2_0);
MR_decl_entry(digraph__dfsrev_2_0);
MR_decl_entry(digraph__inverse_2_0);
MR_decl_entry(fn__sparse_bitset__init_0_0);
MR_decl_entry(fn__multi_map__init_0_0);
MR_decl_entry(fn__multi_map__to_assoc_list_1_0);
MR_decl_entry(prof_info__prof_set_cyclemap_3_0);
MR_decl_entry(prof_info__prof_set_profnodemap_3_0);

MR_BEGIN_MODULE(propagate_module10)
	MR_init_entry1(propagate__propagate_counts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__propagate_counts_5_0);
	MR_init_label10(propagate__propagate_counts_5_0,2,3,4,5,7,8,9,10,12,13)
	MR_init_label2(propagate__propagate_counts_5_0,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_counts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__propagate__propagate_counts_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(prof_info__prof_get_addrdeclmap_2_0,
		propagate__propagate_counts_5_0_i2);
MR_def_label(propagate__propagate_counts_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(prof_info__prof_get_profnodemap_2_0,
		propagate__propagate_counts_5_0_i3);
MR_def_label(propagate__propagate_counts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(digraph__dfsrev_2_0,
		propagate__propagate_counts_5_0_i4);
MR_def_label(propagate__propagate_counts_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__inverse_2_0,
		propagate__propagate_counts_5_0_i5);
MR_def_label(propagate__propagate_counts_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__sparse_bitset__init_0_0,
		propagate__propagate_counts_5_0_i7);
MR_def_label(propagate__propagate_counts_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__init_0_0,
		propagate__propagate_counts_5_0_i8);
MR_def_label(propagate__propagate_counts_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		propagate__propagate_counts_5_0_i9);
MR_def_label(propagate__propagate_counts_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(propagate__identify_cycles_2_10_0,
		propagate__propagate_counts_5_0_i10);
MR_def_label(propagate__propagate_counts_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__multi_map__to_assoc_list_1_0,
		propagate__propagate_counts_5_0_i12);
MR_def_label(propagate__propagate_counts_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(propagate__update_cycles_2_4_0,
		propagate__propagate_counts_5_0_i13);
MR_def_label(propagate__propagate_counts_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(propagate__propagate_counts_2_5_0,
		propagate__propagate_counts_5_0_i14);
MR_def_label(propagate__propagate_counts_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(5), 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(prof_info__prof_set_cyclemap_3_0,
		propagate__propagate_counts_5_0_i15);
MR_def_label(propagate__propagate_counts_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(prof_info__prof_set_profnodemap_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module11)
	MR_init_entry1(propagate__accumulate_self_counts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__accumulate_self_counts_5_0);
	MR_init_label2(propagate__accumulate_self_counts_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_self_counts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__accumulate_self_counts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__accumulate_self_counts_5_0_i2);
MR_def_label(propagate__accumulate_self_counts_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(prof_info__prof_node_get_initial_counts_2_0,
		propagate__accumulate_self_counts_5_0_i3);
MR_def_label(propagate__accumulate_self_counts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module12)
	MR_init_entry1(propagate__accumulate_propagated_counts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__accumulate_propagated_counts_5_0);
	MR_init_label2(propagate__accumulate_propagated_counts_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'accumulate_propagated_counts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__accumulate_propagated_counts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(prof_info__get_prof_node_4_0,
		propagate__accumulate_propagated_counts_5_0_i2);
MR_def_label(propagate__accumulate_propagated_counts_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(prof_info__prof_node_get_propagated_counts_2_0,
		propagate__accumulate_propagated_counts_5_0_i3);
MR_def_label(propagate__accumulate_propagated_counts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_sv(1)) + MR_word_to_float(MR_r1)));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(propagate_module13)
	MR_init_entry1(__Unify___propagate__cycle_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___propagate__cycle_info_0_0);
	MR_init_label3(__Unify___propagate__cycle_info_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___propagate__cycle_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___propagate__cycle_info_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___propagate__cycle_info_0_0_i4);
MR_def_label(__Unify___propagate__cycle_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___propagate__cycle_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___propagate__cycle_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___propagate__cycle_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(propagate_module14)
	MR_init_entry1(__Compare___propagate__cycle_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___propagate__cycle_info_0_0);
	MR_init_label4(__Compare___propagate__cycle_info_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___propagate__cycle_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___propagate__cycle_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___propagate__cycle_info_0_0_i2);
MR_def_label(__Compare___propagate__cycle_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___propagate__cycle_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___propagate__cycle_info_0_0_i5);
MR_def_label(__Compare___propagate__cycle_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___propagate__cycle_info_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___propagate__cycle_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module15)
	MR_init_entry1(__Unify___propagate__cycle_to_preds_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___propagate__cycle_to_preds_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___propagate__cycle_to_preds_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module16)
	MR_init_entry1(__Compare___propagate__cycle_to_preds_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___propagate__cycle_to_preds_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___propagate__cycle_to_preds_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module17)
	MR_init_entry1(__Unify___propagate__pred_to_cycle_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___propagate__pred_to_cycle_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___propagate__pred_to_cycle_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module18)
	MR_init_entry1(__Compare___propagate__pred_to_cycle_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___propagate__pred_to_cycle_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___propagate__pred_to_cycle_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(digraph__lookup_vertex_3_0);

MR_BEGIN_MODULE(propagate_module19)
	MR_init_entry1(propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__identify_cycles_2__107__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(propagate__IntroducedFrom__pred__identify_cycles_2__107__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(digraph__lookup_vertex_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(propagate_module20)
	MR_init_entry1(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0);
	MR_init_label3(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_cycle_list__[2, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0,
		f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0_i4);
MR_def_label(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(prof_info__pred_info_init_3_0,
		f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0_i5);
MR_def_label(f_112_114_111_112_97_103_97_116_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_121_99_108_101_95_108_105_115_116_95_95_91_50_44_32_51_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__propagate_maybe_bunch_0(void)
{
	propagate_module0();
	propagate_module1();
	propagate_module2();
	propagate_module3();
	propagate_module4();
	propagate_module5();
	propagate_module6();
	propagate_module7();
	propagate_module8();
	propagate_module9();
	propagate_module10();
	propagate_module11();
	propagate_module12();
	propagate_module13();
	propagate_module14();
	propagate_module15();
	propagate_module16();
	propagate_module17();
	propagate_module18();
	propagate_module19();
	propagate_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__propagate__init(void);
void mercury__propagate__init_type_tables(void);
void mercury__propagate__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__propagate__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__propagate__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__propagate__init_threadscope_string_table(void);
#endif

void mercury__propagate__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__propagate_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_propagate__type_ctor_info_cycle_info_0,
		propagate__cycle_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_propagate__type_ctor_info_cycle_to_preds_map_0,
		propagate__cycle_to_preds_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_propagate__type_ctor_info_pred_to_cycle_map_0,
		propagate__pred_to_cycle_map_0_0);
	mercury__propagate__init_debugger();
}

void mercury__propagate__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_propagate__type_ctor_info_cycle_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_propagate__type_ctor_info_cycle_to_preds_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_propagate__type_ctor_info_pred_to_cycle_map_0);
	}
}


void mercury__propagate__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__propagate__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__propagate);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__propagate__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__propagate__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
