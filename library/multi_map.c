/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version 11.07-beta-2011-12-16, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__multi_map__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "multi_map.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "multi_map.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "multi_map.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "multi_map.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "multi_map.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 48 "multi_map.c"
#line 58 "array.opt"
#include "store.mh"

#line 52 "multi_map.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "multi_map.c"
#line 157 "io.opt"
#include "dir.mh"

#line 60 "multi_map.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 64 "multi_map.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "multi_map.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "multi_map.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 76 "multi_map.c"
#line 4 "char.opt"
#include "char.mh"

#line 80 "multi_map.c"
#line 3 "float.opt"
#include "float.mh"

#line 84 "multi_map.c"
#line 3 "math.opt"
#include "math.mh"

#line 88 "multi_map.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "multi_map.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 96 "multi_map.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "multi_map.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "multi_map.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "multi_map.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "multi_map.c"
#line 113 "multi_map.c"
#include "multi_map.mh"

#line 116 "multi_map.c"
#line 117 "multi_map.c"
#ifndef MULTI_MAP_DECL_GUARD
#define MULTI_MAP_DECL_GUARD

#line 121 "multi_map.c"
#line 122 "multi_map.c"

#endif
#line 125 "multi_map.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_multi_map__type_ctor_info_multi_map_2;
MR_decl_label3(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0, 10,3,4)
MR_decl_label2(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0, 3,4)
MR_decl_label1(multi_map__all_count_2_0, 2)
MR_decl_label3(multi_map__apply_to_list_3_0, 18,5,6)
MR_decl_label9(multi_map__assoc_list_merge_3_0, 3,38,6,9,8,12,13,11,16)
MR_decl_label2(multi_map__count_list_3_0, 4,2)
MR_decl_label4(multi_map__delete_4_0, 4,6,8,2)
MR_decl_label3(multi_map__det_update_4_0, 4,7,2)
MR_decl_label1(multi_map__from_corresponding_list_lists_3_0, 3)
MR_decl_label2(multi_map__from_corresponding_lists_3_0, 3,2)
MR_decl_label4(multi_map__from_corresponding_lists_2_4_0, 23,3,6,1)
MR_decl_label2(multi_map__inverse_search_3_0, 2,3)
MR_decl_label2(multi_map__member_3_0, 2,3)
MR_decl_label3(multi_map__merge_3_0, 3,4,5)
MR_decl_label1(multi_map__nondet_lookup_3_0, 2)
MR_decl_label1(multi_map__nondet_search_3_0, 2)
MR_decl_label2(multi_map__set_4_0, 4,2)
MR_decl_label1(multi_map__to_flat_assoc_list_2_0, 3)
MR_decl_label2(multi_map__update_4_0, 3,1)
MR_decl_label2(multi_map__values_2_0, 3,4)
MR_decl_label10(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0, 14,15,16,12,18,19)
MR_decl_label3(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0, 6,7,2)
MR_decl_label1(fn__multi_map__all_count_1_0, 2)
MR_decl_label1(fn__multi_map__from_corresponding_list_lists_2_0, 3)
MR_def_extern_entry(multi_map__init_1_0)
MR_def_extern_entry(fn__multi_map__init_0_0)
MR_def_extern_entry(multi_map__is_empty_1_0)
MR_def_extern_entry(multi_map__contains_2_0)
MR_def_extern_entry(multi_map__member_3_0)
MR_def_extern_entry(multi_map__search_3_0)
MR_def_extern_entry(multi_map__nondet_search_3_0)
MR_def_extern_entry(multi_map__lookup_3_0)
MR_def_extern_entry(fn__multi_map__lookup_2_0)
MR_def_extern_entry(multi_map__nondet_lookup_3_0)
MR_def_extern_entry(multi_map__inverse_search_3_0)
MR_def_extern_entry(multi_map__insert_4_0)
MR_def_extern_entry(multi_map__det_insert_4_0)
MR_def_extern_entry(fn__multi_map__det_insert_3_0)
MR_def_extern_entry(multi_map__update_4_0)
MR_def_extern_entry(multi_map__det_update_4_0)
MR_def_extern_entry(fn__multi_map__det_update_3_0)
MR_def_extern_entry(multi_map__replace_4_0)
MR_def_extern_entry(multi_map__det_replace_4_0)
MR_def_extern_entry(fn__multi_map__det_replace_3_0)
MR_def_extern_entry(multi_map__set_4_0)
MR_def_extern_entry(fn__multi_map__set_3_0)
MR_def_extern_entry(fn__multi_map__add_3_0)
MR_def_extern_entry(multi_map__add_4_0)
MR_def_extern_entry(multi_map__keys_2_0)
MR_def_extern_entry(fn__multi_map__keys_1_0)
MR_def_extern_entry(multi_map__values_2_0)
MR_def_extern_entry(fn__multi_map__values_1_0)
MR_def_extern_entry(multi_map__to_flat_assoc_list_2_0)
MR_def_extern_entry(fn__multi_map__to_flat_assoc_list_1_0)
MR_def_extern_entry(multi_map__from_flat_assoc_list_2_0)
MR_def_extern_entry(fn__multi_map__from_flat_assoc_list_1_0)
MR_def_extern_entry(multi_map__to_assoc_list_2_0)
MR_def_extern_entry(fn__multi_map__to_assoc_list_1_0)
MR_def_extern_entry(multi_map__from_assoc_list_2_0)
MR_def_extern_entry(fn__multi_map__from_assoc_list_1_0)
MR_def_extern_entry(multi_map__from_sorted_assoc_list_2_0)
MR_def_extern_entry(fn__multi_map__from_sorted_assoc_list_1_0)
MR_def_extern_entry(multi_map__delete_3_0)
MR_def_extern_entry(fn__multi_map__delete_2_0)
MR_def_extern_entry(multi_map__delete_4_0)
MR_def_extern_entry(fn__multi_map__delete_3_0)
MR_def_extern_entry(multi_map__remove_4_0)
MR_def_extern_entry(multi_map__det_remove_4_0)
MR_def_extern_entry(multi_map__count_2_0)
MR_def_extern_entry(fn__multi_map__count_1_0)
MR_def_extern_entry(multi_map__count_list_3_0)
MR_def_extern_entry(multi_map__all_count_2_0)
MR_def_extern_entry(fn__multi_map__all_count_1_0)
MR_def_extern_entry(multi_map__from_corresponding_lists_2_4_0)
MR_def_extern_entry(multi_map__from_corresponding_lists_3_0)
MR_def_extern_entry(fn__multi_map__from_corresponding_lists_2_0)
MR_def_extern_entry(multi_map__from_corresponding_list_lists_3_0)
MR_def_extern_entry(fn__multi_map__from_corresponding_list_lists_2_0)
MR_def_extern_entry(multi_map__assoc_list_merge_3_0)
MR_def_extern_entry(multi_map__merge_3_0)
MR_def_extern_entry(fn__multi_map__merge_2_0)
MR_def_extern_entry(multi_map__select_3_0)
MR_def_extern_entry(fn__multi_map__select_2_0)
MR_def_extern_entry(multi_map__apply_to_list_3_0)
MR_def_extern_entry(fn__multi_map__apply_to_list_2_0)
MR_def_extern_entry(multi_map__optimize_2_0)
MR_def_extern_entry(fn__multi_map__optimize_1_0)
MR_def_extern_entry(multi_map__remove_smallest_4_0)
MR_def_extern_entry(__Unify___multi_map__multi_map_2_0)
MR_def_extern_entry(__Compare___multi_map__multi_map_2_0)
MR_decl_static(fn__f_109_117_108_116_105_95_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0)
MR_decl_static(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0)
MR_decl_static(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0)
MR_decl_static(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0)
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_2 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_multi_map__type_ctor_info_multi_map_2 = {
	2,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___multi_map__multi_map_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___multi_map__multi_map_2_0)),
	"multi_map",
	"multi_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(multi_map_module0)
	MR_init_entry1(multi_map__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module1)
	MR_init_entry1(fn__multi_map__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module2)
	MR_init_entry1(multi_map__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__search_3_0);

MR_BEGIN_MODULE(multi_map_module3)
	MR_init_entry1(multi_map__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(tree234__member_3_0);
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(multi_map_module4)
	MR_init_entry1(multi_map__member_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__member_3_0);
	MR_init_label2(multi_map__member_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred multi_map.member/3-0", 2,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_fv(2) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__member_3_0,
		multi_map__member_3_0_i2);
MR_def_label(multi_map__member_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_fv(2);
	MR_np_call_localret_ent(list__member_2_1,
		multi_map__member_3_0_i3);
MR_def_label(multi_map__member_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module5)
	MR_init_entry1(multi_map__search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__search_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module6)
	MR_init_entry1(multi_map__nondet_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__nondet_search_3_0);
	MR_init_label1(multi_map__nondet_search_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__nondet_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred multi_map.nondet_search/3-0", 1,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_fv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		multi_map__nondet_search_3_0_i2);
MR_def_label(multi_map__nondet_search_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_fv(1);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(list__member_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(multi_map_module7)
	MR_init_entry1(multi_map__lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__lookup_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module8)
	MR_init_entry1(fn__multi_map__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__lookup_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module9)
	MR_init_entry1(multi_map__nondet_lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__nondet_lookup_3_0);
	MR_init_label1(multi_map__nondet_lookup_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__nondet_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred multi_map.nondet_lookup/3-0", 1,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_fv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		multi_map__nondet_lookup_3_0_i2);
MR_def_label(multi_map__nondet_lookup_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_r1 = MR_fv(1);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(list__member_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(multi_map_module10)
	MR_init_entry1(multi_map__inverse_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__inverse_search_3_0);
	MR_init_label2(multi_map__inverse_search_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inverse_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__inverse_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred multi_map.inverse_search/3-0", 3,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_fv(1) = MR_r4;
	MR_fv(3) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__member_3_0,
		multi_map__inverse_search_3_0_i2);
MR_def_label(multi_map__inverse_search_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		multi_map__inverse_search_3_0_i3);
MR_def_label(multi_map__inverse_search_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__insert_4_0);

MR_BEGIN_MODULE(multi_map_module11)
	MR_init_entry1(multi_map__insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__insert_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(tree234__insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(multi_map_module12)
	MR_init_entry1(multi_map__det_insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__det_insert_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module13)
	MR_init_entry1(fn__multi_map__det_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__det_insert_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__det_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__update_4_0);

MR_BEGIN_MODULE(multi_map_module14)
	MR_init_entry1(multi_map__update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__update_4_0);
	MR_init_label2(multi_map__update_4_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		multi_map__update_4_0_i3);
MR_def_label(multi_map__update_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(multi_map__update_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(tree234__update_4_0);
	}
MR_def_label(multi_map__update_4_0,1)
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

MR_decl_entry(require__report_lookup_error_2_0);

MR_BEGIN_MODULE(multi_map_module15)
	MR_init_entry1(multi_map__det_update_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__det_update_4_0);
	MR_init_label3(multi_map__det_update_4_0,4,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__det_update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		multi_map__det_update_4_0_i4);
MR_def_label(multi_map__det_update_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(multi_map__det_update_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__update_4_0,
		multi_map__det_update_4_0_i7);
MR_def_label(multi_map__det_update_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(multi_map__det_update_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(multi_map__det_update_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("multi_map.det_update: key not found", 35);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__report_lookup_error_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module16)
	MR_init_entry1(fn__multi_map__det_update_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__det_update_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_update'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__det_update_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(multi_map__det_update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module17)
	MR_init_entry1(multi_map__replace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__replace_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__replace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(multi_map_module18)
	MR_init_entry1(multi_map__det_replace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__det_replace_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_replace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__det_replace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(map__det_update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module19)
	MR_init_entry1(fn__multi_map__det_replace_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__det_replace_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_replace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__det_replace_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__det_update_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__set_4_0);

MR_BEGIN_MODULE(multi_map_module20)
	MR_init_entry1(multi_map__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__set_4_0);
	MR_init_label2(multi_map__set_4_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		multi_map__set_4_0_i4);
MR_def_label(multi_map__set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(multi_map__set_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(tree234__set_4_0);
	}
MR_def_label(multi_map__set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module21)
	MR_init_entry1(fn__multi_map__set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__set_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(multi_map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module22)
	MR_init_entry1(fn__multi_map__add_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__add_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__add_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(multi_map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module23)
	MR_init_entry1(multi_map__add_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__add_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__add_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);

MR_BEGIN_MODULE(multi_map_module24)
	MR_init_entry1(multi_map__keys_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__keys_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module25)
	MR_init_entry1(fn__multi_map__keys_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__keys_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__keys_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__values_2_3_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__condense_2_3_0);

MR_BEGIN_MODULE(multi_map_module26)
	MR_init_entry1(multi_map__values_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__values_2_0);
	MR_init_label2(multi_map__values_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'values'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__values_2_3_0,
		multi_map__values_2_0_i3);
MR_def_label(multi_map__values_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		multi_map__values_2_0_i4);
MR_def_label(multi_map__values_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__condense_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module27)
	MR_init_entry1(fn__multi_map__values_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__values_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'values'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__values_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__values_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;

MR_BEGIN_MODULE(multi_map_module28)
	MR_init_entry1(multi_map__to_flat_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__to_flat_assoc_list_2_0);
	MR_init_label1(multi_map__to_flat_assoc_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_flat_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__to_flat_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r1;
	MR_r4 = MR_r2;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		multi_map__to_flat_assoc_list_2_0_i3);
MR_def_label(multi_map__to_flat_assoc_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module29)
	MR_init_entry1(fn__multi_map__to_flat_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__to_flat_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_flat_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__to_flat_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__to_flat_assoc_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module30)
	MR_init_entry1(multi_map__from_flat_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__from_flat_assoc_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_flat_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__from_flat_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module31)
	MR_init_entry1(fn__multi_map__from_flat_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__from_flat_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_flat_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__from_flat_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__from_flat_assoc_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__tree234_to_assoc_list_2_3_0);

MR_BEGIN_MODULE(multi_map_module32)
	MR_init_entry1(multi_map__to_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__to_assoc_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__tree234_to_assoc_list_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module33)
	MR_init_entry1(fn__multi_map__to_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__to_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__tree234_to_assoc_list_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__assoc_list_to_tree234_2_3_0);

MR_BEGIN_MODULE(multi_map_module34)
	MR_init_entry1(multi_map__from_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__from_assoc_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module35)
	MR_init_entry1(fn__multi_map__from_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__from_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__from_sorted_assoc_list_2_0);

MR_BEGIN_MODULE(multi_map_module36)
	MR_init_entry1(multi_map__from_sorted_assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__from_sorted_assoc_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_sorted_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__from_sorted_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__from_sorted_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module37)
	MR_init_entry1(fn__multi_map__from_sorted_assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__from_sorted_assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_sorted_assoc_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__from_sorted_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__from_sorted_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__delete_2_4_0);

MR_BEGIN_MODULE(multi_map_module38)
	MR_init_entry1(multi_map__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(tree234__delete_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module39)
	MR_init_entry1(fn__multi_map__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__delete_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__delete_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_all_3_1);

MR_BEGIN_MODULE(multi_map_module40)
	MR_init_entry1(multi_map__delete_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__delete_4_0);
	MR_init_label4(multi_map__delete_4_0,4,6,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__delete_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		multi_map__delete_4_0_i4);
MR_def_label(multi_map__delete_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(multi_map__delete_4_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_all_3_1,
		multi_map__delete_4_0_i6);
MR_def_label(multi_map__delete_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(multi_map__delete_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(tree234__delete_2_4_0);
MR_def_label(multi_map__delete_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(tree234__set_4_0);
	}
MR_def_label(multi_map__delete_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module41)
	MR_init_entry1(fn__multi_map__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(multi_map__delete_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__remove_2_5_0);

MR_BEGIN_MODULE(multi_map_module42)
	MR_init_entry1(multi_map__remove_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__remove_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(tree234__remove_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);

MR_BEGIN_MODULE(multi_map_module43)
	MR_init_entry1(multi_map__det_remove_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__det_remove_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_remove'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__det_remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(map__det_remove_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__count_2_0);

MR_BEGIN_MODULE(multi_map_module44)
	MR_init_entry1(multi_map__count_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__count_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__count_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module45)
	MR_init_entry1(fn__multi_map__count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__count_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__count_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module46)
	MR_init_entry1(multi_map__count_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__count_list_3_0);
	MR_init_label2(multi_map__count_list_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__count_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(multi_map__count_list_3_0_i2);
	}
MR_def_label(multi_map__count_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	break; } /* end while */
MR_def_label(multi_map__count_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module47)
	MR_init_entry1(multi_map__all_count_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__all_count_2_0);
	MR_init_label1(multi_map__all_count_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__all_count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(multi_map__values_2_0,
		multi_map__all_count_2_0_i2);
MR_def_label(multi_map__all_count_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(multi_map__count_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module48)
	MR_init_entry1(fn__multi_map__all_count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__all_count_1_0);
	MR_init_label1(fn__multi_map__all_count_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__all_count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(multi_map__values_2_0,
		fn__multi_map__all_count_1_0_i2);
MR_def_label(fn__multi_map__all_count_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(multi_map__count_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module49)
	MR_init_entry1(multi_map__from_corresponding_lists_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__from_corresponding_lists_2_4_0);
	MR_init_label4(multi_map__from_corresponding_lists_2_4_0,23,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_lists_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__from_corresponding_lists_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(multi_map__from_corresponding_lists_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(multi_map__from_corresponding_lists_2_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(multi_map__from_corresponding_lists_2_4_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(multi_map__from_corresponding_lists_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(multi_map__from_corresponding_lists_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(multi_map__set_4_0,
		multi_map__from_corresponding_lists_2_4_0_i6);
MR_def_label(multi_map__from_corresponding_lists_2_4_0,6)
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
	MR_GOTO_LAB(multi_map__from_corresponding_lists_2_4_0_i23);
	}
MR_def_label(multi_map__from_corresponding_lists_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(multi_map_module50)
	MR_init_entry1(multi_map__from_corresponding_lists_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__from_corresponding_lists_3_0);
	MR_init_label2(multi_map__from_corresponding_lists_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__from_corresponding_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(multi_map__from_corresponding_lists_2_4_0,
		multi_map__from_corresponding_lists_3_0_i3);
MR_def_label(multi_map__from_corresponding_lists_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(multi_map__from_corresponding_lists_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(multi_map__from_corresponding_lists_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("multi_map.from_corresponding_lists: list length mismatch", 56);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module51)
	MR_init_entry1(fn__multi_map__from_corresponding_lists_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__from_corresponding_lists_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__from_corresponding_lists_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__from_corresponding_lists_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(multi_map_module52)
	MR_init_entry1(multi_map__from_corresponding_list_lists_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__from_corresponding_list_lists_3_0);
	MR_init_label1(multi_map__from_corresponding_list_lists_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_list_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__from_corresponding_list_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		multi_map__from_corresponding_list_lists_3_0_i3);
MR_def_label(multi_map__from_corresponding_list_lists_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module53)
	MR_init_entry1(fn__multi_map__from_corresponding_list_lists_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__from_corresponding_list_lists_2_0);
	MR_init_label1(fn__multi_map__from_corresponding_list_lists_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_list_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__from_corresponding_list_lists_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		fn__multi_map__from_corresponding_list_lists_2_0_i3);
MR_def_label(fn__multi_map__from_corresponding_list_lists_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(tree234__assoc_list_to_tree234_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(multi_map_module54)
	MR_init_entry1(multi_map__assoc_list_merge_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__assoc_list_merge_3_0);
	MR_init_label9(multi_map__assoc_list_merge_3_0,3,38,6,9,8,12,13,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assoc_list_merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__assoc_list_merge_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(multi_map__assoc_list_merge_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(multi_map__assoc_list_merge_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(multi_map__assoc_list_merge_3_0_i38);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(multi_map__assoc_list_merge_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_sv(2) = MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(11) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		multi_map__assoc_list_merge_3_0_i6);
MR_def_label(multi_map__assoc_list_merge_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(multi_map__assoc_list_merge_3_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(multi_map__assoc_list_merge_3_0,
		multi_map__assoc_list_merge_3_0_i9);
MR_def_label(multi_map__assoc_list_merge_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
MR_def_label(multi_map__assoc_list_merge_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(multi_map__assoc_list_merge_3_0_i11);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_1,
		multi_map__assoc_list_merge_3_0_i12);
MR_def_label(multi_map__assoc_list_merge_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(multi_map__assoc_list_merge_3_0,
		multi_map__assoc_list_merge_3_0_i13);
MR_def_label(multi_map__assoc_list_merge_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(12);
	}
MR_def_label(multi_map__assoc_list_merge_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(multi_map__assoc_list_merge_3_0,
		multi_map__assoc_list_merge_3_0_i16);
MR_def_label(multi_map__assoc_list_merge_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module55)
	MR_init_entry1(multi_map__merge_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__merge_3_0);
	MR_init_label3(multi_map__merge_3_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__merge_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		multi_map__merge_3_0_i3);
MR_def_label(multi_map__merge_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		multi_map__merge_3_0_i4);
MR_def_label(multi_map__merge_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__assoc_list_merge_3_0,
		multi_map__merge_3_0_i5);
MR_def_label(multi_map__merge_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(tree234__from_sorted_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module56)
	MR_init_entry1(fn__multi_map__merge_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__merge_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__merge_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__merge_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__select_loop_4_0);

MR_BEGIN_MODULE(multi_map_module57)
	MR_init_entry1(multi_map__select_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__select_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__select_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(map__select_loop_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module58)
	MR_init_entry1(fn__multi_map__select_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__select_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__select_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(map__select_loop_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__apply_to_list_3_0);

MR_BEGIN_MODULE(multi_map_module59)
	MR_init_entry1(multi_map__apply_to_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__apply_to_list_3_0);
	MR_init_label3(multi_map__apply_to_list_3_0,18,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__apply_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(multi_map__apply_to_list_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(multi_map__apply_to_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		multi_map__apply_to_list_3_0_i5);
MR_def_label(multi_map__apply_to_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		multi_map__apply_to_list_3_0_i6);
MR_def_label(multi_map__apply_to_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__condense_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module60)
	MR_init_entry1(fn__multi_map__apply_to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__apply_to_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_to_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__apply_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(multi_map__apply_to_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module61)
	MR_init_entry1(multi_map__optimize_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__optimize_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__optimize_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module62)
	MR_init_entry1(fn__multi_map__optimize_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__multi_map__optimize_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__multi_map__optimize_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__remove_smallest_2_5_0);

MR_BEGIN_MODULE(multi_map_module63)
	MR_init_entry1(multi_map__remove_smallest_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__multi_map__remove_smallest_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_smallest'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__multi_map__remove_smallest_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(tree234__remove_smallest_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(multi_map_module64)
	MR_init_entry1(__Unify___multi_map__multi_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___multi_map__multi_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___multi_map__multi_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(multi_map_module65)
	MR_init_entry1(__Compare___multi_map__multi_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___multi_map__multi_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___multi_map__multi_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module66)
	MR_init_entry1(fn__f_109_117_108_116_105_95_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_117_108_116_105_95_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_117_108_116_105_95_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module67)
	MR_init_entry1(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0);
	MR_init_label3(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho1__[1, 2, 3, 4, 6, 7, 8]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module68)
	MR_init_entry1(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0);
	MR_init_label3(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho12__[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16, 17, 18]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i4);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module69)
	MR_init_entry1(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0);
	MR_init_label10(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho15__[1, 2, 3, 4, 6, 7, 8, 10, 11, 12, 15, 16, 17, 18]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(14);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 9);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r5 = MR_tfield(3, MR_r5, 6);
	}
	MR_np_localcall_lab(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i5);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i6);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i7);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i8);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i9);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i10);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i34);
	}
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 6);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r5 = MR_tfield(2, MR_r5, 4);
	}
	MR_np_localcall_lab(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i13);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i14);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i15);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i16);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i34);
	}
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r5 = MR_tfield(1, MR_r5, 2);
	}
	MR_np_localcall_lab(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i18);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,
		f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i19);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(f_109_117_108_116_105_95_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_53_44_32_49_54_44_32_49_55_44_32_49_56_93_95_48_4_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(multi_map_module70)
	MR_init_entry1(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0);
	MR_init_label2(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__foldl__183__1__ho16__[2, 3, 4, 8, 9, 10]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_sv(1) = MR_r7;
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(fn__f_109_117_108_116_105_95_109_97_112_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_0,
		f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0_i3);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0_i4);
MR_def_label(f_109_117_108_116_105_95_109_97_112_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_49_56_51_95_95_49_95_95_104_111_49_54_95_95_91_50_44_32_51_44_32_52_44_32_56_44_32_57_44_32_49_48_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__multi_map_maybe_bunch_0(void)
{
	multi_map_module0();
	multi_map_module1();
	multi_map_module2();
	multi_map_module3();
	multi_map_module4();
	multi_map_module5();
	multi_map_module6();
	multi_map_module7();
	multi_map_module8();
	multi_map_module9();
	multi_map_module10();
	multi_map_module11();
	multi_map_module12();
	multi_map_module13();
	multi_map_module14();
	multi_map_module15();
	multi_map_module16();
	multi_map_module17();
	multi_map_module18();
	multi_map_module19();
	multi_map_module20();
	multi_map_module21();
	multi_map_module22();
	multi_map_module23();
	multi_map_module24();
	multi_map_module25();
	multi_map_module26();
	multi_map_module27();
	multi_map_module28();
	multi_map_module29();
	multi_map_module30();
	multi_map_module31();
	multi_map_module32();
	multi_map_module33();
	multi_map_module34();
	multi_map_module35();
	multi_map_module36();
	multi_map_module37();
	multi_map_module38();
	multi_map_module39();
}

static void mercury__multi_map_maybe_bunch_1(void)
{
	multi_map_module40();
	multi_map_module41();
	multi_map_module42();
	multi_map_module43();
	multi_map_module44();
	multi_map_module45();
	multi_map_module46();
	multi_map_module47();
	multi_map_module48();
	multi_map_module49();
	multi_map_module50();
	multi_map_module51();
	multi_map_module52();
	multi_map_module53();
	multi_map_module54();
	multi_map_module55();
	multi_map_module56();
	multi_map_module57();
	multi_map_module58();
	multi_map_module59();
	multi_map_module60();
	multi_map_module61();
	multi_map_module62();
	multi_map_module63();
	multi_map_module64();
	multi_map_module65();
	multi_map_module66();
	multi_map_module67();
	multi_map_module68();
	multi_map_module69();
	multi_map_module70();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__multi_map__init(void);
void mercury__multi_map__init_type_tables(void);
void mercury__multi_map__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__multi_map__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__multi_map__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__multi_map__init_threadscope_string_table(void);
#endif

void mercury__multi_map__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__multi_map_maybe_bunch_0();
	mercury__multi_map_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_multi_map__type_ctor_info_multi_map_2,
		multi_map__multi_map_2_0);
	mercury__multi_map__init_debugger();
}

void mercury__multi_map__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_multi_map__type_ctor_info_multi_map_2);
	}
}


void mercury__multi_map__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__multi_map__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__multi_map);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__multi_map__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__multi_map__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
