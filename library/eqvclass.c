/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__eqvclass__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "io.int2"
#include "io.mh"

#line 27 "eqvclass.c"
#line 142 "io.int2"
#include "string.mh"

#line 31 "eqvclass.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "eqvclass.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "eqvclass.c"
#line 30 "array.int2"
#include "array.mh"

#line 43 "eqvclass.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "eqvclass.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "eqvclass.c"
#line 148 "io.opt"
#include "dir.mh"

#line 55 "eqvclass.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 59 "eqvclass.c"
#line 4 "char.opt"
#include "char.mh"

#line 63 "eqvclass.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "eqvclass.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "eqvclass.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "eqvclass.c"
#line 23 "store.opt"
#include "store.mh"

#line 79 "eqvclass.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "eqvclass.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 87 "eqvclass.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "eqvclass.c"
#line 3 "list.opt"
#include "list.mh"

#line 95 "eqvclass.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 99 "eqvclass.c"
#line 100 "eqvclass.c"
#include "eqvclass.mh"

#line 103 "eqvclass.c"
#line 104 "eqvclass.c"
#ifndef EQVCLASS_DECL_GUARD
#define EQVCLASS_DECL_GUARD

#line 108 "eqvclass.c"
#line 109 "eqvclass.c"

#endif
#line 112 "eqvclass.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_eqvclass__type_ctor_info_partition_id_0,
	mercury_data_eqvclass__type_ctor_info_eqvclass_1;
MR_decl_label2(eqvclass__add_element_4_0, 2,3)
MR_decl_label8(eqvclass__add_equivalence_4_0, 2,3,5,6,7,8,9,4)
MR_decl_label4(eqvclass__add_equivalence_4_0, 11,12,13,14)
MR_decl_label3(eqvclass__change_partition_4_0, 11,4,3)
MR_decl_label4(eqvclass__divide_equivalence_classes_2_9_0, 16,5,6,7)
MR_decl_label8(eqvclass__divide_equivalence_classes_3_11_0, 2,4,6,7,8,9,10,11)
MR_decl_label8(eqvclass__divide_equivalence_classes_3_11_0, 12,3,15,16,17,18,19,20)
MR_decl_label2(eqvclass__divide_equivalence_classes_3_11_0, 21,22)
MR_decl_label4(eqvclass__ensure_corresponding_equivalences_4_0, 28,3,9,8)
MR_decl_label3(eqvclass__ensure_element_3_0, 3,2,5)
MR_decl_label2(eqvclass__ensure_element_partition_id_4_0, 3,2)
MR_decl_label8(eqvclass__ensure_equivalence_4_0, 3,6,8,5,11,12,13,2)
MR_decl_label8(eqvclass__ensure_equivalence_4_0, 17,19,20,21,22,16,23,24)
MR_decl_label3(eqvclass__ensure_equivalence_4_0, 25,26,27)
MR_decl_label3(eqvclass__make_partition_4_0, 11,4,3)
MR_decl_label3(eqvclass__new_element_3_0, 3,2,6)
MR_decl_label8(eqvclass__new_equivalence_4_0, 3,6,8,5,12,13,14,2)
MR_decl_label8(eqvclass__new_equivalence_4_0, 18,20,21,22,23,17,24,25)
MR_decl_label3(eqvclass__new_equivalence_4_0, 26,27,28)
MR_decl_label1(eqvclass__partition_list_2_0, 2)
MR_decl_label5(eqvclass__partition_list_to_eqvclass_2_0, 4,7,8,3,18)
MR_decl_label5(eqvclass__partition_set_2_0, 2,3,4,5,7)
MR_decl_label5(eqvclass__partitions_3_0, 5,4,8,9,3)
MR_decl_label3(eqvclass__same_eqvclass_3_0, 2,4,1)
MR_decl_label3(eqvclass__same_eqvclass_list_2_0, 4,2,1)
MR_decl_label4(eqvclass__same_eqvclass_list_2_3_0, 21,4,2,1)
MR_decl_label3(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0, 11,4,3)
MR_decl_label1(fn__eqvclass__divide_equivalence_classes_2_0, 2)
MR_decl_label3(fn__eqvclass__ensure_element_2_0, 3,2,5)
MR_decl_label3(fn__eqvclass__get_equivalent_elements_2_0, 3,5,2)
MR_decl_label1(fn__eqvclass__get_minimum_element_2_0, 2)
MR_decl_label3(fn__eqvclass__new_element_2_0, 3,2,6)
MR_decl_label1(fn__eqvclass__partition_list_1_0, 2)
MR_decl_label4(fn__eqvclass__remove_equivalent_elements_2_0, 3,5,6,2)
MR_decl_label3(__Unify___eqvclass__eqvclass_1_0, 4,8,1)
MR_decl_label7(__Compare___eqvclass__eqvclass_1_0, 3,2,6,7,9,13,39)
MR_decl_label2(__Compare___eqvclass__partition_id_0_0, 2,3)
MR_def_extern_entry(eqvclass__init_1_0)
MR_def_extern_entry(fn__eqvclass__init_0_0)
MR_def_extern_entry(eqvclass__is_member_2_0)
MR_def_extern_entry(eqvclass__partition_id_3_0)
MR_def_extern_entry(eqvclass__add_element_4_0)
MR_def_extern_entry(eqvclass__ensure_element_partition_id_4_0)
MR_def_extern_entry(eqvclass__ensure_element_3_0)
MR_def_extern_entry(fn__eqvclass__ensure_element_2_0)
MR_def_extern_entry(eqvclass__new_element_3_0)
MR_def_extern_entry(fn__eqvclass__new_element_2_0)
MR_decl_static(eqvclass__change_partition_4_0)
MR_decl_static(eqvclass__add_equivalence_4_0)
MR_def_extern_entry(eqvclass__ensure_equivalence_4_0)
MR_def_extern_entry(fn__eqvclass__ensure_equivalence_3_0)
MR_def_extern_entry(eqvclass__ensure_corresponding_equivalences_4_0)
MR_def_extern_entry(fn__eqvclass__ensure_corresponding_equivalences_3_0)
MR_def_extern_entry(eqvclass__new_equivalence_4_0)
MR_def_extern_entry(fn__eqvclass__new_equivalence_3_0)
MR_def_extern_entry(eqvclass__same_eqvclass_3_0)
MR_decl_static(eqvclass__same_eqvclass_list_2_3_0)
MR_def_extern_entry(eqvclass__same_eqvclass_list_2_0)
MR_def_extern_entry(eqvclass__partitions_3_0)
MR_def_extern_entry(eqvclass__partition_ids_2_0)
MR_def_extern_entry(eqvclass__partition_set_2_0)
MR_def_extern_entry(fn__eqvclass__partition_set_1_0)
MR_def_extern_entry(eqvclass__partition_list_2_0)
MR_def_extern_entry(fn__eqvclass__partition_list_1_0)
MR_decl_static(eqvclass__make_partition_4_0)
MR_def_extern_entry(eqvclass__partition_list_to_eqvclass_2_0)
MR_def_extern_entry(eqvclass__partition_set_to_eqvclass_2_0)
MR_def_extern_entry(fn__eqvclass__partition_set_to_eqvclass_1_0)
MR_def_extern_entry(fn__eqvclass__partition_list_to_eqvclass_1_0)
MR_def_extern_entry(fn__eqvclass__get_equivalent_elements_2_0)
MR_def_extern_entry(fn__eqvclass__get_minimum_element_2_0)
MR_def_extern_entry(fn__eqvclass__remove_equivalent_elements_2_0)
MR_def_extern_entry(fn__eqvclass__divide_equivalence_classes_2_0)
MR_def_extern_entry(eqvclass__divide_equivalence_classes_2_9_0)
MR_def_extern_entry(eqvclass__divide_equivalence_classes_3_11_0)
MR_def_extern_entry(__Unify___eqvclass__eqvclass_1_0)
MR_def_extern_entry(__Compare___eqvclass__eqvclass_1_0)
MR_def_extern_entry(__Unify___eqvclass__partition_id_0_0)
MR_def_extern_entry(__Compare___eqvclass__partition_id_0_0)
MR_decl_static(fn__f_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
{
2,
1,
2
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_LIST_CTOR_ADDR,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
1,
MR_INT_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
2,
17,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__eqvclass__divide_equivalence_classes_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__eqvclass__divide_equivalence_classes_2_0_1,
MR_COMMON(5,0)
},
11,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(1,0),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0),
MR_CTOR0_ADDR(counter, counter),
MR_CTOR0_ADDR(counter, counter),
MR_COMMON(3,0),
MR_COMMON(3,0),
MR_COMMON(4,0),
MR_COMMON(4,0)
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_eqvclass__type_ctor_info_partition_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___eqvclass__partition_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___eqvclass__partition_id_0_0)),
	"eqvclass",
	"partition_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_list__pti_list_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_eqvclass__field_types_eqvclass_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_list__pti_list_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_eqvclass__field_names_eqvclass_1_0[] = {
	"next_id",
	"partitions",
	"keys"
};

static const MR_DuFunctorDesc mercury_data_eqvclass__du_functor_desc_eqvclass_1_0 = {
	"eqvclass",
	3,
	6,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_eqvclass__field_types_eqvclass_1_0,
	mercury_data_eqvclass__field_names_eqvclass_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_eqvclass__du_stag_ordered_eqvclass_1_0[] = {
	&mercury_data_eqvclass__du_functor_desc_eqvclass_1_0

};

const MR_DuPtagLayout mercury_data_eqvclass__du_ptag_ordered_eqvclass_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_eqvclass__du_stag_ordered_eqvclass_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_eqvclass__du_name_ordered_eqvclass_1[] = {
	&mercury_data_eqvclass__du_functor_desc_eqvclass_1_0
};

const MR_Integer mercury_data_eqvclass__functor_number_map_eqvclass_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_eqvclass__type_ctor_info_eqvclass_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___eqvclass__eqvclass_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___eqvclass__eqvclass_1_0)),
	"eqvclass",
	"eqvclass",
	{ (void *)mercury_data_eqvclass__du_name_ordered_eqvclass_1 },
	{ (void *)mercury_data_eqvclass__du_ptag_ordered_eqvclass_1 },
	1,
	4,
	mercury_data_eqvclass__functor_number_map_eqvclass_1
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__eqvclass__divide_equivalence_classes_2_0_1 = {
{
MR_PREDICATE,
"eqvclass",
"eqvclass",
"divide_equivalence_classes_2",
9,
0
},
"eqvclass",
"eqvclass.m",
504,
"d1;c5;"
};


MR_BEGIN_MODULE(eqvclass_module0)
	MR_init_entry1(eqvclass__init_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module1)
	MR_init_entry1(fn__eqvclass__init_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(tree234__search_3_0);

MR_BEGIN_MODULE(eqvclass_module2)
	MR_init_entry1(eqvclass__is_member_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__is_member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module3)
	MR_init_entry1(eqvclass__partition_id_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(eqvclass_module4)
	MR_init_entry1(eqvclass__add_element_4_0);
	MR_init_label2(eqvclass__add_element_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__add_element_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__add_element_4_0_i2);
MR_def_label(eqvclass__add_element_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__add_element_4_0_i3);
MR_def_label(eqvclass__add_element_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module5)
	MR_init_entry1(eqvclass__ensure_element_partition_id_4_0);
	MR_init_label2(eqvclass__ensure_element_partition_id_4_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__ensure_element_partition_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__ensure_element_partition_id_4_0_i3);
MR_def_label(eqvclass__ensure_element_partition_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__ensure_element_partition_id_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__ensure_element_partition_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(eqvclass__add_element_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module6)
	MR_init_entry1(eqvclass__ensure_element_3_0);
	MR_init_label3(eqvclass__ensure_element_3_0,3,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__ensure_element_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__ensure_element_3_0_i3);
MR_def_label(eqvclass__ensure_element_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__ensure_element_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__ensure_element_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(eqvclass__add_element_4_0,
		eqvclass__ensure_element_3_0_i5);
MR_def_label(eqvclass__ensure_element_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module7)
	MR_init_entry1(fn__eqvclass__ensure_element_2_0);
	MR_init_label3(fn__eqvclass__ensure_element_2_0,3,2,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__ensure_element_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__eqvclass__ensure_element_2_0_i3);
MR_def_label(fn__eqvclass__ensure_element_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__ensure_element_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__eqvclass__ensure_element_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(eqvclass__add_element_4_0,
		fn__eqvclass__ensure_element_2_0_i5);
MR_def_label(fn__eqvclass__ensure_element_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(eqvclass_module8)
	MR_init_entry1(eqvclass__new_element_3_0);
	MR_init_label3(eqvclass__new_element_3_0,3,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__new_element_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__new_element_3_0_i3);
MR_def_label(eqvclass__new_element_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__new_element_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("new element is already in equivalence class", 43);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(eqvclass__new_element_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(eqvclass__add_element_4_0,
		eqvclass__new_element_3_0_i6);
MR_def_label(eqvclass__new_element_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module9)
	MR_init_entry1(fn__eqvclass__new_element_2_0);
	MR_init_label3(fn__eqvclass__new_element_2_0,3,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__new_element_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__eqvclass__new_element_2_0_i3);
MR_def_label(fn__eqvclass__new_element_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__new_element_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("new element is already in equivalence class", 43);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__eqvclass__new_element_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(eqvclass__add_element_4_0,
		fn__eqvclass__new_element_2_0_i6);
MR_def_label(fn__eqvclass__new_element_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__set_4_0);

MR_BEGIN_MODULE(eqvclass_module10)
	MR_init_entry1(eqvclass__change_partition_4_0);
	MR_init_label3(eqvclass__change_partition_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(eqvclass__change_partition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(eqvclass__change_partition_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__change_partition_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		eqvclass__change_partition_4_0_i4);
MR_def_label(eqvclass__change_partition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(eqvclass__change_partition_4_0_i11);
MR_def_label(eqvclass__change_partition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(tree234__delete_2_4_0);
MR_decl_entry(list__merge_and_remove_dups_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(eqvclass_module11)
	MR_init_entry1(eqvclass__add_equivalence_4_0);
	MR_init_label8(eqvclass__add_equivalence_4_0,2,3,5,6,7,8,9,4)
	MR_init_label4(eqvclass__add_equivalence_4_0,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(eqvclass__add_equivalence_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__add_equivalence_4_0_i2);
MR_def_label(eqvclass__add_equivalence_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__add_equivalence_4_0_i3);
MR_def_label(eqvclass__add_equivalence_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		eqvclass__add_equivalence_4_0_i5);
MR_def_label(eqvclass__add_equivalence_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		eqvclass__add_equivalence_4_0_i6);
MR_def_label(eqvclass__add_equivalence_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(eqvclass__add_equivalence_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		eqvclass__add_equivalence_4_0_i7);
MR_def_label(eqvclass__add_equivalence_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		eqvclass__add_equivalence_4_0_i8);
MR_def_label(eqvclass__add_equivalence_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__set_4_0,
		eqvclass__add_equivalence_4_0_i9);
MR_def_label(eqvclass__add_equivalence_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(eqvclass__change_partition_4_0,
		eqvclass__add_equivalence_4_0_i14);
MR_def_label(eqvclass__add_equivalence_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		eqvclass__add_equivalence_4_0_i11);
MR_def_label(eqvclass__add_equivalence_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		eqvclass__add_equivalence_4_0_i12);
MR_def_label(eqvclass__add_equivalence_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__add_equivalence_4_0_i13);
MR_def_label(eqvclass__add_equivalence_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(eqvclass__change_partition_4_0,
		eqvclass__add_equivalence_4_0_i14);
MR_def_label(eqvclass__add_equivalence_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__insert_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(eqvclass_module12)
	MR_init_entry1(eqvclass__ensure_equivalence_4_0);
	MR_init_label8(eqvclass__ensure_equivalence_4_0,3,6,8,5,11,12,13,2)
	MR_init_label8(eqvclass__ensure_equivalence_4_0,17,19,20,21,22,16,23,24)
	MR_init_label3(eqvclass__ensure_equivalence_4_0,25,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__ensure_equivalence_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__ensure_equivalence_4_0_i3);
MR_def_label(eqvclass__ensure_equivalence_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__ensure_equivalence_4_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__ensure_equivalence_4_0_i6);
MR_def_label(eqvclass__ensure_equivalence_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__ensure_equivalence_4_0_i5);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(eqvclass__ensure_equivalence_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(eqvclass__ensure_equivalence_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(eqvclass__add_equivalence_4_0);
MR_def_label(eqvclass__ensure_equivalence_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(5) = MR_ctfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__ensure_equivalence_4_0_i11);
MR_def_label(eqvclass__ensure_equivalence_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_ordlist__insert_3_0,
		eqvclass__ensure_equivalence_4_0_i12);
MR_def_label(eqvclass__ensure_equivalence_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__ensure_equivalence_4_0_i13);
MR_def_label(eqvclass__ensure_equivalence_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i22);
MR_def_label(eqvclass__ensure_equivalence_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__ensure_equivalence_4_0_i17);
MR_def_label(eqvclass__ensure_equivalence_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__ensure_equivalence_4_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__ensure_equivalence_4_0_i19);
MR_def_label(eqvclass__ensure_equivalence_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_ordlist__insert_3_0,
		eqvclass__ensure_equivalence_4_0_i20);
MR_def_label(eqvclass__ensure_equivalence_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__ensure_equivalence_4_0_i21);
MR_def_label(eqvclass__ensure_equivalence_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i22);
MR_def_label(eqvclass__ensure_equivalence_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(eqvclass__ensure_equivalence_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(counter__allocate_3_0,
		eqvclass__ensure_equivalence_4_0_i23);
MR_def_label(eqvclass__ensure_equivalence_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i24);
MR_def_label(eqvclass__ensure_equivalence_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i25);
MR_def_label(eqvclass__ensure_equivalence_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		eqvclass__ensure_equivalence_4_0_i26);
MR_def_label(eqvclass__ensure_equivalence_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__ensure_equivalence_4_0_i27);
MR_def_label(eqvclass__ensure_equivalence_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module13)
	MR_init_entry1(fn__eqvclass__ensure_equivalence_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__ensure_equivalence_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__ensure_equivalence_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module14)
	MR_init_entry1(eqvclass__ensure_corresponding_equivalences_4_0);
	MR_init_label4(eqvclass__ensure_corresponding_equivalences_4_0,28,3,9,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__ensure_corresponding_equivalences_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(eqvclass__ensure_corresponding_equivalences_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__ensure_corresponding_equivalences_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(eqvclass__ensure_corresponding_equivalences_4_0_i8);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__ensure_corresponding_equivalences_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(eqvclass__ensure_corresponding_equivalences_4_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tempr4;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(eqvclass__ensure_equivalence_4_0,
		eqvclass__ensure_corresponding_equivalences_4_0_i9);
MR_def_label(eqvclass__ensure_corresponding_equivalences_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(eqvclass__ensure_corresponding_equivalences_4_0_i28);
MR_def_label(eqvclass__ensure_corresponding_equivalences_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("eqvclass.ensure_corresponding_equivalences: list mismatch", 57);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module15)
	MR_init_entry1(fn__eqvclass__ensure_corresponding_equivalences_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__ensure_corresponding_equivalences_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__ensure_corresponding_equivalences_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module16)
	MR_init_entry1(eqvclass__new_equivalence_4_0);
	MR_init_label8(eqvclass__new_equivalence_4_0,3,6,8,5,12,13,14,2)
	MR_init_label8(eqvclass__new_equivalence_4_0,18,20,21,22,23,17,24,25)
	MR_init_label3(eqvclass__new_equivalence_4_0,26,27,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__new_equivalence_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__new_equivalence_4_0_i3);
MR_def_label(eqvclass__new_equivalence_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__new_equivalence_4_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__new_equivalence_4_0_i6);
MR_def_label(eqvclass__new_equivalence_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__new_equivalence_4_0_i5);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(eqvclass__new_equivalence_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("two elements are already equivalent", 35);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(eqvclass__new_equivalence_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(eqvclass__add_equivalence_4_0);
MR_def_label(eqvclass__new_equivalence_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(5) = MR_ctfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__new_equivalence_4_0_i12);
MR_def_label(eqvclass__new_equivalence_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_ordlist__insert_3_0,
		eqvclass__new_equivalence_4_0_i13);
MR_def_label(eqvclass__new_equivalence_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__new_equivalence_4_0_i14);
MR_def_label(eqvclass__new_equivalence_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i23);
MR_def_label(eqvclass__new_equivalence_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__new_equivalence_4_0_i18);
MR_def_label(eqvclass__new_equivalence_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__new_equivalence_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__new_equivalence_4_0_i20);
MR_def_label(eqvclass__new_equivalence_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_ordlist__insert_3_0,
		eqvclass__new_equivalence_4_0_i21);
MR_def_label(eqvclass__new_equivalence_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__new_equivalence_4_0_i22);
MR_def_label(eqvclass__new_equivalence_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i23);
MR_def_label(eqvclass__new_equivalence_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(eqvclass__new_equivalence_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(counter__allocate_3_0,
		eqvclass__new_equivalence_4_0_i24);
MR_def_label(eqvclass__new_equivalence_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i25);
MR_def_label(eqvclass__new_equivalence_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i26);
MR_def_label(eqvclass__new_equivalence_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		eqvclass__new_equivalence_4_0_i27);
MR_def_label(eqvclass__new_equivalence_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__new_equivalence_4_0_i28);
MR_def_label(eqvclass__new_equivalence_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module17)
	MR_init_entry1(fn__eqvclass__new_equivalence_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__new_equivalence_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__new_equivalence_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module18)
	MR_init_entry1(eqvclass__same_eqvclass_3_0);
	MR_init_label3(eqvclass__same_eqvclass_3_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__same_eqvclass_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_ctfield(0, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_3_0_i2);
MR_def_label(eqvclass__same_eqvclass_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_3_0_i1);
	}
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_3_0_i4);
MR_def_label(eqvclass__same_eqvclass_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_3_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__same_eqvclass_3_0,1)
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


MR_BEGIN_MODULE(eqvclass_module19)
	MR_init_entry1(eqvclass__same_eqvclass_list_2_3_0);
	MR_init_label4(eqvclass__same_eqvclass_list_2_3_0,21,4,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(eqvclass__same_eqvclass_list_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(eqvclass__same_eqvclass_list_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_list_2_3_0_i4);
MR_def_label(eqvclass__same_eqvclass_list_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_3_0_i1);
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_3_0_i21);
MR_def_label(eqvclass__same_eqvclass_list_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(eqvclass__same_eqvclass_list_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module20)
	MR_init_entry1(eqvclass__same_eqvclass_list_2_0);
	MR_init_label3(eqvclass__same_eqvclass_list_2_0,4,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__same_eqvclass_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(0, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_list_2_0_i4);
MR_def_label(eqvclass__same_eqvclass_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(eqvclass__same_eqvclass_list_2_3_0);
MR_def_label(eqvclass__same_eqvclass_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(eqvclass__same_eqvclass_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(eqvclass_module21)
	MR_init_entry1(eqvclass__partitions_3_0);
	MR_init_label5(eqvclass__partitions_3_0,5,4,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partitions_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(eqvclass__partitions_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__partitions_3_0_i5);
MR_def_label(eqvclass__partitions_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__partitions_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(eqvclass__partitions_3_0,
		eqvclass__partitions_3_0_i9);
MR_def_label(eqvclass__partitions_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("partition id not known to equivalence class", 43);
	MR_np_call_localret_ent(require__error_1_0,
		eqvclass__partitions_3_0_i8);
MR_def_label(eqvclass__partitions_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(eqvclass__partitions_3_0,
		eqvclass__partitions_3_0_i9);
MR_def_label(eqvclass__partitions_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(eqvclass__partitions_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);

MR_BEGIN_MODULE(eqvclass_module22)
	MR_init_entry1(eqvclass__partition_ids_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_ids_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__merge_sort_2_3_0);
MR_decl_entry(list__remove_adjacent_dups_2_3_0);

MR_BEGIN_MODULE(eqvclass_module23)
	MR_init_entry1(eqvclass__partition_set_2_0);
	MR_init_label5(eqvclass__partition_set_2_0,2,3,4,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_sv(1), 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		eqvclass__partition_set_2_0_i2);
MR_def_label(eqvclass__partition_set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(eqvclass__partitions_3_0,
		eqvclass__partition_set_2_0_i3);
MR_def_label(eqvclass__partition_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		eqvclass__partition_set_2_0_i4);
MR_def_label(eqvclass__partition_set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		eqvclass__partition_set_2_0_i5);
MR_def_label(eqvclass__partition_set_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(eqvclass__partition_set_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__partition_set_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module24)
	MR_init_entry1(fn__eqvclass__partition_set_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__partition_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__partition_set_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module25)
	MR_init_entry1(eqvclass__partition_list_2_0);
	MR_init_label1(eqvclass__partition_list_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_sv(1), 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		eqvclass__partition_list_2_0_i2);
MR_def_label(eqvclass__partition_list_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(eqvclass__partitions_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module26)
	MR_init_entry1(fn__eqvclass__partition_list_1_0);
	MR_init_label1(fn__eqvclass__partition_list_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__partition_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_sv(1), 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		fn__eqvclass__partition_list_1_0_i2);
MR_def_label(fn__eqvclass__partition_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(eqvclass__partitions_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module27)
	MR_init_entry1(eqvclass__make_partition_4_0);
	MR_init_label3(eqvclass__make_partition_4_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(eqvclass__make_partition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(eqvclass__make_partition_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__make_partition_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__make_partition_4_0_i4);
MR_def_label(eqvclass__make_partition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(eqvclass__make_partition_4_0_i11);
MR_def_label(eqvclass__make_partition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module28)
	MR_init_entry1(eqvclass__partition_list_to_eqvclass_2_0);
	MR_init_label5(eqvclass__partition_list_to_eqvclass_2_0,4,7,8,3,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_list_to_eqvclass_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__partition_list_to_eqvclass_2_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(eqvclass__partition_list_to_eqvclass_2_0,
		eqvclass__partition_list_to_eqvclass_2_0_i4);
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(eqvclass__partition_list_to_eqvclass_2_0_i18);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(eqvclass__make_partition_4_0,
		eqvclass__partition_list_to_eqvclass_2_0_i7);
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__partition_list_to_eqvclass_2_0_i8);
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module29)
	MR_init_entry1(eqvclass__partition_set_to_eqvclass_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_set_to_eqvclass_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__partition_list_to_eqvclass_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module30)
	MR_init_entry1(fn__eqvclass__partition_set_to_eqvclass_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__partition_set_to_eqvclass_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__partition_list_to_eqvclass_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module31)
	MR_init_entry1(fn__eqvclass__partition_list_to_eqvclass_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__partition_list_to_eqvclass_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(eqvclass__partition_list_to_eqvclass_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module32)
	MR_init_entry1(fn__eqvclass__get_equivalent_elements_2_0);
	MR_init_label3(fn__eqvclass__get_equivalent_elements_2_0,3,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__get_equivalent_elements_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__eqvclass__get_equivalent_elements_2_0_i3);
MR_def_label(fn__eqvclass__get_equivalent_elements_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__get_equivalent_elements_2_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		fn__eqvclass__get_equivalent_elements_2_0_i5);
MR_def_label(fn__eqvclass__get_equivalent_elements_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__get_equivalent_elements_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__eqvclass__get_equivalent_elements_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_head_1_0);

MR_BEGIN_MODULE(eqvclass_module33)
	MR_init_entry1(fn__eqvclass__get_minimum_element_2_0);
	MR_init_label1(fn__eqvclass__get_minimum_element_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__get_minimum_element_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__eqvclass__get_equivalent_elements_2_0,
		fn__eqvclass__get_minimum_element_2_0_i2);
MR_def_label(fn__eqvclass__get_minimum_element_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__det_head_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);
MR_decl_entry(map__delete_list_3_0);

MR_BEGIN_MODULE(eqvclass_module34)
	MR_init_entry1(fn__eqvclass__remove_equivalent_elements_2_0);
	MR_init_label4(fn__eqvclass__remove_equivalent_elements_2_0,3,5,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__remove_equivalent_elements_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__eqvclass__remove_equivalent_elements_2_0_i3);
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__remove_equivalent_elements_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		fn__eqvclass__remove_equivalent_elements_2_0_i5);
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__delete_list_3_0,
		fn__eqvclass__remove_equivalent_elements_2_0_i6);
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__foldl3_8_0);

MR_BEGIN_MODULE(eqvclass_module35)
	MR_init_entry1(fn__eqvclass__divide_equivalence_classes_2_0);
	MR_init_label1(fn__eqvclass__divide_equivalence_classes_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__divide_equivalence_classes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(eqvclass__divide_equivalence_classes_2_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr4, 1) = MR_r1;
	MR_tfield(0, MR_tempr4, 2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r7 = MR_ctfield(0, MR_tempr5, 1);
	MR_r8 = MR_ctfield(0, MR_tempr5, 0);
	MR_r9 = MR_r7;
	MR_r10 = MR_ctfield(0, MR_tempr5, 2);
	}
	MR_np_call_localret_ent(tree234__foldl3_8_0,
		fn__eqvclass__divide_equivalence_classes_2_0_i2);
MR_def_label(fn__eqvclass__divide_equivalence_classes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(eqvclass_module36)
	MR_init_entry1(eqvclass__divide_equivalence_classes_2_9_0);
	MR_init_label4(eqvclass__divide_equivalence_classes_2_9_0,16,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__divide_equivalence_classes_2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(eqvclass__divide_equivalence_classes_2_9_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("divide_equivalence_classes_2: empty partition", 45);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(eqvclass__divide_equivalence_classes_2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__eqvclass__divide_equivalence_classes_2_9_0_i5);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__divide_equivalence_classes_2_9_0_i6);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_np_call_localret_ent(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,
		eqvclass__divide_equivalence_classes_2_9_0_i7);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__difference_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(set__delete_3_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(eqvclass_module37)
	MR_init_entry1(eqvclass__divide_equivalence_classes_3_11_0);
	MR_init_label8(eqvclass__divide_equivalence_classes_3_11_0,2,4,6,7,8,9,10,11)
	MR_init_label8(eqvclass__divide_equivalence_classes_3_11_0,12,3,15,16,17,18,19,20)
	MR_init_label2(eqvclass__divide_equivalence_classes_3_11_0,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__divide_equivalence_classes_3_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(eqvclass__divide_equivalence_classes_3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__eqvclass__divide_equivalence_classes_3_11_0_i2);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i4);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__divide_equivalence_classes_3_11_0_i3);
	}
	if ((MR_r2 != MR_sv(1))) {
		MR_GOTO_LAB(eqvclass__divide_equivalence_classes_3_11_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_decr_sp_and_return(10);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(3) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i7);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(set_ordlist__difference_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i8);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i9);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i10);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_ordlist__insert_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i11);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i12);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i22);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(counter__allocate_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i15);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i16);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i17);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__delete_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i18);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i19);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		eqvclass__divide_equivalence_classes_3_11_0_i20);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i21);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i22);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(eqvclass_module38)
	MR_init_entry1(__Unify___eqvclass__eqvclass_1_0);
	MR_init_label3(__Unify___eqvclass__eqvclass_1_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___eqvclass__eqvclass_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___eqvclass__eqvclass_1_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___eqvclass__eqvclass_1_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr5, 1) = MR_sv(3);
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	MR_r4 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___eqvclass__eqvclass_1_0_i4);
MR_def_label(__Unify___eqvclass__eqvclass_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___eqvclass__eqvclass_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___eqvclass__eqvclass_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___eqvclass__eqvclass_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(eqvclass_module39)
	MR_init_entry1(__Compare___eqvclass__eqvclass_1_0);
	MR_init_label7(__Compare___eqvclass__eqvclass_1_0,3,2,6,7,9,13,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___eqvclass__eqvclass_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i2);
MR_def_label(__Compare___eqvclass__eqvclass_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___eqvclass__eqvclass_1_0,2)
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
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i9);
	}
MR_def_label(__Compare___eqvclass__eqvclass_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i9);
MR_def_label(__Compare___eqvclass__eqvclass_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___eqvclass__eqvclass_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i39);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___eqvclass__eqvclass_1_0_i13);
MR_def_label(__Compare___eqvclass__eqvclass_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i39);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___eqvclass__eqvclass_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module40)
	MR_init_entry1(__Unify___eqvclass__partition_id_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___eqvclass__partition_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module41)
	MR_init_entry1(__Compare___eqvclass__partition_id_0_0);
	MR_init_label2(__Compare___eqvclass__partition_id_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___eqvclass__partition_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___eqvclass__partition_id_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___eqvclass__partition_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___eqvclass__partition_id_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___eqvclass__partition_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module42)
	MR_init_entry1(fn__f_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module43)
	MR_init_entry1(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0);
	MR_init_label3(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r5, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	MR_np_call_localret_ent(eqvclass__divide_equivalence_classes_3_11_0,
		f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0_i4);
MR_def_label(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r9 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0_i11);
MR_def_label(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__eqvclass_maybe_bunch_0(void)
{
	eqvclass_module0();
	eqvclass_module1();
	eqvclass_module2();
	eqvclass_module3();
	eqvclass_module4();
	eqvclass_module5();
	eqvclass_module6();
	eqvclass_module7();
	eqvclass_module8();
	eqvclass_module9();
	eqvclass_module10();
	eqvclass_module11();
	eqvclass_module12();
	eqvclass_module13();
	eqvclass_module14();
	eqvclass_module15();
	eqvclass_module16();
	eqvclass_module17();
	eqvclass_module18();
	eqvclass_module19();
	eqvclass_module20();
	eqvclass_module21();
	eqvclass_module22();
	eqvclass_module23();
	eqvclass_module24();
	eqvclass_module25();
	eqvclass_module26();
	eqvclass_module27();
	eqvclass_module28();
	eqvclass_module29();
	eqvclass_module30();
	eqvclass_module31();
	eqvclass_module32();
	eqvclass_module33();
	eqvclass_module34();
	eqvclass_module35();
	eqvclass_module36();
	eqvclass_module37();
	eqvclass_module38();
	eqvclass_module39();
}

static void mercury__eqvclass_maybe_bunch_1(void)
{
	eqvclass_module40();
	eqvclass_module41();
	eqvclass_module42();
	eqvclass_module43();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__eqvclass__init(void);
void mercury__eqvclass__init_type_tables(void);
void mercury__eqvclass__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__eqvclass__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__eqvclass__init_complexity_procs(void);
#endif

void mercury__eqvclass__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__eqvclass_maybe_bunch_0();
	mercury__eqvclass_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_eqvclass__type_ctor_info_partition_id_0,
		eqvclass__partition_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_eqvclass__type_ctor_info_eqvclass_1,
		eqvclass__eqvclass_1_0);
	mercury__eqvclass__init_debugger();
}

void mercury__eqvclass__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_eqvclass__type_ctor_info_partition_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_eqvclass__type_ctor_info_eqvclass_1);
	}
}


void mercury__eqvclass__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__eqvclass__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__eqvclass__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
