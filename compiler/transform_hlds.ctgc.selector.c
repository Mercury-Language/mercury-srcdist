/*
** Automatically generated from `ctgc.selector.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__selector__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.ctgc.selector.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.ctgc.selector.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.ctgc.selector.c"
#line 218 "../library/table_builtin.int"
#include "table_builtin.mh"

#line 40 "transform_hlds.ctgc.selector.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.ctgc.selector.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "transform_hlds.ctgc.selector.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "transform_hlds.ctgc.selector.c"
#line 21 "../library/stm_builtin.int2"
#include "stm_builtin.mh"

#line 56 "transform_hlds.ctgc.selector.c"
#line 35 "../library/store.int2"
#include "store.mh"

#line 60 "transform_hlds.ctgc.selector.c"
#line 61 "transform_hlds.ctgc.selector.c"
#include "transform_hlds.ctgc.selector.mh"

#line 64 "transform_hlds.ctgc.selector.c"
#line 65 "transform_hlds.ctgc.selector.c"
#ifndef TRANSFORM_HLDS__CTGC__SELECTOR_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__SELECTOR_DECL_GUARD

#line 69 "transform_hlds.ctgc.selector.c"
#line 70 "transform_hlds.ctgc.selector.c"

#endif
#line 73 "transform_hlds.ctgc.selector.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0,
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0,
	mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0;
MR_decl_label1(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0, 1)
MR_decl_label6(transform_hlds__ctgc__selector__branch_map_search_3_0, 33,4,6,8,5,1)
MR_decl_label10(transform_hlds__ctgc__selector__do_normalize_selector_6_0, 87,3,4,8,9,7,15,18,17,14)
MR_decl_label6(transform_hlds__ctgc__selector__do_normalize_selector_6_0, 13,24,22,28,12,5)
MR_decl_label5(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0, 7,5,12,4,13)
MR_decl_label2(transform_hlds__ctgc__selector__only_term_selectors_1_0, 2,1)
MR_decl_label1(transform_hlds__ctgc__selector__reset_tables_2_0, 2)
MR_decl_label3(transform_hlds__ctgc__selector__selector_apply_widening_4_0, 28,6,4)
MR_decl_label7(transform_hlds__ctgc__selector__selector_subsumed_by_6_0, 3,4,5,2,7,9,6)
MR_decl_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0, 278,8,13,11,19,18,24,26,31,28)
MR_decl_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0, 23,16,281,5,44,47,45,53,51,55)
MR_decl_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0, 42,63,66,160,64,72,70,74,62,82)
MR_decl_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0, 80,90,88,92,94,95,98,86,100,1)
MR_decl_label4(transform_hlds__ctgc__selector__type_arg_types_3_0, 6,7,3,8)
MR_decl_label3(transform_hlds__ctgc__selector__type_contains_subtype_3_0, 4,6,8)
MR_decl_label6(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0, 4,5,6,7,3,8)
MR_decl_label10(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0, 33,3,6,5,9,10,13,11,15,2)
MR_decl_label10(transform_hlds__ctgc__selector__type_of_node_4_0, 64,8,6,13,15,20,17,11,5,66)
MR_decl_label2(transform_hlds__ctgc__selector__type_of_node_4_0, 2,1)
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
MR_decl_static(transform_hlds__ctgc__selector__type_arg_types_3_0)
MR_decl_static(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0)
MR_decl_static(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0)
MR_decl_static(transform_hlds__ctgc__selector__type_contains_subtype_3_0)
MR_decl_static(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0)
MR_decl_static(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__selector_subsumed_by_6_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__type_of_node_4_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__selector_apply_widening_4_0)
MR_decl_static(transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_0)
MR_decl_static(transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_0)
MR_def_extern_entry(transform_hlds__ctgc__selector__reset_tables_2_0)
MR_decl_static(__Unify___transform_hlds__ctgc__selector__branch_map_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__selector__branch_map_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__selector__normalization_0_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__selector__normalization_0_0)
MR_decl_static(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__132__1_1_0)
MR_decl_static(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

static const MR_TableStepDesc mercury_var__proctable_input_steps__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0[] = {
{ "ModuleInfo", MR_TABLE_STEP_PROMISE_IMPLIED, -1 },
{ "Type", MR_TABLE_STEP_GEN, -1 },
{ "STATE_VARIABLE_Selector_0", MR_TABLE_STEP_GEN, -1 },
};

static MR_ProcTableInfo mercury_var__proctable_info__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0 = {
MR_TABLE_TYPE_MEMO,
3,
1,
0,
(const MR_PseudoTypeInfo *) MR_COMMON(1,0),
(const MR_TypeParamLocns *) (MR_Integer) 0,
{ 0 },
{
mercury_var__proctable_input_steps__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
NULL
},
{{{
0,
0,
NULL
},{
0,
0,
NULL
}},{{
0,
0,
NULL
},{
0,
0,
NULL
}}},
-1,
NULL,
0,
0
};

static const MR_TableStepDesc mercury_var__proctable_input_steps__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0[] = {
{ "ModuleInfo", MR_TABLE_STEP_PROMISE_IMPLIED, -1 },
{ "FromType", MR_TABLE_STEP_GEN, -1 },
{ "ToType", MR_TABLE_STEP_GEN, -1 },
};

static MR_ProcTableInfo mercury_var__proctable_info__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0 = {
MR_TABLE_TYPE_MEMO,
3,
1,
0,
(const MR_PseudoTypeInfo *) MR_COMMON(1,1),
(const MR_TypeParamLocns *) (MR_Integer) 0,
{ 0 },
{
mercury_var__proctable_input_steps__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,
NULL
},
{{{
0,
0,
NULL
},{
0,
0,
NULL
}},{{
0,
0,
NULL
},{
0,
0,
NULL
}}},
-1,
NULL,
0,
0
};

static const MR_TableStepDesc mercury_var__proctable_input_steps__transform_hlds__ctgc__selector__type_arg_types_3_0[] = {
{ "ModuleInfo", MR_TABLE_STEP_PROMISE_IMPLIED, -1 },
{ "Type", MR_TABLE_STEP_GEN, -1 },
};

static MR_ProcTableInfo mercury_var__proctable_info__transform_hlds__ctgc__selector__type_arg_types_3_0 = {
MR_TABLE_TYPE_MEMO,
2,
1,
0,
(const MR_PseudoTypeInfo *) MR_COMMON(2,0),
(const MR_TypeParamLocns *) (MR_Integer) 0,
{ 0 },
{
mercury_var__proctable_input_steps__transform_hlds__ctgc__selector__type_arg_types_3_0,
NULL
},
{{{
0,
0,
NULL
},{
0,
0,
NULL
}},{{
0,
0,
NULL
},{
0,
0,
NULL
}}},
-1,
NULL,
0,
0
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
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
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_BOOL_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_TAG_COMMON(0,0,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_unit_selector_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__132__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__selector__type_arg_types_3_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__selector__type_arg_types_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,1)
}
},
};

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
	15,
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

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0 = {
	"encounter_existential_subtype",
	0
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0[] = {
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0[] = {
	&mercury_data_transform_hlds__ctgc__selector__enum_functor_desc_encounter_existential_subtype_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0)),
	"transform_hlds.ctgc.selector",
	"encounter_existential_subtype",
	{ (void *)mercury_data_transform_hlds__ctgc__selector__enum_name_ordered_encounter_existential_subtype_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__selector__enum_value_ordered_encounter_existential_subtype_0 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__selector__functor_number_map_encounter_existential_subtype_0
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
	15,
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


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__selector__type_arg_types_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.selector",
"transform_hlds.ctgc.selector",
"lambda_ctgc_selector_m_334",
3,
0
},
"transform_hlds.ctgc.selector",
"ctgc.selector.m",
332,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0_1 = {
{
MR_FUNCTION,
"transform_hlds.ctgc.selector",
"transform_hlds.ctgc.selector",
"lambda_ctgc_selector_m_132",
2,
0
},
"transform_hlds.ctgc.selector",
"ctgc.selector.m",
132,
"4"
};



MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__top_selector_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__selector__top_selector_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top_selector'/1 mode 0 */
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

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module1)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__selector_init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__selector__selector_init_2_0);
	MR_init_label1(fn__transform_hlds__ctgc__selector__selector_init_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'selector_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__selector__selector_init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 2)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))))) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__selector_init_2_0_i3);
	}
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
MR_def_label(fn__transform_hlds__ctgc__selector__selector_init_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.selector", 28);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.ctgc.selector.selector_init\'/2", 55);
	MR_r3 = (MR_Word) MR_string_const("cannot handle cons_id", 21);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module2)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__selector__selector_init_from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'selector_init_from_list'/2 mode 0 */
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__selector_termshift_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'selector_termshift'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__branch_map_search_3_0);
	MR_init_label6(transform_hlds__ctgc__selector__branch_map_search_3_0,33,4,6,8,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'branch_map_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__branch_map_search_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__branch_map_search_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,2);
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
	MR_GOTO_LAB(transform_hlds__ctgc__selector__branch_map_search_3_0_i33);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__do_normalize_selector_6_0);
	MR_init_label10(transform_hlds__ctgc__selector__do_normalize_selector_6_0,87,3,4,8,9,7,15,18,17,14)
	MR_init_label6(transform_hlds__ctgc__selector__do_normalize_selector_6_0,13,24,22,28,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_normalize_selector'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__do_normalize_selector_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i4);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i5);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.selector", 28);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", 64);
	MR_r3 = (MR_Word) MR_string_const("cat_user_direct_dummy", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i15);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__index1_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i18);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i13);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.selector", 28);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.selector.do_normalize_selector\'/6", 64);
	MR_r3 = (MR_Word) MR_string_const("accessing nonexistent index", 27);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i13);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
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
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i87);
	}
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__append_3_1,
		transform_hlds__ctgc__selector__do_normalize_selector_6_0_i28);
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr3;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__do_normalize_selector_6_0_i87);
	}
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(transform_hlds__ctgc__selector__do_normalize_selector_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(3);
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
MR_decl_entry(table_builtin__table_error_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module6)
	MR_init_entry1(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0);
	MR_init_label5(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,7,5,12,4,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalize_selector_with_type_information'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	proc_table_info;
	MR_TrieNode	CallTableTipVar;
	MR_Word	status;
	MR_Word	input_typeinfo1;
	MR_Word	arg1;
	MR_Word	input_typeinfo2;
	MR_Word	arg2;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0
	proc_table_info = (MR_ProcTableInfoPtr) (MR_Word) (MR_Word *) &mercury_var__proctable_info__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0;
	input_typeinfo1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	arg1 = MR_r2;
	input_typeinfo2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	arg2 = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_det_setup_shortcut");
{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo2, arg2, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_det_setup_shortcut");
	MR_r4 = (MR_Word) CallTableTipVar;
	MR_r5 = status;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i4);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i7);
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i12);
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
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
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__do_normalize_selector_6_0,
		transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i12);
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	cur_node;
	MR_Word	arg0;
	MR_Word	save_arg_typeinfo0;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0
	cur_node = (MR_TrieNode) MR_sv(5);
	arg0 = MR_r1;
	save_arg_typeinfo0 = MR_sv(4);
	MR_OBTAIN_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0_i13);
	}
	{
	MR_TrieNode	base;
	MR_Word	restore_arg0;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0
	base = (MR_TrieNode) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_get_answer_block_shortcut");
{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_get_answer_block_shortcut");
	MR_r1 = restore_arg0;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("detected infinite recursion in pred transform_hlds.ctgc.selector.normalize_selector_with_type_information/4", 107);
	MR_np_tailcall_ent(table_builtin__table_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module7)
	MR_init_entry1(transform_hlds__ctgc__selector__only_term_selectors_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__only_term_selectors_1_0);
	MR_init_label2(transform_hlds__ctgc__selector__only_term_selectors_1_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'only_term_selectors'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__only_term_selectors_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__only_term_selectors_1_0_i2);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__only_term_selectors_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(transform_hlds__ctgc__selector__only_term_selectors_1_0);
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

MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module8)
	MR_init_entry1(transform_hlds__ctgc__selector__type_arg_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__type_arg_types_3_0);
	MR_init_label4(transform_hlds__ctgc__selector__type_arg_types_3_0,6,7,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_arg_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_arg_types_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	proc_table_info;
	MR_TrieNode	CallTableTipVar;
	MR_Word	status;
	MR_Word	input_typeinfo1;
	MR_Word	arg1;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__type_arg_types_3_0
	proc_table_info = (MR_ProcTableInfoPtr) (MR_Word) (MR_Word *) &mercury_var__proctable_info__transform_hlds__ctgc__selector__type_arg_types_3_0;
	input_typeinfo1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	arg1 = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_det_setup_shortcut");
{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_det_setup_shortcut");
	MR_r3 = (MR_Word) CallTableTipVar;
	MR_r4 = status;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_arg_types_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		transform_hlds__ctgc__selector__type_arg_types_3_0_i6);
MR_def_label(transform_hlds__ctgc__selector__type_arg_types_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__ctgc__selector__type_arg_types_3_0_i7);
MR_def_label(transform_hlds__ctgc__selector__type_arg_types_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	cur_node;
	MR_Word	arg0;
	MR_Word	save_arg_typeinfo0;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__type_arg_types_3_0
	cur_node = (MR_TrieNode) MR_sv(2);
	arg0 = MR_r1;
	save_arg_typeinfo0 = MR_sv(3);
	MR_OBTAIN_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__selector__type_arg_types_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_arg_types_3_0_i8);
	}
	{
	MR_TrieNode	base;
	MR_Word	restore_arg0;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__type_arg_types_3_0
	base = (MR_TrieNode) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_get_answer_block_shortcut");
{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_get_answer_block_shortcut");
	MR_r1 = restore_arg0;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(transform_hlds__ctgc__selector__type_arg_types_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("detected infinite recursion in pred transform_hlds.ctgc.selector.type_arg_types/3", 81);
	MR_np_tailcall_ent(table_builtin__table_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__get_3_0);
MR_decl_entry(set__contains_2_0);
MR_decl_entry(set__insert_3_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(queue__put_list_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module9)
	MR_init_entry1(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__type_contains_subtype_2_7_0);
	MR_init_label10(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,33,3,6,5,9,10,13,11,15,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_contains_subtype_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r4;
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
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
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
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i33);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__insert_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i9);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_arg_types_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i10);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i13);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i11);
	}
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(queue__put_list_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i15);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0_i33);
	}
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__queue__init_0_0);
MR_decl_entry(queue__put_3_0);
MR_decl_entry(fn__set__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module10)
	MR_init_entry1(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0);
	MR_init_label6(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,4,5,6,7,3,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_contains_subtype_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcTableInfoPtr	proc_table_info;
	MR_TrieNode	CallTableTipVar;
	MR_Word	status;
	MR_Word	input_typeinfo1;
	MR_Word	arg1;
	MR_Word	input_typeinfo2;
	MR_Word	arg2;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0
	proc_table_info = (MR_ProcTableInfoPtr) (MR_Word) (MR_Word *) &mercury_var__proctable_info__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0;
	input_typeinfo1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	arg1 = MR_r2;
	input_typeinfo2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	arg2 = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_det_setup_shortcut");
{
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	/* promise_implied for arg0 */
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo2, arg2, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_det_setup_shortcut");
	MR_r4 = (MR_Word) CallTableTipVar;
	MR_r5 = status;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__queue__init_0_0,
		transform_hlds__ctgc__selector__type_contains_subtype_1_4_0_i4);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__put_3_0,
		transform_hlds__ctgc__selector__type_contains_subtype_1_4_0_i5);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__ctgc__selector__type_contains_subtype_1_4_0_i6);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_2_7_0,
		transform_hlds__ctgc__selector__type_contains_subtype_1_4_0_i7);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_TrieNode	cur_node;
	MR_Word	arg0;
	MR_Word	save_arg_typeinfo0;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0
	cur_node = (MR_TrieNode) MR_sv(5);
	arg0 = MR_r3;
	save_arg_typeinfo0 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_fill_answer_block_shortcut");
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0_i8);
	}
	{
	MR_TrieNode	base;
	MR_Word	restore_arg0;
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0
	base = (MR_TrieNode) MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("table_memo_get_answer_block_shortcut");
{
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);
;}
	MR_RELEASE_GLOBAL_LOCK("table_memo_get_answer_block_shortcut");
	MR_r1 = restore_arg0;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("detected infinite recursion in pred transform_hlds.ctgc.selector.type_contains_subtype_1/4", 90);
	MR_np_tailcall_ent(table_builtin__table_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module11)
	MR_init_entry1(transform_hlds__ctgc__selector__type_contains_subtype_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__type_contains_subtype_3_0);
	MR_init_label3(transform_hlds__ctgc__selector__type_contains_subtype_3_0,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_contains_subtype'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__type_contains_subtype_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i4);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_contains_subtype_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,
		transform_hlds__ctgc__selector__type_contains_subtype_3_0_i6);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__ctgc__selector__type_contains_subtype_3_0,8)
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
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module12)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__selector__det_select_subtype_4_0);
	MR_init_label8(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,5,3,9,11,16,8,2,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_select_subtype'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i5);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__det_index1_2_0);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i9);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i8);
	}
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i11);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tfield(0, MR_sv(4), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i16);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.selector", 28);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("type is both existential and non-existential", 44);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__selector, encounter_existential_subtype);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
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

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module13)
	MR_init_entry1(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0);
	MR_init_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,278,8,13,11,19,18,24,26,31,28)
	MR_init_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,23,16,281,5,44,47,45,53,51,55)
	MR_init_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,42,63,66,160,64,72,70,74,62,82)
	MR_init_label10(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,80,90,88,92,94,95,98,86,100,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'selector_subsumed_by_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i160);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i8);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	if ((MR_sv(5) != MR_sv(6))) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i13);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i11);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i19);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i28);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i24);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i23);
	}
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i26);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tfield(0, MR_sv(7), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i31);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i16);
	}
	MR_r1 = MR_sv(7);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
	}
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.selector", 28);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("type is both existential and non-existential", 44);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i281);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__selector, encounter_existential_subtype);
	MR_np_call_localret_ent(exception__throw_1_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i281);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i42);
	}
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_r5, 0);
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i44);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i47);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i53);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i51);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i55);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i62);
	}
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(6) = MR_tfield(1, MR_r6, 0);
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__transform_hlds__ctgc__selector__det_select_subtype_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i63);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i66);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i64);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i72);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i70);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i74);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r6, 0);
	MR_tempr2 = MR_tfield(1, MR_r5, 0);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i82);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i80);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i90);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i88);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i94);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_1_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i92);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i86);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_np_localcall_lab(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i95);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i86);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i98);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(6);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_contains_subtype_3_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i100);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0_i278);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_3);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module14)
	MR_init_entry1(transform_hlds__ctgc__selector__selector_subsumed_by_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__selector_subsumed_by_6_0);
	MR_init_label7(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,3,4,5,2,7,9,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'selector_subsumed_by'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__selector_subsumed_by_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i2);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i4);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__normalize_selector_with_type_information_4_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i5);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__only_term_selectors_1_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i7);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__only_term_selectors_1_0,
		transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i9);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_subsumed_by_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, unit_selector);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__append_3_3);
MR_def_label(transform_hlds__ctgc__selector__selector_subsumed_by_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__ctgc__selector__selector_subsumed_by_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module15)
	MR_init_entry1(transform_hlds__ctgc__selector__type_of_node_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__type_of_node_4_0);
	MR_init_label10(transform_hlds__ctgc__selector__type_of_node_4_0,64,8,6,13,15,20,17,11,5,66)
	MR_init_label2(transform_hlds__ctgc__selector__type_of_node_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_of_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__type_of_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i5);
	}
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_tempr2;
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
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i17);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i13);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i11);
	}
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__det_index1_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i15);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tfield(0, MR_sv(5), 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i20);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i1);
	}
	MR_r1 = MR_sv(5);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i64);
	}
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.selector", 28);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.ctgc.selector.select_subtype\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("type is both existential and non-existential", 44);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__ctgc__selector__type_of_node_4_0_i66);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r2 = MR_tfield(1, MR_r4, 0);
MR_def_label(transform_hlds__ctgc__selector__type_of_node_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__ctgc__selector__type_of_node_4_0_i64);
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


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module16)
	MR_init_entry1(transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_init_label3(transform_hlds__ctgc__selector__selector_apply_widening_4_0,28,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'selector_apply_widening'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__selector_apply_widening_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_apply_widening_4_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__type_of_node_4_0,
		transform_hlds__ctgc__selector__selector_apply_widening_4_0_i6);
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__selector__selector_apply_widening_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
	}
MR_def_label(transform_hlds__ctgc__selector__selector_apply_widening_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module17)
	MR_init_entry1(transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_reset_for_type_contains_subtype_1_4'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_0
{
#line 289 "ctgc.selector.m"
mercury_var__proctable_info__transform_hlds__ctgc__selector__type_contains_subtype_1_4_0.MR_pt_tablenode.MR_integer = 0;;}
#line 2493 "transform_hlds.ctgc.selector.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module18)
	MR_init_entry1(transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'table_reset_for_type_arg_types_3'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_0
{
#line 328 "ctgc.selector.m"
mercury_var__proctable_info__transform_hlds__ctgc__selector__type_arg_types_3_0.MR_pt_tablenode.MR_integer = 0;;}
#line 2522 "transform_hlds.ctgc.selector.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module19)
	MR_init_entry1(transform_hlds__ctgc__selector__reset_tables_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__reset_tables_2_0);
	MR_init_label1(transform_hlds__ctgc__selector__reset_tables_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_tables'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__selector__reset_tables_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__ctgc__selector__table_reset_for_type_contains_subtype_1_4_2_0,
		transform_hlds__ctgc__selector__reset_tables_2_0_i2);
MR_def_label(transform_hlds__ctgc__selector__reset_tables_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(transform_hlds__ctgc__selector__table_reset_for_type_arg_types_3_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module20)
	MR_init_entry1(__Unify___transform_hlds__ctgc__selector__branch_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__selector__branch_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__selector__branch_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
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

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module21)
	MR_init_entry1(__Compare___transform_hlds__ctgc__selector__branch_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__selector__branch_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__selector__branch_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
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


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module22)
	MR_init_entry1(__Unify___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module23)
	MR_init_entry1(__Compare___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module24)
	MR_init_entry1(__Unify___transform_hlds__ctgc__selector__normalization_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__ctgc__selector__normalization_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module25)
	MR_init_entry1(__Compare___transform_hlds__ctgc__selector__normalization_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__ctgc__selector__normalization_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module26)
	MR_init_entry1(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__132__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__132__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__selector_init_from_list__132__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__ctgc__selector__IntroducedFrom__func__selector_init_from_list__132__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(check_hlds__type_util__cons_id_arg_types_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module27)
	MR_init_entry1(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0);
	MR_init_label1(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__type_arg_types__334__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred transform_hlds.ctgc.selector.IntroducedFrom__pred__type_arg_types__334__1/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(check_hlds__type_util__cons_id_arg_types_4_0,
		transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0_i1);
MR_def_label(transform_hlds__ctgc__selector__IntroducedFrom__pred__type_arg_types__334__1_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module28)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___transform_hlds__ctgc__selector__encounter_existential_subtype_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__selector_module29)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___transform_hlds__ctgc__selector__encounter_existential_subtype_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_115_101_108_101_99_116_111_114_95_95_101_110_99_111_117_110_116_101_114_95_101_120_105_115_116_101_110_116_105_97_108_95_115_117_98_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
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
	transform_hlds__ctgc__selector_module21();
	transform_hlds__ctgc__selector_module22();
	transform_hlds__ctgc__selector_module23();
	transform_hlds__ctgc__selector_module24();
	transform_hlds__ctgc__selector_module25();
	transform_hlds__ctgc__selector_module26();
	transform_hlds__ctgc__selector_module27();
	transform_hlds__ctgc__selector_module28();
	transform_hlds__ctgc__selector_module29();
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
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__selector__init_threadscope_string_table(void);
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
		mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0,
		transform_hlds__ctgc__selector__branch_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0,
		transform_hlds__ctgc__selector__encounter_existential_subtype_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0,
		transform_hlds__ctgc__selector__normalization_0_0);
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
		&mercury_data_transform_hlds__ctgc__selector__type_ctor_info_branch_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__selector__type_ctor_info_encounter_existential_subtype_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__selector__type_ctor_info_normalization_0);
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

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__selector__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
