/*
** Automatically generated from `lazy.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__lazy__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "lazy.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "lazy.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "lazy.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "lazy.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "lazy.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 48 "lazy.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "lazy.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "lazy.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "lazy.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "lazy.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "lazy.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "lazy.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "lazy.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "lazy.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "lazy.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "lazy.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "lazy.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "lazy.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "lazy.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "lazy.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "lazy.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "lazy.c"
#line 113 "lazy.c"
#include "lazy.mh"

#line 116 "lazy.c"
#line 117 "lazy.c"
#ifndef LAZY_DECL_GUARD
#define LAZY_DECL_GUARD

#line 121 "lazy.c"
#line 122 "lazy.c"

#endif
#line 125 "lazy.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_lazy__type_ctor_info_lazy_1,
	mercury_data_lazy__type_ctor_info_lazy_state_1;
MR_decl_label2(lazy__compare_values_3_0, 2,3)
MR_decl_label2(lazy__equal_values_2_0, 2,3)
MR_decl_label2(lazy__read_if_val_2_0, 3,1)
MR_decl_label1(fn__lazy__delay_1_0, 4)
MR_decl_label4(fn__lazy__force_1_0, 3,6,8,5)
MR_decl_label1(fn__lazy__val_1_0, 4)
MR_decl_label3(__Unify___lazy__lazy_1_0, 4,5,8)
MR_decl_label3(__Unify___lazy__lazy_state_1_0, 16,5,1)
MR_decl_label4(__Compare___lazy__lazy_1_0, 3,2,4,5)
MR_decl_label5(__Compare___lazy__lazy_state_1_0, 3,2,7,5,10)
MR_def_extern_entry(fn__lazy__val_1_0)
MR_def_extern_entry(fn__lazy__delay_1_0)
MR_def_extern_entry(fn__lazy__force_1_0)
MR_def_extern_entry(lazy__read_if_val_2_0)
MR_def_extern_entry(lazy__equal_values_2_0)
MR_def_extern_entry(lazy__compare_values_3_0)
MR_def_extern_entry(__Unify___lazy__lazy_1_0)
MR_def_extern_entry(__Compare___lazy__lazy_1_0)
MR_def_extern_entry(__Unify___lazy__lazy_state_1_0)
MR_def_extern_entry(__Compare___lazy__lazy_state_1_0)
MR_decl_static(fn__f_108_97_122_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_mutvar__type_ctor_info_mutvar_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_lazy__pti_lazy_state_1__pseudo_1 = {
	&mercury_data_lazy__type_ctor_info_lazy_state_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1 = {
	&mercury_data_mutvar__type_ctor_info_mutvar_1,
{	(MR_PseudoTypeInfo) &mercury_data_lazy__pti_lazy_state_1__pseudo_1
}};

const MR_PseudoTypeInfo mercury_data_lazy__field_types_lazy_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mutvar__pti_mutvar_1__pseudo_lazy__pti_lazy_state_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_lazy__du_functor_desc_lazy_1_0 = {
	"lazy",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_lazy__field_types_lazy_1_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_lazy__du_stag_ordered_lazy_1_0[] = {
	&mercury_data_lazy__du_functor_desc_lazy_1_0

};

const MR_DuPtagLayout mercury_data_lazy__du_ptag_ordered_lazy_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_lazy__du_stag_ordered_lazy_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_lazy__du_name_ordered_lazy_1[] = {
	&mercury_data_lazy__du_functor_desc_lazy_1_0
};

const MR_Integer mercury_data_lazy__functor_number_map_lazy_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_1 = {
	1,
	15,
	1,
	MR_TYPECTOR_REP_DU_USEREQ,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lazy__lazy_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lazy__lazy_1_0)),
	"lazy",
	"lazy",
	{ (void *)mercury_data_lazy__du_name_ordered_lazy_1 },
	{ (void *)mercury_data_lazy__du_ptag_ordered_lazy_1 },
	1,
	4,
	mercury_data_lazy__functor_number_map_lazy_1
};

const MR_PseudoTypeInfo mercury_data_lazy__field_types_lazy_state_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_lazy__du_functor_desc_lazy_state_1_0 = {
	"value",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_lazy__field_types_lazy_state_1_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

static const MR_VA_PseudoTypeInfo_Struct1 mercury_data___vpti_func_1__pseudo_1 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_lazy__field_types_lazy_state_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data___vpti_func_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_lazy__du_functor_desc_lazy_state_1_1 = {
	"closure",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_lazy__field_types_lazy_state_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_lazy__du_stag_ordered_lazy_state_1_0[] = {
	&mercury_data_lazy__du_functor_desc_lazy_state_1_0

};

const MR_DuFunctorDescPtr mercury_data_lazy__du_stag_ordered_lazy_state_1_1[] = {
	&mercury_data_lazy__du_functor_desc_lazy_state_1_1

};

const MR_DuPtagLayout mercury_data_lazy__du_ptag_ordered_lazy_state_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_lazy__du_stag_ordered_lazy_state_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_lazy__du_stag_ordered_lazy_state_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_lazy__du_name_ordered_lazy_state_1[] = {
	&mercury_data_lazy__du_functor_desc_lazy_state_1_1,
	&mercury_data_lazy__du_functor_desc_lazy_state_1_0
};

const MR_Integer mercury_data_lazy__functor_number_map_lazy_state_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_lazy__type_ctor_info_lazy_state_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___lazy__lazy_state_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___lazy__lazy_state_1_0)),
	"lazy",
	"lazy_state",
	{ (void *)mercury_data_lazy__du_name_ordered_lazy_state_1 },
	{ (void *)mercury_data_lazy__du_ptag_ordered_lazy_state_1 },
	2,
	4,
	mercury_data_lazy__functor_number_map_lazy_state_1
};



MR_decl_entry(mutvar__new_mutvar_2_0);

MR_BEGIN_MODULE(lazy_module0)
	MR_init_entry1(fn__lazy__val_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__lazy__val_1_0);
	MR_init_label1(fn__lazy__val_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'val'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__lazy__val_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(lazy, lazy_state);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		fn__lazy__val_1_0_i4);
MR_def_label(fn__lazy__val_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lazy_module1)
	MR_init_entry1(fn__lazy__delay_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__lazy__delay_1_0);
	MR_init_label1(fn__lazy__delay_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delay'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__lazy__delay_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(lazy, lazy_state);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		fn__lazy__delay_1_0_i4);
MR_def_label(fn__lazy__delay_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__get_mutvar_2_0);
MR_declare_entry(mercury__do_call_closure_0);
MR_decl_entry(mutvar__set_mutvar_2_0);

MR_BEGIN_MODULE(lazy_module2)
	MR_init_entry1(fn__lazy__force_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__lazy__force_1_0);
	MR_init_label4(fn__lazy__force_1_0,3,6,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'force'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__lazy__force_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(lazy, lazy_state);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		fn__lazy__force_1_0_i3);
MR_def_label(fn__lazy__force_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__lazy__force_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__lazy__force_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__fn__lazy__force_1_0_i6);
MR_def_label(fn__lazy__force_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		fn__lazy__force_1_0_i8);
MR_def_label(fn__lazy__force_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__lazy__force_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lazy_module3)
	MR_init_entry1(lazy__read_if_val_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lazy__read_if_val_2_0);
	MR_init_label2(lazy__read_if_val_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_if_val'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lazy__read_if_val_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(lazy, lazy_state);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		lazy__read_if_val_2_0_i3);
MR_def_label(lazy__read_if_val_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(lazy__read_if_val_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(lazy__read_if_val_2_0,1)
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

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(lazy_module4)
	MR_init_entry1(lazy__equal_values_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lazy__equal_values_2_0);
	MR_init_label2(lazy__equal_values_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_values'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lazy__equal_values_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		lazy__equal_values_2_0_i2);
MR_def_label(lazy__equal_values_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		lazy__equal_values_2_0_i3);
MR_def_label(lazy__equal_values_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(lazy_module5)
	MR_init_entry1(lazy__compare_values_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__lazy__compare_values_3_0);
	MR_init_label2(lazy__compare_values_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__lazy__compare_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		lazy__compare_values_3_0_i2);
MR_def_label(lazy__compare_values_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		lazy__compare_values_3_0_i3);
MR_def_label(lazy__compare_values_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lazy_module6)
	MR_init_entry1(__Unify___lazy__lazy_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lazy__lazy_1_0);
	MR_init_label3(__Unify___lazy__lazy_1_0,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lazy__lazy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___lazy__lazy_1_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		__Unify___lazy__lazy_1_0_i4);
MR_def_label(__Unify___lazy__lazy_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		__Unify___lazy__lazy_1_0_i5);
MR_def_label(__Unify___lazy__lazy_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___lazy__lazy_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lazy_module7)
	MR_init_entry1(__Compare___lazy__lazy_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lazy__lazy_1_0);
	MR_init_label4(__Compare___lazy__lazy_1_0,3,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lazy__lazy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___lazy__lazy_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(__Compare___lazy__lazy_1_0_i2);
MR_def_label(__Compare___lazy__lazy_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lazy__lazy_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		__Compare___lazy__lazy_1_0_i4);
MR_def_label(__Compare___lazy__lazy_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__lazy__force_1_0,
		__Compare___lazy__lazy_1_0_i5);
MR_def_label(__Compare___lazy__lazy_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(lazy_module8)
	MR_init_entry1(__Unify___lazy__lazy_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___lazy__lazy_state_1_0);
	MR_init_label3(__Unify___lazy__lazy_state_1_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___lazy__lazy_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___lazy__lazy_state_1_0_i16);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___lazy__lazy_state_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___lazy__lazy_state_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
	}
MR_def_label(__Unify___lazy__lazy_state_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___lazy__lazy_state_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___lazy__lazy_state_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___lazy__lazy_state_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(lazy_module9)
	MR_init_entry1(__Compare___lazy__lazy_state_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___lazy__lazy_state_1_0);
	MR_init_label5(__Compare___lazy__lazy_state_1_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___lazy__lazy_state_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___lazy__lazy_state_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___lazy__lazy_state_1_0_i2);
MR_def_label(__Compare___lazy__lazy_state_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___lazy__lazy_state_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___lazy__lazy_state_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___lazy__lazy_state_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
MR_def_label(__Compare___lazy__lazy_state_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lazy__lazy_state_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___lazy__lazy_state_1_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___lazy__lazy_state_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(lazy_module10)
	MR_init_entry1(fn__f_108_97_122_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_97_122_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_97_122_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__lazy_maybe_bunch_0(void)
{
	lazy_module0();
	lazy_module1();
	lazy_module2();
	lazy_module3();
	lazy_module4();
	lazy_module5();
	lazy_module6();
	lazy_module7();
	lazy_module8();
	lazy_module9();
	lazy_module10();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__lazy__init(void);
void mercury__lazy__init_type_tables(void);
void mercury__lazy__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__lazy__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__lazy__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__lazy__init_threadscope_string_table(void);
#endif

void mercury__lazy__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__lazy_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lazy__type_ctor_info_lazy_1,
		lazy__lazy_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_lazy__type_ctor_info_lazy_state_1,
		lazy__lazy_state_1_0);
	mercury__lazy__init_debugger();
}

void mercury__lazy__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_lazy__type_ctor_info_lazy_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_lazy__type_ctor_info_lazy_state_1);
	}
}


void mercury__lazy__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__lazy__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__lazy);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__lazy__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__lazy__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
