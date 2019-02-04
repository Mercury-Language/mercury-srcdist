/*
** Automatically generated from `term_rep.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__term_rep__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 28 "mdb.term_rep.c"
#line 202 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 32 "mdb.term_rep.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdb.term_rep.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 40 "mdb.term_rep.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 44 "mdb.term_rep.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "mdb.term_rep.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "mdb.term_rep.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 56 "mdb.term_rep.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 60 "mdb.term_rep.c"
#line 35 "../library/store.int2"
#include "store.mh"

#line 64 "mdb.term_rep.c"
#line 65 "mdb.term_rep.c"
#include "mdb.term_rep.mh"

#line 68 "mdb.term_rep.c"
#line 69 "mdb.term_rep.c"
#ifndef MDB__TERM_REP_DECL_GUARD
#define MDB__TERM_REP_DECL_GUARD

#line 73 "mdb.term_rep.c"
#line 74 "mdb.term_rep.c"

#endif
#line 77 "mdb.term_rep.c"

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

struct mercury_type_2 {
	MR_String f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;
MR_decl_label8(mdb__term_rep__argument_3_0, 3,4,5,7,8,9,6,1)
MR_decl_label4(mdb__term_rep__deref_path_3_0, 18,3,4,1)
MR_decl_label10(mdb__term_rep__field_pos_3_0, 3,4,5,6,8,10,14,19,16,13)
MR_decl_label3(mdb__term_rep__field_pos_3_0, 7,30,1)
MR_decl_label4(mdb__term_rep__find_functor_6_0, 35,4,3,2)
MR_decl_label1(mdb__term_rep__univ_to_rep_2_0, 2)
MR_decl_label3(__Unify___mdb__term_rep__term_rep_0_0, 5,6,1)
MR_decl_label2(__Compare___mdb__term_rep__term_rep_0_0, 3,2)
MR_def_extern_entry(mdb__term_rep__univ_to_rep_2_0)
MR_def_extern_entry(mdb__term_rep__rep_to_univ_2_0)
MR_def_extern_entry(mdb__term_rep__argument_3_0)
MR_def_extern_entry(mdb__term_rep__deref_path_3_0)
MR_decl_static(mdb__term_rep__find_functor_6_0)
MR_def_extern_entry(mdb__term_rep__field_pos_3_0)
MR_decl_static(mdb__term_rep__comp_rep_2_3_0)
MR_def_extern_entry(__Unify___mdb__term_rep__term_rep_0_0)
MR_def_extern_entry(__Compare___mdb__term_rep__term_rep_0_0)
MR_decl_static(mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__mdb__term_rep__rep_to_univ_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__term_rep__argument_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__term_rep__field_pos_3_0_1;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__term_rep__rep_to_univ_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(univ, univ)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__term_rep__argument_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(univ, univ)
},
{
(MR_Word *) &mercury_data__closure_layout__mdb__term_rep__field_pos_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(univ, univ)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_STRING_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_string_const("field_pos", 9),
MR_string_const("get_functor_with_names couldn\'t find functor", 44)
}
},
{
{
MR_string_const("field_pos", 9),
MR_string_const("find_functor couldn\'t find functor", 34)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout____Unify___mdb__term_rep__term_rep_0_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout____Compare___mdb__term_rep__term_rep_0_0_1;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout____Unify___mdb__term_rep__term_rep_0_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout____Compare___mdb__term_rep__term_rep_0_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(mdb__term_rep, term_rep),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

const MR_PseudoTypeInfo mercury_data_mdb__term_rep__field_types_term_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_mdb__term_rep__du_functor_desc_term_rep_0_0 = {
	"term_rep",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__term_rep__field_types_term_rep_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__term_rep__du_stag_ordered_term_rep_0_0[] = {
	&mercury_data_mdb__term_rep__du_functor_desc_term_rep_0_0

};

const MR_DuPtagLayout mercury_data_mdb__term_rep__du_ptag_ordered_term_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__term_rep__du_stag_ordered_term_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__term_rep__du_name_ordered_term_rep_0[] = {
	&mercury_data_mdb__term_rep__du_functor_desc_term_rep_0_0
};

const MR_Integer mercury_data_mdb__term_rep__functor_number_map_term_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__term_rep__type_ctor_info_term_rep_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU_USEREQ,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__term_rep__term_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__term_rep__term_rep_0_0)),
	"mdb.term_rep",
	"term_rep",
	{ (void *)mercury_data_mdb__term_rep__du_name_ordered_term_rep_0 },
	{ (void *)mercury_data_mdb__term_rep__du_ptag_ordered_term_rep_0 },
	1,
	4,
	mercury_data_mdb__term_rep__functor_number_map_term_rep_0
};


static const MR_UserClosureId
mercury_data__closure_layout____Compare___mdb__term_rep__term_rep_0_0_1 = {
{
MR_PREDICATE,
"mdb.term_rep",
"mdb.term_rep",
"comp_rep_2",
3,
0
},
"mdb.term_rep",
"term_rep.m",
91,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout____Unify___mdb__term_rep__term_rep_0_0_1 = {
{
MR_PREDICATE,
"mdb.term_rep",
"mdb.term_rep",
"comp_rep_2",
3,
0
},
"mdb.term_rep",
"term_rep.m",
79,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__term_rep__field_pos_3_0_1 = {
{
MR_PREDICATE,
"mdb.term_rep",
"mdb.term_rep",
"lambda_term_rep_m_97",
2,
0
},
"mdb.term_rep",
"term_rep.m",
96,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__term_rep__argument_3_0_1 = {
{
MR_PREDICATE,
"mdb.term_rep",
"mdb.term_rep",
"lambda_term_rep_m_97",
2,
0
},
"mdb.term_rep",
"term_rep.m",
96,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__term_rep__rep_to_univ_2_0_1 = {
{
MR_PREDICATE,
"mdb.term_rep",
"mdb.term_rep",
"lambda_term_rep_m_97",
2,
0
},
"mdb.term_rep",
"term_rep.m",
96,
"5"
};


MR_decl_entry(builtin__cc_multi_equal_2_1);

MR_BEGIN_MODULE(mdb__term_rep_module0)
	MR_init_entry1(mdb__term_rep__univ_to_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__univ_to_rep_2_0);
	MR_init_label1(mdb__term_rep__univ_to_rep_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__term_rep__univ_to_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__cc_multi_equal_2_1,
		mdb__term_rep__univ_to_rep_2_0_i2);
MR_def_label(mdb__term_rep__univ_to_rep_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__builtin__promise_only_solution_1_0);

MR_BEGIN_MODULE(mdb__term_rep_module1)
	MR_init_entry1(mdb__term_rep__rep_to_univ_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__rep_to_univ_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rep_to_univ'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__term_rep__rep_to_univ_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_np_tailcall_ent(fn__builtin__promise_only_solution_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_value_1_0);
MR_decl_entry(deconstruct__arg_cc_3_0);
MR_decl_entry(fn__univ__univ_1_0);

MR_BEGIN_MODULE(mdb__term_rep_module2)
	MR_init_entry1(mdb__term_rep__argument_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__argument_3_0);
	MR_init_label8(mdb__term_rep__argument_3_0,3,4,5,7,8,9,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'argument'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__term_rep__argument_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__builtin__promise_only_solution_1_0,
		mdb__term_rep__argument_3_0_i3);
MR_def_label(mdb__term_rep__argument_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__term_rep__argument_3_0_i4);
MR_def_label(mdb__term_rep__argument_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(deconstruct__arg_cc_3_0,
		mdb__term_rep__argument_3_0_i5);
MR_def_label(mdb__term_rep__argument_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__term_rep__argument_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdb__term_rep__argument_3_0_i6);
MR_def_label(mdb__term_rep__argument_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		mdb__term_rep__argument_3_0_i8);
MR_def_label(mdb__term_rep__argument_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__cc_multi_equal_2_1,
		mdb__term_rep__argument_3_0_i9);
MR_def_label(mdb__term_rep__argument_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(mdb__term_rep__argument_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__term_rep__argument_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__term_rep__argument_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__term_rep_module3)
	MR_init_entry1(mdb__term_rep__deref_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__deref_path_3_0);
	MR_init_label4(mdb__term_rep__deref_path_3_0,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'deref_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__term_rep__deref_path_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdb__term_rep__deref_path_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__term_rep__deref_path_3_0_i3);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__term_rep__deref_path_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mdb__term_rep__argument_3_0,
		mdb__term_rep__deref_path_3_0_i4);
MR_def_label(mdb__term_rep__deref_path_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__term_rep__deref_path_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(mdb__term_rep__deref_path_3_0_i18);
MR_def_label(mdb__term_rep__deref_path_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(construct__get_functor_5_0);

MR_BEGIN_MODULE(mdb__term_rep_module4)
	MR_init_entry1(mdb__term_rep__find_functor_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__find_functor_6_0);
	MR_init_label4(mdb__term_rep__find_functor_6_0,35,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_functor'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__term_rep__find_functor_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdb__term_rep__find_functor_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(mdb__term_rep__find_functor_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(construct__get_functor_5_0,
		mdb__term_rep__find_functor_6_0_i4);
MR_def_label(mdb__term_rep__find_functor_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__term_rep__find_functor_6_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(mdb__term_rep__find_functor_6_0_i3);
	}
	if ((MR_sv(5) != MR_r3)) {
		MR_GOTO_LAB(mdb__term_rep__find_functor_6_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(mdb__term_rep__find_functor_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdb__term_rep__find_functor_6_0_i35);
MR_def_label(mdb__term_rep__find_functor_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_2);
MR_decl_entry(fn__type_desc__type_of_1_0);
MR_decl_entry(fn__construct__num_functors_1_0);
MR_decl_entry(construct__get_functor_with_names_6_0);
MR_decl_entry(list__nth_member_search_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(mdb__term_rep_module5)
	MR_init_entry1(mdb__term_rep__field_pos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__field_pos_3_0);
	MR_init_label10(mdb__term_rep__field_pos_3_0,3,4,5,6,8,10,14,19,16,13)
	MR_init_label3(mdb__term_rep__field_pos_3_0,7,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'field_pos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__term_rep__field_pos_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__builtin__promise_only_solution_1_0,
		mdb__term_rep__field_pos_3_0_i3);
MR_def_label(mdb__term_rep__field_pos_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__term_rep__field_pos_3_0_i4);
MR_def_label(mdb__term_rep__field_pos_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__term_rep__field_pos_3_0_i5);
MR_def_label(mdb__term_rep__field_pos_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__term_rep__field_pos_3_0_i6);
MR_def_label(mdb__term_rep__field_pos_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__construct__num_functors_1_0,
		mdb__term_rep__field_pos_3_0_i8);
MR_def_label(mdb__term_rep__field_pos_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(mdb__term_rep__find_functor_6_0,
		mdb__term_rep__field_pos_3_0_i10);
MR_def_label(mdb__term_rep__field_pos_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_tfield(1, MR_tempr1, 0) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(construct__get_functor_with_names_6_0,
		mdb__term_rep__field_pos_3_0_i14);
MR_def_label(mdb__term_rep__field_pos_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i13);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(list__nth_member_search_3_0,
		mdb__term_rep__field_pos_3_0_i19);
MR_def_label(mdb__term_rep__field_pos_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i30);
	}
MR_def_label(mdb__term_rep__field_pos_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i30);
MR_def_label(mdb__term_rep__field_pos_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__term_rep__field_pos_3_0_i30);
MR_def_label(mdb__term_rep__field_pos_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__declarative_debugger, diagnoser_exception);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(exception__throw_1_0,
		mdb__term_rep__field_pos_3_0_i30);
MR_def_label(mdb__term_rep__field_pos_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__term_rep__field_pos_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__term_rep__field_pos_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_representation_3_0);

MR_BEGIN_MODULE(mdb__term_rep_module6)
	MR_init_entry1(mdb__term_rep__comp_rep_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__comp_rep_2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comp_rep_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__term_rep__comp_rep_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__term_rep, term_rep);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_representation_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
MR_decl_entry(fn__builtin__promise_only_solution_1_1);

MR_BEGIN_MODULE(mdb__term_rep_module7)
	MR_init_entry1(__Unify___mdb__term_rep__term_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__term_rep__term_rep_0_0);
	MR_init_label3(__Unify___mdb__term_rep__term_rep_0_0,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__term_rep__term_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__term_rep__term_rep_0_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdb__term_rep__comp_rep_2_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(builtin, comparison_result);
	MR_np_call_localret_ent(fn__builtin__promise_only_solution_1_1,
		__Unify___mdb__term_rep__term_rep_0_0_i5);
MR_def_label(__Unify___mdb__term_rep__term_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__term_rep__term_rep_0_0_i1);
	}
MR_def_label(__Unify___mdb__term_rep__term_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__term_rep__term_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__term_rep_module8)
	MR_init_entry1(__Compare___mdb__term_rep__term_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__term_rep__term_rep_0_0);
	MR_init_label2(__Compare___mdb__term_rep__term_rep_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__term_rep__term_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__term_rep__term_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__term_rep__term_rep_0_0_i2);
MR_def_label(__Compare___mdb__term_rep__term_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__term_rep__term_rep_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(mdb__term_rep__comp_rep_2_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(builtin, comparison_result);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__builtin__promise_only_solution_1_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__term_rep_module9)
	MR_init_entry1(mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__rep_to_univ__97__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__term_rep__IntroducedFrom__pred__rep_to_univ__97__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__term_rep_maybe_bunch_0(void)
{
	mdb__term_rep_module0();
	mdb__term_rep_module1();
	mdb__term_rep_module2();
	mdb__term_rep_module3();
	mdb__term_rep_module4();
	mdb__term_rep_module5();
	mdb__term_rep_module6();
	mdb__term_rep_module7();
	mdb__term_rep_module8();
	mdb__term_rep_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__term_rep__init(void);
void mercury__mdb__term_rep__init_type_tables(void);
void mercury__mdb__term_rep__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__term_rep__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__term_rep__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__term_rep__init_threadscope_string_table(void);
#endif

void mercury__mdb__term_rep__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__term_rep_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__term_rep__type_ctor_info_term_rep_0,
		mdb__term_rep__term_rep_0_0);
	mercury__mdb__term_rep__init_debugger();
}

void mercury__mdb__term_rep__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__term_rep__type_ctor_info_term_rep_0);
	}
}


void mercury__mdb__term_rep__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__term_rep__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__term_rep);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__term_rep__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__term_rep__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
