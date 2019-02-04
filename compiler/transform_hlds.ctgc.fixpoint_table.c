/*
** Automatically generated from `ctgc.fixpoint_table.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__fixpoint_table__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "transform_hlds.ctgc.fixpoint_table.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "transform_hlds.ctgc.fixpoint_table.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.ctgc.fixpoint_table.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.ctgc.fixpoint_table.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.ctgc.fixpoint_table.c"
#line 44 "transform_hlds.ctgc.fixpoint_table.c"
#include "transform_hlds.ctgc.fixpoint_table.mh"

#line 47 "transform_hlds.ctgc.fixpoint_table.c"
#line 48 "transform_hlds.ctgc.fixpoint_table.c"
#ifndef TRANSFORM_HLDS__CTGC__FIXPOINT_TABLE_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__FIXPOINT_TABLE_DECL_GUARD

#line 52 "transform_hlds.ctgc.fixpoint_table.c"
#line 53 "transform_hlds.ctgc.fixpoint_table.c"

#endif
#line 56 "transform_hlds.ctgc.fixpoint_table.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Word * f6;
	MR_Integer f7;
	MR_Word * f8;
	MR_Word * f9;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
	MR_Word * f7;
	MR_Word * f8;
	MR_Word * f9;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
	mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
	mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0,
	mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0;
MR_decl_label1(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0, 2)
MR_decl_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0, 3)
MR_decl_label4(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0, 3,6,5,11)
MR_decl_label3(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0, 6,2,1)
MR_decl_label3(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0, 2,5,1)
MR_decl_label2(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0, 3,1)
MR_decl_label1(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0, 1)
MR_decl_label2(fn__transform_hlds__ctgc__fixpoint_table__description_1_0, 3,2)
MR_decl_label2(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0, 4,2)
MR_decl_label2(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0, 4,6)
MR_decl_label3(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0, 4,9,1)
MR_decl_label2(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0, 6,1)
MR_decl_label6(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0, 3,2,5,9,13,38)
MR_decl_label4(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0, 3,2,5,21)
MR_def_extern_entry(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0)
MR_def_extern_entry(transform_hlds__ctgc__fixpoint_table__new_run_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__fixpoint_table__which_run_1_0)
MR_def_extern_entry(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__fixpoint_table__description_1_0)
MR_def_extern_entry(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0)
MR_def_extern_entry(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0)
MR_def_extern_entry(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0)
MR_def_extern_entry(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0)
MR_decl_static(transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_0)
MR_def_extern_entry(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0)
MR_def_extern_entry(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0)
MR_decl_static(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0)
MR_decl_static(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0)
MR_decl_static(__Unify___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0)
MR_decl_static(__Unify___transform_hlds__ctgc__fixpoint_table__is_stable_0_0)
MR_decl_static(__Compare___transform_hlds__ctgc__fixpoint_table__is_stable_0_0)
MR_decl_static(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
{
2,
1,
2
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry),
2
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
1,
MR_COMMON(1,0)
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
2,
17,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0_1,
MR_COMMON(3,0),
6,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
1,
MR_COMMON(2,0),
MR_COMMON(2,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0_1,
MR_COMMON(3,0),
6,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(1,0),
MR_CTOR0_ADDR(transform_hlds__ctgc__fixpoint_table, is_stable),
MR_CTOR0_ADDR(transform_hlds__ctgc__fixpoint_table, is_stable)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
{	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
};

const MR_ConstString mercury_data_transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[] = {
	"keys",
	"run",
	"recursive",
	"mapping"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0 = {
	"fixpoint_table",
	4,
	9,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0,
	mercury_data_transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0)),
	"transform_hlds.ctgc.fixpoint_table",
	"fixpoint_table",
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2 },
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0,
	(MR_PseudoTypeInfo) 1
};

const MR_ConstString mercury_data_transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[] = {
	"entry_stable",
	"entry_elem"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0 = {
	"entry",
	2,
	2,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0,
	mercury_data_transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0)),
	"transform_hlds.ctgc.fixpoint_table",
	"fp_entry",
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1 },
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1 },
	1,
	4,
	mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0 = {
	"is_recursive",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1 = {
	"is_not_recursive",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0,
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1,
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0
};

const MR_Integer mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0)),
	"transform_hlds.ctgc.fixpoint_table",
	"is_recursive",
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0 = {
	"is_stable",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1 = {
	"is_unstable",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[] = {
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
	&mercury_data_transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

const MR_Integer mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__ctgc__fixpoint_table__is_stable_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__ctgc__fixpoint_table__is_stable_0_0)),
	"transform_hlds.ctgc.fixpoint_table",
	"is_stable",
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0 },
	{ (void *)mercury_data_transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0 },
	2,
	4,
	mercury_data_transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.fixpoint_table",
"transform_hlds.ctgc.fixpoint_table",
"lambda_ctgc_fixpoint_table_m_132",
6,
0
},
"transform_hlds.ctgc.fixpoint_table",
"ctgc.fixpoint_table.m",
132,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.fixpoint_table",
"transform_hlds.ctgc.fixpoint_table",
"accumulate_instability",
4,
0
},
"transform_hlds.ctgc.fixpoint_table",
"ctgc.fixpoint_table.m",
149,
"d1;c3;d1;c2;"
};

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module0)
	MR_init_entry1(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0);
	MR_init_label2(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0,4,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'init_fixpoint_table'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr4;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0_i4);
MR_def_label(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0_i6);
MR_def_label(fn__transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module1)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__new_run_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'new_run'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__fixpoint_table__new_run_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module2)
	MR_init_entry1(fn__transform_hlds__ctgc__fixpoint_table__which_run_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'which_run'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__fixpoint_table__which_run_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module3)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0);
	MR_init_label3(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,6,2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'fixpoint_reached'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_r3;
	MR_r4 = MR_ctfield(0, MR_tempr4, 2);
	if (MR_INT_EQ(MR_r4,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr5;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_tempr4;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__ctgc__fixpoint_table, is_stable);
	MR_r5 = MR_ctfield(0, MR_tempr3, 3);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0_i6);
MR_def_label(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0_i1);
	}
MR_def_label(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module4)
	MR_init_entry1(fn__transform_hlds__ctgc__fixpoint_table__description_1_0);
	MR_init_label2(fn__transform_hlds__ctgc__fixpoint_table__description_1_0,3,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'description'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__fixpoint_table__description_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_0,
		fn__transform_hlds__ctgc__fixpoint_table__description_1_0_i3);
MR_def_label(fn__transform_hlds__ctgc__fixpoint_table__description_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__fixpoint_table__description_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("stable", 6);
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__ctgc__fixpoint_table__description_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unstable", 8);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module5)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0);
	MR_init_label1(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'is_recursive'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__fixpoint_table__is_recursive_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 2);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__fixpoint_table__is_recursive_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module6)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0);
	MR_init_label4(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0,3,6,5,11)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'add_to_fixpoint_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0_i3);
MR_def_label(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0_i6);
MR_def_label(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0_i11);
MR_def_label(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0_i11);
MR_def_label(transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module7)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0);
	MR_init_label3(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0,2,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_from_fixpoint_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0_i2);
MR_def_label(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_sv(2), 3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0_i5);
MR_def_label(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_0,1)
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

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module8)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0);
	MR_init_label2(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_from_fixpoint_table_final_semidet'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r4, 3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0_i3);
MR_def_label(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module9)
	MR_init_entry1(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0);
	MR_init_label2(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_from_fixpoint_table_final'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r4, 3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0_i4);
MR_def_label(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0_i2);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ctgc.fixpoint_table", 19);
	MR_r2 = (MR_Word) MR_string_const("get_from_fixpoint_table_final: key not in map.", 46);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module10)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'accumulate_instability'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module11)
	MR_init_entry1(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	MR_init_label3(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,4,9,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i9);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i4);
MR_def_label(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module12)
	MR_init_entry1(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	MR_init_label6(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,3,2,5,9,13,38)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i2);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i38);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i9);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i38);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i13);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module13)
	MR_init_entry1(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0);
	MR_init_label2(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module14)
	MR_init_entry1(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0);
	MR_init_label4(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0_i2);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,2)
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
		__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0_i5);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___transform_hlds__ctgc__fixpoint_table__fp_entry_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module15)
	MR_init_entry1(__Unify___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module16)
	MR_init_entry1(__Compare___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__fixpoint_table__is_recursive_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module17)
	MR_init_entry1(__Unify___transform_hlds__ctgc__fixpoint_table__is_stable_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__ctgc__fixpoint_table__is_stable_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module18)
	MR_init_entry1(__Compare___transform_hlds__ctgc__fixpoint_table__is_stable_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__ctgc__fixpoint_table__is_stable_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module19)
	MR_init_entry1(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0);
	MR_init_label1(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__init_fixpoint_table__132__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0_i2);
MR_def_label(transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__132__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(transform_hlds__ctgc__fixpoint_table, fp_entry);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__fixpoint_table_module20)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0);
	MR_init_label1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__accumulate_instability__[1, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_proceed();
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_99_116_103_99_95_95_102_105_120_112_111_105_110_116_95_116_97_98_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__fixpoint_table_maybe_bunch_0(void)
{
	transform_hlds__ctgc__fixpoint_table_module0();
	transform_hlds__ctgc__fixpoint_table_module1();
	transform_hlds__ctgc__fixpoint_table_module2();
	transform_hlds__ctgc__fixpoint_table_module3();
	transform_hlds__ctgc__fixpoint_table_module4();
	transform_hlds__ctgc__fixpoint_table_module5();
	transform_hlds__ctgc__fixpoint_table_module6();
	transform_hlds__ctgc__fixpoint_table_module7();
	transform_hlds__ctgc__fixpoint_table_module8();
	transform_hlds__ctgc__fixpoint_table_module9();
	transform_hlds__ctgc__fixpoint_table_module10();
	transform_hlds__ctgc__fixpoint_table_module11();
	transform_hlds__ctgc__fixpoint_table_module12();
	transform_hlds__ctgc__fixpoint_table_module13();
	transform_hlds__ctgc__fixpoint_table_module14();
	transform_hlds__ctgc__fixpoint_table_module15();
	transform_hlds__ctgc__fixpoint_table_module16();
	transform_hlds__ctgc__fixpoint_table_module17();
	transform_hlds__ctgc__fixpoint_table_module18();
	transform_hlds__ctgc__fixpoint_table_module19();
	transform_hlds__ctgc__fixpoint_table_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__fixpoint_table__init(void);
void mercury__transform_hlds__ctgc__fixpoint_table__init_type_tables(void);
void mercury__transform_hlds__ctgc__fixpoint_table__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__fixpoint_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__fixpoint_table__init_complexity_procs(void);
#endif

void mercury__transform_hlds__ctgc__fixpoint_table__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__fixpoint_table_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
		transform_hlds__ctgc__fixpoint_table__fixpoint_table_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
		transform_hlds__ctgc__fixpoint_table__fp_entry_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0,
		transform_hlds__ctgc__fixpoint_table__is_recursive_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0,
		transform_hlds__ctgc__fixpoint_table__is_stable_0_0);
	mercury__transform_hlds__ctgc__fixpoint_table__init_debugger();
}

void mercury__transform_hlds__ctgc__fixpoint_table__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0);
	}
}


void mercury__transform_hlds__ctgc__fixpoint_table__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__fixpoint_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__fixpoint_table);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__fixpoint_table__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
