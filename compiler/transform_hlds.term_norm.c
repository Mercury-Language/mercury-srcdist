/*
** Automatically generated from `term_norm.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_norm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.term_norm.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.term_norm.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_norm.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_norm.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.term_norm.c"
#line 44 "transform_hlds.term_norm.c"
#include "transform_hlds.term_norm.mh"

#line 47 "transform_hlds.term_norm.c"
#line 48 "transform_hlds.term_norm.c"
#ifndef TRANSFORM_HLDS__TERM_NORM_DECL_GUARD
#define TRANSFORM_HLDS__TERM_NORM_DECL_GUARD

#line 52 "transform_hlds.term_norm.c"
#line 53 "transform_hlds.term_norm.c"

#endif
#line 56 "transform_hlds.term_norm.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0,
	mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0,
	mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
MR_decl_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0, 27,33,86,18,22,21,85,8)
MR_decl_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0, 7,10,12,13,5)
MR_decl_label8(transform_hlds__term_norm__find_and_count_nonrec_args_5_0, 4,9,11,13,15,16,7,18)
MR_decl_label2(transform_hlds__term_norm__find_and_count_nonrec_args_5_0, 6,3)
MR_decl_label5(transform_hlds__term_norm__find_weights_for_cons_5_0, 2,4,7,5,3)
MR_decl_label3(transform_hlds__term_norm__find_weights_for_type_3_0, 2,6,12)
MR_decl_label5(transform_hlds__term_norm__functor_norm_filter_args_5_0, 44,3,9,12,1)
MR_decl_label5(transform_hlds__term_norm__search_weight_table_4_0, 3,5,7,8,1)
MR_decl_label3(transform_hlds__term_norm__zero_size_type_2_0, 2,17,18)
MR_decl_label8(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0, 24,81,17,16,19,21,22,80)
MR_decl_label7(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0, 7,6,9,11,12,82,5)
MR_decl_label8(fn__transform_hlds__term_norm__set_functor_info_2_0, 3,4,21,6,7,8,9,22)
MR_decl_label4(fn__transform_hlds__term_norm__set_functor_info_2_0, 11,12,13,14)
MR_decl_label4(__Unify___transform_hlds__term_norm__functor_info_0_0, 10,6,25,1)
MR_decl_label2(__Unify___transform_hlds__term_norm__weight_info_0_0, 6,1)
MR_decl_label7(__Compare___transform_hlds__term_norm__functor_info_0_0, 38,20,13,6,47,11,9)
MR_decl_label4(__Compare___transform_hlds__term_norm__weight_info_0_0, 3,2,5,21)
MR_def_extern_entry(fn__transform_hlds__term_norm__set_functor_info_2_0)
MR_decl_static(transform_hlds__term_norm__search_weight_table_4_0)
MR_decl_static(transform_hlds__term_norm__functor_norm_filter_args_5_0)
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
MR_def_extern_entry(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0)
MR_def_extern_entry(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0)

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

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__term_norm__set_functor_info_2_0_2;
static const struct mercury_type_1 mercury_common_1[2] =
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

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(transform_hlds__term_norm__find_weights_for_type_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(transform_hlds__term_norm__find_weights_for_type_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_3 mercury_common_3[3] =
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
MR_COMMON(3,0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
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
MR_COMMON(3,1),
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

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
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
	13,
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
	NULL
};

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
	13,
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
"d1;c6;"
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
"d1;c6;"
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
"d1;c5;d1;c3;"
};

MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(transform_hlds__term_norm_module0)
	MR_init_entry1(fn__transform_hlds__term_norm__set_functor_info_2_0);
	MR_init_label8(fn__transform_hlds__term_norm__set_functor_info_2_0,3,4,21,6,7,8,9,22)
	MR_init_label4(fn__transform_hlds__term_norm__set_functor_info_2_0,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_norm__set_functor_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__transform_hlds__term_norm__set_functor_info_2_0_i3) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_norm__set_functor_info_2_0_i4) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_norm__set_functor_info_2_0_i21) MR_AND
		MR_LABEL_AP(fn__transform_hlds__term_norm__set_functor_info_2_0_i22));
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i6);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i7);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_np_call_localret_ent(map__init_1_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i8);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i9);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i11);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i12);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_np_call_localret_ent(map__init_1_0,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i13);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		fn__transform_hlds__term_norm__set_functor_info_2_0_i14);
MR_def_label(fn__transform_hlds__term_norm__set_functor_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
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
	MR_init_label5(transform_hlds__term_norm__search_weight_table_4_0,3,5,7,8,1)
MR_BEGIN_CODE

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
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_norm__search_weight_table_4_0_i3);
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_norm__search_weight_table_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		transform_hlds__term_norm__search_weight_table_4_0_i5);
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__search_weight_table_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__search_weight_table_4_0_i7);
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	}
MR_def_label(transform_hlds__term_norm__search_weight_table_4_0,8)
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
	MR_init_label5(transform_hlds__term_norm__functor_norm_filter_args_5_0,44,3,9,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__functor_norm_filter_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,44)
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
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i9);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_norm__functor_norm_filter_args_5_0_i44);
	}
MR_def_label(transform_hlds__term_norm__functor_norm_filter_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
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


MR_BEGIN_MODULE(transform_hlds__term_norm_module3)
	MR_init_entry1(transform_hlds__term_norm__functor_norm_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_norm__functor_norm_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module4)
	MR_init_entry1(fn__transform_hlds__term_norm__functor_lower_bound_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__term_norm__functor_lower_bound_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module5)
	MR_init_entry1(transform_hlds__term_norm__zero_size_type_2_0);
	MR_init_label3(transform_hlds__term_norm__zero_size_type_2_0,2,17,18)
MR_BEGIN_CODE

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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i18) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i18) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__term_norm__zero_size_type_2_0_i18));
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_norm__zero_size_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;

MR_BEGIN_MODULE(transform_hlds__term_norm_module6)
	MR_init_entry1(transform_hlds__term_norm__find_weights_for_type_3_0);
	MR_init_label3(transform_hlds__term_norm__find_weights_for_type_3_0,2,6,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__find_weights_for_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		transform_hlds__term_norm__find_weights_for_type_3_0_i2);
MR_def_label(transform_hlds__term_norm__find_weights_for_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_weights_for_type_3_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		transform_hlds__term_norm__find_weights_for_type_3_0_i6);
MR_def_label(transform_hlds__term_norm__find_weights_for_type_3_0,6)
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
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__term_norm__find_weights_for_type_3_0,12)
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
MR_decl_entry(__Unify___list__list_1_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__term_norm_module7)
	MR_init_entry1(transform_hlds__term_norm__find_and_count_nonrec_args_5_0);
	MR_init_label8(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,4,9,11,13,15,16,7,18)
	MR_init_label2(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__find_and_count_nonrec_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i9);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i11);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_to_var_list_2_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i13);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(list__perm_2_0,
		transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i15);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__term_norm__find_and_count_nonrec_args_5_0_i6);
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
	}
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
MR_def_label(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(list__length_2_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module8)
	MR_init_entry1(transform_hlds__term_norm__find_weights_for_cons_5_0);
	MR_init_label5(transform_hlds__term_norm__find_weights_for_cons_5_0,2,4,7,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_norm__find_weights_for_cons_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_norm__find_weights_for_cons_5_0_i2);
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_weights_for_cons_5_0_i3);
	}
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_norm__find_and_count_nonrec_args_5_0,
		transform_hlds__term_norm__find_weights_for_cons_5_0_i4);
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_norm__find_weights_for_cons_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		transform_hlds__term_norm__find_weights_for_cons_5_0_i7);
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(transform_hlds__term_norm__find_weights_for_cons_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module9)
	MR_init_entry1(__Unify___transform_hlds__term_norm__functor_info_0_0);
	MR_init_label4(__Unify___transform_hlds__term_norm__functor_info_0_0,10,6,25,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_norm__functor_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i25);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_ctfield(2, MR_sv(1), 0);
	MR_r4 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__functor_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_ctfield(1, MR_sv(1), 0);
	MR_r4 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_norm__functor_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module10)
	MR_init_entry1(__Compare___transform_hlds__term_norm__functor_info_0_0);
	MR_init_label7(__Compare___transform_hlds__term_norm__functor_info_0_0,38,20,13,6,47,11,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_norm__functor_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i13);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i20);
	}
	MR_tempr1 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i11);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i11);
	}
	}
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i11);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i47);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i9);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__functor_info_0_0_i11);
	}
	}
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_norm__functor_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_const_mask_field(MR_sv(1), 0);
	MR_r4 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module11)
	MR_init_entry1(__Unify___transform_hlds__term_norm__weight_info_0_0);
	MR_init_label2(__Unify___transform_hlds__term_norm__weight_info_0_0,6,1)
MR_BEGIN_CODE

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
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_norm__weight_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
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
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module12)
	MR_init_entry1(__Compare___transform_hlds__term_norm__weight_info_0_0);
	MR_init_label4(__Compare___transform_hlds__term_norm__weight_info_0_0,3,2,5,21)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_norm__weight_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_norm__weight_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_norm__weight_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_norm__weight_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module13)
	MR_init_entry1(__Unify___transform_hlds__term_norm__weight_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_norm__weight_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module14)
	MR_init_entry1(__Compare___transform_hlds__term_norm__weight_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_norm__weight_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_norm_module15)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0);
	MR_init_label8(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,27,33,86,18,22,21,85,8)
	MR_init_label5(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,7,10,12,13,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i85);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i86);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i27);
	}
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i33);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 1);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__term_norm__search_weight_table_4_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i18);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__functor_norm_filter_args_5_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i22);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_norm.m", 11);
	MR_r2 = (MR_Word) MR_string_const("Unmatched lists in functor_norm_filter_args.", 44);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i8);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i13);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i10);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i5);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0_i12);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_110_111_114_109_95_95_91_52_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_norm_module16)
	MR_init_entry1(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0);
	MR_init_label8(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,24,81,17,16,19,21,22,80)
	MR_init_label7(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,7,6,9,11,12,82,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i80);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i81);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i24);
	}
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i82);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i82);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 1);
	MR_proceed();
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i17);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i16);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i22);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i19);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i5);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i21);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_norm, weight_info);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i7);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i12);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i9);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i5);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__duplicate_3_0,
		fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0_i11);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_110_111_114_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_117_110_99_116_111_114_95_108_111_119_101_114_95_98_111_117_110_100_95_95_91_52_93_95_48_4_0,5)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_norm__init(void);
void mercury__transform_hlds__term_norm__init_type_tables(void);
void mercury__transform_hlds__term_norm__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_norm__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_norm__init_complexity_procs(void);
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
		mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0,
		transform_hlds__term_norm__weight_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0,
		transform_hlds__term_norm__weight_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
		transform_hlds__term_norm__functor_info_0_0);
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
		&mercury_data_transform_hlds__term_norm__type_ctor_info_weight_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_norm__type_ctor_info_weight_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0);
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

void mercury__transform_hlds__term_norm__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_norm__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
