/*
** Automatically generated from `rbtree.m'
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
INIT mercury__rbtree__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "rbtree.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "rbtree.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "rbtree.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "rbtree.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "rbtree.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 47 "rbtree.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "rbtree.c"
#line 150 "io.opt"
#include "dir.mh"

#line 55 "rbtree.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 59 "rbtree.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "rbtree.c"
#line 20 "store.opt"
#include "store.mh"

#line 67 "rbtree.c"
#line 4 "char.opt"
#include "char.mh"

#line 71 "rbtree.c"
#line 3 "float.opt"
#include "float.mh"

#line 75 "rbtree.c"
#line 3 "math.opt"
#include "math.mh"

#line 79 "rbtree.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 83 "rbtree.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "rbtree.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "rbtree.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 95 "rbtree.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "rbtree.c"
#line 3 "list.opt"
#include "list.mh"

#line 103 "rbtree.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "rbtree.c"
#line 108 "rbtree.c"
#include "rbtree.mh"

#line 111 "rbtree.c"
#line 112 "rbtree.c"
#ifndef RBTREE_DECL_GUARD
#define RBTREE_DECL_GUARD

#line 116 "rbtree.c"
#line 117 "rbtree.c"

#endif
#line 120 "rbtree.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_rbtree__type_ctor_info_rbtree_2;
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1, 107,4,7,6,12,11,18,9)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1, 25,106,29,32,31,37,36,43)
MR_decl_label3(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1, 42,34,50)
MR_decl_label5(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0, 27,3,8,9,10)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0, 161,3,4,12,15,19,17,14)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0, 34,38,36,55,56,59,58,63)
MR_decl_label1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0, 1)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0, 168,3,4,11,14,17,15,13)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0, 32,35,33,31,49,52,50,69)
MR_decl_label5(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0, 70,72,76,75,78)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0, 28,4,5,6,27,10,11,12)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1, 136,3,4,11,14,17,15,13)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1, 31,33,36,34,53,54,57,56)
MR_decl_label2(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1, 59,61)
MR_decl_label2(rbtree__assoc_list_to_rbtree_2_0, 13,4)
MR_decl_label5(rbtree__count_2_0, 25,4,24,8,9)
MR_decl_label1(rbtree__delete_3_0, 2)
MR_decl_label8(rbtree__delete_2_5_0, 133,4,7,6,13,12,19,10)
MR_decl_label8(rbtree__delete_2_5_0, 26,132,32,35,34,41,40,47)
MR_decl_label5(rbtree__delete_2_5_0, 46,38,54,134,1)
MR_decl_label6(rbtree__foldl_4_0, 25,3,4,8,9,10)
MR_decl_label8(rbtree__foldl_4_1, 47,3,4,6,11,12,14,1)
MR_decl_label6(rbtree__foldl2_6_0, 25,3,4,8,9,10)
MR_decl_label8(rbtree__foldl2_6_1, 47,3,4,6,11,12,14,1)
MR_decl_label6(rbtree__foldl3_8_0, 25,3,4,8,9,10)
MR_decl_label8(rbtree__foldl3_8_1, 47,3,4,6,11,12,14,1)
MR_decl_label6(rbtree__insert_4_0, 42,4,10,41,2,1)
MR_decl_label4(rbtree__insert_duplicate_4_0, 33,4,11,32)
MR_decl_label5(rbtree__keys_2_0, 31,4,30,10,11)
MR_decl_label2(rbtree__lookup_3_0, 4,2)
MR_decl_label2(rbtree__lower_bound_lookup_4_0, 4,2)
MR_decl_label8(rbtree__lower_bound_search_4_0, 38,3,2,5,7,10,13,6)
MR_decl_label1(rbtree__lower_bound_search_4_0, 1)
MR_decl_label8(rbtree__map_values_3_0, 28,4,5,6,27,10,11,12)
MR_decl_label8(rbtree__map_values_3_1, 53,4,6,8,52,13,15,17)
MR_decl_label1(rbtree__map_values_3_1, 1)
MR_decl_label6(rbtree__member_3_0, 4,2,11,12,9,1)
MR_decl_label5(rbtree__rbtree_to_assoc_list_2_0, 35,4,34,12,13)
MR_decl_label2(rbtree__remove_4_0, 2,1)
MR_decl_label7(rbtree__remove_largest_4_0, 46,6,3,49,12,48,1)
MR_decl_label7(rbtree__remove_smallest_4_0, 46,6,3,49,12,48,1)
MR_decl_label7(rbtree__search_3_0, 32,3,2,5,7,10,1)
MR_decl_label5(rbtree__set_4_0, 42,4,9,15,41)
MR_decl_label8(rbtree__transform_value_4_0, 4,7,6,11,10,13,3,17)
MR_decl_label6(rbtree__transform_value_4_0, 20,19,24,23,26,1)
MR_decl_label8(rbtree__update_4_0, 4,7,6,10,12,3,16,19)
MR_decl_label4(rbtree__update_4_0, 18,22,24,1)
MR_decl_label2(rbtree__upper_bound_lookup_4_0, 4,2)
MR_decl_label8(rbtree__upper_bound_search_4_0, 37,3,2,5,10,7,13,6)
MR_decl_label1(rbtree__upper_bound_search_4_0, 1)
MR_decl_label5(rbtree__values_2_0, 31,4,30,10,11)
MR_decl_label1(fn__rbtree__delete_2_0, 2)
MR_decl_label2(fn__rbtree__lookup_2_0, 4,2)
MR_decl_label8(__Unify___rbtree__rbtree_2_0, 76,5,7,9,11,16,18,20)
MR_decl_label3(__Unify___rbtree__rbtree_2_0, 22,28,1)
MR_decl_label8(__Compare___rbtree__rbtree_2_0, 131,80,5,7,9,13,17,35)
MR_decl_label7(__Compare___rbtree__rbtree_2_0, 87,37,39,41,45,49,138)
MR_def_extern_entry(rbtree__init_1_0)
MR_def_extern_entry(fn__rbtree__init_0_0)
MR_def_extern_entry(rbtree__is_empty_1_0)
MR_def_extern_entry(rbtree__insert_4_0)
MR_def_extern_entry(rbtree__update_4_0)
MR_def_extern_entry(rbtree__transform_value_4_0)
MR_def_extern_entry(rbtree__set_4_0)
MR_def_extern_entry(fn__rbtree__set_3_0)
MR_def_extern_entry(rbtree__insert_duplicate_4_0)
MR_def_extern_entry(fn__rbtree__insert_duplicate_3_0)
MR_def_extern_entry(rbtree__member_3_0)
MR_def_extern_entry(rbtree__search_3_0)
MR_def_extern_entry(rbtree__lookup_3_0)
MR_def_extern_entry(fn__rbtree__lookup_2_0)
MR_def_extern_entry(rbtree__lower_bound_search_4_0)
MR_def_extern_entry(rbtree__lower_bound_lookup_4_0)
MR_def_extern_entry(rbtree__upper_bound_search_4_0)
MR_def_extern_entry(rbtree__upper_bound_lookup_4_0)
MR_def_extern_entry(rbtree__remove_smallest_4_0)
MR_def_extern_entry(rbtree__remove_largest_4_0)
MR_def_extern_entry(rbtree__delete_2_5_0)
MR_def_extern_entry(rbtree__delete_2_5_1)
MR_def_extern_entry(rbtree__delete_3_0)
MR_def_extern_entry(fn__rbtree__delete_2_0)
MR_def_extern_entry(rbtree__remove_4_0)
MR_def_extern_entry(rbtree__keys_2_0)
MR_def_extern_entry(fn__rbtree__keys_1_0)
MR_def_extern_entry(rbtree__values_2_0)
MR_def_extern_entry(fn__rbtree__values_1_0)
MR_def_extern_entry(rbtree__count_2_0)
MR_def_extern_entry(fn__rbtree__count_1_0)
MR_def_extern_entry(rbtree__assoc_list_to_rbtree_2_0)
MR_def_extern_entry(fn__rbtree__assoc_list_to_rbtree_1_0)
MR_def_extern_entry(fn__rbtree__from_assoc_list_1_0)
MR_def_extern_entry(rbtree__rbtree_to_assoc_list_2_0)
MR_def_extern_entry(fn__rbtree__rbtree_to_assoc_list_1_0)
MR_def_extern_entry(fn__rbtree__to_assoc_list_1_0)
MR_def_extern_entry(rbtree__foldl_4_0)
MR_def_extern_entry(rbtree__foldl_4_1)
MR_def_extern_entry(rbtree__foldl_4_2)
MR_def_extern_entry(fn__rbtree__foldl_3_0)
MR_def_extern_entry(rbtree__foldl2_6_0)
MR_def_extern_entry(rbtree__foldl2_6_1)
MR_def_extern_entry(rbtree__foldl2_6_2)
MR_def_extern_entry(rbtree__foldl2_6_3)
MR_def_extern_entry(rbtree__foldl3_8_0)
MR_def_extern_entry(rbtree__foldl3_8_1)
MR_def_extern_entry(rbtree__foldl3_8_2)
MR_def_extern_entry(rbtree__foldl3_8_3)
MR_def_extern_entry(rbtree__foldl3_8_4)
MR_def_extern_entry(rbtree__map_values_3_0)
MR_def_extern_entry(rbtree__map_values_3_1)
MR_def_extern_entry(fn__rbtree__map_values_2_0)
MR_def_extern_entry(__Unify___rbtree__rbtree_2_0)
MR_def_extern_entry(__Compare___rbtree__rbtree_2_0)
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1)
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0)
MR_def_extern_entry(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1)
MR_decl_static(fn__f_114_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0)
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)

static const MR_DuFunctorDesc mercury_data_rbtree__du_functor_desc_rbtree_2_0 = {
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

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_rbtree__pti_rbtree_2__pseudo_1__pseudo_2 = {
	&mercury_data_rbtree__type_ctor_info_rbtree_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

const MR_PseudoTypeInfo mercury_data_rbtree__field_types_rbtree_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rbtree__du_functor_desc_rbtree_2_1 = {
	"red",
	4,
	15,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_rbtree__field_types_rbtree_2_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_rbtree__field_types_rbtree_2_2[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rbtree__du_functor_desc_rbtree_2_2 = {
	"black",
	4,
	15,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_rbtree__field_types_rbtree_2_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rbtree__du_stag_ordered_rbtree_2_0[] = {
	&mercury_data_rbtree__du_functor_desc_rbtree_2_0

};

const MR_DuFunctorDescPtr mercury_data_rbtree__du_stag_ordered_rbtree_2_1[] = {
	&mercury_data_rbtree__du_functor_desc_rbtree_2_1

};

const MR_DuFunctorDescPtr mercury_data_rbtree__du_stag_ordered_rbtree_2_2[] = {
	&mercury_data_rbtree__du_functor_desc_rbtree_2_2

};

const MR_DuPtagLayout mercury_data_rbtree__du_ptag_ordered_rbtree_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_rbtree__du_stag_ordered_rbtree_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rbtree__du_stag_ordered_rbtree_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rbtree__du_stag_ordered_rbtree_2_2 }

};

const MR_DuFunctorDescPtr mercury_data_rbtree__du_name_ordered_rbtree_2[] = {
	&mercury_data_rbtree__du_functor_desc_rbtree_2_2,
	&mercury_data_rbtree__du_functor_desc_rbtree_2_0,
	&mercury_data_rbtree__du_functor_desc_rbtree_2_1
};

const MR_Integer mercury_data_rbtree__functor_number_map_rbtree_2[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rbtree__type_ctor_info_rbtree_2 = {
	2,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rbtree__rbtree_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rbtree__rbtree_2_0)),
	"rbtree",
	"rbtree",
	{ (void *)mercury_data_rbtree__du_name_ordered_rbtree_2 },
	{ (void *)mercury_data_rbtree__du_ptag_ordered_rbtree_2 },
	3,
	4,
	mercury_data_rbtree__functor_number_map_rbtree_2
};


MR_BEGIN_MODULE(rbtree_module0)
	MR_init_entry1(rbtree__init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module1)
	MR_init_entry1(fn__rbtree__init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module2)
	MR_init_entry1(rbtree__is_empty_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(rbtree_module3)
	MR_init_entry1(rbtree__insert_4_0);
	MR_init_label6(rbtree__insert_4_0,42,4,10,41,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__insert_4_0_i41);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__insert_4_0_i42);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tfield(2, MR_tempr2, 1) = MR_r5;
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__insert_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		rbtree__insert_4_0_i4);
MR_def_label(rbtree__insert_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__insert_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__insert_4_0_i10);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__insert_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("rbtree.set: new tree is empty", 29);
	}
	MR_np_call_localret_ent(require__error_1_0,
		rbtree__insert_4_0_i2);
MR_def_label(rbtree__insert_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(rbtree__insert_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("rbtree.insert: root node cannot be red!", 39);
	MR_np_call_localret_ent(require__error_1_0,
		rbtree__insert_4_0_i2);
MR_def_label(rbtree__insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(rbtree__insert_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(rbtree_module4)
	MR_init_entry1(rbtree__update_4_0);
	MR_init_label8(rbtree__update_4_0,4,7,6,10,12,3,16,19)
	MR_init_label4(rbtree__update_4_0,18,22,24,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__update_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__update_4_0_i4);
MR_def_label(rbtree__update_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__update_4_0,
		rbtree__update_4_0_i7);
MR_def_label(rbtree__update_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__update_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__update_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__update_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__update_4_0,
		rbtree__update_4_0_i12);
MR_def_label(rbtree__update_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__update_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__update_4_0_i16);
MR_def_label(rbtree__update_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i18);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__update_4_0,
		rbtree__update_4_0_i19);
MR_def_label(rbtree__update_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__update_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__update_4_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__update_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__update_4_0,
		rbtree__update_4_0_i24);
MR_def_label(rbtree__update_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__update_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(rbtree_module5)
	MR_init_entry1(rbtree__transform_value_4_0);
	MR_init_label8(rbtree__transform_value_4_0,4,7,6,11,10,13,3,17)
	MR_init_label6(rbtree__transform_value_4_0,20,19,24,23,26,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__transform_value_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__transform_value_4_0_i4);
MR_def_label(rbtree__transform_value_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(rbtree__transform_value_4_0,
		rbtree__transform_value_4_0_i7);
MR_def_label(rbtree__transform_value_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__transform_value_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__transform_value_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rbtree__transform_value_4_0_i11);
MR_def_label(rbtree__transform_value_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__transform_value_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_localcall_lab(rbtree__transform_value_4_0,
		rbtree__transform_value_4_0_i13);
MR_def_label(rbtree__transform_value_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__transform_value_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__transform_value_4_0_i17);
MR_def_label(rbtree__transform_value_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i19);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(rbtree__transform_value_4_0,
		rbtree__transform_value_4_0_i20);
MR_def_label(rbtree__transform_value_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__transform_value_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__transform_value_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rbtree__transform_value_4_0_i24);
MR_def_label(rbtree__transform_value_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__transform_value_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_localcall_lab(rbtree__transform_value_4_0,
		rbtree__transform_value_4_0_i26);
MR_def_label(rbtree__transform_value_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__transform_value_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__transform_value_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module6)
	MR_init_entry1(rbtree__set_4_0);
	MR_init_label5(rbtree__set_4_0,42,4,9,15,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__set_4_0_i15);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__set_4_0_i42);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tfield(2, MR_tempr2, 1) = MR_r5;
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(rbtree__set_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		rbtree__set_4_0_i4);
MR_def_label(rbtree__set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__set_4_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__set_4_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("rbtree.set: new tree is empty", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
	}
MR_def_label(rbtree__set_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(rbtree__set_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbtree.set: root node cannot be red!", 36);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(rbtree__set_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module7)
	MR_init_entry1(fn__rbtree__set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module8)
	MR_init_entry1(rbtree__insert_duplicate_4_0);
	MR_init_label4(rbtree__insert_duplicate_4_0,33,4,11,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__insert_duplicate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__insert_duplicate_4_0_i11);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__insert_duplicate_4_0_i33);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r4;
	MR_tfield(2, MR_tempr2, 1) = MR_r5;
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(rbtree__insert_duplicate_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		rbtree__insert_duplicate_4_0_i4);
MR_def_label(rbtree__insert_duplicate_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__insert_duplicate_4_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tempr2 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(rbtree__insert_duplicate_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbtree.insert_duplicate: root node cannot be red!", 49);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(rbtree__insert_duplicate_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module9)
	MR_init_entry1(fn__rbtree__insert_duplicate_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__insert_duplicate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__insert_duplicate_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(rbtree_module10)
	MR_init_entry1(rbtree__member_3_0);
	MR_init_label6(rbtree__member_3_0,4,2,11,12,9,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred rbtree.member/3-0", 4,
		MR_ENTRY(MR_do_fail));
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__member_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(2) = MR_ctfield(2, MR_tempr1, 3);
	MR_fv(1) = MR_ctfield(2, MR_tempr1, 2);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(rbtree__member_3_0_i4);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(rbtree__member_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(rbtree__member_3_0_i12);
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(1);
	MR_np_localcall_lab(rbtree__member_3_0,
		rbtree__member_3_0_i1);
MR_def_label(rbtree__member_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__member_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(2) = MR_ctfield(1, MR_tempr1, 3);
	MR_fv(1) = MR_ctfield(1, MR_tempr1, 2);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(rbtree__member_3_0_i11);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(rbtree__member_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(rbtree__member_3_0_i12);
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(1);
	MR_np_localcall_lab(rbtree__member_3_0,
		rbtree__member_3_0_i1);
MR_def_label(rbtree__member_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r3 = MR_fv(2);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(rbtree__member_3_0);
MR_def_label(rbtree__member_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(rbtree__member_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module11)
	MR_init_entry1(rbtree__search_3_0);
	MR_init_label7(rbtree__search_3_0,32,3,2,5,7,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(rbtree__search_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__search_3_0_i3);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_tempr1;
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_GOTO_LAB(rbtree__search_3_0_i2);
	}
MR_def_label(rbtree__search_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__search_3_0_i1);
	}
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	}
MR_def_label(rbtree__search_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__search_3_0_i5);
MR_def_label(rbtree__search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__search_3_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(rbtree__search_3_0_i32);
MR_def_label(rbtree__search_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__search_3_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(rbtree__search_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(rbtree__search_3_0_i32);
MR_def_label(rbtree__search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__report_lookup_error_3_0);

MR_BEGIN_MODULE(rbtree_module12)
	MR_init_entry1(rbtree__lookup_3_0);
	MR_init_label2(rbtree__lookup_3_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(rbtree__search_3_0,
		rbtree__lookup_3_0_i4);
MR_def_label(rbtree__lookup_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__lookup_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(rbtree__lookup_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("rbtree.lookup: key not found", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__report_lookup_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module13)
	MR_init_entry1(fn__rbtree__lookup_2_0);
	MR_init_label2(fn__rbtree__lookup_2_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(rbtree__search_3_0,
		fn__rbtree__lookup_2_0_i4);
MR_def_label(fn__rbtree__lookup_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rbtree__lookup_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__rbtree__lookup_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("rbtree.lookup: key not found", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__report_lookup_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module14)
	MR_init_entry1(rbtree__lower_bound_search_4_0);
	MR_init_label8(rbtree__lower_bound_search_4_0,38,3,2,5,7,10,13,6)
	MR_init_label1(rbtree__lower_bound_search_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__lower_bound_search_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(rbtree__lower_bound_search_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i3);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_tempr1;
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 3);
	MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i2);
	}
MR_def_label(rbtree__lower_bound_search_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 3);
	}
MR_def_label(rbtree__lower_bound_search_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__lower_bound_search_4_0_i5);
MR_def_label(rbtree__lower_bound_search_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i38);
MR_def_label(rbtree__lower_bound_search_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__lower_bound_search_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(rbtree__lower_bound_search_4_0,
		rbtree__lower_bound_search_4_0_i13);
MR_def_label(rbtree__lower_bound_search_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rbtree__lower_bound_search_4_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(rbtree__lower_bound_search_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__lower_bound_search_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module15)
	MR_init_entry1(rbtree__lower_bound_lookup_4_0);
	MR_init_label2(rbtree__lower_bound_lookup_4_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__lower_bound_lookup_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(rbtree__lower_bound_search_4_0,
		rbtree__lower_bound_lookup_4_0_i4);
MR_def_label(rbtree__lower_bound_lookup_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__lower_bound_lookup_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(rbtree__lower_bound_lookup_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("rbtree.lower_bound_lookup: key not found", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__report_lookup_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module16)
	MR_init_entry1(rbtree__upper_bound_search_4_0);
	MR_init_label8(rbtree__upper_bound_search_4_0,37,3,2,5,10,7,13,6)
	MR_init_label1(rbtree__upper_bound_search_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__upper_bound_search_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(rbtree__upper_bound_search_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i3);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_tempr1;
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 3);
	MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i2);
	}
MR_def_label(rbtree__upper_bound_search_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i1);
	}
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 3);
	}
MR_def_label(rbtree__upper_bound_search_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__upper_bound_search_4_0_i5);
MR_def_label(rbtree__upper_bound_search_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(rbtree__upper_bound_search_4_0,
		rbtree__upper_bound_search_4_0_i10);
MR_def_label(rbtree__upper_bound_search_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__upper_bound_search_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i13);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__upper_bound_search_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(rbtree__upper_bound_search_4_0_i37);
MR_def_label(rbtree__upper_bound_search_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__upper_bound_search_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module17)
	MR_init_entry1(rbtree__upper_bound_lookup_4_0);
	MR_init_label2(rbtree__upper_bound_lookup_4_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__upper_bound_lookup_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(rbtree__upper_bound_search_4_0,
		rbtree__upper_bound_lookup_4_0_i4);
MR_def_label(rbtree__upper_bound_lookup_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__upper_bound_lookup_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(rbtree__upper_bound_lookup_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("rbtree.upper_bound_lookup: key not found", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__report_lookup_error_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module18)
	MR_init_entry1(rbtree__remove_smallest_4_0);
	MR_init_label7(rbtree__remove_smallest_4_0,46,6,3,49,12,48,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__remove_smallest_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(2, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i46);
	}
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_r4 = MR_ctfield(2, MR_tempr1, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__remove_smallest_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_r3 = MR_r4;
	}
	MR_np_localcall_lab(rbtree__remove_smallest_4_0,
		rbtree__remove_smallest_4_0_i6);
MR_def_label(rbtree__remove_smallest_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(rbtree__remove_smallest_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(1, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i49);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__remove_smallest_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_r3 = MR_r4;
	}
	MR_np_localcall_lab(rbtree__remove_smallest_4_0,
		rbtree__remove_smallest_4_0_i12);
MR_def_label(rbtree__remove_smallest_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(rbtree__remove_smallest_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(rbtree__remove_smallest_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module19)
	MR_init_entry1(rbtree__remove_largest_4_0);
	MR_init_label7(rbtree__remove_largest_4_0,46,6,3,49,12,48,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__remove_largest_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(2, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i46);
	}
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(2, MR_r3, 1);
	MR_r4 = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__remove_largest_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_localcall_lab(rbtree__remove_largest_4_0,
		rbtree__remove_largest_4_0_i6);
MR_def_label(rbtree__remove_largest_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(rbtree__remove_largest_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_ctfield(1, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i49);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__remove_largest_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_localcall_lab(rbtree__remove_largest_4_0,
		rbtree__remove_largest_4_0_i12);
MR_def_label(rbtree__remove_largest_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(rbtree__remove_largest_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(rbtree__remove_largest_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module20)
	MR_init_entry1(rbtree__delete_2_5_0);
	MR_init_label8(rbtree__delete_2_5_0,133,4,7,6,13,12,19,10)
	MR_init_label8(rbtree__delete_2_5_0,26,132,32,35,34,41,40,47)
	MR_init_label5(rbtree__delete_2_5_0,46,38,54,134,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__delete_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i132);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i133);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i134);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__delete_2_5_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__delete_2_5_0_i4);
MR_def_label(rbtree__delete_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i7);
MR_def_label(rbtree__delete_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		rbtree__delete_2_5_0_i13);
MR_def_label(rbtree__delete_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		rbtree__delete_2_5_0_i19);
MR_def_label(rbtree__delete_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 3) = MR_r4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i26);
MR_def_label(rbtree__delete_2_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__delete_2_5_0_i32);
MR_def_label(rbtree__delete_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i34);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i35);
MR_def_label(rbtree__delete_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i38);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		rbtree__delete_2_5_0_i41);
MR_def_label(rbtree__delete_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		rbtree__delete_2_5_0_i47);
MR_def_label(rbtree__delete_2_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(rbtree__delete_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i54);
MR_def_label(rbtree__delete_2_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__delete_2_5_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(rbtree__delete_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module21)
	MR_init_entry1(rbtree__delete_2_5_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__delete_2_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module22)
	MR_init_entry1(rbtree__delete_3_0);
	MR_init_label1(rbtree__delete_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		rbtree__delete_3_0_i2);
MR_def_label(rbtree__delete_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module23)
	MR_init_entry1(fn__rbtree__delete_2_0);
	MR_init_label1(fn__rbtree__delete_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		fn__rbtree__delete_2_0_i2);
MR_def_label(fn__rbtree__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module24)
	MR_init_entry1(rbtree__remove_4_0);
	MR_init_label2(rbtree__remove_4_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(rbtree__delete_2_5_0,
		rbtree__remove_4_0_i2);
MR_def_label(rbtree__remove_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__remove_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(rbtree__remove_4_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rbtree__remove_4_0,1)
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

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(rbtree_module25)
	MR_init_entry1(rbtree__keys_2_0);
	MR_init_label5(rbtree__keys_2_0,31,4,30,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__keys_2_0_i30);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__keys_2_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(rbtree__keys_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__keys_2_0,
		rbtree__keys_2_0_i4);
MR_def_label(rbtree__keys_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__keys_2_0,
		rbtree__keys_2_0_i11);
MR_def_label(rbtree__keys_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__keys_2_0,
		rbtree__keys_2_0_i10);
MR_def_label(rbtree__keys_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__keys_2_0,
		rbtree__keys_2_0_i11);
MR_def_label(rbtree__keys_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module26)
	MR_init_entry1(fn__rbtree__keys_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__keys_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__keys_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module27)
	MR_init_entry1(rbtree__values_2_0);
	MR_init_label5(rbtree__values_2_0,31,4,30,10,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__values_2_0_i30);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__values_2_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(rbtree__values_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__values_2_0,
		rbtree__values_2_0_i4);
MR_def_label(rbtree__values_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__values_2_0,
		rbtree__values_2_0_i11);
MR_def_label(rbtree__values_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__values_2_0,
		rbtree__values_2_0_i10);
MR_def_label(rbtree__values_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__values_2_0,
		rbtree__values_2_0_i11);
MR_def_label(rbtree__values_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module28)
	MR_init_entry1(fn__rbtree__values_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__values_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__values_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module29)
	MR_init_entry1(rbtree__count_2_0);
	MR_init_label5(rbtree__count_2_0,25,4,24,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__count_2_0_i24);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__count_2_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(rbtree__count_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r3, 3);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_ctfield(2, MR_r3, 2);
	MR_np_localcall_lab(rbtree__count_2_0,
		rbtree__count_2_0_i4);
MR_def_label(rbtree__count_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__count_2_0,
		rbtree__count_2_0_i9);
MR_def_label(rbtree__count_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r3, 3);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_ctfield(1, MR_r3, 2);
	MR_np_localcall_lab(rbtree__count_2_0,
		rbtree__count_2_0_i8);
MR_def_label(rbtree__count_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__count_2_0,
		rbtree__count_2_0_i9);
MR_def_label(rbtree__count_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 1 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module30)
	MR_init_entry1(fn__rbtree__count_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__count_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module31)
	MR_init_entry1(rbtree__assoc_list_to_rbtree_2_0);
	MR_init_label2(rbtree__assoc_list_to_rbtree_2_0,13,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__assoc_list_to_rbtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__assoc_list_to_rbtree_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__assoc_list_to_rbtree_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(rbtree__assoc_list_to_rbtree_2_0,
		rbtree__assoc_list_to_rbtree_2_0_i4);
MR_def_label(rbtree__assoc_list_to_rbtree_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(rbtree__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module32)
	MR_init_entry1(fn__rbtree__assoc_list_to_rbtree_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__assoc_list_to_rbtree_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__assoc_list_to_rbtree_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module33)
	MR_init_entry1(fn__rbtree__from_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__assoc_list_to_rbtree_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;

MR_BEGIN_MODULE(rbtree_module34)
	MR_init_entry1(rbtree__rbtree_to_assoc_list_2_0);
	MR_init_label5(rbtree__rbtree_to_assoc_list_2_0,35,4,34,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__rbtree_to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__rbtree_to_assoc_list_2_0_i34);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__rbtree_to_assoc_list_2_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_ctfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__rbtree_to_assoc_list_2_0,
		rbtree__rbtree_to_assoc_list_2_0_i4);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__rbtree_to_assoc_list_2_0,
		rbtree__rbtree_to_assoc_list_2_0_i13);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_ctfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__rbtree_to_assoc_list_2_0,
		rbtree__rbtree_to_assoc_list_2_0_i12);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__rbtree_to_assoc_list_2_0,
		rbtree__rbtree_to_assoc_list_2_0_i13);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr3, 2) = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module35)
	MR_init_entry1(fn__rbtree__rbtree_to_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__rbtree_to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__rbtree_to_assoc_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module36)
	MR_init_entry1(fn__rbtree__to_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__rbtree_to_assoc_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(rbtree_module37)
	MR_init_entry1(rbtree__foldl_4_0);
	MR_init_label6(rbtree__foldl_4_0,25,3,4,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__foldl_4_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__foldl_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
	}
MR_def_label(rbtree__foldl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_ctfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_0,
		rbtree__foldl_4_0_i4);
MR_def_label(rbtree__foldl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__rbtree__foldl_4_0_i10);
MR_def_label(rbtree__foldl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_ctfield(1, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_0,
		rbtree__foldl_4_0_i9);
MR_def_label(rbtree__foldl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__rbtree__foldl_4_0_i10);
MR_def_label(rbtree__foldl_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(rbtree__foldl_4_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module38)
	MR_init_entry1(rbtree__foldl_4_1);
	MR_init_label8(rbtree__foldl_4_1,47,3,4,6,11,12,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl_4_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__foldl_4_1_i11);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__foldl_4_1_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(rbtree__foldl_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_ctfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_1,
		rbtree__foldl_4_1_i4);
MR_def_label(rbtree__foldl_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_1_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__rbtree__foldl_4_1_i6);
MR_def_label(rbtree__foldl_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_1_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(rbtree__foldl_4_1_i47);
	}
MR_def_label(rbtree__foldl_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_ctfield(1, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_1,
		rbtree__foldl_4_1_i12);
MR_def_label(rbtree__foldl_4_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_1_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__rbtree__foldl_4_1_i14);
MR_def_label(rbtree__foldl_4_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_1_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(rbtree__foldl_4_1_i47);
	}
MR_def_label(rbtree__foldl_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module39)
	MR_init_entry1(rbtree__foldl_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module40)
	MR_init_entry1(fn__rbtree__foldl_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_tailcall_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(rbtree_module41)
	MR_init_entry1(rbtree__foldl2_6_0);
	MR_init_label6(rbtree__foldl2_6_0,25,3,4,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r6);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__foldl2_6_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__foldl2_6_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__foldl2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_ctfield(2, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_0,
		rbtree__foldl2_6_0_i4);
MR_def_label(rbtree__foldl2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__rbtree__foldl2_6_0_i10);
MR_def_label(rbtree__foldl2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_ctfield(1, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_0,
		rbtree__foldl2_6_0_i9);
MR_def_label(rbtree__foldl2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__rbtree__foldl2_6_0_i10);
MR_def_label(rbtree__foldl2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(rbtree__foldl2_6_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module42)
	MR_init_entry1(rbtree__foldl2_6_1);
	MR_init_label8(rbtree__foldl2_6_1,47,3,4,6,11,12,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl2_6_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r6);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__foldl2_6_1_i11);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__foldl2_6_1_i3);
	}
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(rbtree__foldl2_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_ctfield(2, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_1,
		rbtree__foldl2_6_1_i4);
MR_def_label(rbtree__foldl2_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_1_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl2_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__rbtree__foldl2_6_1_i6);
MR_def_label(rbtree__foldl2_6_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_1_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(rbtree__foldl2_6_1_i47);
	}
MR_def_label(rbtree__foldl2_6_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_ctfield(1, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_1,
		rbtree__foldl2_6_1_i12);
MR_def_label(rbtree__foldl2_6_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_1_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl2_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__rbtree__foldl2_6_1_i14);
MR_def_label(rbtree__foldl2_6_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_1_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(rbtree__foldl2_6_1_i47);
	}
MR_def_label(rbtree__foldl2_6_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module43)
	MR_init_entry1(rbtree__foldl2_6_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module44)
	MR_init_entry1(rbtree__foldl2_6_3);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(rbtree_module45)
	MR_init_entry1(rbtree__foldl3_8_0);
	MR_init_label6(rbtree__foldl3_8_0,25,3,4,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl3_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r7);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__foldl3_8_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__foldl3_8_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_decr_sp_and_return(10);
	}
MR_def_label(rbtree__foldl3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_ctfield(2, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_0,
		rbtree__foldl3_8_0_i4);
MR_def_label(rbtree__foldl3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__rbtree__foldl3_8_0_i10);
MR_def_label(rbtree__foldl3_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_ctfield(1, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_0,
		rbtree__foldl3_8_0_i9);
MR_def_label(rbtree__foldl3_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__rbtree__foldl3_8_0_i10);
MR_def_label(rbtree__foldl3_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(rbtree__foldl3_8_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module46)
	MR_init_entry1(rbtree__foldl3_8_1);
	MR_init_label8(rbtree__foldl3_8_1,47,3,4,6,11,12,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl3_8_1,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r7);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i11);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i3);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(rbtree__foldl3_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_ctfield(2, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_1,
		rbtree__foldl3_8_1_i4);
MR_def_label(rbtree__foldl3_8_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl3_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__rbtree__foldl3_8_1_i6);
MR_def_label(rbtree__foldl3_8_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(rbtree__foldl3_8_1_i47);
	}
MR_def_label(rbtree__foldl3_8_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_ctfield(1, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_1,
		rbtree__foldl3_8_1_i12);
MR_def_label(rbtree__foldl3_8_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl3_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__rbtree__foldl3_8_1_i14);
MR_def_label(rbtree__foldl3_8_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(rbtree__foldl3_8_1_i47);
	}
MR_def_label(rbtree__foldl3_8_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module47)
	MR_init_entry1(rbtree__foldl3_8_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module48)
	MR_init_entry1(rbtree__foldl3_8_3);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module49)
	MR_init_entry1(rbtree__foldl3_8_4);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(rbtree_module50)
	MR_init_entry1(rbtree__map_values_3_0);
	MR_init_label8(rbtree__map_values_3_0,28,4,5,6,27,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__map_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__map_values_3_0_i27);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__map_values_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(rbtree__map_values_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(2, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_0_i4);
MR_def_label(rbtree__map_values_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__map_values_3_0,
		rbtree__map_values_3_0_i5);
MR_def_label(rbtree__map_values_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(rbtree__map_values_3_0,
		rbtree__map_values_3_0_i6);
MR_def_label(rbtree__map_values_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(rbtree__map_values_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_0_i10);
MR_def_label(rbtree__map_values_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__map_values_3_0,
		rbtree__map_values_3_0_i11);
MR_def_label(rbtree__map_values_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(rbtree__map_values_3_0,
		rbtree__map_values_3_0_i12);
MR_def_label(rbtree__map_values_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module51)
	MR_init_entry1(rbtree__map_values_3_1);
	MR_init_label8(rbtree__map_values_3_1,53,4,6,8,52,13,15,17)
	MR_init_label1(rbtree__map_values_3_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__map_values_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i52);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i53);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rbtree__map_values_3_1,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(2, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_1_i4);
MR_def_label(rbtree__map_values_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__map_values_3_1,
		rbtree__map_values_3_1_i6);
MR_def_label(rbtree__map_values_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(rbtree__map_values_3_1,
		rbtree__map_values_3_1_i8);
MR_def_label(rbtree__map_values_3_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(rbtree__map_values_3_1,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_1_i13);
MR_def_label(rbtree__map_values_3_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(rbtree__map_values_3_1,
		rbtree__map_values_3_1_i15);
MR_def_label(rbtree__map_values_3_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(rbtree__map_values_3_1,
		rbtree__map_values_3_1_i17);
MR_def_label(rbtree__map_values_3_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(rbtree__map_values_3_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module52)
	MR_init_entry1(fn__rbtree__map_values_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__map_values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(rbtree_module53)
	MR_init_entry1(__Unify___rbtree__rbtree_2_0);
	MR_init_label8(__Unify___rbtree__rbtree_2_0,76,5,7,9,11,16,18,20)
	MR_init_label3(__Unify___rbtree__rbtree_2_0,22,28,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rbtree__rbtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Unify___rbtree__rbtree_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i16);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___rbtree__rbtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i7);
MR_def_label(__Unify___rbtree__rbtree_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i9);
MR_def_label(__Unify___rbtree__rbtree_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(__Unify___rbtree__rbtree_2_0,
		__Unify___rbtree__rbtree_2_0_i11);
MR_def_label(__Unify___rbtree__rbtree_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i76);
MR_def_label(__Unify___rbtree__rbtree_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i18);
MR_def_label(__Unify___rbtree__rbtree_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i20);
MR_def_label(__Unify___rbtree__rbtree_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(__Unify___rbtree__rbtree_2_0,
		__Unify___rbtree__rbtree_2_0_i22);
MR_def_label(__Unify___rbtree__rbtree_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i76);
MR_def_label(__Unify___rbtree__rbtree_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___rbtree__rbtree_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module54)
	MR_init_entry1(__Compare___rbtree__rbtree_2_0);
	MR_init_label8(__Compare___rbtree__rbtree_2_0,131,80,5,7,9,13,17,35)
	MR_init_label7(__Compare___rbtree__rbtree_2_0,87,37,39,41,45,49,138)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rbtree__rbtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Compare___rbtree__rbtree_2_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i80);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i35);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i5);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i37);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i37);
	}
	}
MR_def_label(__Compare___rbtree__rbtree_2_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i87);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Compare___rbtree__rbtree_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_ctfield(2, MR_tempr5, 1);
	MR_sv(7) = MR_ctfield(2, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_ctfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	MR_r3 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i9);
MR_def_label(__Compare___rbtree__rbtree_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i138);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i13);
MR_def_label(__Compare___rbtree__rbtree_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i138);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(__Compare___rbtree__rbtree_2_0,
		__Compare___rbtree__rbtree_2_0_i17);
MR_def_label(__Compare___rbtree__rbtree_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i138);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i131);
MR_def_label(__Compare___rbtree__rbtree_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i39);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i37);
	}
	}
MR_def_label(__Compare___rbtree__rbtree_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_ctfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i41);
MR_def_label(__Compare___rbtree__rbtree_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i138);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i45);
MR_def_label(__Compare___rbtree__rbtree_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i138);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(__Compare___rbtree__rbtree_2_0,
		__Compare___rbtree__rbtree_2_0_i49);
MR_def_label(__Compare___rbtree__rbtree_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i138);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i131);
MR_def_label(__Compare___rbtree__rbtree_2_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module55)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0);
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,161,3,4,12,15,19,17,14)
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,34,38,36,55,56,59,58,63)
	MR_init_label1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i55);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r2;
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 3);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 2);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_ctfield(2, MR_tempr6, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i4);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr3, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr4, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_ctfield(1, MR_tempr1, 2);
	MR_tfield(2, MR_tempr4, 3) = MR_ctfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 3) = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i161);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i12);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i15);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(1, MR_tempr4, 1);
	MR_r6 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r6;
	MR_tfield(2, MR_tempr3, 1) = MR_r5;
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(1, MR_tempr4, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i34);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_r5 = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_ctfield(1, MR_tempr5, 1);
	MR_r8 = MR_ctfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i38);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = MR_ctfield(1, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_r8;
	MR_tfield(1, MR_tempr3, 1) = MR_r7;
	MR_tfield(1, MR_tempr3, 2) = MR_ctfield(1, MR_tempr1, 3);
	MR_tfield(1, MR_tempr3, 3) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(2, MR_tempr4, 3) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r8;
	MR_tfield(2, MR_tempr2, 1) = MR_r7;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 3) = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i56);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i58);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i59);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i63);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module56)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1);
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,136,3,4,11,14,17,15,13)
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,31,33,36,34,53,54,57,56)
	MR_init_label2(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,59,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i53);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r2;
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 3);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 2);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_ctfield(2, MR_tempr6, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i4);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr3, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr4, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_ctfield(1, MR_tempr1, 2);
	MR_tfield(2, MR_tempr4, 3) = MR_ctfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 3) = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i136);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i11);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i13);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i14);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr4, 1);
	MR_r5 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i17);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r2;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r5;
	MR_tfield(2, MR_tempr3, 1) = MR_r4;
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(1, MR_tempr4, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i33);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_r5 = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_ctfield(1, MR_tempr5, 1);
	MR_r8 = MR_ctfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i36);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = MR_ctfield(1, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_r8;
	MR_tfield(1, MR_tempr3, 1) = MR_r7;
	MR_tfield(1, MR_tempr3, 2) = MR_ctfield(1, MR_tempr1, 3);
	MR_tfield(1, MR_tempr3, 3) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(2, MR_tempr4, 3) = MR_tempr3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r8;
	MR_tfield(2, MR_tempr2, 1) = MR_r7;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 3) = MR_r5;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i54);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i56);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i57);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i61);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module57)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0);
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,168,3,4,11,14,17,15,13)
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,32,35,33,31,49,52,50,69)
	MR_init_label5(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,70,72,76,75,78)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i69);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r2;
	MR_tempr1 = MR_ctfield(2, MR_tempr6, 3);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 2);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_ctfield(2, MR_tempr6, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i4);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr3, 3) = MR_ctfield(1, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr4, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_ctfield(1, MR_tempr1, 2);
	MR_tfield(2, MR_tempr4, 3) = MR_ctfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 3) = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i168);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i11);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i13);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i14);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_tempr4, 1);
	MR_r5 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r2;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r5;
	MR_tfield(2, MR_tempr3, 1) = MR_r4;
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tempr4 = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(1, MR_tempr4, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i31);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i32);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_r5 = MR_ctfield(1, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_ctfield(1, MR_tempr4, 1);
	MR_r8 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i35);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r5;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r8;
	MR_tfield(2, MR_tempr3, 1) = MR_r7;
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r8;
	MR_tfield(1, MR_tempr1, 1) = MR_r7;
	MR_tfield(1, MR_tempr1, 2) = MR_r6;
	MR_tempr4 = MR_r5;
	MR_tfield(1, MR_tempr1, 3) = MR_ctfield(1, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(1, MR_tempr4, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(1, MR_tempr4, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i49);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r1;
	MR_r5 = MR_ctfield(1, MR_tempr5, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_ctfield(1, MR_tempr5, 1);
	MR_r8 = MR_ctfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i52);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = MR_ctfield(1, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_r8;
	MR_tfield(1, MR_tempr3, 1) = MR_r7;
	MR_tfield(1, MR_tempr3, 2) = MR_ctfield(1, MR_tempr1, 3);
	MR_tfield(1, MR_tempr3, 3) = MR_r5;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(2, MR_tempr4, 3) = MR_tempr3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r8;
	MR_tfield(2, MR_tempr2, 1) = MR_r7;
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 3) = MR_r5;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i70);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i72);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i76);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i75);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i76);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i78);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module58)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1);
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,107,4,7,6,12,11,18,9)
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,25,106,29,32,31,37,36,43)
	MR_init_label3(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,42,34,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i106);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i107);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i4);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i7);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i9);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i12);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i18);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 3) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i25);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i29);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i31);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i32);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i34);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i37);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i43);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i50);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module59)
	MR_init_entry1(fn__f_114_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_114_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module60)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0);
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,28,4,5,6,27,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i27);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(4) = MR_r1;
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i4);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i5);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i6);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(4) = MR_r1;
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i10);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i11);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i12);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module61)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_init_label5(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,27,3,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i10);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i27);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__rbtree_maybe_bunch_0(void)
{
	rbtree_module0();
	rbtree_module1();
	rbtree_module2();
	rbtree_module3();
	rbtree_module4();
	rbtree_module5();
	rbtree_module6();
	rbtree_module7();
	rbtree_module8();
	rbtree_module9();
	rbtree_module10();
	rbtree_module11();
	rbtree_module12();
	rbtree_module13();
	rbtree_module14();
	rbtree_module15();
	rbtree_module16();
	rbtree_module17();
	rbtree_module18();
	rbtree_module19();
	rbtree_module20();
	rbtree_module21();
	rbtree_module22();
	rbtree_module23();
	rbtree_module24();
	rbtree_module25();
	rbtree_module26();
	rbtree_module27();
	rbtree_module28();
	rbtree_module29();
	rbtree_module30();
	rbtree_module31();
	rbtree_module32();
	rbtree_module33();
	rbtree_module34();
	rbtree_module35();
	rbtree_module36();
	rbtree_module37();
	rbtree_module38();
	rbtree_module39();
}

static void mercury__rbtree_maybe_bunch_1(void)
{
	rbtree_module40();
	rbtree_module41();
	rbtree_module42();
	rbtree_module43();
	rbtree_module44();
	rbtree_module45();
	rbtree_module46();
	rbtree_module47();
	rbtree_module48();
	rbtree_module49();
	rbtree_module50();
	rbtree_module51();
	rbtree_module52();
	rbtree_module53();
	rbtree_module54();
	rbtree_module55();
	rbtree_module56();
	rbtree_module57();
	rbtree_module58();
	rbtree_module59();
	rbtree_module60();
	rbtree_module61();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__rbtree__init(void);
void mercury__rbtree__init_type_tables(void);
void mercury__rbtree__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__rbtree__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__rbtree__init_complexity_procs(void);
#endif

void mercury__rbtree__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__rbtree_maybe_bunch_0();
	mercury__rbtree_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rbtree__type_ctor_info_rbtree_2,
		rbtree__rbtree_2_0);
	mercury__rbtree__init_debugger();
}

void mercury__rbtree__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_rbtree__type_ctor_info_rbtree_2);
	}
}


void mercury__rbtree__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__rbtree__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__rbtree);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__rbtree__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
