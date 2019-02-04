/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__cord__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "cord.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "cord.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "cord.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "cord.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "cord.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "cord.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "cord.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "cord.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "cord.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "cord.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "cord.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "cord.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "cord.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "cord.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "cord.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "cord.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "cord.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "cord.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "cord.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "cord.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "cord.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "cord.c"
#line 113 "cord.c"
#include "cord.mh"

#line 116 "cord.c"
#line 117 "cord.c"
#ifndef CORD_DECL_GUARD
#define CORD_DECL_GUARD

#line 121 "cord.c"
#line 122 "cord.c"

#endif
#line 125 "cord.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_cord__type_ctor_info_cord_1,
	mercury_data_cord__type_ctor_info_cord_node_1;
MR_decl_label3(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0, 5,6,2)
MR_decl_label5(cord__equal_2_0, 3,4,2,6,7)
MR_decl_label1(cord__filter_3_0, 3)
MR_decl_label1(cord__filter_4_0, 3)
MR_decl_label8(cord__filter_node_3_0, 4,5,3,9,21,11,7,15)
MR_decl_label10(cord__filter_node_4_0, 4,5,6,7,3,10,12,11,16,8)
MR_decl_label2(cord__filter_node_4_0, 21,19)
MR_decl_label4(cord__foldl_node_pred_4_0, 19,4,3,6)
MR_decl_label4(cord__foldl_node_pred_4_1, 19,4,3,6)
MR_decl_label4(cord__foldl_node_pred_4_2, 19,4,3,6)
MR_decl_label5(cord__foldl_node_pred_4_3, 30,4,3,8,1)
MR_decl_label5(cord__foldl_node_pred_4_4, 30,4,3,8,1)
MR_decl_label5(cord__foldl_node_pred_4_5, 30,4,3,8,1)
MR_decl_label1(cord__foldl_pred_4_0, 3)
MR_decl_label1(cord__foldl_pred_4_1, 3)
MR_decl_label1(cord__foldl_pred_4_2, 3)
MR_decl_label1(cord__foldl_pred_4_3, 3)
MR_decl_label1(cord__foldl_pred_4_4, 3)
MR_decl_label1(cord__foldl_pred_4_5, 3)
MR_decl_label4(cord__foldr_node_pred_4_0, 19,4,3,6)
MR_decl_label4(cord__foldr_node_pred_4_1, 19,4,3,6)
MR_decl_label4(cord__foldr_node_pred_4_2, 19,4,3,6)
MR_decl_label5(cord__foldr_node_pred_4_3, 30,4,3,8,1)
MR_decl_label5(cord__foldr_node_pred_4_4, 30,4,3,8,1)
MR_decl_label5(cord__foldr_node_pred_4_5, 30,4,3,8,1)
MR_decl_label1(cord__foldr_pred_4_0, 3)
MR_decl_label1(cord__foldr_pred_4_1, 3)
MR_decl_label1(cord__foldr_pred_4_2, 3)
MR_decl_label1(cord__foldr_pred_4_3, 3)
MR_decl_label1(cord__foldr_pred_4_4, 3)
MR_decl_label1(cord__foldr_pred_4_5, 3)
MR_decl_label2(cord__get_first_2_0, 3,1)
MR_decl_label1(cord__get_first_node_2_0, 3)
MR_decl_label2(cord__get_last_2_0, 3,1)
MR_decl_label3(cord__get_last_node_2_0, 3,11,7)
MR_decl_label2(cord__head_tail_3_0, 3,1)
MR_decl_label5(cord__head_tail_node_3_0, 4,6,3,18,12)
MR_decl_label2(cord__map_foldl_5_0, 16,4)
MR_decl_label2(cord__map_foldl_5_1, 16,4)
MR_decl_label2(cord__map_foldl_5_2, 16,4)
MR_decl_label3(cord__map_foldl_5_3, 24,4,1)
MR_decl_label3(cord__map_foldl_5_4, 24,4,1)
MR_decl_label3(cord__map_foldl_5_5, 24,4,1)
MR_decl_label2(cord__map_foldl2_7_0, 16,4)
MR_decl_label7(cord__map_foldl2_node_7_0, 4,5,3,8,9,7,11)
MR_decl_label2(cord__map_foldl3_9_0, 16,4)
MR_decl_label7(cord__map_foldl3_node_9_0, 4,5,3,8,9,7,11)
MR_decl_label7(cord__map_foldl_node_5_0, 4,5,3,8,9,7,11)
MR_decl_label7(cord__map_foldl_node_5_1, 4,5,3,8,9,7,11)
MR_decl_label7(cord__map_foldl_node_5_2, 4,5,3,8,9,7,11)
MR_decl_label8(cord__map_foldl_node_5_3, 4,6,3,10,12,9,15,1)
MR_decl_label8(cord__map_foldl_node_5_4, 4,6,3,10,12,9,15,1)
MR_decl_label8(cord__map_foldl_node_5_5, 4,6,3,10,12,9,15,1)
MR_decl_label2(cord__map_pred_3_0, 16,4)
MR_decl_label7(cord__map_pred_node_3_0, 4,5,3,8,9,7,11)
MR_decl_label5(cord__member_node_2_0, 4,2,10,8,1)
MR_decl_label2(cord__split_last_3_0, 3,1)
MR_decl_label6(cord__split_last_node_3_0, 4,6,3,8,10,7)
MR_decl_label3(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0, 4,2)
MR_decl_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 13,4)
MR_decl_label2(fn__f_99_111_114_100_95_95_43_43_2_0, 3,5)
MR_decl_label4(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0, 18,4,3,6)
MR_decl_label2(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0, 5,2)
MR_decl_label1(fn__cord__cons_2_0, 3)
MR_decl_label2(fn__cord__cord_list_to_cord_1_0, 16,4)
MR_decl_label3(fn__cord__cord_list_to_list_1_0, 25,4,24)
MR_decl_label1(fn__cord__foldl_3_0, 3)
MR_decl_label4(fn__cord__foldl_node_3_0, 19,4,3,6)
MR_decl_label1(fn__cord__foldr_3_0, 3)
MR_decl_label4(fn__cord__foldr_node_3_0, 19,4,3,6)
MR_decl_label1(fn__cord__from_list_1_0, 3)
MR_decl_label1(fn__cord__length_1_0, 3)
MR_decl_label1(fn__cord__list_1_0, 3)
MR_decl_label5(fn__cord__list_2_2_0, 19,4,3,7,6)
MR_decl_label2(fn__cord__map_2_0, 16,4)
MR_decl_label7(fn__cord__map_node_2_0, 4,5,3,8,9,7,11)
MR_decl_label1(fn__cord__rev_list_1_0, 3)
MR_decl_label4(fn__cord__rev_list_2_2_0, 19,4,3,6)
MR_decl_label1(fn__cord__snoc_2_0, 3)
MR_decl_label3(__Unify___cord__cord_1_0, 12,5,1)
MR_decl_label7(__Unify___cord__cord_node_1_0, 56,7,5,13,29,11,1)
MR_decl_label4(__Compare___cord__cord_1_0, 18,7,5,9)
MR_decl_label10(__Compare___cord__cord_node_1_0, 93,3,2,9,45,5,17,20,15,26)
MR_decl_label2(__Compare___cord__cord_node_1_0, 27,102)
MR_def_extern_entry(fn__cord__init_0_0)
MR_def_extern_entry(fn__cord__empty_0_0)
MR_def_extern_entry(fn__cord__list_2_2_0)
MR_def_extern_entry(fn__cord__list_1_0)
MR_def_extern_entry(fn__cord__rev_list_2_2_0)
MR_def_extern_entry(fn__cord__rev_list_1_0)
MR_def_extern_entry(cord__is_empty_1_0)
MR_def_extern_entry(fn__cord__singleton_1_0)
MR_def_extern_entry(fn__cord__from_list_1_0)
MR_def_extern_entry(fn__cord__cons_2_0)
MR_def_extern_entry(fn__cord__snoc_2_0)
MR_def_extern_entry(fn__f_99_111_114_100_95_95_43_43_2_0)
MR_def_extern_entry(fn__cord__cord_list_to_cord_1_0)
MR_def_extern_entry(fn__cord__cord_list_to_list_1_0)
MR_def_extern_entry(cord__head_tail_node_3_0)
MR_def_extern_entry(cord__head_tail_3_0)
MR_def_extern_entry(cord__split_last_node_3_0)
MR_def_extern_entry(cord__split_last_3_0)
MR_def_extern_entry(cord__get_first_node_2_0)
MR_def_extern_entry(cord__get_first_2_0)
MR_def_extern_entry(cord__get_last_node_2_0)
MR_def_extern_entry(cord__get_last_2_0)
MR_def_extern_entry(fn__cord__foldl_node_3_0)
MR_def_extern_entry(fn__cord__foldl_3_0)
MR_def_extern_entry(fn__cord__length_1_0)
MR_def_extern_entry(cord__member_node_2_0)
MR_def_extern_entry(cord__member_2_0)
MR_def_extern_entry(fn__cord__map_node_2_0)
MR_def_extern_entry(fn__cord__map_2_0)
MR_def_extern_entry(cord__map_pred_node_3_0)
MR_def_extern_entry(cord__map_pred_3_0)
MR_def_extern_entry(cord__filter_node_3_0)
MR_def_extern_entry(cord__filter_3_0)
MR_def_extern_entry(cord__filter_node_4_0)
MR_def_extern_entry(cord__filter_4_0)
MR_def_extern_entry(cord__foldl_node_pred_4_0)
MR_def_extern_entry(cord__foldl_node_pred_4_1)
MR_def_extern_entry(cord__foldl_node_pred_4_2)
MR_def_extern_entry(cord__foldl_node_pred_4_3)
MR_def_extern_entry(cord__foldl_node_pred_4_4)
MR_def_extern_entry(cord__foldl_node_pred_4_5)
MR_def_extern_entry(cord__foldl_pred_4_0)
MR_def_extern_entry(cord__foldl_pred_4_1)
MR_def_extern_entry(cord__foldl_pred_4_2)
MR_def_extern_entry(cord__foldl_pred_4_3)
MR_def_extern_entry(cord__foldl_pred_4_4)
MR_def_extern_entry(cord__foldl_pred_4_5)
MR_def_extern_entry(fn__cord__foldr_node_3_0)
MR_def_extern_entry(fn__cord__foldr_3_0)
MR_def_extern_entry(cord__foldr_node_pred_4_0)
MR_def_extern_entry(cord__foldr_node_pred_4_1)
MR_def_extern_entry(cord__foldr_node_pred_4_2)
MR_def_extern_entry(cord__foldr_node_pred_4_3)
MR_def_extern_entry(cord__foldr_node_pred_4_4)
MR_def_extern_entry(cord__foldr_node_pred_4_5)
MR_def_extern_entry(cord__foldr_pred_4_0)
MR_def_extern_entry(cord__foldr_pred_4_1)
MR_def_extern_entry(cord__foldr_pred_4_2)
MR_def_extern_entry(cord__foldr_pred_4_3)
MR_def_extern_entry(cord__foldr_pred_4_4)
MR_def_extern_entry(cord__foldr_pred_4_5)
MR_def_extern_entry(cord__map_foldl_node_5_0)
MR_def_extern_entry(cord__map_foldl_node_5_1)
MR_def_extern_entry(cord__map_foldl_node_5_2)
MR_def_extern_entry(cord__map_foldl_node_5_3)
MR_def_extern_entry(cord__map_foldl_node_5_4)
MR_def_extern_entry(cord__map_foldl_node_5_5)
MR_def_extern_entry(cord__map_foldl_5_0)
MR_def_extern_entry(cord__map_foldl_5_1)
MR_def_extern_entry(cord__map_foldl_5_2)
MR_def_extern_entry(cord__map_foldl_5_3)
MR_def_extern_entry(cord__map_foldl_5_4)
MR_def_extern_entry(cord__map_foldl_5_5)
MR_def_extern_entry(cord__map_foldl2_node_7_0)
MR_def_extern_entry(cord__map_foldl2_7_0)
MR_def_extern_entry(cord__map_foldl3_node_9_0)
MR_def_extern_entry(cord__map_foldl3_9_0)
MR_def_extern_entry(cord__equal_2_0)
MR_def_extern_entry(__Unify___cord__cord_1_0)
MR_def_extern_entry(__Compare___cord__cord_1_0)
MR_def_extern_entry(__Unify___cord__cord_node_1_0)
MR_def_extern_entry(__Compare___cord__cord_node_1_0)
MR_decl_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0)
MR_decl_static(fn__f_99_111_114_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_1_0 = {
	"empty_cord",
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_cord__pti_cord_node_1__pseudo_1 = {
	&mercury_data_cord__type_ctor_info_cord_node_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_cord__pti_cord_node_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_1_1 = {
	"nonempty_cord",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_1_0[] = {
	&mercury_data_cord__du_functor_desc_cord_1_0

};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_1_1[] = {
	&mercury_data_cord__du_functor_desc_cord_1_1

};

const MR_DuPtagLayout mercury_data_cord__du_ptag_ordered_cord_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_cord__du_stag_ordered_cord_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_cord__du_name_ordered_cord_1[] = {
	&mercury_data_cord__du_functor_desc_cord_1_0,
	&mercury_data_cord__du_functor_desc_cord_1_1
};

const MR_Integer mercury_data_cord__functor_number_map_cord_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___cord__cord_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___cord__cord_1_0)),
	"cord",
	"cord",
	{ (void *)mercury_data_cord__du_name_ordered_cord_1 },
	{ (void *)mercury_data_cord__du_ptag_ordered_cord_1 },
	2,
	4,
	mercury_data_cord__functor_number_map_cord_1
};

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_node_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_node_1_0 = {
	"unit_node",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_node_1_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_node_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_node_1_1 = {
	"list_node",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_node_1_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_node_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_cord__pti_cord_node_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_cord__pti_cord_node_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_node_1_2 = {
	"branch_node",
	2,
	3,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_node_1_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_node_1_0[] = {
	&mercury_data_cord__du_functor_desc_cord_node_1_0

};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_node_1_1[] = {
	&mercury_data_cord__du_functor_desc_cord_node_1_1

};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_node_1_2[] = {
	&mercury_data_cord__du_functor_desc_cord_node_1_2

};

const MR_DuPtagLayout mercury_data_cord__du_ptag_ordered_cord_node_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_node_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_node_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_node_1_2 }

};

const MR_DuFunctorDescPtr mercury_data_cord__du_name_ordered_cord_node_1[] = {
	&mercury_data_cord__du_functor_desc_cord_node_1_2,
	&mercury_data_cord__du_functor_desc_cord_node_1_1,
	&mercury_data_cord__du_functor_desc_cord_node_1_0
};

const MR_Integer mercury_data_cord__functor_number_map_cord_node_1[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_node_1 = {
	1,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___cord__cord_node_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___cord__cord_node_1_0)),
	"cord",
	"cord_node",
	{ (void *)mercury_data_cord__du_name_ordered_cord_node_1 },
	{ (void *)mercury_data_cord__du_ptag_ordered_cord_node_1 },
	3,
	4,
	mercury_data_cord__functor_number_map_cord_node_1
};




MR_BEGIN_MODULE(cord_module0)
	MR_init_entry1(fn__cord__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module1)
	MR_init_entry1(fn__cord__empty_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__empty_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__empty_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(cord_module2)
	MR_init_entry1(fn__cord__list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__list_2_2_0);
	MR_init_label5(fn__cord__list_2_2_0,19,4,3,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__cord__list_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__cord__list_2_2_0_i3);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_localcall_lab(fn__cord__list_2_2_0,
		fn__cord__list_2_2_0_i4);
MR_def_label(fn__cord__list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__cord__list_2_2_0_i19);
	}
MR_def_label(fn__cord__list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__cord__list_2_2_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(list__append_3_1,
		fn__cord__list_2_2_0_i7);
MR_def_label(fn__cord__list_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__cord__list_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module3)
	MR_init_entry1(fn__cord__list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__list_1_0);
	MR_init_label1(fn__cord__list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__cord__list_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module4)
	MR_init_entry1(fn__cord__rev_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__rev_list_2_2_0);
	MR_init_label4(fn__cord__rev_list_2_2_0,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__rev_list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__cord__rev_list_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__cord__rev_list_2_2_0_i3);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		fn__cord__rev_list_2_2_0_i4);
MR_def_label(fn__cord__rev_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__cord__rev_list_2_2_0_i19);
	}
MR_def_label(fn__cord__rev_list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__cord__rev_list_2_2_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0);
	}
MR_def_label(fn__cord__rev_list_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module5)
	MR_init_entry1(fn__cord__rev_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__rev_list_1_0);
	MR_init_label1(fn__cord__rev_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rev_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__rev_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__rev_list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__rev_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__cord__rev_list_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module6)
	MR_init_entry1(cord__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module7)
	MR_init_entry1(fn__cord__singleton_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__singleton_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__singleton_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module8)
	MR_init_entry1(fn__cord__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__from_list_1_0);
	MR_init_label1(fn__cord__from_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__from_list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__from_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module9)
	MR_init_entry1(fn__cord__cons_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__cons_2_0);
	MR_init_label1(fn__cord__cons_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__cons_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__cord__cons_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__cord__cons_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tfield(2, MR_r2, 1) = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module10)
	MR_init_entry1(fn__cord__snoc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__snoc_2_0);
	MR_init_label1(fn__cord__snoc_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'snoc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__snoc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__snoc_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(fn__cord__snoc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module11)
	MR_init_entry1(fn__f_99_111_114_100_95_95_43_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_111_114_100_95_95_43_43_2_0);
	MR_init_label2(fn__f_99_111_114_100_95_95_43_43_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '++'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_99_111_114_100_95_95_43_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_43_43_2_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__f_99_111_114_100_95_95_43_43_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_43_43_2_0_i5);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_99_111_114_100_95_95_43_43_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module12)
	MR_init_entry1(fn__cord__cord_list_to_cord_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__cord_list_to_cord_1_0);
	MR_init_label2(fn__cord__cord_list_to_cord_1_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cord_list_to_cord'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__cord_list_to_cord_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_cord_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__cord_list_to_cord_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__cord__cord_list_to_cord_1_0,
		fn__cord__cord_list_to_cord_1_0_i4);
MR_def_label(fn__cord__cord_list_to_cord_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module13)
	MR_init_entry1(fn__cord__cord_list_to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__cord_list_to_list_1_0);
	MR_init_label3(fn__cord__cord_list_to_list_1_0,25,4,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cord_list_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__cord_list_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_list_1_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__cord_list_to_list_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__cord__cord_list_to_list_1_0,
		fn__cord__cord_list_to_list_1_0_i4);
MR_def_label(fn__cord__cord_list_to_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_list_1_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__cord__list_2_2_0);
	}
MR_def_label(fn__cord__cord_list_to_list_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module14)
	MR_init_entry1(cord__head_tail_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__head_tail_node_3_0);
	MR_init_label5(cord__head_tail_node_3_0,4,6,3,18,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head_tail_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__head_tail_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(cord__head_tail_node_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_localcall_lab(cord__head_tail_node_3_0,
		cord__head_tail_node_3_0_i4);
MR_def_label(cord__head_tail_node_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__head_tail_node_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(cord__head_tail_node_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(cord__head_tail_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(cord__head_tail_node_3_0_i18);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(cord__head_tail_node_3_0_i12);
	}
MR_def_label(cord__head_tail_node_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(cord__head_tail_node_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module15)
	MR_init_entry1(cord__head_tail_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__head_tail_3_0);
	MR_init_label2(cord__head_tail_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head_tail'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__head_tail_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__head_tail_3_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(cord__head_tail_node_3_0,
		cord__head_tail_3_0_i3);
MR_def_label(cord__head_tail_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(cord__head_tail_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module16)
	MR_init_entry1(cord__split_last_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__split_last_node_3_0);
	MR_init_label6(cord__split_last_node_3_0,4,6,3,8,10,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_last_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__split_last_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(cord__split_last_node_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_localcall_lab(cord__split_last_node_3_0,
		cord__split_last_node_3_0_i4);
MR_def_label(cord__split_last_node_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		cord__split_last_node_3_0_i6);
MR_def_label(cord__split_last_node_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(cord__split_last_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(cord__split_last_node_3_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0,
		cord__split_last_node_3_0_i8);
MR_def_label(cord__split_last_node_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__split_last_node_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(cord__split_last_node_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(cord__split_last_node_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module17)
	MR_init_entry1(cord__split_last_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__split_last_3_0);
	MR_init_label2(cord__split_last_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_last'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__split_last_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__split_last_3_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(cord__split_last_node_3_0,
		cord__split_last_3_0_i3);
MR_def_label(cord__split_last_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(cord__split_last_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module18)
	MR_init_entry1(cord__get_first_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__get_first_node_2_0);
	MR_init_label1(cord__get_first_node_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_first_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__get_first_node_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(cord__get_first_node_2_0_i3);
	}
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_localtailcall(cord__get_first_node_2_0);
MR_def_label(cord__get_first_node_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module19)
	MR_init_entry1(cord__get_first_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__get_first_2_0);
	MR_init_label2(cord__get_first_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_first'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__get_first_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__get_first_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(cord__get_first_node_2_0,
		cord__get_first_2_0_i3);
MR_def_label(cord__get_first_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(cord__get_first_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__det_last_2_0);

MR_BEGIN_MODULE(cord_module20)
	MR_init_entry1(cord__get_last_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__get_last_node_2_0);
	MR_init_label3(cord__get_last_node_2_0,3,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_last_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__get_last_node_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(cord__get_last_node_2_0_i3);
	}
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_localtailcall(cord__get_last_node_2_0);
MR_def_label(cord__get_last_node_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(cord__get_last_node_2_0_i11);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(cord__get_last_node_2_0_i7);
	}
MR_def_label(cord__get_last_node_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r2, 0);
	MR_proceed();
MR_def_label(cord__get_last_node_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(list__det_last_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module21)
	MR_init_entry1(cord__get_last_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__get_last_2_0);
	MR_init_label2(cord__get_last_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__get_last_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__get_last_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(cord__get_last_node_2_0,
		cord__get_last_2_0_i3);
MR_def_label(cord__get_last_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(cord__get_last_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(cord_module22)
	MR_init_entry1(fn__cord__foldl_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__foldl_node_3_0);
	MR_init_label4(fn__cord__foldl_node_3_0,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__foldl_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__cord__foldl_node_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__cord__foldl_node_3_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(fn__cord__foldl_node_3_0,
		fn__cord__foldl_node_3_0_i4);
MR_def_label(fn__cord__foldl_node_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__cord__foldl_node_3_0_i19);
	}
MR_def_label(fn__cord__foldl_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__cord__foldl_node_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r3;
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	}
MR_def_label(fn__cord__foldl_node_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__foldl_node_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module23)
	MR_init_entry1(fn__cord__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__foldl_3_0);
	MR_init_label1(fn__cord__foldl_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__cord__foldl_3_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(fn__cord__foldl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(fn__cord__foldl_node_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module24)
	MR_init_entry1(fn__cord__length_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__length_1_0);
	MR_init_label1(fn__cord__length_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'length'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__length_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__length_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__cord__length_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(cord_module25)
	MR_init_entry1(cord__member_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__member_node_2_0);
	MR_init_label5(cord__member_node_2_0,4,2,10,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__member_node_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred cord.member_node/2-0", 2,
		MR_ENTRY(MR_do_fail));
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(cord__member_node_2_0_i2);
	}
	MR_fv(1) = MR_tfield(2, MR_r2, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(cord__member_node_2_0_i4);
	MR_fv(2) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_localcall_lab(cord__member_node_2_0,
		cord__member_node_2_0_i1);
MR_def_label(cord__member_node_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(2);
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r2 = MR_fv(1);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(cord__member_node_2_0);
MR_def_label(cord__member_node_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(cord__member_node_2_0_i8);
	}
	MR_fv(1) = MR_tfield(1, MR_r2, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(cord__member_node_2_0_i10);
	MR_fv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_succeed();
MR_def_label(cord__member_node_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(1);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(list__member_2_1);
MR_def_label(cord__member_node_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
MR_def_label(cord__member_node_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(cord_module26)
	MR_init_entry1(cord__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__member_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred cord.member/2-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(cord__member_node_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(cord_module27)
	MR_init_entry1(fn__cord__map_node_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__map_node_2_0);
	MR_init_label7(fn__cord__map_node_2_0,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__map_node_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__cord__map_node_2_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(fn__cord__map_node_2_0,
		fn__cord__map_node_2_0_i4);
MR_def_label(fn__cord__map_node_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__cord__map_node_2_0,
		fn__cord__map_node_2_0_i5);
MR_def_label(fn__cord__map_node_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__cord__map_node_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__cord__map_node_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__map_node_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__cord__map_node_2_0_i8);
MR_def_label(fn__cord__map_node_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__cord__map_node_2_0_i9);
MR_def_label(fn__cord__map_node_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__cord__map_node_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__map_node_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__cord__map_node_2_0_i11);
MR_def_label(fn__cord__map_node_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module28)
	MR_init_entry1(fn__cord__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__map_2_0);
	MR_init_label2(fn__cord__map_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__cord__map_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__map_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__cord__map_node_2_0,
		fn__cord__map_2_0_i4);
MR_def_label(fn__cord__map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(cord_module29)
	MR_init_entry1(cord__map_pred_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_pred_node_3_0);
	MR_init_label7(cord__map_pred_node_3_0,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_pred_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_pred_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__map_pred_node_3_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__map_pred_node_3_0,
		cord__map_pred_node_3_0_i4);
MR_def_label(cord__map_pred_node_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(cord__map_pred_node_3_0,
		cord__map_pred_node_3_0_i5);
MR_def_label(cord__map_pred_node_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(cord__map_pred_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__map_pred_node_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_pred_node_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__map_pred_node_3_0_i8);
MR_def_label(cord__map_pred_node_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		cord__map_pred_node_3_0_i9);
MR_def_label(cord__map_pred_node_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(cord__map_pred_node_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_pred_node_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__map_pred_node_3_0_i11);
MR_def_label(cord__map_pred_node_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module30)
	MR_init_entry1(cord__map_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_pred_3_0);
	MR_init_label2(cord__map_pred_3_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__map_pred_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(cord__map_pred_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(cord__map_pred_node_3_0,
		cord__map_pred_3_0_i4);
MR_def_label(cord__map_pred_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(cord_module31)
	MR_init_entry1(cord__filter_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__filter_node_3_0);
	MR_init_label8(cord__filter_node_3_0,4,5,3,9,21,11,7,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_node'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__filter_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(cord__filter_node_3_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_np_localcall_lab(cord__filter_node_3_0,
		cord__filter_node_3_0_i4);
MR_def_label(cord__filter_node_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(cord__filter_node_3_0,
		cord__filter_node_3_0_i5);
MR_def_label(cord__filter_node_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
MR_def_label(cord__filter_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(cord__filter_node_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		cord__filter_node_3_0_i9);
MR_def_label(cord__filter_node_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__filter_node_3_0_i11);
	}
MR_def_label(cord__filter_node_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_node_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(cord__filter_node_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__filter_node_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__filter_node_3_0_i15);
MR_def_label(cord__filter_node_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__filter_node_3_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module32)
	MR_init_entry1(cord__filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__filter_3_0);
	MR_init_label1(cord__filter_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(cord__filter_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(cord__filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_tailcall_ent(cord__filter_node_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(cord_module33)
	MR_init_entry1(cord__filter_node_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__filter_node_4_0);
	MR_init_label10(cord__filter_node_4_0,4,5,6,7,3,10,12,11,16,8)
	MR_init_label2(cord__filter_node_4_0,21,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__filter_node_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(cord__filter_node_4_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_np_localcall_lab(cord__filter_node_4_0,
		cord__filter_node_4_0_i4);
MR_def_label(cord__filter_node_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__filter_node_4_0,
		cord__filter_node_4_0_i5);
MR_def_label(cord__filter_node_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		cord__filter_node_4_0_i6);
MR_def_label(cord__filter_node_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		cord__filter_node_4_0_i7);
MR_def_label(cord__filter_node_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(cord__filter_node_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(cord__filter_node_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		cord__filter_node_4_0_i10);
MR_def_label(cord__filter_node_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__filter_node_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(cord__filter_node_4_0_i11);
MR_def_label(cord__filter_node_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(cord__filter_node_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__filter_node_4_0_i16);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_node_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(cord__filter_node_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__filter_node_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__filter_node_4_0_i21);
MR_def_label(cord__filter_node_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__filter_node_4_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_node_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module34)
	MR_init_entry1(cord__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__filter_4_0);
	MR_init_label1(cord__filter_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(cord__filter_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_tailcall_ent(cord__filter_node_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(cord_module35)
	MR_init_entry1(cord__foldl_node_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_node_pred_4_0);
	MR_init_label4(cord__foldl_node_pred_4_0,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_node_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldl_node_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_node_pred_4_0,
		cord__foldl_node_pred_4_0_i4);
MR_def_label(cord__foldl_node_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldl_node_pred_4_0_i19);
	}
MR_def_label(cord__foldl_node_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(cord__foldl_node_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_node_pred_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(cord_module36)
	MR_init_entry1(cord__foldl_node_pred_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_node_pred_4_1);
	MR_init_label4(cord__foldl_node_pred_4_1,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node_pred'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_node_pred_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldl_node_pred_4_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_1_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_node_pred_4_1,
		cord__foldl_node_pred_4_1_i4);
MR_def_label(cord__foldl_node_pred_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldl_node_pred_4_1_i19);
	}
MR_def_label(cord__foldl_node_pred_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_1_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(cord__foldl_node_pred_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_node_pred_4_1));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(cord_module37)
	MR_init_entry1(cord__foldl_node_pred_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_node_pred_4_2);
	MR_init_label4(cord__foldl_node_pred_4_2,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node_pred'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_node_pred_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldl_node_pred_4_2,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_2_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_node_pred_4_2,
		cord__foldl_node_pred_4_2_i4);
MR_def_label(cord__foldl_node_pred_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldl_node_pred_4_2_i19);
	}
MR_def_label(cord__foldl_node_pred_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_2_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(cord__foldl_node_pred_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_node_pred_4_2));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(cord_module38)
	MR_init_entry1(cord__foldl_node_pred_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_node_pred_4_3);
	MR_init_label5(cord__foldl_node_pred_4_3,30,4,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node_pred'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_node_pred_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldl_node_pred_4_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_3_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_node_pred_4_3,
		cord__foldl_node_pred_4_3_i4);
MR_def_label(cord__foldl_node_pred_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldl_node_pred_4_3_i30);
	}
MR_def_label(cord__foldl_node_pred_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
MR_def_label(cord__foldl_node_pred_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_node_pred_4_3));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldl_node_pred_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_4);

MR_BEGIN_MODULE(cord_module39)
	MR_init_entry1(cord__foldl_node_pred_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_node_pred_4_4);
	MR_init_label5(cord__foldl_node_pred_4_4,30,4,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node_pred'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_node_pred_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldl_node_pred_4_4,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_4_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_node_pred_4_4,
		cord__foldl_node_pred_4_4_i4);
MR_def_label(cord__foldl_node_pred_4_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_4_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldl_node_pred_4_4_i30);
	}
MR_def_label(cord__foldl_node_pred_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_4_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_4);
	}
MR_def_label(cord__foldl_node_pred_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_node_pred_4_4));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldl_node_pred_4_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_5);

MR_BEGIN_MODULE(cord_module40)
	MR_init_entry1(cord__foldl_node_pred_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_node_pred_4_5);
	MR_init_label5(cord__foldl_node_pred_4_5,30,4,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_node_pred'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_node_pred_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldl_node_pred_4_5,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_5_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_node_pred_4_5,
		cord__foldl_node_pred_4_5_i4);
MR_def_label(cord__foldl_node_pred_4_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_5_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldl_node_pred_4_5_i30);
	}
MR_def_label(cord__foldl_node_pred_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldl_node_pred_4_5_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_5);
	}
MR_def_label(cord__foldl_node_pred_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_node_pred_4_5));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldl_node_pred_4_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module41)
	MR_init_entry1(cord__foldl_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_pred_4_0);
	MR_init_label1(cord__foldl_pred_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldl_pred_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(cord__foldl_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldl_node_pred_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module42)
	MR_init_entry1(cord__foldl_pred_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_pred_4_1);
	MR_init_label1(cord__foldl_pred_4_1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldl_pred_4_1_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(cord__foldl_pred_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldl_node_pred_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module43)
	MR_init_entry1(cord__foldl_pred_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_pred_4_2);
	MR_init_label1(cord__foldl_pred_4_2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldl_pred_4_2_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(cord__foldl_pred_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldl_node_pred_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module44)
	MR_init_entry1(cord__foldl_pred_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_pred_4_3);
	MR_init_label1(cord__foldl_pred_4_3,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldl_pred_4_3_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__foldl_pred_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldl_node_pred_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module45)
	MR_init_entry1(cord__foldl_pred_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_pred_4_4);
	MR_init_label1(cord__foldl_pred_4_4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldl_pred_4_4_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__foldl_pred_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldl_node_pred_4_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module46)
	MR_init_entry1(cord__foldl_pred_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldl_pred_4_5);
	MR_init_label1(cord__foldl_pred_4_5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldl_pred_4_5_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__foldl_pred_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldl_node_pred_4_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module47)
	MR_init_entry1(fn__cord__foldr_node_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__foldr_node_3_0);
	MR_init_label4(fn__cord__foldr_node_3_0,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__foldr_node_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__cord__foldr_node_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__cord__foldr_node_3_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(fn__cord__foldr_node_3_0,
		fn__cord__foldr_node_3_0_i4);
MR_def_label(fn__cord__foldr_node_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__cord__foldr_node_3_0_i19);
	}
MR_def_label(fn__cord__foldr_node_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__cord__foldr_node_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r3;
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	}
MR_def_label(fn__cord__foldr_node_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__foldr_node_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module48)
	MR_init_entry1(fn__cord__foldr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__cord__foldr_3_0);
	MR_init_label1(fn__cord__foldr_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__foldr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__cord__foldr_3_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(fn__cord__foldr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(fn__cord__foldr_node_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_0);

MR_BEGIN_MODULE(cord_module49)
	MR_init_entry1(cord__foldr_node_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_node_pred_4_0);
	MR_init_label4(cord__foldr_node_pred_4_0,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_node_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldr_node_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_node_pred_4_0,
		cord__foldr_node_pred_4_0_i4);
MR_def_label(cord__foldr_node_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldr_node_pred_4_0_i19);
	}
MR_def_label(cord__foldr_node_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_0);
	}
MR_def_label(cord__foldr_node_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_node_pred_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_1);

MR_BEGIN_MODULE(cord_module50)
	MR_init_entry1(cord__foldr_node_pred_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_node_pred_4_1);
	MR_init_label4(cord__foldr_node_pred_4_1,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node_pred'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_node_pred_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldr_node_pred_4_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_1_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_node_pred_4_1,
		cord__foldr_node_pred_4_1_i4);
MR_def_label(cord__foldr_node_pred_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldr_node_pred_4_1_i19);
	}
MR_def_label(cord__foldr_node_pred_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_1_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_1);
	}
MR_def_label(cord__foldr_node_pred_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_node_pred_4_1));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_2);

MR_BEGIN_MODULE(cord_module51)
	MR_init_entry1(cord__foldr_node_pred_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_node_pred_4_2);
	MR_init_label4(cord__foldr_node_pred_4_2,19,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node_pred'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_node_pred_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldr_node_pred_4_2,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_2_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_node_pred_4_2,
		cord__foldr_node_pred_4_2_i4);
MR_def_label(cord__foldr_node_pred_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldr_node_pred_4_2_i19);
	}
MR_def_label(cord__foldr_node_pred_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_2_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_2);
	}
MR_def_label(cord__foldr_node_pred_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_node_pred_4_2));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_3);

MR_BEGIN_MODULE(cord_module52)
	MR_init_entry1(cord__foldr_node_pred_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_node_pred_4_3);
	MR_init_label5(cord__foldr_node_pred_4_3,30,4,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node_pred'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_node_pred_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldr_node_pred_4_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_3_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_node_pred_4_3,
		cord__foldr_node_pred_4_3_i4);
MR_def_label(cord__foldr_node_pred_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldr_node_pred_4_3_i30);
	}
MR_def_label(cord__foldr_node_pred_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_3);
	}
MR_def_label(cord__foldr_node_pred_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_node_pred_4_3));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldr_node_pred_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_4);

MR_BEGIN_MODULE(cord_module53)
	MR_init_entry1(cord__foldr_node_pred_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_node_pred_4_4);
	MR_init_label5(cord__foldr_node_pred_4_4,30,4,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node_pred'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_node_pred_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldr_node_pred_4_4,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_4_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_node_pred_4_4,
		cord__foldr_node_pred_4_4_i4);
MR_def_label(cord__foldr_node_pred_4_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_4_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldr_node_pred_4_4_i30);
	}
MR_def_label(cord__foldr_node_pred_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_4_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_4);
	}
MR_def_label(cord__foldr_node_pred_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_node_pred_4_4));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldr_node_pred_4_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_5);

MR_BEGIN_MODULE(cord_module54)
	MR_init_entry1(cord__foldr_node_pred_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_node_pred_4_5);
	MR_init_label5(cord__foldr_node_pred_4_5,30,4,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_node_pred'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_node_pred_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(cord__foldr_node_pred_4_5,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_5_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_node_pred_4_5,
		cord__foldr_node_pred_4_5_i4);
MR_def_label(cord__foldr_node_pred_4_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_5_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(cord__foldr_node_pred_4_5_i30);
	}
MR_def_label(cord__foldr_node_pred_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(cord__foldr_node_pred_4_5_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr2 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_5);
	}
MR_def_label(cord__foldr_node_pred_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_node_pred_4_5));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldr_node_pred_4_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module55)
	MR_init_entry1(cord__foldr_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_pred_4_0);
	MR_init_label1(cord__foldr_pred_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldr_pred_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(cord__foldr_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldr_node_pred_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module56)
	MR_init_entry1(cord__foldr_pred_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_pred_4_1);
	MR_init_label1(cord__foldr_pred_4_1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldr_pred_4_1_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(cord__foldr_pred_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldr_node_pred_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module57)
	MR_init_entry1(cord__foldr_pred_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_pred_4_2);
	MR_init_label1(cord__foldr_pred_4_2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldr_pred_4_2_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(cord__foldr_pred_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldr_node_pred_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module58)
	MR_init_entry1(cord__foldr_pred_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_pred_4_3);
	MR_init_label1(cord__foldr_pred_4_3,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldr_pred_4_3_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__foldr_pred_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldr_node_pred_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module59)
	MR_init_entry1(cord__foldr_pred_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_pred_4_4);
	MR_init_label1(cord__foldr_pred_4_4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldr_pred_4_4_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__foldr_pred_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldr_node_pred_4_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module60)
	MR_init_entry1(cord__foldr_pred_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__foldr_pred_4_5);
	MR_init_label1(cord__foldr_pred_4_5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__foldr_pred_4_5_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__foldr_pred_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(cord__foldr_node_pred_4_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(cord_module61)
	MR_init_entry1(cord__map_foldl_node_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_node_5_0);
	MR_init_label7(cord__map_foldl_node_5_0,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_node'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_node_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_0_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_node_5_0,
		cord__map_foldl_node_5_0_i4);
MR_def_label(cord__map_foldl_node_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_node_5_0,
		cord__map_foldl_node_5_0_i5);
MR_def_label(cord__map_foldl_node_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_node_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_0_i8);
MR_def_label(cord__map_foldl_node_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		cord__map_foldl_node_5_0_i9);
MR_def_label(cord__map_foldl_node_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_node_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_0_i11);
MR_def_label(cord__map_foldl_node_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_2);

MR_BEGIN_MODULE(cord_module62)
	MR_init_entry1(cord__map_foldl_node_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_node_5_1);
	MR_init_label7(cord__map_foldl_node_5_1,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_node'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_node_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_1_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_node_5_1,
		cord__map_foldl_node_5_1_i4);
MR_def_label(cord__map_foldl_node_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_node_5_1,
		cord__map_foldl_node_5_1_i5);
MR_def_label(cord__map_foldl_node_5_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_node_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_1_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_1_i8);
MR_def_label(cord__map_foldl_node_5_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_2,
		cord__map_foldl_node_5_1_i9);
MR_def_label(cord__map_foldl_node_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_node_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_1_i11);
MR_def_label(cord__map_foldl_node_5_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_0);

MR_BEGIN_MODULE(cord_module63)
	MR_init_entry1(cord__map_foldl_node_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_node_5_2);
	MR_init_label7(cord__map_foldl_node_5_2,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_node'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_node_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_2_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_node_5_2,
		cord__map_foldl_node_5_2_i4);
MR_def_label(cord__map_foldl_node_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_node_5_2,
		cord__map_foldl_node_5_2_i5);
MR_def_label(cord__map_foldl_node_5_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_node_5_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_2_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_2_i8);
MR_def_label(cord__map_foldl_node_5_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_0,
		cord__map_foldl_node_5_2_i9);
MR_def_label(cord__map_foldl_node_5_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_node_5_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_2_i11);
MR_def_label(cord__map_foldl_node_5_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_3);

MR_BEGIN_MODULE(cord_module64)
	MR_init_entry1(cord__map_foldl_node_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_node_5_3);
	MR_init_label8(cord__map_foldl_node_5_3,4,6,3,10,12,9,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_node'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_node_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_node_5_3,
		cord__map_foldl_node_5_3_i4);
MR_def_label(cord__map_foldl_node_5_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_node_5_3,
		cord__map_foldl_node_5_3_i6);
MR_def_label(cord__map_foldl_node_5_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_3_i10);
MR_def_label(cord__map_foldl_node_5_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_3,
		cord__map_foldl_node_5_3_i12);
MR_def_label(cord__map_foldl_node_5_3,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_3_i15);
MR_def_label(cord__map_foldl_node_5_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_4);

MR_BEGIN_MODULE(cord_module65)
	MR_init_entry1(cord__map_foldl_node_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_node_5_4);
	MR_init_label8(cord__map_foldl_node_5_4,4,6,3,10,12,9,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_node'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_node_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_node_5_4,
		cord__map_foldl_node_5_4_i4);
MR_def_label(cord__map_foldl_node_5_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_node_5_4,
		cord__map_foldl_node_5_4_i6);
MR_def_label(cord__map_foldl_node_5_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_4_i10);
MR_def_label(cord__map_foldl_node_5_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_4,
		cord__map_foldl_node_5_4_i12);
MR_def_label(cord__map_foldl_node_5_4,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_4_i15);
MR_def_label(cord__map_foldl_node_5_4,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_5);

MR_BEGIN_MODULE(cord_module66)
	MR_init_entry1(cord__map_foldl_node_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_node_5_5);
	MR_init_label8(cord__map_foldl_node_5_5,4,6,3,10,12,9,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_node'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_node_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tfield(2, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_node_5_5,
		cord__map_foldl_node_5_5_i4);
MR_def_label(cord__map_foldl_node_5_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_node_5_5,
		cord__map_foldl_node_5_5_i6);
MR_def_label(cord__map_foldl_node_5_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_5_i10);
MR_def_label(cord__map_foldl_node_5_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_5,
		cord__map_foldl_node_5_5_i12);
MR_def_label(cord__map_foldl_node_5_5,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_node_5_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_node_5_5_i15);
MR_def_label(cord__map_foldl_node_5_5,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_node_5_5_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__map_foldl_node_5_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module67)
	MR_init_entry1(cord__map_foldl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_5_0);
	MR_init_label2(cord__map_foldl_5_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(cord__map_foldl_5_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(cord__map_foldl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(cord__map_foldl_node_5_0,
		cord__map_foldl_5_0_i4);
MR_def_label(cord__map_foldl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module68)
	MR_init_entry1(cord__map_foldl_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_5_1);
	MR_init_label2(cord__map_foldl_5_1,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(cord__map_foldl_5_1_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(cord__map_foldl_5_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(cord__map_foldl_node_5_1,
		cord__map_foldl_5_1_i4);
MR_def_label(cord__map_foldl_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module69)
	MR_init_entry1(cord__map_foldl_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_5_2);
	MR_init_label2(cord__map_foldl_5_2,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(cord__map_foldl_5_2_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(cord__map_foldl_5_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(cord__map_foldl_node_5_2,
		cord__map_foldl_5_2_i4);
MR_def_label(cord__map_foldl_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module70)
	MR_init_entry1(cord__map_foldl_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_5_3);
	MR_init_label3(cord__map_foldl_5_3,24,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(cord__map_foldl_5_3_i24);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__map_foldl_5_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(cord__map_foldl_node_5_3,
		cord__map_foldl_5_3_i4);
MR_def_label(cord__map_foldl_5_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_5_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(cord__map_foldl_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module71)
	MR_init_entry1(cord__map_foldl_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_5_4);
	MR_init_label3(cord__map_foldl_5_4,24,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(cord__map_foldl_5_4_i24);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__map_foldl_5_4,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(cord__map_foldl_node_5_4,
		cord__map_foldl_5_4_i4);
MR_def_label(cord__map_foldl_5_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_5_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(cord__map_foldl_5_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module72)
	MR_init_entry1(cord__map_foldl_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl_5_5);
	MR_init_label3(cord__map_foldl_5_5,24,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(cord__map_foldl_5_5_i24);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(cord__map_foldl_5_5,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(cord__map_foldl_node_5_5,
		cord__map_foldl_5_5_i4);
MR_def_label(cord__map_foldl_5_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__map_foldl_5_5_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(cord__map_foldl_5_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(list__map_foldl2_7_0);

MR_BEGIN_MODULE(cord_module73)
	MR_init_entry1(cord__map_foldl2_node_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl2_node_7_0);
	MR_init_label7(cord__map_foldl2_node_7_0,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2_node'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl2_node_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(cord__map_foldl2_node_7_0_i3);
	}
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_tfield(2, MR_r6, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r6 = MR_tfield(2, MR_r6, 0);
	MR_np_localcall_lab(cord__map_foldl2_node_7_0,
		cord__map_foldl2_node_7_0_i4);
MR_def_label(cord__map_foldl2_node_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_localcall_lab(cord__map_foldl2_node_7_0,
		cord__map_foldl2_node_7_0_i5);
MR_def_label(cord__map_foldl2_node_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(cord__map_foldl2_node_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(cord__map_foldl2_node_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl2_node_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__cord__map_foldl2_node_7_0_i8);
MR_def_label(cord__map_foldl2_node_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		cord__map_foldl2_node_7_0_i9);
MR_def_label(cord__map_foldl2_node_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(cord__map_foldl2_node_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(0, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl2_node_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__cord__map_foldl2_node_7_0_i11);
MR_def_label(cord__map_foldl2_node_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module74)
	MR_init_entry1(cord__map_foldl2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl2_7_0);
	MR_init_label2(cord__map_foldl2_7_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(cord__map_foldl2_7_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
MR_def_label(cord__map_foldl2_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r6 = MR_tfield(1, MR_r6, 0);
	MR_np_call_localret_ent(cord__map_foldl2_node_7_0,
		cord__map_foldl2_7_0_i4);
MR_def_label(cord__map_foldl2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);
MR_decl_entry(list__map_foldl3_9_1);

MR_BEGIN_MODULE(cord_module75)
	MR_init_entry1(cord__map_foldl3_node_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl3_node_9_0);
	MR_init_label7(cord__map_foldl3_node_9_0,4,5,3,8,9,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3_node'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl3_node_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(cord__map_foldl3_node_9_0_i3);
	}
	MR_sv(2) = MR_r6;
	MR_sv(1) = MR_tfield(2, MR_r7, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r7 = MR_tfield(2, MR_r7, 0);
	MR_np_localcall_lab(cord__map_foldl3_node_9_0,
		cord__map_foldl3_node_9_0_i4);
MR_def_label(cord__map_foldl3_node_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_localcall_lab(cord__map_foldl3_node_9_0,
		cord__map_foldl3_node_9_0_i5);
MR_def_label(cord__map_foldl3_node_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(cord__map_foldl3_node_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(cord__map_foldl3_node_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl3_node_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__cord__map_foldl3_node_9_0_i8);
MR_def_label(cord__map_foldl3_node_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		cord__map_foldl3_node_9_0_i9);
MR_def_label(cord__map_foldl3_node_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(cord__map_foldl3_node_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_tfield(0, MR_r7, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl3_node_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__cord__map_foldl3_node_9_0_i11);
MR_def_label(cord__map_foldl3_node_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module76)
	MR_init_entry1(cord__map_foldl3_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__map_foldl3_9_0);
	MR_init_label2(cord__map_foldl3_9_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl3_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(cord__map_foldl3_9_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_proceed();
MR_def_label(cord__map_foldl3_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r7 = MR_tfield(1, MR_r7, 0);
	MR_np_call_localret_ent(cord__map_foldl3_node_9_0,
		cord__map_foldl3_9_0_i4);
MR_def_label(cord__map_foldl3_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(cord_module77)
	MR_init_entry1(cord__equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__cord__equal_2_0);
	MR_init_label5(cord__equal_2_0,3,4,2,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__equal_2_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(cord__equal_2_0_i2);
MR_def_label(cord__equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		cord__equal_2_0_i4);
MR_def_label(cord__equal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(cord__equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(cord__equal_2_0_i6);
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(cord__equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		cord__equal_2_0_i7);
MR_def_label(cord__equal_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module78)
	MR_init_entry1(__Unify___cord__cord_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___cord__cord_1_0);
	MR_init_label3(__Unify___cord__cord_1_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___cord__cord_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___cord__cord_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___cord__cord_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___cord__cord_node_1_0);
MR_def_label(__Unify___cord__cord_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module79)
	MR_init_entry1(__Compare___cord__cord_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___cord__cord_1_0);
	MR_init_label4(__Compare___cord__cord_1_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___cord__cord_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i7);
	}
MR_def_label(__Compare___cord__cord_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___cord__cord_node_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(cord_module80)
	MR_init_entry1(__Unify___cord__cord_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___cord__cord_node_1_0);
	MR_init_label7(__Unify___cord__cord_node_1_0,56,7,5,13,29,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___cord__cord_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(__Unify___cord__cord_node_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(2, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(2, MR_tempr4, 1);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Unify___cord__cord_node_1_0,
		__Unify___cord__cord_node_1_0_i7);
MR_def_label(__Unify___cord__cord_node_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i56);
MR_def_label(__Unify___cord__cord_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___cord__cord_node_1_0_i13);
MR_def_label(__Unify___cord__cord_node_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___cord__cord_node_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___cord__cord_node_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___cord__cord_node_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___cord__cord_node_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(cord_module81)
	MR_init_entry1(__Compare___cord__cord_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___cord__cord_node_1_0);
	MR_init_label10(__Compare___cord__cord_node_1_0,93,3,2,9,45,5,17,20,15,26)
	MR_init_label2(__Compare___cord__cord_node_1_0,27,102)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___cord__cord_node_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(__Compare___cord__cord_node_1_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i2);
MR_def_label(__Compare___cord__cord_node_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_node_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___cord__cord_node_1_0,
		__Compare___cord__cord_node_1_0_i9);
MR_def_label(__Compare___cord__cord_node_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i102);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i93);
MR_def_label(__Compare___cord__cord_node_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_node_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i17);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_node_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___cord__cord_node_1_0_i20);
MR_def_label(__Compare___cord__cord_node_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i102);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___cord__cord_node_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_node_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___cord__cord_node_1_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_node_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___cord__cord_node_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module82)
	MR_init_entry1(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0);
	MR_init_label2(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__list_reverse_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0_i2);
	}
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module83)
	MR_init_entry1(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__split_list_last__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	break;
	} /* end while */
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	}
	break;
	} /* end while */
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module84)
	MR_init_entry1(fn__f_99_111_114_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_111_114_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_111_114_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module85)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldr__ho5__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,
		f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module86)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho6__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module87)
	MR_init_entry1(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_init_label4(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,18,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl_node__ho8__[1, 2, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i3);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_localcall_lab(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,
		fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i4);
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i18);
	}
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	}
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module88)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_init_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho6__ho10__[1, 2, 3, 4, 5, 6, 7, 8]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i2);
	}
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	break;
	} /* end while */
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__cord_maybe_bunch_0(void)
{
	cord_module0();
	cord_module1();
	cord_module2();
	cord_module3();
	cord_module4();
	cord_module5();
	cord_module6();
	cord_module7();
	cord_module8();
	cord_module9();
	cord_module10();
	cord_module11();
	cord_module12();
	cord_module13();
	cord_module14();
	cord_module15();
	cord_module16();
	cord_module17();
	cord_module18();
	cord_module19();
	cord_module20();
	cord_module21();
	cord_module22();
	cord_module23();
	cord_module24();
	cord_module25();
	cord_module26();
	cord_module27();
	cord_module28();
	cord_module29();
	cord_module30();
	cord_module31();
	cord_module32();
	cord_module33();
	cord_module34();
	cord_module35();
	cord_module36();
	cord_module37();
	cord_module38();
	cord_module39();
}

static void mercury__cord_maybe_bunch_1(void)
{
	cord_module40();
	cord_module41();
	cord_module42();
	cord_module43();
	cord_module44();
	cord_module45();
	cord_module46();
	cord_module47();
	cord_module48();
	cord_module49();
	cord_module50();
	cord_module51();
	cord_module52();
	cord_module53();
	cord_module54();
	cord_module55();
	cord_module56();
	cord_module57();
	cord_module58();
	cord_module59();
	cord_module60();
	cord_module61();
	cord_module62();
	cord_module63();
	cord_module64();
	cord_module65();
	cord_module66();
	cord_module67();
	cord_module68();
	cord_module69();
	cord_module70();
	cord_module71();
	cord_module72();
	cord_module73();
	cord_module74();
	cord_module75();
	cord_module76();
	cord_module77();
	cord_module78();
	cord_module79();
}

static void mercury__cord_maybe_bunch_2(void)
{
	cord_module80();
	cord_module81();
	cord_module82();
	cord_module83();
	cord_module84();
	cord_module85();
	cord_module86();
	cord_module87();
	cord_module88();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__cord__init(void);
void mercury__cord__init_type_tables(void);
void mercury__cord__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__cord__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__cord__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__cord__init_threadscope_string_table(void);
#endif

void mercury__cord__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__cord_maybe_bunch_0();
	mercury__cord_maybe_bunch_1();
	mercury__cord_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_cord__type_ctor_info_cord_1,
		cord__cord_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_cord__type_ctor_info_cord_node_1,
		cord__cord_node_1_0);
	mercury__cord__init_debugger();
}

void mercury__cord__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_cord__type_ctor_info_cord_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_cord__type_ctor_info_cord_node_1);
	}
}


void mercury__cord__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__cord__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__cord);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__cord__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__cord__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
