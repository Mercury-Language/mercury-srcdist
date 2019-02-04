/*
** Automatically generated from `version_hash_table.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
#line 24 "version_hash_table.c"
#include "version_hash_table.mh"

#line 27 "version_hash_table.c"
#line 149 "array.int"
#include "array.mh"

#line 31 "version_hash_table.c"
#line 39 "version_array.int"
#include "version_array.mh"

#line 35 "version_hash_table.c"
#line 136 "io.int2"
#include "io.mh"

#line 39 "version_hash_table.c"
#line 144 "io.int2"
#include "string.mh"

#line 43 "version_hash_table.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 47 "version_hash_table.c"
#line 28 "time.int2"
#include "time.mh"

#line 51 "version_hash_table.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 55 "version_hash_table.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 59 "version_hash_table.c"
#line 150 "io.opt"
#include "dir.mh"

#line 63 "version_hash_table.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 67 "version_hash_table.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 71 "version_hash_table.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "version_hash_table.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 79 "version_hash_table.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "version_hash_table.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 87 "version_hash_table.c"
#line 20 "store.opt"
#include "store.mh"

#line 91 "version_hash_table.c"
#line 3 "float.opt"
#include "float.mh"

#line 95 "version_hash_table.c"
#line 3 "math.opt"
#include "math.mh"

#line 99 "version_hash_table.c"
#line 4 "int.opt"
#include "int.mh"

#line 103 "version_hash_table.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "version_hash_table.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 111 "version_hash_table.c"
#line 112 "version_hash_table.c"
#ifndef VERSION_HASH_TABLE_DECL_GUARD
#define VERSION_HASH_TABLE_DECL_GUARD

#line 116 "version_hash_table.c"
#line 117 "version_hash_table.c"

#endif
#line 120 "version_hash_table.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_hash_table__type_ctor_info_hash_pred_1,
	mercury_data_version_hash_table__type_ctor_info_version_hash_table_2;
MR_decl_label3(version_hash_table__list__foldl__ho14_4_0, 10,3,4)
MR_decl_label1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0, 25,4,8,9,2)
MR_decl_label1(version_hash_table__find_slot_2_4_0, 2)
MR_decl_label3(version_hash_table__fold_f_4_0, 10,3,4)
MR_decl_label3(version_hash_table__fold_p_4_0, 10,3,4)
MR_decl_label10(version_hash_table__generic_hash_2_0, 71,3,2,6,5,10,9,13,12,16)
MR_decl_label7(version_hash_table__generic_hash_2_0, 15,22,25,20,28,29,30)
MR_decl_label3(version_hash_table__increase_occupants_2_0, 5,6,2)
MR_decl_label7(version_hash_table__reinsert_assoc_list_5_0, 37,3,4,8,13,39,15)
MR_decl_label5(version_hash_table__reinsert_bindings_6_0, 28,3,7,11,12)
MR_decl_label4(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0, 11,2,3,4)
MR_decl_label5(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0, 26,4,9,10,2)
MR_decl_label6(fn__version_hash_table__delete_2_0, 2,6,10,13,16,12)
MR_decl_label8(fn__version_hash_table__det_insert_3_0, 2,6,10,13,11,18,20,25)
MR_decl_label8(fn__version_hash_table__det_update_3_0, 2,6,10,13,12,18,20,25)
MR_decl_label2(fn__version_hash_table__elem_2_0, 4,2)
MR_decl_label1(fn__version_hash_table__find_slot_2_0, 2)
MR_decl_label1(fn__version_hash_table__from_assoc_list_2_0, 2)
MR_decl_label3(fn__version_hash_table__from_assoc_list_2_2_0, 10,3,4)
MR_decl_label2(fn__version_hash_table__lookup_2_0, 4,2)
MR_decl_label5(fn__version_hash_table__new_3_0, 2,5,37,9,12)
MR_decl_label3(fn__version_hash_table__search_2_0, 2,6,10)
MR_decl_label9(fn__version_hash_table__set_3_0, 2,6,10,13,11,19,21,26,29)
MR_decl_label3(__Unify___version_hash_table__version_hash_table_2_0, 4,10,1)
MR_decl_label10(__Compare___version_hash_table__version_hash_table_2_0, 3,2,6,7,9,14,15,17,21,59)
MR_def_extern_entry(fn__version_hash_table__new_3_0)
MR_def_extern_entry(fn__version_hash_table__new_default_1_0)
MR_def_extern_entry(version_hash_table__int_hash_2_0)
MR_def_extern_entry(version_hash_table__string_hash_2_0)
MR_def_extern_entry(version_hash_table__char_hash_2_0)
MR_def_extern_entry(version_hash_table__float_hash_2_0)
MR_decl_static(fn__version_hash_table__munge_2_0)
MR_def_extern_entry(version_hash_table__generic_hash_2_0)
MR_def_extern_entry(fn__version_hash_table__num_buckets_1_0)
MR_def_extern_entry(fn__version_hash_table__num_occupants_1_0)
MR_def_extern_entry(version_hash_table__find_slot_2_4_0)
MR_def_extern_entry(version_hash_table__unsafe_hash_pred_cast_2_0)
MR_def_extern_entry(fn__version_hash_table__find_slot_2_0)
MR_decl_static(version_hash_table__reinsert_assoc_list_5_0)
MR_decl_static(version_hash_table__reinsert_bindings_6_0)
MR_decl_static(version_hash_table__increase_occupants_2_0)
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
MR_def_extern_entry(fn__version_hash_table__from_assoc_list_2_2_0)
MR_def_extern_entry(fn__version_hash_table__from_assoc_list_2_0)
MR_def_extern_entry(fn__version_hash_table__fold_3_0)
MR_def_extern_entry(version_hash_table__fold_4_0)
MR_def_extern_entry(version_hash_table__fold_4_1)
MR_def_extern_entry(version_hash_table__fold_f_4_0)
MR_def_extern_entry(version_hash_table__fold_f_4_1)
MR_def_extern_entry(version_hash_table__fold_p_4_0)
MR_def_extern_entry(version_hash_table__fold_p_4_1)
MR_def_extern_entry(__Unify___version_hash_table__hash_pred_1_0)
MR_def_extern_entry(__Compare___version_hash_table__hash_pred_1_0)
MR_def_extern_entry(__Unify___version_hash_table__version_hash_table_2_0)
MR_def_extern_entry(__Compare___version_hash_table__version_hash_table_2_0)
MR_decl_static(version_hash_table__list__foldl__ho14_4_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0)
MR_decl_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_PseudoTypeInfo) 1,
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
	{ (void *)&mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__pseudo_1__pseudo_2 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_1__pseudo_2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_version_array__pti_version_array_1__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
	&mercury_data_version_array__type_ctor_info_version_array_1,
{	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2
}};

const MR_PseudoTypeInfo mercury_data_version_hash_table__field_types_version_hash_table_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data___vpti_pred_2__pseudo_1__plain_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_version_array__pti_version_array_1__pseudo_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2
};

const MR_ConstString mercury_data_version_hash_table__field_names_version_hash_table_2_0[] = {
	"num_occupants",
	"max_occupants",
	"hash_pred",
	"buckets"
};

static const MR_DuFunctorDesc mercury_data_version_hash_table__du_functor_desc_version_hash_table_2_0 = {
	"ht",
	4,
	12,
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



extern const MR_TypeCtorInfo_Struct mercury_data_exception__type_ctor_info_software_error_0;
MR_decl_entry(exception__throw_1_0);
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(fn__version_array__new_2_0);

MR_BEGIN_MODULE(version_hash_table_module0)
	MR_init_entry1(fn__version_hash_table__new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__new_3_0);
	MR_init_label5(fn__version_hash_table__new_3_0,2,5,37,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r4,0)) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new_hash_table: N =< 0", 41);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_hash_table__new_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__new_3_0
{
#line 146 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 360 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: N >= int.bits_per_int", 45);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
MR_def_label(fn__version_hash_table__new_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r5) > (MR_Float) 0.0000000000000000)) {
		MR_GOTO_LAB(fn__version_hash_table__new_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.new: MaxOccupancy =< 0.0", 43);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__version_hash_table__new_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		fn__version_hash_table__new_3_0_i9);
MR_def_label(fn__version_hash_table__new_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	IntVal;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__new_3_0
	IntVal = MR_r1;
{
#line 64 "float.opt"

	FloatVal = IntVal;
;}
#line 405 "version_hash_table.c"
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
#line 67 "float.opt"

	Ceil = (MR_Integer) ceil(X);
;}
#line 420 "version_hash_table.c"
	MR_tempr1 = Ceil;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__version_array__new_2_0,
		fn__version_hash_table__new_3_0_i12);
MR_def_label(fn__version_hash_table__new_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_0pt90000000000000002 = 0.90000000000000002;

MR_BEGIN_MODULE(version_hash_table_module1)
	MR_init_entry1(fn__version_hash_table__new_default_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__new_default_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_default'/2 mode 0 */
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
	MR_init_entry1(version_hash_table__int_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__int_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__int_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__int_hash_2_0
	N = MR_r1;
{
#line 427 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 526 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__hash_2_0);

MR_BEGIN_MODULE(version_hash_table_module3)
	MR_init_entry1(version_hash_table__string_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__string_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__string_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(string__hash_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module4)
	MR_init_entry1(version_hash_table__char_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__char_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__char_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__version_hash_table__char_hash_2_0
	Character = MR_r1;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 585 "version_hash_table.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__char_hash_2_0
	N = MR_tempr1;
{
#line 427 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 620 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module5)
	MR_init_entry1(version_hash_table__float_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__float_hash_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'float_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__float_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__float_hash_2_0
	F = MR_word_to_float(MR_r1);
{
#line 95 "float.opt"

	H = MR_hash_float(F);
;}
#line 656 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module6)
	MR_init_entry1(fn__version_hash_table__munge_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__munge_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'munge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_hash_table__munge_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__munge_2_0
{
#line 146 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 691 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r1 = (((MR_Integer) MR_tempr2 << (MR_Integer) MR_r1) ^ ((MR_Integer) MR_tempr2 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r1)));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(private_builtin__typed_unify_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(version_hash_table_module7)
	MR_init_entry1(version_hash_table__generic_hash_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__generic_hash_2_0);
	MR_init_label10(version_hash_table__generic_hash_2_0,71,3,2,6,5,10,9,13,12,16)
	MR_init_label7(version_hash_table__generic_hash_2_0,15,22,25,20,28,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_hash'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__generic_hash_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__generic_hash_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i3);
MR_def_label(version_hash_table__generic_hash_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i2);
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	N = MR_r2;
{
#line 427 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 777 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(version_hash_table__generic_hash_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i6);
MR_def_label(version_hash_table__generic_hash_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i5);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(string__hash_2_0);
MR_def_label(version_hash_table__generic_hash_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i10);
MR_def_label(version_hash_table__generic_hash_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i9);
	}
	{
	MR_Float	F;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	F = MR_word_to_float(MR_r2);
{
#line 95 "float.opt"

	H = MR_hash_float(F);
;}
#line 820 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(version_hash_table__generic_hash_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i13);
MR_def_label(version_hash_table__generic_hash_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i12);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	Character = MR_r2;
{
#line 49 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 849 "version_hash_table.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	N;
	MR_Integer	H;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	N = MR_tempr1;
{
#line 427 "version_hash_table.m"

    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
;}
#line 884 "version_hash_table.c"
	MR_r1 = H;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
	}
MR_def_label(version_hash_table__generic_hash_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i16);
MR_def_label(version_hash_table__generic_hash_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i71);
MR_def_label(version_hash_table__generic_hash_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	TypeInfo_for_T = MR_sv(2);
{
#line 47 "type_desc.opt"
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
#line 931 "version_hash_table.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	TypeDesc = MR_r4;
{
#line 67 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 957 "version_hash_table.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i20);
	}
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		version_hash_table__generic_hash_2_0_i22);
MR_def_label(version_hash_table__generic_hash_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__version_hash_table__generic_hash_2_0
	TypeInfo = MR_sv(3);
{
#line 63 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 989 "version_hash_table.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		version_hash_table__generic_hash_2_0_i25);
MR_def_label(version_hash_table__generic_hash_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_hash_table__generic_hash_2_0_i20);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0);
	}
MR_def_label(version_hash_table__generic_hash_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		version_hash_table__generic_hash_2_0_i28);
MR_def_label(version_hash_table__generic_hash_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(string__hash_2_0,
		version_hash_table__generic_hash_2_0_i29);
MR_def_label(version_hash_table__generic_hash_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__version_hash_table__munge_2_0,
		version_hash_table__generic_hash_2_0_i30);
MR_def_label(version_hash_table__generic_hash_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_hash_table__list__foldl__ho14_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module8)
	MR_init_entry1(fn__version_hash_table__num_buckets_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__num_buckets_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_buckets'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__num_buckets_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__num_buckets_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 1087 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module9)
	MR_init_entry1(fn__version_hash_table__num_occupants_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__num_occupants_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_occupants'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__num_occupants_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(version_hash_table_module10)
	MR_init_entry1(version_hash_table__find_slot_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__find_slot_2_4_0);
	MR_init_label1(version_hash_table__find_slot_2_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_slot_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__find_slot_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__find_slot_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__version_hash_table__find_slot_2_4_0_i2);
MR_def_label(version_hash_table__find_slot_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(1) - (MR_Integer) 1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module11)
	MR_init_entry1(version_hash_table__unsafe_hash_pred_cast_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__unsafe_hash_pred_cast_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_hash_pred_cast'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__unsafe_hash_pred_cast_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__version_hash_table__unsafe_hash_pred_cast_2_0
	HashPred0 = MR_r2;
{
#line 231 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 1180 "version_hash_table.c"
	MR_r1 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module12)
	MR_init_entry1(fn__version_hash_table__find_slot_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__find_slot_2_0);
	MR_init_label1(fn__version_hash_table__find_slot_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_slot'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__find_slot_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 2);
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__find_slot_2_0
	HashPred0 = MR_tempr1;
{
#line 231 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 1221 "version_hash_table.c"
	MR_r1 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__find_slot_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 1237 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_r2 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_hash_table__find_slot_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__version_hash_table__find_slot_2_0_i2);
MR_def_label(fn__version_hash_table__find_slot_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_sv(1) - (MR_Integer) 1));
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(version_hash_table_module13)
	MR_init_entry1(version_hash_table__reinsert_assoc_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__reinsert_assoc_list_5_0);
	MR_init_label7(version_hash_table__reinsert_assoc_list_5_0,37,3,4,8,13,39,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinsert_assoc_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__reinsert_assoc_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(version_hash_table__reinsert_assoc_list_5_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__reinsert_assoc_list_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__version_hash_table__reinsert_assoc_list_5_0_i4);
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr5 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tempr6 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr7 = MR_sv(2);
	MR_tempr3 = ((MR_Integer) MR_r1 & ((MR_Integer) MR_tempr7 - (MR_Integer) 1));
	MR_r8 = MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_assoc_list_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA);
	I = MR_tempr3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1336 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_hash_table__reinsert_assoc_list_5_0_i8);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r10 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r9;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr7;
	MR_r3 = MR_sv(5);
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tempr6;
	MR_sv(4) = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_GOTO_LAB(version_hash_table__reinsert_assoc_list_5_0_i13);
	}
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_hash_table__reinsert_assoc_list_5_0_i13);
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_assoc_list_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA0);
	I = MR_sv(4);
	X = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 175 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 1383 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_hash_table__reinsert_assoc_list_5_0_i15);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r6);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_hash_table__reinsert_assoc_list_5_0_i37);
MR_def_label(version_hash_table__reinsert_assoc_list_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_hash_table__reinsert_assoc_list_5_0_i39);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module14)
	MR_init_entry1(version_hash_table__reinsert_bindings_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__reinsert_bindings_6_0);
	MR_init_label5(version_hash_table__reinsert_bindings_6_0,28,3,7,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinsert_bindings'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__reinsert_bindings_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__reinsert_bindings_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_bindings_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 1447 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(9);
	}
MR_def_label(version_hash_table__reinsert_bindings_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r8 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_hash_table__reinsert_bindings_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1487 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i7);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r3 = MR_r9;
	MR_r6 = MR_r7;
	MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i11);
	}
MR_def_label(version_hash_table__reinsert_bindings_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_hash_table__reinsert_bindings_6_0_i11);
MR_def_label(version_hash_table__reinsert_bindings_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(version_hash_table__reinsert_assoc_list_5_0,
		version_hash_table__reinsert_bindings_6_0_i12);
MR_def_label(version_hash_table__reinsert_bindings_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_hash_table__reinsert_bindings_6_0_i28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module15)
	MR_init_entry1(version_hash_table__increase_occupants_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__increase_occupants_2_0);
	MR_init_label3(version_hash_table__increase_occupants_2_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'increase_occupants'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__increase_occupants_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr6 = MR_r3;
	MR_r4 = MR_tfield(0, MR_tempr6, 0);
	MR_r5 = MR_tfield(0, MR_tempr6, 1);
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(version_hash_table__increase_occupants_2_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr7 = MR_r3;
	MR_tempr3 = MR_tfield(0, MR_tempr7, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__increase_occupants_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 1585 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr4 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr5 = MR_tfield(0, MR_tempr7, 2);
	{
	MR_Word	HashPred0;
	MR_Word	HashPred;
#define	MR_PROC_LABEL	mercury__version_hash_table__increase_occupants_2_0
	HashPred0 = MR_tempr5;
{
#line 231 "version_hash_table.m"

    HashPred = HashPred0;
;}
#line 1601 "version_hash_table.c"
	MR_tempr5 = HashPred;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr8 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr8, 0);
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = ((MR_Integer) MR_tempr4 + (MR_Integer) MR_tempr4);
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_tempr8, 1) + (MR_Integer) MR_tfield(0, MR_tempr8, 1));
	MR_sv(7) = MR_tempr5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__version_array__new_2_0,
		version_hash_table__increase_occupants_2_0_i5);
MR_def_label(version_hash_table__increase_occupants_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(version_hash_table__reinsert_bindings_6_0,
		version_hash_table__increase_occupants_2_0_i6);
MR_def_label(version_hash_table__increase_occupants_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(version_hash_table__increase_occupants_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__remove_4_0);

MR_BEGIN_MODULE(version_hash_table_module16)
	MR_init_entry1(fn__version_hash_table__set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__set_3_0);
	MR_init_label9(fn__version_hash_table__set_3_0,2,6,10,13,11,19,21,26,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__set_3_0_i2);
MR_def_label(fn__version_hash_table__set_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_sv(5), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1722 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i6);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i10);
	}
MR_def_label(fn__version_hash_table__set_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i10);
MR_def_label(fn__version_hash_table__set_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(assoc_list__remove_4_0,
		fn__version_hash_table__set_3_0_i13);
MR_def_label(fn__version_hash_table__set_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_sv(1) = (MR_Integer) 0;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i19);
	}
MR_def_label(fn__version_hash_table__set_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_sv(1) = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(5), 3);
	}
MR_def_label(fn__version_hash_table__set_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__set_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	I = MR_sv(3);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 175 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 1809 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__set_3_0_i21);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__set_3_0_i26);
MR_def_label(fn__version_hash_table__set_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__set_3_0_i26);
MR_def_label(fn__version_hash_table__set_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__version_hash_table__set_3_0_i29);
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(fn__version_hash_table__set_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(version_hash_table__increase_occupants_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module17)
	MR_init_entry1(version_hash_table__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module18)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__search_3_0);

MR_BEGIN_MODULE(version_hash_table_module19)
	MR_init_entry1(fn__version_hash_table__det_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__det_insert_3_0);
	MR_init_label8(fn__version_hash_table__det_insert_3_0,2,6,10,13,11,18,20,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__det_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__det_insert_3_0_i2);
MR_def_label(fn__version_hash_table__det_insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_sv(5), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 1979 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i6);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i10);
	}
MR_def_label(fn__version_hash_table__det_insert_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_insert_3_0_i10);
MR_def_label(fn__version_hash_table__det_insert_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(assoc_list__search_3_0,
		fn__version_hash_table__det_insert_3_0_i13);
MR_def_label(fn__version_hash_table__det_insert_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.det_insert: key already present", 50);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__version_hash_table__det_insert_3_0_i18);
MR_def_label(fn__version_hash_table__det_insert_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_sv(5), 3);
	}
MR_def_label(fn__version_hash_table__det_insert_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_insert_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA0);
	I = MR_sv(3);
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 175 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2055 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i20);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r4;
	MR_GOTO_LAB(fn__version_hash_table__det_insert_3_0_i25);
MR_def_label(fn__version_hash_table__det_insert_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_insert_3_0_i25);
MR_def_label(fn__version_hash_table__det_insert_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(version_hash_table__increase_occupants_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module20)
	MR_init_entry1(version_hash_table__det_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__det_insert_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_hash_table__det_insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module21)
	MR_init_entry1(fn__version_hash_table__det_update_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__det_update_3_0);
	MR_init_label8(fn__version_hash_table__det_update_3_0,2,6,10,13,12,18,20,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__det_update_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__det_update_3_0_i2);
MR_def_label(fn__version_hash_table__det_update_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_sv(1), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_update_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2185 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i6);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i10);
	}
MR_def_label(fn__version_hash_table__det_update_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_update_3_0_i10);
MR_def_label(fn__version_hash_table__det_update_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(assoc_list__remove_4_0,
		fn__version_hash_table__det_update_3_0_i13);
MR_def_label(fn__version_hash_table__det_update_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i18);
	}
MR_def_label(fn__version_hash_table__det_update_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(exception, software_error);
	MR_r2 = (MR_Word) MR_string_const("version_hash_table.det_update: key not found", 44);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__version_hash_table__det_update_3_0_i18);
MR_def_label(fn__version_hash_table__det_update_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__det_update_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	I = MR_sv(4);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 175 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2256 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i20);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(fn__version_hash_table__det_update_3_0_i25);
MR_def_label(fn__version_hash_table__det_update_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__det_update_3_0_i25);
MR_def_label(fn__version_hash_table__det_update_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module22)
	MR_init_entry1(version_hash_table__det_update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__det_update_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__det_update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__version_hash_table__det_update_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module23)
	MR_init_entry1(fn__version_hash_table__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__delete_2_0);
	MR_init_label6(fn__version_hash_table__delete_2_0,2,6,10,13,16,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__version_hash_table__find_slot_2_0,
		fn__version_hash_table__delete_2_0_i2);
MR_def_label(fn__version_hash_table__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_tfield(0, MR_sv(1), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__delete_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr3, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2380 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i6);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	}
	MR_np_call_localret_ent(assoc_list__remove_4_0,
		fn__version_hash_table__delete_2_0_i13);
MR_def_label(fn__version_hash_table__delete_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__delete_2_0_i10);
MR_def_label(fn__version_hash_table__delete_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(assoc_list__remove_4_0,
		fn__version_hash_table__delete_2_0_i13);
MR_def_label(fn__version_hash_table__delete_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__delete_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr1, VA0);
	I = MR_sv(3);
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 175 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_set(VA0, I, X, &VA);
;}
#line 2433 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__delete_2_0_i16);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_tempr1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = ((MR_Integer) MR_tfield(0, MR_tempr3, 0) - (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__version_hash_table__delete_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
MR_def_label(fn__version_hash_table__delete_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module24)
	MR_init_entry1(version_hash_table__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__version_hash_table__delete_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module25)
	MR_init_entry1(fn__version_hash_table__search_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__search_2_0);
	MR_init_label3(fn__version_hash_table__search_2_0,2,6,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr5 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_tfield(0, MR_sv(1), 3);
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__search_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr3, VA);
	I = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 2553 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_hash_table__search_2_0_i6);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(2);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(assoc_list__search_3_0);
	}
MR_def_label(fn__version_hash_table__search_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_hash_table__search_2_0_i10);
MR_def_label(fn__version_hash_table__search_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(assoc_list__search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module26)
	MR_init_entry1(fn__version_hash_table__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__lookup_2_0);
	MR_init_label2(fn__version_hash_table__lookup_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
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


MR_BEGIN_MODULE(version_hash_table_module27)
	MR_init_entry1(fn__version_hash_table__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__elem_2_0);
	MR_init_label2(fn__version_hash_table__elem_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
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
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
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


MR_BEGIN_MODULE(version_hash_table_module28)
	MR_init_entry1(version_hash_table__search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__search_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
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


MR_BEGIN_MODULE(version_hash_table_module29)
	MR_init_entry1(fn__version_hash_table__to_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__to_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_r3, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__to_assoc_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 2729 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r7 = N;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module30)
	MR_init_entry1(fn__version_hash_table__from_assoc_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__from_assoc_list_2_2_0);
	MR_init_label3(fn__version_hash_table__from_assoc_list_2_2_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__from_assoc_list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__version_hash_table__from_assoc_list_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_hash_table__from_assoc_list_2_2_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(fn__version_hash_table__from_assoc_list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = MR_r4;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__version_hash_table__set_3_0,
		fn__version_hash_table__from_assoc_list_2_2_0_i4);
MR_def_label(fn__version_hash_table__from_assoc_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_hash_table__from_assoc_list_2_2_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module31)
	MR_init_entry1(fn__version_hash_table__from_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__from_assoc_list_2_0);
	MR_init_label1(fn__version_hash_table__from_assoc_list_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r4 = (MR_Integer) 7;
	MR_r5 = (MR_Word) &mercury_float_const_0pt90000000000000002;
	MR_np_call_localret_ent(fn__version_hash_table__new_3_0,
		fn__version_hash_table__from_assoc_list_2_0_i2);
MR_def_label(fn__version_hash_table__from_assoc_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_hash_table__from_assoc_list_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module32)
	MR_init_entry1(fn__version_hash_table__fold_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_hash_table__fold_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_hash_table__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_hash_table__fold_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 2881 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module33)
	MR_init_entry1(version_hash_table__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 2934 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module34)
	MR_init_entry1(version_hash_table__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_tfield(0, MR_r5, 3);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_hash_table__fold_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_tempr3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 100 "version_array.opt"

    N = ML_va_size(VA);
;}
#line 2987 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r8 = N;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(version_hash_table_module35)
	MR_init_entry1(version_hash_table__fold_f_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_f_4_0);
	MR_init_label3(version_hash_table__fold_f_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_f'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_f_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__fold_f_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(version_hash_table__fold_f_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(version_hash_table__fold_f_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__fold_f_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_hash_table__fold_f_4_0_i4);
MR_def_label(version_hash_table__fold_f_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_hash_table__fold_f_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module36)
	MR_init_entry1(version_hash_table__fold_f_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_f_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_f'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_f_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_f_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module37)
	MR_init_entry1(version_hash_table__fold_p_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_0);
	MR_init_label3(version_hash_table__fold_p_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__fold_p_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(version_hash_table__fold_p_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(version_hash_table__fold_p_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_hash_table__fold_p_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_hash_table__fold_p_4_0_i4);
MR_def_label(version_hash_table__fold_p_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_hash_table__fold_p_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module38)
	MR_init_entry1(version_hash_table__fold_p_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__fold_p_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_p'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_hash_table__fold_p_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(version_hash_table__fold_p_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module39)
	MR_init_entry1(__Unify___version_hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(version_hash_table_module40)
	MR_init_entry1(__Compare___version_hash_table__hash_pred_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_hash_table__hash_pred_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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

MR_decl_entry(__Unify___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_hash_table_module41)
	MR_init_entry1(__Unify___version_hash_table__version_hash_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_hash_table__version_hash_table_2_0);
	MR_init_label3(__Unify___version_hash_table__version_hash_table_2_0,4,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_hash_table__version_hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_sv(1), 3);
	MR_sv(2) = MR_tfield(0, MR_sv(2), 3);
	}
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,
		__Unify___version_hash_table__version_hash_table_2_0_i4);
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___version_hash_table__version_hash_table_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___version_array__version_array_1_0);
	}
MR_def_label(__Unify___version_hash_table__version_hash_table_2_0,10)
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

MR_decl_entry(__Compare___version_array__version_array_1_0);

MR_BEGIN_MODULE(version_hash_table_module42)
	MR_init_entry1(__Compare___version_hash_table__version_hash_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_hash_table__version_hash_table_2_0);
	MR_init_label10(__Compare___version_hash_table__version_hash_table_2_0,3,2,6,7,9,14,15,17,21,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_hash_table__version_hash_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
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
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
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
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i59);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i17);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
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
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,
		__Compare___version_hash_table__version_hash_table_2_0_i21);
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___version_hash_table__version_hash_table_2_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___version_array__version_array_1_0);
	}
MR_def_label(__Compare___version_hash_table__version_hash_table_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module43)
	MR_init_entry1(version_hash_table__list__foldl__ho14_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_hash_table__list__foldl__ho14_4_0);
	MR_init_label3(version_hash_table__list__foldl__ho14_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl__ho14'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_hash_table__list__foldl__ho14_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(version_hash_table__list__foldl__ho14_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(version_hash_table__list__foldl__ho14_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(version_hash_table__list__foldl__ho14_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(version_hash_table__generic_hash_2_0,
		version_hash_table__list__foldl__ho14_4_0_i4);
MR_def_label(version_hash_table__list__foldl__ho14_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__version_hash_table__list__foldl__ho14_4_0
{
#line 146 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 3475 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr3 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2) ^ ((MR_Integer) MR_tempr3 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2)));
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(version_hash_table__list__foldl__ho14_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(version_hash_table_module44)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_compare_pred__[2, 3]_0'/3 mode 0 */
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
#line 3518 "version_hash_table.c"
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


MR_BEGIN_MODULE(version_hash_table_module45)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_unify_pred__[1, 2]_0'/2 mode 0 */
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
#line 3561 "version_hash_table.c"
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
#line 3584 "version_hash_table.c"
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


MR_BEGIN_MODULE(version_hash_table_module46)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
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


MR_BEGIN_MODULE(version_hash_table_module47)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl__ho15__[3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 98 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 3653 "version_hash_table.c"
	MR_r5 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_51_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 106 "array.opt"

    Max = Array->size - 1;
;}
#line 3667 "version_hash_table.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);

MR_BEGIN_MODULE(version_hash_table_module48)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0);
	MR_init_label4(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0,11,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl_0__ho16__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0_i2);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0,2)
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
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0_i3);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(version_hash_table__generic_hash_2_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0_i4);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0
{
#line 146 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 3744 "version_hash_table.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_sv(2);
	MR_r4 = (((MR_Integer) MR_tempr3 << (MR_Integer) MR_tempr2) ^ ((MR_Integer) MR_tempr3 >> ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr2)));
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_48_95_95_104_111_49_54_95_95_91_51_93_95_48_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(version_hash_table_module49)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0);
	MR_init_label5(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0,26,4,9,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl_2__ho17__[1, 2, 3, 4, 5, 6, 10, 11]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3806 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0_i4);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r3 = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r2 = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0_i10);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0_i9);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__append_3_1,
		fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0_i10);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0_i26);
	}
MR_def_label(fn__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_49_48_44_32_49_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module50)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl_2__ho18__[1, 2, 3, 9, 10]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 3906 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(version_hash_table__fold_f_4_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module51)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl_2__ho19__[1, 2, 3, 9, 10]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 4002 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_hash_table_module52)
	MR_init_entry1(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0);
	MR_init_label5(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl_2__ho20__[1, 2, 3, 9, 10]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r6, VA);
	I = MR_r7;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 172 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get(VA, I, &X);
;}
#line 4098 "version_hash_table.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r6 = MR_r9;
	MR_sv(5) = MR_r5;
	MR_r5 = MR_r10;
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r5;
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i8);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(version_hash_table__fold_p_4_1,
		f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i9);
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0_i25);
	}
MR_def_label(f_118_101_114_115_105_111_110_95_104_97_115_104_95_116_97_98_108_101_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_48_95_95_91_49_44_32_50_44_32_51_44_32_57_44_32_49_48_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(10);
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
void mercury__version_hash_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
		mercury_data_version_hash_table__type_ctor_info_hash_pred_1,
		version_hash_table__hash_pred_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_hash_table__type_ctor_info_version_hash_table_2,
		version_hash_table__version_hash_table_2_0);
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
		&mercury_data_version_hash_table__type_ctor_info_hash_pred_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_version_hash_table__type_ctor_info_version_hash_table_2);
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

void mercury__version_hash_table__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__version_hash_table);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_hash_table__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
