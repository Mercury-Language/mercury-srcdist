/*
** Automatically generated from `cord.m'
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
INIT mercury__cord__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "cord.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "cord.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "cord.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "cord.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "cord.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "cord.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 51 "cord.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "cord.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "cord.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "cord.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "cord.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "cord.c"
#line 20 "store.opt"
#include "store.mh"

#line 75 "cord.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "cord.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "cord.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 87 "cord.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "cord.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "cord.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "cord.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "cord.c"
#line 104 "cord.c"
#include "cord.mh"

#line 107 "cord.c"
#line 108 "cord.c"
#ifndef CORD_DECL_GUARD
#define CORD_DECL_GUARD

#line 112 "cord.c"
#line 113 "cord.c"

#endif
#line 116 "cord.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_cord__type_ctor_info_cord_1;
MR_decl_label4(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0, 9,4,7,2)
MR_decl_label2(cord__equal_2_0, 2,3)
MR_decl_label8(cord__filter_3_0, 13,15,18,19,33,21,3,4)
MR_decl_label3(cord__filter_3_0, 5,8,2)
MR_decl_label8(cord__filter_4_0, 34,76,23,21,77,27,29,28)
MR_decl_label8(cord__filter_4_0, 32,78,4,5,8,12,15,75)
MR_decl_label5(cord__foldl_pred_4_0, 10,6,8,3,4)
MR_decl_label5(cord__foldl_pred_4_1, 10,6,8,3,4)
MR_decl_label5(cord__foldr_pred_4_0, 10,6,8,3,4)
MR_decl_label3(cord__get_first_2_0, 7,3,1)
MR_decl_label3(cord__get_last_2_0, 7,3,1)
MR_decl_label8(cord__head_tail_3_0, 14,17,64,4,6,2,65,1)
MR_decl_label8(cord__map_foldl_5_0, 13,24,8,25,11,26,4,5)
MR_decl_label8(cord__map_foldl2_7_0, 13,24,8,25,11,26,4,5)
MR_decl_label8(cord__map_foldl3_9_0, 13,24,8,25,11,26,4,5)
MR_decl_label8(cord__map_pred_3_0, 13,24,8,25,11,26,4,5)
MR_decl_label5(cord__member_2_0, 9,33,4,34,32)
MR_decl_label8(cord__split_last_3_0, 14,71,20,70,67,4,8,2)
MR_decl_label2(cord__split_last_3_0, 68,1)
MR_decl_label3(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0, 4,2)
MR_decl_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 13,4)
MR_decl_label3(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0, 14,4,5)
MR_decl_label2(fn__f_99_111_114_100_95_95_43_43_2_0, 2,4)
MR_decl_label5(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0, 9,6,7,3,4)
MR_decl_label2(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0, 5,2)
MR_decl_label1(fn__cord__cons_2_0, 3)
MR_decl_label5(fn__cord__cord_list_to_cord_1_0, 11,12,6,10,2)
MR_decl_label3(fn__cord__cord_list_to_list_1_0, 14,4,5)
MR_decl_label5(fn__cord__foldl_3_0, 10,6,8,3,4)
MR_decl_label5(fn__cord__foldr_3_0, 10,6,8,3,4)
MR_decl_label1(fn__cord__from_list_1_0, 3)
MR_decl_label5(fn__cord__list_2_2_0, 10,6,8,3,4)
MR_decl_label8(fn__cord__map_2_0, 13,24,8,25,11,26,4,5)
MR_decl_label5(fn__cord__rev_list_2_2_0, 10,6,8,3,4)
MR_decl_label1(fn__cord__snoc_2_0, 3)
MR_decl_label8(__Unify___cord__cord_1_0, 49,19,11,15,5,7,24,1)
MR_decl_label8(__Compare___cord__cord_1_0, 73,43,48,21,24,32,36,34)
MR_decl_label5(__Compare___cord__cord_1_0, 5,15,7,9,80)
MR_def_extern_entry(fn__cord__list_2_2_0)
MR_def_extern_entry(fn__cord__list_1_0)
MR_def_extern_entry(fn__cord__rev_list_2_2_0)
MR_def_extern_entry(fn__cord__rev_list_1_0)
MR_def_extern_entry(fn__cord__empty_0_0)
MR_def_extern_entry(cord__is_empty_1_0)
MR_def_extern_entry(fn__cord__singleton_1_0)
MR_def_extern_entry(fn__cord__from_list_1_0)
MR_def_extern_entry(fn__cord__cons_2_0)
MR_def_extern_entry(fn__cord__snoc_2_0)
MR_def_extern_entry(fn__f_99_111_114_100_95_95_43_43_2_0)
MR_def_extern_entry(fn__cord__cord_list_to_cord_1_0)
MR_def_extern_entry(fn__cord__cord_list_to_list_1_0)
MR_def_extern_entry(cord__head_tail_3_0)
MR_def_extern_entry(cord__split_last_3_0)
MR_def_extern_entry(cord__get_first_2_0)
MR_def_extern_entry(cord__get_last_2_0)
MR_def_extern_entry(fn__cord__foldl_3_0)
MR_def_extern_entry(fn__cord__length_1_0)
MR_def_extern_entry(cord__member_2_0)
MR_def_extern_entry(fn__cord__map_2_0)
MR_def_extern_entry(cord__map_pred_3_0)
MR_def_extern_entry(cord__filter_3_0)
MR_def_extern_entry(cord__filter_4_0)
MR_def_extern_entry(cord__foldl_pred_4_0)
MR_def_extern_entry(cord__foldl_pred_4_1)
MR_def_extern_entry(fn__cord__foldr_3_0)
MR_def_extern_entry(cord__foldr_pred_4_0)
MR_def_extern_entry(cord__map_foldl_5_0)
MR_def_extern_entry(cord__map_foldl2_7_0)
MR_def_extern_entry(cord__map_foldl3_9_0)
MR_def_extern_entry(cord__equal_2_0)
MR_def_extern_entry(__Unify___cord__cord_1_0)
MR_def_extern_entry(__Compare___cord__cord_1_0)
MR_decl_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0)
MR_decl_static(fn__f_99_111_114_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_1_0 = {
	"nil",
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

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_1_1[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_1_1 = {
	"leaf",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_1_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_1_2 = {
	"leaves",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_1_2,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_cord__pti_cord_1__pseudo_1 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_cord__field_types_cord_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_cord__pti_cord_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_cord__pti_cord_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_cord__du_functor_desc_cord_1_3 = {
	"branch",
	2,
	3,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_cord__field_types_cord_1_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_1_0[] = {
	&mercury_data_cord__du_functor_desc_cord_1_0

};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_1_1[] = {
	&mercury_data_cord__du_functor_desc_cord_1_1

};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_1_2[] = {
	&mercury_data_cord__du_functor_desc_cord_1_2

};

const MR_DuFunctorDescPtr mercury_data_cord__du_stag_ordered_cord_1_3[] = {
	&mercury_data_cord__du_functor_desc_cord_1_3

};

const MR_DuPtagLayout mercury_data_cord__du_ptag_ordered_cord_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_cord__du_stag_ordered_cord_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_cord__du_stag_ordered_cord_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_cord__du_name_ordered_cord_1[] = {
	&mercury_data_cord__du_functor_desc_cord_1_3,
	&mercury_data_cord__du_functor_desc_cord_1_1,
	&mercury_data_cord__du_functor_desc_cord_1_2,
	&mercury_data_cord__du_functor_desc_cord_1_0
};

const MR_Integer mercury_data_cord__functor_number_map_cord_1[] = {
	3,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___cord__cord_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___cord__cord_1_0)),
	"cord",
	"cord",
	{ (void *)mercury_data_cord__du_name_ordered_cord_1 },
	{ (void *)mercury_data_cord__du_ptag_ordered_cord_1 },
	4,
	4,
	mercury_data_cord__functor_number_map_cord_1
};

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(cord_module0)
	MR_init_entry1(fn__cord__list_2_2_0);
	MR_init_label5(fn__cord__list_2_2_0,10,6,8,3,4)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__cord__list_2_2_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__list_2_2_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__list_2_2_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__list_2_2_0_i3));
MR_def_label(fn__cord__list_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(fn__cord__list_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__cord__list_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(fn__cord__list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_localcall_lab(fn__cord__list_2_2_0,
		fn__cord__list_2_2_0_i4);
MR_def_label(fn__cord__list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__cord__list_2_2_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__list_2_2_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__list_2_2_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__list_2_2_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module1)
	MR_init_entry1(fn__cord__list_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__cord__list_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module2)
	MR_init_entry1(fn__cord__rev_list_2_2_0);
	MR_init_label5(fn__cord__rev_list_2_2_0,10,6,8,3,4)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i3));
MR_def_label(fn__cord__rev_list_2_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(fn__cord__rev_list_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__cord__rev_list_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0);
MR_def_label(fn__cord__rev_list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		fn__cord__rev_list_2_2_0_i4);
MR_def_label(fn__cord__rev_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__rev_list_2_2_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module3)
	MR_init_entry1(fn__cord__rev_list_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'rev_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__rev_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__cord__rev_list_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module4)
	MR_init_entry1(fn__cord__empty_0_0);
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


MR_BEGIN_MODULE(cord_module5)
	MR_init_entry1(cord__is_empty_1_0);
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


MR_BEGIN_MODULE(cord_module6)
	MR_init_entry1(fn__cord__singleton_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'singleton'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__singleton_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module7)
	MR_init_entry1(fn__cord__from_list_1_0);
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
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module8)
	MR_init_entry1(fn__cord__cons_2_0);
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
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(fn__cord__cons_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(fn__cord__cons_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module9)
	MR_init_entry1(fn__cord__snoc_2_0);
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
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
		MR_GOTO_LAB(fn__cord__snoc_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_proceed();
MR_def_label(fn__cord__snoc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = MR_r2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module10)
	MR_init_entry1(fn__f_99_111_114_100_95_95_43_43_2_0);
	MR_init_label2(fn__f_99_111_114_100_95_95_43_43_2_0,2,4)
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
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_43_43_2_0_i2);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__f_99_111_114_100_95_95_43_43_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__f_99_111_114_100_95_95_43_43_2_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_99_111_114_100_95_95_43_43_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module11)
	MR_init_entry1(fn__cord__cord_list_to_cord_1_0);
	MR_init_label5(fn__cord__cord_list_to_cord_1_0,11,12,6,10,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'cord_list_to_cord'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__cord_list_to_cord_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_cord_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__cord__cord_list_to_cord_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__cord__cord_list_to_cord_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_cord_1_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_cord_1_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(fn__cord__cord_list_to_cord_1_0_i10);
MR_def_label(fn__cord__cord_list_to_cord_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__cord__cord_list_to_cord_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__cord__cord_list_to_cord_1_0_i12);
	}
	MR_proceed();
MR_def_label(fn__cord__cord_list_to_cord_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module12)
	MR_init_entry1(fn__cord__cord_list_to_list_1_0);
	MR_init_label3(fn__cord__cord_list_to_list_1_0,14,4,5)
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
		MR_GOTO_LAB(fn__cord__cord_list_to_list_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__cord_list_to_list_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		fn__cord__cord_list_to_list_1_0_i4);
MR_def_label(fn__cord__cord_list_to_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__cord__cord_list_to_list_1_0,
		fn__cord__cord_list_to_list_1_0_i5);
MR_def_label(fn__cord__cord_list_to_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module13)
	MR_init_entry1(cord__head_tail_3_0);
	MR_init_label8(cord__head_tail_3_0,14,17,64,4,6,2,65,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'head_tail'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__head_tail_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	MR_r3 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(cord__head_tail_3_0_i64);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(cord__head_tail_3_0_i14);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(cord__head_tail_3_0_i65);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__head_tail_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(cord__head_tail_3_0_i65);
	}
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(cord__head_tail_3_0_i17);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__head_tail_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r4;
	MR_r2 = MR_ctfield(1, MR_r3, 0);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__head_tail_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 0);
	MR_np_localcall_lab(cord__head_tail_3_0,
		cord__head_tail_3_0_i4);
MR_def_label(cord__head_tail_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__head_tail_3_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(cord__head_tail_3_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(cord__head_tail_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(cord__head_tail_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(cord__head_tail_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(cord__head_tail_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(cord__head_tail_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(cord_module14)
	MR_init_entry1(cord__split_last_3_0);
	MR_init_label8(cord__split_last_3_0,14,71,20,70,67,4,8,2)
	MR_init_label2(cord__split_last_3_0,68,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'split_last'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__split_last_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr3);
	MR_r3 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(cord__split_last_3_0_i67);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(cord__split_last_3_0_i14);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(cord__split_last_3_0_i68);
	}
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__split_last_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(cord__split_last_3_0_i70);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__split_last_3_0_i71);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__split_last_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_r3, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0,
		cord__split_last_3_0_i20);
MR_def_label(cord__split_last_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(cord__split_last_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("cord.m: split_list_last finds []", 32);
	MR_np_call_localret_ent(require__error_1_0,
		cord__split_last_3_0_i2);
MR_def_label(cord__split_last_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 0);
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_localcall_lab(cord__split_last_3_0,
		cord__split_last_3_0_i4);
MR_def_label(cord__split_last_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__split_last_3_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(cord__split_last_3_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__split_last_3_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(cord__split_last_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(cord__split_last_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(cord__split_last_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(cord__split_last_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module15)
	MR_init_entry1(cord__get_first_2_0);
	MR_init_label3(cord__get_first_2_0,7,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_first'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__get_first_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(cord__get_first_2_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(cord__get_first_2_0_i7);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(cord__get_first_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__get_first_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(cord__get_first_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__get_first_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 0);
	MR_np_localtailcall(cord__get_first_2_0);
MR_def_label(cord__get_first_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__last_2_0);

MR_BEGIN_MODULE(cord_module16)
	MR_init_entry1(cord__get_last_2_0);
	MR_init_label3(cord__get_last_2_0,7,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__get_last_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(cord__get_last_2_0_i3);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(cord__get_last_2_0_i7);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(cord__get_last_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(cord__get_last_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(list__last_2_0);
MR_def_label(cord__get_last_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_localtailcall(cord__get_last_2_0);
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

MR_BEGIN_MODULE(cord_module17)
	MR_init_entry1(fn__cord__foldl_3_0);
	MR_init_label5(fn__cord__foldl_3_0,10,6,8,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__cord__foldl_3_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__foldl_3_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__foldl_3_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__foldl_3_0_i3));
MR_def_label(fn__cord__foldl_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(fn__cord__foldl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__foldl_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(fn__cord__foldl_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
MR_def_label(fn__cord__foldl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 0);
	MR_np_localcall_lab(fn__cord__foldl_3_0,
		fn__cord__foldl_3_0_i4);
MR_def_label(fn__cord__foldl_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__cord__foldl_3_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__foldl_3_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__foldl_3_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__foldl_3_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module18)
	MR_init_entry1(fn__cord__length_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'length'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__length_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_fail);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(cord_module19)
	MR_init_entry1(cord__member_2_0);
	MR_init_label5(cord__member_2_0,9,33,4,34,32)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(cord__member_2_0_i33);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(cord__member_2_0_i9);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(cord__member_2_0_i34);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(cord__member_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(list__member_2_1);
MR_def_label(cord__member_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred cord.member/2-0", 2,
		MR_LABEL_AP(cord__member_2_0_i4));
	MR_fv(2) = MR_ctfield(3, MR_r2, 1);
	MR_fv(1) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 0);
	MR_np_localcall_lab(cord__member_2_0,
		cord__member_2_0_i32);
MR_def_label(cord__member_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r2 = MR_fv(2);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(cord__member_2_0);
MR_def_label(cord__member_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(cord__member_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(cord_module20)
	MR_init_entry1(fn__cord__map_2_0);
	MR_init_label8(fn__cord__map_2_0,13,24,8,25,11,26,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__cord__map_2_0_i13) MR_AND
		MR_LABEL_AP(fn__cord__map_2_0_i24) MR_AND
		MR_LABEL_AP(fn__cord__map_2_0_i25) MR_AND
		MR_LABEL_AP(fn__cord__map_2_0_i26));
MR_def_label(fn__cord__map_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__cord__map_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__map_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__cord__map_2_0_i8);
MR_def_label(fn__cord__map_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__cord__map_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_np_call_localret_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,
		fn__cord__map_2_0_i11);
MR_def_label(fn__cord__map_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__cord__map_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 0);
	MR_np_localcall_lab(fn__cord__map_2_0,
		fn__cord__map_2_0_i4);
MR_def_label(fn__cord__map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(fn__cord__map_2_0,
		fn__cord__map_2_0_i5);
MR_def_label(fn__cord__map_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(cord_module21)
	MR_init_entry1(cord__map_pred_3_0);
	MR_init_label8(cord__map_pred_3_0,13,24,8,25,11,26,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__map_pred_3_0_i13) MR_AND
		MR_LABEL_AP(cord__map_pred_3_0_i24) MR_AND
		MR_LABEL_AP(cord__map_pred_3_0_i25) MR_AND
		MR_LABEL_AP(cord__map_pred_3_0_i26));
MR_def_label(cord__map_pred_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(cord__map_pred_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_pred_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__map_pred_3_0_i8);
MR_def_label(cord__map_pred_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(cord__map_pred_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(2, MR_r4, 0);
	MR_np_call_localret_ent(list__map_3_0,
		cord__map_pred_3_0_i11);
MR_def_label(cord__map_pred_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(cord__map_pred_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 0);
	MR_np_localcall_lab(cord__map_pred_3_0,
		cord__map_pred_3_0_i4);
MR_def_label(cord__map_pred_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(cord__map_pred_3_0,
		cord__map_pred_3_0_i5);
MR_def_label(cord__map_pred_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(cord_module22)
	MR_init_entry1(cord__filter_3_0);
	MR_init_label8(cord__filter_3_0,13,15,18,19,33,21,3,4)
	MR_init_label3(cord__filter_3_0,5,8,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(cord__filter_3_0_i33) MR_AND
		MR_LABEL_AP(cord__filter_3_0_i13) MR_AND
		MR_LABEL_AP(cord__filter_3_0_i18) MR_AND
		MR_LABEL_AP(cord__filter_3_0_i3));
MR_def_label(cord__filter_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__filter_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__filter_3_0_i15);
MR_def_label(cord__filter_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__filter_3_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(list__filter_3_0,
		cord__filter_3_0_i19);
MR_def_label(cord__filter_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__filter_3_0_i21);
	}
MR_def_label(cord__filter_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(cord__filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(3, MR_r3, 0);
	MR_np_localcall_lab(cord__filter_3_0,
		cord__filter_3_0_i4);
MR_def_label(cord__filter_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(cord__filter_3_0,
		cord__filter_3_0_i5);
MR_def_label(cord__filter_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(cord__filter_3_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__filter_3_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(cord__filter_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(cord_module23)
	MR_init_entry1(cord__filter_4_0);
	MR_init_label8(cord__filter_4_0,34,76,23,21,77,27,29,28)
	MR_init_label8(cord__filter_4_0,32,78,4,5,8,12,15,75)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(cord__filter_4_0_i34) MR_AND
		MR_LABEL_AP(cord__filter_4_0_i76) MR_AND
		MR_LABEL_AP(cord__filter_4_0_i77) MR_AND
		MR_LABEL_AP(cord__filter_4_0_i78));
MR_def_label(cord__filter_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(cord__filter_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__filter_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__cord__filter_4_0_i23);
MR_def_label(cord__filter_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(cord__filter_4_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(cord__filter_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(list__filter_4_0,
		cord__filter_4_0_i27);
MR_def_label(cord__filter_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(cord__filter_4_0_i28);
MR_def_label(cord__filter_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(cord__filter_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(cord__filter_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_ctfield(3, MR_r3, 0);
	MR_np_localcall_lab(cord__filter_4_0,
		cord__filter_4_0_i4);
MR_def_label(cord__filter_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__filter_4_0,
		cord__filter_4_0_i5);
MR_def_label(cord__filter_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(cord__filter_4_0_i12);
MR_def_label(cord__filter_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(cord__filter_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i75);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(cord__filter_4_0_i15);
	}
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(cord__filter_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(cord__filter_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(cord_module24)
	MR_init_entry1(cord__foldl_pred_4_0);
	MR_init_label5(cord__foldl_pred_4_0,10,6,8,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__foldl_pred_4_0_i10) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_0_i6) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_0_i8) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_0_i3));
MR_def_label(cord__foldl_pred_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(cord__foldl_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_pred_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldl_pred_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
MR_def_label(cord__foldl_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_pred_4_0,
		cord__foldl_pred_4_0_i4);
MR_def_label(cord__foldl_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__foldl_pred_4_0_i10) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_0_i6) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_0_i8) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(cord_module25)
	MR_init_entry1(cord__foldl_pred_4_1);
	MR_init_label5(cord__foldl_pred_4_1,10,6,8,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldl_pred'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldl_pred_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__foldl_pred_4_1_i10) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_1_i6) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_1_i8) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_1_i3));
MR_def_label(cord__foldl_pred_4_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(cord__foldl_pred_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldl_pred_4_1));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldl_pred_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_2);
MR_def_label(cord__foldl_pred_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 0);
	MR_np_localcall_lab(cord__foldl_pred_4_1,
		cord__foldl_pred_4_1_i4);
MR_def_label(cord__foldl_pred_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__foldl_pred_4_1_i10) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_1_i6) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_1_i8) MR_AND
		MR_LABEL_AP(cord__foldl_pred_4_1_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module26)
	MR_init_entry1(fn__cord__foldr_3_0);
	MR_init_label5(fn__cord__foldr_3_0,10,6,8,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__cord__foldr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__cord__foldr_3_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__foldr_3_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__foldr_3_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__foldr_3_0_i3));
MR_def_label(fn__cord__foldr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(fn__cord__foldr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__cord__foldr_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(fn__cord__foldr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(2, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
MR_def_label(fn__cord__foldr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	MR_np_localcall_lab(fn__cord__foldr_3_0,
		fn__cord__foldr_3_0_i4);
MR_def_label(fn__cord__foldr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__cord__foldr_3_0_i10) MR_AND
		MR_LABEL_AP(fn__cord__foldr_3_0_i6) MR_AND
		MR_LABEL_AP(fn__cord__foldr_3_0_i8) MR_AND
		MR_LABEL_AP(fn__cord__foldr_3_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldr_4_0);

MR_BEGIN_MODULE(cord_module27)
	MR_init_entry1(cord__foldr_pred_4_0);
	MR_init_label5(cord__foldr_pred_4_0,10,6,8,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'foldr_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__foldr_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__foldr_pred_4_0_i10) MR_AND
		MR_LABEL_AP(cord__foldr_pred_4_0_i6) MR_AND
		MR_LABEL_AP(cord__foldr_pred_4_0_i8) MR_AND
		MR_LABEL_AP(cord__foldr_pred_4_0_i3));
MR_def_label(cord__foldr_pred_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(cord__foldr_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_r5;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__foldr_pred_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
MR_def_label(cord__foldr_pred_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(2, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldr_4_0);
MR_def_label(cord__foldr_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r4, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 1);
	MR_np_localcall_lab(cord__foldr_pred_4_0,
		cord__foldr_pred_4_0_i4);
MR_def_label(cord__foldr_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r6;
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(cord__foldr_pred_4_0_i10) MR_AND
		MR_LABEL_AP(cord__foldr_pred_4_0_i6) MR_AND
		MR_LABEL_AP(cord__foldr_pred_4_0_i8) MR_AND
		MR_LABEL_AP(cord__foldr_pred_4_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(cord_module28)
	MR_init_entry1(cord__map_foldl_5_0);
	MR_init_label8(cord__map_foldl_5_0,13,24,8,25,11,26,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(cord__map_foldl_5_0_i13) MR_AND
		MR_LABEL_AP(cord__map_foldl_5_0_i24) MR_AND
		MR_LABEL_AP(cord__map_foldl_5_0_i25) MR_AND
		MR_LABEL_AP(cord__map_foldl_5_0_i26));
MR_def_label(cord__map_foldl_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(cord__map_foldl_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_r4;
	MR_r2 = MR_ctfield(1, MR_r5, 0);
	MR_r3 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__cord__map_foldl_5_0_i8);
MR_def_label(cord__map_foldl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(2, MR_r5, 0);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		cord__map_foldl_5_0_i11);
MR_def_label(cord__map_foldl_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(cord__map_foldl_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_r5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r5 = MR_ctfield(3, MR_r5, 0);
	MR_np_localcall_lab(cord__map_foldl_5_0,
		cord__map_foldl_5_0_i4);
MR_def_label(cord__map_foldl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(cord__map_foldl_5_0,
		cord__map_foldl_5_0_i5);
MR_def_label(cord__map_foldl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);
MR_decl_entry(list__map_foldl2_7_0);

MR_BEGIN_MODULE(cord_module29)
	MR_init_entry1(cord__map_foldl2_7_0);
	MR_init_label8(cord__map_foldl2_7_0,13,24,8,25,11,26,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(cord__map_foldl2_7_0_i13) MR_AND
		MR_LABEL_AP(cord__map_foldl2_7_0_i24) MR_AND
		MR_LABEL_AP(cord__map_foldl2_7_0_i25) MR_AND
		MR_LABEL_AP(cord__map_foldl2_7_0_i26));
MR_def_label(cord__map_foldl2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
MR_def_label(cord__map_foldl2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_r5;
	MR_r2 = MR_ctfield(1, MR_r6, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__cord__map_foldl2_7_0_i8);
MR_def_label(cord__map_foldl2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(cord__map_foldl2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r6 = MR_ctfield(2, MR_r6, 0);
	MR_np_call_localret_ent(list__map_foldl2_7_0,
		cord__map_foldl2_7_0_i11);
MR_def_label(cord__map_foldl2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(cord__map_foldl2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_ctfield(3, MR_r6, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r6 = MR_ctfield(3, MR_r6, 0);
	MR_np_localcall_lab(cord__map_foldl2_7_0,
		cord__map_foldl2_7_0_i4);
MR_def_label(cord__map_foldl2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_localcall_lab(cord__map_foldl2_7_0,
		cord__map_foldl2_7_0_i5);
MR_def_label(cord__map_foldl2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);
MR_decl_entry(list__map_foldl3_9_1);

MR_BEGIN_MODULE(cord_module30)
	MR_init_entry1(cord__map_foldl3_9_0);
	MR_init_label8(cord__map_foldl3_9_0,13,24,8,25,11,26,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__cord__map_foldl3_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(cord__map_foldl3_9_0_i13) MR_AND
		MR_LABEL_AP(cord__map_foldl3_9_0_i24) MR_AND
		MR_LABEL_AP(cord__map_foldl3_9_0_i25) MR_AND
		MR_LABEL_AP(cord__map_foldl3_9_0_i26));
MR_def_label(cord__map_foldl3_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_proceed();
MR_def_label(cord__map_foldl3_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = MR_r6;
	MR_r2 = MR_ctfield(1, MR_r7, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(cord__map_foldl3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__cord__map_foldl3_9_0_i8);
MR_def_label(cord__map_foldl3_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(cord__map_foldl3_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r7 = MR_ctfield(2, MR_r7, 0);
	MR_np_call_localret_ent(list__map_foldl3_9_1,
		cord__map_foldl3_9_0_i11);
MR_def_label(cord__map_foldl3_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(cord__map_foldl3_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_ctfield(3, MR_r7, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r7 = MR_ctfield(3, MR_r7, 0);
	MR_np_localcall_lab(cord__map_foldl3_9_0,
		cord__map_foldl3_9_0_i4);
MR_def_label(cord__map_foldl3_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_localcall_lab(cord__map_foldl3_9_0,
		cord__map_foldl3_9_0_i5);
MR_def_label(cord__map_foldl3_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(cord_module31)
	MR_init_entry1(cord__equal_2_0);
	MR_init_label2(cord__equal_2_0,2,3)
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
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		cord__equal_2_0_i2);
MR_def_label(cord__equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__cord__list_2_2_0,
		cord__equal_2_0_i3);
MR_def_label(cord__equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
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

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(cord_module32)
	MR_init_entry1(__Unify___cord__cord_1_0);
	MR_init_label8(__Unify___cord__cord_1_0,49,19,11,15,5,7,24,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___cord__cord_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(__Unify___cord__cord_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___cord__cord_1_0_i19) MR_AND
		MR_LABEL_AP(__Unify___cord__cord_1_0_i11) MR_AND
		MR_LABEL_AP(__Unify___cord__cord_1_0_i15) MR_AND
		MR_LABEL_AP(__Unify___cord__cord_1_0_i5));
MR_def_label(__Unify___cord__cord_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___cord__cord_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___cord__cord_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___cord__cord_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	MR_r3 = MR_ctfield(3, MR_tempr2, 0);
	}
	MR_np_localcall_lab(__Unify___cord__cord_1_0,
		__Unify___cord__cord_1_0_i7);
MR_def_label(__Unify___cord__cord_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___cord__cord_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Unify___cord__cord_1_0_i49);
MR_def_label(__Unify___cord__cord_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___cord__cord_1_0,1)
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

MR_BEGIN_MODULE(cord_module33)
	MR_init_entry1(__Compare___cord__cord_1_0);
	MR_init_label8(__Compare___cord__cord_1_0,73,43,48,21,24,32,36,34)
	MR_init_label5(__Compare___cord__cord_1_0,5,15,7,9,80)
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
MR_def_label(__Compare___cord__cord_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i48);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___cord__cord_1_0_i43) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i21) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i32) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i5));
MR_def_label(__Compare___cord__cord_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i34);
	}
MR_def_label(__Compare___cord__cord_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___cord__cord_1_0_i15) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i24) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i34) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i34));
MR_def_label(__Compare___cord__cord_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___cord__cord_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___cord__cord_1_0_i15) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i15) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i36) MR_AND
		MR_LABEL_AP(__Compare___cord__cord_1_0_i34));
MR_def_label(__Compare___cord__cord_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___cord__cord_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i7);
	}
MR_def_label(__Compare___cord__cord_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___cord__cord_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(3, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(3, MR_tempr3, 0);
	MR_r3 = MR_ctfield(3, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___cord__cord_1_0,
		__Compare___cord__cord_1_0_i9);
MR_def_label(__Compare___cord__cord_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___cord__cord_1_0_i80);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Compare___cord__cord_1_0_i73);
MR_def_label(__Compare___cord__cord_1_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module34)
	MR_init_entry1(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0);
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
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break; } /* end while */
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module35)
	MR_init_entry1(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0);
	MR_init_label4(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0,9,4,7,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__split_list_last_2__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0_i2);
	}
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_r3 = MR_r5;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0_i7);
	}
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_r3 = MR_r5;
	MR_r1 = MR_tempr1;
	}
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0_i9);
	}
MR_def_label(f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module36)
	MR_init_entry1(fn__f_99_111_114_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
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


MR_BEGIN_MODULE(cord_module37)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_init_label3(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,14,4,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map__ho7__[1, 2, 4, 5, 6]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i4);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,
		f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i5);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module38)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,13,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldr__ho8__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,
		f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module39)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho9__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module40)
	MR_init_entry1(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_init_label5(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,9,6,7,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldl__ho10__[1, 2, 3]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i9) MR_AND
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i6) MR_AND
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i7) MR_AND
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i3));
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_np_localcall_lab(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,
		fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i4);
MR_def_label(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i9) MR_AND
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i6) MR_AND
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i7) MR_AND
		MR_LABEL_AP(fn__f_99_111_114_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0_i3));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(cord_module41)
	MR_init_entry1(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0);
	MR_init_label2(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho9__ho14__[1, 2, 3, 4, 5, 6, 7, 8]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0_i2);
	}
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	break; } /* end while */
MR_def_label(f_99_111_114_100_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_57_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_0,2)
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

void mercury__cord__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__cord_maybe_bunch_0();
	mercury__cord_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_cord__type_ctor_info_cord_1,
		cord__cord_1_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
