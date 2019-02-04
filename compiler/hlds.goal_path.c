/*
** Automatically generated from `goal_path.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__goal_path__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "hlds.goal_path.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "hlds.goal_path.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "hlds.goal_path.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "hlds.goal_path.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.goal_path.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.goal_path.c"
#line 49 "hlds.goal_path.c"
#include "hlds.goal_path.mh"

#line 52 "hlds.goal_path.c"
#line 53 "hlds.goal_path.c"
#ifndef HLDS__GOAL_PATH_DECL_GUARD
#define HLDS__GOAL_PATH_DECL_GUARD

#line 57 "hlds.goal_path.c"
#line 58 "hlds.goal_path.c"

#endif
#line 61 "hlds.goal_path.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__goal_path__type_ctor_info_slot_info_0;
MR_decl_label3(hlds__goal_path__fill_conj_id_slots_9_0, 19,6,7)
MR_decl_label3(hlds__goal_path__fill_conj_path_slots_5_0, 19,6,7)
MR_decl_label3(hlds__goal_path__fill_disj_id_slots_9_0, 19,6,7)
MR_decl_label3(hlds__goal_path__fill_disj_path_slots_5_0, 19,6,7)
MR_decl_label10(hlds__goal_path__fill_goal_id_slots_8_0, 2,3,7,5,77,11,14,9,19,18)
MR_decl_label10(hlds__goal_path__fill_goal_id_slots_8_0, 23,22,28,30,32,26,36,37,38,44)
MR_decl_label10(hlds__goal_path__fill_goal_id_slots_8_0, 35,51,52,49,58,56,47,64,67,66)
MR_decl_label1(hlds__goal_path__fill_goal_id_slots_8_0, 71)
MR_decl_label7(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0, 2,3,4,7,8,9,10)
MR_decl_label5(hlds__goal_path__fill_goal_id_slots_in_proc_4_0, 2,3,5,6,7)
MR_decl_label2(hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0, 3,4)
MR_decl_label10(hlds__goal_path__fill_goal_path_slots_4_0, 2,6,4,10,12,8,17,16,21,20)
MR_decl_label10(hlds__goal_path__fill_goal_path_slots_4_0, 28,29,30,24,34,35,36,42,33,49)
MR_decl_label10(hlds__goal_path__fill_goal_path_slots_4_0, 50,47,56,54,45,62,65,64,69,61)
MR_decl_label3(hlds__goal_path__fill_goal_path_slots_in_proc_3_0, 2,3,5)
MR_decl_label3(hlds__goal_path__fill_orelse_id_slots_9_0, 19,6,7)
MR_decl_label3(hlds__goal_path__fill_orelse_path_slots_5_0, 19,6,7)
MR_decl_label3(hlds__goal_path__fill_slots_in_clause_9_0, 2,3,6)
MR_decl_label3(hlds__goal_path__fill_switch_id_slots_10_0, 20,6,8)
MR_decl_label3(hlds__goal_path__fill_switch_path_slots_6_0, 20,6,8)
MR_decl_label3(__Unify___hlds__goal_path__slot_info_0_0, 4,8,1)
MR_decl_label4(__Compare___hlds__goal_path__slot_info_0_0, 3,2,5,27)
MR_decl_static(hlds__goal_path__fill_goal_id_slots_8_0)
MR_decl_static(hlds__goal_path__fill_conj_id_slots_9_0)
MR_decl_static(hlds__goal_path__fill_disj_id_slots_9_0)
MR_decl_static(hlds__goal_path__fill_switch_id_slots_10_0)
MR_decl_static(hlds__goal_path__fill_orelse_id_slots_9_0)
MR_def_extern_entry(hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0)
MR_def_extern_entry(hlds__goal_path__fill_goal_id_slots_in_proc_4_0)
MR_def_extern_entry(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0)
MR_decl_static(hlds__goal_path__fill_goal_path_slots_4_0)
MR_decl_static(hlds__goal_path__fill_conj_path_slots_5_0)
MR_decl_static(hlds__goal_path__fill_disj_path_slots_5_0)
MR_decl_static(hlds__goal_path__fill_switch_path_slots_6_0)
MR_decl_static(hlds__goal_path__fill_orelse_path_slots_5_0)
MR_def_extern_entry(hlds__goal_path__fill_goal_path_slots_in_proc_3_0)
MR_decl_static(hlds__goal_path__fill_slots_in_clause_9_0)
MR_decl_static(__Unify___hlds__goal_path__slot_info_0_0)
MR_decl_static(__Compare___hlds__goal_path__slot_info_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_goal_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_containing_goal_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id),
MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
1,
1
}
},
{
{
1,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_path__type_ctor_info_slot_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__goal_path, slot_info),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_hlds__goal_path__field_types_slot_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

const MR_ConstString mercury_data_hlds__goal_path__field_names_slot_info_0_0[] = {
	"slot_info_module_info",
	"slot_info_vartypes"
};

static const MR_DuFunctorDesc mercury_data_hlds__goal_path__du_functor_desc_slot_info_0_0 = {
	"slot_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__goal_path__field_types_slot_info_0_0,
	mercury_data_hlds__goal_path__field_names_slot_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__goal_path__du_stag_ordered_slot_info_0_0[] = {
	&mercury_data_hlds__goal_path__du_functor_desc_slot_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__goal_path__du_ptag_ordered_slot_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__goal_path__du_stag_ordered_slot_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__goal_path__du_name_ordered_slot_info_0[] = {
	&mercury_data_hlds__goal_path__du_functor_desc_slot_info_0_0
};

const MR_Integer mercury_data_hlds__goal_path__functor_number_map_slot_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__goal_path__type_ctor_info_slot_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__goal_path__slot_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__goal_path__slot_info_0_0)),
	"hlds.goal_path",
	"slot_info",
	{ (void *)mercury_data_hlds__goal_path__du_name_ordered_slot_info_0 },
	{ (void *)mercury_data_hlds__goal_path__du_ptag_ordered_slot_info_0 },
	1,
	4,
	mercury_data_hlds__goal_path__functor_number_map_slot_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_1 = {
{
MR_PREDICATE,
"hlds.goal_path",
"hlds.goal_path",
"fill_slots_in_clause",
9,
0
},
"hlds.goal_path",
"goal_path.m",
104,
"10"
};


MR_decl_entry(hlds__hlds_goal__goal_info_set_goal_id_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(check_hlds__type_util__switch_type_num_functors_3_0);

MR_BEGIN_MODULE(hlds__goal_path_module0)
	MR_init_entry1(hlds__goal_path__fill_goal_id_slots_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_goal_id_slots_8_0);
	MR_init_label10(hlds__goal_path__fill_goal_id_slots_8_0,2,3,7,5,77,11,14,9,19,18)
	MR_init_label10(hlds__goal_path__fill_goal_id_slots_8_0,23,22,28,30,32,26,36,37,38,44)
	MR_init_label10(hlds__goal_path__fill_goal_id_slots_8_0,35,51,52,49,58,56,47,64,67,66)
	MR_init_label1(hlds__goal_path__fill_goal_id_slots_8_0,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_id_slots'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_goal_id_slots_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(12) = MR_r4;
	MR_sv(5) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_id_3_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i2);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i3);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_body((MR_Integer) MR_sv(11), (MR_Integer) 0);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i7);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),1)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(11), 1);
	MR_r5 = MR_tempr1;
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))))) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i11);
	}
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(10);
	MR_tempr4 = MR_sv(11);
	MR_sv(10) = MR_tfield(1, MR_tempr4, 0);
	MR_tempr2 = MR_tempr4;
	MR_sv(11) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 4);
	MR_tempr5 = MR_r5;
	MR_sv(1) = ((MR_Integer) MR_tfield(2, MR_tempr5, 0) & (MR_Integer) 3);
	MR_sv(4) = (((MR_Integer) MR_tfield(2, MR_tempr5, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = (((MR_Integer) MR_tfield(2, MR_tempr5, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(2, MR_tempr5, 5);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tfield(2, MR_tempr5, 6);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i14);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) | (((MR_Integer) MR_sv(4) << (MR_Integer) 2) | ((MR_Integer) MR_sv(5) << (MR_Integer) 3)));
	MR_tfield(2, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 6) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,2)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(10);
	MR_tempr3 = MR_sv(11);
	MR_sv(10) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_conj_id_slots_9_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i19);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,3)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(3, MR_sv(11), 1);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_disj_id_slots_9_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i23);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,6)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i26);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i28);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i30);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i32);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,5)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i35);
	}
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_tfield(3, MR_r2, 1);
	MR_sv(12) = MR_tfield(0, MR_tfield(3, MR_r2, 2), 1);
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i36);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i37);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(12))) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i44);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i44);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,7)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_sv(11), 1);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i49);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i51);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_orelse_id_slots_9_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i52);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 5) = MR_r3;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i56);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(10);
	MR_tempr3 = MR_r6;
	MR_sv(10) = MR_tfield(2, MR_tempr3, 0);
	MR_sv(11) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tfield(2, MR_tempr3, 2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i58);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_path", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_path.fill_goal_id_slots\'/8", 47);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(11),3,4)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i77);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_sv(10);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i64);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__switch_type_num_functors_3_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i67);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_id_slots_8_0_i66);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r7 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_path__fill_switch_id_slots_10_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i71);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r7 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_path__fill_switch_id_slots_10_0,
		hlds__goal_path__fill_goal_id_slots_8_0_i71);
MR_def_label(hlds__goal_path__fill_goal_id_slots_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module1)
	MR_init_entry1(hlds__goal_path__fill_conj_id_slots_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_conj_id_slots_9_0);
	MR_init_label3(hlds__goal_path__fill_conj_id_slots_9_0,19,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_conj_id_slots'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_conj_id_slots_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_conj_id_slots_9_0_i19);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_conj_id_slots_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_conj_id_slots_9_0_i6);
MR_def_label(hlds__goal_path__fill_conj_id_slots_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_conj_id_slots_9_0,
		hlds__goal_path__fill_conj_id_slots_9_0_i7);
MR_def_label(hlds__goal_path__fill_conj_id_slots_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module2)
	MR_init_entry1(hlds__goal_path__fill_disj_id_slots_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_disj_id_slots_9_0);
	MR_init_label3(hlds__goal_path__fill_disj_id_slots_9_0,19,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_disj_id_slots'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_disj_id_slots_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_disj_id_slots_9_0_i19);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_disj_id_slots_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_disj_id_slots_9_0_i6);
MR_def_label(hlds__goal_path__fill_disj_id_slots_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_disj_id_slots_9_0,
		hlds__goal_path__fill_disj_id_slots_9_0_i7);
MR_def_label(hlds__goal_path__fill_disj_id_slots_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module3)
	MR_init_entry1(hlds__goal_path__fill_switch_id_slots_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_switch_id_slots_10_0);
	MR_init_label3(hlds__goal_path__fill_switch_id_slots_10_0,20,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_switch_id_slots'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_switch_id_slots_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_switch_id_slots_10_0_i20);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_switch_id_slots_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tempr4 = MR_r4;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_tempr5 = MR_r7;
	MR_sv(3) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr3 = MR_tfield(1, MR_tempr5, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_tfield(0, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_switch_id_slots_10_0_i6);
MR_def_label(hlds__goal_path__fill_switch_id_slots_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_sv(3);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_switch_id_slots_10_0,
		hlds__goal_path__fill_switch_id_slots_10_0_i8);
MR_def_label(hlds__goal_path__fill_switch_id_slots_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module4)
	MR_init_entry1(hlds__goal_path__fill_orelse_id_slots_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_orelse_id_slots_9_0);
	MR_init_label3(hlds__goal_path__fill_orelse_id_slots_9_0,19,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_orelse_id_slots'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_orelse_id_slots_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_orelse_id_slots_9_0_i19);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_orelse_id_slots_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_orelse_id_slots_9_0_i6);
MR_def_label(hlds__goal_path__fill_orelse_id_slots_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_orelse_id_slots_9_0,
		hlds__goal_path__fill_orelse_id_slots_9_0_i7);
MR_def_label(hlds__goal_path__fill_orelse_id_slots_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(hlds__goal_path_module5)
	MR_init_entry1(hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0);
	MR_init_label2(hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_id_slots_in_proc_body'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0_i3);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0_i4);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_body_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(hlds__goal_path_module6)
	MR_init_entry1(hlds__goal_path__fill_goal_id_slots_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_goal_id_slots_in_proc_4_0);
	MR_init_label5(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,2,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_id_slots_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_path__fill_goal_id_slots_in_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_4_0_i2);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_4_0_i3);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_4_0_i5);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_4_0_i6);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		hlds__goal_path__fill_goal_id_slots_in_proc_4_0_i7);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl3_9_1);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0);

MR_BEGIN_MODULE(hlds__goal_path_module7)
	MR_init_entry1(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_goal_id_slots_in_clauses_4_0);
	MR_init_label7(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,2,3,4,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_id_slots_in_clauses'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_path__fill_goal_id_slots_in_clauses_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i2);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i3);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i4);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_path__fill_slots_in_clause_9_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, goal_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__goal_path, containing_goal);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i7);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r3;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = (MR_Integer) 1;
	MR_r10 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i8);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i9);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		hlds__goal_path__fill_goal_id_slots_in_clauses_4_0_i10);
MR_def_label(hlds__goal_path__fill_goal_id_slots_in_clauses_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_reverse_goal_path_3_0);

MR_BEGIN_MODULE(hlds__goal_path_module8)
	MR_init_entry1(hlds__goal_path__fill_goal_path_slots_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_goal_path_slots_4_0);
	MR_init_label10(hlds__goal_path__fill_goal_path_slots_4_0,2,6,4,10,12,8,17,16,21,20)
	MR_init_label10(hlds__goal_path__fill_goal_path_slots_4_0,28,29,30,24,34,35,36,42,33,49)
	MR_init_label10(hlds__goal_path__fill_goal_path_slots_4_0,50,47,56,54,45,62,65,64,69,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_path_slots'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_goal_path_slots_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_reverse_goal_path_3_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i2);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 0);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i6);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_r5 = MR_tempr1;
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))))) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 4);
	MR_tempr4 = MR_r5;
	MR_sv(6) = ((MR_Integer) MR_tfield(2, MR_tempr4, 0) & (MR_Integer) 3);
	MR_sv(7) = (((MR_Integer) MR_tfield(2, MR_tempr4, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(2, MR_tempr4, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(9) = MR_tfield(2, MR_tempr4, 2);
	MR_sv(10) = MR_tfield(2, MR_tempr4, 3);
	MR_sv(11) = MR_tfield(2, MR_tempr4, 4);
	MR_sv(12) = MR_tfield(2, MR_tempr4, 5);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(2, MR_tempr4, 6);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i12);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 7);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_sv(6) | (((MR_Integer) MR_sv(7) << (MR_Integer) 2) | ((MR_Integer) MR_sv(8) << (MR_Integer) 3)));
	MR_tfield(2, MR_tempr1, 2) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(12);
	MR_tfield(2, MR_tempr1, 6) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_conj_path_slots_5_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i17);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_disj_path_slots_5_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i21);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tempr4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr4, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr4, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i28);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i29);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i30);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i33);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(3, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_tfield(3, MR_r2, 2), 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i34);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i35);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(5))) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i36);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i42);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i42);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i47);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 6);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i49);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_orelse_path_slots_5_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i50);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 7);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_sv(6);
	MR_tfield(1, MR_r2, 3) = MR_sv(7);
	MR_tfield(1, MR_r2, 4) = MR_sv(2);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_tfield(1, MR_r2, 6) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr3, 0);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(2, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_tempr3, 2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i56);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.goal_path", 14);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.goal_path.fill_goal_path_slots\'/4", 49);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i61);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_sv(3);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i62);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__switch_type_num_functors_3_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i65);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__goal_path__fill_goal_path_slots_4_0_i64);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_path__fill_switch_path_slots_6_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i69);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__goal_path__fill_switch_path_slots_6_0,
		hlds__goal_path__fill_goal_path_slots_4_0_i69);
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(13);
	}
MR_def_label(hlds__goal_path__fill_goal_path_slots_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module9)
	MR_init_entry1(hlds__goal_path__fill_conj_path_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_conj_path_slots_5_0);
	MR_init_label3(hlds__goal_path__fill_conj_path_slots_5_0,19,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_conj_path_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_conj_path_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_conj_path_slots_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_conj_path_slots_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_conj_path_slots_5_0_i6);
MR_def_label(hlds__goal_path__fill_conj_path_slots_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_conj_path_slots_5_0,
		hlds__goal_path__fill_conj_path_slots_5_0_i7);
MR_def_label(hlds__goal_path__fill_conj_path_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module10)
	MR_init_entry1(hlds__goal_path__fill_disj_path_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_disj_path_slots_5_0);
	MR_init_label3(hlds__goal_path__fill_disj_path_slots_5_0,19,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_disj_path_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_disj_path_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_disj_path_slots_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_disj_path_slots_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_disj_path_slots_5_0_i6);
MR_def_label(hlds__goal_path__fill_disj_path_slots_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_disj_path_slots_5_0,
		hlds__goal_path__fill_disj_path_slots_5_0_i7);
MR_def_label(hlds__goal_path__fill_disj_path_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module11)
	MR_init_entry1(hlds__goal_path__fill_switch_path_slots_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_switch_path_slots_6_0);
	MR_init_label3(hlds__goal_path__fill_switch_path_slots_6_0,20,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_switch_path_slots'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_switch_path_slots_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_switch_path_slots_6_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_switch_path_slots_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_sv(2) = MR_tempr5;
	MR_tempr6 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tfield(1, MR_tempr6, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_tfield(0, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_switch_path_slots_6_0_i6);
MR_def_label(hlds__goal_path__fill_switch_path_slots_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_switch_path_slots_6_0,
		hlds__goal_path__fill_switch_path_slots_6_0_i8);
MR_def_label(hlds__goal_path__fill_switch_path_slots_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module12)
	MR_init_entry1(hlds__goal_path__fill_orelse_path_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_orelse_path_slots_5_0);
	MR_init_label3(hlds__goal_path__fill_orelse_path_slots_5_0,19,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_orelse_path_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_orelse_path_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__goal_path__fill_orelse_path_slots_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__goal_path__fill_orelse_path_slots_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_orelse_path_slots_5_0_i6);
MR_def_label(hlds__goal_path__fill_orelse_path_slots_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__goal_path__fill_orelse_path_slots_5_0,
		hlds__goal_path__fill_orelse_path_slots_5_0_i7);
MR_def_label(hlds__goal_path__fill_orelse_path_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__goal_path_module13)
	MR_init_entry1(hlds__goal_path__fill_goal_path_slots_in_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_goal_path_slots_in_proc_3_0);
	MR_init_label3(hlds__goal_path__fill_goal_path_slots_in_proc_3_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_path_slots_in_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__goal_path__fill_goal_path_slots_in_proc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__goal_path__fill_goal_path_slots_in_proc_3_0_i2);
MR_def_label(hlds__goal_path__fill_goal_path_slots_in_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__goal_path__fill_goal_path_slots_in_proc_3_0_i3);
MR_def_label(hlds__goal_path__fill_goal_path_slots_in_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_path_slots_4_0,
		hlds__goal_path__fill_goal_path_slots_in_proc_3_0_i5);
MR_def_label(hlds__goal_path__fill_goal_path_slots_in_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);
MR_decl_entry(fn__mdbcomp__goal_path__whole_body_goal_id_0_0);

MR_BEGIN_MODULE(hlds__goal_path_module14)
	MR_init_entry1(hlds__goal_path__fill_slots_in_clause_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__goal_path__fill_slots_in_clause_9_0);
	MR_init_label3(hlds__goal_path__fill_slots_in_clause_9_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_slots_in_clause'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__goal_path__fill_slots_in_clause_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		hlds__goal_path__fill_slots_in_clause_9_0_i2);
MR_def_label(hlds__goal_path__fill_slots_in_clause_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__whole_body_goal_id_0_0,
		hlds__goal_path__fill_slots_in_clause_9_0_i3);
MR_def_label(hlds__goal_path__fill_slots_in_clause_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_sv(4);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_r1 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__goal_path__fill_goal_id_slots_8_0,
		hlds__goal_path__fill_slots_in_clause_9_0_i6);
MR_def_label(hlds__goal_path__fill_slots_in_clause_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr4, 4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(hlds__goal_path_module15)
	MR_init_entry1(__Unify___hlds__goal_path__slot_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__goal_path__slot_info_0_0);
	MR_init_label3(__Unify___hlds__goal_path__slot_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__goal_path__slot_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__goal_path__slot_info_0_0_i8);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___hlds__goal_path__slot_info_0_0_i4);
MR_def_label(__Unify___hlds__goal_path__slot_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__goal_path__slot_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___hlds__goal_path__slot_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__goal_path__slot_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(hlds__goal_path_module16)
	MR_init_entry1(__Compare___hlds__goal_path__slot_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__goal_path__slot_info_0_0);
	MR_init_label4(__Compare___hlds__goal_path__slot_info_0_0,3,2,5,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__goal_path__slot_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__goal_path__slot_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__goal_path__slot_info_0_0_i2);
MR_def_label(__Compare___hlds__goal_path__slot_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__goal_path__slot_info_0_0,2)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___hlds__goal_path__slot_info_0_0_i5);
MR_def_label(__Compare___hlds__goal_path__slot_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__goal_path__slot_info_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___hlds__goal_path__slot_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__goal_path_maybe_bunch_0(void)
{
	hlds__goal_path_module0();
	hlds__goal_path_module1();
	hlds__goal_path_module2();
	hlds__goal_path_module3();
	hlds__goal_path_module4();
	hlds__goal_path_module5();
	hlds__goal_path_module6();
	hlds__goal_path_module7();
	hlds__goal_path_module8();
	hlds__goal_path_module9();
	hlds__goal_path_module10();
	hlds__goal_path_module11();
	hlds__goal_path_module12();
	hlds__goal_path_module13();
	hlds__goal_path_module14();
	hlds__goal_path_module15();
	hlds__goal_path_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__goal_path__init(void);
void mercury__hlds__goal_path__init_type_tables(void);
void mercury__hlds__goal_path__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__goal_path__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__goal_path__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__goal_path__init_threadscope_string_table(void);
#endif

void mercury__hlds__goal_path__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__goal_path_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__goal_path__type_ctor_info_slot_info_0,
		hlds__goal_path__slot_info_0_0);
	mercury__hlds__goal_path__init_debugger();
}

void mercury__hlds__goal_path__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__goal_path__type_ctor_info_slot_info_0);
	}
}


void mercury__hlds__goal_path__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__goal_path__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__goal_path);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__goal_path__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__goal_path__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
