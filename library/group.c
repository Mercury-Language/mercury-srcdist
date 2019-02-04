/*
** Automatically generated from `group.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__group__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "group.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "group.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "group.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "group.c"
#line 30 "string.opt"
#include "array.mh"

#line 44 "group.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 48 "group.c"
#line 61 "array.opt"
#include "store.mh"

#line 52 "group.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "group.c"
#line 156 "io.opt"
#include "dir.mh"

#line 60 "group.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 64 "group.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "group.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "group.c"
#line 4 "char.opt"
#include "char.mh"

#line 76 "group.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "group.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "group.c"
#line 4 "int.opt"
#include "int.mh"

#line 88 "group.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "group.c"
#line 129 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 96 "group.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "group.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 104 "group.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "group.c"
#line 109 "group.c"
#include "group.mh"

#line 112 "group.c"
#line 113 "group.c"
#ifndef GROUP_DECL_GUARD
#define GROUP_DECL_GUARD

#line 117 "group.c"
#line 118 "group.c"

#endif
#line 121 "group.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_group__type_ctor_info_group_1,
	mercury_data_group__type_ctor_info_key_0;
MR_decl_label1(group__group_3_0, 2)
MR_decl_label2(group__insert_3_0, 3,4)
MR_decl_label3(group__insert_elements_4_0, 10,3,4)
MR_decl_label1(group__largest_group_key_2_0, 3)
MR_decl_label7(group__largest_group_key_2_4_0, 25,3,4,5,6,8,27)
MR_decl_label3(group__remove_elements_3_0, 10,3,4)
MR_decl_label4(group__remove_group_4_0, 4,2,7,8)
MR_decl_label2(group__same_group_3_0, 2,3)
MR_decl_label1(group__sets_and_keys_2_0, 3)
MR_decl_label2(group__to_set_2_0, 3,4)
MR_decl_label1(fn__group__group_2_0, 2)
MR_decl_label1(fn__group__sets_and_keys_1_0, 3)
MR_decl_label3(__Unify___group__group_1_0, 5,9,1)
MR_decl_label7(__Compare___group__group_1_0, 3,2,6,7,9,14,40)
MR_decl_label2(__Compare___group__key_0_0, 2,3)
MR_def_extern_entry(group__init_1_0)
MR_def_extern_entry(fn__group__init_0_0)
MR_def_extern_entry(group__insert_elements_4_0)
MR_def_extern_entry(group__insert_3_0)
MR_def_extern_entry(fn__group__insert_2_0)
MR_def_extern_entry(group__group_3_0)
MR_def_extern_entry(fn__group__group_2_0)
MR_def_extern_entry(group__to_set_2_0)
MR_def_extern_entry(fn__group__to_set_1_0)
MR_def_extern_entry(group__sets_and_keys_2_0)
MR_def_extern_entry(fn__group__sets_and_keys_1_0)
MR_def_extern_entry(group__group_key_3_0)
MR_def_extern_entry(fn__group__group_key_2_0)
MR_def_extern_entry(group__key_group_3_0)
MR_def_extern_entry(fn__group__key_group_2_0)
MR_decl_static(group__remove_elements_3_0)
MR_def_extern_entry(group__remove_group_4_0)
MR_def_extern_entry(group__same_group_3_0)
MR_def_extern_entry(group__largest_group_key_2_4_0)
MR_def_extern_entry(group__largest_group_key_2_0)
MR_def_extern_entry(fn__group__largest_group_key_1_0)
MR_def_extern_entry(group__group_keys_2_0)
MR_def_extern_entry(fn__group__group_keys_1_0)
MR_def_extern_entry(__Unify___group__group_1_0)
MR_def_extern_entry(__Compare___group__group_1_0)
MR_def_extern_entry(__Unify___group__key_0_0)
MR_def_extern_entry(__Compare___group__key_0_0)
MR_decl_static(fn__f_103_114_111_117_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0,
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

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

const MR_PseudoTypeInfo mercury_data_group__field_types_group_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_group__field_names_group_1_0[] = {
	"key_supply",
	"sets",
	"elements"
};

static const MR_DuFunctorDesc mercury_data_group__du_functor_desc_group_1_0 = {
	"group",
	3,
	6,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_group__field_types_group_1_0,
	mercury_data_group__field_names_group_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_group__du_stag_ordered_group_1_0[] = {
	&mercury_data_group__du_functor_desc_group_1_0

};

const MR_DuPtagLayout mercury_data_group__du_ptag_ordered_group_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_group__du_stag_ordered_group_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_group__du_name_ordered_group_1[] = {
	&mercury_data_group__du_functor_desc_group_1_0
};

const MR_Integer mercury_data_group__functor_number_map_group_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_group__type_ctor_info_group_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___group__group_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___group__group_1_0)),
	"group",
	"group",
	{ (void *)mercury_data_group__du_name_ordered_group_1 },
	{ (void *)mercury_data_group__du_ptag_ordered_group_1 },
	1,
	4,
	mercury_data_group__functor_number_map_group_1
};

const MR_TypeCtorInfo_Struct mercury_data_group__type_ctor_info_key_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___group__key_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___group__key_0_0)),
	"group",
	"key",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(group_module0)
	MR_init_entry1(group__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module1)
	MR_init_entry1(fn__group__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(tree234__set_4_0);

MR_BEGIN_MODULE(group_module2)
	MR_init_entry1(group__insert_elements_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__insert_elements_4_0);
	MR_init_label3(group__insert_elements_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_elements'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__insert_elements_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(group__insert_elements_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(group__insert_elements_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(group__insert_elements_4_0,3)
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
		group__insert_elements_4_0_i4);
MR_def_label(group__insert_elements_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(group__insert_elements_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module3)
	MR_init_entry1(group__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__insert_3_0);
	MR_init_label2(group__insert_3_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(tree234__set_4_0,
		group__insert_3_0_i3);
MR_def_label(group__insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(group__insert_elements_4_0,
		group__insert_3_0_i4);
MR_def_label(group__insert_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module4)
	MR_init_entry1(fn__group__insert_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__insert_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__insert_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(group__insert_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(group_module5)
	MR_init_entry1(group__group_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__group_3_0);
	MR_init_label1(group__group_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__group_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		group__group_3_0_i2);
MR_def_label(group__group_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module6)
	MR_init_entry1(fn__group__group_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__group_2_0);
	MR_init_label1(fn__group__group_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__group_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(1), 2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__group__group_2_0_i2);
MR_def_label(fn__group__group_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__values_2_3_0);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);

MR_BEGIN_MODULE(group_module7)
	MR_init_entry1(group__to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__to_set_2_0);
	MR_init_label2(group__to_set_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__values_2_3_0,
		group__to_set_2_0_i3);
MR_def_label(group__to_set_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		group__to_set_2_0_i4);
MR_def_label(group__to_set_2_0,4)
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


MR_BEGIN_MODULE(group_module8)
	MR_init_entry1(fn__group__to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(group__to_set_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__tree234_to_assoc_list_2_3_0);
MR_decl_entry(assoc_list__reverse_members_2_0);

MR_BEGIN_MODULE(group_module9)
	MR_init_entry1(group__sets_and_keys_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__sets_and_keys_2_0);
	MR_init_label1(group__sets_and_keys_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sets_and_keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__sets_and_keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		group__sets_and_keys_2_0_i3);
MR_def_label(group__sets_and_keys_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(assoc_list__reverse_members_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module10)
	MR_init_entry1(fn__group__sets_and_keys_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__sets_and_keys_1_0);
	MR_init_label1(fn__group__sets_and_keys_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sets_and_keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__sets_and_keys_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		fn__group__sets_and_keys_1_0_i3);
MR_def_label(fn__group__sets_and_keys_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(assoc_list__reverse_members_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module11)
	MR_init_entry1(group__group_key_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__group_key_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_key'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__group_key_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module12)
	MR_init_entry1(fn__group__group_key_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__group_key_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_key'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__group_key_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module13)
	MR_init_entry1(group__key_group_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__key_group_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'key_group'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__key_group_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module14)
	MR_init_entry1(fn__group__key_group_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__key_group_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'key_group'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__key_group_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__delete_2_4_0);

MR_BEGIN_MODULE(group_module15)
	MR_init_entry1(group__remove_elements_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__remove_elements_3_0);
	MR_init_label3(group__remove_elements_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_elements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(group__remove_elements_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(group__remove_elements_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(group__remove_elements_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(group__remove_elements_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree234__delete_2_4_0,
		group__remove_elements_3_0_i4);
MR_def_label(group__remove_elements_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(group__remove_elements_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__remove_2_5_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(group_module16)
	MR_init_entry1(group__remove_group_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__remove_group_4_0);
	MR_init_label4(group__remove_group_4_0,4,2,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_group'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__remove_group_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(3), 1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(tree234__remove_2_5_0,
		group__remove_group_4_0_i4);
MR_def_label(group__remove_group_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(group__remove_group_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(group__remove_elements_3_0,
		group__remove_group_4_0_i8);
MR_def_label(group__remove_group_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("map.remove unexpectedly failed.", 31);
	MR_np_call_localret_ent(require__error_1_0,
		group__remove_group_4_0_i7);
MR_def_label(group__remove_group_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(group__remove_elements_3_0,
		group__remove_group_4_0_i8);
MR_def_label(group__remove_group_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_sv(3), 0);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module17)
	MR_init_entry1(group__same_group_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__same_group_3_0);
	MR_init_label2(group__same_group_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_group'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__same_group_3_0);
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
	MR_np_call_localret_ent(map__lookup_3_0,
		group__same_group_3_0_i2);
MR_def_label(group__same_group_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		group__same_group_3_0_i3);
MR_def_label(group__same_group_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(1) == MR_r1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module18)
	MR_init_entry1(group__largest_group_key_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__largest_group_key_2_4_0);
	MR_init_label7(group__largest_group_key_2_4_0,25,3,4,5,6,8,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'largest_group_key_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__largest_group_key_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(group__largest_group_key_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(group__largest_group_key_2_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(group__largest_group_key_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		group__largest_group_key_2_4_0_i4);
MR_def_label(group__largest_group_key_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(group__largest_group_key_2_4_0_i5);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(group__largest_group_key_2_4_0_i8);
MR_def_label(group__largest_group_key_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(group__largest_group_key_2_4_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(group__largest_group_key_2_4_0_i8);
MR_def_label(group__largest_group_key_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r6 = (MR_Integer) 2;
	MR_r1 = MR_sv(5);
MR_def_label(group__largest_group_key_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,2)) {
		MR_GOTO_LAB(group__largest_group_key_2_4_0_i27);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_sv(3);
MR_def_label(group__largest_group_key_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(group__largest_group_key_2_4_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module19)
	MR_init_entry1(group__largest_group_key_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__largest_group_key_2_0);
	MR_init_label1(group__largest_group_key_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'largest_group_key'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__largest_group_key_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		group__largest_group_key_2_0_i3);
MR_def_label(group__largest_group_key_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(group__largest_group_key_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module20)
	MR_init_entry1(fn__group__largest_group_key_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__largest_group_key_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'largest_group_key'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__largest_group_key_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(group__largest_group_key_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__keys_2_3_0);

MR_BEGIN_MODULE(group_module21)
	MR_init_entry1(group__group_keys_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__group__group_keys_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__group__group_keys_2_0);
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


MR_BEGIN_MODULE(group_module22)
	MR_init_entry1(fn__group__group_keys_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__group__group_keys_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group_keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__group__group_keys_1_0);
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

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(group_module23)
	MR_init_entry1(__Unify___group__group_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___group__group_1_0);
	MR_init_label3(__Unify___group__group_1_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___group__group_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___group__group_1_0_i9);
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
		MR_GOTO_LAB(__Unify___group__group_1_0_i1);
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
		__Unify___group__group_1_0_i5);
MR_def_label(__Unify___group__group_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___group__group_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___group__group_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___group__group_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(group_module24)
	MR_init_entry1(__Compare___group__group_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___group__group_1_0);
	MR_init_label7(__Compare___group__group_1_0,3,2,6,7,9,14,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___group__group_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___group__group_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___group__group_1_0_i2);
MR_def_label(__Compare___group__group_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___group__group_1_0,2)
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
		MR_GOTO_LAB(__Compare___group__group_1_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___group__group_1_0_i9);
	}
MR_def_label(__Compare___group__group_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___group__group_1_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___group__group_1_0_i9);
MR_def_label(__Compare___group__group_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___group__group_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___group__group_1_0_i40);
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
		__Compare___group__group_1_0_i14);
MR_def_label(__Compare___group__group_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___group__group_1_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___group__group_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module25)
	MR_init_entry1(__Unify___group__key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___group__key_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___group__key_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module26)
	MR_init_entry1(__Compare___group__key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___group__key_0_0);
	MR_init_label2(__Compare___group__key_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___group__key_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___group__key_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___group__key_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___group__key_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___group__key_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(group_module27)
	MR_init_entry1(fn__f_103_114_111_117_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_103_114_111_117_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_103_114_111_117_112_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__group_maybe_bunch_0(void)
{
	group_module0();
	group_module1();
	group_module2();
	group_module3();
	group_module4();
	group_module5();
	group_module6();
	group_module7();
	group_module8();
	group_module9();
	group_module10();
	group_module11();
	group_module12();
	group_module13();
	group_module14();
	group_module15();
	group_module16();
	group_module17();
	group_module18();
	group_module19();
	group_module20();
	group_module21();
	group_module22();
	group_module23();
	group_module24();
	group_module25();
	group_module26();
	group_module27();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__group__init(void);
void mercury__group__init_type_tables(void);
void mercury__group__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__group__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__group__init_complexity_procs(void);
#endif

void mercury__group__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__group_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_group__type_ctor_info_group_1,
		group__group_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_group__type_ctor_info_key_0,
		group__key_0_0);
	mercury__group__init_debugger();
}

void mercury__group__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_group__type_ctor_info_group_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_group__type_ctor_info_key_0);
	}
}


void mercury__group__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__group__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__group);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__group__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
