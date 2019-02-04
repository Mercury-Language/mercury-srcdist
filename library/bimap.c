/*
** Automatically generated from `bimap.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__bimap__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "io.int2"
#include "io.mh"

#line 27 "bimap.c"
#line 136 "io.int2"
#include "string.mh"

#line 31 "bimap.c"
#line 23 "bitmap.int2"
#include "bitmap.mh"

#line 35 "bimap.c"
#line 26 "time.int2"
#include "time.mh"

#line 39 "bimap.c"
#line 34 "string.opt"
#include "array.mh"

#line 43 "bimap.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 47 "bimap.c"
#line 131 "io.opt"
#include "dir.mh"

#line 51 "bimap.c"
#line 139 "io.opt"
#include "table_builtin.mh"

#line 55 "bimap.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 59 "bimap.c"
#line 22 "store.opt"
#include "store.mh"

#line 63 "bimap.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "bimap.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "bimap.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "bimap.c"
#line 4 "int.opt"
#include "int.mh"

#line 79 "bimap.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 83 "bimap.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "bimap.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 91 "bimap.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 95 "bimap.c"
#line 96 "bimap.c"
#include "bimap.mh"

#line 99 "bimap.c"
#line 100 "bimap.c"
#ifndef BIMAP_DECL_GUARD
#define BIMAP_DECL_GUARD

#line 104 "bimap.c"
#line 105 "bimap.c"

#endif
#line 108 "bimap.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bimap__type_ctor_info_bimap_2;
MR_decl_label4(bimap__delete_key_3_0, 4,6,7,2)
MR_decl_label6(bimap__delete_keys_3_0, 21,6,8,9,4,3)
MR_decl_label4(bimap__delete_value_3_0, 4,6,7,2)
MR_decl_label6(bimap__delete_values_3_0, 21,6,8,9,4,3)
MR_decl_label1(bimap__det_from_corresponding_lists_3_0, 2)
MR_decl_label2(bimap__det_insert_4_0, 2,3)
MR_decl_label4(bimap__det_insert_from_assoc_list_3_0, 12,4,5,3)
MR_decl_label5(bimap__det_insert_from_corresponding_lists_4_0, 29,3,9,10,8)
MR_decl_label1(bimap__from_corresponding_lists_3_0, 2)
MR_decl_label3(bimap__insert_4_0, 2,4,1)
MR_decl_label5(bimap__insert_from_assoc_list_3_0, 24,3,4,6,1)
MR_decl_label1(bimap__is_empty_1_0, 1)
MR_decl_label2(bimap__map_keys_3_0, 2,3)
MR_decl_label3(bimap__map_keys_2_4_0, 11,4,3)
MR_decl_label3(bimap__map_keys_func_2_4_0, 11,4,3)
MR_decl_label2(bimap__map_values_3_0, 2,3)
MR_decl_label3(bimap__map_values_2_4_0, 11,4,3)
MR_decl_label3(bimap__map_values_func_2_4_0, 11,4,3)
MR_decl_label1(bimap__overlay_3_0, 2)
MR_decl_label3(bimap__overlay_2_3_0, 11,4,3)
MR_decl_label4(bimap__search_3_0, 2,4,6,1)
MR_decl_label4(bimap__search_3_1, 2,4,6,1)
MR_decl_label8(bimap__set_4_0, 4,10,12,13,7,2,15,16)
MR_decl_label7(bimap__set_4_0, 19,25,27,28,22,17,30)
MR_decl_label3(bimap__set_from_assoc_list_3_0, 11,4,3)
MR_decl_label4(bimap__set_from_corresponding_lists_4_0, 28,3,9,8)
MR_decl_label8(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0, 13,15,16,17,18,19,20,21)
MR_decl_label4(fn__bimap__delete_key_2_0, 4,6,7,2)
MR_decl_label4(fn__bimap__delete_value_2_0, 4,6,7,2)
MR_decl_label1(fn__bimap__det_from_corresponding_lists_2_0, 2)
MR_decl_label2(fn__bimap__det_insert_3_0, 2,3)
MR_decl_label1(fn__bimap__from_corresponding_lists_2_0, 2)
MR_decl_label3(fn__bimap__insert_3_0, 2,4,1)
MR_decl_label2(fn__bimap__map_keys_2_0, 2,3)
MR_decl_label2(fn__bimap__map_values_2_0, 2,3)
MR_decl_label1(fn__bimap__overlay_2_0, 2)
MR_decl_label2(__Unify___bimap__bimap_2_0, 2,1)
MR_decl_label2(__Compare___bimap__bimap_2_0, 3,7)
MR_def_extern_entry(bimap__init_1_0)
MR_def_extern_entry(fn__bimap__init_0_0)
MR_def_extern_entry(bimap__is_empty_1_0)
MR_def_extern_entry(bimap__search_3_0)
MR_def_extern_entry(bimap__search_3_1)
MR_def_extern_entry(bimap__forward_search_3_0)
MR_def_extern_entry(fn__bimap__forward_search_2_0)
MR_def_extern_entry(bimap__reverse_search_3_0)
MR_def_extern_entry(fn__bimap__reverse_search_2_0)
MR_def_extern_entry(bimap__lookup_3_0)
MR_def_extern_entry(fn__bimap__lookup_2_0)
MR_def_extern_entry(bimap__reverse_lookup_3_0)
MR_def_extern_entry(fn__bimap__reverse_lookup_2_0)
MR_def_extern_entry(bimap__ordinates_2_0)
MR_def_extern_entry(fn__bimap__ordinates_1_0)
MR_def_extern_entry(bimap__coordinates_2_0)
MR_def_extern_entry(fn__bimap__coordinates_1_0)
MR_def_extern_entry(bimap__contains_key_2_0)
MR_def_extern_entry(bimap__contains_value_2_0)
MR_def_extern_entry(bimap__insert_4_0)
MR_def_extern_entry(fn__bimap__insert_3_0)
MR_def_extern_entry(bimap__det_insert_4_0)
MR_def_extern_entry(fn__bimap__det_insert_3_0)
MR_def_extern_entry(bimap__set_4_0)
MR_def_extern_entry(fn__bimap__set_3_0)
MR_def_extern_entry(bimap__insert_from_assoc_list_3_0)
MR_def_extern_entry(fn__bimap__insert_from_assoc_list_2_0)
MR_def_extern_entry(bimap__det_insert_from_assoc_list_3_0)
MR_def_extern_entry(fn__bimap__det_insert_from_assoc_list_2_0)
MR_def_extern_entry(bimap__det_insert_from_corresponding_lists_4_0)
MR_def_extern_entry(fn__bimap__det_insert_from_corresponding_lists_3_0)
MR_def_extern_entry(bimap__set_from_assoc_list_3_0)
MR_def_extern_entry(fn__bimap__set_from_assoc_list_2_0)
MR_def_extern_entry(bimap__set_from_corresponding_lists_4_0)
MR_def_extern_entry(fn__bimap__set_from_corresponding_lists_3_0)
MR_def_extern_entry(bimap__delete_key_3_0)
MR_def_extern_entry(fn__bimap__delete_key_2_0)
MR_def_extern_entry(bimap__delete_value_3_0)
MR_def_extern_entry(fn__bimap__delete_value_2_0)
MR_def_extern_entry(bimap__delete_keys_3_0)
MR_def_extern_entry(fn__bimap__delete_keys_2_0)
MR_def_extern_entry(bimap__delete_values_3_0)
MR_def_extern_entry(fn__bimap__delete_values_2_0)
MR_def_extern_entry(bimap__to_assoc_list_2_0)
MR_def_extern_entry(bimap__overlay_2_3_0)
MR_def_extern_entry(bimap__overlay_3_0)
MR_def_extern_entry(fn__bimap__overlay_2_0)
MR_def_extern_entry(fn__bimap__to_assoc_list_1_0)
MR_def_extern_entry(bimap__from_assoc_list_2_0)
MR_def_extern_entry(fn__bimap__from_assoc_list_1_0)
MR_def_extern_entry(bimap__det_from_assoc_list_2_0)
MR_def_extern_entry(fn__bimap__det_from_assoc_list_1_0)
MR_def_extern_entry(bimap__from_corresponding_lists_3_0)
MR_def_extern_entry(fn__bimap__from_corresponding_lists_2_0)
MR_def_extern_entry(bimap__det_from_corresponding_lists_3_0)
MR_def_extern_entry(fn__bimap__det_from_corresponding_lists_2_0)
MR_def_extern_entry(bimap__apply_forward_map_to_list_3_0)
MR_def_extern_entry(fn__bimap__apply_forward_map_to_list_2_0)
MR_def_extern_entry(bimap__apply_reverse_map_to_list_3_0)
MR_def_extern_entry(fn__bimap__apply_reverse_map_to_list_2_0)
MR_def_extern_entry(bimap__map_keys_func_2_4_0)
MR_def_extern_entry(fn__bimap__map_keys_2_0)
MR_def_extern_entry(bimap__map_keys_2_4_0)
MR_def_extern_entry(bimap__map_keys_3_0)
MR_def_extern_entry(bimap__map_values_func_2_4_0)
MR_def_extern_entry(fn__bimap__map_values_2_0)
MR_def_extern_entry(bimap__map_values_2_4_0)
MR_def_extern_entry(bimap__map_values_3_0)
MR_def_extern_entry(fn__bimap__foldl_3_0)
MR_def_extern_entry(bimap__foldl_4_0)
MR_def_extern_entry(bimap__foldl_4_1)
MR_def_extern_entry(bimap__foldl_4_2)
MR_def_extern_entry(bimap__foldl2_6_0)
MR_def_extern_entry(bimap__foldl2_6_1)
MR_def_extern_entry(bimap__foldl2_6_2)
MR_def_extern_entry(bimap__foldl2_6_3)
MR_def_extern_entry(bimap__foldl3_8_0)
MR_def_extern_entry(bimap__foldl3_8_1)
MR_def_extern_entry(bimap__foldl3_8_2)
MR_def_extern_entry(bimap__foldl3_8_3)
MR_def_extern_entry(bimap__foldl3_8_4)
MR_def_extern_entry(fn__bimap__forward_map_1_0)
MR_def_extern_entry(fn__bimap__reverse_map_1_0)
MR_def_extern_entry(__Unify___bimap__bimap_2_0)
MR_def_extern_entry(__Compare___bimap__bimap_2_0)
MR_decl_static(bimap__IntroducedFrom__pred__foldl__171__1_8_0)
MR_decl_static(fn__f_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_2__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_bimap__field_types_bimap_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_2__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_bimap__du_functor_desc_bimap_2_0 = {
	"bimap",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bimap__field_types_bimap_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bimap__du_stag_ordered_bimap_2_0[] = {
	&mercury_data_bimap__du_functor_desc_bimap_2_0

};

const MR_DuPtagLayout mercury_data_bimap__du_ptag_ordered_bimap_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bimap__du_stag_ordered_bimap_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_bimap__du_name_ordered_bimap_2[] = {
	&mercury_data_bimap__du_functor_desc_bimap_2_0
};

const MR_Integer mercury_data_bimap__functor_number_map_bimap_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bimap__bimap_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bimap__bimap_2_0)),
	"bimap",
	"bimap",
	{ (void *)mercury_data_bimap__du_name_ordered_bimap_2 },
	{ (void *)mercury_data_bimap__du_ptag_ordered_bimap_2 },
	1,
	4,
	mercury_data_bimap__functor_number_map_bimap_2
};


MR_BEGIN_MODULE(bimap_module0)
	MR_init_entry1(bimap__init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module1)
	MR_init_entry1(fn__bimap__init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module2)
	MR_init_entry1(bimap__is_empty_1_0);
	MR_init_label1(bimap__is_empty_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bimap__is_empty_1_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bimap__is_empty_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__search_3_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(bimap_module3)
	MR_init_entry1(bimap__search_3_0);
	MR_init_label4(bimap__search_3_0,2,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__search_3_0_i2);
MR_def_label(bimap__search_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__search_3_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__search_3_0_i4);
MR_def_label(bimap__search_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__search_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__unify_2_0,
		bimap__search_3_0_i6);
MR_def_label(bimap__search_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__search_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bimap__search_3_0,1)
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


MR_BEGIN_MODULE(bimap_module4)
	MR_init_entry1(bimap__search_3_1);
	MR_init_label4(bimap__search_3_1,2,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__search_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 0);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__search_3_1_i2);
MR_def_label(bimap__search_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__search_3_1_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__search_3_1_i4);
MR_def_label(bimap__search_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__search_3_1_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__unify_2_0,
		bimap__search_3_1_i6);
MR_def_label(bimap__search_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__search_3_1_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bimap__search_3_1,1)
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


MR_BEGIN_MODULE(bimap_module5)
	MR_init_entry1(bimap__forward_search_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__forward_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_tailcall_ent(tree234__search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module6)
	MR_init_entry1(fn__bimap__forward_search_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__forward_search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_tailcall_ent(tree234__search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module7)
	MR_init_entry1(bimap__reverse_search_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__reverse_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module8)
	MR_init_entry1(fn__bimap__reverse_search_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__reverse_search_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(bimap_module9)
	MR_init_entry1(bimap__lookup_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_tailcall_ent(map__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module10)
	MR_init_entry1(fn__bimap__lookup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_tailcall_ent(map__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module11)
	MR_init_entry1(bimap__reverse_lookup_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__reverse_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module12)
	MR_init_entry1(fn__bimap__reverse_lookup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__reverse_lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);

MR_BEGIN_MODULE(bimap_module13)
	MR_init_entry1(bimap__ordinates_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__ordinates_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module14)
	MR_init_entry1(fn__bimap__ordinates_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__ordinates_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module15)
	MR_init_entry1(bimap__coordinates_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__coordinates_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module16)
	MR_init_entry1(fn__bimap__coordinates_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__coordinates_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module17)
	MR_init_entry1(bimap__contains_key_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__contains_key_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_tailcall_ent(tree234__search_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module18)
	MR_init_entry1(bimap__contains_value_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__contains_value_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_r3, 1);
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__insert_4_0);

MR_BEGIN_MODULE(bimap_module19)
	MR_init_entry1(bimap__insert_4_0);
	MR_init_label3(bimap__insert_4_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(tree234__insert_4_0,
		bimap__insert_4_0_i2);
MR_def_label(bimap__insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__insert_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(tree234__insert_4_0,
		bimap__insert_4_0_i4);
MR_def_label(bimap__insert_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__insert_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bimap__insert_4_0,1)
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


MR_BEGIN_MODULE(bimap_module20)
	MR_init_entry1(fn__bimap__insert_3_0);
	MR_init_label3(fn__bimap__insert_3_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(tree234__insert_4_0,
		fn__bimap__insert_3_0_i2);
MR_def_label(fn__bimap__insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bimap__insert_3_0_i1);
	}
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__insert_4_0,
		fn__bimap__insert_3_0_i4);
MR_def_label(fn__bimap__insert_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bimap__insert_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(fn__bimap__insert_3_0,1)
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

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(bimap_module21)
	MR_init_entry1(bimap__det_insert_4_0);
	MR_init_label2(bimap__det_insert_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__det_insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__det_insert_4_0_i2);
MR_def_label(bimap__det_insert_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__det_insert_4_0_i3);
MR_def_label(bimap__det_insert_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module22)
	MR_init_entry1(fn__bimap__det_insert_3_0);
	MR_init_label2(fn__bimap__det_insert_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__det_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_r3, 1);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(map__det_insert_4_0,
		fn__bimap__det_insert_3_0_i2);
MR_def_label(fn__bimap__det_insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		fn__bimap__det_insert_3_0_i3);
MR_def_label(fn__bimap__det_insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_update_4_0);
MR_decl_entry(tree234__delete_2_4_0);

MR_BEGIN_MODULE(bimap_module23)
	MR_init_entry1(bimap__set_4_0);
	MR_init_label8(bimap__set_4_0,4,10,12,13,7,2,15,16)
	MR_init_label7(bimap__set_4_0,19,25,27,28,22,17,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__set_4_0_i4);
MR_def_label(bimap__set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__set_4_0_i2);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		bimap__set_4_0_i10);
MR_def_label(bimap__set_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(bimap__set_4_0_i7);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__det_update_4_0,
		bimap__set_4_0_i12);
MR_def_label(bimap__set_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__set_4_0_i13);
MR_def_label(bimap__set_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(bimap__set_4_0_i16);
MR_def_label(bimap__set_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(bimap__set_4_0_i16);
MR_def_label(bimap__set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__set_4_0_i15);
MR_def_label(bimap__set_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
MR_def_label(bimap__set_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__set_4_0_i19);
MR_def_label(bimap__set_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__set_4_0_i17);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		bimap__set_4_0_i25);
MR_def_label(bimap__set_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(bimap__set_4_0_i22);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_update_4_0,
		bimap__set_4_0_i27);
MR_def_label(bimap__set_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__set_4_0_i28);
MR_def_label(bimap__set_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(bimap__set_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(bimap__set_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__set_4_0_i30);
MR_def_label(bimap__set_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module24)
	MR_init_entry1(fn__bimap__set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module25)
	MR_init_entry1(bimap__insert_from_assoc_list_3_0);
	MR_init_label5(bimap__insert_from_assoc_list_3_0,24,3,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__insert_from_assoc_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(bimap__insert_from_assoc_list_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__insert_from_assoc_list_3_0_i3);
	}
	MR_r2 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(bimap__insert_from_assoc_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__insert_4_0,
		bimap__insert_from_assoc_list_3_0_i4);
MR_def_label(bimap__insert_from_assoc_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__insert_from_assoc_list_3_0_i1);
	}
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__insert_4_0,
		bimap__insert_from_assoc_list_3_0_i6);
MR_def_label(bimap__insert_from_assoc_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__insert_from_assoc_list_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(bimap__insert_from_assoc_list_3_0_i24);
	}
MR_def_label(bimap__insert_from_assoc_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module26)
	MR_init_entry1(fn__bimap__insert_from_assoc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__insert_from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module27)
	MR_init_entry1(bimap__det_insert_from_assoc_list_3_0);
	MR_init_label4(bimap__det_insert_from_assoc_list_3_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__det_insert_from_assoc_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(bimap__det_insert_from_assoc_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__det_insert_from_assoc_list_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__det_insert_from_assoc_list_3_0_i4);
MR_def_label(bimap__det_insert_from_assoc_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__det_insert_from_assoc_list_3_0_i5);
MR_def_label(bimap__det_insert_from_assoc_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(bimap__det_insert_from_assoc_list_3_0_i12);
	}
MR_def_label(bimap__det_insert_from_assoc_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module28)
	MR_init_entry1(fn__bimap__det_insert_from_assoc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__det_insert_from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(bimap_module29)
	MR_init_entry1(bimap__det_insert_from_corresponding_lists_4_0);
	MR_init_label5(bimap__det_insert_from_corresponding_lists_4_0,29,3,9,10,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__det_insert_from_corresponding_lists_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__det_insert_from_corresponding_lists_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__det_insert_from_corresponding_lists_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(bimap__det_insert_from_corresponding_lists_4_0_i8);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(bimap__det_insert_from_corresponding_lists_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(bimap__det_insert_from_corresponding_lists_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_r5;
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__det_insert_from_corresponding_lists_4_0_i9);
MR_def_label(bimap__det_insert_from_corresponding_lists_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(map__det_insert_4_0,
		bimap__det_insert_from_corresponding_lists_4_0_i10);
MR_def_label(bimap__det_insert_from_corresponding_lists_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__det_insert_from_corresponding_lists_4_0_i29);
	}
MR_def_label(bimap__det_insert_from_corresponding_lists_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bimap.det_insert_from_corresponding_lists: length mismatch", 58);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module30)
	MR_init_entry1(fn__bimap__det_insert_from_corresponding_lists_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__det_insert_from_corresponding_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__det_insert_from_corresponding_lists_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module31)
	MR_init_entry1(bimap__set_from_assoc_list_3_0);
	MR_init_label3(bimap__set_from_assoc_list_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__set_from_assoc_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(bimap__set_from_assoc_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__set_from_assoc_list_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = MR_r4;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(bimap__set_4_0,
		bimap__set_from_assoc_list_3_0_i4);
MR_def_label(bimap__set_from_assoc_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(bimap__set_from_assoc_list_3_0_i11);
MR_def_label(bimap__set_from_assoc_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module32)
	MR_init_entry1(fn__bimap__set_from_assoc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__set_from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__set_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module33)
	MR_init_entry1(bimap__set_from_corresponding_lists_4_0);
	MR_init_label4(bimap__set_from_corresponding_lists_4_0,28,3,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__set_from_corresponding_lists_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(bimap__set_from_corresponding_lists_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__set_from_corresponding_lists_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(bimap__set_from_corresponding_lists_4_0_i8);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(bimap__set_from_corresponding_lists_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(bimap__set_from_corresponding_lists_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tempr4;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_tempr3;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(bimap__set_4_0,
		bimap__set_from_corresponding_lists_4_0_i9);
MR_def_label(bimap__set_from_corresponding_lists_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(bimap__set_from_corresponding_lists_4_0_i28);
MR_def_label(bimap__set_from_corresponding_lists_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bimap.set_from_corresponding_lists: length mismatch", 51);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module34)
	MR_init_entry1(fn__bimap__set_from_corresponding_lists_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__set_from_corresponding_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bimap__set_from_corresponding_lists_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module35)
	MR_init_entry1(bimap__delete_key_3_0);
	MR_init_label4(bimap__delete_key_3_0,4,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__delete_key_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__delete_key_3_0_i4);
MR_def_label(bimap__delete_key_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__delete_key_3_0_i2);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_key_3_0_i6);
MR_def_label(bimap__delete_key_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_key_3_0_i7);
MR_def_label(bimap__delete_key_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(bimap__delete_key_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module36)
	MR_init_entry1(fn__bimap__delete_key_2_0);
	MR_init_label4(fn__bimap__delete_key_2_0,4,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__delete_key_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__bimap__delete_key_2_0_i4);
MR_def_label(fn__bimap__delete_key_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bimap__delete_key_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		fn__bimap__delete_key_2_0_i6);
MR_def_label(fn__bimap__delete_key_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		fn__bimap__delete_key_2_0_i7);
MR_def_label(fn__bimap__delete_key_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__bimap__delete_key_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module37)
	MR_init_entry1(bimap__delete_value_3_0);
	MR_init_label4(bimap__delete_value_3_0,4,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__delete_value_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__delete_value_3_0_i4);
MR_def_label(bimap__delete_value_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__delete_value_3_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_value_3_0_i6);
MR_def_label(bimap__delete_value_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_value_3_0_i7);
MR_def_label(bimap__delete_value_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(bimap__delete_value_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module38)
	MR_init_entry1(fn__bimap__delete_value_2_0);
	MR_init_label4(fn__bimap__delete_value_2_0,4,6,7,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__delete_value_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__bimap__delete_value_2_0_i4);
MR_def_label(fn__bimap__delete_value_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__bimap__delete_value_2_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		fn__bimap__delete_value_2_0_i6);
MR_def_label(fn__bimap__delete_value_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		fn__bimap__delete_value_2_0_i7);
MR_def_label(fn__bimap__delete_value_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__bimap__delete_value_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module39)
	MR_init_entry1(bimap__delete_keys_3_0);
	MR_init_label6(bimap__delete_keys_3_0,21,6,8,9,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__delete_keys_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__delete_keys_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__delete_keys_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__delete_keys_3_0_i6);
MR_def_label(bimap__delete_keys_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__delete_keys_3_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_keys_3_0_i8);
MR_def_label(bimap__delete_keys_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_keys_3_0_i9);
MR_def_label(bimap__delete_keys_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__delete_keys_3_0_i21);
	}
MR_def_label(bimap__delete_keys_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__delete_keys_3_0_i21);
MR_def_label(bimap__delete_keys_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module40)
	MR_init_entry1(fn__bimap__delete_keys_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__delete_keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(bimap__delete_keys_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module41)
	MR_init_entry1(bimap__delete_values_3_0);
	MR_init_label6(bimap__delete_values_3_0,21,6,8,9,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__delete_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__delete_values_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__delete_values_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		bimap__delete_values_3_0_i6);
MR_def_label(bimap__delete_values_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bimap__delete_values_3_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_values_3_0_i8);
MR_def_label(bimap__delete_values_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		bimap__delete_values_3_0_i9);
MR_def_label(bimap__delete_values_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__delete_values_3_0_i21);
	}
MR_def_label(bimap__delete_values_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__delete_values_3_0_i21);
MR_def_label(bimap__delete_values_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module42)
	MR_init_entry1(fn__bimap__delete_values_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__delete_values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(bimap__delete_values_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__tree234_to_assoc_list_2_3_0);

MR_BEGIN_MODULE(bimap_module43)
	MR_init_entry1(bimap__to_assoc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__to_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__tree234_to_assoc_list_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module44)
	MR_init_entry1(bimap__overlay_2_3_0);
	MR_init_label3(bimap__overlay_2_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__overlay_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(bimap__overlay_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bimap__overlay_2_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_r3 = MR_r4;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(bimap__set_4_0,
		bimap__overlay_2_3_0_i4);
MR_def_label(bimap__overlay_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(bimap__overlay_2_3_0_i11);
MR_def_label(bimap__overlay_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module45)
	MR_init_entry1(bimap__overlay_3_0);
	MR_init_label1(bimap__overlay_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__overlay_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r4, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		bimap__overlay_3_0_i2);
MR_def_label(bimap__overlay_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(bimap__overlay_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module46)
	MR_init_entry1(fn__bimap__overlay_2_0);
	MR_init_label1(fn__bimap__overlay_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__overlay_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r4, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		fn__bimap__overlay_2_0_i2);
MR_def_label(fn__bimap__overlay_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(bimap__overlay_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module47)
	MR_init_entry1(fn__bimap__to_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__to_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__tree234_to_assoc_list_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module48)
	MR_init_entry1(bimap__from_assoc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(bimap__insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module49)
	MR_init_entry1(fn__bimap__from_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(bimap__insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module50)
	MR_init_entry1(bimap__det_from_assoc_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__det_from_assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module51)
	MR_init_entry1(fn__bimap__det_from_assoc_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__det_from_assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(bimap_module52)
	MR_init_entry1(bimap__from_corresponding_lists_3_0);
	MR_init_label1(bimap__from_corresponding_lists_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__from_corresponding_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		bimap__from_corresponding_lists_3_0_i2);
MR_def_label(bimap__from_corresponding_lists_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bimap__insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module53)
	MR_init_entry1(fn__bimap__from_corresponding_lists_2_0);
	MR_init_label1(fn__bimap__from_corresponding_lists_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__from_corresponding_lists_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		fn__bimap__from_corresponding_lists_2_0_i2);
MR_def_label(fn__bimap__from_corresponding_lists_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bimap__insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module54)
	MR_init_entry1(bimap__det_from_corresponding_lists_3_0);
	MR_init_label1(bimap__det_from_corresponding_lists_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__det_from_corresponding_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		bimap__det_from_corresponding_lists_3_0_i2);
MR_def_label(bimap__det_from_corresponding_lists_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module55)
	MR_init_entry1(fn__bimap__det_from_corresponding_lists_2_0);
	MR_init_label1(fn__bimap__det_from_corresponding_lists_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__det_from_corresponding_lists_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		fn__bimap__det_from_corresponding_lists_2_0_i2);
MR_def_label(fn__bimap__det_from_corresponding_lists_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__apply_to_list_3_0);

MR_BEGIN_MODULE(bimap_module56)
	MR_init_entry1(bimap__apply_forward_map_to_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__apply_forward_map_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(map__apply_to_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module57)
	MR_init_entry1(fn__bimap__apply_forward_map_to_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__apply_forward_map_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(map__apply_to_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module58)
	MR_init_entry1(bimap__apply_reverse_map_to_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__apply_reverse_map_to_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(map__apply_to_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module59)
	MR_init_entry1(fn__bimap__apply_reverse_map_to_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__apply_reverse_map_to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(map__apply_to_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(bimap_module60)
	MR_init_entry1(bimap__map_keys_func_2_4_0);
	MR_init_label3(bimap__map_keys_func_2_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__map_keys_func_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__map_keys_func_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(bimap__map_keys_func_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bimap__map_keys_func_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__bimap__map_keys_func_2_4_0_i4);
MR_def_label(bimap__map_keys_func_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__map_keys_func_2_4_0_i11);
	}
MR_def_label(bimap__map_keys_func_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module61)
	MR_init_entry1(fn__bimap__map_keys_2_0);
	MR_init_label2(fn__bimap__map_keys_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__map_keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_r5, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		fn__bimap__map_keys_2_0_i2);
MR_def_label(fn__bimap__map_keys_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(bimap__map_keys_func_2_4_0,
		fn__bimap__map_keys_2_0_i3);
MR_def_label(fn__bimap__map_keys_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module62)
	MR_init_entry1(bimap__map_keys_2_4_0);
	MR_init_label3(bimap__map_keys_2_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__map_keys_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__map_keys_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(bimap__map_keys_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bimap__map_keys_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__bimap__map_keys_2_4_0_i4);
MR_def_label(bimap__map_keys_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__map_keys_2_4_0_i11);
	}
MR_def_label(bimap__map_keys_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module63)
	MR_init_entry1(bimap__map_keys_3_0);
	MR_init_label2(bimap__map_keys_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__map_keys_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_r5, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		bimap__map_keys_3_0_i2);
MR_def_label(bimap__map_keys_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(bimap__map_keys_2_4_0,
		bimap__map_keys_3_0_i3);
MR_def_label(bimap__map_keys_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module64)
	MR_init_entry1(bimap__map_values_func_2_4_0);
	MR_init_label3(bimap__map_values_func_2_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__map_values_func_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__map_values_func_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(bimap__map_values_func_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bimap__map_values_func_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__bimap__map_values_func_2_4_0_i4);
MR_def_label(bimap__map_values_func_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__map_values_func_2_4_0_i11);
	}
MR_def_label(bimap__map_values_func_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module65)
	MR_init_entry1(fn__bimap__map_values_2_0);
	MR_init_label2(fn__bimap__map_values_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__map_values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r5, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		fn__bimap__map_values_2_0_i2);
MR_def_label(fn__bimap__map_values_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(bimap__map_values_func_2_4_0,
		fn__bimap__map_values_2_0_i3);
MR_def_label(fn__bimap__map_values_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module66)
	MR_init_entry1(bimap__map_values_2_4_0);
	MR_init_label3(bimap__map_values_2_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__map_values_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bimap__map_values_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(bimap__map_values_2_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bimap__map_values_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__bimap__map_values_2_4_0_i4);
MR_def_label(bimap__map_values_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bimap__map_values_2_4_0_i11);
	}
MR_def_label(bimap__map_values_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module67)
	MR_init_entry1(bimap__map_values_3_0);
	MR_init_label2(bimap__map_values_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__map_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_ctfield(0, MR_r5, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		bimap__map_values_3_0_i2);
MR_def_label(bimap__map_values_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(bimap__map_values_2_4_0,
		bimap__map_values_3_0_i3);
MR_def_label(bimap__map_values_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(bimap__det_insert_from_assoc_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module68)
	MR_init_entry1(fn__bimap__foldl_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r5, 0);
	MR_np_tailcall_ent(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl_4_0);

MR_BEGIN_MODULE(bimap_module69)
	MR_init_entry1(bimap__foldl_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r5, 0);
	MR_np_tailcall_ent(tree234__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl_4_1);

MR_BEGIN_MODULE(bimap_module70)
	MR_init_entry1(bimap__foldl_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r5, 0);
	MR_np_tailcall_ent(tree234__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl_4_2);

MR_BEGIN_MODULE(bimap_module71)
	MR_init_entry1(bimap__foldl_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r5, 0);
	MR_np_tailcall_ent(tree234__foldl_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl2_6_0);

MR_BEGIN_MODULE(bimap_module72)
	MR_init_entry1(bimap__foldl2_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r6, 0);
	MR_np_tailcall_ent(tree234__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl2_6_1);

MR_BEGIN_MODULE(bimap_module73)
	MR_init_entry1(bimap__foldl2_6_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r6, 0);
	MR_np_tailcall_ent(tree234__foldl2_6_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl2_6_2);

MR_BEGIN_MODULE(bimap_module74)
	MR_init_entry1(bimap__foldl2_6_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r6, 0);
	MR_np_tailcall_ent(tree234__foldl2_6_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl2_6_3);

MR_BEGIN_MODULE(bimap_module75)
	MR_init_entry1(bimap__foldl2_6_3);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(0, MR_r6, 0);
	MR_np_tailcall_ent(tree234__foldl2_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl3_8_0);

MR_BEGIN_MODULE(bimap_module76)
	MR_init_entry1(bimap__foldl3_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r7, 0);
	MR_np_tailcall_ent(tree234__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl3_8_1);

MR_BEGIN_MODULE(bimap_module77)
	MR_init_entry1(bimap__foldl3_8_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r7, 0);
	MR_np_tailcall_ent(tree234__foldl3_8_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl3_8_2);

MR_BEGIN_MODULE(bimap_module78)
	MR_init_entry1(bimap__foldl3_8_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r7, 0);
	MR_np_tailcall_ent(tree234__foldl3_8_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl3_8_3);

MR_BEGIN_MODULE(bimap_module79)
	MR_init_entry1(bimap__foldl3_8_3);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r7, 0);
	MR_np_tailcall_ent(tree234__foldl3_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl3_8_4);

MR_BEGIN_MODULE(bimap_module80)
	MR_init_entry1(bimap__foldl3_8_4);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bimap__foldl3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_ctfield(0, MR_r7, 0);
	MR_np_tailcall_ent(tree234__foldl3_8_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module81)
	MR_init_entry1(fn__bimap__forward_map_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__forward_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module82)
	MR_init_entry1(fn__bimap__reverse_map_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bimap__reverse_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r3, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(bimap_module83)
	MR_init_entry1(__Unify___bimap__bimap_2_0);
	MR_init_label2(__Unify___bimap__bimap_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bimap__bimap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_sv(2) = MR_ctfield(0, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___bimap__bimap_2_0_i2);
MR_def_label(__Unify___bimap__bimap_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bimap__bimap_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___bimap__bimap_2_0,1)
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

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(bimap_module84)
	MR_init_entry1(__Compare___bimap__bimap_2_0);
	MR_init_label2(__Compare___bimap__bimap_2_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bimap__bimap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r4, 1);
	MR_sv(1) = MR_ctfield(0, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___bimap__bimap_2_0_i3);
MR_def_label(__Compare___bimap__bimap_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bimap__bimap_2_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___bimap__bimap_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(bimap_module85)
	MR_init_entry1(bimap__IntroducedFrom__pred__foldl__171__1_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bimap__IntroducedFrom__pred__foldl__171__1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bimap__IntroducedFrom__pred__foldl__171__1_8_0));
	MR_np_tailcall_ent(do_call_closure_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module86)
	MR_init_entry1(fn__f_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_105_109_97_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bimap_module87)
	MR_init_entry1(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_init_label8(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4,5,6,7,9,10,11,12)
	MR_init_label8(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i4) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i5) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i15));
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(14);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r5 = MR_ctfield(1, MR_r5, 2);
	}
	MR_np_localcall_lab(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i6);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(bimap__IntroducedFrom__pred__foldl__171__1_8_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i7);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i4) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i5) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i15));
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 6);
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r5 = MR_ctfield(2, MR_r5, 4);
	}
	MR_np_localcall_lab(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i10);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(bimap__IntroducedFrom__pred__foldl__171__1_8_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i11);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i12);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(bimap__IntroducedFrom__pred__foldl__171__1_8_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i13);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i4) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i5) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i15));
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 9);
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r5 = MR_ctfield(3, MR_r5, 6);
	}
	MR_np_localcall_lab(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i16);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i17);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(7);
	MR_np_localcall_lab(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i18);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(bimap__IntroducedFrom__pred__foldl__171__1_8_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i19);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i20);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(bimap__IntroducedFrom__pred__foldl__171__1_8_0,
		f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i21);
MR_def_label(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i4) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i5) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i9) MR_AND
		MR_LABEL_AP(f_98_105_109_97_112_95_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bimap_maybe_bunch_0(void)
{
	bimap_module0();
	bimap_module1();
	bimap_module2();
	bimap_module3();
	bimap_module4();
	bimap_module5();
	bimap_module6();
	bimap_module7();
	bimap_module8();
	bimap_module9();
	bimap_module10();
	bimap_module11();
	bimap_module12();
	bimap_module13();
	bimap_module14();
	bimap_module15();
	bimap_module16();
	bimap_module17();
	bimap_module18();
	bimap_module19();
	bimap_module20();
	bimap_module21();
	bimap_module22();
	bimap_module23();
	bimap_module24();
	bimap_module25();
	bimap_module26();
	bimap_module27();
	bimap_module28();
	bimap_module29();
	bimap_module30();
	bimap_module31();
	bimap_module32();
	bimap_module33();
	bimap_module34();
	bimap_module35();
	bimap_module36();
	bimap_module37();
	bimap_module38();
	bimap_module39();
}

static void mercury__bimap_maybe_bunch_1(void)
{
	bimap_module40();
	bimap_module41();
	bimap_module42();
	bimap_module43();
	bimap_module44();
	bimap_module45();
	bimap_module46();
	bimap_module47();
	bimap_module48();
	bimap_module49();
	bimap_module50();
	bimap_module51();
	bimap_module52();
	bimap_module53();
	bimap_module54();
	bimap_module55();
	bimap_module56();
	bimap_module57();
	bimap_module58();
	bimap_module59();
	bimap_module60();
	bimap_module61();
	bimap_module62();
	bimap_module63();
	bimap_module64();
	bimap_module65();
	bimap_module66();
	bimap_module67();
	bimap_module68();
	bimap_module69();
	bimap_module70();
	bimap_module71();
	bimap_module72();
	bimap_module73();
	bimap_module74();
	bimap_module75();
	bimap_module76();
	bimap_module77();
	bimap_module78();
	bimap_module79();
}

static void mercury__bimap_maybe_bunch_2(void)
{
	bimap_module80();
	bimap_module81();
	bimap_module82();
	bimap_module83();
	bimap_module84();
	bimap_module85();
	bimap_module86();
	bimap_module87();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bimap__init(void);
void mercury__bimap__init_type_tables(void);
void mercury__bimap__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bimap__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bimap__init_complexity_procs(void);
#endif

void mercury__bimap__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bimap_maybe_bunch_0();
	mercury__bimap_maybe_bunch_1();
	mercury__bimap_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bimap__type_ctor_info_bimap_2,
		bimap__bimap_2_0);
	mercury__bimap__init_debugger();
}

void mercury__bimap__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bimap__type_ctor_info_bimap_2);
	}
}


void mercury__bimap__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bimap__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bimap__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
