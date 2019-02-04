/*
** Automatically generated from `assoc_list.m'
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
INIT mercury__assoc_list__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "assoc_list.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "assoc_list.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "assoc_list.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "assoc_list.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "assoc_list.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 48 "assoc_list.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "assoc_list.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "assoc_list.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "assoc_list.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "assoc_list.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "assoc_list.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "assoc_list.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "assoc_list.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "assoc_list.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "assoc_list.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "assoc_list.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "assoc_list.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "assoc_list.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "assoc_list.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "assoc_list.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "assoc_list.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 112 "assoc_list.c"
#line 113 "assoc_list.c"
#include "assoc_list.mh"

#line 116 "assoc_list.c"
#line 117 "assoc_list.c"
#ifndef ASSOC_LIST_DECL_GUARD
#define ASSOC_LIST_DECL_GUARD

#line 121 "assoc_list.c"
#line 122 "assoc_list.c"

#endif
#line 125 "assoc_list.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_assoc_list__type_ctor_info_assoc_list_2,
	mercury_data_assoc_list__type_ctor_info_assoc_list_1;
MR_decl_label4(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0, 39,7,40,1)
MR_decl_label5(assoc_list__filter_3_0, 25,3,6,8,4)
MR_decl_label5(assoc_list__filter_4_0, 30,6,8,4,10)
MR_decl_label3(assoc_list__foldl_keys_4_0, 10,3,4)
MR_decl_label4(assoc_list__foldl_keys_4_3, 18,3,4,1)
MR_decl_label3(assoc_list__foldl_keys_4_6, 12,3,11)
MR_decl_label3(assoc_list__foldl_values_4_0, 10,3,4)
MR_decl_label4(assoc_list__foldl_values_4_3, 18,3,4,1)
MR_decl_label3(assoc_list__foldl_values_4_6, 12,3,11)
MR_decl_label10(assoc_list__from_corresponding_lists_3_0, 4,2,7,8,9,11,12,13,14,15)
MR_decl_label7(assoc_list__from_corresponding_lists_3_0, 16,17,18,19,20,21,22)
MR_decl_label3(assoc_list__keys_2_0, 5,6,2)
MR_decl_label3(assoc_list__keys_and_values_3_0, 6,7,2)
MR_decl_label3(assoc_list__map_keys_only_3_0, 18,4,6)
MR_decl_label3(assoc_list__map_values_3_0, 18,4,6)
MR_decl_label3(assoc_list__map_values_only_3_0, 18,4,6)
MR_decl_label7(assoc_list__merge_3_0, 5,3,48,9,10,8,12)
MR_decl_label5(assoc_list__negated_filter_3_0, 25,3,6,4,9)
MR_decl_label4(assoc_list__remove_4_0, 5,3,7,1)
MR_decl_label3(assoc_list__reverse_members_2_0, 6,7,2)
MR_decl_label4(assoc_list__search_3_0, 20,5,3,1)
MR_decl_label3(assoc_list__values_2_0, 5,6,2)
MR_decl_label2(fn__assoc_list__det_elem_2_0, 4,2)
MR_decl_label3(fn__assoc_list__map_keys_only_2_0, 18,4,6)
MR_decl_label3(fn__assoc_list__map_values_2_0, 18,4,6)
MR_decl_label3(fn__assoc_list__map_values_only_2_0, 18,4,6)
MR_def_extern_entry(assoc_list__reverse_members_2_0)
MR_def_extern_entry(fn__assoc_list__reverse_members_1_0)
MR_def_extern_entry(assoc_list__from_corresponding_lists_3_0)
MR_def_extern_entry(fn__assoc_list__from_corresponding_lists_2_0)
MR_def_extern_entry(assoc_list__keys_2_0)
MR_def_extern_entry(fn__assoc_list__keys_1_0)
MR_def_extern_entry(assoc_list__values_2_0)
MR_def_extern_entry(fn__assoc_list__values_1_0)
MR_def_extern_entry(assoc_list__keys_and_values_3_0)
MR_def_extern_entry(assoc_list__search_3_0)
MR_def_extern_entry(fn__assoc_list__elem_2_0)
MR_def_extern_entry(fn__assoc_list__det_elem_2_0)
MR_def_extern_entry(assoc_list__remove_4_0)
MR_def_extern_entry(assoc_list__map_keys_only_3_0)
MR_def_extern_entry(fn__assoc_list__map_keys_only_2_0)
MR_def_extern_entry(assoc_list__map_values_only_3_0)
MR_def_extern_entry(fn__assoc_list__map_values_only_2_0)
MR_def_extern_entry(assoc_list__map_values_3_0)
MR_def_extern_entry(fn__assoc_list__map_values_2_0)
MR_def_extern_entry(assoc_list__filter_3_0)
MR_def_extern_entry(fn__assoc_list__filter_2_0)
MR_def_extern_entry(assoc_list__negated_filter_3_0)
MR_def_extern_entry(fn__assoc_list__negated_filter_2_0)
MR_def_extern_entry(assoc_list__filter_4_0)
MR_def_extern_entry(assoc_list__merge_3_0)
MR_def_extern_entry(fn__assoc_list__merge_2_0)
MR_def_extern_entry(assoc_list__foldl_keys_4_0)
MR_def_extern_entry(assoc_list__foldl_keys_4_1)
MR_def_extern_entry(assoc_list__foldl_keys_4_2)
MR_def_extern_entry(assoc_list__foldl_keys_4_3)
MR_def_extern_entry(assoc_list__foldl_keys_4_4)
MR_def_extern_entry(assoc_list__foldl_keys_4_5)
MR_def_extern_entry(assoc_list__foldl_keys_4_6)
MR_def_extern_entry(assoc_list__foldl_keys_4_7)
MR_def_extern_entry(assoc_list__foldl_values_4_0)
MR_def_extern_entry(assoc_list__foldl_values_4_1)
MR_def_extern_entry(assoc_list__foldl_values_4_2)
MR_def_extern_entry(assoc_list__foldl_values_4_3)
MR_def_extern_entry(assoc_list__foldl_values_4_4)
MR_def_extern_entry(assoc_list__foldl_values_4_5)
MR_def_extern_entry(assoc_list__foldl_values_4_6)
MR_def_extern_entry(assoc_list__foldl_values_4_7)
MR_def_extern_entry(__Unify___assoc_list__assoc_list_1_0)
MR_def_extern_entry(__Compare___assoc_list__assoc_list_1_0)
MR_def_extern_entry(__Unify___assoc_list__assoc_list_2_0)
MR_def_extern_entry(__Compare___assoc_list__assoc_list_2_0)
MR_decl_static(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0)
MR_decl_static(fn__f_97_115_115_111_99_95_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__pseudo_1__pseudo_2 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_1__pseudo_2
}};

const MR_TypeCtorInfo_Struct mercury_data_assoc_list__type_ctor_info_assoc_list_2 = {
	2,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___assoc_list__assoc_list_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___assoc_list__assoc_list_2_0)),
	"assoc_list",
	"assoc_list",
	{ 0 },
	{ (void *)&mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_2 },
	-1,
	0,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__pseudo_1__pseudo_1 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_assoc_list__type_ctor_info_assoc_list_1 = {
	1,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___assoc_list__assoc_list_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___assoc_list__assoc_list_1_0)),
	"assoc_list",
	"assoc_list",
	{ 0 },
	{ (void *)&mercury_data_list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_1 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(assoc_list_module0)
	MR_init_entry1(assoc_list__reverse_members_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__reverse_members_2_0);
	MR_init_label3(assoc_list__reverse_members_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reverse_members'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__reverse_members_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__reverse_members_2_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(assoc_list__reverse_members_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r3, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(assoc_list__reverse_members_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(assoc_list__reverse_members_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module1)
	MR_init_entry1(fn__assoc_list__reverse_members_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__reverse_members_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reverse_members'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__reverse_members_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__reverse_members_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_name_1_0);
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(assoc_list_module2)
	MR_init_entry1(assoc_list__from_corresponding_lists_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__from_corresponding_lists_3_0);
	MR_init_label10(assoc_list__from_corresponding_lists_3_0,4,2,7,8,9,11,12,13,14,15)
	MR_init_label7(assoc_list__from_corresponding_lists_3_0,16,17,18,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__from_corresponding_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,
		assoc_list__from_corresponding_lists_3_0_i4);
MR_def_label(assoc_list__from_corresponding_lists_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__from_corresponding_lists_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__from_corresponding_lists_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__assoc_list__from_corresponding_lists_3_0
	TypeInfo_for_T = MR_tempr3;
{
#line 57 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 426 "assoc_list.c"
	MR_tempr4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		assoc_list__from_corresponding_lists_3_0_i7);
MR_def_label(assoc_list__from_corresponding_lists_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		assoc_list__from_corresponding_lists_3_0_i8);
MR_def_label(assoc_list__from_corresponding_lists_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		assoc_list__from_corresponding_lists_3_0_i9);
MR_def_label(assoc_list__from_corresponding_lists_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__assoc_list__from_corresponding_lists_3_0
	TypeInfo_for_T = MR_r2;
{
#line 57 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 486 "assoc_list.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__type_desc__type_name_1_0,
		assoc_list__from_corresponding_lists_3_0_i11);
MR_def_label(assoc_list__from_corresponding_lists_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		assoc_list__from_corresponding_lists_3_0_i12);
MR_def_label(assoc_list__from_corresponding_lists_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		assoc_list__from_corresponding_lists_3_0_i13);
MR_def_label(assoc_list__from_corresponding_lists_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tValue list length: ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i14);
MR_def_label(assoc_list__from_corresponding_lists_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i15);
MR_def_label(assoc_list__from_corresponding_lists_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tValue list type: ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i16);
MR_def_label(assoc_list__from_corresponding_lists_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i17);
MR_def_label(assoc_list__from_corresponding_lists_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\tKey list length: ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i18);
MR_def_label(assoc_list__from_corresponding_lists_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i19);
MR_def_label(assoc_list__from_corresponding_lists_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tKey list type: ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i20);
MR_def_label(assoc_list__from_corresponding_lists_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("lists have different lengths.\n", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		assoc_list__from_corresponding_lists_3_0_i21);
MR_def_label(assoc_list__from_corresponding_lists_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("assoc_list.from_corresponding_lists: ", 37);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		assoc_list__from_corresponding_lists_3_0_i22);
MR_def_label(assoc_list__from_corresponding_lists_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module3)
	MR_init_entry1(fn__assoc_list__from_corresponding_lists_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__from_corresponding_lists_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_corresponding_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__from_corresponding_lists_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__from_corresponding_lists_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module4)
	MR_init_entry1(assoc_list__keys_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__keys_2_0);
	MR_init_label3(assoc_list__keys_2_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__keys_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__keys_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(assoc_list__keys_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r3, 0), 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(assoc_list__keys_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(assoc_list__keys_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module5)
	MR_init_entry1(fn__assoc_list__keys_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__keys_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__keys_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__keys_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module6)
	MR_init_entry1(assoc_list__values_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__values_2_0);
	MR_init_label3(assoc_list__values_2_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'values'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__values_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(assoc_list__values_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r3, 0), 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(assoc_list__values_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break; } /* end while */
MR_def_label(assoc_list__values_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module7)
	MR_init_entry1(fn__assoc_list__values_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__values_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'values'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__values_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__values_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module8)
	MR_init_entry1(assoc_list__keys_and_values_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__keys_and_values_3_0);
	MR_init_label3(assoc_list__keys_and_values_3_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keys_and_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__keys_and_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__keys_and_values_3_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(assoc_list__keys_and_values_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	break; } /* end while */
MR_def_label(assoc_list__keys_and_values_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5))
		continue;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(assoc_list__keys_and_values_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(assoc_list_module9)
	MR_init_entry1(assoc_list__search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__search_3_0);
	MR_init_label4(assoc_list__search_3_0,20,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__search_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__search_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		assoc_list__search_3_0_i5);
MR_def_label(assoc_list__search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__search_3_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__search_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__search_3_0_i20);
MR_def_label(assoc_list__search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module10)
	MR_init_entry1(fn__assoc_list__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__elem_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(assoc_list__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__report_lookup_error_2_0);

MR_BEGIN_MODULE(assoc_list_module11)
	MR_init_entry1(fn__assoc_list__det_elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__det_elem_2_0);
	MR_init_label2(fn__assoc_list__det_elem_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__det_elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(assoc_list__search_3_0,
		fn__assoc_list__det_elem_2_0_i4);
MR_def_label(fn__assoc_list__det_elem_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__assoc_list__det_elem_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__assoc_list__det_elem_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("assoc_list.det_elem: key not found", 34);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__report_lookup_error_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module12)
	MR_init_entry1(assoc_list__remove_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__remove_4_0);
	MR_init_label4(assoc_list__remove_4_0,5,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__remove_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__remove_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		assoc_list__remove_4_0_i5);
MR_def_label(assoc_list__remove_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__remove_4_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(assoc_list__remove_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(assoc_list__remove_4_0,
		assoc_list__remove_4_0_i7);
MR_def_label(assoc_list__remove_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__remove_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(assoc_list__remove_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(assoc_list_module13)
	MR_init_entry1(assoc_list__map_keys_only_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__map_keys_only_3_0);
	MR_init_label3(assoc_list__map_keys_only_3_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_keys_only'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__map_keys_only_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__map_keys_only_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(assoc_list__map_keys_only_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__map_keys_only_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__assoc_list__map_keys_only_3_0_i4);
MR_def_label(assoc_list__map_keys_only_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(assoc_list__map_keys_only_3_0,
		assoc_list__map_keys_only_3_0_i6);
MR_def_label(assoc_list__map_keys_only_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module14)
	MR_init_entry1(fn__assoc_list__map_keys_only_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__map_keys_only_2_0);
	MR_init_label3(fn__assoc_list__map_keys_only_2_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_keys_only'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__map_keys_only_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__assoc_list__map_keys_only_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__assoc_list__map_keys_only_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__assoc_list__map_keys_only_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__assoc_list__map_keys_only_2_0_i4);
MR_def_label(fn__assoc_list__map_keys_only_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__assoc_list__map_keys_only_2_0,
		fn__assoc_list__map_keys_only_2_0_i6);
MR_def_label(fn__assoc_list__map_keys_only_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module15)
	MR_init_entry1(assoc_list__map_values_only_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__map_values_only_3_0);
	MR_init_label3(assoc_list__map_values_only_3_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values_only'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__map_values_only_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__map_values_only_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(assoc_list__map_values_only_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__map_values_only_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__assoc_list__map_values_only_3_0_i4);
MR_def_label(assoc_list__map_values_only_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(assoc_list__map_values_only_3_0,
		assoc_list__map_values_only_3_0_i6);
MR_def_label(assoc_list__map_values_only_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module16)
	MR_init_entry1(fn__assoc_list__map_values_only_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__map_values_only_2_0);
	MR_init_label3(fn__assoc_list__map_values_only_2_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values_only'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__map_values_only_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__assoc_list__map_values_only_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__assoc_list__map_values_only_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__assoc_list__map_values_only_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__assoc_list__map_values_only_2_0_i4);
MR_def_label(fn__assoc_list__map_values_only_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__assoc_list__map_values_only_2_0,
		fn__assoc_list__map_values_only_2_0_i6);
MR_def_label(fn__assoc_list__map_values_only_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(assoc_list_module17)
	MR_init_entry1(assoc_list__map_values_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__map_values_3_0);
	MR_init_label3(assoc_list__map_values_3_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__map_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__map_values_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(assoc_list__map_values_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__map_values_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__map_values_3_0_i4);
MR_def_label(assoc_list__map_values_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(assoc_list__map_values_3_0,
		assoc_list__map_values_3_0_i6);
MR_def_label(assoc_list__map_values_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module18)
	MR_init_entry1(fn__assoc_list__map_values_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__map_values_2_0);
	MR_init_label3(fn__assoc_list__map_values_2_0,18,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__map_values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__assoc_list__map_values_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__assoc_list__map_values_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__assoc_list__map_values_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__assoc_list__map_values_2_0_i4);
MR_def_label(fn__assoc_list__map_values_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__assoc_list__map_values_2_0,
		fn__assoc_list__map_values_2_0_i6);
MR_def_label(fn__assoc_list__map_values_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module19)
	MR_init_entry1(assoc_list__filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__filter_3_0);
	MR_init_label5(assoc_list__filter_3_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__filter_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(assoc_list__filter_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__filter_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__assoc_list__filter_3_0_i6);
MR_def_label(assoc_list__filter_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__filter_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(assoc_list__filter_3_0,
		assoc_list__filter_3_0_i8);
MR_def_label(assoc_list__filter_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__filter_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__filter_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module20)
	MR_init_entry1(fn__assoc_list__filter_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__filter_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__filter_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__filter_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module21)
	MR_init_entry1(assoc_list__negated_filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__negated_filter_3_0);
	MR_init_label5(assoc_list__negated_filter_3_0,25,3,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negated_filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__negated_filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__negated_filter_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(assoc_list__negated_filter_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__negated_filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__negated_filter_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__assoc_list__negated_filter_3_0_i6);
MR_def_label(assoc_list__negated_filter_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__negated_filter_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__negated_filter_3_0_i25);
MR_def_label(assoc_list__negated_filter_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(assoc_list__negated_filter_3_0,
		assoc_list__negated_filter_3_0_i9);
MR_def_label(assoc_list__negated_filter_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module22)
	MR_init_entry1(fn__assoc_list__negated_filter_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__negated_filter_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negated_filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__negated_filter_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__negated_filter_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module23)
	MR_init_entry1(assoc_list__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__filter_4_0);
	MR_init_label5(assoc_list__filter_4_0,30,6,8,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(assoc_list__filter_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(assoc_list__filter_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__filter_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__assoc_list__filter_4_0_i6);
MR_def_label(assoc_list__filter_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__filter_4_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(assoc_list__filter_4_0,
		assoc_list__filter_4_0_i8);
MR_def_label(assoc_list__filter_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(assoc_list__filter_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(assoc_list__filter_4_0,
		assoc_list__filter_4_0_i10);
MR_def_label(assoc_list__filter_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(assoc_list_module24)
	MR_init_entry1(assoc_list__merge_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__merge_3_0);
	MR_init_label7(assoc_list__merge_3_0,5,3,48,9,10,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__merge_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(assoc_list__merge_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(assoc_list__merge_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(assoc_list__merge_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(assoc_list__merge_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(assoc_list__merge_3_0_i48);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(assoc_list__merge_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tfield(0, MR_sv(8), 0);
	MR_r3 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		assoc_list__merge_3_0_i9);
MR_def_label(assoc_list__merge_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(assoc_list__merge_3_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(assoc_list__merge_3_0,
		assoc_list__merge_3_0_i10);
MR_def_label(assoc_list__merge_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(assoc_list__merge_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(assoc_list__merge_3_0,
		assoc_list__merge_3_0_i12);
MR_def_label(assoc_list__merge_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module25)
	MR_init_entry1(fn__assoc_list__merge_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__assoc_list__merge_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__assoc_list__merge_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__merge_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module26)
	MR_init_entry1(assoc_list__foldl_keys_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_0);
	MR_init_label3(assoc_list__foldl_keys_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__foldl_keys_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__foldl_keys_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__foldl_keys_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__foldl_keys_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__foldl_keys_4_0_i4);
MR_def_label(assoc_list__foldl_keys_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__foldl_keys_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module27)
	MR_init_entry1(assoc_list__foldl_keys_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_keys_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module28)
	MR_init_entry1(assoc_list__foldl_keys_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_keys_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module29)
	MR_init_entry1(assoc_list__foldl_keys_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_3);
	MR_init_label4(assoc_list__foldl_keys_4_3,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__foldl_keys_4_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__foldl_keys_4_3_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__foldl_keys_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__foldl_keys_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__foldl_keys_4_3_i4);
MR_def_label(assoc_list__foldl_keys_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__foldl_keys_4_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__foldl_keys_4_3_i18);
	}
MR_def_label(assoc_list__foldl_keys_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module30)
	MR_init_entry1(assoc_list__foldl_keys_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_keys_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module31)
	MR_init_entry1(assoc_list__foldl_keys_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_keys_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(assoc_list_module32)
	MR_init_entry1(assoc_list__foldl_keys_4_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_6);
	MR_init_label3(assoc_list__foldl_keys_4_6,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__foldl_keys_4_6_i12);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(assoc_list__foldl_keys_4_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred assoc_list.foldl_keys/4-6", 5,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__foldl_keys_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__foldl_keys_4_6_i3);
MR_def_label(assoc_list__foldl_keys_4_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(assoc_list__foldl_keys_4_6,
		assoc_list__foldl_keys_4_6_i11);
MR_def_label(assoc_list__foldl_keys_4_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module33)
	MR_init_entry1(assoc_list__foldl_keys_4_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_keys_4_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_keys'/4 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_keys_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_keys_4_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module34)
	MR_init_entry1(assoc_list__foldl_values_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_0);
	MR_init_label3(assoc_list__foldl_values_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__foldl_values_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__foldl_values_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__foldl_values_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 1);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__foldl_values_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__foldl_values_4_0_i4);
MR_def_label(assoc_list__foldl_values_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__foldl_values_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module35)
	MR_init_entry1(assoc_list__foldl_values_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_values_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module36)
	MR_init_entry1(assoc_list__foldl_values_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_values_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module37)
	MR_init_entry1(assoc_list__foldl_values_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_3);
	MR_init_label4(assoc_list__foldl_values_4_3,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(assoc_list__foldl_values_4_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__foldl_values_4_3_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(assoc_list__foldl_values_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 1);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__foldl_values_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__foldl_values_4_3_i4);
MR_def_label(assoc_list__foldl_values_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(assoc_list__foldl_values_4_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(assoc_list__foldl_values_4_3_i18);
	}
MR_def_label(assoc_list__foldl_values_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module38)
	MR_init_entry1(assoc_list__foldl_values_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_values_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module39)
	MR_init_entry1(assoc_list__foldl_values_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_values_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module40)
	MR_init_entry1(assoc_list__foldl_values_4_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_6);
	MR_init_label3(assoc_list__foldl_values_4_6,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(assoc_list__foldl_values_4_6_i12);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(assoc_list__foldl_values_4_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred assoc_list.foldl_values/4-6", 5,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 1);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(assoc_list__foldl_values_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__assoc_list__foldl_values_4_6_i3);
MR_def_label(assoc_list__foldl_values_4_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(assoc_list__foldl_values_4_6,
		assoc_list__foldl_values_4_6_i11);
MR_def_label(assoc_list__foldl_values_4_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module41)
	MR_init_entry1(assoc_list__foldl_values_4_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__assoc_list__foldl_values_4_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_values'/4 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__assoc_list__foldl_values_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(assoc_list__foldl_values_4_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(assoc_list_module42)
	MR_init_entry1(__Unify___assoc_list__assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___assoc_list__assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___assoc_list__assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(assoc_list_module43)
	MR_init_entry1(__Compare___assoc_list__assoc_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___assoc_list__assoc_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___assoc_list__assoc_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module44)
	MR_init_entry1(__Unify___assoc_list__assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___assoc_list__assoc_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___assoc_list__assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module45)
	MR_init_entry1(__Compare___assoc_list__assoc_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___assoc_list__assoc_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___assoc_list__assoc_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module46)
	MR_init_entry1(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label4(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,39,7,40,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__from_corresponding_2__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0_i40);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,
		f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(f_97_115_115_111_99_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_114_111_109_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_50_95_95_91_49_44_32_50_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(assoc_list_module47)
	MR_init_entry1(fn__f_97_115_115_111_99_95_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_115_115_111_99_95_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_115_115_111_99_95_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__assoc_list_maybe_bunch_0(void)
{
	assoc_list_module0();
	assoc_list_module1();
	assoc_list_module2();
	assoc_list_module3();
	assoc_list_module4();
	assoc_list_module5();
	assoc_list_module6();
	assoc_list_module7();
	assoc_list_module8();
	assoc_list_module9();
	assoc_list_module10();
	assoc_list_module11();
	assoc_list_module12();
	assoc_list_module13();
	assoc_list_module14();
	assoc_list_module15();
	assoc_list_module16();
	assoc_list_module17();
	assoc_list_module18();
	assoc_list_module19();
	assoc_list_module20();
	assoc_list_module21();
	assoc_list_module22();
	assoc_list_module23();
	assoc_list_module24();
	assoc_list_module25();
	assoc_list_module26();
	assoc_list_module27();
	assoc_list_module28();
	assoc_list_module29();
	assoc_list_module30();
	assoc_list_module31();
	assoc_list_module32();
	assoc_list_module33();
	assoc_list_module34();
	assoc_list_module35();
	assoc_list_module36();
	assoc_list_module37();
	assoc_list_module38();
	assoc_list_module39();
}

static void mercury__assoc_list_maybe_bunch_1(void)
{
	assoc_list_module40();
	assoc_list_module41();
	assoc_list_module42();
	assoc_list_module43();
	assoc_list_module44();
	assoc_list_module45();
	assoc_list_module46();
	assoc_list_module47();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__assoc_list__init(void);
void mercury__assoc_list__init_type_tables(void);
void mercury__assoc_list__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__assoc_list__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__assoc_list__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__assoc_list__init_threadscope_string_table(void);
#endif

void mercury__assoc_list__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__assoc_list_maybe_bunch_0();
	mercury__assoc_list_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_assoc_list__type_ctor_info_assoc_list_2,
		assoc_list__assoc_list_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_assoc_list__type_ctor_info_assoc_list_1,
		assoc_list__assoc_list_1_0);
	mercury__assoc_list__init_debugger();
}

void mercury__assoc_list__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_assoc_list__type_ctor_info_assoc_list_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_assoc_list__type_ctor_info_assoc_list_1);
	}
}


void mercury__assoc_list__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__assoc_list__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__assoc_list);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__assoc_list__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__assoc_list__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
