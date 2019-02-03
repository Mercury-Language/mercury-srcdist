/*
** Automatically generated from `headvar_names.m'
** by the Mercury compiler,
** version 11.07.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__headvar_names__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.headvar_names.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.headvar_names.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.headvar_names.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.headvar_names.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.headvar_names.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.headvar_names.c"
#line 49 "hlds.headvar_names.c"
#include "hlds.headvar_names.mh"

#line 52 "hlds.headvar_names.c"
#line 53 "hlds.headvar_names.c"
#ifndef HLDS__HEADVAR_NAMES_DECL_GUARD
#define HLDS__HEADVAR_NAMES_DECL_GUARD

#line 57 "hlds.headvar_names.c"
#line 58 "hlds.headvar_names.c"

#endif
#line 61 "hlds.headvar_names.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_0,
	mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_map_0;
MR_decl_label4(hlds__headvar_names__find_headvar_names_in_clause_5_0, 2,3,6,7)
MR_decl_label10(hlds__headvar_names__find_headvar_names_in_goal_7_0, 8,6,13,11,17,5,22,26,25,30)
MR_decl_label10(hlds__headvar_names__find_headvar_names_in_goal_7_0, 24,36,39,41,38,44,46,34,2,3)
MR_decl_label6(hlds__headvar_names__goal_is_headvar_unification_4_0, 6,4,11,9,15,1)
MR_decl_label10(hlds__headvar_names__group_var_infos_8_0, 71,3,6,8,12,9,16,17,14,4)
MR_decl_label1(hlds__headvar_names__group_var_infos_8_0, 77)
MR_decl_label10(hlds__headvar_names__improve_single_clause_headvars_9_0, 120,3,5,12,16,23,25,26,28,21)
MR_decl_label10(hlds__headvar_names__improve_single_clause_headvars_9_0, 33,38,40,34,8,46,45,50,52,49)
MR_decl_label1(hlds__headvar_names__improve_single_clause_headvars_9_0, 4)
MR_decl_label10(hlds__headvar_names__maybe_improve_headvar_names_3_0, 2,5,6,7,8,9,46,11,14,15)
MR_decl_label10(hlds__headvar_names__maybe_improve_headvar_names_3_0, 17,18,19,20,21,22,23,24,25,28)
MR_decl_label9(hlds__headvar_names__maybe_improve_headvar_names_3_0, 29,30,13,36,37,38,39,40,43)
MR_decl_label2(hlds__headvar_names__set_var_name_remap_in_proc_4_0, 2,3)
MR_decl_label4(hlds__headvar_names__update_consensus_map_for_headvar_4_0, 2,17,6,9)
MR_decl_label3(fn__hlds__headvar_names__find_consensus_headvar_names_2_0, 3,4,6)
MR_decl_label2(__Unify___hlds__headvar_names__var_name_info_0_0, 6,1)
MR_decl_label4(__Compare___hlds__headvar_names__var_name_info_0_0, 3,2,5,21)
MR_decl_static(hlds__headvar_names__goal_is_headvar_unification_4_0)
MR_decl_static(hlds__headvar_names__improve_single_clause_headvars_9_0)
MR_decl_static(fn__hlds__headvar_names__find_consensus_headvar_names_2_0)
MR_def_extern_entry(hlds__headvar_names__maybe_improve_headvar_names_3_0)
MR_decl_static(hlds__headvar_names__set_var_name_remap_in_proc_4_0)
MR_decl_static(hlds__headvar_names__find_headvar_names_in_clause_5_0)
MR_decl_static(hlds__headvar_names__find_headvar_names_in_goal_7_0)
MR_decl_static(hlds__headvar_names__group_var_infos_8_0)
MR_decl_static(hlds__headvar_names__update_consensus_map_for_headvar_4_0)
MR_decl_static(__Unify___hlds__headvar_names__var_name_info_0_0)
MR_decl_static(__Compare___hlds__headvar_names__var_name_info_0_0)
MR_decl_static(__Unify___hlds__headvar_names__var_name_info_map_0_0)
MR_decl_static(__Compare___hlds__headvar_names__var_name_info_map_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_args__type_ctor_info_proc_arg_vector_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_LIST_CTOR_ADDR,
MR_COMMON(1,0)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(hlds__hlds_args, proc_arg_vector),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__headvar_names, var_name_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(hlds__headvar_names, var_name_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__headvar_names, var_name_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__headvar_names__find_consensus_headvar_names_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__headvar_names__maybe_improve_headvar_names_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__headvar_names__find_consensus_headvar_names_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__headvar_names__maybe_improve_headvar_names_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,1),
MR_INT_CTOR_ADDR,
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__headvar_names__maybe_improve_headvar_names_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__headvar_names__maybe_improve_headvar_names_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,4),
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_COMMON(1,3),
MR_COMMON(0,6)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__headvar_names__find_headvar_names_in_clause_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__headvar_names__find_headvar_names_in_clause_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,4),
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_hlds__headvar_names__field_types_var_name_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_hlds__headvar_names__field_names_var_name_info_0_0[] = {
	"vni_unified_with_functor",
	"vni_unified_with_vars"
};

static const MR_DuFunctorDesc mercury_data_hlds__headvar_names__du_functor_desc_var_name_info_0_0 = {
	"var_name_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__headvar_names__field_types_var_name_info_0_0,
	mercury_data_hlds__headvar_names__field_names_var_name_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__headvar_names__du_stag_ordered_var_name_info_0_0[] = {
	&mercury_data_hlds__headvar_names__du_functor_desc_var_name_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__headvar_names__du_ptag_ordered_var_name_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__headvar_names__du_stag_ordered_var_name_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__headvar_names__du_name_ordered_var_name_info_0[] = {
	&mercury_data_hlds__headvar_names__du_functor_desc_var_name_info_0_0
};

const MR_Integer mercury_data_hlds__headvar_names__functor_number_map_var_name_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__headvar_names__var_name_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__headvar_names__var_name_info_0_0)),
	"hlds.headvar_names",
	"var_name_info",
	{ (void *)mercury_data_hlds__headvar_names__du_name_ordered_var_name_info_0 },
	{ (void *)mercury_data_hlds__headvar_names__du_ptag_ordered_var_name_info_0 },
	1,
	4,
	mercury_data_hlds__headvar_names__functor_number_map_var_name_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_map_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__headvar_names__var_name_info_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__headvar_names__var_name_info_map_0_0)),
	"hlds.headvar_names",
	"var_name_info_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__headvar_names__find_headvar_names_in_clause_5_0_1 = {
{
MR_PREDICATE,
"hlds.headvar_names",
"hlds.headvar_names",
"find_headvar_names_in_goal",
7,
0
},
"hlds.headvar_names",
"headvar_names.m",
212,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__headvar_names__maybe_improve_headvar_names_3_0_2 = {
{
MR_PREDICATE,
"hlds.headvar_names",
"hlds.headvar_names",
"set_var_name_remap_in_proc",
4,
0
},
"hlds.headvar_names",
"headvar_names.m",
117,
"56"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__headvar_names__maybe_improve_headvar_names_3_0_1 = {
{
MR_PREDICATE,
"hlds.headvar_names",
"hlds.headvar_names",
"find_headvar_names_in_clause",
5,
0
},
"hlds.headvar_names",
"headvar_names.m",
96,
"50"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__headvar_names__find_consensus_headvar_names_2_0_1 = {
{
MR_PREDICATE,
"hlds.headvar_names",
"hlds.headvar_names",
"update_consensus_map_for_headvar",
4,
0
},
"hlds.headvar_names",
"headvar_names.m",
288,
"7"
};


MR_decl_entry(hlds__hlds_args__proc_arg_vector_member_2_0);

MR_BEGIN_MODULE(hlds__headvar_names_module0)
	MR_init_entry1(hlds__headvar_names__goal_is_headvar_unification_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__goal_is_headvar_unification_4_0);
	MR_init_label6(hlds__headvar_names__goal_is_headvar_unification_4_0,6,4,11,9,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_headvar_unification'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__goal_is_headvar_unification_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__headvar_names__goal_is_headvar_unification_4_0_i1);
	}
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(hlds__headvar_names__goal_is_headvar_unification_4_0_i4);
	}
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__goal_is_headvar_unification_4_0_i6);
MR_def_label(hlds__headvar_names__goal_is_headvar_unification_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__goal_is_headvar_unification_4_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__headvar_names__goal_is_headvar_unification_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(hlds__headvar_names__goal_is_headvar_unification_4_0_i1);
	}
	MR_sv(3) = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_tfield(0, MR_r4, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__goal_is_headvar_unification_4_0_i11);
MR_def_label(hlds__headvar_names__goal_is_headvar_unification_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__goal_is_headvar_unification_4_0_i9);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__headvar_names__goal_is_headvar_unification_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__goal_is_headvar_unification_4_0_i15);
MR_def_label(hlds__headvar_names__goal_is_headvar_unification_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__goal_is_headvar_unification_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__headvar_names__goal_is_headvar_unification_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(varset__name_var_4_0);

MR_BEGIN_MODULE(hlds__headvar_names_module1)
	MR_init_entry1(hlds__headvar_names__improve_single_clause_headvars_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__improve_single_clause_headvars_9_0);
	MR_init_label10(hlds__headvar_names__improve_single_clause_headvars_9_0,120,3,5,12,16,23,25,26,28,21)
	MR_init_label10(hlds__headvar_names__improve_single_clause_headvars_9_0,33,38,40,34,8,46,45,50,52,49)
	MR_init_label1(hlds__headvar_names__improve_single_clause_headvars_9_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'improve_single_clause_headvars'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__improve_single_clause_headvars_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(15);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__headvar_names__goal_is_headvar_unification_4_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i5);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i12);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i16);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i8);
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__headvar_names__improve_single_clause_headvars_9_0_i21);
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__headvar_names__improve_single_clause_headvars_9_0_i23);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i25);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i25);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i26);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i28);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i8);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_sv(9);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i33);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i38);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i34);
	}
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i40);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i34);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i52);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i120);
	}
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i46);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i52);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i50);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i49);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__name_var_4_0,
		hlds__headvar_names__improve_single_clause_headvars_9_0_i52);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i120);
	}
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i120);
MR_def_label(hlds__headvar_names__improve_single_clause_headvars_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(hlds__headvar_names__improve_single_clause_headvars_9_0_i120);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(hlds__headvar_names_module2)
	MR_init_entry1(fn__hlds__headvar_names__find_consensus_headvar_names_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__headvar_names__find_consensus_headvar_names_2_0);
	MR_init_label3(fn__hlds__headvar_names__find_consensus_headvar_names_2_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_consensus_headvar_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__headvar_names__find_consensus_headvar_names_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		fn__hlds__headvar_names__find_consensus_headvar_names_2_0_i3);
MR_def_label(fn__hlds__headvar_names__find_consensus_headvar_names_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		fn__hlds__headvar_names__find_consensus_headvar_names_2_0_i4);
MR_def_label(fn__hlds__headvar_names__find_consensus_headvar_names_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__headvar_names__update_consensus_map_for_headvar_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__hlds__headvar_names__find_consensus_headvar_names_2_0_i6);
MR_def_label(fn__hlds__headvar_names__find_consensus_headvar_names_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(fn__hlds__hlds_clauses__clause_body_1_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(parse_tree__prog_data__rename_vars_in_var_set_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_headvars_3_0);
MR_decl_entry(hlds__hlds_clauses__set_clause_list_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
MR_decl_entry(list__map2_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_var_name_remap_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_all_procids_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);

MR_BEGIN_MODULE(hlds__headvar_names_module3)
	MR_init_entry1(hlds__headvar_names__maybe_improve_headvar_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__maybe_improve_headvar_names_3_0);
	MR_init_label10(hlds__headvar_names__maybe_improve_headvar_names_3_0,2,5,6,7,8,9,46,11,14,15)
	MR_init_label10(hlds__headvar_names__maybe_improve_headvar_names_3_0,17,18,19,20,21,22,23,24,25,28)
	MR_init_label9(hlds__headvar_names__maybe_improve_headvar_names_3_0,29,30,13,36,37,38,39,40,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_improve_headvar_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__headvar_names__maybe_improve_headvar_names_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Integer) 84;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i2);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__headvar_names__maybe_improve_headvar_names_3_0_i46);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i5);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i6);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_headvars_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i7);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_varset_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i8);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i9);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__maybe_improve_headvar_names_3_0_i11);
	}
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__maybe_improve_headvar_names_3_0_i13);
	}
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i14);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i15);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i17);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__headvar_names__improve_single_clause_headvars_9_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i18);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i19);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__rename_vars_in_var_set_4_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i20);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i21);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i22);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i23);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i24);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_headvars_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i25);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(10);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__set_clause_list_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i28);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_clauses_rep_4_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i29);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_set_varset_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i30);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__headvar_names__find_headvar_names_in_clause_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i36);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__headvar_names__find_consensus_headvar_names_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i37);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_var_name_remap_3_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i38);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_all_procids_1_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i39);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i40);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__headvar_names__set_var_name_remap_in_proc_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__headvar_names__maybe_improve_headvar_names_3_0_i43);
MR_def_label(hlds__headvar_names__maybe_improve_headvar_names_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_set_procedures_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_var_name_remap_3_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(hlds__headvar_names_module4)
	MR_init_entry1(hlds__headvar_names__set_var_name_remap_in_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__set_var_name_remap_in_proc_4_0);
	MR_init_label2(hlds__headvar_names__set_var_name_remap_in_proc_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_var_name_remap_in_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__set_var_name_remap_in_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__headvar_names__set_var_name_remap_in_proc_4_0_i2);
MR_def_label(hlds__headvar_names__set_var_name_remap_in_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_var_name_remap_3_0,
		hlds__headvar_names__set_var_name_remap_in_proc_4_0_i3);
MR_def_label(hlds__headvar_names__set_var_name_remap_in_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(hlds__headvar_names_module5)
	MR_init_entry1(hlds__headvar_names__find_headvar_names_in_clause_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__find_headvar_names_in_clause_5_0);
	MR_init_label4(hlds__headvar_names__find_headvar_names_in_clause_5_0,2,3,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_headvar_names_in_clause'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__find_headvar_names_in_clause_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_clauses__clause_body_1_0,
		hlds__headvar_names__find_headvar_names_in_clause_5_0_i2);
MR_def_label(hlds__headvar_names__find_headvar_names_in_clause_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__headvar_names__find_headvar_names_in_clause_5_0_i3);
MR_def_label(hlds__headvar_names__find_headvar_names_in_clause_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__headvar_names__find_headvar_names_in_goal_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__headvar_names__find_headvar_names_in_clause_5_0_i6);
MR_def_label(hlds__headvar_names__find_headvar_names_in_clause_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__headvar_names__find_headvar_names_in_clause_5_0_i7);
MR_def_label(hlds__headvar_names__find_headvar_names_in_clause_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(hlds__headvar_names_module6)
	MR_init_entry1(hlds__headvar_names__find_headvar_names_in_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__find_headvar_names_in_goal_7_0);
	MR_init_label10(hlds__headvar_names__find_headvar_names_in_goal_7_0,8,6,13,11,17,5,22,26,25,30)
	MR_init_label10(hlds__headvar_names__find_headvar_names_in_goal_7_0,24,36,39,41,38,44,46,34,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_headvar_names_in_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__find_headvar_names_in_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i3);
	}
	MR_r7 = MR_tfield(0, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i8);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i2);
	}
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i5);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,0)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i3);
	}
	MR_sv(6) = MR_tfield(0, MR_r7, 0);
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i13);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i5);
	}
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_args__proc_arg_vector_member_2_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i17);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i22);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i24);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i26);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i46);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i30);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i46);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(varset__search_name_3_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i36);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i34);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i39);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__find_headvar_names_in_goal_7_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i41);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i46);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i44);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__headvar_names__find_headvar_names_in_goal_7_0_i46);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
MR_def_label(hlds__headvar_names__find_headvar_names_in_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__count_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(hlds__headvar_names_module7)
	MR_init_entry1(hlds__headvar_names__group_var_infos_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__group_var_infos_8_0);
	MR_init_label10(hlds__headvar_names__group_var_infos_8_0,71,3,6,8,12,9,16,17,14,4)
	MR_init_label1(hlds__headvar_names__group_var_infos_8_0,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_var_infos'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__group_var_infos_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__headvar_names__group_var_infos_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__headvar_names__group_var_infos_8_0_i6);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i4);
	}
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_tfield(0, MR_r2, 0);
	MR_sv(8) = MR_tfield(0, MR_r2, 1);
	MR_sv(9) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set__count_2_0,
		hlds__headvar_names__group_var_infos_8_0_i8);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i9);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i71);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i71);
	}
MR_def_label(hlds__headvar_names__group_var_infos_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__headvar_names__group_var_infos_8_0_i16);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i71);
	}
MR_def_label(hlds__headvar_names__group_var_infos_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.headvar_names", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.headvar_names.group_var_infos\'/8", 48);
	MR_r3 = (MR_Word) MR_string_const("bad singleton set", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		hlds__headvar_names__group_var_infos_8_0_i77);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i71);
	}
MR_def_label(hlds__headvar_names__group_var_infos_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(2);
MR_def_label(hlds__headvar_names__group_var_infos_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__headvar_names__group_var_infos_8_0_i71);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(hlds__headvar_names_module8)
	MR_init_entry1(hlds__headvar_names__update_consensus_map_for_headvar_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__headvar_names__update_consensus_map_for_headvar_4_0);
	MR_init_label4(hlds__headvar_names__update_consensus_map_for_headvar_4_0,2,17,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_consensus_map_for_headvar'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__headvar_names__update_consensus_map_for_headvar_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__headvar_names__group_var_infos_8_0,
		hlds__headvar_names__update_consensus_map_for_headvar_4_0_i2);
MR_def_label(hlds__headvar_names__update_consensus_map_for_headvar_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__update_consensus_map_for_headvar_4_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__update_consensus_map_for_headvar_4_0_i6);
	}
MR_def_label(hlds__headvar_names__update_consensus_map_for_headvar_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(hlds__headvar_names__update_consensus_map_for_headvar_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__update_consensus_map_for_headvar_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		hlds__headvar_names__update_consensus_map_for_headvar_4_0_i9);
MR_def_label(hlds__headvar_names__update_consensus_map_for_headvar_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__update_consensus_map_for_headvar_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__headvar_names__update_consensus_map_for_headvar_4_0_i17);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(hlds__headvar_names_module9)
	MR_init_entry1(__Unify___hlds__headvar_names__var_name_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__headvar_names__var_name_info_0_0);
	MR_init_label2(__Unify___hlds__headvar_names__var_name_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__headvar_names__var_name_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__headvar_names__var_name_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__headvar_names__var_name_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
MR_def_label(__Unify___hlds__headvar_names__var_name_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__headvar_names__var_name_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(hlds__headvar_names_module10)
	MR_init_entry1(__Compare___hlds__headvar_names__var_name_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__headvar_names__var_name_info_0_0);
	MR_init_label4(__Compare___hlds__headvar_names__var_name_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__headvar_names__var_name_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__headvar_names__var_name_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__headvar_names__var_name_info_0_0_i2);
MR_def_label(__Compare___hlds__headvar_names__var_name_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__headvar_names__var_name_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__headvar_names__var_name_info_0_0_i5);
MR_def_label(__Compare___hlds__headvar_names__var_name_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__headvar_names__var_name_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___hlds__headvar_names__var_name_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__headvar_names_module11)
	MR_init_entry1(__Unify___hlds__headvar_names__var_name_info_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__headvar_names__var_name_info_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__headvar_names__var_name_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
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

MR_BEGIN_MODULE(hlds__headvar_names_module12)
	MR_init_entry1(__Compare___hlds__headvar_names__var_name_info_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__headvar_names__var_name_info_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__headvar_names__var_name_info_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__headvar_names, var_name_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__headvar_names_maybe_bunch_0(void)
{
	hlds__headvar_names_module0();
	hlds__headvar_names_module1();
	hlds__headvar_names_module2();
	hlds__headvar_names_module3();
	hlds__headvar_names_module4();
	hlds__headvar_names_module5();
	hlds__headvar_names_module6();
	hlds__headvar_names_module7();
	hlds__headvar_names_module8();
	hlds__headvar_names_module9();
	hlds__headvar_names_module10();
	hlds__headvar_names_module11();
	hlds__headvar_names_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__headvar_names__init(void);
void mercury__hlds__headvar_names__init_type_tables(void);
void mercury__hlds__headvar_names__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__headvar_names__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__headvar_names__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__headvar_names__init_threadscope_string_table(void);
#endif

void mercury__hlds__headvar_names__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__headvar_names_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_0,
		hlds__headvar_names__var_name_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_map_0,
		hlds__headvar_names__var_name_info_map_0_0);
	mercury__hlds__headvar_names__init_debugger();
}

void mercury__hlds__headvar_names__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__headvar_names__type_ctor_info_var_name_info_map_0);
	}
}


void mercury__hlds__headvar_names__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__headvar_names__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__headvar_names);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__headvar_names__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__headvar_names__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
