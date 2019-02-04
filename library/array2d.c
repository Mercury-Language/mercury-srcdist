/*
** Automatically generated from `array2d.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__array2d__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 128 "array.int"
#include "array.mh"

#line 27 "array2d.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "array2d.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "array2d.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "array2d.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "array2d.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 47 "array2d.c"
#line 148 "io.opt"
#include "dir.mh"

#line 51 "array2d.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 55 "array2d.c"
#line 4 "char.opt"
#include "char.mh"

#line 59 "array2d.c"
#line 3 "float.opt"
#include "float.mh"

#line 63 "array2d.c"
#line 3 "math.opt"
#include "math.mh"

#line 67 "array2d.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 71 "array2d.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 75 "array2d.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 79 "array2d.c"
#line 23 "store.opt"
#include "store.mh"

#line 83 "array2d.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 87 "array2d.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 91 "array2d.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "array2d.c"
#line 3 "list.opt"
#include "list.mh"

#line 99 "array2d.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "array2d.c"
#line 104 "array2d.c"
#include "array2d.mh"

#line 107 "array2d.c"
#line 108 "array2d.c"
#ifndef ARRAY2D_DECL_GUARD
#define ARRAY2D_DECL_GUARD

#line 112 "array2d.c"
#line 113 "array2d.c"

#endif
#line 116 "array2d.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_array2d__type_ctor_info_array2d_1;
MR_decl_label1(array2d__in_bounds_3_0, 1)
MR_decl_label1(array2d__unsafe_set_5_0, 2)
MR_decl_label8(fn__array2d__array2d_1_0, 33,4,5,6,7,14,16,12)
MR_decl_label1(fn__array2d__array2d_1_0, 9)
MR_decl_label1(fn__array2d__elem_3_0, 2)
MR_decl_label2(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0, 3,2)
MR_decl_label4(fn__array2d__lists_2_6_0, 18,4,3,2)
MR_decl_label2(fn__array2d__new_3_0, 3,2)
MR_decl_label1(fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0, 2)
MR_decl_label2(__Unify___array2d__array2d_1_0, 6,1)
MR_decl_label8(__Compare___array2d__array2d_1_0, 3,2,6,7,9,14,15,17)
MR_decl_label1(__Compare___array2d__array2d_1_0, 49)
MR_def_extern_entry(fn__array2d__array2d_1_0)
MR_def_extern_entry(fn__array2d__from_lists_1_0)
MR_def_extern_entry(fn__array2d__new_3_0)
MR_def_extern_entry(fn__array2d__unsafe_elem_3_0)
MR_def_extern_entry(array2d__in_bounds_3_0)
MR_def_extern_entry(fn__array2d__elem_3_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0)
MR_def_extern_entry(array2d__set_5_0)
MR_def_extern_entry(array2d__unsafe_set_5_0)
MR_def_extern_entry(array2d__bounds_3_0)
MR_decl_static(fn__array2d__lists_2_6_0)
MR_def_extern_entry(fn__array2d__lists_1_0)
MR_def_extern_entry(__Unify___array2d__array2d_1_0)
MR_def_extern_entry(__Compare___array2d__array2d_1_0)
MR_decl_static(fn__f_97_114_114_97_121_50_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_array__pti_array_1__pseudo_1 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_array2d__field_types_array2d_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_array__pti_array_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_array2d__du_functor_desc_array2d_1_0 = {
	"array2d",
	3,
	4,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_array2d__field_types_array2d_1_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_array2d__du_stag_ordered_array2d_1_0[] = {
	&mercury_data_array2d__du_functor_desc_array2d_1_0

};

const MR_DuPtagLayout mercury_data_array2d__du_ptag_ordered_array2d_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_array2d__du_stag_ordered_array2d_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_array2d__du_name_ordered_array2d_1[] = {
	&mercury_data_array2d__du_functor_desc_array2d_1_0
};

const MR_Integer mercury_data_array2d__functor_number_map_array2d_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_array2d__type_ctor_info_array2d_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___array2d__array2d_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___array2d__array2d_1_0)),
	"array2d",
	"array2d",
	{ (void *)mercury_data_array2d__du_name_ordered_array2d_1 },
	{ (void *)mercury_data_array2d__du_ptag_ordered_array2d_1 },
	1,
	4,
	mercury_data_array2d__functor_number_map_array2d_1
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(array__from_list_2_0);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(array2d_module0)
	MR_init_entry1(fn__array2d__array2d_1_0);
	MR_init_label8(fn__array2d__array2d_1_0,33,4,5,6,7,14,16,12)
	MR_init_label1(fn__array2d__array2d_1_0,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array2d__array2d_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__array2d__array2d_1_0_i33);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array2d__array2d_1_0
{
#line 78 "array.opt"

    ML_alloc_array(Array, 1, MR_PROC_LABEL);
    ML_init_array(Array, 0, 0);
;}
#line 250 "array2d.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__array2d__array2d_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__array2d__array2d_1_0_i4);
MR_def_label(fn__array2d__array2d_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__array2d__array2d_1_0_i5);
MR_def_label(fn__array2d__array2d_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__condense_2_0,
		fn__array2d__array2d_1_0_i6);
MR_def_label(fn__array2d__array2d_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(array__from_list_2_0,
		fn__array2d__array2d_1_0_i7);
MR_def_label(fn__array2d__array2d_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__array2d__array2d_1_0_i12);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		fn__array2d__array2d_1_0_i14);
MR_def_label(fn__array2d__array2d_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__array2d__array2d_1_0_i16);
MR_def_label(fn__array2d__array2d_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(fn__array2d__array2d_1_0_i9);
MR_def_label(fn__array2d__array2d_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(fn__array2d__array2d_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(array2d, array2d);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("array2d.array2d/1: non-rectangular list of lists", 48);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module1)
	MR_init_entry1(fn__array2d__from_lists_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array2d__from_lists_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__array2d__array2d_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__init_3_0);

MR_BEGIN_MODULE(array2d_module2)
	MR_init_entry1(fn__array2d__new_3_0);
	MR_init_label2(fn__array2d__new_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array2d__new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__array2d__new_3_0_i2);
	}
	if (MR_INT_LT(MR_r3,0)) {
		MR_GOTO_LAB(fn__array2d__new_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_r2 * (MR_Integer) MR_tempr1);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(array__init_3_0,
		fn__array2d__new_3_0_i3);
MR_def_label(fn__array2d__new_3_0,3)
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
MR_def_label(fn__array2d__new_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(array2d, array2d);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("array2d.new: bounds must be non-negative", 40);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);

MR_BEGIN_MODULE(array2d_module3)
	MR_init_entry1(fn__array2d__unsafe_elem_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array2d__unsafe_elem_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = (((MR_Integer) MR_tempr1 * (MR_Integer) MR_ctfield(0, MR_tempr2, 1)) + (MR_Integer) MR_r3);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module4)
	MR_init_entry1(array2d__in_bounds_3_0);
	MR_init_label1(array2d__in_bounds_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array2d__in_bounds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array2d__in_bounds_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array2d__in_bounds_3_0_i1);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array2d__in_bounds_3_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = ((MR_Integer) MR_r4 < (MR_Integer) MR_r1);
	MR_proceed();
	}
MR_def_label(array2d__in_bounds_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module5)
	MR_init_entry1(fn__array2d__elem_3_0);
	MR_init_label1(fn__array2d__elem_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array2d__elem_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__array2d__elem_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__array2d__elem_3_0_i2);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__array2d__elem_3_0_i2);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__array2d__elem_3_0_i2);
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = (((MR_Integer) MR_tempr2 * (MR_Integer) MR_tempr1) + (MR_Integer) MR_r3);
	MR_np_tailcall_ent(array__lookup_3_0);
	}
MR_def_label(fn__array2d__elem_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("array2d.elem: indices out of bounds", 35);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(array2d_module6)
	MR_init_entry1(fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0);
	MR_init_label1(fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = (((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r3);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0_i2);
MR_def_label(fn__f_97_114_114_97_121_50_100_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_0,2)
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


MR_BEGIN_MODULE(array2d_module7)
	MR_init_entry1(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0);
	MR_init_label2(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0_i2);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r4, 2);
	MR_r3 = (((MR_Integer) MR_tempr3 * (MR_Integer) MR_tempr2) + (MR_Integer) MR_r3);
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0_i3);
MR_def_label(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0,3)
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
MR_def_label(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(array2d, array2d);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("array2d.\'elem :=\': indices out of bounds", 40);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module8)
	MR_init_entry1(array2d__set_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array2d__set_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_50_100_95_95_101_108_101_109_32_58_61_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module9)
	MR_init_entry1(array2d__unsafe_set_5_0);
	MR_init_label1(array2d__unsafe_set_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array2d__unsafe_set_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = (((MR_Integer) MR_tempr1 * (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r3);
	}
	MR_np_call_localret_ent(array__set_4_0,
		array2d__unsafe_set_5_0_i2);
MR_def_label(array2d__unsafe_set_5_0,2)
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


MR_BEGIN_MODULE(array2d_module10)
	MR_init_entry1(array2d__bounds_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array2d__bounds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module11)
	MR_init_entry1(fn__array2d__lists_2_6_0);
	MR_init_label4(fn__array2d__lists_2_6_0,18,4,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array2d__lists_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__array2d__lists_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__array2d__lists_2_6_0_i2);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__array2d__lists_2_6_0_i3);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_tempr2 = MR_r2;
	MR_sv(5) = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_sv(6) = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array2d__lists_2_6_0_i4);
MR_def_label(fn__array2d__lists_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__array2d__lists_2_6_0_i18);
	}
MR_def_label(fn__array2d__lists_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tfield(1, MR_tempr1, 1) = MR_r7;
	MR_r3 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__array2d__lists_2_6_0_i18);
	}
MR_def_label(fn__array2d__lists_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r6;
	MR_tfield(1, MR_r1, 1) = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module12)
	MR_init_entry1(fn__array2d__lists_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array2d__lists_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = (((MR_Integer) MR_ctfield(0, MR_r2, 0) * (MR_Integer) MR_tempr2) - (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__array2d__lists_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(array2d_module13)
	MR_init_entry1(__Unify___array2d__array2d_1_0);
	MR_init_label2(__Unify___array2d__array2d_1_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___array2d__array2d_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___array2d__array2d_1_0_i6);
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
		MR_GOTO_LAB(__Unify___array2d__array2d_1_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___array2d__array2d_1_0_i1);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
MR_def_label(__Unify___array2d__array2d_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___array2d__array2d_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(array2d_module14)
	MR_init_entry1(__Compare___array2d__array2d_1_0);
	MR_init_label8(__Compare___array2d__array2d_1_0,3,2,6,7,9,14,15,17)
	MR_init_label1(__Compare___array2d__array2d_1_0,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___array2d__array2d_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i2);
MR_def_label(__Compare___array2d__array2d_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___array2d__array2d_1_0,2)
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
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i9);
	}
MR_def_label(__Compare___array2d__array2d_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i9);
MR_def_label(__Compare___array2d__array2d_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___array2d__array2d_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i17);
MR_def_label(__Compare___array2d__array2d_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i17);
MR_def_label(__Compare___array2d__array2d_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___array2d__array2d_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___array2d__array2d_1_0_i49);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Compare___array__array_1_0);
MR_def_label(__Compare___array2d__array2d_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array2d_module15)
	MR_init_entry1(fn__f_97_114_114_97_121_50_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_50_100_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__array2d_maybe_bunch_0(void)
{
	array2d_module0();
	array2d_module1();
	array2d_module2();
	array2d_module3();
	array2d_module4();
	array2d_module5();
	array2d_module6();
	array2d_module7();
	array2d_module8();
	array2d_module9();
	array2d_module10();
	array2d_module11();
	array2d_module12();
	array2d_module13();
	array2d_module14();
	array2d_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__array2d__init(void);
void mercury__array2d__init_type_tables(void);
void mercury__array2d__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__array2d__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__array2d__init_complexity_procs(void);
#endif

void mercury__array2d__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__array2d_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_array2d__type_ctor_info_array2d_1,
		array2d__array2d_1_0);
	mercury__array2d__init_debugger();
}

void mercury__array2d__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_array2d__type_ctor_info_array2d_1);
	}
}


void mercury__array2d__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__array2d__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__array2d__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
