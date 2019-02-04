/*
** Automatically generated from `version_hash_table.m'
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
INIT mercury__version_hash_table__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 126 "array.int"
#include "array.mh"

#line 27 "version_hash_table.c"
#line 33 "version_array.int"
#include "version_array.mh"

#line 31 "version_hash_table.c"
#line 134 "io.int2"
#include "io.mh"

#line 35 "version_hash_table.c"
#line 142 "io.int2"
#include "string.mh"

#line 39 "version_hash_table.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 43 "version_hash_table.c"
#line 28 "time.int2"
#include "time.mh"

#line 47 "version_hash_table.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "version_hash_table.c"
#line 148 "io.opt"
#include "dir.mh"

#line 55 "version_hash_table.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 59 "version_hash_table.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "version_hash_table.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 67 "version_hash_table.c"
#line 4 "char.opt"
#include "char.mh"

#line 71 "version_hash_table.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 75 "version_hash_table.c"
#line 23 "store.opt"
#include "store.mh"

#line 79 "version_hash_table.c"
#line 3 "float.opt"
#include "float.mh"

#line 83 "version_hash_table.c"
#line 3 "math.opt"
#include "math.mh"

#line 87 "version_hash_table.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "version_hash_table.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 95 "version_hash_table.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 99 "version_hash_table.c"
#line 100 "version_hash_table.c"
#include "version_hash_table.mh"

#line 103 "version_hash_table.c"
#line 104 "version_hash_table.c"
#ifndef VERSION_HASH_TABLE_DECL_GUARD
#define VERSION_HASH_TABLE_DECL_GUARD

#line 108 "version_hash_table.c"
#line 109 "version_hash_table.c"

#endif
#line 112 "version_hash_table.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
	MR_Word * f7;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
	mercury_data_version_hash_table__type_ctor_info_hash_pred_1,
	mercury_data_version_hash_table__type_ctor_info_hash_func_1,
	mercury_data_version_hash_table__type_ctor_info_buckets_2,
	mercury_data_version_hash_table__type_ctor_info_bucket_2;
MR_decl_label4(version_hash_table__list__foldl2__ho6_6_0, 12,4,5,3)
MR_decl_label1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label1(version_hash_table__string__foldl_substring_2__ho15_6_0, 2)
MR_decl_label3(version_hash_table__dynamic_cast_to_array_2_0, 3,5,1)
MR_decl_label8(version_hash_table__generic_double_hash_3_0, 60,3,2,6,5,10,9,13)
MR_decl_label8(version_hash_table__generic_double_hash_3_0, 12,17,16,22,24,21,25,26)
MR_decl_label1(version_hash_table__generic_double_hash_3_0, 27)
MR_decl_label3(version_hash_table__string_double_hash_3_0, 2,3,5)
MR_decl_label5(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0, 12,2,3,4,5)
MR_decl_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0, 11,3,2)
MR_decl_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0, 11,3,2)
MR_decl_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0, 11,3,2)
MR_decl_label1(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0, 2)
MR_decl_label4(fn__version_hash_table__apply_k_v_4_0, 5,9,10,2)
MR_decl_label3(fn__version_hash_table__cons_k_v_3_0, 5,9,2)
MR_decl_label3(fn__version_hash_table__delete_2_0, 2,4,8)
MR_decl_label7(fn__version_hash_table__det_insert_3_0, 2,4,8,12,11,14,10)
MR_decl_label6(fn__version_hash_table__det_update_3_0, 2,4,8,10,13,17)
MR_decl_label2(fn__version_hash_table__elem_2_0, 4,2)
MR_decl_label2(fn__version_hash_table__find_slot_2_0, 2,3)
MR_decl_label7(fn__version_hash_table__find_slot_2_4_0, 36,3,7,12,10,14,39)
MR_decl_label2(fn__version_hash_table__lookup_2_0, 4,2)
MR_decl_label6(fn__version_hash_table__new_3_0, 2,39,10,9,8,12)
MR_decl_label4(fn__version_hash_table__reinsert_k_v_3_0, 5,9,10,2)
MR_decl_label5(fn__version_hash_table__search_2_0, 2,4,8,10,1)
MR_decl_label8(fn__version_hash_table__set_3_0, 58,2,4,8,12,11,15,19)
MR_decl_label3(fn__version_hash_table__set_3_0, 10,22,26)
MR_decl_label4(__Unify___version_hash_table__bucket_2_0, 14,5,7,1)
MR_decl_label3(__Unify___version_hash_table__version_hash_table_2_0, 4,8,1)
MR_decl_label6(__Compare___version_hash_table__bucket_2_0, 24,7,5,9,11,16)
MR_decl_label8(__Compare___version_hash_table__version_hash_table_2_0, 3,2,6,7,9,14,15,17)
MR_decl_label5(__Compare___version_hash_table__version_hash_table_2_0, 22,23,25,29,75)
MR_def_extern_entry(fn__version_hash_table__new_3_0)
MR_def_extern_entry(fn__version_hash_table__new_default_1_0)
MR_def_extern_entry(version_hash_table__int_double_hash_3_0)
MR_def_extern_entry(version_hash_table__string_double_hash_3_0)
MR_def_extern_entry(version_hash_table__char_double_hash_3_0)
MR_def_extern_entry(version_hash_table__float_double_hash_3_0)
MR_decl_static(version_hash_table__double_munge_6_0)
MR_decl_static(version_hash_table__dynamic_cast_to_array_2_0)
MR_def_extern_entry(version_hash_table__generic_double_hash_3_0)
MR_def_extern_entry(fn__version_hash_table__num_buckets_1_0)
MR_def_extern_entry(fn__version_hash_table__num_occupants_1_0)
MR_decl_static(fn__version_hash_table__find_slot_2_4_0)
MR_def_extern_entry(fn__version_hash_table__find_slot_2_0)
MR_decl_static(fn__version_hash_table__expand_1_0)
MR_def_extern_entry(fn__version_hash_table__set_3_0)
MR_def_extern_entry(version_hash_table__set_4_0)
MR_def_extern_entry(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(fn__version_hash_table__det_insert_3_0)
MR_def_extern_entry(version_hash_table__det_insert_4_0)
MR_def_extern_entry(fn__version_hash_table__det_update_3_0)
MR_def_extern_entry(version_hash_table__det_update_4_0)
MR_def_extern_entry(fn__version_hash_table__delete_2_0)
MR_def_extern_entry(version_hash_table__delete_3_0)
MR_def_extern_entry(fn__version_hash_table__search_2_0)
MR_def_extern_entry(fn__version_hash_table__lookup_2_0)
MR_def_extern_entry(fn__version_hash_table__elem_2_0)
MR_def_extern_entry(version_hash_table__search_3_0)
MR_def_extern_entry(fn__version_hash_table__to_assoc_list_1_0)
MR_def_extern_entry(fn__version_hash_table__fold_3_0)
MR_decl_static(fn__version_hash_table__cons_k_v_3_0)
MR_decl_static(fn__version_hash_table__reinsert_k_v_3_0)
MR_def_extern_entry(fn__version_hash_table__apply_k_v_4_0)
MR_def_extern_entry(__Unify___version_hash_table__bucket_2_0)
MR_def_extern_entry(__Compare___version_hash_table__bucket_2_0)
MR_def_extern_entry(__Unify___version_hash_table__buckets_2_0)
MR_def_extern_entry(__Compare___version_hash_table__buckets_2_0)
MR_def_extern_entry(__Unify___version_hash_table__hash_func_1_0)
MR_def_extern_entry(__Compare___version_hash_table__hash_func_1_0)
MR_def_extern_entry(__Unify___version_hash_table__hash_pred_1_0)
MR_def_extern_entry(__Compare___version_hash_table__hash_pred_1_0)
MR_def_extern_entry(__Unify___version_hash_table__version_hash_table_2_0)
MR_def_extern_entry(__Compare___version_hash_table__version_hash_table_2_0)
MR_decl_static(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0)
MR_decl_static(version_hash_table__list__foldl2__ho6_6_0)
MR_decl_static(version_hash_table__string__foldl_substring_2__ho15_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_52_44_32_53_93_95_48_3_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
1,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__version_hash_table__new_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__version_hash_table__new_3_0_1,
MR_COMMON(2,0),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
1,
MR_COMMON(1,0)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
0,
0
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_tuple_0,
	2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_func_2__pseudo_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_version_hash_table__pti_bucket_2__pseudo_1__pseudo_2 = {
	&mercury_data_version_hash_table__type_ctor_info_bucket_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_version_array__pti_version_array_1__pseudo_version_hash_table__pti_bucket_2__pseudo_1__pseudo_2 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_PseudoTypeInfo) &mercury_data_version_hash_table__pti_bucket_2__pseudo_1__pseudo_2
}};

const MR_PseudoTypeInfo mercury_data_version_hash_table__field_types_version_hash_table_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_func_2__pseudo_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_version_array__pti_version_array_1__pseudo_version_hash_table__pti_bucket_2__pseudo_1__pseudo_2
};

const MR_ConstString mercury_data_version_hash_table__field_names_version_hash_table_2_0[] = {
	"num_buckets",
	"num_occupants",
	"max_occupants",
	"hash_func",
	"buckets"
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0 = {
	"ht",
	5,
	24,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_version_hash_table__field_types_version_hash_table_2_0,
	mercury_data_version_hash_table__field_names_version_hash_table_2_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_stag_ordered_version_hash_table_2_0[] = {
	&mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0

};

const MR_DuPtagLayout mercury_data_version_hash_table__du_ptag_ordered_version_hash_table_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_version_hash_table__du_stag_ordered_version_hash_table_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_name_ordered_version_hash_table_2[] = {
	&mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0
};

const MR_Integer mercury_data_version_hash_table__functor_number_map_version_hash_table_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_version_hash_table_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__version_hash_table_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__version_hash_table_2_0)),
	"version_hash_table",
	"version_hash_table",
	{ (void *)mercury_data_version_hash_table__du_name_ordered_version_hash_table_2 },
	{ (void *)mercury_data_version_hash_table__du_ptag_ordered_version_hash_table_2 },
	1,
	4,
	mercury_data_version_hash_table__functor_number_map_version_hash_table_2
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_pred_3__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_hash_pred_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__hash_pred_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__hash_pred_1_0)),
	"version_hash_table",
	"hash_pred",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_3__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_hash_func_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__hash_func_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__hash_func_1_0)),
	"version_hash_table",
	"hash_func",
	{ 0 },
	{ (void *)&mercury_data___vpti_func_2__pseudo_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_buckets_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__buckets_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__buckets_2_0)),
	"version_hash_table",
	"buckets",
	{ 0 },
	{ (void *)&mercury_data_version_array__pti_version_array_1__pseudo_version_hash_table__pti_bucket_2__pseudo_1__pseudo_2 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_bucket_2_0 = {
	"empty",
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

const MR_PseudoTypeInfo mercury_data_version_hash_table__field_types_bucket_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_bucket_2_1 = {
	"full",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_version_hash_table__field_types_bucket_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_stag_ordered_bucket_2_0[] = {
	&mercury_data_version_hash_table__du_functor_desc_bucket_2_0

};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_stag_ordered_bucket_2_1[] = {
	&mercury_data_version_hash_table__du_functor_desc_bucket_2_1

};

const MR_DuPtagLayout mercury_data_version_hash_table__du_ptag_ordered_bucket_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_version_hash_table__du_stag_ordered_bucket_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_version_hash_table__du_stag_ordered_bucket_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_version_hash_table__du_name_ordered_bucket_2[] = {
	&mercury_data_version_hash_table__du_functor_desc_bucket_2_0,
	&mercury_data_version_hash_table__du_functor_desc_bucket_2_1
};

const MR_Integer mercury_data_version_hash_table__functor_number_map_bucket_2[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_version_hash_table__type_ctor_info_bucket_2 = {
	2,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_hash_table__bucket_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_hash_table__bucket_2_0)),
	"version_hash_table",
	"bucket",
	{ (void *)mercury_data_version_hash_table__du_name_ordered_bucket_2 },
	{ (void *)mercury_data_version_hash_table__du_ptag_ordered_bucket_2 },
	2,
	4,
	mercury_data_version_hash_table__functor_number_map_bucket_2
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__version_hash_table__new_3_0_1 = {
{
MR_FUNCTION,
"version_hash_table",
"version_hash_table",
"lambda_version_hash_table_m_212",
4,
0
},
"version_hash_table",
"version_hash_table.m",
212,
"d1;c5;e;e;e;c6;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(version_hash_table_module0)
	MR_init_entry1(fn__version_hash_table__new_3_0);
	MR_init_label6(fn__version_hash_table__new_3_0,2,39,10,9,8,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r4,1)) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: N =< 1", 30);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_hash_table__new_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__new_3_0
{
#line 142 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 582 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: N >= int.bits_per_int", 45);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(fn__version_hash_table__new_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_word_to_float(MR_r5) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(fn__version_hash_table__new_3_0_i9);
MR_def_label(fn__version_hash_table__new_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Float) 1.0000000000000000 > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
MR_def_label(fn__version_hash_table__new_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: MaxOccupancy not in (0.0, 1.0)", 54);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_hash_table__new_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__version_hash_table__new_3_0_i12);
MR_def_label(fn__version_hash_table__new_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__new_3_0
	IntVal = MR_r1;
{
#line 60 "float.opt"

	FloatVal = IntVal;
;}
#line 644 "version_hash_table.c"
	MR_tempr1 = MR_float_to_word(FloatVal);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_float_to_word((MR_word_to_float(MR_tempr1) * MR_word_to_float(MR_sv(3))));
	{
	MR_Float	X;
	MR_Integer	Ceil;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__new_3_0
	X = MR_word_to_float(MR_tempr2);
{
#line 63 "float.opt"

	Ceil = (MR_Integer) ceil(X);
;}
#line 659 "version_hash_table.c"
	MR_tempr1 = Ceil;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(1);
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__new_3_0
	N = MR_r1;
	X = (MR_Word) MR_tbmkword(0, 0);
	MR_OBTAIN_GLOBAL_LOCK("new");
{
#line 64 "version_array.opt"

    MR_Integer  i;
    
    VA = MR_GC_NEW(struct ML_va);
    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 692 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr3);
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr4, 0) = MR_r1;
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 4) = MR_tempr3;
	MR_r1 = MR_tempr4;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt90000000000000002 = 0.90000000000000002;

MR_BEGIN_MODULE(version_hash_table_module1)
	MR_init_entry1(fn__version_hash_table__new_default_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__new_default_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_np_tailcall_ent(fn__version_hash_table__new_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module2)
	MR_init_entry1(version_hash_table__int_double_hash_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__int_double_hash_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_r1);
	MR_r2 = ((MR_Integer) MR_tempr1 ^ ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr1));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__hash_2_0);

MR_BEGIN_MODULE(version_hash_table_module3)
	MR_init_entry1(version_hash_table__string_double_hash_3_0);
	MR_init_label3(version_hash_table__string_double_hash_3_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__string_double_hash_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__hash_2_0,
		version_hash_table__string_double_hash_3_0_i2);
MR_def_label(version_hash_table__string_double_hash_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__version_hash_table__string_double_hash_3_0
	Str = (MR_String) MR_sv(1);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 787 "version_hash_table.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__version_hash_table__string_double_hash_3_0
	Str = (MR_String) MR_sv(1);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 803 "version_hash_table.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 0);
	MR_r2 = (MR_Integer) 0;
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_hash_table__string_double_hash_3_0_i3);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(version_hash_table__string__foldl_substring_2__ho15_6_0,
		version_hash_table__string_double_hash_3_0_i5);
MR_def_label(version_hash_table__string_double_hash_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r6;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(version_hash_table__string__foldl_substring_2__ho15_6_0,
		version_hash_table__string_double_hash_3_0_i5);
MR_def_label(version_hash_table__string_double_hash_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module4)
	MR_init_entry1(version_hash_table__char_double_hash_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__char_double_hash_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__version_hash_table__char_double_hash_3_0
	Character = MR_r1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 869 "version_hash_table.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_tempr1);
	MR_r2 = ((MR_Integer) MR_tempr1 ^ ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr1));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module5)
	MR_init_entry1(version_hash_table__float_double_hash_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__float_double_hash_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__float_double_hash_3_0
	F = MR_word_to_float(MR_r1);
{
#line 91 "float.opt"

	H = MR_hash_float(F);
;}
#line 906 "version_hash_table.c"
	MR_tempr1 = H;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_float_to_word((MR_word_to_float(MR_r1) * MR_word_to_float(MR_r1)));
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__float_double_hash_3_0
	F = MR_word_to_float(MR_tempr2);
{
#line 91 "float.opt"

	H = MR_hash_float(F);
;}
#line 921 "version_hash_table.c"
	MR_r2 = H;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module6)
	MR_init_entry1(version_hash_table__double_munge_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__double_munge_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__version_hash_table__double_munge_6_0
{
#line 142 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 955 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__version_hash_table__double_munge_6_0
{
#line 142 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 967 "version_hash_table.c"
	MR_tempr2 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r2;
	MR_r1 = ((((MR_Integer) MR_tempr3 << (MR_Integer) 5) ^ ((MR_Integer) MR_tempr3 >> ((MR_Integer) MR_tempr1 - (MR_Integer) 5))) ^ (MR_Integer) MR_r1);
	MR_tempr4 = MR_r4;
	MR_r2 = ((((MR_Integer) MR_tempr4 << (MR_Integer) 3) ^ ((MR_Integer) MR_tempr4 >> ((MR_Integer) MR_tempr2 - (MR_Integer) 3))) ^ (MR_Integer) MR_r3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
MR_decl_entry(private_builtin__typed_unify_2_1);

MR_BEGIN_MODULE(version_hash_table_module7)
	MR_init_entry1(version_hash_table__dynamic_cast_to_array_2_0);
	MR_init_label3(version_hash_table__dynamic_cast_to_array_2_0,3,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__dynamic_cast_to_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__version_hash_table__dynamic_cast_to_array_2_0
	TypeInfo_for_T = MR_r1;
{
#line 45 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 1024 "version_hash_table.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__version_hash_table__dynamic_cast_to_array_2_0
	TypeDesc = MR_r4;
{
#line 64 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 1050 "version_hash_table.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(version_hash_table__dynamic_cast_to_array_2_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		version_hash_table__dynamic_cast_to_array_2_0_i3);
MR_def_label(version_hash_table__dynamic_cast_to_array_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__dynamic_cast_to_array_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__version_hash_table__dynamic_cast_to_array_2_0
	TypeInfo = MR_sv(2);
{
#line 61 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 1084 "version_hash_table.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__dynamic_cast_to_array_2_0_i5);
MR_def_label(version_hash_table__dynamic_cast_to_array_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__dynamic_cast_to_array_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(version_hash_table__dynamic_cast_to_array_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(version_hash_table_module8)
	MR_init_entry1(version_hash_table__generic_double_hash_3_0);
	MR_init_label8(version_hash_table__generic_double_hash_3_0,60,3,2,6,5,10,9,13)
	MR_init_label8(version_hash_table__generic_double_hash_3_0,12,17,16,22,24,21,25,26)
	MR_init_label1(version_hash_table__generic_double_hash_3_0,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__generic_double_hash_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__generic_double_hash_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_double_hash_3_0_i3);
MR_def_label(version_hash_table__generic_double_hash_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r1 = ((MR_Integer) MR_tempr1 * (MR_Integer) MR_tempr1);
	MR_r2 = ((MR_Integer) MR_r2 ^ ((MR_Integer) MR_r2 + (MR_Integer) MR_r2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(version_hash_table__generic_double_hash_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_double_hash_3_0_i6);
MR_def_label(version_hash_table__generic_double_hash_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(version_hash_table__string_double_hash_3_0);
MR_def_label(version_hash_table__generic_double_hash_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_double_hash_3_0_i10);
MR_def_label(version_hash_table__generic_double_hash_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i9);
	}
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_double_hash_3_0
	F = MR_word_to_float(MR_r2);
{
#line 91 "float.opt"

	H = MR_hash_float(F);
;}
#line 1205 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_tempr2) * MR_word_to_float(MR_tempr2)));
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_double_hash_3_0
	F = MR_word_to_float(MR_tempr1);
{
#line 91 "float.opt"

	H = MR_hash_float(F);
;}
#line 1223 "version_hash_table.c"
	MR_r2 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(version_hash_table__generic_double_hash_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_double_hash_3_0_i13);
MR_def_label(version_hash_table__generic_double_hash_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i12);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(version_hash_table__char_double_hash_3_0);
MR_def_label(version_hash_table__generic_double_hash_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_double_hash_3_0_i17);
MR_def_label(version_hash_table__generic_double_hash_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i16);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i60);
MR_def_label(version_hash_table__generic_double_hash_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(version_hash_table__dynamic_cast_to_array_2_0,
		version_hash_table__generic_double_hash_3_0_i22);
MR_def_label(version_hash_table__generic_double_hash_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_double_hash_3_0_i21);
	}
	MR_r1 = MR_r2;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_52_44_32_53_93_95_48_3_0,
		version_hash_table__generic_double_hash_3_0_i24);
MR_def_label(version_hash_table__generic_double_hash_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(version_hash_table__generic_double_hash_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		version_hash_table__generic_double_hash_3_0_i25);
MR_def_label(version_hash_table__generic_double_hash_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(version_hash_table__string_double_hash_3_0,
		version_hash_table__generic_double_hash_3_0_i26);
MR_def_label(version_hash_table__generic_double_hash_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_np_call_localret_ent(version_hash_table__double_munge_6_0,
		version_hash_table__generic_double_hash_3_0_i27);
MR_def_label(version_hash_table__generic_double_hash_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(version_hash_table__list__foldl2__ho6_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module9)
	MR_init_entry1(fn__version_hash_table__num_buckets_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__num_buckets_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module10)
	MR_init_entry1(fn__version_hash_table__num_occupants_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__num_occupants_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(fn__int__div_2_0);

MR_BEGIN_MODULE(version_hash_table_module11)
	MR_init_entry1(fn__version_hash_table__find_slot_2_4_0);
	MR_init_label7(fn__version_hash_table__find_slot_2_4_0,36,3,7,12,10,14,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__find_slot_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__version_hash_table__find_slot_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r7 = MR_ctfield(0, MR_tempr2, 4);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__find_slot_2_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r7, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1402 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__find_slot_2_4_0_i3);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r7;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(fn__version_hash_table__find_slot_2_4_0_i7);
	}
MR_def_label(fn__version_hash_table__find_slot_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__find_slot_2_4_0_i7);
MR_def_label(fn__version_hash_table__find_slot_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__find_slot_2_4_0_i39);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		fn__version_hash_table__find_slot_2_4_0_i12);
MR_def_label(fn__version_hash_table__find_slot_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__find_slot_2_4_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(fn__version_hash_table__find_slot_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_ctfield(0, MR_sv(1), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__version_hash_table__find_slot_2_4_0_i14);
MR_def_label(fn__version_hash_table__find_slot_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(5)));
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__version_hash_table__find_slot_2_4_0_i36);
	}
MR_def_label(fn__version_hash_table__find_slot_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(version_hash_table_module12)
	MR_init_entry1(fn__version_hash_table__find_slot_2_0);
	MR_init_label2(fn__version_hash_table__find_slot_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__find_slot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_hash_table__find_slot_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__version_hash_table__find_slot_2_0_i2);
MR_def_label(fn__version_hash_table__find_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_sv(1), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__version_hash_table__find_slot_2_0_i3);
MR_def_label(fn__version_hash_table__find_slot_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - ((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(5)));
	MR_tempr2 = MR_sv(4);
	MR_r6 = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__version_hash_table__find_slot_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module13)
	MR_init_entry1(fn__version_hash_table__expand_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__expand_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_tempr4, 0) + (MR_Integer) MR_ctfield(0, MR_tempr4, 0));
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__expand_1_0
	N = MR_tempr1;
	X = (MR_Word) MR_tbmkword(0, 0);
	MR_OBTAIN_GLOBAL_LOCK("new");
{
#line 64 "version_array.opt"

    MR_Integer  i;
    
    VA = MR_GC_NEW(struct ML_va);
    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 1579 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr2);
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr4, 2) + (MR_Integer) MR_ctfield(0, MR_tempr4, 2));
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_tempr2;
	MR_tempr1 = MR_tempr4;
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) - (MR_Integer) 1);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module14)
	MR_init_entry1(fn__version_hash_table__set_3_0);
	MR_init_label8(fn__version_hash_table__set_3_0,58,2,4,8,12,11,15,19)
	MR_init_label3(fn__version_hash_table__set_3_0,10,22,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__version_hash_table__set_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__set_3_0_i2);
MR_def_label(fn__version_hash_table__set_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tempr4 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr4, 4);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1656 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i4);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i8);
	}
MR_def_label(fn__version_hash_table__set_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i8);
MR_def_label(fn__version_hash_table__set_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i11);
	}
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	}
	MR_np_call_localret_ent(fn__version_hash_table__expand_1_0,
		fn__version_hash_table__set_3_0_i12);
MR_def_label(fn__version_hash_table__set_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i58);
MR_def_label(fn__version_hash_table__set_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_ctfield(0, MR_tempr1, 4), VA0);
	I = MR_sv(4);
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 1738 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i19);
	}
MR_def_label(fn__version_hash_table__set_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i19);
MR_def_label(fn__version_hash_table__set_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__version_hash_table__set_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(0, MR_tempr2, 4);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA0);
	I = MR_sv(4);
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 1799 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i22);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i26);
	}
MR_def_label(fn__version_hash_table__set_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i26);
MR_def_label(fn__version_hash_table__set_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module15)
	MR_init_entry1(version_hash_table__set_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module16)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(version_hash_table_module17)
	MR_init_entry1(fn__version_hash_table__det_insert_3_0);
	MR_init_label7(fn__version_hash_table__det_insert_3_0,2,4,8,12,11,14,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__det_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__det_insert_3_0_i2);
MR_def_label(fn__version_hash_table__det_insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_r7 = MR_ctfield(0, MR_sv(1), 4);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r7, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1939 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r3 = MR_r7;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i8);
	}
MR_def_label(fn__version_hash_table__det_insert_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_insert_3_0_i8);
MR_def_label(fn__version_hash_table__det_insert_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i11);
	}
	MR_tempr1 = ((MR_Integer) MR_ctfield(0, MR_tempr5, 0) + (MR_Integer) MR_ctfield(0, MR_tempr5, 0));
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	N = MR_tempr1;
	X = (MR_Word) MR_tbmkword(0, 0);
	MR_OBTAIN_GLOBAL_LOCK("new");
{
#line 64 "version_array.opt"

    MR_Integer  i;
    
    VA = MR_GC_NEW(struct ML_va);
    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) MR_GC_NEW_ARRAY(MR_Word, N + 1);
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }
;}
#line 1997 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr3);
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr2);
	MR_tfield(0, MR_tempr4, 3) = MR_ctfield(0, MR_tempr5, 3);
	MR_tfield(0, MR_tempr4, 4) = MR_tempr3;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr5, 4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = ((MR_Integer) MR_ctfield(0, MR_tempr5, 0) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0,
		fn__version_hash_table__det_insert_3_0_i12);
MR_def_label(fn__version_hash_table__det_insert_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
MR_def_label(fn__version_hash_table__det_insert_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr3, 1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0,
		fn__version_hash_table__det_insert_3_0_i14);
MR_def_label(fn__version_hash_table__det_insert_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__version_hash_table__det_insert_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("version_hash_table.det_update: key already present", 50);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module18)
	MR_init_entry1(version_hash_table__det_insert_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__det_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module19)
	MR_init_entry1(fn__version_hash_table__det_update_3_0);
	MR_init_label6(fn__version_hash_table__det_update_3_0,2,4,8,10,13,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__det_update_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__det_update_3_0_i2);
MR_def_label(fn__version_hash_table__det_update_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_r3 = MR_ctfield(0, MR_sv(1), 4);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_update_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2147 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i4);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i8);
	}
MR_def_label(fn__version_hash_table__det_update_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_update_3_0_i8);
MR_def_label(fn__version_hash_table__det_update_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("version_hash_table.det_update: key not found", 44);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__version_hash_table__det_update_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_sv(1), 4);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_update_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA0);
	I = MR_sv(4);
	X = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2203 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i13);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i17);
	}
MR_def_label(fn__version_hash_table__det_update_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_update_3_0_i17);
MR_def_label(fn__version_hash_table__det_update_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module20)
	MR_init_entry1(version_hash_table__det_update_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__det_update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__det_update_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module21)
	MR_init_entry1(fn__version_hash_table__delete_2_0);
	MR_init_label3(fn__version_hash_table__delete_2_0,2,4,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__delete_2_0_i2);
MR_def_label(fn__version_hash_table__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__delete_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(2), VA0);
	I = MR_r1;
	X = (MR_Word) MR_tbmkword(0, 0);
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 182 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2318 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i4);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i8);
	}
MR_def_label(fn__version_hash_table__delete_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__delete_2_0_i8);
MR_def_label(fn__version_hash_table__delete_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module22)
	MR_init_entry1(version_hash_table__delete_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__delete_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module23)
	MR_init_entry1(fn__version_hash_table__search_2_0);
	MR_init_label5(fn__version_hash_table__search_2_0,2,4,8,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__search_2_0_i2);
MR_def_label(fn__version_hash_table__search_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r5 = MR_ctfield(0, MR_sv(1), 4);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__search_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2428 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__search_2_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r5;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(fn__version_hash_table__search_2_0_i8);
	}
MR_def_label(fn__version_hash_table__search_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__search_2_0_i8);
MR_def_label(fn__version_hash_table__search_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__search_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r3, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		fn__version_hash_table__search_2_0_i10);
MR_def_label(fn__version_hash_table__search_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__search_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__version_hash_table__search_2_0,1)
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


MR_BEGIN_MODULE(version_hash_table_module24)
	MR_init_entry1(fn__version_hash_table__lookup_2_0);
	MR_init_label2(fn__version_hash_table__lookup_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__search_2_0,
		fn__version_hash_table__lookup_2_0_i4);
MR_def_label(fn__version_hash_table__lookup_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__lookup_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__version_hash_table__lookup_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.lookup: key not found", 40);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module25)
	MR_init_entry1(fn__version_hash_table__elem_2_0);
	MR_init_label2(fn__version_hash_table__elem_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__version_hash_table__search_2_0,
		fn__version_hash_table__elem_2_0_i4);
MR_def_label(fn__version_hash_table__elem_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__elem_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__version_hash_table__elem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.lookup: key not found", 40);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module26)
	MR_init_entry1(version_hash_table__search_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_hash_table__search_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module27)
	MR_init_entry1(fn__version_hash_table__to_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r3, 4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) - (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module28)
	MR_init_entry1(fn__version_hash_table__fold_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_ctfield(0, MR_r5, 4);
	MR_r8 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module29)
	MR_init_entry1(fn__version_hash_table__cons_k_v_3_0);
	MR_init_label3(fn__version_hash_table__cons_k_v_3_0,5,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__cons_k_v_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__cons_k_v_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2667 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__cons_k_v_3_0_i5);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__cons_k_v_3_0_i9);
	}
MR_def_label(fn__version_hash_table__cons_k_v_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__cons_k_v_3_0_i9);
MR_def_label(fn__version_hash_table__cons_k_v_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__cons_k_v_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__version_hash_table__cons_k_v_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module30)
	MR_init_entry1(fn__version_hash_table__reinsert_k_v_3_0);
	MR_init_label4(fn__version_hash_table__reinsert_k_v_3_0,5,9,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__reinsert_k_v_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__reinsert_k_v_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2751 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__reinsert_k_v_3_0_i5);
	MR_r6 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(fn__version_hash_table__reinsert_k_v_3_0_i9);
	}
MR_def_label(fn__version_hash_table__reinsert_k_v_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__reinsert_k_v_3_0_i9);
MR_def_label(fn__version_hash_table__reinsert_k_v_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__reinsert_k_v_3_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(fn__version_hash_table__reinsert_k_v_3_0_i2);
MR_def_label(fn__version_hash_table__reinsert_k_v_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
MR_def_label(fn__version_hash_table__reinsert_k_v_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(version_hash_table_module31)
	MR_init_entry1(fn__version_hash_table__apply_k_v_4_0);
	MR_init_label4(fn__version_hash_table__apply_k_v_4_0,5,9,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__apply_k_v_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__apply_k_v_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 179 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2841 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__apply_k_v_4_0_i5);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r4;
	MR_r4 = MR_r7;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(fn__version_hash_table__apply_k_v_4_0_i9);
	}
MR_def_label(fn__version_hash_table__apply_k_v_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__apply_k_v_4_0_i9);
MR_def_label(fn__version_hash_table__apply_k_v_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__apply_k_v_4_0_i10);
	}
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(fn__version_hash_table__apply_k_v_4_0_i2);
MR_def_label(fn__version_hash_table__apply_k_v_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_hash_table__apply_k_v_4_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(fn__version_hash_table__apply_k_v_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module32)
	MR_init_entry1(__Unify___version_hash_table__bucket_2_0);
	MR_init_label4(__Unify___version_hash_table__bucket_2_0,14,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__bucket_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__bucket_2_0_i14);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___version_hash_table__bucket_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___version_hash_table__bucket_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___version_hash_table__bucket_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___version_hash_table__bucket_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___version_hash_table__bucket_2_0_i7);
MR_def_label(__Unify___version_hash_table__bucket_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___version_hash_table__bucket_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___version_hash_table__bucket_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(version_hash_table_module33)
	MR_init_entry1(__Compare___version_hash_table__bucket_2_0);
	MR_init_label6(__Compare___version_hash_table__bucket_2_0,24,7,5,9,11,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__bucket_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__bucket_2_0_i24);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__bucket_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__bucket_2_0_i7);
	}
MR_def_label(__Compare___version_hash_table__bucket_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___version_hash_table__bucket_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___version_hash_table__bucket_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__bucket_2_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___version_hash_table__bucket_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___version_hash_table__bucket_2_0_i11);
MR_def_label(__Compare___version_hash_table__bucket_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__bucket_2_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___version_hash_table__bucket_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_hash_table_module34)
	MR_init_entry1(__Unify___version_hash_table__buckets_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__buckets_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_hash_table_module35)
	MR_init_entry1(__Compare___version_hash_table__buckets_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__buckets_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module36)
	MR_init_entry1(__Unify___version_hash_table__hash_func_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__hash_func_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module37)
	MR_init_entry1(__Compare___version_hash_table__hash_func_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__hash_func_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module38)
	MR_init_entry1(__Unify___version_hash_table__hash_pred_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__hash_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module39)
	MR_init_entry1(__Compare___version_hash_table__hash_pred_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__hash_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module40)
	MR_init_entry1(__Unify___version_hash_table__version_hash_table_2_0);
	MR_init_label3(__Unify___version_hash_table__version_hash_table_2_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__version_hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 4);
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 4);
	}
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___version_hash_table__version_hash_table_2_0_i4);
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module41)
	MR_init_entry1(__Compare___version_hash_table__version_hash_table_2_0);
	MR_init_label8(__Compare___version_hash_table__version_hash_table_2_0,3,2,6,7,9,14,15,17)
	MR_init_label5(__Compare___version_hash_table__version_hash_table_2_0,22,23,25,29,75)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__version_hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i2);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i9);
	}
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i9);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i75);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i17);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i17);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i75);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i25);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i25);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i75);
	}
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___version_hash_table__version_hash_table_2_0_i29);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i75);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(version_hash_table, bucket, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_tfield(0, MR_r1, 2) = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module42)
	MR_init_entry1(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0);
	MR_init_label1(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0_i2);
MR_def_label(fn__version_hash_table__IntroducedFrom__func__new__212__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module43)
	MR_init_entry1(version_hash_table__list__foldl2__ho6_6_0);
	MR_init_label4(version_hash_table__list__foldl2__ho6_6_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__list__foldl2__ho6_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__list__foldl2__ho6_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(version_hash_table__list__foldl2__ho6_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(version_hash_table__generic_double_hash_3_0,
		version_hash_table__list__foldl2__ho6_6_0_i4);
MR_def_label(version_hash_table__list__foldl2__ho6_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(version_hash_table__double_munge_6_0,
		version_hash_table__list__foldl2__ho6_6_0_i5);
MR_def_label(version_hash_table__list__foldl2__ho6_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(version_hash_table__list__foldl2__ho6_6_0_i12);
MR_def_label(version_hash_table__list__foldl2__ho6_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module44)
	MR_init_entry1(version_hash_table__string__foldl_substring_2__ho15_6_0);
	MR_init_label1(version_hash_table__string__foldl_substring_2__ho15_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__string__foldl_substring_2__ho15_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(version_hash_table__string__foldl_substring_2__ho15_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__version_hash_table__string__foldl_substring_2__ho15_6_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 3507 "version_hash_table.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__version_hash_table__string__foldl_substring_2__ho15_6_0
	Character = MR_tempr1;
{
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 3521 "version_hash_table.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r4);
	MR_np_localtailcall(version_hash_table__string__foldl_substring_2__ho15_6_0);
	}
MR_def_label(version_hash_table__string__foldl_substring_2__ho15_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module45)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3562 "version_hash_table.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order comparison", 33);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module46)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3602 "version_hash_table.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order unification", 34);
	MR_np_call_localret_ent(require__error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i10);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3625 "version_hash_table.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module47)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module48)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0);
	MR_init_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0_i2);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__version_hash_table__reinsert_k_v_3_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0_i3);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0_i11);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_51_95_95_91_49_44_32_50_44_32_54_44_32_55_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module49)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0);
	MR_init_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 > (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0_i2);
	}
	MR_sv(1) = MR_r7;
	MR_sv(2) = ((MR_Integer) MR_r6 + (MR_Integer) 1);
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r7 = MR_r8;
	MR_np_call_localret_ent(fn__version_hash_table__apply_k_v_4_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0_i3);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0_i11);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_52_95_95_91_54_44_32_55_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module50)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0);
	MR_init_label3(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0_i2);
	}
	MR_sv(1) = MR_r5;
	MR_sv(2) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(fn__version_hash_table__cons_k_v_3_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0_i3);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0_i11);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_117_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_55_44_32_56_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module51)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_52_44_32_53_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_52_44_32_53_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_52_44_32_53_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 88 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 3833 "version_hash_table.c"
	MR_r5 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_52_44_32_53_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 96 "array.opt"

    Max = Array->size - 1;
;}
#line 3847 "version_hash_table.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);

MR_BEGIN_MODULE(version_hash_table_module52)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0);
	MR_init_label5(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0,12,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0_i2);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_tempr3 = MR_r2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0_i3);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(version_hash_table__generic_double_hash_3_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0_i4);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(version_hash_table__double_munge_6_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0_i5);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_48_95_95_91_49_44_32_52_44_32_53_93_95_48_5_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__version_hash_table_maybe_bunch_0(void)
{
	version_hash_table_module0();
	version_hash_table_module1();
	version_hash_table_module2();
	version_hash_table_module3();
	version_hash_table_module4();
	version_hash_table_module5();
	version_hash_table_module6();
	version_hash_table_module7();
	version_hash_table_module8();
	version_hash_table_module9();
	version_hash_table_module10();
	version_hash_table_module11();
	version_hash_table_module12();
	version_hash_table_module13();
	version_hash_table_module14();
	version_hash_table_module15();
	version_hash_table_module16();
	version_hash_table_module17();
	version_hash_table_module18();
	version_hash_table_module19();
	version_hash_table_module20();
	version_hash_table_module21();
	version_hash_table_module22();
	version_hash_table_module23();
	version_hash_table_module24();
	version_hash_table_module25();
	version_hash_table_module26();
	version_hash_table_module27();
	version_hash_table_module28();
	version_hash_table_module29();
	version_hash_table_module30();
	version_hash_table_module31();
	version_hash_table_module32();
	version_hash_table_module33();
	version_hash_table_module34();
	version_hash_table_module35();
	version_hash_table_module36();
	version_hash_table_module37();
	version_hash_table_module38();
	version_hash_table_module39();
}

static void mercury__version_hash_table_maybe_bunch_1(void)
{
	version_hash_table_module40();
	version_hash_table_module41();
	version_hash_table_module42();
	version_hash_table_module43();
	version_hash_table_module44();
	version_hash_table_module45();
	version_hash_table_module46();
	version_hash_table_module47();
	version_hash_table_module48();
	version_hash_table_module49();
	version_hash_table_module50();
	version_hash_table_module51();
	version_hash_table_module52();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__version_hash_table__init(void);
void mercury__version_hash_table__init_type_tables(void);
void mercury__version_hash_table__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__version_hash_table__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__version_hash_table__init_complexity_procs(void);
#endif

void mercury__version_hash_table__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__version_hash_table_maybe_bunch_0();
	mercury__version_hash_table_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
		version_hash_table__version_hash_table_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_hash_pred_1,
		version_hash_table__hash_pred_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_hash_func_1,
		version_hash_table__hash_func_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_buckets_2,
		version_hash_table__buckets_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_bucket_2,
		version_hash_table__bucket_2_0);
	mercury__version_hash_table__init_debugger();
}

void mercury__version_hash_table__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_version_hash_table_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_hash_pred_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_hash_func_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_buckets_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_bucket_2);
	}
}


void mercury__version_hash_table__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__version_hash_table__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_hash_table__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
