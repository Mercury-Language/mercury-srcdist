/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__eqvclass__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 141 "io.int2"
#include "io.mh"

#line 28 "eqvclass.c"
#line 149 "io.int2"
#include "string.mh"

#line 32 "eqvclass.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 36 "eqvclass.c"
#line 28 "time.int2"
#include "time.mh"

#line 40 "eqvclass.c"
#line 31 "array.int2"
#include "array.mh"

#line 44 "eqvclass.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "eqvclass.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 52 "eqvclass.c"
#line 50 "array.opt"
#include "store.mh"

#line 56 "eqvclass.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "eqvclass.c"
#line 153 "io.opt"
#include "dir.mh"

#line 64 "eqvclass.c"
#line 163 "io.opt"
#include "table_builtin.mh"

#line 68 "eqvclass.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "eqvclass.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "eqvclass.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "eqvclass.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 84 "eqvclass.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "eqvclass.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "eqvclass.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "eqvclass.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "eqvclass.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "eqvclass.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "eqvclass.c"
#line 109 "eqvclass.c"
#include "eqvclass.mh"

#line 112 "eqvclass.c"
#line 113 "eqvclass.c"
#ifndef EQVCLASS_DECL_GUARD
#define EQVCLASS_DECL_GUARD

#line 117 "eqvclass.c"
#line 118 "eqvclass.c"

#endif
#line 121 "eqvclass.c"

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
	mercury_data_eqvclass__type_ctor_info_eqvclass_1,
	mercury_data_eqvclass__type_ctor_info_partition_id_0;
MR_decl_label2(eqvclass__add_element_4_0, 2,5)
MR_decl_label10(eqvclass__add_equivalence_4_0, 3,4,6,7,8,9,10,5,13,14)
MR_decl_label2(eqvclass__add_equivalence_4_0, 15,16)
MR_decl_label3(eqvclass__change_partition_4_0, 10,3,4)
MR_decl_label4(eqvclass__divide_equivalence_classes_2_9_0, 4,5,6,3)
MR_decl_label10(eqvclass__divide_equivalence_classes_3_11_0, 2,4,6,8,10,11,12,13,14,3)
MR_decl_label7(eqvclass__divide_equivalence_classes_3_11_0, 17,19,20,21,22,23,24)
MR_decl_label4(eqvclass__ensure_corresponding_equivalences_4_0, 28,3,9,8)
MR_decl_label3(eqvclass__ensure_element_3_0, 3,2,5)
MR_decl_label2(eqvclass__ensure_element_partition_id_4_0, 3,2)
MR_decl_label10(eqvclass__ensure_equivalence_4_0, 3,6,8,5,12,13,14,2,19,22)
MR_decl_label8(eqvclass__ensure_equivalence_4_0, 23,24,25,18,27,28,31,33)
MR_decl_label3(eqvclass__make_partition_4_0, 10,3,4)
MR_decl_label3(eqvclass__new_element_3_0, 3,2,6)
MR_decl_label10(eqvclass__new_equivalence_4_0, 3,6,8,5,13,14,15,2,20,23)
MR_decl_label8(eqvclass__new_equivalence_4_0, 24,25,26,19,28,29,32,34)
MR_decl_label1(eqvclass__partition_list_2_0, 3)
MR_decl_label5(eqvclass__partition_list_to_eqvclass_2_0, 28,5,8,10,27)
MR_decl_label3(eqvclass__partition_set_2_0, 3,4,5)
MR_decl_label5(eqvclass__partitions_3_0, 28,6,4,9,10)
MR_decl_label3(eqvclass__same_eqvclass_3_0, 2,4,1)
MR_decl_label3(eqvclass__same_eqvclass_list_2_0, 4,2,1)
MR_decl_label4(eqvclass__same_eqvclass_list_2_3_0, 21,4,2,1)
MR_decl_label3(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0, 10,3,4)
MR_decl_label1(fn__eqvclass__divide_equivalence_classes_2_0, 6)
MR_decl_label3(fn__eqvclass__ensure_element_2_0, 3,2,5)
MR_decl_label3(fn__eqvclass__get_equivalent_elements_2_0, 4,6,2)
MR_decl_label1(fn__eqvclass__get_minimum_element_2_0, 2)
MR_decl_label3(fn__eqvclass__new_element_2_0, 3,2,6)
MR_decl_label1(fn__eqvclass__partition_list_1_0, 3)
MR_decl_label4(fn__eqvclass__remove_equivalent_elements_2_0, 3,6,7,2)
MR_decl_label3(__Unify___eqvclass__eqvclass_1_0, 5,9,1)
MR_decl_label7(__Compare___eqvclass__eqvclass_1_0, 3,2,6,7,9,14,40)
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
MR_decl_static(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0)

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

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
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
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_eqvclass__field_types_eqvclass_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__is_member_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__is_member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(tree234__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module3)
	MR_init_entry1(eqvclass__partition_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partition_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__add_element_4_0);
	MR_init_label2(eqvclass__add_element_4_0,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_element'/4 mode 0 */
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
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_r3, 2);
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__add_element_4_0_i5);
MR_def_label(eqvclass__add_element_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module5)
	MR_init_entry1(eqvclass__ensure_element_partition_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__ensure_element_partition_id_4_0);
	MR_init_label2(eqvclass__ensure_element_partition_id_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_element_partition_id'/4 mode 0 */
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
	MR_r3 = MR_tfield(0, MR_r3, 2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__ensure_element_3_0);
	MR_init_label3(eqvclass__ensure_element_3_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_element'/3 mode 0 */
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
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__ensure_element_2_0);
	MR_init_label3(fn__eqvclass__ensure_element_2_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_element'/3 mode 0 */
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
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__new_element_3_0);
	MR_init_label3(eqvclass__new_element_3_0,3,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_element'/3 mode 0 */
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
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__new_element_2_0);
	MR_init_label3(fn__eqvclass__new_element_2_0,3,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_element'/3 mode 0 */
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
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__change_partition_4_0);
	MR_init_label3(eqvclass__change_partition_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'change_partition'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(eqvclass__change_partition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(eqvclass__change_partition_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__change_partition_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__change_partition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		eqvclass__change_partition_4_0_i4);
MR_def_label(eqvclass__change_partition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(eqvclass__change_partition_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(tree234__delete_2_4_0);
MR_decl_entry(list__merge_and_remove_dups_3_0);

MR_BEGIN_MODULE(eqvclass_module11)
	MR_init_entry1(eqvclass__add_equivalence_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__add_equivalence_4_0);
	MR_init_label10(eqvclass__add_equivalence_4_0,3,4,6,7,8,9,10,5,13,14)
	MR_init_label2(eqvclass__add_equivalence_4_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_equivalence'/4 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__add_equivalence_4_0_i3);
MR_def_label(eqvclass__add_equivalence_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__add_equivalence_4_0_i4);
MR_def_label(eqvclass__add_equivalence_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		eqvclass__add_equivalence_4_0_i6);
MR_def_label(eqvclass__add_equivalence_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		eqvclass__add_equivalence_4_0_i7);
MR_def_label(eqvclass__add_equivalence_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(eqvclass__add_equivalence_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		eqvclass__add_equivalence_4_0_i8);
MR_def_label(eqvclass__add_equivalence_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		eqvclass__add_equivalence_4_0_i9);
MR_def_label(eqvclass__add_equivalence_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		eqvclass__add_equivalence_4_0_i10);
MR_def_label(eqvclass__add_equivalence_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(eqvclass__change_partition_4_0,
		eqvclass__add_equivalence_4_0_i16);
MR_def_label(eqvclass__add_equivalence_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		eqvclass__add_equivalence_4_0_i13);
MR_def_label(eqvclass__add_equivalence_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		eqvclass__add_equivalence_4_0_i14);
MR_def_label(eqvclass__add_equivalence_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		eqvclass__add_equivalence_4_0_i15);
MR_def_label(eqvclass__add_equivalence_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(eqvclass__change_partition_4_0,
		eqvclass__add_equivalence_4_0_i16);
MR_def_label(eqvclass__add_equivalence_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__insert_2_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(set__list_to_set_2_0);

MR_BEGIN_MODULE(eqvclass_module12)
	MR_init_entry1(eqvclass__ensure_equivalence_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__ensure_equivalence_4_0);
	MR_init_label10(eqvclass__ensure_equivalence_4_0,3,6,8,5,12,13,14,2,19,22)
	MR_init_label8(eqvclass__ensure_equivalence_4_0,23,24,25,18,27,28,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_equivalence'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__ensure_equivalence_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_sv(1) = MR_r2;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(eqvclass__add_equivalence_4_0);
	}
MR_def_label(eqvclass__ensure_equivalence_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(5) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__ensure_equivalence_4_0_i12);
MR_def_label(eqvclass__ensure_equivalence_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		eqvclass__ensure_equivalence_4_0_i13);
MR_def_label(eqvclass__ensure_equivalence_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__ensure_equivalence_4_0_i14);
MR_def_label(eqvclass__ensure_equivalence_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i25);
MR_def_label(eqvclass__ensure_equivalence_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__ensure_equivalence_4_0_i19);
MR_def_label(eqvclass__ensure_equivalence_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__ensure_equivalence_4_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__ensure_equivalence_4_0_i22);
MR_def_label(eqvclass__ensure_equivalence_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		eqvclass__ensure_equivalence_4_0_i23);
MR_def_label(eqvclass__ensure_equivalence_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__ensure_equivalence_4_0_i24);
MR_def_label(eqvclass__ensure_equivalence_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i25);
MR_def_label(eqvclass__ensure_equivalence_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(eqvclass__ensure_equivalence_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i27);
MR_def_label(eqvclass__ensure_equivalence_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__ensure_equivalence_4_0_i28);
MR_def_label(eqvclass__ensure_equivalence_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		eqvclass__ensure_equivalence_4_0_i31);
MR_def_label(eqvclass__ensure_equivalence_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__ensure_equivalence_4_0_i33);
MR_def_label(eqvclass__ensure_equivalence_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module13)
	MR_init_entry1(fn__eqvclass__ensure_equivalence_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__ensure_equivalence_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_equivalence'/4 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__ensure_corresponding_equivalences_4_0);
	MR_init_label4(eqvclass__ensure_corresponding_equivalences_4_0,28,3,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_corresponding_equivalences'/4 mode 0 */
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(eqvclass__ensure_equivalence_4_0,
		eqvclass__ensure_corresponding_equivalences_4_0_i9);
MR_def_label(eqvclass__ensure_corresponding_equivalences_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(eqvclass__ensure_corresponding_equivalences_4_0_i28);
	}
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__ensure_corresponding_equivalences_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_corresponding_equivalences'/4 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__new_equivalence_4_0);
	MR_init_label10(eqvclass__new_equivalence_4_0,3,6,8,5,13,14,15,2,20,23)
	MR_init_label8(eqvclass__new_equivalence_4_0,24,25,26,19,28,29,32,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_equivalence'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__new_equivalence_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_sv(1) = MR_r2;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(eqvclass__add_equivalence_4_0);
	}
MR_def_label(eqvclass__new_equivalence_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(5) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__new_equivalence_4_0_i13);
MR_def_label(eqvclass__new_equivalence_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		eqvclass__new_equivalence_4_0_i14);
MR_def_label(eqvclass__new_equivalence_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__new_equivalence_4_0_i15);
MR_def_label(eqvclass__new_equivalence_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i26);
MR_def_label(eqvclass__new_equivalence_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__new_equivalence_4_0_i20);
MR_def_label(eqvclass__new_equivalence_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__new_equivalence_4_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__new_equivalence_4_0_i23);
MR_def_label(eqvclass__new_equivalence_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		eqvclass__new_equivalence_4_0_i24);
MR_def_label(eqvclass__new_equivalence_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__new_equivalence_4_0_i25);
MR_def_label(eqvclass__new_equivalence_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i26);
MR_def_label(eqvclass__new_equivalence_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(eqvclass__new_equivalence_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_sv(7) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i28);
MR_def_label(eqvclass__new_equivalence_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__new_equivalence_4_0_i29);
MR_def_label(eqvclass__new_equivalence_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_sv(1), 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		eqvclass__new_equivalence_4_0_i32);
MR_def_label(eqvclass__new_equivalence_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__new_equivalence_4_0_i34);
MR_def_label(eqvclass__new_equivalence_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module17)
	MR_init_entry1(fn__eqvclass__new_equivalence_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__new_equivalence_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_equivalence'/4 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__same_eqvclass_3_0);
	MR_init_label3(eqvclass__same_eqvclass_3_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_eqvclass'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__same_eqvclass_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_3_0_i2);
MR_def_label(eqvclass__same_eqvclass_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_3_0_i4);
MR_def_label(eqvclass__same_eqvclass_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_3_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(5);
MR_def_label(eqvclass__same_eqvclass_3_0,1)
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


MR_BEGIN_MODULE(eqvclass_module19)
	MR_init_entry1(eqvclass__same_eqvclass_list_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__same_eqvclass_list_2_3_0);
	MR_init_label4(eqvclass__same_eqvclass_list_2_3_0,21,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_eqvclass_list_2'/3 mode 0 */
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
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__same_eqvclass_list_2_0);
	MR_init_label3(eqvclass__same_eqvclass_list_2_0,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_eqvclass_list'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		eqvclass__same_eqvclass_list_2_0_i4);
MR_def_label(eqvclass__same_eqvclass_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(eqvclass__same_eqvclass_list_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(eqvclass__same_eqvclass_list_2_3_0);
	}
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partitions_3_0);
	MR_init_label5(eqvclass__partitions_3_0,28,6,4,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partitions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partitions_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(eqvclass__partitions_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(eqvclass__partitions_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__partitions_3_0_i6);
MR_def_label(eqvclass__partitions_3_0,6)
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
		eqvclass__partitions_3_0_i10);
MR_def_label(eqvclass__partitions_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("partition id not known to equivalence class", 43);
	MR_np_call_localret_ent(require__error_1_0,
		eqvclass__partitions_3_0_i9);
MR_def_label(eqvclass__partitions_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(eqvclass__partitions_3_0,
		eqvclass__partitions_3_0_i10);
MR_def_label(eqvclass__partitions_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);

MR_BEGIN_MODULE(eqvclass_module22)
	MR_init_entry1(eqvclass__partition_ids_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partition_ids_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_ids'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_ids_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(tree234__keys_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);

MR_BEGIN_MODULE(eqvclass_module23)
	MR_init_entry1(eqvclass__partition_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partition_set_2_0);
	MR_init_label3(eqvclass__partition_set_2_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_set'/2 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		eqvclass__partition_set_2_0_i3);
MR_def_label(eqvclass__partition_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(eqvclass__partitions_3_0,
		eqvclass__partition_set_2_0_i4);
MR_def_label(eqvclass__partition_set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		eqvclass__partition_set_2_0_i5);
MR_def_label(eqvclass__partition_set_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module24)
	MR_init_entry1(fn__eqvclass__partition_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__partition_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_set'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partition_list_2_0);
	MR_init_label1(eqvclass__partition_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_list'/2 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		eqvclass__partition_list_2_0_i3);
MR_def_label(eqvclass__partition_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(eqvclass__partitions_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module26)
	MR_init_entry1(fn__eqvclass__partition_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__partition_list_1_0);
	MR_init_label1(fn__eqvclass__partition_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_list'/2 mode 0 */
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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__keys_2_3_0,
		fn__eqvclass__partition_list_1_0_i3);
MR_def_label(fn__eqvclass__partition_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(eqvclass__partitions_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module27)
	MR_init_entry1(eqvclass__make_partition_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__make_partition_4_0);
	MR_init_label3(eqvclass__make_partition_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_partition'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(eqvclass__make_partition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(eqvclass__make_partition_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__make_partition_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(eqvclass__make_partition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__make_partition_4_0_i4);
MR_def_label(eqvclass__make_partition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(eqvclass__make_partition_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module28)
	MR_init_entry1(eqvclass__partition_list_to_eqvclass_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partition_list_to_eqvclass_2_0);
	MR_init_label5(eqvclass__partition_list_to_eqvclass_2_0,28,5,8,10,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_list_to_eqvclass'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__partition_list_to_eqvclass_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(eqvclass__partition_list_to_eqvclass_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(eqvclass__partition_list_to_eqvclass_2_0,
		eqvclass__partition_list_to_eqvclass_2_0_i5);
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(eqvclass__partition_list_to_eqvclass_2_0_i27);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(eqvclass__make_partition_4_0,
		eqvclass__partition_list_to_eqvclass_2_0_i8);
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__partition_list_to_eqvclass_2_0_i10);
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_r2;
MR_def_label(eqvclass__partition_list_to_eqvclass_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module29)
	MR_init_entry1(eqvclass__partition_set_to_eqvclass_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__partition_set_to_eqvclass_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_set_to_eqvclass'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__partition_set_to_eqvclass_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_set_to_eqvclass'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__partition_list_to_eqvclass_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_list_to_eqvclass'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__get_equivalent_elements_2_0);
	MR_init_label3(fn__eqvclass__get_equivalent_elements_2_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_equivalent_elements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__get_equivalent_elements_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__eqvclass__get_equivalent_elements_2_0_i4);
MR_def_label(fn__eqvclass__get_equivalent_elements_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__get_equivalent_elements_2_0_i2);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		fn__eqvclass__get_equivalent_elements_2_0_i6);
MR_def_label(fn__eqvclass__get_equivalent_elements_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__get_equivalent_elements_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__eqvclass__get_equivalent_elements_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__det_head_1_0);

MR_BEGIN_MODULE(eqvclass_module33)
	MR_init_entry1(fn__eqvclass__get_minimum_element_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__get_minimum_element_2_0);
	MR_init_label1(fn__eqvclass__get_minimum_element_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_minimum_element'/3 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__det_head_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_remove_4_0);
MR_decl_entry(map__delete_list_3_0);

MR_BEGIN_MODULE(eqvclass_module34)
	MR_init_entry1(fn__eqvclass__remove_equivalent_elements_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__remove_equivalent_elements_2_0);
	MR_init_label4(fn__eqvclass__remove_equivalent_elements_2_0,3,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_equivalent_elements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__remove_equivalent_elements_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree234__search_3_0,
		fn__eqvclass__remove_equivalent_elements_2_0_i3);
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__eqvclass__remove_equivalent_elements_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_remove_4_0,
		fn__eqvclass__remove_equivalent_elements_2_0_i6);
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__delete_list_3_0,
		fn__eqvclass__remove_equivalent_elements_2_0_i7);
MR_def_label(fn__eqvclass__remove_equivalent_elements_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__eqvclass__divide_equivalence_classes_2_0);
	MR_init_label1(fn__eqvclass__divide_equivalence_classes_2_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_equivalence_classes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__eqvclass__divide_equivalence_classes_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(eqvclass__divide_equivalence_classes_2_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(counter, counter);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r7 = MR_tfield(0, MR_tempr4, 1);
	MR_r8 = MR_tfield(0, MR_tempr4, 0);
	MR_r9 = MR_r7;
	MR_r10 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(tree234__foldl3_8_0,
		fn__eqvclass__divide_equivalence_classes_2_0_i6);
MR_def_label(fn__eqvclass__divide_equivalence_classes_2_0,6)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__divide_equivalence_classes_2_9_0);
	MR_init_label4(eqvclass__divide_equivalence_classes_2_9_0,4,5,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_equivalence_classes_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__divide_equivalence_classes_2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(eqvclass__divide_equivalence_classes_2_9_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(eqvclass__divide_equivalence_classes_2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__eqvclass__divide_equivalence_classes_2_9_0_i4);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		eqvclass__divide_equivalence_classes_2_9_0_i5);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,
		eqvclass__divide_equivalence_classes_2_9_0_i6);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(9);
MR_def_label(eqvclass__divide_equivalence_classes_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("divide_equivalence_classes_2: empty partition", 45);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__difference_2_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(svmap__det_insert_4_0);
MR_decl_entry(set__delete_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(svmap__det_update_4_0);

MR_BEGIN_MODULE(eqvclass_module37)
	MR_init_entry1(eqvclass__divide_equivalence_classes_3_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__eqvclass__divide_equivalence_classes_3_11_0);
	MR_init_label10(eqvclass__divide_equivalence_classes_3_11_0,2,4,6,8,10,11,12,13,14,3)
	MR_init_label7(eqvclass__divide_equivalence_classes_3_11_0,17,19,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_equivalence_classes_3'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__eqvclass__divide_equivalence_classes_3_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
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
	MR_decr_sp_and_return(11);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r1, 1) = MR_sv(8);
	MR_sv(3) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i8);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_ordlist__difference_2_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i10);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i11);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i12);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i13);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i14);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(map__det_update_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i24);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(5);
	MR_sv(3) = MR_tempr2;
	MR_sv(5) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i17);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i19);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__delete_3_0,
		eqvclass__divide_equivalence_classes_3_11_0_i20);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i21);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		eqvclass__divide_equivalence_classes_3_11_0_i22);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i23);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		eqvclass__divide_equivalence_classes_3_11_0_i24);
MR_def_label(eqvclass__divide_equivalence_classes_3_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(eqvclass_module38)
	MR_init_entry1(__Unify___eqvclass__eqvclass_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___eqvclass__eqvclass_1_0);
	MR_init_label3(__Unify___eqvclass__eqvclass_1_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___eqvclass__eqvclass_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___eqvclass__eqvclass_1_0_i9);
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
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___eqvclass__eqvclass_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___eqvclass__eqvclass_1_0_i5);
MR_def_label(__Unify___eqvclass__eqvclass_1_0,5)
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
MR_def_label(__Unify___eqvclass__eqvclass_1_0,9)
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___eqvclass__eqvclass_1_0);
	MR_init_label7(__Compare___eqvclass__eqvclass_1_0,3,2,6,7,9,14,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
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
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i40);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___eqvclass__eqvclass_1_0_i14);
MR_def_label(__Compare___eqvclass__eqvclass_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___eqvclass__eqvclass_1_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___eqvclass__eqvclass_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(eqvclass_module40)
	MR_init_entry1(__Unify___eqvclass__partition_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___eqvclass__partition_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___eqvclass__partition_id_0_0);
	MR_init_label2(__Compare___eqvclass__partition_id_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_101_113_118_99_108_97_115_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
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
	MR_init_entry1(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0);
	MR_init_label3(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl4__ho8__[1, 2, 3, 4, 9, 10, 11, 12, 13]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_decr_sp_and_return(6);
MR_def_label(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r5, 1);
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(eqvclass__divide_equivalence_classes_3_11_0,
		f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0_i4);
MR_def_label(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_101_113_118_99_108_97_115_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_0_i10);
	}
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
void mercury__eqvclass__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
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
		mercury_data_eqvclass__type_ctor_info_eqvclass_1,
		eqvclass__eqvclass_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_eqvclass__type_ctor_info_partition_id_0,
		eqvclass__partition_id_0_0);
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
		&mercury_data_eqvclass__type_ctor_info_eqvclass_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_eqvclass__type_ctor_info_partition_id_0);
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

void mercury__eqvclass__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__eqvclass);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__eqvclass__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
