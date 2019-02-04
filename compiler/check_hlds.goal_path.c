/*
** Automatically generated from `goal_path.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__goal_path__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.goal_path.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.goal_path.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.goal_path.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.goal_path.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "check_hlds.goal_path.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "check_hlds.goal_path.c"
#line 48 "check_hlds.goal_path.c"
#include "check_hlds.goal_path.mh"

#line 51 "check_hlds.goal_path.c"
#line 52 "check_hlds.goal_path.c"
#ifndef CHECK_HLDS__GOAL_PATH_DECL_GUARD
#define CHECK_HLDS__GOAL_PATH_DECL_GUARD

#line 56 "check_hlds.goal_path.c"
#line 57 "check_hlds.goal_path.c"

#endif
#line 60 "check_hlds.goal_path.c"

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
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__goal_path__type_ctor_info_slot_info_0;
MR_decl_label3(check_hlds__goal_path__fill_conj_slots_5_0, 4,5,3)
MR_decl_label3(check_hlds__goal_path__fill_disj_slots_5_0, 4,5,3)
MR_decl_label8(check_hlds__goal_path__fill_expr_slots_5_0, 4,7,11,12,63,14,64,16)
MR_decl_label8(check_hlds__goal_path__fill_expr_slots_5_0, 65,18,21,20,24,66,26,67)
MR_decl_label8(check_hlds__goal_path__fill_expr_slots_5_0, 28,29,30,32,68,34,35,36)
MR_decl_label1(check_hlds__goal_path__fill_expr_slots_5_0, 37)
MR_decl_label3(check_hlds__goal_path__fill_goal_path_slots_3_0, 2,3,4)
MR_decl_label5(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0, 2,3,4,5,6)
MR_decl_label4(check_hlds__goal_path__fill_goal_slots_4_0, 3,4,5,6)
MR_decl_label1(check_hlds__goal_path__fill_slots_in_clause_5_0, 2)
MR_decl_label3(check_hlds__goal_path__fill_switch_slots_6_0, 4,5,3)
MR_decl_label4(check_hlds__goal_path__mode_equiv_step_1_0, 12,7,16,4)
MR_decl_label4(__Unify___check_hlds__goal_path__slot_info_0_0, 4,6,8,1)
MR_decl_label5(__Compare___check_hlds__goal_path__slot_info_0_0, 3,2,5,9,29)
MR_decl_static(check_hlds__goal_path__fill_goal_slots_4_0)
MR_decl_static(check_hlds__goal_path__fill_expr_slots_5_0)
MR_decl_static(check_hlds__goal_path__fill_conj_slots_5_0)
MR_decl_static(check_hlds__goal_path__fill_disj_slots_5_0)
MR_decl_static(check_hlds__goal_path__fill_switch_slots_6_0)
MR_def_extern_entry(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0)
MR_def_extern_entry(check_hlds__goal_path__fill_goal_path_slots_3_0)
MR_def_extern_entry(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0)
MR_decl_static(check_hlds__goal_path__fill_slots_in_clause_5_0)
MR_decl_static(check_hlds__goal_path__mode_equiv_step_1_0)
MR_decl_static(__Unify___check_hlds__goal_path__slot_info_0_0)
MR_decl_static(__Compare___check_hlds__goal_path__slot_info_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__goal_path__fill_goal_slots_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__goal_path__fill_goal_slots_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(check_hlds__goal_path__mode_equiv_step_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
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
mercury_data__closure_layout__check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__goal_path__type_ctor_info_slot_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(check_hlds__goal_path, slot_info),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__goal_path__field_types_slot_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__goal_path__field_names_slot_info_0_0[] = {
	"vartypes",
	"module_info",
	"omit_mode_equiv_prefix"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__goal_path__du_functor_desc_slot_info_0_0 = {
	"slot_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__goal_path__field_types_slot_info_0_0,
	mercury_data_check_hlds__goal_path__field_names_slot_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__goal_path__du_stag_ordered_slot_info_0_0[] = {
	&mercury_data_check_hlds__goal_path__du_functor_desc_slot_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__goal_path__du_ptag_ordered_slot_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__goal_path__du_stag_ordered_slot_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__goal_path__du_name_ordered_slot_info_0[] = {
	&mercury_data_check_hlds__goal_path__du_functor_desc_slot_info_0_0
};

const MR_Integer mercury_data_check_hlds__goal_path__functor_number_map_slot_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__goal_path__type_ctor_info_slot_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__goal_path__slot_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__goal_path__slot_info_0_0)),
	"check_hlds.goal_path",
	"slot_info",
	{ (void *)mercury_data_check_hlds__goal_path__du_name_ordered_slot_info_0 },
	{ (void *)mercury_data_check_hlds__goal_path__du_ptag_ordered_slot_info_0 },
	1,
	4,
	mercury_data_check_hlds__goal_path__functor_number_map_slot_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__goal_path__fill_goal_slots_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.goal_path",
"check_hlds.goal_path",
"mode_equiv_step",
1,
0
},
"check_hlds.goal_path",
"goal_path.m",
120,
"d1;c6;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.goal_path",
"check_hlds.goal_path",
"fill_slots_in_clause",
5,
0
},
"check_hlds.goal_path",
"goal_path.m",
96,
"d1;c9;"
};

MR_decl_entry(hlds__hlds_goal__goal_info_set_goal_path_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
MR_decl_entry(list__takewhile_4_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module0)
	MR_init_entry1(check_hlds__goal_path__fill_goal_slots_4_0);
	MR_init_label4(check_hlds__goal_path__fill_goal_slots_4_0,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_goal_slots_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_goal_slots_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_path_3_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i5);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i4);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_path_3_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i5);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_expr_slots_5_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i6);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__switch_type_num_functors_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module1)
	MR_init_entry1(check_hlds__goal_path__fill_expr_slots_5_0);
	MR_init_label8(check_hlds__goal_path__fill_expr_slots_5_0,4,7,11,12,63,14,64,16)
	MR_init_label8(check_hlds__goal_path__fill_expr_slots_5_0,65,18,21,20,24,66,26,67)
	MR_init_label8(check_hlds__goal_path__fill_expr_slots_5_0,28,29,30,32,68,34,35,36)
	MR_init_label1(check_hlds__goal_path__fill_expr_slots_5_0,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_expr_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i11));
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r4, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(2, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 6);
	MR_sv(10) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_ctfield(2, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i7);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 8);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 7) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_tfield(0, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r4, 0),
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i63) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i64) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i65) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i66) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i67) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i68) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i37));
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(3, MR_r4, 2);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_conj_slots_5_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i14);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_disj_slots_5_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i16);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(2), 0);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i18);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__type_util__switch_type_num_functors_3_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i21);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i20);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__goal_path__fill_switch_slots_6_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i24);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__goal_path__fill_switch_slots_6_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i24);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i26);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_ctfield(3, MR_tempr1, 2), 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i28);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i29);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i30);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i32);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i32);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i34);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i35);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i36);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_path.m", 11);
	MR_r2 = (MR_Word) MR_string_const("fill_expr_slots: unexpected shorthand", 37);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module2)
	MR_init_entry1(check_hlds__goal_path__fill_conj_slots_5_0);
	MR_init_label3(check_hlds__goal_path__fill_conj_slots_5_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_conj_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_conj_slots_5_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_conj_slots_5_0_i4);
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_conj_slots_5_0,
		check_hlds__goal_path__fill_conj_slots_5_0_i5);
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module3)
	MR_init_entry1(check_hlds__goal_path__fill_disj_slots_5_0);
	MR_init_label3(check_hlds__goal_path__fill_disj_slots_5_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_disj_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_disj_slots_5_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_disj_slots_5_0_i4);
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_disj_slots_5_0,
		check_hlds__goal_path__fill_disj_slots_5_0_i5);
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module4)
	MR_init_entry1(check_hlds__goal_path__fill_switch_slots_6_0);
	MR_init_label3(check_hlds__goal_path__fill_switch_slots_6_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_switch_slots_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_switch_slots_6_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr4;
	MR_tempr5 = MR_r4;
	MR_sv(3) = MR_tempr5;
	MR_tempr6 = MR_r5;
	MR_tempr3 = MR_ctfield(1, MR_tempr6, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr6, 1);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr5;
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_switch_slots_6_0_i4);
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_switch_slots_6_0,
		check_hlds__goal_path__fill_switch_slots_6_0_i5);
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module5)
	MR_init_entry1(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(check_hlds__goal_path__fill_goal_slots_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module6)
	MR_init_entry1(check_hlds__goal_path__fill_goal_path_slots_3_0);
	MR_init_label3(check_hlds__goal_path__fill_goal_path_slots_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__goal_path__fill_goal_path_slots_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__goal_path__fill_goal_path_slots_3_0_i2);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__goal_path__fill_goal_path_slots_3_0_i3);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_goal_path_slots_3_0_i4);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_3_0,4)
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

MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_clauses_only_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module7)
	MR_init_entry1(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
	MR_init_label5(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i2);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_clauses_only_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i3);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i4);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__goal_path__fill_slots_in_clause_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i5);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_3_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i6);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module8)
	MR_init_entry1(check_hlds__goal_path__fill_slots_in_clause_5_0);
	MR_init_label1(check_hlds__goal_path__fill_slots_in_clause_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_slots_in_clause_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr3 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 3);
	MR_tempr1 = MR_tempr4;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_slots_in_clause_5_0_i2);
MR_def_label(check_hlds__goal_path__fill_slots_in_clause_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module9)
	MR_init_entry1(check_hlds__goal_path__mode_equiv_step_1_0);
	MR_init_label4(check_hlds__goal_path__mode_equiv_step_1_0,12,7,16,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__mode_equiv_step_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__mode_equiv_step_1_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__goal_path__mode_equiv_step_1_0_i7);
	}
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2));
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_ctfield(3, MR_r1, 0) == (MR_Integer) 1);
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i12) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i16) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i16));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module10)
	MR_init_entry1(__Unify___check_hlds__goal_path__slot_info_0_0);
	MR_init_label4(__Unify___check_hlds__goal_path__slot_info_0_0,4,6,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__goal_path__slot_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__goal_path__slot_info_0_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__goal_path__slot_info_0_0_i4);
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__goal_path__slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__goal_path__slot_info_0_0_i6);
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__goal_path__slot_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module11)
	MR_init_entry1(__Compare___check_hlds__goal_path__slot_info_0_0);
	MR_init_label5(__Compare___check_hlds__goal_path__slot_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__goal_path__slot_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__goal_path__slot_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__goal_path__slot_info_0_0_i2);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__goal_path__slot_info_0_0_i5);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__goal_path__slot_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__goal_path__slot_info_0_0_i9);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__goal_path__slot_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__goal_path_maybe_bunch_0(void)
{
	check_hlds__goal_path_module0();
	check_hlds__goal_path_module1();
	check_hlds__goal_path_module2();
	check_hlds__goal_path_module3();
	check_hlds__goal_path_module4();
	check_hlds__goal_path_module5();
	check_hlds__goal_path_module6();
	check_hlds__goal_path_module7();
	check_hlds__goal_path_module8();
	check_hlds__goal_path_module9();
	check_hlds__goal_path_module10();
	check_hlds__goal_path_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__goal_path__init(void);
void mercury__check_hlds__goal_path__init_type_tables(void);
void mercury__check_hlds__goal_path__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__goal_path__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__goal_path__init_complexity_procs(void);
#endif

void mercury__check_hlds__goal_path__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__goal_path_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__goal_path__type_ctor_info_slot_info_0,
		check_hlds__goal_path__slot_info_0_0);
	mercury__check_hlds__goal_path__init_debugger();
}

void mercury__check_hlds__goal_path__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__goal_path__type_ctor_info_slot_info_0);
	}
}


void mercury__check_hlds__goal_path__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__goal_path__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__goal_path__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
