/*
** Automatically generated from `add_heap_ops.m'
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
INIT mercury__ml_backend__add_heap_ops__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.add_heap_ops.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.add_heap_ops.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.add_heap_ops.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ml_backend.add_heap_ops.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.add_heap_ops.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ml_backend.add_heap_ops.c"
#line 49 "ml_backend.add_heap_ops.c"
#include "ml_backend.add_heap_ops.mh"

#line 52 "ml_backend.add_heap_ops.c"
#line 53 "ml_backend.add_heap_ops.c"
#ifndef ML_BACKEND__ADD_HEAP_OPS_DECL_GUARD
#define ML_BACKEND__ADD_HEAP_OPS_DECL_GUARD

#line 57 "ml_backend.add_heap_ops.c"
#line 58 "ml_backend.add_heap_ops.c"

#endif
#line 61 "ml_backend.add_heap_ops.c"

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
	mercury_data_ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0;
MR_decl_label7(ml_backend__add_heap_ops__add_heap_ops_3_0, 2,3,4,6,7,8,9)
MR_decl_label3(ml_backend__add_heap_ops__cases_add_heap_ops_4_0, 18,4,6)
MR_decl_label10(ml_backend__add_heap_ops__disj_add_heap_ops_7_0, 80,4,5,9,6,13,17,20,21,23)
MR_decl_label4(ml_backend__add_heap_ops__disj_add_heap_ops_7_0, 31,14,15,36)
MR_decl_label3(ml_backend__add_heap_ops__gen_mark_hp_5_0, 3,4,5)
MR_decl_label3(ml_backend__add_heap_ops__gen_restore_hp_5_0, 3,4,5)
MR_decl_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0, 189,3,6,5,11,13,14,18,20,22)
MR_decl_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0, 23,25,32,16,36,9,40,43,44,45)
MR_decl_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0, 48,50,51,52,53,64,46,42,72,73)
MR_decl_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0, 74,75,76,79,80,78,71,85,89,84)
MR_decl_label2(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0, 94,93)
MR_decl_label1(ml_backend__add_heap_ops__heap_generate_call_8_0, 2)
MR_decl_label3(ml_backend__add_heap_ops__new_saved_hp_var_3_0, 2,3,5)
MR_decl_label4(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0, 4,7,11,1)
MR_decl_label5(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0, 3,2,5,10,39)
MR_decl_static(ml_backend__add_heap_ops__conj_add_heap_ops_4_0)
MR_decl_static(ml_backend__add_heap_ops__heap_generate_call_8_0)
MR_decl_static(ml_backend__add_heap_ops__gen_mark_hp_5_0)
MR_decl_static(ml_backend__add_heap_ops__gen_restore_hp_5_0)
MR_decl_static(ml_backend__add_heap_ops__new_saved_hp_var_3_0)
MR_decl_static(ml_backend__add_heap_ops__goal_add_heap_ops_4_0)
MR_decl_static(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0)
MR_decl_static(ml_backend__add_heap_ops__disj_add_heap_ops_7_0)
MR_decl_static(ml_backend__add_heap_ops__cases_add_heap_ops_4_0)
MR_def_extern_entry(ml_backend__add_heap_ops__add_heap_ops_3_0)
MR_decl_static(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0)
MR_decl_static(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__add_heap_ops__conj_add_heap_ops_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__add_heap_ops__conj_add_heap_ops_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(ml_backend__add_heap_ops, heap_ops_info),
MR_CTOR0_ADDR(ml_backend__add_heap_ops, heap_ops_info)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ml_backend__add_heap_ops__goal_add_heap_ops_4_0),
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
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__add_heap_ops__field_types_heap_ops_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0
};

const MR_ConstString mercury_data_ml_backend__add_heap_ops__field_names_heap_ops_info_0_0[] = {
	"heap_varset",
	"heap_var_types",
	"heap_module_info"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0 = {
	"heap_ops_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__add_heap_ops__field_types_heap_ops_info_0_0,
	mercury_data_ml_backend__add_heap_ops__field_names_heap_ops_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0[] = {
	&mercury_data_ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__add_heap_ops__du_stag_ordered_heap_ops_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0[] = {
	&mercury_data_ml_backend__add_heap_ops__du_functor_desc_heap_ops_info_0_0
};

const MR_Integer mercury_data_ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0)),
	"ml_backend.add_heap_ops",
	"heap_ops_info",
	{ (void *)mercury_data_ml_backend__add_heap_ops__du_name_ordered_heap_ops_info_0 },
	{ (void *)mercury_data_ml_backend__add_heap_ops__du_ptag_ordered_heap_ops_info_0 },
	1,
	4,
	mercury_data_ml_backend__add_heap_ops__functor_number_map_heap_ops_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__add_heap_ops__conj_add_heap_ops_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.add_heap_ops",
"ml_backend.add_heap_ops",
"goal_add_heap_ops",
4,
0
},
"ml_backend.add_heap_ops",
"add_heap_ops.m",
248,
"6"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module0)
	MR_init_entry1(ml_backend__add_heap_ops__conj_add_heap_ops_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__conj_add_heap_ops_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_add_heap_ops'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__conj_add_heap_ops_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__add_heap_ops, heap_ops_info);
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

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module1)
	MR_init_entry1(ml_backend__add_heap_ops__heap_generate_call_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__heap_generate_call_8_0);
	MR_init_label1(ml_backend__add_heap_ops__heap_generate_call_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'heap_generate_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__heap_generate_call_8_0)
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
		ml_backend__add_heap_ops__heap_generate_call_8_0_i2);
MR_def_label(ml_backend__add_heap_ops__heap_generate_call_8_0,2)
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

MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module2)
	MR_init_entry1(ml_backend__add_heap_ops__gen_mark_hp_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__gen_mark_hp_5_0);
	MR_init_label3(ml_backend__add_heap_ops__gen_mark_hp_5_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_mark_hp'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__gen_mark_hp_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		ml_backend__add_heap_ops__gen_mark_hp_5_0_i3);
MR_def_label(ml_backend__add_heap_ops__gen_mark_hp_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_heap_ops__gen_mark_hp_5_0_i4);
MR_def_label(ml_backend__add_heap_ops__gen_mark_hp_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mark_hp", 7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		ml_backend__add_heap_ops__gen_mark_hp_5_0_i5);
MR_def_label(ml_backend__add_heap_ops__gen_mark_hp_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module3)
	MR_init_entry1(ml_backend__add_heap_ops__gen_restore_hp_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__gen_restore_hp_5_0);
	MR_init_label3(ml_backend__add_heap_ops__gen_restore_hp_5_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_restore_hp'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__gen_restore_hp_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_heap_ops__gen_restore_hp_5_0_i3);
MR_def_label(ml_backend__add_heap_ops__gen_restore_hp_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__add_heap_ops__gen_restore_hp_5_0_i4);
MR_def_label(ml_backend__add_heap_ops__gen_restore_hp_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("restore_hp", 10);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 2;
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		ml_backend__add_heap_ops__gen_restore_hp_5_0_i5);
MR_def_label(ml_backend__add_heap_ops__gen_restore_hp_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0);
MR_decl_entry(varset__new_named_var_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module4)
	MR_init_entry1(ml_backend__add_heap_ops__new_saved_hp_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__new_saved_hp_var_3_0);
	MR_init_label3(ml_backend__add_heap_ops__new_saved_hp_var_3_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_saved_hp_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__new_saved_hp_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__heap_pointer_type_0_0,
		ml_backend__add_heap_ops__new_saved_hp_var_3_0_i2);
MR_def_label(ml_backend__add_heap_ops__new_saved_hp_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("HeapPointer", 11);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__new_named_var_4_0,
		ml_backend__add_heap_ops__new_saved_hp_var_3_0_i3);
MR_def_label(ml_backend__add_heap_ops__new_saved_hp_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__add_heap_ops__new_saved_hp_var_3_0_i5);
MR_def_label(ml_backend__add_heap_ops__new_saved_hp_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_sv(1), 2);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_heap_ops_module5)
	MR_init_entry1(ml_backend__add_heap_ops__goal_add_heap_ops_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__goal_add_heap_ops_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_add_heap_ops'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__goal_add_heap_ops_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(hlds__goal_form__goal_may_allocate_heap_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_with_context_1_0);
MR_decl_entry(fn__hlds__hlds_goal__fail_goal_with_context_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module6)
	MR_init_entry1(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0);
	MR_init_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,189,3,6,5,11,13,14,18,20,22)
	MR_init_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,23,25,32,16,36,9,40,43,44,45)
	MR_init_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,48,50,51,52,53,64,46,42,72,73)
	MR_init_label10(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,74,75,76,79,80,78,71,85,89,84)
	MR_init_label2(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,94,93)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_expr_add_heap_ops'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__add_heap_ops__conj_add_heap_ops_4_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i6);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i9);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i13);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i14);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__new_saved_hp_var_3_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i22);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i20);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__new_saved_hp_var_3_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i22);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__gen_mark_hp_5_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i23);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i25);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i32);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i36);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0)) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i42);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_add_heap_ops_4_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i43);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_add_heap_ops_4_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i44);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_add_heap_ops_4_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i45);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i48);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i46);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__new_saved_hp_var_3_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i50);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i51);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__gen_mark_hp_5_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i52);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__gen_restore_hp_5_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i53);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,53)
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
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr6 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr6;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i64);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i71);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i72);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i73);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i74);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i75);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i76);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i78);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(3), 2);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i79);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unused", 6);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__heap_generate_call_8_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i80);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i189);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i189);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i84);
	}
	MR_r4 = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i85);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i85);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_add_heap_ops_4_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i89);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i93);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__add_heap_ops__cases_add_heap_ops_4_0,
		ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0_i94);
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.add_heap_ops", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.add_heap_ops.goal_expr_add_heap_ops\'/5", 60);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module7)
	MR_init_entry1(ml_backend__add_heap_ops__disj_add_heap_ops_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__disj_add_heap_ops_7_0);
	MR_init_label10(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,80,4,5,9,6,13,17,20,21,23)
	MR_init_label4(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,31,14,15,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_add_heap_ops'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__disj_add_heap_ops_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i80);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i4);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i5);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i6);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__gen_restore_hp_5_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i9);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i13);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(7) = MR_sv(6);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i15);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__goal_form__goal_may_allocate_heap_1_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i17);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i14);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__add_heap_ops__new_saved_hp_var_3_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i20);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__gen_mark_hp_5_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i21);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i23);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr5 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i31);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_np_localcall_lab(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,
		ml_backend__add_heap_ops__disj_add_heap_ops_7_0_i36);
MR_def_label(ml_backend__add_heap_ops__disj_add_heap_ops_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__add_heap_ops_module8)
	MR_init_entry1(ml_backend__add_heap_ops__cases_add_heap_ops_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__cases_add_heap_ops_4_0);
	MR_init_label3(ml_backend__add_heap_ops__cases_add_heap_ops_4_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_add_heap_ops'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__add_heap_ops__cases_add_heap_ops_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__add_heap_ops__cases_add_heap_ops_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__add_heap_ops__cases_add_heap_ops_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,
		ml_backend__add_heap_ops__cases_add_heap_ops_4_0_i4);
MR_def_label(ml_backend__add_heap_ops__cases_add_heap_ops_4_0,4)
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
	MR_np_localcall_lab(ml_backend__add_heap_ops__cases_add_heap_ops_4_0,
		ml_backend__add_heap_ops__cases_add_heap_ops_4_0_i6);
MR_def_label(ml_backend__add_heap_ops__cases_add_heap_ops_4_0,6)
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

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module9)
	MR_init_entry1(ml_backend__add_heap_ops__add_heap_ops_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__add_heap_ops__add_heap_ops_3_0);
	MR_init_label7(ml_backend__add_heap_ops__add_heap_ops_3_0,2,3,4,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_heap_ops'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__add_heap_ops__add_heap_ops_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i2);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i3);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i4);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ml_backend__add_heap_ops__goal_expr_add_heap_ops_5_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i6);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i7);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i8);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		ml_backend__add_heap_ops__add_heap_ops_3_0_i9);
MR_def_label(ml_backend__add_heap_ops__add_heap_ops_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
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

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module10)
	MR_init_entry1(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__add_heap_ops__heap_ops_info_0_0);
	MR_init_label4(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0,4,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0_i11);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0_i4);
MR_def_label(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0_i7);
MR_def_label(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_module__module_info_0_0);
MR_def_label(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__add_heap_ops__heap_ops_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(ml_backend__add_heap_ops_module11)
	MR_init_entry1(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__add_heap_ops__heap_ops_info_0_0);
	MR_init_label5(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0,3,2,5,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0_i2);
MR_def_label(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0_i5);
MR_def_label(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0_i10);
MR_def_label(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0_i39);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_module__module_info_0_0);
MR_def_label(__Compare___ml_backend__add_heap_ops__heap_ops_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__add_heap_ops_maybe_bunch_0(void)
{
	ml_backend__add_heap_ops_module0();
	ml_backend__add_heap_ops_module1();
	ml_backend__add_heap_ops_module2();
	ml_backend__add_heap_ops_module3();
	ml_backend__add_heap_ops_module4();
	ml_backend__add_heap_ops_module5();
	ml_backend__add_heap_ops_module6();
	ml_backend__add_heap_ops_module7();
	ml_backend__add_heap_ops_module8();
	ml_backend__add_heap_ops_module9();
	ml_backend__add_heap_ops_module10();
	ml_backend__add_heap_ops_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__add_heap_ops__init(void);
void mercury__ml_backend__add_heap_ops__init_type_tables(void);
void mercury__ml_backend__add_heap_ops__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__add_heap_ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__add_heap_ops__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__add_heap_ops__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__add_heap_ops__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__add_heap_ops_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0,
		ml_backend__add_heap_ops__heap_ops_info_0_0);
	mercury__ml_backend__add_heap_ops__init_debugger();
}

void mercury__ml_backend__add_heap_ops__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__add_heap_ops__type_ctor_info_heap_ops_info_0);
	}
}


void mercury__ml_backend__add_heap_ops__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__add_heap_ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__add_heap_ops);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__add_heap_ops__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__add_heap_ops__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
