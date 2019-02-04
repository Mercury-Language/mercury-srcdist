/*
** Automatically generated from `rbtree.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__rbtree__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "rbtree.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "rbtree.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "rbtree.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "rbtree.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "rbtree.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 48 "rbtree.c"
#line 61 "array.opt"
#include "store.mh"

#line 52 "rbtree.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "rbtree.c"
#line 156 "io.opt"
#include "dir.mh"

#line 60 "rbtree.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 64 "rbtree.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "rbtree.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "rbtree.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 76 "rbtree.c"
#line 4 "char.opt"
#include "char.mh"

#line 80 "rbtree.c"
#line 3 "float.opt"
#include "float.mh"

#line 84 "rbtree.c"
#line 3 "math.opt"
#include "math.mh"

#line 88 "rbtree.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "rbtree.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 96 "rbtree.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "rbtree.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "rbtree.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "rbtree.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "rbtree.c"
#line 113 "rbtree.c"
#include "rbtree.mh"

#line 116 "rbtree.c"
#line 117 "rbtree.c"
#ifndef RBTREE_DECL_GUARD
#define RBTREE_DECL_GUARD

#line 121 "rbtree.c"
#line 122 "rbtree.c"

#endif
#line 125 "rbtree.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_rbtree__type_ctor_info_rbtree_2;
MR_decl_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1, 123,5,8,7,13,12,19,10,26,4)
MR_decl_label9(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1, 28,31,30,36,35,42,41,33,49)
MR_decl_label5(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0, 24,3,4,8,9)
MR_decl_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0, 176,3,6,14,17,21,19,16,36,40)
MR_decl_label7(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0, 38,5,55,58,57,62,1)
MR_decl_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0, 182,3,6,13,16,19,17,15,34,37)
MR_decl_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0, 35,33,51,54,59,52,5,69,72,71)
MR_decl_label3(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0, 75,74,77)
MR_decl_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0, 30,5,6,7,4,9,10,11)
MR_decl_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1, 147,3,6,13,16,19,17,15,33,35)
MR_decl_label9(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1, 38,43,36,5,53,56,55,58,60)
MR_decl_label2(rbtree__assoc_list_to_rbtree_2_0, 16,4)
MR_decl_label5(rbtree__count_2_0, 21,5,4,7,8)
MR_decl_label1(rbtree__delete_3_0, 2)
MR_decl_label10(rbtree__delete_2_5_0, 159,6,9,8,15,14,21,12,28,5)
MR_decl_label10(rbtree__delete_2_5_0, 31,34,33,40,39,46,45,37,53,160)
MR_decl_label1(rbtree__delete_2_5_0, 1)
MR_decl_label7(rbtree__foldl_4_0, 20,3,5,6,4,8,9)
MR_decl_label8(rbtree__foldl_4_3, 44,3,5,7,4,11,13,1)
MR_decl_label7(rbtree__foldl2_6_0, 20,3,5,6,4,8,9)
MR_decl_label8(rbtree__foldl2_6_4, 44,3,5,7,4,11,13,1)
MR_decl_label7(rbtree__foldl3_8_0, 20,3,5,6,4,8,9)
MR_decl_label8(rbtree__foldl3_8_1, 44,3,5,7,4,11,13,1)
MR_decl_label6(rbtree__insert_4_0, 4,8,3,51,2,1)
MR_decl_label4(rbtree__insert_duplicate_4_0, 4,3,9,35)
MR_decl_label5(rbtree__keys_2_0, 29,5,4,9,10)
MR_decl_label2(rbtree__lookup_3_0, 4,2)
MR_decl_label2(rbtree__lower_bound_lookup_4_0, 4,2)
MR_decl_label9(rbtree__lower_bound_search_4_0, 38,3,2,5,7,10,13,6,1)
MR_decl_label8(rbtree__map_values_3_0, 30,5,6,7,4,9,10,11)
MR_decl_label9(rbtree__map_values_3_1, 73,5,7,9,4,12,14,16,1)
MR_decl_label6(rbtree__member_3_0, 4,2,11,12,9,1)
MR_decl_label6(rbtree__rbtree_to_assoc_list_2_0, 34,5,6,4,11,12)
MR_decl_label2(rbtree__remove_4_0, 2,1)
MR_decl_label7(rbtree__remove_largest_4_0, 46,6,3,49,12,48,1)
MR_decl_label7(rbtree__remove_smallest_4_0, 46,6,3,49,12,48,1)
MR_decl_label7(rbtree__search_3_0, 32,3,2,5,7,10,1)
MR_decl_label5(rbtree__set_4_0, 4,7,3,10,43)
MR_decl_label10(rbtree__transform_value_4_0, 4,7,6,11,10,13,3,17,20,19)
MR_decl_label4(rbtree__transform_value_4_0, 24,23,26,1)
MR_decl_label10(rbtree__update_4_0, 4,7,6,10,12,3,16,19,18,22)
MR_decl_label2(rbtree__update_4_0, 24,1)
MR_decl_label2(rbtree__upper_bound_lookup_4_0, 4,2)
MR_decl_label9(rbtree__upper_bound_search_4_0, 37,3,2,5,10,7,13,6,1)
MR_decl_label5(rbtree__values_2_0, 29,5,4,9,10)
MR_decl_label1(fn__rbtree__delete_2_0, 2)
MR_decl_label2(fn__rbtree__lookup_2_0, 4,2)
MR_decl_label10(__Unify___rbtree__rbtree_2_0, 73,5,8,10,12,34,6,17,19,21)
MR_decl_label1(__Unify___rbtree__rbtree_2_0, 1)
MR_decl_label10(__Compare___rbtree__rbtree_2_0, 114,66,7,5,11,14,18,22,9,59)
MR_decl_label7(__Compare___rbtree__rbtree_2_0, 30,60,31,33,37,41,122)
MR_def_extern_entry(rbtree__init_1_0)
MR_def_extern_entry(fn__rbtree__init_0_0)
MR_def_extern_entry(fn__rbtree__singleton_2_0)
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
MR_def_extern_entry(rbtree__foldl_4_3)
MR_def_extern_entry(rbtree__foldl_4_4)
MR_def_extern_entry(rbtree__foldl_4_5)
MR_def_extern_entry(fn__rbtree__foldl_3_0)
MR_def_extern_entry(rbtree__foldl2_6_0)
MR_def_extern_entry(rbtree__foldl2_6_1)
MR_def_extern_entry(rbtree__foldl2_6_2)
MR_def_extern_entry(rbtree__foldl2_6_3)
MR_def_extern_entry(rbtree__foldl2_6_4)
MR_def_extern_entry(rbtree__foldl2_6_5)
MR_def_extern_entry(rbtree__foldl2_6_6)
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
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0)
MR_decl_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)

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
	14,
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
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
	MR_init_entry1(fn__rbtree__singleton_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__singleton_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__singleton_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r3;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module3)
	MR_init_entry1(rbtree__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
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

MR_BEGIN_MODULE(rbtree_module4)
	MR_init_entry1(rbtree__insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__insert_4_0);
	MR_init_label6(rbtree__insert_4_0,4,8,3,51,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__insert_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		rbtree__insert_4_0_i4);
MR_def_label(rbtree__insert_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__insert_4_0_i1);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(rbtree__insert_4_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(rbtree__insert_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(1, MR_r2, 2);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_r2, 3);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(rbtree__insert_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbtree.insert: new tree is empty", 32);
	MR_np_call_localret_ent(require__error_1_0,
		rbtree__insert_4_0_i2);
MR_def_label(rbtree__insert_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__insert_4_0_i51);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_r3;
	MR_tfield(2, MR_r2, 1) = MR_r4;
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rbtree__insert_4_0,51)
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

MR_BEGIN_MODULE(rbtree_module5)
	MR_init_entry1(rbtree__update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__update_4_0);
	MR_init_label10(rbtree__update_4_0,4,7,6,10,12,3,16,19,18,22)
	MR_init_label2(rbtree__update_4_0,24,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__update_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 3);
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
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
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
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rbtree__update_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
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
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rbtree__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
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
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_sv(5);
	MR_tfield(1, MR_r2, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rbtree__update_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
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

MR_BEGIN_MODULE(rbtree_module6)
	MR_init_entry1(rbtree__transform_value_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__transform_value_4_0);
	MR_init_label10(rbtree__transform_value_4_0,4,7,6,11,10,13,3,17,20,19)
	MR_init_label4(rbtree__transform_value_4_0,24,23,26,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_value'/4 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
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
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = MR_sv(5);
	MR_tfield(1, MR_r2, 3) = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
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


MR_BEGIN_MODULE(rbtree_module7)
	MR_init_entry1(rbtree__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__set_4_0);
	MR_init_label5(rbtree__set_4_0,4,7,3,10,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__set_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		rbtree__set_4_0_i4);
MR_def_label(rbtree__set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(rbtree__set_4_0_i43);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__set_4_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(2, MR_r2, 1) = MR_tfield(1, MR_r1, 1);
	MR_tfield(2, MR_r2, 2) = MR_tfield(1, MR_r1, 2);
	MR_tfield(2, MR_r2, 3) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(rbtree__set_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbtree.set: new tree is empty", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(rbtree__set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__set_4_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r3;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__set_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbtree.set: root node cannot be red!", 36);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(rbtree__set_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module8)
	MR_init_entry1(fn__rbtree__set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__set_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(rbtree__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module9)
	MR_init_entry1(rbtree__insert_duplicate_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__insert_duplicate_4_0);
	MR_init_label4(rbtree__insert_duplicate_4_0,4,3,9,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_duplicate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__insert_duplicate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__insert_duplicate_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		rbtree__insert_duplicate_4_0_i4);
MR_def_label(rbtree__insert_duplicate_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__insert_duplicate_4_0_i35);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(2, MR_r2, 1) = MR_tfield(1, MR_r1, 1);
	MR_tfield(2, MR_r2, 2) = MR_tfield(1, MR_r1, 2);
	MR_tfield(2, MR_r2, 3) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(rbtree__insert_duplicate_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__insert_duplicate_4_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r3;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__insert_duplicate_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbtree.insert_duplicate: root node cannot be red!", 49);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(rbtree__insert_duplicate_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module10)
	MR_init_entry1(fn__rbtree__insert_duplicate_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__insert_duplicate_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_duplicate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__insert_duplicate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(rbtree__insert_duplicate_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(rbtree_module11)
	MR_init_entry1(rbtree__member_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__member_3_0);
	MR_init_label6(rbtree__member_3_0,4,2,11,12,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/3 mode 0 */
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
	MR_fv(2) = MR_tfield(2, MR_tempr1, 3);
	MR_fv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(rbtree__member_3_0_i4);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
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
	MR_fv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_fv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(rbtree__member_3_0_i11);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
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


MR_BEGIN_MODULE(rbtree_module12)
	MR_init_entry1(rbtree__search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__search_3_0);
	MR_init_label7(rbtree__search_3_0,32,3,2,5,7,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
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
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
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
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
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

MR_BEGIN_MODULE(rbtree_module13)
	MR_init_entry1(rbtree__lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__lookup_3_0);
	MR_init_label2(rbtree__lookup_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module14)
	MR_init_entry1(fn__rbtree__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__lookup_2_0);
	MR_init_label2(fn__rbtree__lookup_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module15)
	MR_init_entry1(rbtree__lower_bound_search_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__lower_bound_search_4_0);
	MR_init_label9(rbtree__lower_bound_search_4_0,38,3,2,5,7,10,13,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lower_bound_search'/4 mode 0 */
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
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 3);
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
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
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


MR_BEGIN_MODULE(rbtree_module16)
	MR_init_entry1(rbtree__lower_bound_lookup_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__lower_bound_lookup_4_0);
	MR_init_label2(rbtree__lower_bound_lookup_4_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lower_bound_lookup'/4 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module17)
	MR_init_entry1(rbtree__upper_bound_search_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__upper_bound_search_4_0);
	MR_init_label9(rbtree__upper_bound_search_4_0,37,3,2,5,10,7,13,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'upper_bound_search'/4 mode 0 */
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
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 3);
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
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
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


MR_BEGIN_MODULE(rbtree_module18)
	MR_init_entry1(rbtree__upper_bound_lookup_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__upper_bound_lookup_4_0);
	MR_init_label2(rbtree__upper_bound_lookup_4_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'upper_bound_lookup'/4 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module19)
	MR_init_entry1(rbtree__remove_smallest_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__remove_smallest_4_0);
	MR_init_label7(rbtree__remove_smallest_4_0,46,6,3,49,12,48,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_smallest'/4 mode 0 */
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
	MR_r4 = MR_tfield(2, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i46);
	}
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_r4 = MR_tfield(2, MR_tempr1, 3);
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
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
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
	MR_r4 = MR_tfield(1, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_smallest_4_0_i49);
	}
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 3);
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
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
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


MR_BEGIN_MODULE(rbtree_module20)
	MR_init_entry1(rbtree__remove_largest_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__remove_largest_4_0);
	MR_init_label7(rbtree__remove_largest_4_0,46,6,3,49,12,48,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_largest'/4 mode 0 */
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
	MR_r4 = MR_tfield(2, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i46);
	}
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_r4 = MR_tfield(2, MR_tempr1, 2);
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
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
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
	MR_r4 = MR_tfield(1, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(rbtree__remove_largest_4_0_i49);
	}
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 2);
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
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
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


MR_BEGIN_MODULE(rbtree_module21)
	MR_init_entry1(rbtree__delete_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__delete_2_5_0);
	MR_init_label10(rbtree__delete_2_5_0,159,6,9,8,15,14,21,12,28,5)
	MR_init_label10(rbtree__delete_2_5_0,31,34,33,40,39,46,45,37,53,160)
	MR_init_label1(rbtree__delete_2_5_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__delete_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i159);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i160);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rbtree__delete_2_5_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__delete_2_5_0_i6);
MR_def_label(rbtree__delete_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i9);
MR_def_label(rbtree__delete_2_5_0,9)
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
MR_def_label(rbtree__delete_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i12);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		rbtree__delete_2_5_0_i15);
MR_def_label(rbtree__delete_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i14);
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
MR_def_label(rbtree__delete_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		rbtree__delete_2_5_0_i21);
MR_def_label(rbtree__delete_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i45);
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
MR_def_label(rbtree__delete_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i28);
MR_def_label(rbtree__delete_2_5_0,28)
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
MR_def_label(rbtree__delete_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rbtree__delete_2_5_0_i31);
MR_def_label(rbtree__delete_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i33);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i34);
MR_def_label(rbtree__delete_2_5_0,34)
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
MR_def_label(rbtree__delete_2_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i37);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		rbtree__delete_2_5_0_i40);
MR_def_label(rbtree__delete_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i39);
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
MR_def_label(rbtree__delete_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		rbtree__delete_2_5_0_i46);
MR_def_label(rbtree__delete_2_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__delete_2_5_0_i45);
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
MR_def_label(rbtree__delete_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(rbtree__delete_2_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(rbtree__delete_2_5_0,
		rbtree__delete_2_5_0_i53);
MR_def_label(rbtree__delete_2_5_0,53)
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
MR_def_label(rbtree__delete_2_5_0,160)
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


MR_BEGIN_MODULE(rbtree_module22)
	MR_init_entry1(rbtree__delete_2_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__delete_2_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_2'/5 mode 1 */
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


MR_BEGIN_MODULE(rbtree_module23)
	MR_init_entry1(rbtree__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__delete_3_0);
	MR_init_label1(rbtree__delete_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
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


MR_BEGIN_MODULE(rbtree_module24)
	MR_init_entry1(fn__rbtree__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__delete_2_0);
	MR_init_label1(fn__rbtree__delete_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module25)
	MR_init_entry1(rbtree__remove_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__remove_4_0);
	MR_init_label2(rbtree__remove_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) 1;
	}
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
	MR_r2 = MR_tfield(1, MR_r2, 0);
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

MR_BEGIN_MODULE(rbtree_module26)
	MR_init_entry1(rbtree__keys_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__keys_2_0);
	MR_init_label5(rbtree__keys_2_0,29,5,4,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__keys_2_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__keys_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__keys_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__keys_2_0,
		rbtree__keys_2_0_i5);
MR_def_label(rbtree__keys_2_0,5)
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
		rbtree__keys_2_0_i10);
MR_def_label(rbtree__keys_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__keys_2_0,
		rbtree__keys_2_0_i9);
MR_def_label(rbtree__keys_2_0,9)
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
		rbtree__keys_2_0_i10);
MR_def_label(rbtree__keys_2_0,10)
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


MR_BEGIN_MODULE(rbtree_module27)
	MR_init_entry1(fn__rbtree__keys_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__keys_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys'/2 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module28)
	MR_init_entry1(rbtree__values_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__values_2_0);
	MR_init_label5(rbtree__values_2_0,29,5,4,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'values'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__values_2_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__values_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__values_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__values_2_0,
		rbtree__values_2_0_i5);
MR_def_label(rbtree__values_2_0,5)
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
		rbtree__values_2_0_i10);
MR_def_label(rbtree__values_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__values_2_0,
		rbtree__values_2_0_i9);
MR_def_label(rbtree__values_2_0,9)
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
		rbtree__values_2_0_i10);
MR_def_label(rbtree__values_2_0,10)
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


MR_BEGIN_MODULE(rbtree_module29)
	MR_init_entry1(fn__rbtree__values_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__values_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'values'/2 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module30)
	MR_init_entry1(rbtree__count_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__count_2_0);
	MR_init_label5(rbtree__count_2_0,21,5,4,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__count_2_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(rbtree__count_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__count_2_0_i4);
	}
	MR_sv(1) = MR_tfield(2, MR_r3, 3);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_tfield(2, MR_r3, 2);
	MR_np_localcall_lab(rbtree__count_2_0,
		rbtree__count_2_0_i5);
MR_def_label(rbtree__count_2_0,5)
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
		rbtree__count_2_0_i8);
MR_def_label(rbtree__count_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 3);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_tfield(1, MR_r3, 2);
	MR_np_localcall_lab(rbtree__count_2_0,
		rbtree__count_2_0_i7);
MR_def_label(rbtree__count_2_0,7)
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
		rbtree__count_2_0_i8);
MR_def_label(rbtree__count_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 1 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module31)
	MR_init_entry1(fn__rbtree__count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__count_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module32)
	MR_init_entry1(rbtree__assoc_list_to_rbtree_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__assoc_list_to_rbtree_2_0);
	MR_init_label2(rbtree__assoc_list_to_rbtree_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assoc_list_to_rbtree'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__assoc_list_to_rbtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__assoc_list_to_rbtree_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__assoc_list_to_rbtree_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(1, MR_r3, 1);
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
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(rbtree__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module33)
	MR_init_entry1(fn__rbtree__assoc_list_to_rbtree_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__assoc_list_to_rbtree_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assoc_list_to_rbtree'/2 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module34)
	MR_init_entry1(fn__rbtree__from_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__from_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list'/2 mode 0 */
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

MR_BEGIN_MODULE(rbtree_module35)
	MR_init_entry1(rbtree__rbtree_to_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__rbtree_to_assoc_list_2_0);
	MR_init_label6(rbtree__rbtree_to_assoc_list_2_0,34,5,6,4,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rbtree_to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__rbtree_to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rbtree__rbtree_to_assoc_list_2_0_i34);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rbtree__rbtree_to_assoc_list_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_tfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__rbtree_to_assoc_list_2_0,
		rbtree__rbtree_to_assoc_list_2_0_i5);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,5)
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
		rbtree__rbtree_to_assoc_list_2_0_i6);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(rbtree__rbtree_to_assoc_list_2_0,
		rbtree__rbtree_to_assoc_list_2_0_i11);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,11)
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
		rbtree__rbtree_to_assoc_list_2_0_i12);
MR_def_label(rbtree__rbtree_to_assoc_list_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(5);
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


MR_BEGIN_MODULE(rbtree_module36)
	MR_init_entry1(fn__rbtree__rbtree_to_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__rbtree_to_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rbtree_to_assoc_list'/2 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module37)
	MR_init_entry1(fn__rbtree__to_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__to_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list'/2 mode 0 */
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

MR_BEGIN_MODULE(rbtree_module38)
	MR_init_entry1(rbtree__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl_4_0);
	MR_init_label7(rbtree__foldl_4_0,20,3,5,6,4,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__foldl_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__foldl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__foldl_4_0_i4);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_0,
		rbtree__foldl_4_0_i5);
MR_def_label(rbtree__foldl_4_0,5)
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
		mercury__rbtree__foldl_4_0_i6);
MR_def_label(rbtree__foldl_4_0,6)
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
	MR_GOTO_LAB(rbtree__foldl_4_0_i20);
	}
MR_def_label(rbtree__foldl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_tfield(1, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_0,
		rbtree__foldl_4_0_i8);
MR_def_label(rbtree__foldl_4_0,8)
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
		mercury__rbtree__foldl_4_0_i9);
MR_def_label(rbtree__foldl_4_0,9)
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
	MR_GOTO_LAB(rbtree__foldl_4_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module39)
	MR_init_entry1(rbtree__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module40)
	MR_init_entry1(rbtree__foldl_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 2 */
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


MR_BEGIN_MODULE(rbtree_module41)
	MR_init_entry1(rbtree__foldl_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl_4_3);
	MR_init_label8(rbtree__foldl_4_3,44,3,5,7,4,11,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl_4_3,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__foldl_4_3_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__foldl_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__foldl_4_3_i4);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_3,
		rbtree__foldl_4_3_i5);
MR_def_label(rbtree__foldl_4_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__rbtree__foldl_4_3_i7);
MR_def_label(rbtree__foldl_4_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_3_i1);
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
	MR_GOTO_LAB(rbtree__foldl_4_3_i44);
	}
MR_def_label(rbtree__foldl_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r5 = MR_tfield(1, MR_r5, 2);
	}
	MR_np_localcall_lab(rbtree__foldl_4_3,
		rbtree__foldl_4_3_i11);
MR_def_label(rbtree__foldl_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__rbtree__foldl_4_3_i13);
MR_def_label(rbtree__foldl_4_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl_4_3_i1);
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
	MR_GOTO_LAB(rbtree__foldl_4_3_i44);
	}
MR_def_label(rbtree__foldl_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module42)
	MR_init_entry1(rbtree__foldl_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module43)
	MR_init_entry1(rbtree__foldl_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module44)
	MR_init_entry1(fn__rbtree__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__foldl_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_np_tailcall_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(rbtree_module45)
	MR_init_entry1(rbtree__foldl2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_0);
	MR_init_label7(rbtree__foldl2_6_0,20,3,5,6,4,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(rbtree__foldl2_6_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(9);
MR_def_label(rbtree__foldl2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(rbtree__foldl2_6_0_i4);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_tfield(2, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_0,
		rbtree__foldl2_6_0_i5);
MR_def_label(rbtree__foldl2_6_0,5)
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
		mercury__rbtree__foldl2_6_0_i6);
MR_def_label(rbtree__foldl2_6_0,6)
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
	MR_GOTO_LAB(rbtree__foldl2_6_0_i20);
	}
MR_def_label(rbtree__foldl2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_tfield(1, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_0,
		rbtree__foldl2_6_0_i8);
MR_def_label(rbtree__foldl2_6_0,8)
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
		mercury__rbtree__foldl2_6_0_i9);
MR_def_label(rbtree__foldl2_6_0,9)
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
	MR_GOTO_LAB(rbtree__foldl2_6_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module46)
	MR_init_entry1(rbtree__foldl2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module47)
	MR_init_entry1(rbtree__foldl2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 2 */
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


MR_BEGIN_MODULE(rbtree_module48)
	MR_init_entry1(rbtree__foldl2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 3 */
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


MR_BEGIN_MODULE(rbtree_module49)
	MR_init_entry1(rbtree__foldl2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_4);
	MR_init_label8(rbtree__foldl2_6_4,44,3,5,7,4,11,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl2_6_4,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(rbtree__foldl2_6_4_i3);
	}
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(rbtree__foldl2_6_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(rbtree__foldl2_6_4_i4);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_tfield(2, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_4,
		rbtree__foldl2_6_4_i5);
MR_def_label(rbtree__foldl2_6_4,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_4_i1);
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__rbtree__foldl2_6_4_i7);
MR_def_label(rbtree__foldl2_6_4,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_4_i1);
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
	MR_GOTO_LAB(rbtree__foldl2_6_4_i44);
	}
MR_def_label(rbtree__foldl2_6_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r6 = MR_tfield(1, MR_r6, 2);
	}
	MR_np_localcall_lab(rbtree__foldl2_6_4,
		rbtree__foldl2_6_4_i11);
MR_def_label(rbtree__foldl2_6_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_4_i1);
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__foldl2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__rbtree__foldl2_6_4_i13);
MR_def_label(rbtree__foldl2_6_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rbtree__foldl2_6_4_i1);
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
	MR_GOTO_LAB(rbtree__foldl2_6_4_i44);
	}
MR_def_label(rbtree__foldl2_6_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module50)
	MR_init_entry1(rbtree__foldl2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl2_6_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module51)
	MR_init_entry1(rbtree__foldl2_6_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl2_6_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl2_6_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rbtree__foldl2_6_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(rbtree_module52)
	MR_init_entry1(rbtree__foldl3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl3_8_0);
	MR_init_label7(rbtree__foldl3_8_0,20,3,5,6,4,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl3_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(rbtree__foldl3_8_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_decr_sp_and_return(10);
MR_def_label(rbtree__foldl3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(rbtree__foldl3_8_0_i4);
	}
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_tfield(2, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_0,
		rbtree__foldl3_8_0_i5);
MR_def_label(rbtree__foldl3_8_0,5)
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
		mercury__rbtree__foldl3_8_0_i6);
MR_def_label(rbtree__foldl3_8_0,6)
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
	MR_GOTO_LAB(rbtree__foldl3_8_0_i20);
	}
MR_def_label(rbtree__foldl3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_tfield(1, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_0,
		rbtree__foldl3_8_0_i8);
MR_def_label(rbtree__foldl3_8_0,8)
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
		mercury__rbtree__foldl3_8_0_i9);
MR_def_label(rbtree__foldl3_8_0,9)
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
	MR_GOTO_LAB(rbtree__foldl3_8_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module53)
	MR_init_entry1(rbtree__foldl3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl3_8_1);
	MR_init_label8(rbtree__foldl3_8_1,44,3,5,7,4,11,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__foldl3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(rbtree__foldl3_8_1,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i3);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(rbtree__foldl3_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(rbtree__foldl3_8_1_i4);
	}
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_tfield(2, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_1,
		rbtree__foldl3_8_1_i5);
MR_def_label(rbtree__foldl3_8_1,5)
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
		mercury__rbtree__foldl3_8_1_i7);
MR_def_label(rbtree__foldl3_8_1,7)
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
	MR_GOTO_LAB(rbtree__foldl3_8_1_i44);
	}
MR_def_label(rbtree__foldl3_8_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r7 = MR_tfield(1, MR_r7, 2);
	}
	MR_np_localcall_lab(rbtree__foldl3_8_1,
		rbtree__foldl3_8_1_i11);
MR_def_label(rbtree__foldl3_8_1,11)
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
		mercury__rbtree__foldl3_8_1_i13);
MR_def_label(rbtree__foldl3_8_1,13)
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
	MR_GOTO_LAB(rbtree__foldl3_8_1_i44);
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


MR_BEGIN_MODULE(rbtree_module54)
	MR_init_entry1(rbtree__foldl3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl3_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 2 */
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


MR_BEGIN_MODULE(rbtree_module55)
	MR_init_entry1(rbtree__foldl3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl3_8_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 3 */
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


MR_BEGIN_MODULE(rbtree_module56)
	MR_init_entry1(rbtree__foldl3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__foldl3_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 4 */
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

MR_BEGIN_MODULE(rbtree_module57)
	MR_init_entry1(rbtree__map_values_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__map_values_3_0);
	MR_init_label8(rbtree__map_values_3_0,30,5,6,7,4,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__map_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__map_values_3_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rbtree__map_values_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__map_values_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_0_i5);
MR_def_label(rbtree__map_values_3_0,5)
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
		rbtree__map_values_3_0_i6);
MR_def_label(rbtree__map_values_3_0,6)
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
		rbtree__map_values_3_0_i7);
MR_def_label(rbtree__map_values_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(1);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(rbtree__map_values_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_0_i9);
MR_def_label(rbtree__map_values_3_0,9)
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
		rbtree__map_values_3_0_i10);
MR_def_label(rbtree__map_values_3_0,10)
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
		rbtree__map_values_3_0_i11);
MR_def_label(rbtree__map_values_3_0,11)
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


MR_BEGIN_MODULE(rbtree_module58)
	MR_init_entry1(rbtree__map_values_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rbtree__map_values_3_1);
	MR_init_label9(rbtree__map_values_3_1,73,5,7,9,4,12,14,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rbtree__map_values_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i73);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rbtree__map_values_3_1,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rbtree__map_values_3_1_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_1_i5);
MR_def_label(rbtree__map_values_3_1,5)
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
		rbtree__map_values_3_1_i7);
MR_def_label(rbtree__map_values_3_1,7)
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
		rbtree__map_values_3_1_i9);
MR_def_label(rbtree__map_values_3_1,9)
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
MR_def_label(rbtree__map_values_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rbtree__map_values_3_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rbtree__map_values_3_1_i12);
MR_def_label(rbtree__map_values_3_1,12)
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
		rbtree__map_values_3_1_i14);
MR_def_label(rbtree__map_values_3_1,14)
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
		rbtree__map_values_3_1_i16);
MR_def_label(rbtree__map_values_3_1,16)
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


MR_BEGIN_MODULE(rbtree_module59)
	MR_init_entry1(fn__rbtree__map_values_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rbtree__map_values_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rbtree__map_values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(rbtree_module60)
	MR_init_entry1(__Unify___rbtree__rbtree_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rbtree__rbtree_2_0);
	MR_init_label10(__Unify___rbtree__rbtree_2_0,73,5,8,10,12,34,6,17,19,21)
	MR_init_label1(__Unify___rbtree__rbtree_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rbtree__rbtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Unify___rbtree__rbtree_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___rbtree__rbtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i8);
MR_def_label(__Unify___rbtree__rbtree_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i10);
MR_def_label(__Unify___rbtree__rbtree_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(__Unify___rbtree__rbtree_2_0,
		__Unify___rbtree__rbtree_2_0_i12);
MR_def_label(__Unify___rbtree__rbtree_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i73);
MR_def_label(__Unify___rbtree__rbtree_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___rbtree__rbtree_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i17);
MR_def_label(__Unify___rbtree__rbtree_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rbtree__rbtree_2_0_i19);
MR_def_label(__Unify___rbtree__rbtree_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(__Unify___rbtree__rbtree_2_0,
		__Unify___rbtree__rbtree_2_0_i21);
MR_def_label(__Unify___rbtree__rbtree_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Unify___rbtree__rbtree_2_0_i73);
MR_def_label(__Unify___rbtree__rbtree_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module61)
	MR_init_entry1(__Compare___rbtree__rbtree_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rbtree__rbtree_2_0);
	MR_init_label10(__Compare___rbtree__rbtree_2_0,114,66,7,5,11,14,18,22,9,59)
	MR_init_label7(__Compare___rbtree__rbtree_2_0,30,60,31,33,37,41,122)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rbtree__rbtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(__Compare___rbtree__rbtree_2_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i66);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i7);
	}
MR_def_label(__Compare___rbtree__rbtree_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i60);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i14);
MR_def_label(__Compare___rbtree__rbtree_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i122);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i18);
MR_def_label(__Compare___rbtree__rbtree_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i122);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(__Compare___rbtree__rbtree_2_0,
		__Compare___rbtree__rbtree_2_0_i22);
MR_def_label(__Compare___rbtree__rbtree_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i122);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i114);
MR_def_label(__Compare___rbtree__rbtree_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i30);
	}
MR_def_label(__Compare___rbtree__rbtree_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i31);
	}
MR_def_label(__Compare___rbtree__rbtree_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___rbtree__rbtree_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i33);
MR_def_label(__Compare___rbtree__rbtree_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i122);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rbtree__rbtree_2_0_i37);
MR_def_label(__Compare___rbtree__rbtree_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i122);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(__Compare___rbtree__rbtree_2_0,
		__Compare___rbtree__rbtree_2_0_i41);
MR_def_label(__Compare___rbtree__rbtree_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i122);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(__Compare___rbtree__rbtree_2_0_i114);
MR_def_label(__Compare___rbtree__rbtree_2_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rbtree_module62)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0);
	MR_init_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,176,3,6,14,17,21,19,16,36,40)
	MR_init_label7(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,38,5,55,58,57,62,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__insert_2__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_r3;
	MR_tfield(1, MR_r2, 1) = MR_r4;
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(2, MR_r2, 3);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_tfield(2, MR_r2, 2);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i6);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr3, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr3, 3) = MR_tfield(1, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr4, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(2, MR_tempr4, 3) = MR_tfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tfield(1, MR_r2, 2) = MR_tempr3;
	MR_tfield(1, MR_r2, 3) = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i176);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,6)
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
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i14);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i16);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i17);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i19);
	}
	MR_r3 = MR_tfield(1, MR_r2, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(1, MR_r2, 1);
	MR_r6 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i21);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_r6;
	MR_tfield(2, MR_r2, 1) = MR_r5;
	MR_tfield(2, MR_r2, 2) = MR_tempr1;
	MR_tfield(2, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_r4;
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_tempr3, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_r2, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_r2, 2) = MR_tempr1;
	MR_tfield(2, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,19)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i36);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i38);
	}
	MR_r5 = MR_tfield(1, MR_r2, 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(1, MR_r2, 1);
	MR_r8 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i40);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_r8;
	MR_tfield(1, MR_tempr3, 1) = MR_r7;
	MR_tfield(1, MR_tempr3, 2) = MR_tfield(1, MR_tempr1, 3);
	MR_tfield(1, MR_tempr3, 3) = MR_r5;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_r2, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_r2, 2) = MR_tempr2;
	MR_tfield(2, MR_r2, 3) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r6;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_r8;
	MR_tfield(2, MR_r2, 1) = MR_r7;
	MR_tfield(2, MR_r2, 2) = MR_tempr1;
	MR_tfield(2, MR_r2, 3) = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,38)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(6) = MR_tfield(1, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i55);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i57);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i58);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,58)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0_i62);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_0,62)
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


MR_BEGIN_MODULE(rbtree_module63)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1);
	MR_init_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,147,3,6,13,16,19,17,15,33,35)
	MR_init_label9(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,38,43,36,5,53,56,55,58,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__set_2__[2]_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(2, MR_r2, 3);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_tfield(2, MR_r2, 2);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i6);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr3, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr3, 3) = MR_tfield(1, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr4, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(2, MR_tempr4, 3) = MR_tfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tfield(1, MR_r2, 2) = MR_tempr3;
	MR_tfield(1, MR_r2, 3) = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i147);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,6)
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
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i13);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i15);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i16);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i17);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i19);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r2;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r5;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(1, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_r2, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_r1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i33);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i35);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i36);
	}
	MR_r5 = MR_tfield(1, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(1, MR_r1, 1);
	MR_r8 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i38);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_r8;
	MR_tfield(1, MR_tempr3, 1) = MR_r7;
	MR_tfield(1, MR_tempr3, 2) = MR_tfield(1, MR_tempr1, 3);
	MR_tfield(1, MR_tempr3, 3) = MR_r5;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_r1, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_r1, 2) = MR_tempr2;
	MR_tfield(2, MR_r1, 3) = MR_tempr3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r8;
	MR_tfield(2, MR_r1, 1) = MR_r7;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_r5;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,43)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,36)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(6) = MR_tfield(1, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i53);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i55);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i56);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,56)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i58);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tfield(1, MR_r1, 2) = MR_sv(5);
	MR_tfield(1, MR_r1, 3) = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1_i60);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_1,60)
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


MR_BEGIN_MODULE(rbtree_module64)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0);
	MR_init_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,182,3,6,13,16,19,17,15,34,37)
	MR_init_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,35,33,51,54,59,52,5,69,72,71)
	MR_init_label3(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,75,74,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__insert_duplicate_2__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(2, MR_r2, 3);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_tfield(2, MR_r2, 2);
	MR_sv(5) = MR_tempr2;
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i6);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr3, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr3, 1) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_tfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr3, 3) = MR_tfield(1, MR_tempr2, 3);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr4, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_tempr4, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_tempr4, 2) = MR_tfield(1, MR_tempr1, 2);
	MR_tfield(2, MR_tempr4, 3) = MR_tfield(1, MR_tempr1, 3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_tfield(1, MR_r2, 2) = MR_tempr3;
	MR_tfield(1, MR_r2, 3) = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i182);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,6)
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
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i15);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i16);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i17);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r2;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r5;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(1, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_r2, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_r1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i33);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i34);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i35);
	}
	MR_r5 = MR_tfield(1, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(1, MR_r1, 1);
	MR_r8 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i37);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_r5;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r8;
	MR_tfield(2, MR_r1, 1) = MR_r7;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r8;
	MR_tfield(1, MR_tempr1, 1) = MR_r7;
	MR_tfield(1, MR_tempr1, 2) = MR_r6;
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_tempr3, 3);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_r1, 1) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,35)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i51);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i52);
	}
	MR_r5 = MR_tfield(1, MR_r1, 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(1, MR_r1, 1);
	MR_r8 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i54);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 3) = MR_tfield(1, MR_tempr1, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_r8;
	MR_tfield(1, MR_tempr3, 1) = MR_r7;
	MR_tfield(1, MR_tempr3, 2) = MR_tfield(1, MR_tempr1, 3);
	MR_tfield(1, MR_tempr3, 3) = MR_r5;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(2, MR_r1, 1) = MR_tfield(1, MR_tempr1, 1);
	MR_tfield(2, MR_r1, 2) = MR_tempr2;
	MR_tfield(2, MR_r1, 3) = MR_tempr3;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_r6;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r8;
	MR_tfield(2, MR_r1, 1) = MR_r7;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_r5;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,59)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,52)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(6) = MR_tfield(1, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i69);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i71);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i72);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,72)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i74);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i75);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,75)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0_i77);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_0,77)
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


MR_BEGIN_MODULE(rbtree_module65)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1);
	MR_init_label10(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,123,5,8,7,13,12,19,10,26,4)
	MR_init_label9(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,28,31,30,36,35,42,41,33,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__delete_2__[5]_1'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i123);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i5);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,8)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i10);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i13);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i12);
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i19);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i41);
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i26);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,26)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i28);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i30);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i31);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,31)
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i33);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(rbtree__remove_largest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i36);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i35);
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(rbtree__remove_smallest_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i42);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i41);
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
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1_i49);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_1,49)
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


MR_BEGIN_MODULE(rbtree_module66)
	MR_init_entry1(fn__f_114_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
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


MR_BEGIN_MODULE(rbtree_module67)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0);
	MR_init_label8(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,30,5,6,7,4,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_values__ho5__[1, 2, 3, 5, 6, 7, 8]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i4);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 2);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i5);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i6);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i7);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(3);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i9);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i10);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0_i11);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_0,11)
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


MR_BEGIN_MODULE(rbtree_module68)
	MR_init_entry1(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_init_label5(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,24,3,4,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho6__[1, 2, 3, 5, 6, 7, 8]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i4);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_localcall_lab(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i8);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9);
MR_def_label(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_114_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i24);
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
	rbtree_module62();
	rbtree_module63();
	rbtree_module64();
	rbtree_module65();
	rbtree_module66();
	rbtree_module67();
	rbtree_module68();
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
#ifdef MR_THREADSCOPE
void mercury__rbtree__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__rbtree__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
