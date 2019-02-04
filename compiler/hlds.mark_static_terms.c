/*
** Automatically generated from `mark_static_terms.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__mark_static_terms__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.mark_static_terms.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.mark_static_terms.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 35 "hlds.mark_static_terms.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "hlds.mark_static_terms.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "hlds.mark_static_terms.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "hlds.mark_static_terms.c"
#line 48 "hlds.mark_static_terms.c"
#include "hlds.mark_static_terms.mh"

#line 51 "hlds.mark_static_terms.c"
#line 52 "hlds.mark_static_terms.c"
#ifndef HLDS__MARK_STATIC_TERMS_DECL_GUARD
#define HLDS__MARK_STATIC_TERMS_DECL_GUARD

#line 56 "hlds.mark_static_terms.c"
#line 57 "hlds.mark_static_terms.c"

#endif
#line 60 "hlds.mark_static_terms.c"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__mark_static_terms__type_ctor_info_static_info_0;
MR_decl_label3(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0, 2,4,5)
MR_decl_label3(hlds__mark_static_terms__cases_mark_static_terms_3_0, 15,4,6)
MR_decl_label3(hlds__mark_static_terms__disj_mark_static_terms_3_0, 14,4,5)
MR_decl_label10(hlds__mark_static_terms__goal_mark_static_terms_4_0, 60,39,45,62,5,63,9,67,14,15)
MR_decl_label10(hlds__mark_static_terms__goal_mark_static_terms_4_0, 16,65,20,66,25,28,32,64,35,59)
MR_decl_label1(hlds__mark_static_terms__goal_mark_static_terms_4_0, 61)
MR_decl_label10(hlds__mark_static_terms__unification_mark_static_terms_4_0, 49,15,17,19,18,51,6,8,4,50)
MR_decl_static(hlds__mark_static_terms__conj_mark_static_terms_4_0)
MR_decl_static(hlds__mark_static_terms__unification_mark_static_terms_4_0)
MR_decl_static(hlds__mark_static_terms__goal_mark_static_terms_4_0)
MR_decl_static(hlds__mark_static_terms__disj_mark_static_terms_3_0)
MR_decl_static(hlds__mark_static_terms__cases_mark_static_terms_3_0)
MR_def_extern_entry(hlds__mark_static_terms__mark_static_terms_3_0)
MR_decl_static(__Unify___hlds__mark_static_terms__static_info_0_0)
MR_decl_static(__Compare___hlds__mark_static_terms__static_info_0_0)
MR_decl_static(hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_0)
MR_def_extern_entry(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
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
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_static_terms__conj_mark_static_terms_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__mark_static_terms__conj_mark_static_terms_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_static_terms__unification_mark_static_terms_4_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__mark_static_terms__unification_mark_static_terms_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,3),
MR_COMMON(0,4)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_tree234__type_ctor_info_set_tree234_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__mark_static_terms__type_ctor_info_static_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__mark_static_terms__static_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__mark_static_terms__static_info_0_0)),
	"hlds.mark_static_terms",
	"static_info",
	{ 0 },
	{ (void *)&mercury_data_set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_static_terms__unification_mark_static_terms_4_0_1 = {
{
MR_PREDICATE,
"hlds.mark_static_terms",
"hlds.mark_static_terms",
"lambda_mark_static_terms_m_163",
2,
0
},
"hlds.mark_static_terms",
"mark_static_terms.m",
163,
"d1;c5;d1;c2;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__mark_static_terms__conj_mark_static_terms_4_0_1 = {
{
MR_PREDICATE,
"hlds.mark_static_terms",
"hlds.mark_static_terms",
"goal_mark_static_terms",
4,
0
},
"hlds.mark_static_terms",
"mark_static_terms.m",
132,
"d1;c5;"
};


extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(hlds__mark_static_terms_module0)
	MR_init_entry1(hlds__mark_static_terms__conj_mark_static_terms_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__conj_mark_static_terms_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conj_mark_static_terms'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_static_terms__conj_mark_static_terms_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__all_true_2_0);
MR_decl_entry(set_tree234__insert_3_0);
MR_decl_entry(__Unify___hlds__hlds_goal__how_to_construct_0_0);
MR_decl_entry(set_tree234__contains_2_0);

MR_BEGIN_MODULE(hlds__mark_static_terms_module1)
	MR_init_entry1(hlds__mark_static_terms__unification_mark_static_terms_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__unification_mark_static_terms_4_0);
	MR_init_label10(hlds__mark_static_terms__unification_mark_static_terms_4_0,49,15,17,19,18,51,6,8,4,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unification_mark_static_terms'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_static_terms__unification_mark_static_terms_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__mark_static_terms__unification_mark_static_terms_4_0_i49) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__unification_mark_static_terms_4_0_i50) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__unification_mark_static_terms_4_0_i51) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__unification_mark_static_terms_4_0_i50));
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(9) = MR_tempr2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__all_true_2_0,
		hlds__mark_static_terms__unification_mark_static_terms_4_0_i15);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_static_terms__unification_mark_static_terms_4_0_i4);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__mark_static_terms__unification_mark_static_terms_4_0_i17);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__how_to_construct_0_0,
		hlds__mark_static_terms__unification_mark_static_terms_4_0_i19);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_static_terms__unification_mark_static_terms_4_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(9) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tfield(2, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(set_tree234__contains_2_0,
		hlds__mark_static_terms__unification_mark_static_terms_4_0_i6);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__mark_static_terms__unification_mark_static_terms_4_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		hlds__mark_static_terms__unification_mark_static_terms_4_0_i8);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__mark_static_terms__unification_mark_static_terms_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__mark_static_terms_module2)
	MR_init_entry1(hlds__mark_static_terms__goal_mark_static_terms_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__goal_mark_static_terms_4_0);
	MR_init_label10(hlds__mark_static_terms__goal_mark_static_terms_4_0,60,39,45,62,5,63,9,67,14,15)
	MR_init_label10(hlds__mark_static_terms__goal_mark_static_terms_4_0,16,65,20,66,25,28,32,64,35,59)
	MR_init_label1(hlds__mark_static_terms__goal_mark_static_terms_4_0,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_mark_static_terms'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_static_terms__goal_mark_static_terms_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i60) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i61) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i61) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i45));
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__mark_static_terms__unification_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i39);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i61) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i62) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i63) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i64) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i65) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i66) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i67) MR_AND
		MR_LABEL_AP(hlds__mark_static_terms__goal_mark_static_terms_4_0_i32));
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__mark_static_terms__conj_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i5);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(hlds__mark_static_terms__disj_mark_static_terms_3_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i9);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i14);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i15);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_localcall_lab(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i16);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_localcall_lab(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i20);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__mark_static_terms__goal_mark_static_terms_4_0_i25);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_EQ(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__mark_static_terms__goal_mark_static_terms_4_0_i59);
	}
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_localcall_lab(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i28);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mark_static_terms.m", 19);
	MR_r2 = (MR_Word) MR_string_const("goal_mark_static_terms: shorthand", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(hlds__mark_static_terms__cases_mark_static_terms_3_0,
		hlds__mark_static_terms__goal_mark_static_terms_4_0_i35);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
MR_def_label(hlds__mark_static_terms__goal_mark_static_terms_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_static_terms_module3)
	MR_init_entry1(hlds__mark_static_terms__disj_mark_static_terms_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__disj_mark_static_terms_3_0);
	MR_init_label3(hlds__mark_static_terms__disj_mark_static_terms_3_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disj_mark_static_terms'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_static_terms__disj_mark_static_terms_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__mark_static_terms__disj_mark_static_terms_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__mark_static_terms__disj_mark_static_terms_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__disj_mark_static_terms_3_0_i4);
MR_def_label(hlds__mark_static_terms__disj_mark_static_terms_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(hlds__mark_static_terms__disj_mark_static_terms_3_0,
		hlds__mark_static_terms__disj_mark_static_terms_3_0_i5);
MR_def_label(hlds__mark_static_terms__disj_mark_static_terms_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_static_terms_module4)
	MR_init_entry1(hlds__mark_static_terms__cases_mark_static_terms_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__cases_mark_static_terms_3_0);
	MR_init_label3(hlds__mark_static_terms__cases_mark_static_terms_3_0,15,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_mark_static_terms'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_static_terms__cases_mark_static_terms_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__mark_static_terms__cases_mark_static_terms_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(hlds__mark_static_terms__cases_mark_static_terms_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		hlds__mark_static_terms__cases_mark_static_terms_3_0_i4);
MR_def_label(hlds__mark_static_terms__cases_mark_static_terms_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(hlds__mark_static_terms__cases_mark_static_terms_3_0,
		hlds__mark_static_terms__cases_mark_static_terms_3_0_i6);
MR_def_label(hlds__mark_static_terms__cases_mark_static_terms_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_static_terms_module5)
	MR_init_entry1(hlds__mark_static_terms__mark_static_terms_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__mark_static_terms_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mark_static_terms'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__mark_static_terms__mark_static_terms_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(hlds__mark_static_terms_module6)
	MR_init_entry1(__Unify___hlds__mark_static_terms__static_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__mark_static_terms__static_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__mark_static_terms__static_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_tree234__set_tree234_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(hlds__mark_static_terms_module7)
	MR_init_entry1(__Compare___hlds__mark_static_terms__static_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__mark_static_terms__static_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__mark_static_terms__static_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_tree234__set_tree234_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__mark_static_terms_module8)
	MR_init_entry1(hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__unification_mark_static_terms__163__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set_tree234__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__set_tree234__init_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(hlds__mark_static_terms_module9)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0);
	MR_init_label3(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mark_static_terms__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__mark_static_terms__goal_mark_static_terms_4_0,
		f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0_i5);
MR_def_label(f_104_108_100_115_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_set_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__mark_static_terms_maybe_bunch_0(void)
{
	hlds__mark_static_terms_module0();
	hlds__mark_static_terms_module1();
	hlds__mark_static_terms_module2();
	hlds__mark_static_terms_module3();
	hlds__mark_static_terms_module4();
	hlds__mark_static_terms_module5();
	hlds__mark_static_terms_module6();
	hlds__mark_static_terms_module7();
	hlds__mark_static_terms_module8();
	hlds__mark_static_terms_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__mark_static_terms__init(void);
void mercury__hlds__mark_static_terms__init_type_tables(void);
void mercury__hlds__mark_static_terms__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__mark_static_terms__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__mark_static_terms__init_complexity_procs(void);
#endif

void mercury__hlds__mark_static_terms__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__mark_static_terms_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__mark_static_terms__type_ctor_info_static_info_0,
		hlds__mark_static_terms__static_info_0_0);
	mercury__hlds__mark_static_terms__init_debugger();
}

void mercury__hlds__mark_static_terms__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__mark_static_terms__type_ctor_info_static_info_0);
	}
}


void mercury__hlds__mark_static_terms__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__mark_static_terms__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__mark_static_terms);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__mark_static_terms__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
