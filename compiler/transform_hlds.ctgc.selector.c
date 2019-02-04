/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__selector__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.ctgc.selector.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.ctgc.selector.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.ctgc.selector.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.ctgc.selector.c"
#line 40 "transform_hlds.ctgc.selector.c"
#include "transform_hlds.ctgc.selector.mh"

#line 43 "transform_hlds.ctgc.selector.c"
#line 44 "transform_hlds.ctgc.selector.c"
#ifndef TRANSFORM_HLDS__CTGC__SELECTOR_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__SELECTOR_DECL_GUARD

#line 48 "transform_hlds.ctgc.selector.c"
#line 49 "transform_hlds.ctgc.selector.c"

#endif
#line 52 "transform_hlds.ctgc.selector.c"

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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_step_0,
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0;
MR_decl_label6(transform_hlds__ctgc__selector__branch_map_search_3_0, 26,3,5,7,4,1)
MR_decl_label8(transform_hlds__ctgc__selector__do_normalize_selector_6_0, 61,3,4,11,14,13,10,9)
MR_decl_label4(transform_hlds__ctgc__selector__do_normalize_selector_6_0, 20,18,23,5)
MR_decl_label2(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0, 4,2)
MR_decl_label2(transform_hlds__ctgc__selector__selector_apply_widening_4_0, 12,4)
MR_decl_label2(transform_hlds__ctgc__selector__subsumed_by_5_0, 2,3)
MR_decl_label7(transform_hlds__ctgc__selector__subsumed_by_2_5_0, 35,3,6,8,9,2,1)
MR_decl_label8(transform_hlds__ctgc__selector__type_on_path_2_6_0, 85,3,2,11,14,13,10,19)
MR_decl_label8(transform_hlds__ctgc__selector__type_on_path_2_6_0, 22,25,20,8,33,36,31,42)
MR_decl_label1(transform_hlds__ctgc__selector__type_on_path_2_6_0, 1)
MR_decl_label8(fn__transform_hlds__ctgc__selector__type_of_node_3_0, 35,8,11,10,6,5,37,3)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__top_selector_0_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__selector_init_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__selector_termshift_3_0)
MR_decl_static(transform_hlds__ctgc__selector__branch_map_search_3_0)
MR_decl_static(transform_hlds__ctgc__selector__do_normalize_selector_6_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__type_of_node_3_0)
MR_decl_static(transform_hlds__ctgc__selector__type_on_path_2_6_0)
MR_decl_static(transform_hlds__ctgc__selector__subsumed_by_2_5_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__subsumed_by_5_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__selector_apply_widening_4_0)
MR_decl_static(transform_hlds__ctgc__selector__is_term_selector_1_0)
MR_decl_static(__Unify___transform_hlds__ctgc__selector__branch_map_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__selector__branch_map_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__selector__step_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__selector__step_0_0)
MR_decl_static(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__88__1_1_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
},
};

static const struct mercury_type_1 mercury_common_1[2] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__88__1_1_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(transform_hlds__ctgc__selector__is_term_selector_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__selector__subsumed_by_2_5_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__selector__subsumed_by_2_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_TAG_COMMON(0,2,1)
}
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_step_0_0 = {
	"first",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_step_0_1 = {
	"subsequent",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__selector__enum_value_ordered_step_0[] = {
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_step_0_0,
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_step_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__selector__enum_name_ordered_step_0[] = {
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_step_0_0,
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_step_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__selector__functor_number_map_step_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__selector__type_ctor_info_step_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__selector__step_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__selector__step_0_0)),
	"transform_hlds.ctgc.selector",
	"step",
	{ (void *)mercury_data_transform_hlds__ctgc__selector__enum_name_ordered_step_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__selector__enum_value_ordered_step_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__selector__functor_number_map_step_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__selector__branch_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__selector__branch_map_0_0)),
	"transform_hlds.ctgc.selector",
	"branch_map",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.selector",
"transform_hlds.ctgc.selector",
"lambda_ctgc_selector_m_88",
2,
0
},
"transform_hlds.ctgc.selector",
"ctgc.selector.m",
88,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__selector__subsumed_by_2_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.selector",
"transform_hlds.ctgc.selector",
"is_term_selector",
1,
0
},
"transform_hlds.ctgc.selector",
"ctgc.selector.m",
184,
"d1;c5;"
};


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__top_selector_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__selector__top_selector_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module1)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__selector_init_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__selector__selector_init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module2)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module3)
	MR_init_entry1(transform_hlds__ctgc__selector__selector_termshift_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__selector_termshift_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type__type_unify_5_0);
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module4)
	MR_init_entry1(transform_hlds__ctgc__selector__branch_map_search_3_0);
	MR_init_label6(transform_hlds__ctgc__selector__branch_map_search_3_0,26,3,5,7,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__branch_map_search_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__ctgc__selector__branch_map_search_3_0_i3);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		transform_hlds__ctgc__selector__branch_map_search_3_0_i5);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__ctgc__selector__branch_map_search_3_0_i7);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i26);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);
MR_decl_entry(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0);
MR_decl_entry(list__index1_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module5)
	MR_init_entry1(transform_hlds__ctgc__selector__do_normalize_selector_6_0);
	MR_init_label8(transform_hlds__ctgc__selector__do_normalize_selector_6_0,61,3,4,11,14,13,10,9)
	MR_init_label4(transform_hlds__ctgc__selector__do_normalize_selector_6_0,20,18,23,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__do_normalize_selector_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i4);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i10);
	}
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i11);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i14);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i9);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("normalize_wti: accessing non-existing index.", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i9);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(5), 0);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__branch_map_search_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i20);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i61);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i23);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr3;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i61);
	}
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module6)
	MR_init_entry1(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0);
	MR_init_label2(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i4);
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__ctgc__selector__do_normalize_selector_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module7)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__type_of_node_3_0);
	MR_init_label8(fn__transform_hlds__ctgc__selector__type_of_node_3_0,35,8,11,10,6,5,37,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__selector__type_of_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__type_of_node_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__type_of_node_3_0_i5);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		fn__transform_hlds__ctgc__selector__type_of_node_3_0_i8);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__type_of_node_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__index1_3_0,
		fn__transform_hlds__ctgc__selector__type_of_node_3_0_i11);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__type_of_node_3_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__type_of_node_3_0_i35);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("get_type_of_node: selection failed.", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__transform_hlds__ctgc__selector__type_of_node_3_0_i37);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("get_type_of_node: existential type.", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__transform_hlds__ctgc__selector__type_of_node_3_0_i37);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__type_of_node_3_0_i35);
MR_def_label(fn__transform_hlds__ctgc__selector__type_of_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module8)
	MR_init_entry1(transform_hlds__ctgc__selector__type_on_path_2_6_0);
	MR_init_label8(transform_hlds__ctgc__selector__type_on_path_2_6_0,85,3,2,11,14,13,10,19)
	MR_init_label8(transform_hlds__ctgc__selector__type_on_path_2_6_0,22,25,20,8,33,36,31,42)
	MR_init_label1(transform_hlds__ctgc__selector__type_on_path_2_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_on_path_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i3);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i2);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i2);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i8);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i11);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i14);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i13);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i19);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("get_type_of_node: selection failed.", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i19);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("get_type_of_node: existential type.", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i19);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i22);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r3;
	MR_r5 = MR_sv(1);
	MR_np_localcall_lab(transform_hlds__ctgc__selector__type_on_path_2_6_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i25);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i42);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i85);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_sv(1) = MR_ctfield(1, MR_sv(5), 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i33);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r3;
	MR_r5 = MR_sv(1);
	MR_np_localcall_lab(transform_hlds__ctgc__selector__type_on_path_2_6_0,
		transform_hlds__ctgc__selector__type_on_path_2_6_0_i36);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i42);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_on_path_2_6_0_i85);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_on_path_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__takewhile_4_0);
MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module9)
	MR_init_entry1(transform_hlds__ctgc__selector__subsumed_by_2_5_0);
	MR_init_label7(transform_hlds__ctgc__selector__subsumed_by_2_5_0,35,3,6,8,9,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__subsumed_by_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(list__takewhile_4_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i3);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i2);
	}
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(transform_hlds__ctgc__selector__subsumed_by_2_5_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i6);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__type_of_node_3_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i8);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_on_path_2_6_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i9);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i35);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__append_3_3);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module10)
	MR_init_entry1(transform_hlds__ctgc__selector__subsumed_by_5_0);
	MR_init_label2(transform_hlds__ctgc__selector__subsumed_by_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__subsumed_by_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		transform_hlds__ctgc__selector__subsumed_by_5_0_i2);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		transform_hlds__ctgc__selector__subsumed_by_5_0_i3);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__ctgc__selector__subsumed_by_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module11)
	MR_init_entry1(transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_init_label2(transform_hlds__ctgc__selector__selector_apply_widening_4_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_apply_widening_4_0_i12);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__type_of_node_3_0,
		transform_hlds__ctgc__selector__selector_apply_widening_4_0_i4);
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module12)
	MR_init_entry1(transform_hlds__ctgc__selector__is_term_selector_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__is_term_selector_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module13)
	MR_init_entry1(__Unify___transform_hlds__ctgc__selector__branch_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__selector__branch_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module14)
	MR_init_entry1(__Compare___transform_hlds__ctgc__selector__branch_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__selector__branch_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module15)
	MR_init_entry1(__Unify___transform_hlds__ctgc__selector__step_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__selector__step_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module16)
	MR_init_entry1(__Compare___transform_hlds__ctgc__selector__step_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__selector__step_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module17)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__88__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__88__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__selector_maybe_bunch_0(void)
{
	transform_hlds__ctgc__selector_module0();
	transform_hlds__ctgc__selector_module1();
	transform_hlds__ctgc__selector_module2();
	transform_hlds__ctgc__selector_module3();
	transform_hlds__ctgc__selector_module4();
	transform_hlds__ctgc__selector_module5();
	transform_hlds__ctgc__selector_module6();
	transform_hlds__ctgc__selector_module7();
	transform_hlds__ctgc__selector_module8();
	transform_hlds__ctgc__selector_module9();
	transform_hlds__ctgc__selector_module10();
	transform_hlds__ctgc__selector_module11();
	transform_hlds__ctgc__selector_module12();
	transform_hlds__ctgc__selector_module13();
	transform_hlds__ctgc__selector_module14();
	transform_hlds__ctgc__selector_module15();
	transform_hlds__ctgc__selector_module16();
	transform_hlds__ctgc__selector_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__selector__init(void);
void mercury__transform_hlds__ctgc__selector__init_type_tables(void);
void mercury__transform_hlds__ctgc__selector__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__selector__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__selector__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__selector__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__selector_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__selector__type_ctor_info_step_0,
		transform_hlds__ctgc__selector__step_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0,
		transform_hlds__ctgc__selector__branch_map_0_0);
	mercury__transform_hlds__ctgc__selector__init_debugger();
}

void mercury__transform_hlds__ctgc__selector__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__selector__type_ctor_info_step_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0);
	}
}


void mercury__transform_hlds__ctgc__selector__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__selector__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__selector__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
