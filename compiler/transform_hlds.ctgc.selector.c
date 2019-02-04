/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.ctgc.selector.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.ctgc.selector.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.ctgc.selector.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.ctgc.selector.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.ctgc.selector.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.ctgc.selector.c"
#line 48 "transform_hlds.ctgc.selector.c"
#include "transform_hlds.ctgc.selector.mh"

#line 51 "transform_hlds.ctgc.selector.c"
#line 52 "transform_hlds.ctgc.selector.c"
#ifndef TRANSFORM_HLDS__CTGC__SELECTOR_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__SELECTOR_DECL_GUARD

#line 56 "transform_hlds.ctgc.selector.c"
#line 57 "transform_hlds.ctgc.selector.c"

#endif
#line 60 "transform_hlds.ctgc.selector.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0,
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0;
MR_decl_label1(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0, 1)
MR_decl_label6(transform_hlds__ctgc__selector__branch_map_search_3_0, 27,4,6,8,5,1)
MR_decl_label8(transform_hlds__ctgc__selector__do_normalize_selector_6_0, 71,3,4,8,9,7,15,18)
MR_decl_label8(transform_hlds__ctgc__selector__do_normalize_selector_6_0, 17,14,13,24,22,28,12,5)
MR_decl_label2(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0, 4,2)
MR_decl_label2(transform_hlds__ctgc__selector__only_term_selectors_1_0, 2,1)
MR_decl_label5(transform_hlds__ctgc__selector__selector_apply_widening_4_0, 20,3,6,4,10)
MR_decl_label7(transform_hlds__ctgc__selector__subsumed_by_6_0, 3,4,5,2,7,9,6)
MR_decl_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0, 217,8,14,13,19,21,26,23)
MR_decl_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0, 18,11,219,5,38,41,39,47)
MR_decl_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0, 45,49,50,51,52,36,60,63)
MR_decl_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0, 140,61,67,59,74,72,79,81)
MR_decl_label4(transform_hlds__ctgc__selector__subsumed_by_2_5_0, 84,78,86,1)
MR_decl_label6(transform_hlds__ctgc__selector__type_contains_subtype_3_0, 4,6,7,8,9,11)
MR_decl_label8(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0, 35,3,6,5,9,12,13,15)
MR_decl_label3(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0, 14,17,2)
MR_decl_label8(transform_hlds__ctgc__selector__type_of_node_4_0, 52,8,6,13,15,20,17,11)
MR_decl_label4(transform_hlds__ctgc__selector__type_of_node_4_0, 5,54,2,1)
MR_decl_label8(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0, 5,3,9,11,16,8,2,22)
MR_decl_label1(fn__transform_hlds__ctgc__selector__selector_init_2_0, 3)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__top_selector_0_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__selector_init_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__selector_termshift_3_0)
MR_decl_static(transform_hlds__ctgc__selector__branch_map_search_3_0)
MR_decl_static(transform_hlds__ctgc__selector__do_normalize_selector_6_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0)
MR_decl_static(transform_hlds__ctgc__selector__only_term_selectors_1_0)
MR_decl_static(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0)
MR_decl_static(transform_hlds__ctgc__selector__type_contains_subtype_3_0)
MR_decl_static(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0)
MR_decl_static(transform_hlds__ctgc__selector__subsumed_by_2_5_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__subsumed_by_6_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__type_of_node_4_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__selector_apply_widening_4_0)
MR_decl_static(__Unify___transform_hlds__ctgc__selector__branch_map_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__selector__branch_map_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__selector__normalization_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__selector__normalization_0_0)
MR_decl_static(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__117__1_1_0)
MR_decl_static(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0)

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

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__117__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
static const struct mercury_type_2 mercury_common_2[4] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
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
mercury_data__closure_layout__transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(2,1)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_TAG_COMMON(0,2,3)
}
},
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0 = {
	"need_normalization",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1 = {
	"already_normalized",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__selector__enum_value_ordered_normalization_0[] = {
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0,
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__selector__enum_name_ordered_normalization_0[] = {
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_1,
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_normalization_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__selector__functor_number_map_normalization_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__selector__normalization_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__selector__normalization_0_0)),
	"transform_hlds.ctgc.selector",
	"normalization",
	{ (void *)mercury_data_transform_hlds__ctgc__selector__enum_name_ordered_normalization_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__selector__enum_value_ordered_normalization_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__selector__functor_number_map_normalization_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_unit_selector_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0
}};

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
"lambda_ctgc_selector_m_117",
2,
0
},
"transform_hlds.ctgc.selector",
"ctgc.selector.m",
117,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.selector",
"transform_hlds.ctgc.selector",
"lambda_ctgc_selector_m_272",
3,
0
},
"transform_hlds.ctgc.selector",
"ctgc.selector.m",
272,
"d1;c8;t;e;c2;"
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

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module1)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__selector_init_2_0);
	MR_init_label1(fn__transform_hlds__ctgc__selector__selector_init_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__selector__selector_init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__selector_init_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(fn__transform_hlds__ctgc__selector__selector_init_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("selector_init: cannot handle cons_id", 36);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__append_3_1);
	}
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
	MR_init_label6(transform_hlds__ctgc__selector__branch_map_search_3_0,27,4,6,8,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__branch_map_search_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__ctgc__selector__branch_map_search_3_0_i4);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		transform_hlds__ctgc__selector__branch_map_search_3_0_i6);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i5);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		transform_hlds__ctgc__selector__branch_map_search_3_0_i8);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i5);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i27);
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

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module5)
	MR_init_entry1(transform_hlds__ctgc__selector__do_normalize_selector_6_0);
	MR_init_label8(transform_hlds__ctgc__selector__do_normalize_selector_6_0,71,3,4,8,9,7,15,18)
	MR_init_label8(transform_hlds__ctgc__selector__do_normalize_selector_6_0,17,14,13,24,22,28,12,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__do_normalize_selector_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,71)
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
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i5);
	}
	MR_r3 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("do_normalize_selector: cat_user_direct_dummy", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i15);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i18);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i13);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("do_normalize_selector: accessing non-existing index.", 52);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i13);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(5), 0);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__branch_map_search_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i24);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i22);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i71);
	}
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,22)
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
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i28);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,28)
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
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i71);
	}
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__append_3_1);
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr3;
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
	MR_init_entry1(transform_hlds__ctgc__selector__only_term_selectors_1_0);
	MR_init_label2(transform_hlds__ctgc__selector__only_term_selectors_1_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__only_term_selectors_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__only_term_selectors_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__only_term_selectors_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(transform_hlds__ctgc__selector__only_term_selectors_1_0);
	}
MR_def_label(transform_hlds__ctgc__selector__only_term_selectors_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__selector__only_term_selectors_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_3_0);
MR_decl_entry(set__contains_2_0);
MR_decl_entry(svset__insert_3_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(queue__put_list_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module8)
	MR_init_entry1(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0);
	MR_init_label8(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,35,3,6,5,9,12,13,15)
	MR_init_label3(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,14,17,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__get_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i3);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i6);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i35);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i9);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i12);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i13);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i15);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i14);
	}
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(queue__put_list_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i17);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i35);
	}
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__queue__init_0_0);
MR_decl_entry(queue__put_3_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module9)
	MR_init_entry1(transform_hlds__ctgc__selector__type_contains_subtype_3_0);
	MR_init_label6(transform_hlds__ctgc__selector__type_contains_subtype_3_0,4,6,7,8,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_contains_subtype_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i4);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_3_0_i11);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(fn__queue__init_0_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i6);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(queue__put_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i7);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i8);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i9);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_index1_2_0);
MR_decl_entry(check_hlds__type_util__get_existq_cons_defn_4_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module10)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0);
	MR_init_label8(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,5,3,9,11,16,8,2,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i5);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__det_index1_2_0);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i9);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i8);
	}
	MR_sv(1) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i11);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i16);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("select_subtype: type is both existential and non-existential", 60);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("select_subtype: existential subtype", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module11)
	MR_init_entry1(transform_hlds__ctgc__selector__subsumed_by_2_5_0);
	MR_init_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0,217,8,14,13,19,21,26,23)
	MR_init_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0,18,11,219,5,38,41,39,47)
	MR_init_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0,45,49,50,51,52,36,60,63)
	MR_init_label8(transform_hlds__ctgc__selector__subsumed_by_2_5_0,140,61,67,59,74,72,79,81)
	MR_init_label4(transform_hlds__ctgc__selector__subsumed_by_2_5_0,84,78,86,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__subsumed_by_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i140);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i8);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	if ((MR_sv(6) != MR_sv(7))) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i14);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i23);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i19);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i18);
	}
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i21);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i26);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i11);
	}
	MR_r1 = MR_sv(2);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
	}
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("select_subtype: type is both existential and non-existential", 60);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i219);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("select_subtype: existential subtype", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i219);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i36);
	}
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r5, 0);
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i38);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i41);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i47);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__queue__init_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i49);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(queue__put_3_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i50);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i51);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i52);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i59);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_ctfield(1, MR_r6, 0);
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i60);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i63);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_3_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i67);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r6, 0);
	MR_tempr2 = MR_ctfield(1, MR_r5, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i74);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i72);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_3_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i79);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i78);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(transform_hlds__ctgc__selector__subsumed_by_2_5_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i81);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i78);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i84);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_3_0,
		transform_hlds__ctgc__selector__subsumed_by_2_5_0_i86);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_2_5_0_i217);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module12)
	MR_init_entry1(transform_hlds__ctgc__selector__subsumed_by_6_0);
	MR_init_label7(transform_hlds__ctgc__selector__subsumed_by_6_0,3,4,5,2,7,9,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__subsumed_by_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_6_0_i2);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		transform_hlds__ctgc__selector__subsumed_by_6_0_i4);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		transform_hlds__ctgc__selector__subsumed_by_6_0_i5);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__only_term_selectors_1_0,
		transform_hlds__ctgc__selector__subsumed_by_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_6_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__only_term_selectors_1_0,
		transform_hlds__ctgc__selector__subsumed_by_6_0_i9);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__subsumed_by_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__append_3_3);
MR_def_label(transform_hlds__ctgc__selector__subsumed_by_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ctgc__selector__subsumed_by_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module13)
	MR_init_entry1(transform_hlds__ctgc__selector__type_of_node_4_0);
	MR_init_label8(transform_hlds__ctgc__selector__type_of_node_4_0,52,8,6,13,15,20,17,11)
	MR_init_label4(transform_hlds__ctgc__selector__type_of_node_4_0,5,54,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__type_of_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i5);
	}
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i8);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i17);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i13);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i11);
	}
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i15);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i20);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i1);
	}
	MR_r1 = MR_sv(2);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i52);
	}
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("ctgc.selector.m", 15);
	MR_r2 = (MR_Word) MR_string_const("select_subtype: type is both existential and non-existential", 60);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i54);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i52);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_split_last_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module14)
	MR_init_entry1(transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_init_label5(transform_hlds__ctgc__selector__selector_apply_widening_4_0,20,3,6,4,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_apply_widening_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_of_node_4_0,
		transform_hlds__ctgc__selector__selector_apply_widening_4_0_i6);
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_apply_widening_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__det_split_last_3_0,
		transform_hlds__ctgc__selector__selector_apply_widening_4_0_i10);
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_apply_widening_4_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module15)
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

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module16)
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


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module17)
	MR_init_entry1(__Unify___transform_hlds__ctgc__selector__normalization_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__selector__normalization_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module18)
	MR_init_entry1(__Compare___transform_hlds__ctgc__selector__normalization_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__selector__normalization_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module19)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__117__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__117__1_1_0)
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

MR_declare_entry(MR_do_fail);
MR_decl_entry(check_hlds__type_util__cons_id_arg_types_4_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module20)
	MR_init_entry1(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0);
	MR_init_label1(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.ctgc.selector.IntroducedFrom__pred__type_contains_subtype_2__272__1/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(check_hlds__type_util__cons_id_arg_types_4_0,
		transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0_i1);
MR_def_label(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_contains_subtype_2__272__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_r2;
	MR_succeed();
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
	transform_hlds__ctgc__selector_module18();
	transform_hlds__ctgc__selector_module19();
	transform_hlds__ctgc__selector_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__selector__init(void);
void mercury__transform_hlds__ctgc__selector__init_type_tables(void);
void mercury__transform_hlds__ctgc__selector__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__selector__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
		mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0,
		transform_hlds__ctgc__selector__normalization_0_0);
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
		&mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0);
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

void mercury__transform_hlds__ctgc__selector__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__selector);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__selector__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
