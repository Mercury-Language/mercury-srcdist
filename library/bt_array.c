/*
** Automatically generated from `bt_array.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__bt_array__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "bt_array.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "bt_array.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "bt_array.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "bt_array.c"
#line 31 "array.int2"
#include "array.mh"

#line 43 "bt_array.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "bt_array.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 51 "bt_array.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "bt_array.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "bt_array.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "bt_array.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "bt_array.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "bt_array.c"
#line 20 "store.opt"
#include "store.mh"

#line 75 "bt_array.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "bt_array.c"
#line 4 "char.opt"
#include "char.mh"

#line 83 "bt_array.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 87 "bt_array.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 91 "bt_array.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "bt_array.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "bt_array.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "bt_array.c"
#line 104 "bt_array.c"
#include "bt_array.mh"

#line 107 "bt_array.c"
#line 108 "bt_array.c"
#ifndef BT_ARRAY_DECL_GUARD
#define BT_ARRAY_DECL_GUARD

#line 112 "bt_array.c"
#line 113 "bt_array.c"

#endif
#line 116 "bt_array.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_bt_array__type_ctor_info_ra_list_bintree_1,
	mercury_data_bt_array__type_ctor_info_ra_list_1,
	mercury_data_bt_array__type_ctor_info_bt_array_1;
MR_decl_label3(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0, 18,34,1)
MR_decl_label3(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0, 5,10,1)
MR_decl_label3(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0, 5,4,2)
MR_decl_label2(bt_array__add_elements_4_0, 2,3)
MR_decl_label1(bt_array__bsearch_4_0, 1)
MR_decl_label8(bt_array__bsearch_2_6_0, 43,4,5,2,6,7,8,10)
MR_decl_label2(bt_array__bsearch_2_6_0, 13,1)
MR_decl_label3(bt_array__fetch_items_4_0, 11,2,4)
MR_decl_label2(bt_array__from_list_3_0, 2,3)
MR_decl_label1(bt_array__in_bounds_2_0, 1)
MR_decl_label1(bt_array__init_4_0, 2)
MR_decl_label3(bt_array__insert_items_4_0, 10,3,4)
MR_decl_label2(bt_array__lookup_3_0, 3,2)
MR_decl_label4(bt_array__ra_list_bintree_lookup_4_0, 3,5,7,1)
MR_decl_label7(bt_array__ra_list_bintree_update_5_0, 43,6,10,9,13,44,1)
MR_decl_label1(bt_array__ra_list_cons_3_0, 2)
MR_decl_label2(bt_array__ra_list_head_tail_3_0, 4,1)
MR_decl_label1(bt_array__ra_list_lookup_3_0, 1)
MR_decl_label2(bt_array__ra_list_lookup_2_3_0, 3,1)
MR_decl_label1(bt_array__ra_list_update_4_0, 1)
MR_decl_label4(bt_array__ra_list_update_2_4_0, 4,3,7,1)
MR_decl_label8(bt_array__resize_5_0, 5,4,3,11,10,55,15,16)
MR_decl_label4(bt_array__resize_5_0, 17,18,19,20)
MR_decl_label3(bt_array__reverse_from_ra_list_3_0, 5,4,2)
MR_decl_label4(bt_array__reverse_into_ra_list_3_0, 12,3,10,2)
MR_decl_label1(bt_array__semidet_lookup_3_0, 1)
MR_decl_label2(bt_array__semidet_set_4_0, 2,1)
MR_decl_label2(bt_array__set_4_0, 3,2)
MR_decl_label8(bt_array__shrink_4_0, 5,4,3,9,8,7,14,19)
MR_decl_label6(bt_array__shrink_4_0, 20,21,22,23,24,25)
MR_decl_label1(fn__bt_array__init_3_0, 2)
MR_decl_label2(__Unify___bt_array__bt_array_1_0, 6,1)
MR_decl_label5(__Unify___bt_array__ra_list_1_0, 34,14,5,7,1)
MR_decl_label6(__Unify___bt_array__ra_list_bintree_1_0, 43,20,5,10,12,1)
MR_decl_label8(__Compare___bt_array__bt_array_1_0, 3,2,6,7,9,14,15,17)
MR_decl_label1(__Compare___bt_array__bt_array_1_0, 49)
MR_decl_label8(__Compare___bt_array__ra_list_1_0, 64,36,7,5,9,12,13,15)
MR_decl_label2(__Compare___bt_array__ra_list_1_0, 19,69)
MR_decl_label8(__Compare___bt_array__ra_list_bintree_1_0, 48,3,2,7,5,10,12,16)
MR_decl_label1(__Compare___bt_array__ra_list_bintree_1_0, 54)
MR_def_extern_entry(bt_array__ra_list_nil_1_0)
MR_def_extern_entry(bt_array__make_empty_array_2_0)
MR_def_extern_entry(fn__bt_array__make_empty_array_1_0)
MR_def_extern_entry(bt_array__ra_list_cons_3_0)
MR_def_extern_entry(bt_array__add_elements_4_0)
MR_def_extern_entry(bt_array__init_4_0)
MR_def_extern_entry(fn__bt_array__init_3_0)
MR_def_extern_entry(bt_array__min_2_0)
MR_def_extern_entry(fn__bt_array__min_1_0)
MR_def_extern_entry(bt_array__max_2_0)
MR_def_extern_entry(fn__bt_array__max_1_0)
MR_def_extern_entry(bt_array__size_2_0)
MR_def_extern_entry(fn__bt_array__size_1_0)
MR_def_extern_entry(bt_array__bounds_3_0)
MR_def_extern_entry(bt_array__in_bounds_2_0)
MR_def_extern_entry(bt_array__actual_position_4_0)
MR_def_extern_entry(bt_array__ra_list_bintree_lookup_4_0)
MR_def_extern_entry(bt_array__ra_list_lookup_2_3_0)
MR_def_extern_entry(bt_array__ra_list_lookup_3_0)
MR_def_extern_entry(bt_array__lookup_3_0)
MR_def_extern_entry(fn__bt_array__lookup_2_0)
MR_def_extern_entry(bt_array__semidet_lookup_3_0)
MR_def_extern_entry(bt_array__ra_list_bintree_update_5_0)
MR_def_extern_entry(bt_array__ra_list_update_2_4_0)
MR_def_extern_entry(bt_array__ra_list_update_4_0)
MR_def_extern_entry(bt_array__semidet_set_4_0)
MR_def_extern_entry(bt_array__set_4_0)
MR_def_extern_entry(fn__bt_array__set_3_0)
MR_def_extern_entry(bt_array__ra_list_head_tail_3_0)
MR_def_extern_entry(bt_array__fetch_items_4_0)
MR_decl_static(bt_array__insert_items_4_0)
MR_def_extern_entry(bt_array__resize_5_0)
MR_def_extern_entry(fn__bt_array__resize_4_0)
MR_def_extern_entry(bt_array__shrink_4_0)
MR_def_extern_entry(fn__bt_array__shrink_3_0)
MR_def_extern_entry(bt_array__reverse_into_ra_list_3_0)
MR_def_extern_entry(bt_array__from_list_3_0)
MR_def_extern_entry(fn__bt_array__from_list_2_0)
MR_def_extern_entry(bt_array__reverse_from_ra_list_3_0)
MR_def_extern_entry(bt_array__to_list_2_0)
MR_def_extern_entry(fn__bt_array__to_list_1_0)
MR_def_extern_entry(fn__bt_array__fetch_items_3_0)
MR_def_extern_entry(bt_array__bsearch_2_6_0)
MR_def_extern_entry(bt_array__bsearch_4_0)
MR_def_extern_entry(fn__bt_array__elem_2_0)
MR_def_extern_entry(fn__f_98_116_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(__Unify___bt_array__bt_array_1_0)
MR_def_extern_entry(__Compare___bt_array__bt_array_1_0)
MR_def_extern_entry(__Unify___bt_array__ra_list_1_0)
MR_def_extern_entry(__Compare___bt_array__ra_list_1_0)
MR_def_extern_entry(__Unify___bt_array__ra_list_bintree_1_0)
MR_def_extern_entry(__Compare___bt_array__ra_list_bintree_1_0)
MR_decl_static(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0)
MR_decl_static(fn__f_98_116_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_PseudoTypeInfo mercury_data_bt_array__field_types_ra_list_bintree_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_bt_array__du_functor_desc_ra_list_bintree_1_0 = {
	"leaf",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bt_array__field_types_ra_list_bintree_1_0,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_bt_array__pti_ra_list_bintree_1__pseudo_1 = {
	&mercury_data_bt_array__type_ctor_info_ra_list_bintree_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_bt_array__field_types_ra_list_bintree_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_bt_array__pti_ra_list_bintree_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_bt_array__pti_ra_list_bintree_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_bt_array__du_functor_desc_ra_list_bintree_1_1 = {
	"node",
	3,
	7,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_bt_array__field_types_ra_list_bintree_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_stag_ordered_ra_list_bintree_1_0[] = {
	&mercury_data_bt_array__du_functor_desc_ra_list_bintree_1_0

};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_stag_ordered_ra_list_bintree_1_1[] = {
	&mercury_data_bt_array__du_functor_desc_ra_list_bintree_1_1

};

const MR_DuPtagLayout mercury_data_bt_array__du_ptag_ordered_ra_list_bintree_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bt_array__du_stag_ordered_ra_list_bintree_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bt_array__du_stag_ordered_ra_list_bintree_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_name_ordered_ra_list_bintree_1[] = {
	&mercury_data_bt_array__du_functor_desc_ra_list_bintree_1_0,
	&mercury_data_bt_array__du_functor_desc_ra_list_bintree_1_1
};

const MR_Integer mercury_data_bt_array__functor_number_map_ra_list_bintree_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_bt_array__type_ctor_info_ra_list_bintree_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bt_array__ra_list_bintree_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bt_array__ra_list_bintree_1_0)),
	"bt_array",
	"ra_list_bintree",
	{ (void *)mercury_data_bt_array__du_name_ordered_ra_list_bintree_1 },
	{ (void *)mercury_data_bt_array__du_ptag_ordered_ra_list_bintree_1 },
	2,
	4,
	mercury_data_bt_array__functor_number_map_ra_list_bintree_1
};

static const MR_DuFunctorDesc mercury_data_bt_array__du_functor_desc_ra_list_1_0 = {
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_bt_array__pti_ra_list_1__pseudo_1 = {
	&mercury_data_bt_array__type_ctor_info_ra_list_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_bt_array__field_types_ra_list_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bt_array__pti_ra_list_bintree_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_bt_array__pti_ra_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_bt_array__du_functor_desc_ra_list_1_1 = {
	"cons",
	3,
	6,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_bt_array__field_types_ra_list_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_stag_ordered_ra_list_1_0[] = {
	&mercury_data_bt_array__du_functor_desc_ra_list_1_0

};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_stag_ordered_ra_list_1_1[] = {
	&mercury_data_bt_array__du_functor_desc_ra_list_1_1

};

const MR_DuPtagLayout mercury_data_bt_array__du_ptag_ordered_ra_list_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_bt_array__du_stag_ordered_ra_list_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bt_array__du_stag_ordered_ra_list_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_name_ordered_ra_list_1[] = {
	&mercury_data_bt_array__du_functor_desc_ra_list_1_1,
	&mercury_data_bt_array__du_functor_desc_ra_list_1_0
};

const MR_Integer mercury_data_bt_array__functor_number_map_ra_list_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bt_array__type_ctor_info_ra_list_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bt_array__ra_list_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bt_array__ra_list_1_0)),
	"bt_array",
	"ra_list",
	{ (void *)mercury_data_bt_array__du_name_ordered_ra_list_1 },
	{ (void *)mercury_data_bt_array__du_ptag_ordered_ra_list_1 },
	2,
	4,
	mercury_data_bt_array__functor_number_map_ra_list_1
};

const MR_PseudoTypeInfo mercury_data_bt_array__field_types_bt_array_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bt_array__pti_ra_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_bt_array__du_functor_desc_bt_array_1_0 = {
	"bt_array",
	3,
	4,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bt_array__field_types_bt_array_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_stag_ordered_bt_array_1_0[] = {
	&mercury_data_bt_array__du_functor_desc_bt_array_1_0

};

const MR_DuPtagLayout mercury_data_bt_array__du_ptag_ordered_bt_array_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bt_array__du_stag_ordered_bt_array_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_bt_array__du_name_ordered_bt_array_1[] = {
	&mercury_data_bt_array__du_functor_desc_bt_array_1_0
};

const MR_Integer mercury_data_bt_array__functor_number_map_bt_array_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bt_array__type_ctor_info_bt_array_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bt_array__bt_array_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bt_array__bt_array_1_0)),
	"bt_array",
	"bt_array",
	{ (void *)mercury_data_bt_array__du_name_ordered_bt_array_1 },
	{ (void *)mercury_data_bt_array__du_ptag_ordered_bt_array_1 },
	1,
	4,
	mercury_data_bt_array__functor_number_map_bt_array_1
};


MR_BEGIN_MODULE(bt_array_module0)
	MR_init_entry1(bt_array__ra_list_nil_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_nil_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module1)
	MR_init_entry1(bt_array__make_empty_array_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__make_empty_array_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module2)
	MR_init_entry1(fn__bt_array__make_empty_array_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__make_empty_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module3)
	MR_init_entry1(bt_array__ra_list_cons_3_0);
	MR_init_label1(bt_array__ra_list_cons_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_cons_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bt_array__ra_list_cons_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(bt_array__ra_list_cons_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(bt_array__ra_list_cons_3_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr4, 0) = MR_r2;
	MR_tfield(1, MR_tempr4, 1) = MR_ctfield(1, MR_tempr6, 1);
	MR_tfield(1, MR_tempr4, 2) = MR_ctfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (((MR_Integer) 1 + (MR_Integer) MR_tempr2) + (MR_Integer) MR_tempr3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 2) = MR_ctfield(1, MR_tempr1, 2);
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_cons_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module4)
	MR_init_entry1(bt_array__add_elements_4_0);
	MR_init_label2(bt_array__add_elements_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__add_elements_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(bt_array__add_elements_4_0_i2);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(bt_array__add_elements_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(bt_array__add_elements_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(bt_array__add_elements_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(bt_array__add_elements_4_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr4, 0) = MR_r3;
	MR_tfield(1, MR_tempr4, 1) = MR_ctfield(1, MR_tempr6, 1);
	MR_tfield(1, MR_tempr4, 2) = MR_ctfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (((MR_Integer) 1 + (MR_Integer) MR_tempr2) + (MR_Integer) MR_tempr3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 2) = MR_ctfield(1, MR_tempr1, 2);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(bt_array__add_elements_4_0);
	}
MR_def_label(bt_array__add_elements_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(bt_array__add_elements_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module5)
	MR_init_entry1(bt_array__init_4_0);
	MR_init_label1(bt_array__init_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__init_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = (((MR_Integer) MR_tempr1 - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(bt_array__add_elements_4_0,
		bt_array__init_4_0_i2);
MR_def_label(bt_array__init_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module6)
	MR_init_entry1(fn__bt_array__init_3_0);
	MR_init_label1(fn__bt_array__init_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = (((MR_Integer) MR_tempr1 - (MR_Integer) MR_r2) + (MR_Integer) 1);
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(bt_array__add_elements_4_0,
		fn__bt_array__init_3_0_i2);
MR_def_label(fn__bt_array__init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module7)
	MR_init_entry1(bt_array__min_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__min_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module8)
	MR_init_entry1(fn__bt_array__min_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__min_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module9)
	MR_init_entry1(bt_array__max_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__max_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module10)
	MR_init_entry1(fn__bt_array__max_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__max_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module11)
	MR_init_entry1(bt_array__size_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r1 = (((MR_Integer) MR_ctfield(0, MR_tempr1, 1) - (MR_Integer) MR_ctfield(0, MR_tempr1, 0)) + (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module12)
	MR_init_entry1(fn__bt_array__size_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r1 = (((MR_Integer) MR_ctfield(0, MR_tempr1, 1) - (MR_Integer) MR_ctfield(0, MR_tempr1, 0)) + (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module13)
	MR_init_entry1(bt_array__bounds_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__bounds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module14)
	MR_init_entry1(bt_array__in_bounds_2_0);
	MR_init_label1(bt_array__in_bounds_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__in_bounds_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(bt_array__in_bounds_2_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = ((MR_Integer) MR_r3 <= (MR_Integer) MR_r1);
	MR_proceed();
	}
MR_def_label(bt_array__in_bounds_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module15)
	MR_init_entry1(bt_array__actual_position_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__actual_position_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r2 - (MR_Integer) MR_r1) - (MR_Integer) MR_r3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module16)
	MR_init_entry1(bt_array__ra_list_bintree_lookup_4_0);
	MR_init_label4(bt_array__ra_list_bintree_lookup_4_0,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_bintree_lookup_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_lookup_4_0_i3);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_lookup_4_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bt_array__ra_list_bintree_lookup_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr1, 2);
	MR_r6 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_lookup_4_0_i5);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_bintree_lookup_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 / (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_lookup_4_0_i7);
	}
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_np_localtailcall(bt_array__ra_list_bintree_lookup_4_0);
	}
MR_def_label(bt_array__ra_list_bintree_lookup_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r3 = MR_r5;
	MR_r4 = (((MR_Integer) MR_r4 - (MR_Integer) 1) - (MR_Integer) MR_r2);
	MR_np_localtailcall(bt_array__ra_list_bintree_lookup_4_0);
MR_def_label(bt_array__ra_list_bintree_lookup_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module17)
	MR_init_entry1(bt_array__ra_list_lookup_2_3_0);
	MR_init_label2(bt_array__ra_list_lookup_2_3_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_lookup_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bt_array__ra_list_lookup_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(bt_array__ra_list_lookup_2_3_0_i3);
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(bt_array__ra_list_bintree_lookup_4_0);
	}
MR_def_label(bt_array__ra_list_lookup_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) MR_r6);
	MR_r3 = MR_r5;
	MR_np_localtailcall(bt_array__ra_list_lookup_2_3_0);
MR_def_label(bt_array__ra_list_lookup_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module18)
	MR_init_entry1(bt_array__ra_list_lookup_3_0);
	MR_init_label1(bt_array__ra_list_lookup_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(bt_array__ra_list_lookup_3_0_i1);
	}
	MR_np_tailcall_ent(bt_array__ra_list_lookup_2_3_0);
MR_def_label(bt_array__ra_list_lookup_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(bt_array_module19)
	MR_init_entry1(bt_array__lookup_3_0);
	MR_init_label2(bt_array__lookup_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = (((MR_Integer) MR_ctfield(0, MR_tempr3, 1) - (MR_Integer) MR_ctfield(0, MR_tempr3, 0)) - (MR_Integer) MR_r3);
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__lookup_3_0_i2);
	}
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(bt_array__ra_list_lookup_2_3_0,
		bt_array__lookup_3_0_i3);
MR_def_label(bt_array__lookup_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__lookup_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(bt_array__lookup_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bt_array.lookup: Array subscript out of bounds", 46);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module20)
	MR_init_entry1(fn__bt_array__lookup_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bt_array__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module21)
	MR_init_entry1(bt_array__semidet_lookup_3_0);
	MR_init_label1(bt_array__semidet_lookup_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__semidet_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = (((MR_Integer) MR_ctfield(0, MR_tempr3, 1) - (MR_Integer) MR_ctfield(0, MR_tempr3, 0)) - (MR_Integer) MR_r3);
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__semidet_lookup_3_0_i1);
	}
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_np_tailcall_ent(bt_array__ra_list_lookup_2_3_0);
	}
MR_def_label(bt_array__semidet_lookup_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module22)
	MR_init_entry1(bt_array__ra_list_bintree_update_5_0);
	MR_init_label7(bt_array__ra_list_bintree_update_5_0,43,6,10,9,13,44,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_bintree_update_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_update_5_0_i43);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_update_5_0_i44);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bt_array__ra_list_bintree_update_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_update_5_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r5;
	MR_tfield(1, MR_tempr1, 1) = MR_r6;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_bintree_update_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 / (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_update_5_0_i9);
	}
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	}
	MR_np_localcall_lab(bt_array__ra_list_bintree_update_5_0,
		bt_array__ra_list_bintree_update_5_0_i10);
MR_def_label(bt_array__ra_list_bintree_update_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_update_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(bt_array__ra_list_bintree_update_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_tempr1;
	MR_r4 = (((MR_Integer) MR_r4 - (MR_Integer) 1) - (MR_Integer) MR_r2);
	}
	MR_np_localcall_lab(bt_array__ra_list_bintree_update_5_0,
		bt_array__ra_list_bintree_update_5_0_i13);
MR_def_label(bt_array__ra_list_bintree_update_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__ra_list_bintree_update_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(bt_array__ra_list_bintree_update_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bt_array__ra_list_bintree_update_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module23)
	MR_init_entry1(bt_array__ra_list_update_2_4_0);
	MR_init_label4(bt_array__ra_list_update_2_4_0,4,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_update_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(bt_array__ra_list_update_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 2);
	MR_r6 = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_r7 = MR_tempr1;
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(bt_array__ra_list_update_2_4_0_i3);
	}
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r6;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(bt_array__ra_list_bintree_update_5_0,
		bt_array__ra_list_update_2_4_0_i4);
MR_def_label(bt_array__ra_list_update_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__ra_list_update_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_update_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r6;
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) MR_tempr2);
	}
	MR_np_localcall_lab(bt_array__ra_list_update_2_4_0,
		bt_array__ra_list_update_2_4_0_i7);
MR_def_label(bt_array__ra_list_update_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__ra_list_update_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_update_2_4_0,1)
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


MR_BEGIN_MODULE(bt_array_module24)
	MR_init_entry1(bt_array__ra_list_update_4_0);
	MR_init_label1(bt_array__ra_list_update_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_update_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(bt_array__ra_list_update_4_0_i1);
	}
	MR_np_tailcall_ent(bt_array__ra_list_update_2_4_0);
MR_def_label(bt_array__ra_list_update_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module25)
	MR_init_entry1(bt_array__semidet_set_4_0);
	MR_init_label2(bt_array__semidet_set_4_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__semidet_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = (((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(0, MR_tempr2, 0)) - (MR_Integer) MR_r3);
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__semidet_set_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bt_array__ra_list_update_2_4_0,
		bt_array__semidet_set_4_0_i2);
MR_def_label(bt_array__semidet_set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__semidet_set_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bt_array__semidet_set_4_0,1)
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


MR_BEGIN_MODULE(bt_array_module26)
	MR_init_entry1(bt_array__set_4_0);
	MR_init_label2(bt_array__set_4_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = (((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(0, MR_tempr2, 0)) - (MR_Integer) MR_r3);
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__set_4_0_i2);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bt_array__ra_list_update_2_4_0,
		bt_array__set_4_0_i3);
MR_def_label(bt_array__set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__set_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(bt_array__set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bt_array.set: index out of bounds", 33);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module27)
	MR_init_entry1(fn__bt_array__set_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bt_array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module28)
	MR_init_entry1(bt_array__ra_list_head_tail_3_0);
	MR_init_label2(bt_array__ra_list_head_tail_3_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__ra_list_head_tail_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(bt_array__ra_list_head_tail_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__ra_list_head_tail_3_0_i4);
	}
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_head_tail_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(1, MR_tempr3, 0) / (MR_Integer) 2);
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(bt_array__ra_list_head_tail_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module29)
	MR_init_entry1(bt_array__fetch_items_4_0);
	MR_init_label3(bt_array__fetch_items_4_0,11,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__fetch_items_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(bt_array__fetch_items_4_0_i2);
	}
	}
MR_def_label(bt_array__fetch_items_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(bt_array__fetch_items_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (((MR_Integer) MR_r6 - (MR_Integer) MR_r7) - (MR_Integer) MR_tempr1);
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,
		bt_array__fetch_items_4_0_i4);
MR_def_label(bt_array__fetch_items_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__fetch_items_4_0_i11);
	}
	MR_r1 = (((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(1)) + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module30)
	MR_init_entry1(bt_array__insert_items_4_0);
	MR_init_label3(bt_array__insert_items_4_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bt_array__insert_items_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(bt_array__insert_items_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(bt_array__insert_items_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(bt_array__insert_items_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r4, 1);
	MR_sv(3) = MR_r1;
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(bt_array__set_4_0,
		bt_array__insert_items_4_0_i4);
MR_def_label(bt_array__insert_items_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(bt_array__insert_items_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module31)
	MR_init_entry1(bt_array__resize_5_0);
	MR_init_label8(bt_array__resize_5_0,5,4,3,11,10,55,15,16)
	MR_init_label4(bt_array__resize_5_0,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__resize_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r6 = MR_ctfield(0, MR_tempr1, 1);
	MR_r7 = MR_ctfield(0, MR_tempr1, 0);
	if ((MR_r3 != MR_r7)) {
		MR_GOTO_LAB(bt_array__resize_5_0_i55);
	}
	MR_r7 = MR_ctfield(0, MR_tempr1, 2);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(bt_array__resize_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_r6 - (MR_Integer) MR_tempr2);
	MR_r2 = MR_r7;
	}
	MR_np_call_localret_ent(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,
		bt_array__resize_5_0_i5);
MR_def_label(bt_array__resize_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__resize_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bt_array__resize_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bt_array.resize: Can\'t resize to a less-than-empty array", 56);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(bt_array__resize_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(bt_array__resize_5_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_r6);
	MR_r3 = MR_r5;
	MR_r4 = MR_r7;
	}
	MR_np_call_localret_ent(bt_array__add_elements_4_0,
		bt_array__resize_5_0_i11);
MR_def_label(bt_array__resize_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bt_array__resize_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(bt_array__resize_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(bt_array__resize_5_0_i15);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(bt_array__resize_5_0_i16);
MR_def_label(bt_array__resize_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_r3 = MR_r7;
MR_def_label(bt_array__resize_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(bt_array__resize_5_0_i17);
	}
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(bt_array__resize_5_0_i18);
MR_def_label(bt_array__resize_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r4 = MR_r5;
MR_def_label(bt_array__resize_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(bt_array__fetch_items_4_0,
		bt_array__resize_5_0_i19);
MR_def_label(bt_array__resize_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (((MR_Integer) MR_sv(2) - (MR_Integer) MR_sv(1)) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(bt_array__add_elements_4_0,
		bt_array__resize_5_0_i20);
MR_def_label(bt_array__resize_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bt_array__insert_items_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module32)
	MR_init_entry1(fn__bt_array__resize_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__resize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bt_array__resize_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module33)
	MR_init_entry1(bt_array__shrink_4_0);
	MR_init_label8(bt_array__shrink_4_0,5,4,3,9,8,7,14,19)
	MR_init_label6(bt_array__shrink_4_0,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__shrink_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i5);
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(bt_array__shrink_4_0_i4);
	}
MR_def_label(bt_array__shrink_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(7) = MR_r1;
MR_def_label(bt_array__shrink_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bt_array.shrink: New bounds are larger than old ones", 52);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(bt_array__shrink_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i7);
	}
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_sv(5) - (MR_Integer) MR_tempr1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,
		bt_array__shrink_4_0_i9);
MR_def_label(bt_array__shrink_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_decr_sp_and_return(8);
	}
MR_def_label(bt_array__shrink_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bt_array.shrink: Can\'t resize to a less-than-empty array", 56);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(bt_array__shrink_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i14);
	}
	MR_r5 = MR_ctfield(1, MR_sv(6), 1);
	MR_r5 = MR_const_mask_field(MR_r5, 0);
	MR_sv(1) = MR_r5;
	MR_GOTO_LAB(bt_array__shrink_4_0_i19);
MR_def_label(bt_array__shrink_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bt_array.shrink: Can\'t shrink an empty array", 44);
	MR_np_call_localret_ent(require__error_1_0,
		bt_array__shrink_4_0_i19);
MR_def_label(bt_array__shrink_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i20);
	}
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(bt_array__shrink_4_0_i21);
MR_def_label(bt_array__shrink_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r3 = MR_sv(4);
MR_def_label(bt_array__shrink_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(bt_array__shrink_4_0_i22);
	}
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(bt_array__shrink_4_0_i23);
MR_def_label(bt_array__shrink_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r4 = MR_sv(5);
MR_def_label(bt_array__shrink_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(bt_array__fetch_items_4_0,
		bt_array__shrink_4_0_i24);
MR_def_label(bt_array__shrink_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (((MR_Integer) MR_sv(3) - (MR_Integer) MR_sv(2)) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(bt_array__add_elements_4_0,
		bt_array__shrink_4_0_i25);
MR_def_label(bt_array__shrink_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(bt_array__insert_items_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module34)
	MR_init_entry1(fn__bt_array__shrink_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__shrink_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bt_array__shrink_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module35)
	MR_init_entry1(bt_array__reverse_into_ra_list_3_0);
	MR_init_label4(bt_array__reverse_into_ra_list_3_0,12,3,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__reverse_into_ra_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(bt_array__reverse_into_ra_list_3_0_i2);
	}
MR_def_label(bt_array__reverse_into_ra_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr6, 1);
	MR_r5 = MR_ctfield(1, MR_tempr6, 0);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(bt_array__reverse_into_ra_list_3_0_i3);
	}
	MR_tempr7 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr7, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(bt_array__reverse_into_ra_list_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr7, 0);
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 0);
	if ((MR_tempr2 != MR_tempr3)) {
		MR_GOTO_LAB(bt_array__reverse_into_ra_list_3_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr4, 0) = MR_r5;
	MR_tfield(1, MR_tempr4, 1) = MR_ctfield(1, MR_tempr7, 1);
	MR_tfield(1, MR_tempr4, 2) = MR_ctfield(1, MR_tempr1, 1);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (((MR_Integer) 1 + (MR_Integer) MR_tempr2) + (MR_Integer) MR_tempr3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 2) = MR_ctfield(1, MR_tempr1, 2);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(bt_array__reverse_into_ra_list_3_0_i10);
	}
MR_def_label(bt_array__reverse_into_ra_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr2;
	}
MR_def_label(bt_array__reverse_into_ra_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(bt_array__reverse_into_ra_list_3_0_i12);
	}
MR_def_label(bt_array__reverse_into_ra_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(bt_array_module36)
	MR_init_entry1(bt_array__from_list_3_0);
	MR_init_label2(bt_array__from_list_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__from_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		bt_array__from_list_3_0_i2);
MR_def_label(bt_array__from_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1) - (MR_Integer) 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(bt_array__reverse_into_ra_list_3_0,
		bt_array__from_list_3_0_i3);
MR_def_label(bt_array__from_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module37)
	MR_init_entry1(fn__bt_array__from_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__from_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bt_array__from_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module38)
	MR_init_entry1(bt_array__reverse_from_ra_list_3_0);
	MR_init_label3(bt_array__reverse_from_ra_list_3_0,5,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__reverse_from_ra_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(bt_array__reverse_from_ra_list_3_0_i2);
	}
	MR_r4 = MR_ctfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(bt_array__reverse_from_ra_list_3_0_i5);
	}
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	MR_GOTO_LAB(bt_array__reverse_from_ra_list_3_0_i4);
MR_def_label(bt_array__reverse_from_ra_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(1, MR_tempr3, 0) / (MR_Integer) 2);
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	}
MR_def_label(bt_array__reverse_from_ra_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(bt_array__reverse_from_ra_list_3_0);
	}
MR_def_label(bt_array__reverse_from_ra_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module39)
	MR_init_entry1(bt_array__to_list_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(bt_array__reverse_from_ra_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module40)
	MR_init_entry1(fn__bt_array__to_list_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(bt_array__reverse_from_ra_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module41)
	MR_init_entry1(fn__bt_array__fetch_items_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__fetch_items_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bt_array__fetch_items_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(bt_array_module42)
	MR_init_entry1(bt_array__bsearch_2_6_0);
	MR_init_label8(bt_array__bsearch_2_6_0,43,4,5,2,6,7,8,10)
	MR_init_label2(bt_array__bsearch_2_6_0,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__bsearch_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(bt_array__bsearch_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = ((MR_Integer) MR_r4 - (MR_Integer) MR_tempr2);
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__bsearch_2_6_0_i1);
	}
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(bt_array__bsearch_2_6_0_i2);
	}
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	}
	MR_np_call_localret_ent(bt_array__lookup_3_0,
		bt_array__bsearch_2_6_0_i4);
MR_def_label(bt_array__bsearch_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bt_array__bsearch_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__bt_array__bsearch_2_6_0_i5);
MR_def_label(bt_array__bsearch_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(bt_array__bsearch_2_6_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(bt_array__bsearch_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		bt_array__bsearch_2_6_0_i6);
MR_def_label(bt_array__bsearch_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(bt_array__lookup_3_0,
		bt_array__bsearch_2_6_0_i7);
MR_def_label(bt_array__bsearch_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(bt_array__bsearch_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__bt_array__bsearch_2_6_0_i8);
MR_def_label(bt_array__bsearch_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bt_array__bsearch_2_6_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bt_array__bsearch_2_6_0_i43);
MR_def_label(bt_array__bsearch_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bt_array__bsearch_2_6_0_i13);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bt_array__bsearch_2_6_0_i43);
MR_def_label(bt_array__bsearch_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(bt_array__bsearch_2_6_0_i43);
MR_def_label(bt_array__bsearch_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module43)
	MR_init_entry1(bt_array__bsearch_4_0);
	MR_init_label1(bt_array__bsearch_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bt_array__bsearch_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(bt_array__bsearch_4_0_i1);
	}
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_np_tailcall_ent(bt_array__bsearch_2_6_0);
	}
MR_def_label(bt_array__bsearch_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module44)
	MR_init_entry1(fn__bt_array__elem_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__bt_array__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(bt_array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module45)
	MR_init_entry1(fn__f_98_116_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_98_116_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(bt_array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module46)
	MR_init_entry1(__Unify___bt_array__bt_array_1_0);
	MR_init_label2(__Unify___bt_array__bt_array_1_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bt_array__bt_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___bt_array__bt_array_1_0_i6);
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
		MR_GOTO_LAB(__Unify___bt_array__bt_array_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___bt_array__bt_array_1_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___bt_array__ra_list_1_0);
	}
MR_def_label(__Unify___bt_array__bt_array_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bt_array__bt_array_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module47)
	MR_init_entry1(__Compare___bt_array__bt_array_1_0);
	MR_init_label8(__Compare___bt_array__bt_array_1_0,3,2,6,7,9,14,15,17)
	MR_init_label1(__Compare___bt_array__bt_array_1_0,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bt_array__bt_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i2);
MR_def_label(__Compare___bt_array__bt_array_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bt_array__bt_array_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i9);
	}
MR_def_label(__Compare___bt_array__bt_array_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i9);
MR_def_label(__Compare___bt_array__bt_array_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___bt_array__bt_array_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i17);
MR_def_label(__Compare___bt_array__bt_array_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i17);
MR_def_label(__Compare___bt_array__bt_array_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___bt_array__bt_array_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bt_array__bt_array_1_0_i49);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___bt_array__ra_list_1_0);
MR_def_label(__Compare___bt_array__bt_array_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module48)
	MR_init_entry1(__Unify___bt_array__ra_list_1_0);
	MR_init_label5(__Unify___bt_array__ra_list_1_0,34,14,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bt_array__ra_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(__Unify___bt_array__ra_list_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_1_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___bt_array__ra_list_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___bt_array__ra_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_1_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___bt_array__ra_list_bintree_1_0,
		__Unify___bt_array__ra_list_1_0_i7);
MR_def_label(__Unify___bt_array__ra_list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Unify___bt_array__ra_list_1_0_i34);
MR_def_label(__Unify___bt_array__ra_list_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module49)
	MR_init_entry1(__Compare___bt_array__ra_list_1_0);
	MR_init_label8(__Compare___bt_array__ra_list_1_0,64,36,7,5,9,12,13,15)
	MR_init_label2(__Compare___bt_array__ra_list_1_0,19,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bt_array__ra_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(__Compare___bt_array__ra_list_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i36);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i7);
	}
MR_def_label(__Compare___bt_array__ra_list_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___bt_array__ra_list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___bt_array__ra_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___bt_array__ra_list_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr2, 2);
	MR_r3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_ctfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i15);
	}
MR_def_label(__Compare___bt_array__ra_list_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i15);
MR_def_label(__Compare___bt_array__ra_list_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___bt_array__ra_list_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i69);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___bt_array__ra_list_bintree_1_0,
		__Compare___bt_array__ra_list_1_0_i19);
MR_def_label(__Compare___bt_array__ra_list_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Compare___bt_array__ra_list_1_0_i64);
MR_def_label(__Compare___bt_array__ra_list_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(bt_array_module50)
	MR_init_entry1(__Unify___bt_array__ra_list_bintree_1_0);
	MR_init_label6(__Unify___bt_array__ra_list_bintree_1_0,43,20,5,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bt_array__ra_list_bintree_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(__Unify___bt_array__ra_list_bintree_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(5) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___bt_array__ra_list_bintree_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___bt_array__ra_list_bintree_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___bt_array__ra_list_bintree_1_0_i10);
MR_def_label(__Unify___bt_array__ra_list_bintree_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Unify___bt_array__ra_list_bintree_1_0,
		__Unify___bt_array__ra_list_bintree_1_0_i12);
MR_def_label(__Unify___bt_array__ra_list_bintree_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Unify___bt_array__ra_list_bintree_1_0_i43);
MR_def_label(__Unify___bt_array__ra_list_bintree_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(bt_array_module51)
	MR_init_entry1(__Compare___bt_array__ra_list_bintree_1_0);
	MR_init_label8(__Compare___bt_array__ra_list_bintree_1_0,48,3,2,7,5,10,12,16)
	MR_init_label1(__Compare___bt_array__ra_list_bintree_1_0,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bt_array__ra_list_bintree_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i2);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(5) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
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
		__Compare___bt_array__ra_list_bintree_1_0_i12);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i54);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(__Compare___bt_array__ra_list_bintree_1_0,
		__Compare___bt_array__ra_list_bintree_1_0_i16);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i54);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Compare___bt_array__ra_list_bintree_1_0_i48);
MR_def_label(__Compare___bt_array__ra_list_bintree_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module52)
	MR_init_entry1(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0,5,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_r4 = MR_ctfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0_i5);
	}
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(1, MR_tempr3, 0) / (MR_Integer) 2);
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	}
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0);
	}
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_102_114_111_109_95_114_97_95_108_105_115_116_95_99_111_117_110_116_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module53)
	MR_init_entry1(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0);
	MR_init_label3(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,18,34,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0_i18);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0_i34);
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_tempr1);
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	MR_np_localtailcall(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0);
	}
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0);
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_100_114_111_112_95_95_91_49_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module54)
	MR_init_entry1(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0);
	MR_init_label3(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0,5,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0_i10);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0_i5);
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	MR_np_localtailcall(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0);
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(1, MR_tempr3, 0) / (MR_Integer) 2);
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localtailcall(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0);
	}
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_98_116_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_97_95_108_105_115_116_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bt_array_module55)
	MR_init_entry1(fn__f_98_116_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_98_116_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bt_array_maybe_bunch_0(void)
{
	bt_array_module0();
	bt_array_module1();
	bt_array_module2();
	bt_array_module3();
	bt_array_module4();
	bt_array_module5();
	bt_array_module6();
	bt_array_module7();
	bt_array_module8();
	bt_array_module9();
	bt_array_module10();
	bt_array_module11();
	bt_array_module12();
	bt_array_module13();
	bt_array_module14();
	bt_array_module15();
	bt_array_module16();
	bt_array_module17();
	bt_array_module18();
	bt_array_module19();
	bt_array_module20();
	bt_array_module21();
	bt_array_module22();
	bt_array_module23();
	bt_array_module24();
	bt_array_module25();
	bt_array_module26();
	bt_array_module27();
	bt_array_module28();
	bt_array_module29();
	bt_array_module30();
	bt_array_module31();
	bt_array_module32();
	bt_array_module33();
	bt_array_module34();
	bt_array_module35();
	bt_array_module36();
	bt_array_module37();
	bt_array_module38();
	bt_array_module39();
}

static void mercury__bt_array_maybe_bunch_1(void)
{
	bt_array_module40();
	bt_array_module41();
	bt_array_module42();
	bt_array_module43();
	bt_array_module44();
	bt_array_module45();
	bt_array_module46();
	bt_array_module47();
	bt_array_module48();
	bt_array_module49();
	bt_array_module50();
	bt_array_module51();
	bt_array_module52();
	bt_array_module53();
	bt_array_module54();
	bt_array_module55();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bt_array__init(void);
void mercury__bt_array__init_type_tables(void);
void mercury__bt_array__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bt_array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bt_array__init_complexity_procs(void);
#endif

void mercury__bt_array__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bt_array_maybe_bunch_0();
	mercury__bt_array_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bt_array__type_ctor_info_ra_list_bintree_1,
		bt_array__ra_list_bintree_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bt_array__type_ctor_info_ra_list_1,
		bt_array__ra_list_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bt_array__type_ctor_info_bt_array_1,
		bt_array__bt_array_1_0);
	mercury__bt_array__init_debugger();
}

void mercury__bt_array__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bt_array__type_ctor_info_ra_list_bintree_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bt_array__type_ctor_info_ra_list_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bt_array__type_ctor_info_bt_array_1);
	}
}


void mercury__bt_array__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bt_array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bt_array);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bt_array__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
