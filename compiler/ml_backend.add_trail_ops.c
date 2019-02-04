/*
** Automatically generated from `add_trail_ops.m'
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
INIT mercury__ml_backend__add_trail_ops__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "ml_backend.add_trail_ops.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "ml_backend.add_trail_ops.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "ml_backend.add_trail_ops.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "ml_backend.add_trail_ops.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "ml_backend.add_trail_ops.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "ml_backend.add_trail_ops.c"
#line 48 "ml_backend.add_trail_ops.c"
#include "ml_backend.add_trail_ops.mh"

#line 51 "ml_backend.add_trail_ops.c"
#line 52 "ml_backend.add_trail_ops.c"
#ifndef ML_BACKEND__ADD_TRAIL_OPS_DECL_GUARD
#define ML_BACKEND__ADD_TRAIL_OPS_DECL_GUARD

#line 56 "ml_backend.add_trail_ops.c"
#line 57 "ml_backend.add_trail_ops.c"

#endif
#line 60 "ml_backend.add_trail_ops.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
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

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0;
MR_decl_label7(ml_backend__add_trail_ops__add_trail_ops_5_0, 2,3,4,6,7,8,9)
MR_decl_label3(ml_backend__add_trail_ops__cases_add_trail_ops_4_0, 15,4,6)
MR_decl_label8(ml_backend__add_trail_ops__disj_add_trail_ops_7_0, 59,4,6,7,13,14,12,17)
MR_decl_label8(ml_backend__add_trail_ops__disj_add_trail_ops_7_0, 18,20,10,21,23,25,26,30)
MR_decl_label3(ml_backend__add_trail_ops__disj_add_trail_ops_7_0, 31,32,33)
MR_decl_label4(ml_backend__add_trail_ops__gen_discard_ticket_3_0, 4,5,3,7)
MR_decl_label6(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0, 5,6,3,8,11,14)
MR_decl_label4(ml_backend__add_trail_ops__gen_prune_ticket_3_0, 4,5,3,7)
MR_decl_label6(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0, 5,6,3,8,11,14)
MR_decl_label6(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0, 5,6,3,8,11,14)
MR_decl_label6(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0, 5,6,3,8,11,14)
MR_decl_label6(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0, 5,6,3,8,11,14)
MR_decl_label6(ml_backend__add_trail_ops__gen_store_ticket_4_0, 5,6,3,8,11,14)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 220,3,8,9,10,12,13,16)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 172,18,20,21,22,23,24,33)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 34,35,36,37,43,38,39,47)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 48,49,52,51,57,58,50,64)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 65,78,79,80,81,82,83,86)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 85,91,92,93,98,99,100,101)
MR_decl_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 102,103,104,105,106,107,108,117)
MR_decl_label7(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0, 94,137,141,146,147,149,150)
MR_decl_label3(ml_backend__add_trail_ops__new_ticket_counter_var_3_0, 2,3,5)
MR_decl_label3(ml_backend__add_trail_ops__new_ticket_var_3_0, 2,3,5)
MR_decl_label1(ml_backend__add_trail_ops__trail_generate_call_8_0, 2)
MR_decl_label4(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0, 2,3,4,5)
MR_decl_label5(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0, 4,7,9,11,1)
MR_decl_label7(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0, 3,2,5,10,14,18,46)
MR_decl_static(ml_backend__add_trail_ops__conj_add_trail_ops_4_0)
MR_decl_static(ml_backend__add_trail_ops__trail_generate_call_8_0)
MR_decl_static(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0)
MR_decl_static(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0)
MR_decl_static(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0)
MR_decl_static(ml_backend__add_trail_ops__gen_prune_ticket_3_0)
MR_decl_static(ml_backend__add_trail_ops__gen_discard_ticket_3_0)
MR_decl_static(ml_backend__add_trail_ops__gen_store_ticket_4_0)
MR_decl_static(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0)
MR_decl_static(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0)
MR_decl_static(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0)
MR_decl_static(ml_backend__add_trail_ops__new_ticket_var_3_0)
MR_decl_static(ml_backend__add_trail_ops__new_ticket_counter_var_3_0)
MR_decl_static(fn__ml_backend__add_trail_ops__this_file_0_0)
MR_decl_static(ml_backend__add_trail_ops__goal_add_trail_ops_4_0)
MR_decl_static(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0)
MR_decl_static(ml_backend__add_trail_ops__disj_add_trail_ops_7_0)
MR_decl_static(ml_backend__add_trail_ops__cases_add_trail_ops_4_0)
MR_def_extern_entry(ml_backend__add_trail_ops__add_trail_ops_5_0)
MR_decl_static(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0)
MR_decl_static(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__add_trail_ops__conj_add_trail_ops_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__add_trail_ops__conj_add_trail_ops_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(ml_backend__add_trail_ops, trail_ops_info),
MR_CTOR0_ADDR(ml_backend__add_trail_ops, trail_ops_info)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ml_backend__add_trail_ops__goal_add_trail_ops_4_0),
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
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

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

const MR_PseudoTypeInfo mercury_data_ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[] = {
	"trail_varset",
	"trail_var_types",
	"trail_module_info",
	"opt_trail_usage",
	"inline_ops"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0 = {
	"trail_ops_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__add_trail_ops__field_types_trail_ops_info_0_0,
	mercury_data_ml_backend__add_trail_ops__field_names_trail_ops_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[] = {
	&mercury_data_ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0[] = {
	&mercury_data_ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0
};

const MR_Integer mercury_data_ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0)),
	"ml_backend.add_trail_ops",
	"trail_ops_info",
	{ (void *)mercury_data_ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0 },
	{ (void *)mercury_data_ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0 },
	1,
	4,
	mercury_data_ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__add_trail_ops__conj_add_trail_ops_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.add_trail_ops",
"ml_backend.add_trail_ops",
"goal_add_trail_ops",
4,
0
},
"ml_backend.add_trail_ops",
"add_trail_ops.m",
375,
"d1;c5;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module0)
	MR_init_entry1(ml_backend__add_trail_ops__conj_add_trail_ops_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'conj_add_trail_ops'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__conj_add_trail_ops_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__add_trail_ops, trail_ops_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module1)
	MR_init_entry1(ml_backend__add_trail_ops__trail_generate_call_8_0);
	MR_init_label1(ml_backend__add_trail_ops__trail_generate_call_8_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'trail_generate_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__trail_generate_call_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__trail_generate_call_8_0_i2);
MR_def_label(ml_backend__add_trail_ops__trail_generate_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(hlds__goal_util__generate_foreign_proc_16_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module2)
	MR_init_entry1(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	MR_init_label4(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0,2,3,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'trail_generate_foreign_proc'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0_i2);
MR_def_label(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0_i3);
MR_def_label(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0_i4);
MR_def_label(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0_i5);
MR_def_label(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(7);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_sv(3);
	MR_r14 = MR_sv(4);
	MR_r15 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__goal_util__generate_foreign_proc_16_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module3)
	MR_init_entry1(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0);
	MR_init_label6(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,5,6,3,8,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_reset_ticket_undo'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("reset_ticket_undo", 17);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0_i8);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("Ticket", 6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0_i11);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0_i14);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("reset_ticket_undo", 17);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_string_const("MR_reset_ticket(Ticket, MR_undo);", 33);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module4)
	MR_init_entry1(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0);
	MR_init_label6(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,5,6,3,8,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_reset_ticket_commit'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("reset_ticket_commit", 19);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0_i8);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("Ticket", 6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0_i11);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0_i14);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("reset_ticket_commit", 19);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_string_const("MR_reset_ticket(Ticket, MR_commit);", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module5)
	MR_init_entry1(ml_backend__add_trail_ops__gen_prune_ticket_3_0);
	MR_init_label4(ml_backend__add_trail_ops__gen_prune_ticket_3_0,4,5,3,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_prune_ticket'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_prune_ticket_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_prune_ticket_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_prune_ticket_3_0_i4);
MR_def_label(ml_backend__add_trail_ops__gen_prune_ticket_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_prune_ticket_3_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_prune_ticket_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("prune_ticket", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_prune_ticket_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_prune_ticket_3_0_i7);
MR_def_label(ml_backend__add_trail_ops__gen_prune_ticket_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("prune_ticket", 12);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(2), 2);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_string_const("MR_prune_ticket();", 18);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module6)
	MR_init_entry1(ml_backend__add_trail_ops__gen_discard_ticket_3_0);
	MR_init_label4(ml_backend__add_trail_ops__gen_discard_ticket_3_0,4,5,3,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_discard_ticket'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_discard_ticket_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_discard_ticket_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_discard_ticket_3_0_i4);
MR_def_label(ml_backend__add_trail_ops__gen_discard_ticket_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_discard_ticket_3_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_discard_ticket_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("discard_ticket", 14);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_discard_ticket_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_discard_ticket_3_0_i7);
MR_def_label(ml_backend__add_trail_ops__gen_discard_ticket_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("discard_ticket", 14);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(2), 2);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_string_const("MR_discard_ticket();", 20);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module7)
	MR_init_entry1(ml_backend__add_trail_ops__gen_store_ticket_4_0);
	MR_init_label6(ml_backend__add_trail_ops__gen_store_ticket_4_0,5,6,3,8,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_store_ticket'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_store_ticket_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_store_ticket_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		ml_backend__add_trail_ops__gen_store_ticket_4_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_store_ticket_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_store_ticket_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__gen_store_ticket_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("store_ticket", 12);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_store_ticket_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		ml_backend__add_trail_ops__gen_store_ticket_4_0_i8);
MR_def_label(ml_backend__add_trail_ops__gen_store_ticket_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("Ticket", 6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__gen_store_ticket_4_0_i11);
MR_def_label(ml_backend__add_trail_ops__gen_store_ticket_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		ml_backend__add_trail_ops__gen_store_ticket_4_0_i14);
MR_def_label(ml_backend__add_trail_ops__gen_store_ticket_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("store_ticket", 12);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_string_const("MR_store_ticket(Ticket);", 24);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module8)
	MR_init_entry1(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0);
	MR_init_label6(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,5,6,3,8,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_reset_ticket_solve'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("reset_ticket_solve", 18);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0_i8);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("Ticket", 6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0_i11);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0_i14);
MR_def_label(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("reset_ticket_solve", 18);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_string_const("MR_reset_ticket(Ticket, MR_solve);", 34);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module9)
	MR_init_entry1(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0);
	MR_init_label6(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,5,6,3,8,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_mark_ticket_stack'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mark_ticket_stack", 17);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0_i8);
MR_def_label(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("TicketCounter", 13);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0_i11);
MR_def_label(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0_i14);
MR_def_label(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mark_ticket_stack", 17);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_string_const("MR_mark_ticket_stack(TicketCounter);", 36);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module10)
	MR_init_entry1(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0);
	MR_init_label6(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,5,6,3,8,11,14)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_prune_tickets_to'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_prune_tickets_to_4_0_i5);
MR_def_label(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__gen_prune_tickets_to_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("prune_tickets_to", 16);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(1);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
MR_def_label(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		ml_backend__add_trail_ops__gen_prune_tickets_to_4_0_i8);
MR_def_label(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_string_const("TicketCounter", 13);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__gen_prune_tickets_to_4_0_i11);
MR_def_label(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__gen_prune_tickets_to_4_0_i14);
MR_def_label(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("prune_tickets_to", 16);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(3), 2);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Word) MR_string_const("MR_prune_tickets_to(TicketCounter);", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module11)
	MR_init_entry1(ml_backend__add_trail_ops__new_ticket_var_3_0);
	MR_init_label3(ml_backend__add_trail_ops__new_ticket_var_3_0,2,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'new_ticket_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__new_ticket_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__new_ticket_var_3_0_i2);
MR_def_label(ml_backend__add_trail_ops__new_ticket_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const("TrailTicket", 11);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		ml_backend__add_trail_ops__new_ticket_var_3_0_i3);
MR_def_label(ml_backend__add_trail_ops__new_ticket_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__add_trail_ops__new_ticket_var_3_0_i5);
MR_def_label(ml_backend__add_trail_ops__new_ticket_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module12)
	MR_init_entry1(ml_backend__add_trail_ops__new_ticket_counter_var_3_0);
	MR_init_label3(ml_backend__add_trail_ops__new_ticket_counter_var_3_0,2,3,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'new_ticket_counter_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__new_ticket_counter_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__add_trail_ops__new_ticket_counter_var_3_0_i2);
MR_def_label(ml_backend__add_trail_ops__new_ticket_counter_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const("SavedTicketCounter", 18);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		ml_backend__add_trail_ops__new_ticket_counter_var_3_0_i3);
MR_def_label(ml_backend__add_trail_ops__new_ticket_counter_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__add_trail_ops__new_ticket_counter_var_3_0_i5);
MR_def_label(ml_backend__add_trail_ops__new_ticket_counter_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module13)
	MR_init_entry1(fn__ml_backend__add_trail_ops__this_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__add_trail_ops__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("add_trail_ops.m", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module14)
	MR_init_entry1(ml_backend__add_trail_ops__goal_add_trail_ops_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goal_add_trail_ops'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__goal_add_trail_ops_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(fn__hlds__goal_form__goal_cannot_modify_trail_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_with_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__fail_goal_with_context_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module15)
	MR_init_entry1(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0);
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,220,3,8,9,10,12,13,16)
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,172,18,20,21,22,23,24,33)
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,34,35,36,37,43,38,39,47)
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,48,49,52,51,57,58,50,64)
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,65,78,79,80,81,82,83,86)
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,85,91,92,93,98,99,100,101)
	MR_init_label8(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,102,103,104,105,106,107,108,117)
	MR_init_label7(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,94,137,141,146,147,149,150)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_add_trail_ops'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),3)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i172);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i149) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i91) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i33) MR_AND
		MR_LABEL_AP(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i146));
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 7);
	MR_tempr2 = MR_tag(MR_tempr1);
	if (((MR_tempr2 == MR_mktag((MR_Integer) 0)) || (MR_tempr2 == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i172);
	}
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_tempr3;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i8);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i9);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("trailed_nondet_pragma_foreign_code", 34);
	MR_r2 = (MR_Integer) 6;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__trail_generate_call_8_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i10);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(13);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__add_trail_ops__conj_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i13);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i18);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i20);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i21);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__new_ticket_var_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i22);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_store_ticket_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i23);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i24);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i34);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i35);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i36);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_sv(3), 1);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i37);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i39);
	}
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i39);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__goal_form__goal_cannot_modify_trail_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i43);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__new_ticket_var_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i47);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i48);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_store_ticket_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i49);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i51);
	}
	MR_sv(6) = MR_ctfield(0, MR_sv(4), 1);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_solve_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i52);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i50);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_sv(4), 1);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i57);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_prune_ticket_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i58);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r1 = MR_sv(10);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i64);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_discard_ticket_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i65);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr6;
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i79);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i80);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i81);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i82);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i83);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i85);
	}
	MR_sv(3) = MR_ctfield(0, MR_sv(6), 2);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i86);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unused", 6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__trail_generate_call_8_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i85);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i220);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(4), 1);
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i92);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i93);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i94);
	}
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i94);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i98);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__new_ticket_counter_var_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i99);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__add_trail_ops__new_ticket_var_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i100);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_mark_ticket_stack_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i101);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_store_ticket_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i102);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i103);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i104);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_prune_tickets_to_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i105);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i106);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_discard_ticket_3_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i107);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i108);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr10 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr10;
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i117);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr11 = MR_r1;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr11;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr7, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 1) = MR_ctfield(0, MR_tempr11, 1);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr8, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr8, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr8, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr9, 1) = MR_tempr10;
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i137);
	}
	MR_r2 = MR_ctfield(3, MR_sv(3), 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i137);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i141);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__add_trail_ops__this_file_0_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i147);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr_add_trail_ops: unexpected shorthand", 45);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__cases_add_trail_ops_4_0,
		ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0_i150);
MR_def_label(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module16)
	MR_init_entry1(ml_backend__add_trail_ops__disj_add_trail_ops_7_0);
	MR_init_label8(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,59,4,6,7,13,14,12,17)
	MR_init_label8(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,18,20,10,21,23,25,26,30)
	MR_init_label3(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,31,32,33)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'disj_add_trail_ops'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__disj_add_trail_ops_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i59);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i4);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i6);
	}
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i21);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_undo_4_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i7);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i10);
	}
	MR_tempr2 = MR_ctfield(0, MR_sv(4), 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i12);
	}
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i13);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_ctfield(0, MR_sv(4), 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i14);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("discard_ticket", 14);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i18);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i17);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("discard_ticket", 14);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_sv(4), 2);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_string_const("MR_discard_ticket();", 20);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__trail_generate_foreign_proc_8_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i18);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i20);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i21);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_sv(4) = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_add_trail_ops_4_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i21);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i30);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_reset_ticket_commit_4_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i25);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__gen_prune_ticket_3_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i26);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i30);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i31);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i32);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_localcall_lab(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,
		ml_backend__add_trail_ops__disj_add_trail_ops_7_0_i33);
MR_def_label(ml_backend__add_trail_ops__disj_add_trail_ops_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_trail_ops_module17)
	MR_init_entry1(ml_backend__add_trail_ops__cases_add_trail_ops_4_0);
	MR_init_label3(ml_backend__add_trail_ops__cases_add_trail_ops_4_0,15,4,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'cases_add_trail_ops'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_trail_ops__cases_add_trail_ops_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__add_trail_ops__cases_add_trail_ops_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__add_trail_ops__cases_add_trail_ops_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,
		ml_backend__add_trail_ops__cases_add_trail_ops_4_0_i4);
MR_def_label(ml_backend__add_trail_ops__cases_add_trail_ops_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__add_trail_ops__cases_add_trail_ops_4_0,
		ml_backend__add_trail_ops__cases_add_trail_ops_4_0_i6);
MR_def_label(ml_backend__add_trail_ops__cases_add_trail_ops_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module18)
	MR_init_entry1(ml_backend__add_trail_ops__add_trail_ops_5_0);
	MR_init_label7(ml_backend__add_trail_ops__add_trail_ops_5_0,2,3,4,6,7,8,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'add_trail_ops'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__add_trail_ops__add_trail_ops_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i2);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i3);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i4);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i6);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i7);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i8);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		ml_backend__add_trail_ops__add_trail_ops_5_0_i9);
MR_def_label(ml_backend__add_trail_ops__add_trail_ops_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__quantification__requantify_proc_general_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module19)
	MR_init_entry1(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0);
	MR_init_label5(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0,4,7,9,11,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i11);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i4);
MR_def_label(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i7);
MR_def_label(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i9);
MR_def_label(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__add_trail_ops__trail_ops_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__add_trail_ops_module20)
	MR_init_entry1(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0);
	MR_init_label7(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,3,2,5,10,14,18,46)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i2);
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i5);
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i46);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i10);
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i46);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i14);
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i46);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i18);
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0_i46);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__add_trail_ops__trail_ops_info_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__add_trail_ops_maybe_bunch_0(void)
{
	ml_backend__add_trail_ops_module0();
	ml_backend__add_trail_ops_module1();
	ml_backend__add_trail_ops_module2();
	ml_backend__add_trail_ops_module3();
	ml_backend__add_trail_ops_module4();
	ml_backend__add_trail_ops_module5();
	ml_backend__add_trail_ops_module6();
	ml_backend__add_trail_ops_module7();
	ml_backend__add_trail_ops_module8();
	ml_backend__add_trail_ops_module9();
	ml_backend__add_trail_ops_module10();
	ml_backend__add_trail_ops_module11();
	ml_backend__add_trail_ops_module12();
	ml_backend__add_trail_ops_module13();
	ml_backend__add_trail_ops_module14();
	ml_backend__add_trail_ops_module15();
	ml_backend__add_trail_ops_module16();
	ml_backend__add_trail_ops_module17();
	ml_backend__add_trail_ops_module18();
	ml_backend__add_trail_ops_module19();
	ml_backend__add_trail_ops_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__add_trail_ops__init(void);
void mercury__ml_backend__add_trail_ops__init_type_tables(void);
void mercury__ml_backend__add_trail_ops__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__add_trail_ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__add_trail_ops__init_complexity_procs(void);
#endif

void mercury__ml_backend__add_trail_ops__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__add_trail_ops_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0,
		ml_backend__add_trail_ops__trail_ops_info_0_0);
	mercury__ml_backend__add_trail_ops__init_debugger();
}

void mercury__ml_backend__add_trail_ops__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0);
	}
}


void mercury__ml_backend__add_trail_ops__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__add_trail_ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__add_trail_ops);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__add_trail_ops__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
