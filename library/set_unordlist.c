/*
** Automatically generated from `set_unordlist.m'
** by the Mercury compiler,
** version rotd-2011-08-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__set_unordlist__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "set_unordlist.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "set_unordlist.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "set_unordlist.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "set_unordlist.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "set_unordlist.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 48 "set_unordlist.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "set_unordlist.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "set_unordlist.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "set_unordlist.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "set_unordlist.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "set_unordlist.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "set_unordlist.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "set_unordlist.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "set_unordlist.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "set_unordlist.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "set_unordlist.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "set_unordlist.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "set_unordlist.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "set_unordlist.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "set_unordlist.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "set_unordlist.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "set_unordlist.c"
#line 113 "set_unordlist.c"
#include "set_unordlist.mh"

#line 116 "set_unordlist.c"
#line 117 "set_unordlist.c"
#ifndef SET_UNORDLIST_DECL_GUARD
#define SET_UNORDLIST_DECL_GUARD

#line 121 "set_unordlist.c"
#line 122 "set_unordlist.c"

#endif
#line 125 "set_unordlist.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_set_unordlist__type_ctor_info_set_unordlist_1;
MR_decl_label5(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0, 25,3,6,8,4)
MR_decl_label3(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label1(set_unordlist__count_2_0, 2)
MR_decl_label3(set_unordlist__delete_list_3_0, 10,3,4)
MR_decl_label3(set_unordlist__difference_2_3_0, 10,3,4)
MR_decl_label4(set_unordlist__divide_2_6_0, 21,3,6,4)
MR_decl_label2(set_unordlist__equal_2_0, 2,1)
MR_decl_label2(set_unordlist__fold_4_0, 2,3)
MR_decl_label2(set_unordlist__fold_4_1, 2,3)
MR_decl_label2(set_unordlist__fold_4_2, 2,3)
MR_decl_label2(set_unordlist__fold_4_3, 2,3)
MR_decl_label2(set_unordlist__fold_4_4, 2,3)
MR_decl_label2(set_unordlist__fold_4_5, 2,3)
MR_decl_label2(set_unordlist__fold2_6_0, 2,3)
MR_decl_label2(set_unordlist__fold2_6_1, 2,3)
MR_decl_label2(set_unordlist__fold2_6_2, 2,3)
MR_decl_label2(set_unordlist__fold2_6_3, 2,3)
MR_decl_label2(set_unordlist__fold2_6_4, 2,3)
MR_decl_label2(set_unordlist__fold2_6_5, 2,3)
MR_decl_label2(set_unordlist__fold3_8_0, 2,3)
MR_decl_label2(set_unordlist__fold3_8_1, 2,3)
MR_decl_label2(set_unordlist__fold3_8_2, 2,3)
MR_decl_label2(set_unordlist__fold3_8_3, 2,3)
MR_decl_label2(set_unordlist__fold3_8_4, 2,3)
MR_decl_label2(set_unordlist__fold3_8_5, 2,3)
MR_decl_label2(set_unordlist__fold4_10_0, 2,3)
MR_decl_label2(set_unordlist__fold4_10_1, 2,3)
MR_decl_label2(set_unordlist__fold4_10_2, 2,3)
MR_decl_label2(set_unordlist__fold4_10_3, 2,3)
MR_decl_label2(set_unordlist__fold4_10_4, 2,3)
MR_decl_label2(set_unordlist__fold4_10_5, 2,3)
MR_decl_label2(set_unordlist__fold5_12_0, 2,3)
MR_decl_label2(set_unordlist__fold5_12_1, 2,3)
MR_decl_label2(set_unordlist__fold5_12_2, 2,3)
MR_decl_label2(set_unordlist__fold5_12_3, 2,3)
MR_decl_label2(set_unordlist__fold5_12_4, 2,3)
MR_decl_label2(set_unordlist__fold5_12_5, 2,3)
MR_decl_label2(set_unordlist__fold6_14_0, 2,3)
MR_decl_label2(set_unordlist__fold6_14_1, 2,3)
MR_decl_label2(set_unordlist__fold6_14_2, 2,3)
MR_decl_label2(set_unordlist__fold6_14_3, 2,3)
MR_decl_label2(set_unordlist__fold6_14_4, 2,3)
MR_decl_label2(set_unordlist__fold6_14_5, 2,3)
MR_decl_label4(set_unordlist__intersect_2_4_0, 20,3,6,4)
MR_decl_label2(set_unordlist__is_member_3_0, 3,2)
MR_decl_label3(set_unordlist__power_intersect_2_0, 3,26,6)
MR_decl_label2(set_unordlist__power_union_2_0, 2,3)
MR_decl_label3(set_unordlist__power_union_2_3_0, 10,3,4)
MR_decl_label3(set_unordlist__remove_3_0, 2,4,1)
MR_decl_label3(set_unordlist__remove_least_3_0, 3,4,1)
MR_decl_label5(set_unordlist__remove_list_3_0, 19,3,4,6,1)
MR_decl_label1(set_unordlist__singleton_set_2_0, 1)
MR_decl_label4(set_unordlist__subset_2_0, 17,4,2,1)
MR_decl_label1(set_unordlist__to_sorted_list_2_0, 2)
MR_decl_label1(fn__set_unordlist__count_1_0, 2)
MR_decl_label2(fn__set_unordlist__filter_map_2_0, 2,3)
MR_decl_label2(fn__set_unordlist__fold_3_0, 2,3)
MR_decl_label2(fn__set_unordlist__map_2_0, 2,3)
MR_decl_label1(fn__set_unordlist__to_sorted_list_1_0, 2)
MR_decl_label1(__Unify___set_unordlist__set_unordlist_1_0, 6)
MR_decl_label2(__Compare___set_unordlist__set_unordlist_1_0, 3,2)
MR_def_extern_entry(set_unordlist__init_1_0)
MR_def_extern_entry(fn__set_unordlist__init_0_0)
MR_def_extern_entry(set_unordlist__list_to_set_2_0)
MR_def_extern_entry(fn__set_unordlist__list_to_set_1_0)
MR_def_extern_entry(fn__set_unordlist__from_list_1_0)
MR_def_extern_entry(set_unordlist__sorted_list_to_set_2_0)
MR_def_extern_entry(fn__set_unordlist__sorted_list_to_set_1_0)
MR_def_extern_entry(fn__set_unordlist__from_sorted_list_1_0)
MR_def_extern_entry(set_unordlist__to_sorted_list_2_0)
MR_def_extern_entry(fn__set_unordlist__to_sorted_list_1_0)
MR_def_extern_entry(set_unordlist__singleton_set_2_0)
MR_def_extern_entry(set_unordlist__singleton_set_2_1)
MR_def_extern_entry(fn__set_unordlist__make_singleton_set_1_0)
MR_def_extern_entry(set_unordlist__member_2_0)
MR_def_extern_entry(set_unordlist__member_2_1)
MR_def_extern_entry(set_unordlist__subset_2_0)
MR_def_extern_entry(set_unordlist__equal_2_0)
MR_def_extern_entry(set_unordlist__empty_1_0)
MR_def_extern_entry(set_unordlist__non_empty_1_0)
MR_def_extern_entry(set_unordlist__is_empty_1_0)
MR_def_extern_entry(set_unordlist__superset_2_0)
MR_def_extern_entry(set_unordlist__is_member_3_0)
MR_def_extern_entry(set_unordlist__contains_2_0)
MR_def_extern_entry(set_unordlist__insert_3_0)
MR_def_extern_entry(set_unordlist__insert_3_1)
MR_def_extern_entry(fn__set_unordlist__insert_2_0)
MR_def_extern_entry(set_unordlist__insert_list_3_0)
MR_def_extern_entry(fn__set_unordlist__insert_list_2_0)
MR_def_extern_entry(set_unordlist__delete_3_0)
MR_def_extern_entry(set_unordlist__delete_3_1)
MR_def_extern_entry(fn__set_unordlist__delete_2_0)
MR_def_extern_entry(set_unordlist__delete_list_3_0)
MR_def_extern_entry(fn__set_unordlist__delete_list_2_0)
MR_def_extern_entry(set_unordlist__remove_3_0)
MR_def_extern_entry(set_unordlist__remove_list_3_0)
MR_def_extern_entry(set_unordlist__remove_least_3_0)
MR_def_extern_entry(set_unordlist__union_3_0)
MR_def_extern_entry(fn__set_unordlist__union_2_0)
MR_def_extern_entry(set_unordlist__power_union_2_3_0)
MR_def_extern_entry(set_unordlist__power_union_2_0)
MR_def_extern_entry(fn__set_unordlist__union_list_1_0)
MR_def_extern_entry(fn__set_unordlist__power_union_1_0)
MR_def_extern_entry(set_unordlist__intersect_2_4_0)
MR_def_extern_entry(set_unordlist__intersect_3_0)
MR_def_extern_entry(fn__set_unordlist__intersect_2_0)
MR_def_extern_entry(set_unordlist__power_intersect_2_0)
MR_def_extern_entry(fn__set_unordlist__power_intersect_1_0)
MR_def_extern_entry(fn__set_unordlist__intersect_list_1_0)
MR_def_extern_entry(set_unordlist__difference_2_3_0)
MR_def_extern_entry(set_unordlist__difference_3_0)
MR_def_extern_entry(fn__set_unordlist__difference_2_0)
MR_def_extern_entry(set_unordlist__count_2_0)
MR_def_extern_entry(fn__set_unordlist__count_1_0)
MR_def_extern_entry(fn__set_unordlist__map_2_0)
MR_def_extern_entry(fn__set_unordlist__filter_map_2_0)
MR_def_extern_entry(fn__set_unordlist__fold_3_0)
MR_def_extern_entry(set_unordlist__fold_4_0)
MR_def_extern_entry(set_unordlist__fold_4_1)
MR_def_extern_entry(set_unordlist__fold_4_2)
MR_def_extern_entry(set_unordlist__fold_4_3)
MR_def_extern_entry(set_unordlist__fold_4_4)
MR_def_extern_entry(set_unordlist__fold_4_5)
MR_def_extern_entry(set_unordlist__fold2_6_0)
MR_def_extern_entry(set_unordlist__fold2_6_1)
MR_def_extern_entry(set_unordlist__fold2_6_2)
MR_def_extern_entry(set_unordlist__fold2_6_3)
MR_def_extern_entry(set_unordlist__fold2_6_4)
MR_def_extern_entry(set_unordlist__fold2_6_5)
MR_def_extern_entry(set_unordlist__fold3_8_0)
MR_def_extern_entry(set_unordlist__fold3_8_1)
MR_def_extern_entry(set_unordlist__fold3_8_2)
MR_def_extern_entry(set_unordlist__fold3_8_3)
MR_def_extern_entry(set_unordlist__fold3_8_4)
MR_def_extern_entry(set_unordlist__fold3_8_5)
MR_def_extern_entry(set_unordlist__fold4_10_0)
MR_def_extern_entry(set_unordlist__fold4_10_1)
MR_def_extern_entry(set_unordlist__fold4_10_2)
MR_def_extern_entry(set_unordlist__fold4_10_3)
MR_def_extern_entry(set_unordlist__fold4_10_4)
MR_def_extern_entry(set_unordlist__fold4_10_5)
MR_def_extern_entry(set_unordlist__fold5_12_0)
MR_def_extern_entry(set_unordlist__fold5_12_1)
MR_def_extern_entry(set_unordlist__fold5_12_2)
MR_def_extern_entry(set_unordlist__fold5_12_3)
MR_def_extern_entry(set_unordlist__fold5_12_4)
MR_def_extern_entry(set_unordlist__fold5_12_5)
MR_def_extern_entry(set_unordlist__fold6_14_0)
MR_def_extern_entry(set_unordlist__fold6_14_1)
MR_def_extern_entry(set_unordlist__fold6_14_2)
MR_def_extern_entry(set_unordlist__fold6_14_3)
MR_def_extern_entry(set_unordlist__fold6_14_4)
MR_def_extern_entry(set_unordlist__fold6_14_5)
MR_def_extern_entry(set_unordlist__divide_2_6_0)
MR_def_extern_entry(set_unordlist__divide_4_0)
MR_def_extern_entry(set_unordlist__filter_3_0)
MR_def_extern_entry(set_unordlist__filter_4_0)
MR_def_extern_entry(__Unify___set_unordlist__set_unordlist_1_0)
MR_def_extern_entry(__Compare___set_unordlist__set_unordlist_1_0)
MR_decl_static(fn__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_NotagFunctorDesc mercury_data_set_unordlist__notag_functor_desc_set_unordlist_1 = {
	"sul",
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1,
	NULL
};

const MR_Integer mercury_data_set_unordlist__functor_number_map_set_unordlist_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_set_unordlist__type_ctor_info_set_unordlist_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___set_unordlist__set_unordlist_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___set_unordlist__set_unordlist_1_0)),
	"set_unordlist",
	"set_unordlist",
	{ (void *)&mercury_data_set_unordlist__notag_functor_desc_set_unordlist_1 },
	{ (void *)&mercury_data_set_unordlist__notag_functor_desc_set_unordlist_1 },
	1,
	4,
	mercury_data_set_unordlist__functor_number_map_set_unordlist_1
};




MR_BEGIN_MODULE(set_unordlist_module0)
	MR_init_entry1(set_unordlist__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module1)
	MR_init_entry1(fn__set_unordlist__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module2)
	MR_init_entry1(set_unordlist__list_to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__list_to_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__list_to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module3)
	MR_init_entry1(fn__set_unordlist__list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__list_to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module4)
	MR_init_entry1(fn__set_unordlist__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module5)
	MR_init_entry1(set_unordlist__sorted_list_to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__sorted_list_to_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__sorted_list_to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module6)
	MR_init_entry1(fn__set_unordlist__sorted_list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__sorted_list_to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__sorted_list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module7)
	MR_init_entry1(fn__set_unordlist__from_sorted_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__from_sorted_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__from_sorted_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);

MR_BEGIN_MODULE(set_unordlist_module8)
	MR_init_entry1(set_unordlist__to_sorted_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__to_sorted_list_2_0);
	MR_init_label1(set_unordlist__to_sorted_list_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__to_sorted_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__to_sorted_list_2_0_i2);
MR_def_label(set_unordlist__to_sorted_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module9)
	MR_init_entry1(fn__set_unordlist__to_sorted_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__to_sorted_list_1_0);
	MR_init_label1(fn__set_unordlist__to_sorted_list_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__to_sorted_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__set_unordlist__to_sorted_list_1_0_i2);
MR_def_label(fn__set_unordlist__to_sorted_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module10)
	MR_init_entry1(set_unordlist__singleton_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__singleton_set_2_0);
	MR_init_label1(set_unordlist__singleton_set_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__singleton_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__singleton_set_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_unordlist__singleton_set_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_unordlist__singleton_set_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module11)
	MR_init_entry1(set_unordlist__singleton_set_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__singleton_set_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__singleton_set_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module12)
	MR_init_entry1(fn__set_unordlist__make_singleton_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__make_singleton_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__make_singleton_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(set_unordlist_module13)
	MR_init_entry1(set_unordlist__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__member_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__member_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(set_unordlist_module14)
	MR_init_entry1(set_unordlist__member_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__member_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__member_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__member_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module15)
	MR_init_entry1(set_unordlist__subset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__subset_2_0);
	MR_init_label4(set_unordlist__subset_2_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__subset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__subset_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__subset_2_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(list__member_2_0,
		set_unordlist__subset_2_0_i4);
MR_def_label(set_unordlist__subset_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__subset_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(set_unordlist__subset_2_0_i17);
MR_def_label(set_unordlist__subset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(set_unordlist__subset_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module16)
	MR_init_entry1(set_unordlist__equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__equal_2_0);
	MR_init_label2(set_unordlist__equal_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(set_unordlist__subset_2_0,
		set_unordlist__equal_2_0_i2);
MR_def_label(set_unordlist__equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__equal_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set_unordlist__subset_2_0);
MR_def_label(set_unordlist__equal_2_0,1)
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


MR_BEGIN_MODULE(set_unordlist_module17)
	MR_init_entry1(set_unordlist__empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module18)
	MR_init_entry1(set_unordlist__non_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__non_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__non_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module19)
	MR_init_entry1(set_unordlist__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module20)
	MR_init_entry1(set_unordlist__superset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__superset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'superset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__superset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_unordlist__subset_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module21)
	MR_init_entry1(set_unordlist__is_member_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__is_member_3_0);
	MR_init_label2(set_unordlist__is_member_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__is_member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__member_2_0,
		set_unordlist__is_member_3_0_i3);
MR_def_label(set_unordlist__is_member_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__is_member_3_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(set_unordlist__is_member_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module22)
	MR_init_entry1(set_unordlist__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module23)
	MR_init_entry1(set_unordlist__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__insert_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module24)
	MR_init_entry1(set_unordlist__insert_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__insert_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__insert_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module25)
	MR_init_entry1(fn__set_unordlist__insert_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__insert_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__insert_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(set_unordlist_module26)
	MR_init_entry1(set_unordlist__insert_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__insert_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__insert_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module27)
	MR_init_entry1(fn__set_unordlist__insert_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__insert_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__insert_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_all_3_0);

MR_BEGIN_MODULE(set_unordlist_module28)
	MR_init_entry1(set_unordlist__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_all_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_all_3_1);

MR_BEGIN_MODULE(set_unordlist_module29)
	MR_init_entry1(set_unordlist__delete_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__delete_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__delete_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_all_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module30)
	MR_init_entry1(fn__set_unordlist__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__delete_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_all_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module31)
	MR_init_entry1(set_unordlist__delete_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__delete_list_3_0);
	MR_init_label3(set_unordlist__delete_list_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__delete_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__delete_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__delete_list_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(set_unordlist__delete_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		set_unordlist__delete_list_3_0_i4);
MR_def_label(set_unordlist__delete_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_unordlist__delete_list_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module32)
	MR_init_entry1(fn__set_unordlist__delete_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__delete_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__delete_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_unordlist__delete_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module33)
	MR_init_entry1(set_unordlist__remove_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__remove_3_0);
	MR_init_label3(set_unordlist__remove_3_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__remove_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(list__member_2_0,
		set_unordlist__remove_3_0_i2);
MR_def_label(set_unordlist__remove_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__remove_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_all_3_1,
		set_unordlist__remove_3_0_i4);
MR_def_label(set_unordlist__remove_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_unordlist__remove_3_0,1)
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


MR_BEGIN_MODULE(set_unordlist_module34)
	MR_init_entry1(set_unordlist__remove_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__remove_list_3_0);
	MR_init_label5(set_unordlist__remove_list_3_0,19,3,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__remove_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__remove_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__remove_list_3_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(set_unordlist__remove_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		set_unordlist__remove_list_3_0_i4);
MR_def_label(set_unordlist__remove_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__remove_list_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_all_3_1,
		set_unordlist__remove_list_3_0_i6);
MR_def_label(set_unordlist__remove_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(set_unordlist__remove_list_3_0_i19);
	}
MR_def_label(set_unordlist__remove_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module35)
	MR_init_entry1(set_unordlist__remove_least_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__remove_least_3_0);
	MR_init_label3(set_unordlist__remove_least_3_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_least'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__remove_least_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__remove_least_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__remove_least_3_0_i3);
MR_def_label(set_unordlist__remove_least_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__remove_least_3_0_i4);
MR_def_label(set_unordlist__remove_least_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(set_unordlist__remove_least_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_unordlist__remove_least_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module36)
	MR_init_entry1(set_unordlist__union_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__union_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__union_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module37)
	MR_init_entry1(fn__set_unordlist__union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__union_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module38)
	MR_init_entry1(set_unordlist__power_union_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__power_union_2_3_0);
	MR_init_label3(set_unordlist__power_union_2_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__power_union_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__power_union_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__power_union_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(set_unordlist__power_union_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(list__append_3_1,
		set_unordlist__power_union_2_3_0_i4);
MR_def_label(set_unordlist__power_union_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_unordlist__power_union_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module39)
	MR_init_entry1(set_unordlist__power_union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__power_union_2_0);
	MR_init_label2(set_unordlist__power_union_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__power_union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_unordlist__power_union_2_3_0,
		set_unordlist__power_union_2_0_i2);
MR_def_label(set_unordlist__power_union_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__power_union_2_0_i3);
MR_def_label(set_unordlist__power_union_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module40)
	MR_init_entry1(fn__set_unordlist__union_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__union_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__union_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_unordlist__power_union_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module41)
	MR_init_entry1(fn__set_unordlist__power_union_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__power_union_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__power_union_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_unordlist__power_union_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module42)
	MR_init_entry1(set_unordlist__intersect_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__intersect_2_4_0);
	MR_init_label4(set_unordlist__intersect_2_4_0,20,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__intersect_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__intersect_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__intersect_2_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(set_unordlist__intersect_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		set_unordlist__intersect_2_4_0_i6);
MR_def_label(set_unordlist__intersect_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__intersect_2_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(set_unordlist__intersect_2_4_0_i20);
	}
MR_def_label(set_unordlist__intersect_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(set_unordlist__intersect_2_4_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module43)
	MR_init_entry1(set_unordlist__intersect_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__intersect_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__intersect_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_unordlist__intersect_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module44)
	MR_init_entry1(fn__set_unordlist__intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__intersect_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_unordlist__intersect_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module45)
	MR_init_entry1(set_unordlist__power_intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__power_intersect_2_0);
	MR_init_label3(set_unordlist__power_intersect_2_0,3,26,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__power_intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__power_intersect_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_unordlist__power_intersect_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_unordlist__power_intersect_2_0_i26);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(set_unordlist__power_intersect_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_localcall_lab(set_unordlist__power_intersect_2_0,
		set_unordlist__power_intersect_2_0_i6);
MR_def_label(set_unordlist__power_intersect_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_unordlist__intersect_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module46)
	MR_init_entry1(fn__set_unordlist__power_intersect_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__power_intersect_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__power_intersect_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_unordlist__power_intersect_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module47)
	MR_init_entry1(fn__set_unordlist__intersect_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__intersect_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__intersect_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_unordlist__power_intersect_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module48)
	MR_init_entry1(set_unordlist__difference_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__difference_2_3_0);
	MR_init_label3(set_unordlist__difference_2_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__difference_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__difference_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_unordlist__difference_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(set_unordlist__difference_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		set_unordlist__difference_2_3_0_i4);
MR_def_label(set_unordlist__difference_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_unordlist__difference_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module49)
	MR_init_entry1(set_unordlist__difference_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__difference_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__difference_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_unordlist__difference_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module50)
	MR_init_entry1(fn__set_unordlist__difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__difference_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_unordlist__difference_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__remove_dups_2_3_0);

MR_BEGIN_MODULE(set_unordlist_module51)
	MR_init_entry1(set_unordlist__count_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__count_2_0);
	MR_init_label1(set_unordlist__count_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__remove_dups_2_3_0,
		set_unordlist__count_2_0_i2);
MR_def_label(set_unordlist__count_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__length_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module52)
	MR_init_entry1(fn__set_unordlist__count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__count_1_0);
	MR_init_label1(fn__set_unordlist__count_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__remove_dups_2_3_0,
		fn__set_unordlist__count_1_0_i2);
MR_def_label(fn__set_unordlist__count_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__length_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(set_unordlist_module53)
	MR_init_entry1(fn__set_unordlist__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__map_2_0);
	MR_init_label2(fn__set_unordlist__map_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__set_unordlist__map_2_0_i2);
MR_def_label(fn__set_unordlist__map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		fn__set_unordlist__map_2_0_i3);
MR_def_label(fn__set_unordlist__map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module54)
	MR_init_entry1(fn__set_unordlist__filter_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__filter_map_2_0);
	MR_init_label2(fn__set_unordlist__filter_map_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__filter_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__set_unordlist__filter_map_2_0_i2);
MR_def_label(fn__set_unordlist__filter_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		fn__set_unordlist__filter_map_2_0_i3);
MR_def_label(fn__set_unordlist__filter_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module55)
	MR_init_entry1(fn__set_unordlist__fold_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_unordlist__fold_3_0);
	MR_init_label2(fn__set_unordlist__fold_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_unordlist__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__set_unordlist__fold_3_0_i2);
MR_def_label(fn__set_unordlist__fold_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		fn__set_unordlist__fold_3_0_i3);
MR_def_label(fn__set_unordlist__fold_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(set_unordlist_module56)
	MR_init_entry1(set_unordlist__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold_4_0);
	MR_init_label2(set_unordlist__fold_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold_4_0_i2);
MR_def_label(set_unordlist__fold_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold_4_0_i3);
MR_def_label(set_unordlist__fold_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(set_unordlist_module57)
	MR_init_entry1(set_unordlist__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold_4_1);
	MR_init_label2(set_unordlist__fold_4_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold_4_1_i2);
MR_def_label(set_unordlist__fold_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold_4_1_i3);
MR_def_label(set_unordlist__fold_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(set_unordlist_module58)
	MR_init_entry1(set_unordlist__fold_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold_4_2);
	MR_init_label2(set_unordlist__fold_4_2,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold_4_2_i2);
MR_def_label(set_unordlist__fold_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold_4_2_i3);
MR_def_label(set_unordlist__fold_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(set_unordlist_module59)
	MR_init_entry1(set_unordlist__fold_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold_4_3);
	MR_init_label2(set_unordlist__fold_4_3,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold_4_3_i2);
MR_def_label(set_unordlist__fold_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold_4_3_i3);
MR_def_label(set_unordlist__fold_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_4);

MR_BEGIN_MODULE(set_unordlist_module60)
	MR_init_entry1(set_unordlist__fold_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold_4_4);
	MR_init_label2(set_unordlist__fold_4_4,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold_4_4_i2);
MR_def_label(set_unordlist__fold_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold_4_4_i3);
MR_def_label(set_unordlist__fold_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_5);

MR_BEGIN_MODULE(set_unordlist_module61)
	MR_init_entry1(set_unordlist__fold_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold_4_5);
	MR_init_label2(set_unordlist__fold_4_5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold_4_5_i2);
MR_def_label(set_unordlist__fold_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold_4_5_i3);
MR_def_label(set_unordlist__fold_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(set_unordlist_module62)
	MR_init_entry1(set_unordlist__fold2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold2_6_0);
	MR_init_label2(set_unordlist__fold2_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold2_6_0_i2);
MR_def_label(set_unordlist__fold2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold2_6_0_i3);
MR_def_label(set_unordlist__fold2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_1);

MR_BEGIN_MODULE(set_unordlist_module63)
	MR_init_entry1(set_unordlist__fold2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold2_6_1);
	MR_init_label2(set_unordlist__fold2_6_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold2_6_1_i2);
MR_def_label(set_unordlist__fold2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold2_6_1_i3);
MR_def_label(set_unordlist__fold2_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(set_unordlist_module64)
	MR_init_entry1(set_unordlist__fold2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold2_6_2);
	MR_init_label2(set_unordlist__fold2_6_2,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold2_6_2_i2);
MR_def_label(set_unordlist__fold2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold2_6_2_i3);
MR_def_label(set_unordlist__fold2_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_4);

MR_BEGIN_MODULE(set_unordlist_module65)
	MR_init_entry1(set_unordlist__fold2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold2_6_3);
	MR_init_label2(set_unordlist__fold2_6_3,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold2_6_3_i2);
MR_def_label(set_unordlist__fold2_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold2_6_3_i3);
MR_def_label(set_unordlist__fold2_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(set_unordlist_module66)
	MR_init_entry1(set_unordlist__fold2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold2_6_4);
	MR_init_label2(set_unordlist__fold2_6_4,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold2_6_4_i2);
MR_def_label(set_unordlist__fold2_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold2_6_4_i3);
MR_def_label(set_unordlist__fold2_6_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_6);

MR_BEGIN_MODULE(set_unordlist_module67)
	MR_init_entry1(set_unordlist__fold2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold2_6_5);
	MR_init_label2(set_unordlist__fold2_6_5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold2_6_5_i2);
MR_def_label(set_unordlist__fold2_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold2_6_5_i3);
MR_def_label(set_unordlist__fold2_6_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(set_unordlist_module68)
	MR_init_entry1(set_unordlist__fold3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold3_8_0);
	MR_init_label2(set_unordlist__fold3_8_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold3_8_0_i2);
MR_def_label(set_unordlist__fold3_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold3_8_0_i3);
MR_def_label(set_unordlist__fold3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_1);

MR_BEGIN_MODULE(set_unordlist_module69)
	MR_init_entry1(set_unordlist__fold3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold3_8_1);
	MR_init_label2(set_unordlist__fold3_8_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold3_8_1_i2);
MR_def_label(set_unordlist__fold3_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold3_8_1_i3);
MR_def_label(set_unordlist__fold3_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl3_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_2);

MR_BEGIN_MODULE(set_unordlist_module70)
	MR_init_entry1(set_unordlist__fold3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold3_8_2);
	MR_init_label2(set_unordlist__fold3_8_2,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold3_8_2_i2);
MR_def_label(set_unordlist__fold3_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold3_8_2_i3);
MR_def_label(set_unordlist__fold3_8_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_3);

MR_BEGIN_MODULE(set_unordlist_module71)
	MR_init_entry1(set_unordlist__fold3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold3_8_3);
	MR_init_label2(set_unordlist__fold3_8_3,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold3_8_3_i2);
MR_def_label(set_unordlist__fold3_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold3_8_3_i3);
MR_def_label(set_unordlist__fold3_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl3_8_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_4);

MR_BEGIN_MODULE(set_unordlist_module72)
	MR_init_entry1(set_unordlist__fold3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold3_8_4);
	MR_init_label2(set_unordlist__fold3_8_4,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold3_8_4_i2);
MR_def_label(set_unordlist__fold3_8_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold3_8_4_i3);
MR_def_label(set_unordlist__fold3_8_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_5);

MR_BEGIN_MODULE(set_unordlist_module73)
	MR_init_entry1(set_unordlist__fold3_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold3_8_5);
	MR_init_label2(set_unordlist__fold3_8_5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold3_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold3_8_5_i2);
MR_def_label(set_unordlist__fold3_8_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold3_8_5_i3);
MR_def_label(set_unordlist__fold3_8_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl3_8_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_0);

MR_BEGIN_MODULE(set_unordlist_module74)
	MR_init_entry1(set_unordlist__fold4_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold4_10_0);
	MR_init_label2(set_unordlist__fold4_10_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold4_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold4_10_0_i2);
MR_def_label(set_unordlist__fold4_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold4_10_0_i3);
MR_def_label(set_unordlist__fold4_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl4_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_1);

MR_BEGIN_MODULE(set_unordlist_module75)
	MR_init_entry1(set_unordlist__fold4_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold4_10_1);
	MR_init_label2(set_unordlist__fold4_10_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold4_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold4_10_1_i2);
MR_def_label(set_unordlist__fold4_10_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold4_10_1_i3);
MR_def_label(set_unordlist__fold4_10_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl4_10_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_2);

MR_BEGIN_MODULE(set_unordlist_module76)
	MR_init_entry1(set_unordlist__fold4_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold4_10_2);
	MR_init_label2(set_unordlist__fold4_10_2,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold4_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold4_10_2_i2);
MR_def_label(set_unordlist__fold4_10_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold4_10_2_i3);
MR_def_label(set_unordlist__fold4_10_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl4_10_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_5);

MR_BEGIN_MODULE(set_unordlist_module77)
	MR_init_entry1(set_unordlist__fold4_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold4_10_3);
	MR_init_label2(set_unordlist__fold4_10_3,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold4_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold4_10_3_i2);
MR_def_label(set_unordlist__fold4_10_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold4_10_3_i3);
MR_def_label(set_unordlist__fold4_10_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl4_10_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_6);

MR_BEGIN_MODULE(set_unordlist_module78)
	MR_init_entry1(set_unordlist__fold4_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold4_10_4);
	MR_init_label2(set_unordlist__fold4_10_4,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold4_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold4_10_4_i2);
MR_def_label(set_unordlist__fold4_10_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold4_10_4_i3);
MR_def_label(set_unordlist__fold4_10_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl4_10_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_7);

MR_BEGIN_MODULE(set_unordlist_module79)
	MR_init_entry1(set_unordlist__fold4_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold4_10_5);
	MR_init_label2(set_unordlist__fold4_10_5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold4_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold4_10_5_i2);
MR_def_label(set_unordlist__fold4_10_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold4_10_5_i3);
MR_def_label(set_unordlist__fold4_10_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl4_10_7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_0);

MR_BEGIN_MODULE(set_unordlist_module80)
	MR_init_entry1(set_unordlist__fold5_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold5_12_0);
	MR_init_label2(set_unordlist__fold5_12_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold5_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold5_12_0_i2);
MR_def_label(set_unordlist__fold5_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold5_12_0_i3);
MR_def_label(set_unordlist__fold5_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl5_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_1);

MR_BEGIN_MODULE(set_unordlist_module81)
	MR_init_entry1(set_unordlist__fold5_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold5_12_1);
	MR_init_label2(set_unordlist__fold5_12_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold5_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold5_12_1_i2);
MR_def_label(set_unordlist__fold5_12_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold5_12_1_i3);
MR_def_label(set_unordlist__fold5_12_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl5_12_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_2);

MR_BEGIN_MODULE(set_unordlist_module82)
	MR_init_entry1(set_unordlist__fold5_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold5_12_2);
	MR_init_label2(set_unordlist__fold5_12_2,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold5_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold5_12_2_i2);
MR_def_label(set_unordlist__fold5_12_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold5_12_2_i3);
MR_def_label(set_unordlist__fold5_12_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl5_12_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_3);

MR_BEGIN_MODULE(set_unordlist_module83)
	MR_init_entry1(set_unordlist__fold5_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold5_12_3);
	MR_init_label2(set_unordlist__fold5_12_3,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold5_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold5_12_3_i2);
MR_def_label(set_unordlist__fold5_12_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold5_12_3_i3);
MR_def_label(set_unordlist__fold5_12_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl5_12_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_4);

MR_BEGIN_MODULE(set_unordlist_module84)
	MR_init_entry1(set_unordlist__fold5_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold5_12_4);
	MR_init_label2(set_unordlist__fold5_12_4,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold5_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold5_12_4_i2);
MR_def_label(set_unordlist__fold5_12_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold5_12_4_i3);
MR_def_label(set_unordlist__fold5_12_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl5_12_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_5);

MR_BEGIN_MODULE(set_unordlist_module85)
	MR_init_entry1(set_unordlist__fold5_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold5_12_5);
	MR_init_label2(set_unordlist__fold5_12_5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold5_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(13) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold5_12_5_i2);
MR_def_label(set_unordlist__fold5_12_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold5_12_5_i3);
MR_def_label(set_unordlist__fold5_12_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl5_12_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_0);

MR_BEGIN_MODULE(set_unordlist_module86)
	MR_init_entry1(set_unordlist__fold6_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold6_14_0);
	MR_init_label2(set_unordlist__fold6_14_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold6_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(15) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold6_14_0_i2);
MR_def_label(set_unordlist__fold6_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold6_14_0_i3);
MR_def_label(set_unordlist__fold6_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl6_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_1);

MR_BEGIN_MODULE(set_unordlist_module87)
	MR_init_entry1(set_unordlist__fold6_14_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold6_14_1);
	MR_init_label2(set_unordlist__fold6_14_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold6_14_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(15) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold6_14_1_i2);
MR_def_label(set_unordlist__fold6_14_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold6_14_1_i3);
MR_def_label(set_unordlist__fold6_14_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl6_14_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_2);

MR_BEGIN_MODULE(set_unordlist_module88)
	MR_init_entry1(set_unordlist__fold6_14_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold6_14_2);
	MR_init_label2(set_unordlist__fold6_14_2,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold6_14_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(15) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold6_14_2_i2);
MR_def_label(set_unordlist__fold6_14_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold6_14_2_i3);
MR_def_label(set_unordlist__fold6_14_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl6_14_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_5);

MR_BEGIN_MODULE(set_unordlist_module89)
	MR_init_entry1(set_unordlist__fold6_14_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold6_14_3);
	MR_init_label2(set_unordlist__fold6_14_3,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold6_14_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(15) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold6_14_3_i2);
MR_def_label(set_unordlist__fold6_14_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold6_14_3_i3);
MR_def_label(set_unordlist__fold6_14_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl6_14_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_6);

MR_BEGIN_MODULE(set_unordlist_module90)
	MR_init_entry1(set_unordlist__fold6_14_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold6_14_4);
	MR_init_label2(set_unordlist__fold6_14_4,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold6_14_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(15) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold6_14_4_i2);
MR_def_label(set_unordlist__fold6_14_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold6_14_4_i3);
MR_def_label(set_unordlist__fold6_14_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl6_14_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_7);

MR_BEGIN_MODULE(set_unordlist_module91)
	MR_init_entry1(set_unordlist__fold6_14_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__fold6_14_5);
	MR_init_label2(set_unordlist__fold6_14_5,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__fold6_14_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(15) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		set_unordlist__fold6_14_5_i2);
MR_def_label(set_unordlist__fold6_14_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(15);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		set_unordlist__fold6_14_5_i3);
MR_def_label(set_unordlist__fold6_14_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(list__foldl6_14_7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(set_unordlist_module92)
	MR_init_entry1(set_unordlist__divide_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__divide_2_6_0);
	MR_init_label4(set_unordlist__divide_2_6_0,21,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__divide_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(set_unordlist__divide_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_unordlist__divide_2_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(set_unordlist__divide_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_unordlist__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_unordlist__divide_2_6_0_i6);
MR_def_label(set_unordlist__divide_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_unordlist__divide_2_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(set_unordlist__divide_2_6_0_i21);
	}
MR_def_label(set_unordlist__divide_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(set_unordlist__divide_2_6_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module93)
	MR_init_entry1(set_unordlist__divide_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__divide_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__divide_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_unordlist__divide_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module94)
	MR_init_entry1(set_unordlist__filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__filter_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_unordlist__divide_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module95)
	MR_init_entry1(set_unordlist__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_unordlist__filter_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_unordlist__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_unordlist__divide_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(set_unordlist_module96)
	MR_init_entry1(__Unify___set_unordlist__set_unordlist_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___set_unordlist__set_unordlist_1_0);
	MR_init_label1(__Unify___set_unordlist__set_unordlist_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___set_unordlist__set_unordlist_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___set_unordlist__set_unordlist_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___set_unordlist__set_unordlist_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(set_unordlist_module97)
	MR_init_entry1(__Compare___set_unordlist__set_unordlist_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___set_unordlist__set_unordlist_1_0);
	MR_init_label2(__Compare___set_unordlist__set_unordlist_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___set_unordlist__set_unordlist_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___set_unordlist__set_unordlist_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___set_unordlist__set_unordlist_1_0_i2);
MR_def_label(__Compare___set_unordlist__set_unordlist_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___set_unordlist__set_unordlist_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module98)
	MR_init_entry1(fn__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(set_unordlist_module99)
	MR_init_entry1(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho7__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_unordlist_module100)
	MR_init_entry1(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_init_label5(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__filter_map__ho8__[1, 2, 4, 5, 6]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i6);
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,
		f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i8);
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_117_110_111_114_100_108_105_115_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__set_unordlist_maybe_bunch_0(void)
{
	set_unordlist_module0();
	set_unordlist_module1();
	set_unordlist_module2();
	set_unordlist_module3();
	set_unordlist_module4();
	set_unordlist_module5();
	set_unordlist_module6();
	set_unordlist_module7();
	set_unordlist_module8();
	set_unordlist_module9();
	set_unordlist_module10();
	set_unordlist_module11();
	set_unordlist_module12();
	set_unordlist_module13();
	set_unordlist_module14();
	set_unordlist_module15();
	set_unordlist_module16();
	set_unordlist_module17();
	set_unordlist_module18();
	set_unordlist_module19();
	set_unordlist_module20();
	set_unordlist_module21();
	set_unordlist_module22();
	set_unordlist_module23();
	set_unordlist_module24();
	set_unordlist_module25();
	set_unordlist_module26();
	set_unordlist_module27();
	set_unordlist_module28();
	set_unordlist_module29();
	set_unordlist_module30();
	set_unordlist_module31();
	set_unordlist_module32();
	set_unordlist_module33();
	set_unordlist_module34();
	set_unordlist_module35();
	set_unordlist_module36();
	set_unordlist_module37();
	set_unordlist_module38();
	set_unordlist_module39();
}

static void mercury__set_unordlist_maybe_bunch_1(void)
{
	set_unordlist_module40();
	set_unordlist_module41();
	set_unordlist_module42();
	set_unordlist_module43();
	set_unordlist_module44();
	set_unordlist_module45();
	set_unordlist_module46();
	set_unordlist_module47();
	set_unordlist_module48();
	set_unordlist_module49();
	set_unordlist_module50();
	set_unordlist_module51();
	set_unordlist_module52();
	set_unordlist_module53();
	set_unordlist_module54();
	set_unordlist_module55();
	set_unordlist_module56();
	set_unordlist_module57();
	set_unordlist_module58();
	set_unordlist_module59();
	set_unordlist_module60();
	set_unordlist_module61();
	set_unordlist_module62();
	set_unordlist_module63();
	set_unordlist_module64();
	set_unordlist_module65();
	set_unordlist_module66();
	set_unordlist_module67();
	set_unordlist_module68();
	set_unordlist_module69();
	set_unordlist_module70();
	set_unordlist_module71();
	set_unordlist_module72();
	set_unordlist_module73();
	set_unordlist_module74();
	set_unordlist_module75();
	set_unordlist_module76();
	set_unordlist_module77();
	set_unordlist_module78();
	set_unordlist_module79();
}

static void mercury__set_unordlist_maybe_bunch_2(void)
{
	set_unordlist_module80();
	set_unordlist_module81();
	set_unordlist_module82();
	set_unordlist_module83();
	set_unordlist_module84();
	set_unordlist_module85();
	set_unordlist_module86();
	set_unordlist_module87();
	set_unordlist_module88();
	set_unordlist_module89();
	set_unordlist_module90();
	set_unordlist_module91();
	set_unordlist_module92();
	set_unordlist_module93();
	set_unordlist_module94();
	set_unordlist_module95();
	set_unordlist_module96();
	set_unordlist_module97();
	set_unordlist_module98();
	set_unordlist_module99();
	set_unordlist_module100();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__set_unordlist__init(void);
void mercury__set_unordlist__init_type_tables(void);
void mercury__set_unordlist__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__set_unordlist__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__set_unordlist__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__set_unordlist__init_threadscope_string_table(void);
#endif

void mercury__set_unordlist__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__set_unordlist_maybe_bunch_0();
	mercury__set_unordlist_maybe_bunch_1();
	mercury__set_unordlist_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_set_unordlist__type_ctor_info_set_unordlist_1,
		set_unordlist__set_unordlist_1_0);
	mercury__set_unordlist__init_debugger();
}

void mercury__set_unordlist__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_set_unordlist__type_ctor_info_set_unordlist_1);
	}
}


void mercury__set_unordlist__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__set_unordlist__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__set_unordlist);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__set_unordlist__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__set_unordlist__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
