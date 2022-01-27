/*
** Automatically generated from `term_norm.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__transform_hlds__term_norm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.term_norm.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.term_norm.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.term_norm.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.term_norm.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.term_norm.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.term_norm.c"
#line 49 "transform_hlds.term_norm.c"
#include "transform_hlds.term_norm.mh"

#line 52 "transform_hlds.term_norm.c"
#line 53 "transform_hlds.term_norm.c"
#ifndef TRANSFORM_HLDS__TERM_NORM_DECL_GUARD
#define TRANSFORM_HLDS__TERM_NORM_DECL_GUARD

#line 57 "transform_hlds.term_norm.c"
#line 58 "transform_hlds.term_norm.c"

#endif
#line 61 "transform_hlds.term_norm.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0,
	mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0;
MR_decl_label2(transform_hlds__term_norm__const_struct_count_cell_arities_4_0, 2,3)
MR_decl_label6(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0, 19,3,5,6,7,8)
MR_decl_label8(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0, 2,3,8,6,10,12,14,5)
MR_decl_label10(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0, 85,3,10,13,14,19,17,21,23,25)
MR_decl_label6(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0, 26,12,28,31,30,8)
MR_decl_label8(transform_hlds__term_norm__const_struct_count_cell_weights_5_0, 2,3,8,6,10,12,14,5)
MR_decl_label10(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0, 72,3,6,7,12,10,14,16,18,19)
MR_decl_label8(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0, 5,21,26,24,28,30,32,23)
MR_decl_label5(transform_hlds__term_norm__const_struct_count_cells_args_4_0, 18,3,5,6,7)
MR_decl_label10(transform_hlds__term_norm__find_and_count_nonrec_args_5_0, 57,4,9,11,13,15,16,7,18,6)
MR_decl_label5(transform_hlds__term_norm__find_weights_for_cons_5_0, 2,4,7,5,3)
MR_decl_label3(transform_hlds__term_norm__find_weights_for_type_3_0, 2,5,4)
MR_decl_label10(transform_hlds__term_norm__functor_norm_9_0, 125,10,11,3,128,20,127,27,25,31)
MR_decl_label8(transform_hlds__term_norm__functor_norm_9_0, 24,37,41,40,35,47,48,45)
MR_decl_label5(transform_hlds__term_norm__functor_norm_filter_args_5_0, 60,3,9,12,1)
MR_decl_label5(transform_hlds__term_norm__search_weight_table_4_0, 4,6,8,10,1)
MR_decl_label10(transform_hlds__term_norm__zero_size_type_2_0, 2,4,5,6,48,7,8,9,10,11)
MR_decl_label10(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0, 3,105,17,15,19,21,23,13,28,26)
MR_decl_label5(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0, 30,32,34,103,25)
MR_decl_label10(fn__transform_hlds__term_norm__set_functor_info_2_0, 4,5,6,8,3,10,12,13,14,16)
MR_decl_label1(fn__transform_hlds__term_norm__set_functor_info_2_0, 11)
MR_decl_label5(__Unify___transform_hlds__term_norm__functor_info_0_0, 5,6,22,7,1)
MR_decl_label2(__Unify___transform_hlds__term_norm__weight_info_0_0, 6,1)
MR_decl_label10(__Compare___transform_hlds__term_norm__functor_info_0_0, 7,8,76,5,12,50,10,17,18,55)
MR_decl_label3(__Compare___transform_hlds__term_norm__functor_info_0_0, 15,22,23)
MR_decl_label4(__Compare___transform_hlds__term_norm__weight_info_0_0, 3,2,5,27)
MR_def_extern_entry(fn__transform_hlds__term_norm__set_functor_info_2_0)
MR_decl_static(transform_hlds__term_norm__search_weight_table_4_0)
MR_decl_static(transform_hlds__term_norm__functor_norm_filter_args_5_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cells_args_4_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cell_arities_4_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cell_weights_5_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0)
MR_decl_static(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0)
MR_def_extern_entry(transform_hlds__term_norm__functor_norm_9_0)
MR_def_extern_entry(fn__transform_hlds__term_norm__functor_lower_bound_4_0)
MR_def_extern_entry(transform_hlds__term_norm__zero_size_type_2_0)
MR_decl_static(transform_hlds__term_norm__find_weights_for_type_3_0)
MR_decl_static(transform_hlds__term_norm__find_and_count_nonrec_args_5_0)
MR_decl_static(transform_hlds__term_norm__find_weights_for_cons_5_0)
MR_def_extern_entry(__Unify___transform_hlds__term_norm__functor_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_norm__functor_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_norm__weight_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_norm__weight_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_norm__weight_table_0_0)
MR_decl_static(__Compare___transform_hlds__term_norm__weight_table_0_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,4),
MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_1 mercury_common_1[5] =
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
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
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
MR_COMMON(1,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,3),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__term_norm__find_weights_for_type_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__term_norm__find_weights_for_type_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_norm__find_weights_for_type_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_norm__find_weights_for_type_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_0 = {
	"simple",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_1 = {
	"total",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_norm__field_types_functor_info_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_2 = {
	"use_map",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_norm__field_types_functor_info_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_norm__field_types_functor_info_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_3 = {
	"use_map_and_args",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_norm__field_types_functor_info_0_3,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_norm__du_stag_ordered_functor_info_0_0[] = {
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_norm__du_stag_ordered_functor_info_0_1[] = {
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_norm__du_stag_ordered_functor_info_0_2[] = {
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_3

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_norm__du_ptag_ordered_functor_info_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_transform_hlds__term_norm__du_stag_ordered_functor_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_norm__du_stag_ordered_functor_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_norm__du_stag_ordered_functor_info_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_norm__du_name_ordered_functor_info_0[] = {
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_0,
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_1,
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_2,
	&mercury_data_transform_hlds__term_norm__du_functor_desc_functor_info_0_3
};

const MR_Integer mercury_data_transform_hlds__term_norm__functor_number_map_functor_info_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_norm__functor_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_norm__functor_info_0_0)),
	"transform_hlds.term_norm",
	"functor_info",
	{ (void *)mercury_data_transform_hlds__term_norm__du_name_ordered_functor_info_0 },
	{ (void *)mercury_data_transform_hlds__term_norm__du_ptag_ordered_functor_info_0 },
	4,
	4,
	mercury_data_transform_hlds__term_norm__functor_number_map_functor_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_norm__field_types_weight_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_norm__du_functor_desc_weight_info_0_0 = {
	"weight",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_norm__field_types_weight_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_norm__du_stag_ordered_weight_info_0_0[] = {
	&mercury_data_transform_hlds__term_norm__du_functor_desc_weight_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_norm__du_ptag_ordered_weight_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_norm__du_stag_ordered_weight_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_norm__du_name_ordered_weight_info_0[] = {
	&mercury_data_transform_hlds__term_norm__du_functor_desc_weight_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_norm__functor_number_map_weight_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_norm__weight_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_norm__weight_info_0_0)),
	"transform_hlds.term_norm",
	"weight_info",
	{ (void *)mercury_data_transform_hlds__term_norm__du_name_ordered_weight_info_0 },
	{ (void *)mercury_data_transform_hlds__term_norm__du_ptag_ordered_weight_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_norm__functor_number_map_weight_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_norm__weight_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_norm__weight_table_0_0)),
	"transform_hlds.term_norm",
	"weight_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_data__type_ctor_info_cons_id_0transform_hlds__term_norm__type_ctor_info_weight_info_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_norm__find_weights_for_type_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_norm",
"transform_hlds.term_norm",
"find_weights_for_cons",
5,
0
},
"transform_hlds.term_norm",
"term_norm.m",
152,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_norm",
"transform_hlds.term_norm",
"find_weights_for_type",
3,
0
},
"transform_hlds.term_norm",
"term_norm.m",
142,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_norm",
"transform_hlds.term_norm",
"find_weights_for_type",
3,
0
},
"transform_hlds.term_norm",
"term_norm.m",
142,
"7"
};


MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__get_all_type_ctor_defns_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module0)
	MR_init_entry1(fn__transform_hlds__term_norm__set_functor_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_norm__set_functor_info_2_0);
	MR_init_label10(fn__transform_hlds__term_norm__set_functor_info_2_0,4,5,6,8,3,10,12,13,14,16)
	MR_init_label1(fn__transform_hlds__term_norm__set_functor_info_2_0,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_functor_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_norm__set_functor_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__transform_hlds__term_norm__set_functor_info_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i4);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_all_type_ctor_defns_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i5);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_np_call_localret_ent(map__init_1_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i6);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i8);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__transform_hlds__term_norm__set_functor_info_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__transform_hlds__term_norm__set_functor_info_2_0_i11);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i12);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_all_type_ctor_defns_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i13);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_np_call_localret_ent(map__init_1_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i14);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i16);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module1)
	MR_init_entry1(transform_hlds__term_norm__search_weight_table_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__search_weight_table_4_0);
	MR_init_label5(transform_hlds__term_norm__search_weight_table_4_0,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_weight_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__search_weight_table_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__search_weight_table_4_0_i4);
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_norm__search_weight_table_4_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__search_weight_table_4_0_i6);
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__search_weight_table_4_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__search_weight_table_4_0_i8);
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,1)
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


MR_BEGIN_MODULE(transform_hlds__term_norm_module2)
	MR_init_entry1(transform_hlds__term_norm__functor_norm_filter_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__functor_norm_filter_args_5_0);
	MR_init_label5(transform_hlds__term_norm__functor_norm_filter_args_5_0,60,3,9,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_norm_filter_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__functor_norm_filter_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i60);
	}
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__term_norm__functor_norm_filter_args_5_0,
		transform_hlds__term_norm__functor_norm_filter_args_5_0_i12);
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__const_struct__lookup_const_struct_num_3_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module3)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cells_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cells_args_4_0);
	MR_init_label5(transform_hlds__term_norm__const_struct_count_cells_args_4_0,18,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cells_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cells_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_norm__const_struct_count_cells_args_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cells_args_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_norm__const_struct_count_cells_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cells_args_4_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cells_args_4_0_i18);
MR_def_label(transform_hlds__term_norm__const_struct_count_cells_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cells_args_4_0_i6);
MR_def_label(transform_hlds__term_norm__const_struct_count_cells_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(transform_hlds__term_norm__const_struct_count_cells_args_4_0,
		transform_hlds__term_norm__const_struct_count_cells_args_4_0_i7);
MR_def_label(transform_hlds__term_norm__const_struct_count_cells_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cells_args_4_0_i18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__const_struct__type_ctor_info_const_struct_arg_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module4)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cell_arities_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cell_arities_4_0);
	MR_init_label2(transform_hlds__term_norm__const_struct_count_cell_arities_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cell_arities'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cell_arities_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cell_arities_4_0_i2);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__const_struct, const_struct_arg);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__term_norm__const_struct_count_cell_arities_4_0_i3);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module5)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0);
	MR_init_label6(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,19,3,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cell_arities_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i19);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i6);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__const_struct, const_struct_arg);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__length_1_0,
		transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i7);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	}
	MR_np_localcall_lab(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,
		transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i8);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_arities_args_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module6)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cell_weights_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cell_weights_5_0);
	MR_init_label8(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,2,3,8,6,10,12,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cell_weights'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cell_weights_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i2);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i3);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i8);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i14);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i10);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i5);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(5), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_5_0_i12);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tfield(0, MR_r4, 0));
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module7)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0);
	MR_init_label10(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,72,3,6,7,12,10,14,16,18,19)
	MR_init_label8(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,5,21,26,24,28,30,32,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cell_weights_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i6);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i7);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i12);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i18);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i14);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i23);
	}
	MR_sv(6) = MR_tfield(0, MR_sv(6), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i16);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tfield(0, MR_r4, 0));
	MR_np_localcall_lab(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i19);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i72);
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i21);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i26);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i32);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i28);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i23);
	}
	MR_sv(6) = MR_tfield(0, MR_sv(6), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i30);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tfield(0, MR_r4, 0));
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i72);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_weights_args_5_0_i72);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module8)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0);
	MR_init_label8(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,2,3,8,6,10,12,14,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cell_filtered_weights'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i2);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i3);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i8);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i14);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i10);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i5);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(5), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0_i12);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(0, MR_r4, 1);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_tfield(0, MR_tempr1, 0));
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0);
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module9)
	MR_init_entry1(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0);
	MR_init_label10(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,85,3,10,13,14,19,17,21,23,25)
	MR_init_label6(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,26,12,28,31,30,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_struct_count_cell_filtered_weights_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i8);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i10);
	}
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i85);
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i13);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i14);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i19);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r5;
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i25);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i21);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i30);
	}
	MR_sv(6) = MR_tfield(0, MR_sv(6), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i23);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(0, MR_r4, 1);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tfield(0, MR_tempr1, 0));
	}
	MR_np_localcall_lab(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i26);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i85);
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i28);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__search_weight_table_4_0,
		transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i31);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i30);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_tfield(0, MR_tempr1, 0));
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i85);
	}
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0_i85);
MR_def_label(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_norm", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_norm.const_struct_count_cell_filtered_weights_args\'/6", 84);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_const_struct_db_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module10)
	MR_init_entry1(transform_hlds__term_norm__functor_norm_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__functor_norm_9_0);
	MR_init_label10(transform_hlds__term_norm__functor_norm_9_0,125,10,11,3,128,20,127,27,25,31)
	MR_init_label8(transform_hlds__term_norm__functor_norm_9_0,24,37,41,40,35,47,48,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_norm'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_norm__functor_norm_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i3);
	}
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i125);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 2);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i125);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r4,3,14)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i45);
	}
	MR_sv(5) = MR_tfield(3, MR_r4, 1);
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_const_struct_db_2_0,
		transform_hlds__term_norm__functor_norm_9_0_i10);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__const_struct__lookup_const_struct_num_3_0,
		transform_hlds__term_norm__functor_norm_9_0_i11);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__const_struct_count_cells_args_4_0,
		transform_hlds__term_norm__functor_norm_9_0_i48);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i127);
	}
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i128);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r4,3,14)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i45);
	}
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_const_struct_db_2_0,
		transform_hlds__term_norm__functor_norm_9_0_i20);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__term_norm__const_struct_count_cell_arities_4_0,
		transform_hlds__term_norm__functor_norm_9_0_i48);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__search_weight_table_4_0,
		transform_hlds__term_norm__functor_norm_9_0_i27);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i25);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	if (MR_RTAGS_TESTR(MR_tempr1,3,14)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i45);
	}
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_const_struct_db_2_0,
		transform_hlds__term_norm__functor_norm_9_0_i31);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__term_norm__const_struct_count_cell_weights_5_0,
		transform_hlds__term_norm__functor_norm_9_0_i48);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__search_weight_table_4_0,
		transform_hlds__term_norm__functor_norm_9_0_i37);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i35);
	}
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_norm__functor_norm_filter_args_5_0,
		transform_hlds__term_norm__functor_norm_9_0_i41);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_norm", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_norm.functor_norm\'/9", 51);
	MR_r3 = (MR_Word) MR_string_const("unmatched lists", 15);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_tempr2 = MR_sv(2);
	if (MR_RTAGS_TESTR(MR_tempr1,3,14)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_9_0_i45);
	}
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_const_struct_db_2_0,
		transform_hlds__term_norm__functor_norm_9_0_i47);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(transform_hlds__term_norm__const_struct_count_cell_filtered_weights_5_0,
		transform_hlds__term_norm__functor_norm_9_0_i48);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_norm__functor_norm_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module11)
	MR_init_entry1(fn__transform_hlds__term_norm__functor_lower_bound_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__term_norm__functor_lower_bound_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_lower_bound'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_norm__functor_lower_bound_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module12)
	MR_init_entry1(transform_hlds__term_norm__zero_size_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__zero_size_type_2_0);
	MR_init_label10(transform_hlds__term_norm__zero_size_type_2_0,2,4,5,6,48,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_size_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_norm__zero_size_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		transform_hlds__term_norm__zero_size_type_2_0_i2);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i4);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i5);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i6);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i7);
	}
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i8);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i9);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i10);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i11);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__zero_size_type_2_0_i48);
	}
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;

MR_BEGIN_MODULE(transform_hlds__term_norm_module13)
	MR_init_entry1(transform_hlds__term_norm__find_weights_for_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__find_weights_for_type_3_0);
	MR_init_label3(transform_hlds__term_norm__find_weights_for_type_3_0,2,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_weights_for_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__find_weights_for_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		transform_hlds__term_norm__find_weights_for_type_3_0_i2);
MR_def_label(transform_hlds__term_norm__find_weights_for_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_weights_for_type_3_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		transform_hlds__term_norm__find_weights_for_type_3_0_i5);
MR_def_label(transform_hlds__term_norm__find_weights_for_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_norm__find_weights_for_cons_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(transform_hlds__term_norm__find_weights_for_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(parse_tree__prog_type__type_list_to_var_list_2_0);
MR_decl_entry(list__perm_2_0);
MR_decl_entry(builtin__unify_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__term_norm_module14)
	MR_init_entry1(transform_hlds__term_norm__find_and_count_nonrec_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__find_and_count_nonrec_args_5_0);
	MR_init_label10(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,57,4,9,11,13,15,16,7,18,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_and_count_nonrec_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__find_and_count_nonrec_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i57);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i4);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i9);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i11);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_to_var_list_2_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i13);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__perm_2_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i15);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i16);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i18);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i6);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module15)
	MR_init_entry1(transform_hlds__term_norm__find_weights_for_cons_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_norm__find_weights_for_cons_5_0);
	MR_init_label5(transform_hlds__term_norm__find_weights_for_cons_5_0,2,4,7,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_weights_for_cons'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__find_weights_for_cons_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_norm__find_weights_for_cons_5_0_i2);
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_weights_for_cons_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,
		transform_hlds__term_norm__find_weights_for_cons_5_0_i4);
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_weights_for_cons_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__find_weights_for_cons_5_0_i7);
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(4);
	MR_tempr4 = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(4);
	MR_tempr4 = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module16)
	MR_init_entry1(__Unify___transform_hlds__term_norm__functor_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_norm__functor_info_0_0);
	MR_init_label5(__Unify___transform_hlds__term_norm__functor_info_0_0,5,6,22,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_norm__functor_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i22);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module17)
	MR_init_entry1(__Compare___transform_hlds__term_norm__functor_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_norm__functor_info_0_0);
	MR_init_label10(__Compare___transform_hlds__term_norm__functor_info_0_0,7,8,76,5,12,50,10,17,18,55)
	MR_init_label3(__Compare___transform_hlds__term_norm__functor_info_0_0,15,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_norm__functor_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i76);
	}
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i76);
	}
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module18)
	MR_init_entry1(__Unify___transform_hlds__term_norm__weight_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_norm__weight_info_0_0);
	MR_init_label2(__Unify___transform_hlds__term_norm__weight_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_norm__weight_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__weight_info_0_0_i6);
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
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__weight_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___transform_hlds__term_norm__weight_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_norm__weight_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module19)
	MR_init_entry1(__Compare___transform_hlds__term_norm__weight_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_norm__weight_info_0_0);
	MR_init_label4(__Compare___transform_hlds__term_norm__weight_info_0_0,3,2,5,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_norm__weight_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__weight_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_norm__weight_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_norm__weight_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_norm__weight_info_0_0,2)
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
		__Compare___transform_hlds__term_norm__weight_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_norm__weight_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__weight_info_0_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__term_norm__weight_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module20)
	MR_init_entry1(__Unify___transform_hlds__term_norm__weight_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_norm__weight_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_norm__weight_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module21)
	MR_init_entry1(__Compare___transform_hlds__term_norm__weight_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_norm__weight_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_norm__weight_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module22)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0);
	MR_init_label10(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,3,105,17,15,19,21,23,13,28,26)
	MR_init_label5(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,30,32,34,103,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__functor_lower_bound__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i3);
	}
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i103);
	}
	MR_r2 = MR_tfield(3, MR_r3, 2);
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i103);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i105);
	}
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i103);
	}
	MR_r1 = MR_tfield(3, MR_r3, 2);
	MR_proceed();
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i17);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i15);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i23);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i25);
	}
	MR_sv(1) = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i21);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i28);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i26);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i30);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i25);
	}
	MR_sv(1) = MR_tfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0_i32);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_49_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_norm_maybe_bunch_0(void)
{
	transform_hlds__term_norm_module0();
	transform_hlds__term_norm_module1();
	transform_hlds__term_norm_module2();
	transform_hlds__term_norm_module3();
	transform_hlds__term_norm_module4();
	transform_hlds__term_norm_module5();
	transform_hlds__term_norm_module6();
	transform_hlds__term_norm_module7();
	transform_hlds__term_norm_module8();
	transform_hlds__term_norm_module9();
	transform_hlds__term_norm_module10();
	transform_hlds__term_norm_module11();
	transform_hlds__term_norm_module12();
	transform_hlds__term_norm_module13();
	transform_hlds__term_norm_module14();
	transform_hlds__term_norm_module15();
	transform_hlds__term_norm_module16();
	transform_hlds__term_norm_module17();
	transform_hlds__term_norm_module18();
	transform_hlds__term_norm_module19();
	transform_hlds__term_norm_module20();
	transform_hlds__term_norm_module21();
	transform_hlds__term_norm_module22();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_norm__init(void);
void mercury__transform_hlds__term_norm__init_type_tables(void);
void mercury__transform_hlds__term_norm__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_norm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_norm__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__term_norm__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__term_norm__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_norm_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
		transform_hlds__term_norm__functor_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0,
		transform_hlds__term_norm__weight_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0,
		transform_hlds__term_norm__weight_table_0_0);
	mercury__transform_hlds__term_norm__init_debugger();
}

void mercury__transform_hlds__term_norm__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0);
	}
}


void mercury__transform_hlds__term_norm__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_norm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__transform_hlds__term_norm);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_norm__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__term_norm__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
