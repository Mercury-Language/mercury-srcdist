/*
** Automatically generated from `browser_term.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__browser_term__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.browser_term.c"
#include "mdb.browser_term.mh"

#line 28 "mdb.browser_term.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.browser_term.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdb.browser_term.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 40 "mdb.browser_term.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.browser_term.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.browser_term.c"
#line 49 "mdb.browser_term.c"
#ifndef MDB__BROWSER_TERM_DECL_GUARD
#define MDB__BROWSER_TERM_DECL_GUARD

#line 53 "mdb.browser_term.c"
#line 54 "mdb.browser_term.c"

#endif
#line 57 "mdb.browser_term.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__browser_term__type_ctor_info_browser_term_0;
MR_decl_label1(fn__mdb__browser_term__plain_term_to_browser_term_1_0, 2)
MR_decl_label2(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0, 18,5)
MR_decl_label4(__Unify___mdb__browser_term__browser_term_0_0, 18,5,10,1)
MR_decl_label8(__Compare___mdb__browser_term__browser_term_0_0, 3,2,7,5,10,12,16,54)
MR_def_extern_entry(fn__mdb__browser_term__univ_to_browser_term_1_0)
MR_def_extern_entry(fn__mdb__browser_term__plain_term_to_browser_term_1_0)
MR_def_extern_entry(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0)
MR_def_extern_entry(__Unify___mdb__browser_term__browser_term_0_0)
MR_def_extern_entry(__Compare___mdb__browser_term__browser_term_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_term__field_types_browser_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_term__du_functor_desc_browser_term_0_0 = {
	"plain_term",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_term__field_types_browser_term_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1univ__type_ctor_info_univ_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1univ__type_ctor_info_univ_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__browser_term__field_types_browser_term_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_mdb__browser_term__du_functor_desc_browser_term_0_1 = {
	"synthetic_term",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__browser_term__field_types_browser_term_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_term__du_stag_ordered_browser_term_0_0[] = {
	&mercury_data_mdb__browser_term__du_functor_desc_browser_term_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_term__du_stag_ordered_browser_term_0_1[] = {
	&mercury_data_mdb__browser_term__du_functor_desc_browser_term_0_1

};

const MR_DuPtagLayout mercury_data_mdb__browser_term__du_ptag_ordered_browser_term_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_term__du_stag_ordered_browser_term_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__browser_term__du_stag_ordered_browser_term_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__browser_term__du_name_ordered_browser_term_0[] = {
	&mercury_data_mdb__browser_term__du_functor_desc_browser_term_0_0,
	&mercury_data_mdb__browser_term__du_functor_desc_browser_term_0_1
};

const MR_Integer mercury_data_mdb__browser_term__functor_number_map_browser_term_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__browser_term__type_ctor_info_browser_term_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__browser_term__browser_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__browser_term__browser_term_0_0)),
	"mdb.browser_term",
	"browser_term",
	{ (void *)mercury_data_mdb__browser_term__du_name_ordered_browser_term_0 },
	{ (void *)mercury_data_mdb__browser_term__du_ptag_ordered_browser_term_0 },
	2,
	4,
	mercury_data_mdb__browser_term__functor_number_map_browser_term_0
};




MR_BEGIN_MODULE(mdb__browser_term_module0)
	MR_init_entry1(fn__mdb__browser_term__univ_to_browser_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_term__univ_to_browser_term_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_browser_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_term__univ_to_browser_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_1_0);

MR_BEGIN_MODULE(mdb__browser_term_module1)
	MR_init_entry1(fn__mdb__browser_term__plain_term_to_browser_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_term__plain_term_to_browser_term_1_0);
	MR_init_label1(fn__mdb__browser_term__plain_term_to_browser_term_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'plain_term_to_browser_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_term__plain_term_to_browser_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__mdb__browser_term__plain_term_to_browser_term_1_0_i2);
MR_def_label(fn__mdb__browser_term__plain_term_to_browser_term_1_0,2)
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

MR_decl_entry(list__split_last_det_3_0);

MR_BEGIN_MODULE(mdb__browser_term_module2)
	MR_init_entry1(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);
	MR_init_label2(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0,18,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'synthetic_term_to_browser_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_np_call_localret_ent(list__split_last_det_3_0,
		fn__mdb__browser_term__synthetic_term_to_browser_term_3_0_i5);
MR_def_label(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___univ__univ_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__browser_term_module3)
	MR_init_entry1(__Unify___mdb__browser_term__browser_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__browser_term__browser_term_0_0);
	MR_init_label4(__Unify___mdb__browser_term__browser_term_0_0,18,5,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__browser_term__browser_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__browser_term__browser_term_0_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_term__browser_term_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_term__browser_term_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
	}
MR_def_label(__Unify___mdb__browser_term__browser_term_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__browser_term__browser_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_term__browser_term_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__browser_term__browser_term_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__browser_term__browser_term_0_0_i10);
MR_def_label(__Unify___mdb__browser_term__browser_term_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__browser_term__browser_term_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___mdb__browser_term__browser_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___univ__univ_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(mdb__browser_term_module4)
	MR_init_entry1(__Compare___mdb__browser_term__browser_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__browser_term__browser_term_0_0);
	MR_init_label8(__Compare___mdb__browser_term__browser_term_0_0,3,2,7,5,10,12,16,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__browser_term__browser_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i2);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__browser_term__browser_term_0_0_i12);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__browser_term__browser_term_0_0_i16);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__browser_term__browser_term_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___mdb__browser_term__browser_term_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);

MR_Word
ML_BROWSE_synthetic_term_to_browser_term(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

MR_Word
ML_BROWSE_synthetic_term_to_browser_term(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__browser_term__synthetic_term_to_browser_term_3_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__browser_term__synthetic_term_to_browser_term_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__fn__mdb__browser_term__univ_to_browser_term_1_0);

MR_Word
ML_BROWSE_univ_to_browser_term(MR_Word Mercury__argument1);

MR_Word
ML_BROWSE_univ_to_browser_term(MR_Word Mercury__argument1)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__browser_term__univ_to_browser_term_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__browser_term__univ_to_browser_term_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__fn__mdb__browser_term__plain_term_to_browser_term_1_0);

MR_Word
ML_BROWSE_plain_term_to_browser_term(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

MR_Word
ML_BROWSE_plain_term_to_browser_term(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__browser_term__plain_term_to_browser_term_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__browser_term__plain_term_to_browser_term_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__mdb__browser_term_maybe_bunch_0(void)
{
	mdb__browser_term_module0();
	mdb__browser_term_module1();
	mdb__browser_term_module2();
	mdb__browser_term_module3();
	mdb__browser_term_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__browser_term__init(void);
void mercury__mdb__browser_term__init_type_tables(void);
void mercury__mdb__browser_term__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__browser_term__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__browser_term__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__browser_term__init_threadscope_string_table(void);
#endif

void mercury__mdb__browser_term__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__browser_term_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__browser_term__type_ctor_info_browser_term_0,
		mdb__browser_term__browser_term_0_0);
	mercury__mdb__browser_term__init_debugger();
}

void mercury__mdb__browser_term__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__browser_term__type_ctor_info_browser_term_0);
	}
}


void mercury__mdb__browser_term__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__browser_term__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__browser_term);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__browser_term__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__browser_term__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
