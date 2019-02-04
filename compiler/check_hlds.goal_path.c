/*
** Automatically generated from `goal_path.m'
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
INIT mercury__check_hlds__goal_path__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "check_hlds.goal_path.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 32 "check_hlds.goal_path.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.goal_path.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.goal_path.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.goal_path.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.goal_path.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "check_hlds.goal_path.c"
#line 53 "check_hlds.goal_path.c"
#include "check_hlds.goal_path.mh"

#line 56 "check_hlds.goal_path.c"
#line 57 "check_hlds.goal_path.c"
#ifndef CHECK_HLDS__GOAL_PATH_DECL_GUARD
#define CHECK_HLDS__GOAL_PATH_DECL_GUARD

#line 61 "check_hlds.goal_path.c"
#line 62 "check_hlds.goal_path.c"

#endif
#line 65 "check_hlds.goal_path.c"

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
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
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
MR_decl_label4(check_hlds__goal_path__fill_conj_slots_5_0, 16,5,6,7)
MR_decl_label4(check_hlds__goal_path__fill_disj_slots_5_0, 16,5,6,7)
MR_decl_label10(check_hlds__goal_path__fill_expr_slots_5_0, 60,64,3,71,107,5,108,8,112,11)
MR_decl_label10(check_hlds__goal_path__fill_expr_slots_5_0, 12,13,14,15,16,110,19,20,111,23)
MR_decl_label10(check_hlds__goal_path__fill_expr_slots_5_0, 24,25,29,30,113,44,40,41,34,35)
MR_decl_label7(check_hlds__goal_path__fill_expr_slots_5_0, 36,37,109,51,54,53,58)
MR_decl_label4(check_hlds__goal_path__fill_goal_path_slots_3_0, 2,3,5,6)
MR_decl_label7(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0, 2,3,4,5,8,9,10)
MR_decl_label1(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0, 3)
MR_decl_label6(check_hlds__goal_path__fill_goal_slots_4_0, 3,4,6,7,8,9)
MR_decl_label4(check_hlds__goal_path__fill_orelse_slots_5_0, 16,5,6,7)
MR_decl_label2(check_hlds__goal_path__fill_slots_in_clause_5_0, 3,4)
MR_decl_label4(check_hlds__goal_path__fill_switch_slots_6_0, 17,5,6,8)
MR_decl_label4(check_hlds__goal_path__mode_equiv_step_1_0, 14,9,18,8)
MR_decl_label4(__Unify___check_hlds__goal_path__slot_info_0_0, 5,7,9,1)
MR_decl_label5(__Compare___check_hlds__goal_path__slot_info_0_0, 3,2,6,10,30)
MR_decl_static(fn__check_hlds__goal_path__this_file_0_0)
MR_decl_static(check_hlds__goal_path__fill_goal_slots_4_0)
MR_decl_static(check_hlds__goal_path__fill_expr_slots_5_0)
MR_decl_static(check_hlds__goal_path__fill_conj_slots_5_0)
MR_decl_static(check_hlds__goal_path__fill_disj_slots_5_0)
MR_decl_static(check_hlds__goal_path__fill_switch_slots_6_0)
MR_decl_static(check_hlds__goal_path__fill_orelse_slots_5_0)
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

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
	"slot_info_vartypes",
	"slot_info_module_info",
	"slot_info_omit_mode_equiv_prefix"
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
98,
"d1;c10;"
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
126,
"d1;c6;d1;c3;"
};



MR_BEGIN_MODULE(check_hlds__goal_path_module0)
	MR_init_entry1(fn__check_hlds__goal_path__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__goal_path__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__goal_path__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goal_path.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_set_goal_path_3_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_step_0;
MR_decl_entry(list__takewhile_4_0);
MR_decl_entry(fn__mdbcomp__program_representation__list_to_goal_path_1_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module1)
	MR_init_entry1(check_hlds__goal_path__fill_goal_slots_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_goal_slots_4_0);
	MR_init_label6(check_hlds__goal_path__fill_goal_slots_4_0,3,4,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_slots'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_goal_slots_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_goal_slots_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_path_3_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i8);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_list_1_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i4);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, goal_path_step);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i6);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__list_to_goal_path_1_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i7);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_goal_path_3_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i8);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_expr_slots_5_0,
		check_hlds__goal_path__fill_goal_slots_4_0_i9);
MR_def_label(check_hlds__goal_path__fill_goal_slots_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__switch_type_num_functors_3_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module2)
	MR_init_entry1(check_hlds__goal_path__fill_expr_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_expr_slots_5_0);
	MR_init_label10(check_hlds__goal_path__fill_expr_slots_5_0,60,64,3,71,107,5,108,8,112,11)
	MR_init_label10(check_hlds__goal_path__fill_expr_slots_5_0,12,13,14,15,16,110,19,20,111,23)
	MR_init_label10(check_hlds__goal_path__fill_expr_slots_5_0,24,25,29,30,113,44,40,41,34,35)
	MR_init_label7(check_hlds__goal_path__fill_expr_slots_5_0,36,37,109,51,54,53,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_expr_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_expr_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i60) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i71));
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 1);
	if (((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1)))) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i3);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 6);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(2, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i64);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 9);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 8) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(2);
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_tfield(0, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r4, 0),
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i107) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i108) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i109) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i110) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i111) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i112) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__fill_expr_slots_5_0_i113));
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_tfield(3, MR_r4, 2);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_conj_slots_5_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i5);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_disj_slots_5_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i8);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i11);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i12);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i13);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i14);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i15);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i16);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,16)
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
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i19);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i20);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tfield(3, MR_tempr1, 2), 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i23);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i24);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i29);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i29);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i30);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i34);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i40);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i44);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__goal_path__this_file_0_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i41);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("fill_expr_slots: unexpected bi_implication", 42);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 6);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i35);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i36);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__goal_path__fill_orelse_slots_5_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i37);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 7);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tfield(1, MR_r2, 2) = MR_sv(5);
	MR_tfield(1, MR_r2, 3) = MR_sv(6);
	MR_tfield(1, MR_r2, 4) = MR_sv(1);
	MR_tfield(1, MR_r2, 5) = MR_r1;
	MR_tfield(1, MR_r2, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(0, MR_sv(2), 0);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i51);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__switch_type_num_functors_3_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i54);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_expr_slots_5_0_i53);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__goal_path__fill_switch_slots_6_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i58);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__goal_path__fill_switch_slots_6_0,
		check_hlds__goal_path__fill_expr_slots_5_0_i58);
MR_def_label(check_hlds__goal_path__fill_expr_slots_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module3)
	MR_init_entry1(check_hlds__goal_path__fill_conj_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_conj_slots_5_0);
	MR_init_label4(check_hlds__goal_path__fill_conj_slots_5_0,16,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_conj_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_conj_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_conj_slots_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_conj_slots_5_0_i5);
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_conj_slots_5_0_i6);
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_conj_slots_5_0,
		check_hlds__goal_path__fill_conj_slots_5_0_i7);
MR_def_label(check_hlds__goal_path__fill_conj_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module4)
	MR_init_entry1(check_hlds__goal_path__fill_disj_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_disj_slots_5_0);
	MR_init_label4(check_hlds__goal_path__fill_disj_slots_5_0,16,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_disj_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_disj_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_disj_slots_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_disj_slots_5_0_i5);
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_disj_slots_5_0_i6);
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_disj_slots_5_0,
		check_hlds__goal_path__fill_disj_slots_5_0_i7);
MR_def_label(check_hlds__goal_path__fill_disj_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module5)
	MR_init_entry1(check_hlds__goal_path__fill_switch_slots_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_switch_slots_6_0);
	MR_init_label4(check_hlds__goal_path__fill_switch_slots_6_0,17,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_switch_slots'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_switch_slots_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_switch_slots_6_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tempr3 = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_switch_slots_6_0_i5);
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_switch_slots_6_0_i6);
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_switch_slots_6_0,
		check_hlds__goal_path__fill_switch_slots_6_0_i8);
MR_def_label(check_hlds__goal_path__fill_switch_slots_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module6)
	MR_init_entry1(check_hlds__goal_path__fill_orelse_slots_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_orelse_slots_5_0);
	MR_init_label4(check_hlds__goal_path__fill_orelse_slots_5_0,16,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_orelse_slots'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_orelse_slots_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__goal_path__fill_orelse_slots_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__goal_path__fill_orelse_slots_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_add_at_end_2_0,
		check_hlds__goal_path__fill_orelse_slots_5_0_i5);
MR_def_label(check_hlds__goal_path__fill_orelse_slots_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_orelse_slots_5_0_i6);
MR_def_label(check_hlds__goal_path__fill_orelse_slots_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(check_hlds__goal_path__fill_orelse_slots_5_0,
		check_hlds__goal_path__fill_orelse_slots_5_0_i7);
MR_def_label(check_hlds__goal_path__fill_orelse_slots_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__empty_goal_path_0_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module7)
	MR_init_entry1(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0);
	MR_init_label1(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_path_slots_in_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0_i3);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__goal_path__fill_goal_slots_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module8)
	MR_init_entry1(check_hlds__goal_path__fill_goal_path_slots_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_goal_path_slots_3_0);
	MR_init_label4(check_hlds__goal_path__fill_goal_path_slots_3_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_path_slots'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__goal_path__fill_goal_path_slots_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
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
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__empty_goal_path_0_0,
		check_hlds__goal_path__fill_goal_path_slots_3_0_i5);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_goal_path_slots_3_0_i6);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_3_0,6)
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
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module9)
	MR_init_entry1(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
	MR_init_label7(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,2,3,4,5,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_goal_path_slots_in_clauses'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i2);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i3);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i4);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_vartypes_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i5);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,5)
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
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i8);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i9);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0_i10);
MR_def_label(check_hlds__goal_path__fill_goal_path_slots_in_clauses_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__singleton_goal_path_1_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module10)
	MR_init_entry1(check_hlds__goal_path__fill_slots_in_clause_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__fill_slots_in_clause_5_0);
	MR_init_label2(check_hlds__goal_path__fill_slots_in_clause_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fill_slots_in_clause'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__fill_slots_in_clause_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_sv(1) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__singleton_goal_path_1_0,
		check_hlds__goal_path__fill_slots_in_clause_5_0_i3);
MR_def_label(check_hlds__goal_path__fill_slots_in_clause_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__goal_path__fill_goal_slots_4_0,
		check_hlds__goal_path__fill_slots_in_clause_5_0_i4);
MR_def_label(check_hlds__goal_path__fill_slots_in_clause_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__goal_path_module11)
	MR_init_entry1(check_hlds__goal_path__mode_equiv_step_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__goal_path__mode_equiv_step_1_0);
	MR_init_label4(check_hlds__goal_path__mode_equiv_step_1_0,14,9,18,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_equiv_step'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__goal_path__mode_equiv_step_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_r1);
	if ((MR_r2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(check_hlds__goal_path__mode_equiv_step_1_0_i8);
	}
	if ((MR_r2 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(check_hlds__goal_path__mode_equiv_step_1_0_i9);
	}
	MR_r1 = (MR_r2 == MR_mktag((MR_Integer) 2));
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 1);
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__goal_path__mode_equiv_step_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i18) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i18) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i14) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i18) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i18) MR_AND
		MR_LABEL_AP(check_hlds__goal_path__mode_equiv_step_1_0_i18));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(check_hlds__goal_path_module12)
	MR_init_entry1(__Unify___check_hlds__goal_path__slot_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__goal_path__slot_info_0_0);
	MR_init_label4(__Unify___check_hlds__goal_path__slot_info_0_0,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__goal_path__slot_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__goal_path__slot_info_0_0_i9);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__goal_path__slot_info_0_0_i5);
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__goal_path__slot_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__goal_path__slot_info_0_0_i7);
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__goal_path__slot_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___check_hlds__goal_path__slot_info_0_0,9)
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

MR_BEGIN_MODULE(check_hlds__goal_path_module13)
	MR_init_entry1(__Compare___check_hlds__goal_path__slot_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__goal_path__slot_info_0_0);
	MR_init_label5(__Compare___check_hlds__goal_path__slot_info_0_0,3,2,6,10,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__goal_path__slot_info_0_0_i6);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__goal_path__slot_info_0_0_i30);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__goal_path__slot_info_0_0_i10);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__goal_path__slot_info_0_0_i30);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__goal_path__slot_info_0_0,30)
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
	check_hlds__goal_path_module12();
	check_hlds__goal_path_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__goal_path__init(void);
void mercury__check_hlds__goal_path__init_type_tables(void);
void mercury__check_hlds__goal_path__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__goal_path__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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

void mercury__check_hlds__goal_path__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__goal_path);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__goal_path__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
