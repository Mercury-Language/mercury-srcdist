/*
** Automatically generated from `solutions.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__solutions__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "solutions.c"
#include "solutions.mh"

#line 28 "solutions.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "solutions.c"
#line 150 "io.int2"
#include "time.mh"

#line 36 "solutions.c"
#line 151 "io.int2"
#include "string.mh"

#line 40 "solutions.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "solutions.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "solutions.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 52 "solutions.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 56 "solutions.c"
#line 58 "array.opt"
#include "store.mh"

#line 60 "solutions.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "solutions.c"
#line 157 "io.opt"
#include "dir.mh"

#line 68 "solutions.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 72 "solutions.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "solutions.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "solutions.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "solutions.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "solutions.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "solutions.c"
#line 4 "char.opt"
#include "char.mh"

#line 96 "solutions.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 100 "solutions.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 104 "solutions.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "solutions.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 112 "solutions.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "solutions.c"
#line 117 "solutions.c"
#ifndef SOLUTIONS_DECL_GUARD
#define SOLUTIONS_DECL_GUARD

#line 121 "solutions.c"
#line 780 "solutions.m"


#include "mercury_deep_copy.h"

#ifndef MR_RECLAIM_HP_ON_FAILURE
  /* for conservative GC, shallow copies suffice */
  #define MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr,                        \
        OldVar, NewVal, TypeInfo_for_T)                                 \
    do {                                                                \
        NewVal = OldVal;                                                \
    } while (0)
#else
  /*
  ** Note that we need to save/restore the MR_hp register, if it
  ** is transient, before/after calling MR_deep_copy().
  */
  #define MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr,                        \
        OldVar, NewVal, TypeInfo_for_T)                                 \
    do {                                                                \
        MR_save_transient_hp();                                         \
        NewVal = MR_deep_copy(OldVal, (MR_TypeInfo) TypeInfo_for_T,     \
            (const MR_Word *) SolutionsHeapPtr,                         \
            MR_ENGINE(MR_eng_solutions_heap_zone)->MR_zone_top);        \
        MR_restore_transient_hp();                                      \
    } while (0)
#endif


#line 151 "solutions.c"
#line 152 "solutions.c"

#endif
#line 155 "solutions.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[5];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_solutions__type_ctor_info_heap_ptr_0,
	mercury_data_solutions__type_ctor_info_trail_ptr_0;
MR_decl_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label3(solutions__aggregate_4_0, 2,3,4)
MR_decl_label3(solutions__aggregate_4_1, 2,3,4)
MR_decl_label3(solutions__aggregate_4_2, 2,3,4)
MR_decl_label3(solutions__aggregate_4_3, 2,3,4)
MR_decl_label3(solutions__aggregate2_6_0, 2,3,4)
MR_decl_label3(solutions__aggregate2_6_1, 2,3,4)
MR_decl_label3(solutions__aggregate2_6_2, 2,3,4)
MR_decl_label3(solutions__aggregate2_6_3, 2,3,4)
MR_decl_label7(solutions__builtin_aggregate_4_0, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_1, 2,8,9,10,11,6,13)
MR_decl_label8(solutions__builtin_aggregate_4_2, 2,8,9,10,11,12,6,14)
MR_decl_label8(solutions__builtin_aggregate_4_3, 2,8,9,10,11,12,6,14)
MR_decl_label7(solutions__builtin_aggregate_4_4, 2,8,9,10,11,6,13)
MR_decl_label7(solutions__builtin_aggregate_4_5, 2,8,9,10,11,6,13)
MR_decl_label8(solutions__builtin_aggregate_4_6, 2,8,9,10,11,12,6,14)
MR_decl_label7(solutions__builtin_aggregate_4_7, 2,8,9,10,11,6,13)
MR_decl_label8(solutions__builtin_aggregate_4_8, 2,8,9,10,11,12,6,14)
MR_decl_label7(solutions__builtin_aggregate_4_9, 2,8,9,10,11,6,13)
MR_decl_label10(solutions__builtin_aggregate2_6_0, 2,3,9,10,11,12,13,14,7,16)
MR_decl_label1(solutions__builtin_aggregate2_6_0, 17)
MR_decl_label10(solutions__builtin_aggregate2_6_1, 2,3,9,10,11,12,13,14,15,7)
MR_decl_label2(solutions__builtin_aggregate2_6_1, 17,18)
MR_decl_label10(solutions__builtin_aggregate2_6_2, 2,3,9,10,11,12,13,14,7,16)
MR_decl_label1(solutions__builtin_aggregate2_6_2, 17)
MR_decl_label10(solutions__builtin_aggregate2_6_3, 2,3,9,10,11,12,13,14,15,7)
MR_decl_label2(solutions__builtin_aggregate2_6_3, 17,18)
MR_decl_label10(solutions__builtin_aggregate2_6_4, 2,3,9,10,11,12,13,14,7,16)
MR_decl_label1(solutions__builtin_aggregate2_6_4, 17)
MR_decl_label10(solutions__builtin_aggregate2_6_5, 2,3,9,10,11,12,13,14,15,7)
MR_decl_label2(solutions__builtin_aggregate2_6_5, 17,18)
MR_decl_label10(solutions__builtin_aggregate2_6_6, 2,3,9,10,11,12,13,14,7,16)
MR_decl_label1(solutions__builtin_aggregate2_6_6, 17)
MR_decl_label10(solutions__builtin_aggregate2_6_7, 2,3,9,10,11,12,13,14,15,7)
MR_decl_label2(solutions__builtin_aggregate2_6_7, 17,18)
MR_decl_label6(solutions__builtin_solutions_2_0, 3,9,10,12,7,14)
MR_decl_label6(solutions__builtin_solutions_2_1, 3,9,10,12,7,14)
MR_decl_label10(solutions__do_while_4_0, 2,8,9,10,11,6,13,5,3,14)
MR_decl_label10(solutions__do_while_4_1, 2,8,9,10,11,6,13,5,3,14)
MR_decl_label10(solutions__do_while_4_2, 2,8,9,10,11,12,6,14,5,3)
MR_decl_label1(solutions__do_while_4_2, 15)
MR_decl_label10(solutions__do_while_4_3, 2,8,9,10,11,6,13,5,3,14)
MR_decl_label10(solutions__do_while_4_4, 2,8,9,10,11,6,13,5,3,14)
MR_decl_label10(solutions__do_while_4_5, 2,8,9,10,11,12,6,14,5,3)
MR_decl_label1(solutions__do_while_4_5, 15)
MR_decl_label2(solutions__solutions_2_0, 2,3)
MR_decl_label2(solutions__solutions_2_1, 2,3)
MR_decl_label2(solutions__solutions_set_2_0, 2,3)
MR_decl_label2(solutions__solutions_set_2_1, 2,3)
MR_decl_label1(solutions__unsorted_aggregate_4_0, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_1, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_2, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_3, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_4, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_5, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_6, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_7, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_8, 2)
MR_decl_label1(solutions__unsorted_aggregate_4_9, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_0, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_1, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_2, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_3, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_4, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_5, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_6, 2)
MR_decl_label1(solutions__unsorted_aggregate2_6_7, 2)
MR_decl_label1(solutions__unsorted_solutions_2_0, 2)
MR_decl_label1(solutions__unsorted_solutions_2_1, 2)
MR_decl_label3(fn__solutions__aggregate_3_0, 2,3,4)
MR_decl_label3(fn__solutions__aggregate_3_1, 2,3,4)
MR_decl_label2(fn__solutions__solutions_1_0, 2,3)
MR_decl_label2(fn__solutions__solutions_1_1, 2,3)
MR_decl_label2(fn__solutions__solutions_set_1_0, 2,3)
MR_decl_label2(fn__solutions__solutions_set_1_1, 2,3)
MR_decl_label1(__Unify___solutions__trail_ptr_0_0, 6)
MR_decl_label2(__Compare___solutions__trail_ptr_0_0, 3,2)
MR_decl_static(solutions__get_registers_3_0)
MR_decl_static(solutions__check_for_floundering_1_0)
MR_decl_static(solutions__discard_trail_ticket_0_0)
MR_decl_static(solutions__swap_heap_and_solutions_heap_0_0)
MR_decl_static(solutions__partial_deep_copy_3_0)
MR_decl_static(solutions__partial_deep_copy_3_1)
MR_decl_static(solutions__partial_deep_copy_3_2)
MR_decl_static(solutions__reset_solutions_heap_1_0)
MR_decl_static(solutions__start_all_soln_neg_context_0_0)
MR_decl_static(solutions__end_all_soln_neg_context_no_more_0_0)
MR_def_extern_entry(solutions__builtin_aggregate_4_0)
MR_def_extern_entry(solutions__builtin_aggregate_4_1)
MR_def_extern_entry(solutions__builtin_aggregate_4_2)
MR_def_extern_entry(solutions__builtin_aggregate_4_3)
MR_def_extern_entry(solutions__builtin_aggregate_4_4)
MR_def_extern_entry(solutions__builtin_aggregate_4_5)
MR_def_extern_entry(solutions__builtin_aggregate_4_6)
MR_def_extern_entry(solutions__builtin_aggregate_4_7)
MR_def_extern_entry(solutions__builtin_aggregate_4_8)
MR_def_extern_entry(solutions__builtin_aggregate_4_9)
MR_def_extern_entry(solutions__builtin_solutions_2_0)
MR_def_extern_entry(solutions__builtin_solutions_2_1)
MR_def_extern_entry(solutions__solutions_2_0)
MR_def_extern_entry(solutions__solutions_2_1)
MR_def_extern_entry(fn__solutions__solutions_1_0)
MR_def_extern_entry(fn__solutions__solutions_1_1)
MR_def_extern_entry(solutions__solutions_set_2_0)
MR_def_extern_entry(solutions__solutions_set_2_1)
MR_def_extern_entry(fn__solutions__solutions_set_1_0)
MR_def_extern_entry(fn__solutions__solutions_set_1_1)
MR_def_extern_entry(solutions__unsorted_solutions_2_0)
MR_def_extern_entry(solutions__unsorted_solutions_2_1)
MR_def_extern_entry(solutions__aggregate_4_0)
MR_def_extern_entry(solutions__aggregate_4_1)
MR_def_extern_entry(solutions__aggregate_4_2)
MR_def_extern_entry(solutions__aggregate_4_3)
MR_def_extern_entry(fn__solutions__aggregate_3_0)
MR_def_extern_entry(fn__solutions__aggregate_3_1)
MR_def_extern_entry(solutions__aggregate2_6_0)
MR_def_extern_entry(solutions__aggregate2_6_1)
MR_def_extern_entry(solutions__aggregate2_6_2)
MR_def_extern_entry(solutions__aggregate2_6_3)
MR_def_extern_entry(solutions__unsorted_aggregate_4_0)
MR_def_extern_entry(solutions__unsorted_aggregate_4_1)
MR_def_extern_entry(solutions__unsorted_aggregate_4_2)
MR_def_extern_entry(solutions__unsorted_aggregate_4_3)
MR_def_extern_entry(solutions__unsorted_aggregate_4_4)
MR_def_extern_entry(solutions__unsorted_aggregate_4_5)
MR_def_extern_entry(solutions__unsorted_aggregate_4_6)
MR_def_extern_entry(solutions__unsorted_aggregate_4_7)
MR_def_extern_entry(solutions__unsorted_aggregate_4_8)
MR_def_extern_entry(solutions__unsorted_aggregate_4_9)
MR_def_extern_entry(solutions__builtin_aggregate2_6_0)
MR_def_extern_entry(solutions__builtin_aggregate2_6_1)
MR_def_extern_entry(solutions__builtin_aggregate2_6_2)
MR_def_extern_entry(solutions__builtin_aggregate2_6_3)
MR_def_extern_entry(solutions__builtin_aggregate2_6_4)
MR_def_extern_entry(solutions__builtin_aggregate2_6_5)
MR_def_extern_entry(solutions__builtin_aggregate2_6_6)
MR_def_extern_entry(solutions__builtin_aggregate2_6_7)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_0)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_1)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_2)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_3)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_4)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_5)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_6)
MR_def_extern_entry(solutions__unsorted_aggregate2_6_7)
MR_decl_static(solutions__end_all_soln_neg_context_more_0_0)
MR_def_extern_entry(solutions__do_while_4_0)
MR_def_extern_entry(solutions__do_while_4_1)
MR_def_extern_entry(solutions__do_while_4_2)
MR_def_extern_entry(solutions__do_while_4_3)
MR_def_extern_entry(solutions__do_while_4_4)
MR_def_extern_entry(solutions__do_while_4_5)
MR_def_extern_entry(__Unify___solutions__heap_ptr_0_0)
MR_def_extern_entry(__Compare___solutions__heap_ptr_0_0)
MR_def_extern_entry(__Unify___solutions__trail_ptr_0_0)
MR_def_extern_entry(__Compare___solutions__trail_ptr_0_0)
MR_decl_static(fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_heap_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_heap_pointer_0;

const MR_TypeCtorInfo_Struct mercury_data_solutions__type_ctor_info_heap_ptr_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___solutions__heap_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___solutions__heap_ptr_0_0)),
	"solutions",
	"heap_ptr",
	{ 0 },
	{ (void *)&mercury_data_private_builtin__type_ctor_info_heap_pointer_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;

static const MR_NotagFunctorDesc mercury_data_solutions__notag_functor_desc_trail_ptr_0 = {
	"trail_ptr",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_solutions__functor_number_map_trail_ptr_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_solutions__type_ctor_info_trail_ptr_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___solutions__trail_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___solutions__trail_ptr_0_0)),
	"solutions",
	"trail_ptr",
	{ (void *)&mercury_data_solutions__notag_functor_desc_trail_ptr_0 },
	{ (void *)&mercury_data_solutions__notag_functor_desc_trail_ptr_0 },
	1,
	4,
	mercury_data_solutions__functor_number_map_trail_ptr_0
};




MR_BEGIN_MODULE(solutions_module0)
	MR_init_entry1(solutions__get_registers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__get_registers_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_registers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__get_registers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__get_registers_3_0
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 500 "solutions.c"
	MR_r1 = HeapPtr;
	MR_r2 = SolutionsHeapPtr;
	MR_r3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module1)
	MR_init_entry1(solutions__check_for_floundering_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__check_for_floundering_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_floundering'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__check_for_floundering_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__check_for_floundering_1_0
	TrailPtr = MR_r1;
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 539 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module2)
	MR_init_entry1(solutions__discard_trail_ticket_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__discard_trail_ticket_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'discard_trail_ticket'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__discard_trail_ticket_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__discard_trail_ticket_0_0
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 572 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module3)
	MR_init_entry1(solutions__swap_heap_and_solutions_heap_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__swap_heap_and_solutions_heap_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'swap_heap_and_solutions_heap'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__swap_heap_and_solutions_heap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__swap_heap_and_solutions_heap_0_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 613 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module4)
	MR_init_entry1(solutions__partial_deep_copy_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__partial_deep_copy_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partial_deep_copy'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__partial_deep_copy_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__partial_deep_copy_3_0
	TypeInfo_for_T = MR_r1;
	SolutionsHeapPtr = MR_r2;
	OldVal = MR_r3;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 651 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module5)
	MR_init_entry1(solutions__partial_deep_copy_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__partial_deep_copy_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partial_deep_copy'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__partial_deep_copy_3_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__partial_deep_copy_3_1
	TypeInfo_for_T = MR_r1;
	SolutionsHeapPtr = MR_r2;
	OldVal = MR_r3;
{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 690 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module6)
	MR_init_entry1(solutions__partial_deep_copy_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__partial_deep_copy_3_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partial_deep_copy'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__partial_deep_copy_3_2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__partial_deep_copy_3_2
	TypeInfo_for_T = MR_r1;
	SolutionsHeapPtr = MR_r2;
	OldVal = MR_r3;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 729 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module7)
	MR_init_entry1(solutions__reset_solutions_heap_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__reset_solutions_heap_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_solutions_heap'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__reset_solutions_heap_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__reset_solutions_heap_1_0
	SolutionsHeapPtr = MR_r1;
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 765 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module8)
	MR_init_entry1(solutions__start_all_soln_neg_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__start_all_soln_neg_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'start_all_soln_neg_context'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__start_all_soln_neg_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__start_all_soln_neg_context_0_0
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 798 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module9)
	MR_init_entry1(solutions__end_all_soln_neg_context_no_more_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__end_all_soln_neg_context_no_more_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'end_all_soln_neg_context_no_more'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__end_all_soln_neg_context_no_more_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__end_all_soln_neg_context_no_more_0_0
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 831 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__new_mutvar_2_0);
MR_declare_entry(mercury__do_call_closure_0);
MR_decl_entry(mutvar__get_mutvar_2_0);
MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(mutvar__set_mutvar_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(solutions_module10)
	MR_init_entry1(solutions__builtin_aggregate_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_0);
	MR_init_label7(solutions__builtin_aggregate_4_0,2,8,9,10,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 889 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 904 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i2);
MR_def_label(solutions__builtin_aggregate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_0_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_0_i8);
MR_def_label(solutions__builtin_aggregate_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 946 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 966 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 985 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i9);
MR_def_label(solutions__builtin_aggregate_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_0_i10);
MR_def_label(solutions__builtin_aggregate_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i11);
MR_def_label(solutions__builtin_aggregate_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1037 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1055 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i13);
MR_def_label(solutions__builtin_aggregate_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1082 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1097 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1109 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module11)
	MR_init_entry1(solutions__builtin_aggregate_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_1);
	MR_init_label7(solutions__builtin_aggregate_4_1,2,8,9,10,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1161 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1176 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i2);
MR_def_label(solutions__builtin_aggregate_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_1_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_1_i8);
MR_def_label(solutions__builtin_aggregate_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1218 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1238 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1257 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i9);
MR_def_label(solutions__builtin_aggregate_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_1_i10);
MR_def_label(solutions__builtin_aggregate_4_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i11);
MR_def_label(solutions__builtin_aggregate_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1309 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1327 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i13);
MR_def_label(solutions__builtin_aggregate_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1354 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1369 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1381 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__impure_true_0_0);

MR_BEGIN_MODULE(solutions_module12)
	MR_init_entry1(solutions__builtin_aggregate_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_2);
	MR_init_label8(solutions__builtin_aggregate_4_2,2,8,9,10,11,12,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1434 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1449 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i2);
MR_def_label(solutions__builtin_aggregate_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_2_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_2_i8);
MR_def_label(solutions__builtin_aggregate_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1491 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1511 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1530 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i9);
MR_def_label(solutions__builtin_aggregate_4_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_2_i10);
MR_def_label(solutions__builtin_aggregate_4_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate_4_2_i11);
MR_def_label(solutions__builtin_aggregate_4_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i12);
MR_def_label(solutions__builtin_aggregate_4_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1583 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1601 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i14);
MR_def_label(solutions__builtin_aggregate_4_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1628 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1643 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1655 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module13)
	MR_init_entry1(solutions__builtin_aggregate_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_3);
	MR_init_label8(solutions__builtin_aggregate_4_3,2,8,9,10,11,12,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1707 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1722 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i2);
MR_def_label(solutions__builtin_aggregate_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_3_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_3_i8);
MR_def_label(solutions__builtin_aggregate_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1764 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1784 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1803 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i9);
MR_def_label(solutions__builtin_aggregate_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_3_i10);
MR_def_label(solutions__builtin_aggregate_4_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate_4_3_i11);
MR_def_label(solutions__builtin_aggregate_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i12);
MR_def_label(solutions__builtin_aggregate_4_3,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 1856 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 1874 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i14);
MR_def_label(solutions__builtin_aggregate_4_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1901 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1916 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 1928 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module14)
	MR_init_entry1(solutions__builtin_aggregate_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_4);
	MR_init_label7(solutions__builtin_aggregate_4_4,2,8,9,10,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 1980 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 1995 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i2);
MR_def_label(solutions__builtin_aggregate_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_4_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_4_i8);
MR_def_label(solutions__builtin_aggregate_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2037 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2057 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2076 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i9);
MR_def_label(solutions__builtin_aggregate_4_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_4_i10);
MR_def_label(solutions__builtin_aggregate_4_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i11);
MR_def_label(solutions__builtin_aggregate_4_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2128 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2146 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i13);
MR_def_label(solutions__builtin_aggregate_4_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2173 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2188 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2200 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module15)
	MR_init_entry1(solutions__builtin_aggregate_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_5);
	MR_init_label7(solutions__builtin_aggregate_4_5,2,8,9,10,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2252 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2267 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i2);
MR_def_label(solutions__builtin_aggregate_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_5_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_5_i8);
MR_def_label(solutions__builtin_aggregate_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2309 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2329 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2348 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i9);
MR_def_label(solutions__builtin_aggregate_4_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_5_i10);
MR_def_label(solutions__builtin_aggregate_4_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i11);
MR_def_label(solutions__builtin_aggregate_4_5,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2400 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2418 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i13);
MR_def_label(solutions__builtin_aggregate_4_5,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2445 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2460 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2472 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module16)
	MR_init_entry1(solutions__builtin_aggregate_4_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_6);
	MR_init_label8(solutions__builtin_aggregate_4_6,2,8,9,10,11,12,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2524 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2539 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i2);
MR_def_label(solutions__builtin_aggregate_4_6,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_6_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_6_i8);
MR_def_label(solutions__builtin_aggregate_4_6,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2581 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2601 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2620 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i9);
MR_def_label(solutions__builtin_aggregate_4_6,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_6_i10);
MR_def_label(solutions__builtin_aggregate_4_6,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate_4_6_i11);
MR_def_label(solutions__builtin_aggregate_4_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i12);
MR_def_label(solutions__builtin_aggregate_4_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2673 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_6,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2691 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i14);
MR_def_label(solutions__builtin_aggregate_4_6,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2718 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2733 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 2745 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module17)
	MR_init_entry1(solutions__builtin_aggregate_4_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_7);
	MR_init_label7(solutions__builtin_aggregate_4_7,2,8,9,10,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 2797 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 2812 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i2);
MR_def_label(solutions__builtin_aggregate_4_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_7_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_7_i8);
MR_def_label(solutions__builtin_aggregate_4_7,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2854 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2874 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2893 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i9);
MR_def_label(solutions__builtin_aggregate_4_7,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_7_i10);
MR_def_label(solutions__builtin_aggregate_4_7,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i11);
MR_def_label(solutions__builtin_aggregate_4_7,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 2945 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_7,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 2963 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i13);
MR_def_label(solutions__builtin_aggregate_4_7,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2990 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3005 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3017 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module18)
	MR_init_entry1(solutions__builtin_aggregate_4_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_8);
	MR_init_label8(solutions__builtin_aggregate_4_8,2,8,9,10,11,12,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3069 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3084 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i2);
MR_def_label(solutions__builtin_aggregate_4_8,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_8_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_8_i8);
MR_def_label(solutions__builtin_aggregate_4_8,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3126 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3146 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3165 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i9);
MR_def_label(solutions__builtin_aggregate_4_8,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_8_i10);
MR_def_label(solutions__builtin_aggregate_4_8,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate_4_8_i11);
MR_def_label(solutions__builtin_aggregate_4_8,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i12);
MR_def_label(solutions__builtin_aggregate_4_8,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3218 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_8,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3236 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i14);
MR_def_label(solutions__builtin_aggregate_4_8,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3263 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3278 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3290 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module19)
	MR_init_entry1(solutions__builtin_aggregate_4_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate_4_9);
	MR_init_label7(solutions__builtin_aggregate_4_9,2,8,9,10,11,6,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate'/4 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate_4_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3342 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3357 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i2);
MR_def_label(solutions__builtin_aggregate_4_9,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate_4_9_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_9));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_9_i8);
MR_def_label(solutions__builtin_aggregate_4_9,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3399 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3419 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3438 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i9);
MR_def_label(solutions__builtin_aggregate_4_9,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_9));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__builtin_aggregate_4_9_i10);
MR_def_label(solutions__builtin_aggregate_4_9,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i11);
MR_def_label(solutions__builtin_aggregate_4_9,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3490 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_9,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3508 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i13);
MR_def_label(solutions__builtin_aggregate_4_9,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3535 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3550 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3562 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

MR_BEGIN_MODULE(solutions_module20)
	MR_init_entry1(solutions__builtin_solutions_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_solutions_2_0);
	MR_init_label6(solutions__builtin_solutions_2_0,3,9,10,12,7,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_solutions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_solutions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3618 "solutions.c"
	MR_tempr2 = HeapPtr;
	MR_tempr3 = SolutionsHeapPtr;
	MR_tempr4 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3633 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_solutions_2_0_i3);
MR_def_label(solutions__builtin_solutions_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_solutions_2_0_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_solutions_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_solutions_2_0_i9);
MR_def_label(solutions__builtin_solutions_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3674 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3694 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TypeInfo_for_T = MR_sv(1);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3713 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_0_i10);
MR_def_label(solutions__builtin_solutions_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_solutions_2_0_i12);
MR_def_label(solutions__builtin_solutions_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3755 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_solutions_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 3773 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_0_i14);
MR_def_label(solutions__builtin_solutions_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TypeInfo_for_T = MR_sv(2);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3800 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3815 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 3827 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module21)
	MR_init_entry1(solutions__builtin_solutions_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_solutions_2_1);
	MR_init_label6(solutions__builtin_solutions_2_1,3,9,10,12,7,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_solutions'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_solutions_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 3882 "solutions.c"
	MR_tempr2 = HeapPtr;
	MR_tempr3 = SolutionsHeapPtr;
	MR_tempr4 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 3897 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_solutions_2_1_i3);
MR_def_label(solutions__builtin_solutions_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_solutions_2_1_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_solutions_2_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_solutions_2_1_i9);
MR_def_label(solutions__builtin_solutions_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3938 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 3958 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TypeInfo_for_T = MR_sv(1);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3977 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_1_i10);
MR_def_label(solutions__builtin_solutions_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_solutions_2_1_i12);
MR_def_label(solutions__builtin_solutions_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 4019 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_solutions_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 4037 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_solutions_2_1_i14);
MR_def_label(solutions__builtin_solutions_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TypeInfo_for_T = MR_sv(2);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 4064 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 4079 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 4091 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);
MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);

MR_BEGIN_MODULE(solutions_module22)
	MR_init_entry1(solutions__solutions_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__solutions_2_0);
	MR_init_label2(solutions__solutions_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__solutions_2_0_i2);
MR_def_label(solutions__solutions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_2_0_i3);
MR_def_label(solutions__solutions_2_0,3)
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


MR_BEGIN_MODULE(solutions_module23)
	MR_init_entry1(solutions__solutions_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__solutions_2_1);
	MR_init_label2(solutions__solutions_2_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__solutions_2_1_i2);
MR_def_label(solutions__solutions_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_2_1_i3);
MR_def_label(solutions__solutions_2_1,3)
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


MR_BEGIN_MODULE(solutions_module24)
	MR_init_entry1(fn__solutions__solutions_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__solutions__solutions_1_0);
	MR_init_label2(fn__solutions__solutions_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		fn__solutions__solutions_1_0_i2);
MR_def_label(fn__solutions__solutions_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__solutions__solutions_1_0_i3);
MR_def_label(fn__solutions__solutions_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module25)
	MR_init_entry1(fn__solutions__solutions_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__solutions__solutions_1_1);
	MR_init_label2(fn__solutions__solutions_1_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		fn__solutions__solutions_1_1_i2);
MR_def_label(fn__solutions__solutions_1_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__solutions__solutions_1_1_i3);
MR_def_label(fn__solutions__solutions_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module26)
	MR_init_entry1(solutions__solutions_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__solutions_set_2_0);
	MR_init_label2(solutions__solutions_set_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__solutions_set_2_0_i2);
MR_def_label(solutions__solutions_set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_set_2_0_i3);
MR_def_label(solutions__solutions_set_2_0,3)
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


MR_BEGIN_MODULE(solutions_module27)
	MR_init_entry1(solutions__solutions_set_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__solutions_set_2_1);
	MR_init_label2(solutions__solutions_set_2_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions_set'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__solutions_set_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__solutions_set_2_1_i2);
MR_def_label(solutions__solutions_set_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__solutions_set_2_1_i3);
MR_def_label(solutions__solutions_set_2_1,3)
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


MR_BEGIN_MODULE(solutions_module28)
	MR_init_entry1(fn__solutions__solutions_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__solutions__solutions_set_1_0);
	MR_init_label2(fn__solutions__solutions_set_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		fn__solutions__solutions_set_1_0_i2);
MR_def_label(fn__solutions__solutions_set_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__solutions__solutions_set_1_0_i3);
MR_def_label(fn__solutions__solutions_set_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module29)
	MR_init_entry1(fn__solutions__solutions_set_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__solutions__solutions_set_1_1);
	MR_init_label2(fn__solutions__solutions_set_1_1,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'solutions_set'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__solutions_set_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		fn__solutions__solutions_set_1_1_i2);
MR_def_label(fn__solutions__solutions_set_1_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__solutions__solutions_set_1_1_i3);
MR_def_label(fn__solutions__solutions_set_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module30)
	MR_init_entry1(solutions__unsorted_solutions_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_solutions_2_0);
	MR_init_label1(solutions__unsorted_solutions_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_solutions'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_solutions_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__unsorted_solutions_2_0_i2);
MR_def_label(solutions__unsorted_solutions_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_solutions_2_0
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 4502 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module31)
	MR_init_entry1(solutions__unsorted_solutions_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_solutions_2_1);
	MR_init_label1(solutions__unsorted_solutions_2_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_solutions'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_solutions_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__unsorted_solutions_2_1_i2);
MR_def_label(solutions__unsorted_solutions_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_solutions_2_1
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 4544 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(solutions_module32)
	MR_init_entry1(solutions__aggregate_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate_4_0);
	MR_init_label3(solutions__aggregate_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__aggregate_4_0_i2);
MR_def_label(solutions__aggregate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate_4_0_i3);
MR_def_label(solutions__aggregate_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate_4_0_i4);
MR_def_label(solutions__aggregate_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(solutions_module33)
	MR_init_entry1(solutions__aggregate_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate_4_1);
	MR_init_label3(solutions__aggregate_4_1,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__aggregate_4_1_i2);
MR_def_label(solutions__aggregate_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate_4_1_i3);
MR_def_label(solutions__aggregate_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate_4_1_i4);
MR_def_label(solutions__aggregate_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module34)
	MR_init_entry1(solutions__aggregate_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate_4_2);
	MR_init_label3(solutions__aggregate_4_2,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__aggregate_4_2_i2);
MR_def_label(solutions__aggregate_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate_4_2_i3);
MR_def_label(solutions__aggregate_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate_4_2_i4);
MR_def_label(solutions__aggregate_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module35)
	MR_init_entry1(solutions__aggregate_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate_4_3);
	MR_init_label3(solutions__aggregate_4_3,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__aggregate_4_3_i2);
MR_def_label(solutions__aggregate_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate_4_3_i3);
MR_def_label(solutions__aggregate_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate_4_3_i4);
MR_def_label(solutions__aggregate_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module36)
	MR_init_entry1(fn__solutions__aggregate_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__solutions__aggregate_3_0);
	MR_init_label3(fn__solutions__aggregate_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__aggregate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		fn__solutions__aggregate_3_0_i2);
MR_def_label(fn__solutions__aggregate_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__solutions__aggregate_3_0_i3);
MR_def_label(fn__solutions__aggregate_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		fn__solutions__aggregate_3_0_i4);
MR_def_label(fn__solutions__aggregate_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module37)
	MR_init_entry1(fn__solutions__aggregate_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__solutions__aggregate_3_1);
	MR_init_label3(fn__solutions__aggregate_3_1,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__solutions__aggregate_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		fn__solutions__aggregate_3_1_i2);
MR_def_label(fn__solutions__aggregate_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__solutions__aggregate_3_1_i3);
MR_def_label(fn__solutions__aggregate_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		fn__solutions__aggregate_3_1_i4);
MR_def_label(fn__solutions__aggregate_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(solutions_module38)
	MR_init_entry1(solutions__aggregate2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate2_6_0);
	MR_init_label3(solutions__aggregate2_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__aggregate2_6_0_i2);
MR_def_label(solutions__aggregate2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate2_6_0_i3);
MR_def_label(solutions__aggregate2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate2_6_0_i4);
MR_def_label(solutions__aggregate2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(solutions_module39)
	MR_init_entry1(solutions__aggregate2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate2_6_1);
	MR_init_label3(solutions__aggregate2_6_1,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_0,
		solutions__aggregate2_6_1_i2);
MR_def_label(solutions__aggregate2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate2_6_1_i3);
MR_def_label(solutions__aggregate2_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate2_6_1_i4);
MR_def_label(solutions__aggregate2_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module40)
	MR_init_entry1(solutions__aggregate2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate2_6_2);
	MR_init_label3(solutions__aggregate2_6_2,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__aggregate2_6_2_i2);
MR_def_label(solutions__aggregate2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate2_6_2_i3);
MR_def_label(solutions__aggregate2_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate2_6_2_i4);
MR_def_label(solutions__aggregate2_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module41)
	MR_init_entry1(solutions__aggregate2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__aggregate2_6_3);
	MR_init_label3(solutions__aggregate2_6_3,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'aggregate2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__aggregate2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(solutions__builtin_solutions_2_1,
		solutions__aggregate2_6_3_i2);
MR_def_label(solutions__aggregate2_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		solutions__aggregate2_6_3_i3);
MR_def_label(solutions__aggregate2_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		solutions__aggregate2_6_3_i4);
MR_def_label(solutions__aggregate2_6_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module42)
	MR_init_entry1(solutions__unsorted_aggregate_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_0);
	MR_init_label1(solutions__unsorted_aggregate_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_0,
		solutions__unsorted_aggregate_4_0_i2);
MR_def_label(solutions__unsorted_aggregate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_0
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 5230 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module43)
	MR_init_entry1(solutions__unsorted_aggregate_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_1);
	MR_init_label1(solutions__unsorted_aggregate_4_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_2,
		solutions__unsorted_aggregate_4_1_i2);
MR_def_label(solutions__unsorted_aggregate_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_1
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 5272 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module44)
	MR_init_entry1(solutions__unsorted_aggregate_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_2);
	MR_init_label1(solutions__unsorted_aggregate_4_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_1,
		solutions__unsorted_aggregate_4_2_i2);
MR_def_label(solutions__unsorted_aggregate_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_2
	X = MR_r1;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 5314 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module45)
	MR_init_entry1(solutions__unsorted_aggregate_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_3);
	MR_init_label1(solutions__unsorted_aggregate_4_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_3,
		solutions__unsorted_aggregate_4_3_i2);
MR_def_label(solutions__unsorted_aggregate_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_3
	X = MR_r1;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 5356 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module46)
	MR_init_entry1(solutions__unsorted_aggregate_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_4);
	MR_init_label1(solutions__unsorted_aggregate_4_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_4,
		solutions__unsorted_aggregate_4_4_i2);
MR_def_label(solutions__unsorted_aggregate_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_4
	X = MR_r1;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 5398 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module47)
	MR_init_entry1(solutions__unsorted_aggregate_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_5);
	MR_init_label1(solutions__unsorted_aggregate_4_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_5,
		solutions__unsorted_aggregate_4_5_i2);
MR_def_label(solutions__unsorted_aggregate_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_5
	X = MR_r1;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 5440 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module48)
	MR_init_entry1(solutions__unsorted_aggregate_4_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_6);
	MR_init_label1(solutions__unsorted_aggregate_4_6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_6,
		solutions__unsorted_aggregate_4_6_i2);
MR_def_label(solutions__unsorted_aggregate_4_6,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_6
	X = MR_r1;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 5482 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module49)
	MR_init_entry1(solutions__unsorted_aggregate_4_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_7);
	MR_init_label1(solutions__unsorted_aggregate_4_7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		solutions__unsorted_aggregate_4_7_i2);
MR_def_label(solutions__unsorted_aggregate_4_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_7
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 5524 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module50)
	MR_init_entry1(solutions__unsorted_aggregate_4_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_8);
	MR_init_label1(solutions__unsorted_aggregate_4_8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_8,
		solutions__unsorted_aggregate_4_8_i2);
MR_def_label(solutions__unsorted_aggregate_4_8,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_8
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 5566 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module51)
	MR_init_entry1(solutions__unsorted_aggregate_4_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate_4_9);
	MR_init_label1(solutions__unsorted_aggregate_4_9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate'/4 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate_4_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_9,
		solutions__unsorted_aggregate_4_9_i2);
MR_def_label(solutions__unsorted_aggregate_4_9,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate_4_9
	X = MR_r1;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 5608 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(solutions_module52)
	MR_init_entry1(solutions__builtin_aggregate2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_0);
	MR_init_label10(solutions__builtin_aggregate2_6_0,2,3,9,10,11,12,13,14,7,16)
	MR_init_label1(solutions__builtin_aggregate2_6_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 5663 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 5678 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i2);
MR_def_label(solutions__builtin_aggregate2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i3);
MR_def_label(solutions__builtin_aggregate2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_0_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_0_i9);
MR_def_label(solutions__builtin_aggregate2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 5733 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 5753 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5772 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i10);
MR_def_label(solutions__builtin_aggregate2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i11);
MR_def_label(solutions__builtin_aggregate2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_0_i12);
MR_def_label(solutions__builtin_aggregate2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i13);
MR_def_label(solutions__builtin_aggregate2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i14);
MR_def_label(solutions__builtin_aggregate2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 5840 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 5858 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i16);
MR_def_label(solutions__builtin_aggregate2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i17);
MR_def_label(solutions__builtin_aggregate2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5895 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5913 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 5928 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 5940 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module53)
	MR_init_entry1(solutions__builtin_aggregate2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_1);
	MR_init_label10(solutions__builtin_aggregate2_6_1,2,3,9,10,11,12,13,14,15,7)
	MR_init_label2(solutions__builtin_aggregate2_6_1,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 5995 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6010 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i2);
MR_def_label(solutions__builtin_aggregate2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i3);
MR_def_label(solutions__builtin_aggregate2_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_1_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_1_i9);
MR_def_label(solutions__builtin_aggregate2_6_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6065 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6085 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6104 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i10);
MR_def_label(solutions__builtin_aggregate2_6_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i11);
MR_def_label(solutions__builtin_aggregate2_6_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_1_i12);
MR_def_label(solutions__builtin_aggregate2_6_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate2_6_1_i13);
MR_def_label(solutions__builtin_aggregate2_6_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i14);
MR_def_label(solutions__builtin_aggregate2_6_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i15);
MR_def_label(solutions__builtin_aggregate2_6_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6173 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 6191 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i17);
MR_def_label(solutions__builtin_aggregate2_6_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i18);
MR_def_label(solutions__builtin_aggregate2_6_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6228 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6246 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6261 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 6273 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module54)
	MR_init_entry1(solutions__builtin_aggregate2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_2);
	MR_init_label10(solutions__builtin_aggregate2_6_2,2,3,9,10,11,12,13,14,7,16)
	MR_init_label1(solutions__builtin_aggregate2_6_2,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6328 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6343 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i2);
MR_def_label(solutions__builtin_aggregate2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i3);
MR_def_label(solutions__builtin_aggregate2_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_2_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_2_i9);
MR_def_label(solutions__builtin_aggregate2_6_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6398 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6418 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6437 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i10);
MR_def_label(solutions__builtin_aggregate2_6_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i11);
MR_def_label(solutions__builtin_aggregate2_6_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_2_i12);
MR_def_label(solutions__builtin_aggregate2_6_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i13);
MR_def_label(solutions__builtin_aggregate2_6_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i14);
MR_def_label(solutions__builtin_aggregate2_6_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6505 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 6523 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i16);
MR_def_label(solutions__builtin_aggregate2_6_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i17);
MR_def_label(solutions__builtin_aggregate2_6_2,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6560 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6578 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6593 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 6605 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module55)
	MR_init_entry1(solutions__builtin_aggregate2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_3);
	MR_init_label10(solutions__builtin_aggregate2_6_3,2,3,9,10,11,12,13,14,15,7)
	MR_init_label2(solutions__builtin_aggregate2_6_3,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6660 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 6675 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i2);
MR_def_label(solutions__builtin_aggregate2_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i3);
MR_def_label(solutions__builtin_aggregate2_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_3_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_3_i9);
MR_def_label(solutions__builtin_aggregate2_6_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6730 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6750 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6769 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i10);
MR_def_label(solutions__builtin_aggregate2_6_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i11);
MR_def_label(solutions__builtin_aggregate2_6_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_3_i12);
MR_def_label(solutions__builtin_aggregate2_6_3,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate2_6_3_i13);
MR_def_label(solutions__builtin_aggregate2_6_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i14);
MR_def_label(solutions__builtin_aggregate2_6_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i15);
MR_def_label(solutions__builtin_aggregate2_6_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 6838 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 6856 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i17);
MR_def_label(solutions__builtin_aggregate2_6_3,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i18);
MR_def_label(solutions__builtin_aggregate2_6_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6893 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6911 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6926 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 6938 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module56)
	MR_init_entry1(solutions__builtin_aggregate2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_4);
	MR_init_label10(solutions__builtin_aggregate2_6_4,2,3,9,10,11,12,13,14,7,16)
	MR_init_label1(solutions__builtin_aggregate2_6_4,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 6993 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 7008 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i2);
MR_def_label(solutions__builtin_aggregate2_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i3);
MR_def_label(solutions__builtin_aggregate2_6_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_4_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_4_i9);
MR_def_label(solutions__builtin_aggregate2_6_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 7063 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7083 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7102 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i10);
MR_def_label(solutions__builtin_aggregate2_6_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i11);
MR_def_label(solutions__builtin_aggregate2_6_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_4_i12);
MR_def_label(solutions__builtin_aggregate2_6_4,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i13);
MR_def_label(solutions__builtin_aggregate2_6_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i14);
MR_def_label(solutions__builtin_aggregate2_6_4,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7170 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_4,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 7188 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i16);
MR_def_label(solutions__builtin_aggregate2_6_4,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i17);
MR_def_label(solutions__builtin_aggregate2_6_4,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7225 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7243 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7258 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 7270 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module57)
	MR_init_entry1(solutions__builtin_aggregate2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_5);
	MR_init_label10(solutions__builtin_aggregate2_6_5,2,3,9,10,11,12,13,14,15,7)
	MR_init_label2(solutions__builtin_aggregate2_6_5,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 7325 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 7340 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i2);
MR_def_label(solutions__builtin_aggregate2_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i3);
MR_def_label(solutions__builtin_aggregate2_6_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_5_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_5_i9);
MR_def_label(solutions__builtin_aggregate2_6_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 7395 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7415 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7434 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i10);
MR_def_label(solutions__builtin_aggregate2_6_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i11);
MR_def_label(solutions__builtin_aggregate2_6_5,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_5_i12);
MR_def_label(solutions__builtin_aggregate2_6_5,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate2_6_5_i13);
MR_def_label(solutions__builtin_aggregate2_6_5,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i14);
MR_def_label(solutions__builtin_aggregate2_6_5,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i15);
MR_def_label(solutions__builtin_aggregate2_6_5,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7503 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_5,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 7521 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i17);
MR_def_label(solutions__builtin_aggregate2_6_5,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i18);
MR_def_label(solutions__builtin_aggregate2_6_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7558 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7576 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7591 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 7603 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module58)
	MR_init_entry1(solutions__builtin_aggregate2_6_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_6);
	MR_init_label10(solutions__builtin_aggregate2_6_6,2,3,9,10,11,12,13,14,7,16)
	MR_init_label1(solutions__builtin_aggregate2_6_6,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 7658 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 7673 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i2);
MR_def_label(solutions__builtin_aggregate2_6_6,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i3);
MR_def_label(solutions__builtin_aggregate2_6_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_6_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_6_i9);
MR_def_label(solutions__builtin_aggregate2_6_6,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 7728 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7748 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7767 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i10);
MR_def_label(solutions__builtin_aggregate2_6_6,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i11);
MR_def_label(solutions__builtin_aggregate2_6_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_6_i12);
MR_def_label(solutions__builtin_aggregate2_6_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i13);
MR_def_label(solutions__builtin_aggregate2_6_6,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i14);
MR_def_label(solutions__builtin_aggregate2_6_6,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 7835 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_6,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 7853 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i16);
MR_def_label(solutions__builtin_aggregate2_6_6,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i17);
MR_def_label(solutions__builtin_aggregate2_6_6,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7890 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7908 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7923 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 7935 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module59)
	MR_init_entry1(solutions__builtin_aggregate2_6_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__builtin_aggregate2_6_7);
	MR_init_label10(solutions__builtin_aggregate2_6_7,2,3,9,10,11,12,13,14,15,7)
	MR_init_label2(solutions__builtin_aggregate2_6_7,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'builtin_aggregate2'/6 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__builtin_aggregate2_6_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 7990 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 8005 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i2);
MR_def_label(solutions__builtin_aggregate2_6_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i3);
MR_def_label(solutions__builtin_aggregate2_6_7,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(13) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(14));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__builtin_aggregate2_6_7_i7);
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_7_i9);
MR_def_label(solutions__builtin_aggregate2_6_7,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 8060 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 8080 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8099 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i10);
MR_def_label(solutions__builtin_aggregate2_6_7,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i11);
MR_def_label(solutions__builtin_aggregate2_6_7,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_7_i12);
MR_def_label(solutions__builtin_aggregate2_6_7,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__builtin_aggregate2_6_7_i13);
MR_def_label(solutions__builtin_aggregate2_6_7,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i14);
MR_def_label(solutions__builtin_aggregate2_6_7,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i15);
MR_def_label(solutions__builtin_aggregate2_6_7,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 8168 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_7,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(12);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(13);
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 8186 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i17);
MR_def_label(solutions__builtin_aggregate2_6_7,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i18);
MR_def_label(solutions__builtin_aggregate2_6_7,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	TypeInfo_for_T = MR_sv(10);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_sv(6);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8223 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	TypeInfo_for_T = MR_sv(11);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8241 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 8256 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 8268 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module60)
	MR_init_entry1(solutions__unsorted_aggregate2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_0);
	MR_init_label1(solutions__unsorted_aggregate2_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_0,
		solutions__unsorted_aggregate2_6_0_i2);
MR_def_label(solutions__unsorted_aggregate2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_0
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8311 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_0
	X = MR_r2;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8325 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module61)
	MR_init_entry1(solutions__unsorted_aggregate2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_1);
	MR_init_label1(solutions__unsorted_aggregate2_6_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_1,
		solutions__unsorted_aggregate2_6_1_i2);
MR_def_label(solutions__unsorted_aggregate2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_1
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8367 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_1
	X = MR_r2;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8381 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module62)
	MR_init_entry1(solutions__unsorted_aggregate2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_2);
	MR_init_label1(solutions__unsorted_aggregate2_6_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_2,
		solutions__unsorted_aggregate2_6_2_i2);
MR_def_label(solutions__unsorted_aggregate2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_2
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8423 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_2
	X = MR_r2;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 8437 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module63)
	MR_init_entry1(solutions__unsorted_aggregate2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_3);
	MR_init_label1(solutions__unsorted_aggregate2_6_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_3,
		solutions__unsorted_aggregate2_6_3_i2);
MR_def_label(solutions__unsorted_aggregate2_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_3
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8479 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_3
	X = MR_r2;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 8493 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module64)
	MR_init_entry1(solutions__unsorted_aggregate2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_4);
	MR_init_label1(solutions__unsorted_aggregate2_6_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_4,
		solutions__unsorted_aggregate2_6_4_i2);
MR_def_label(solutions__unsorted_aggregate2_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_4
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8535 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_4
	X = MR_r2;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8549 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module65)
	MR_init_entry1(solutions__unsorted_aggregate2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_5);
	MR_init_label1(solutions__unsorted_aggregate2_6_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_5,
		solutions__unsorted_aggregate2_6_5_i2);
MR_def_label(solutions__unsorted_aggregate2_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_5
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8591 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_5
	X = MR_r2;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8605 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module66)
	MR_init_entry1(solutions__unsorted_aggregate2_6_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_6);
	MR_init_label1(solutions__unsorted_aggregate2_6_6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_6,
		solutions__unsorted_aggregate2_6_6_i2);
MR_def_label(solutions__unsorted_aggregate2_6_6,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_6
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8647 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_6
	X = MR_r2;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 8661 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module67)
	MR_init_entry1(solutions__unsorted_aggregate2_6_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__unsorted_aggregate2_6_7);
	MR_init_label1(solutions__unsorted_aggregate2_6_7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsorted_aggregate2'/6 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__unsorted_aggregate2_6_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(solutions__builtin_aggregate2_6_7,
		solutions__unsorted_aggregate2_6_7_i2);
MR_def_label(solutions__unsorted_aggregate2_6_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_7
	X = MR_r1;
{
#line 103 "builtin.opt"

    Y = X;
;}
#line 8703 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_7
	X = MR_r2;
{
#line 100 "builtin.opt"

    Y = X;
;}
#line 8717 "solutions.c"
	MR_r2 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module68)
	MR_init_entry1(solutions__end_all_soln_neg_context_more_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__end_all_soln_neg_context_more_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'end_all_soln_neg_context_more'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(solutions__end_all_soln_neg_context_more_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__end_all_soln_neg_context_more_0_0
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 8751 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module69)
	MR_init_entry1(solutions__do_while_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__do_while_4_0);
	MR_init_label10(solutions__do_while_4_0,2,8,9,10,11,6,13,5,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_while'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 8803 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__do_while_4_0_i2);
MR_def_label(solutions__do_while_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 8832 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_0_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_0_i8);
MR_def_label(solutions__do_while_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 8860 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 8880 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8899 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_0_i9);
MR_def_label(solutions__do_while_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_0_i10);
MR_def_label(solutions__do_while_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_0_i11);
MR_def_label(solutions__do_while_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 8952 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 8967 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_0_i13);
MR_def_label(solutions__do_while_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_0_i5);
MR_def_label(solutions__do_while_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_0_i3);
MR_def_label(solutions__do_while_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 8996 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_0_i14);
MR_def_label(solutions__do_while_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9022 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9037 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 9049 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__new_mutvar_2_1);

MR_BEGIN_MODULE(solutions_module70)
	MR_init_entry1(solutions__do_while_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__do_while_4_1);
	MR_init_label10(solutions__do_while_4_1,2,8,9,10,11,6,13,5,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_while'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 9102 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_1_i2);
MR_def_label(solutions__do_while_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 9131 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_1_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_1_i8);
MR_def_label(solutions__do_while_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9159 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 9179 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9198 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_1_i9);
MR_def_label(solutions__do_while_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_1_i10);
MR_def_label(solutions__do_while_4_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_1_i11);
MR_def_label(solutions__do_while_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 9251 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 9266 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_1_i13);
MR_def_label(solutions__do_while_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_1_i5);
MR_def_label(solutions__do_while_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_1_i3);
MR_def_label(solutions__do_while_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 9295 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_1_i14);
MR_def_label(solutions__do_while_4_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9321 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9336 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 9348 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module71)
	MR_init_entry1(solutions__do_while_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__do_while_4_2);
	MR_init_label10(solutions__do_while_4_2,2,8,9,10,11,12,6,14,5,3)
	MR_init_label1(solutions__do_while_4_2,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_while'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 9401 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_2_i2);
MR_def_label(solutions__do_while_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 9430 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_2_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_2_i8);
MR_def_label(solutions__do_while_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9458 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 9478 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9497 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_2_i9);
MR_def_label(solutions__do_while_4_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_2_i10);
MR_def_label(solutions__do_while_4_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__do_while_4_2_i11);
MR_def_label(solutions__do_while_4_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_2_i12);
MR_def_label(solutions__do_while_4_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 9551 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 9566 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_2_i14);
MR_def_label(solutions__do_while_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_2_i5);
MR_def_label(solutions__do_while_4_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(solutions__do_while_4_2_i3);
MR_def_label(solutions__do_while_4_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 9595 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(solutions__do_while_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_2_i15);
MR_def_label(solutions__do_while_4_2,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9621 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9636 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 9648 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module72)
	MR_init_entry1(solutions__do_while_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__do_while_4_3);
	MR_init_label10(solutions__do_while_4_3,2,8,9,10,11,6,13,5,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_while'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 9700 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_0,
		solutions__do_while_4_3_i2);
MR_def_label(solutions__do_while_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 9729 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_3_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_3_i8);
MR_def_label(solutions__do_while_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9757 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 9777 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9796 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_3_i9);
MR_def_label(solutions__do_while_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_3_i10);
MR_def_label(solutions__do_while_4_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_3_i11);
MR_def_label(solutions__do_while_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 9849 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 9864 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_3_i13);
MR_def_label(solutions__do_while_4_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_3_i5);
MR_def_label(solutions__do_while_4_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_3_i3);
MR_def_label(solutions__do_while_4_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 9893 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_3_i14);
MR_def_label(solutions__do_while_4_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9919 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9934 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 9946 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module73)
	MR_init_entry1(solutions__do_while_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__do_while_4_4);
	MR_init_label10(solutions__do_while_4_4,2,8,9,10,11,6,13,5,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_while'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 9998 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_4_i2);
MR_def_label(solutions__do_while_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 10027 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_4_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_4_i8);
MR_def_label(solutions__do_while_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 10055 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 10075 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TypeInfo_for_T = MR_sv(7);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10094 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_4_i9);
MR_def_label(solutions__do_while_4_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_4_i10);
MR_def_label(solutions__do_while_4_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_4_i11);
MR_def_label(solutions__do_while_4_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 10147 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 10162 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_4_i13);
MR_def_label(solutions__do_while_4_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_4_i5);
MR_def_label(solutions__do_while_4_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(solutions__do_while_4_4_i3);
MR_def_label(solutions__do_while_4_4,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 10191 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(solutions__do_while_4_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_4_i14);
MR_def_label(solutions__do_while_4_4,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10217 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 10232 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 10244 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module74)
	MR_init_entry1(solutions__do_while_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__solutions__do_while_4_5);
	MR_init_label10(solutions__do_while_4_5,2,8,9,10,11,12,6,14,5,3)
	MR_init_label1(solutions__do_while_4_5,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_while'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__solutions__do_while_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	HeapPtr;
	MR_Word	SolutionsHeapPtr;
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 585 "solutions.m"

    /* save heap states */
#ifdef MR_RECLAIM_HP_ON_FAILURE
    HeapPtr = (MR_Word) MR_hp;
    SolutionsHeapPtr = (MR_Word) MR_sol_hp;
#else
    HeapPtr = SolutionsHeapPtr = 0;
#endif

    /* save trail state */
#ifdef MR_USE_TRAIL
    MR_store_ticket(TrailPtr);
#else
    TrailPtr = 0;
#endif
;}
#line 10297 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		solutions__do_while_4_5_i2);
MR_def_label(solutions__do_while_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 947 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_cond();
#endif
;}
#line 10326 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_5_i6);
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_5_i8);
MR_def_label(solutions__do_while_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TrailPtr = MR_sv(4);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 10354 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 10374 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TypeInfo_for_T = MR_sv(8);
	SolutionsHeapPtr = MR_sv(2);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10393 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_5_i9);
MR_def_label(solutions__do_while_4_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__solutions__do_while_4_5_i10);
MR_def_label(solutions__do_while_4_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(builtin__impure_true_0_0,
		solutions__do_while_4_5_i11);
MR_def_label(solutions__do_while_4_5,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__do_while_4_5_i12);
MR_def_label(solutions__do_while_4_5,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 727 "solutions.m"
{
#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_MemoryZone   *temp_zone;
    MR_Word         *temp_hp;

    temp_zone = MR_ENGINE(MR_eng_heap_zone);
    MR_ENGINE(MR_eng_heap_zone) = MR_ENGINE(MR_eng_solutions_heap_zone);
    MR_ENGINE(MR_eng_solutions_heap_zone) = temp_zone;
    temp_hp = MR_hp;
    MR_hp_word = (MR_Word) MR_sol_hp;
    MR_sol_hp = temp_hp;
#endif
};}
#line 10447 "solutions.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 962 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_then();
#endif
;}
#line 10462 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_5_i14);
MR_def_label(solutions__do_while_4_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_5_i5);
MR_def_label(solutions__do_while_4_5,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(solutions__do_while_4_5_i3);
MR_def_label(solutions__do_while_4_5,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 977 "solutions.m"

#ifdef MR_USE_MINIMAL_MODEL_STACK_COPY
    MR_pneg_enter_else("end_all_soln_neg_context");
#endif
;}
#line 10491 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
MR_def_label(solutions__do_while_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_5_i15);
MR_def_label(solutions__do_while_4_5,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	SolutionsHeapPtr;
	MR_Word	OldVal;
	MR_Word	NewVal;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TypeInfo_for_T = MR_sv(9);
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10517 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	SolutionsHeapPtr = MR_sv(3);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 10532 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
{
#line 690 "solutions.m"

#ifdef MR_USE_TRAIL
    MR_discard_ticket();
#endif
;}
#line 10544 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___private_builtin__heap_pointer_0_0);

MR_BEGIN_MODULE(solutions_module75)
	MR_init_entry1(__Unify___solutions__heap_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___solutions__heap_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___solutions__heap_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___private_builtin__heap_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___private_builtin__heap_pointer_0_0);

MR_BEGIN_MODULE(solutions_module76)
	MR_init_entry1(__Compare___solutions__heap_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___solutions__heap_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___solutions__heap_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___private_builtin__heap_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(solutions_module77)
	MR_init_entry1(__Unify___solutions__trail_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___solutions__trail_ptr_0_0);
	MR_init_label1(__Unify___solutions__trail_ptr_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___solutions__trail_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___solutions__trail_ptr_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_def_label(__Unify___solutions__trail_ptr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(solutions_module78)
	MR_init_entry1(__Compare___solutions__trail_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___solutions__trail_ptr_0_0);
	MR_init_label2(__Compare___solutions__trail_ptr_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___solutions__trail_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___solutions__trail_ptr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___solutions__trail_ptr_0_0_i2);
MR_def_label(__Compare___solutions__trail_ptr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___solutions__trail_ptr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module79)
	MR_init_entry1(fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_111_108_117_116_105_111_110_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module80)
	MR_init_entry1(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho12__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(solutions_module81)
	MR_init_entry1(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho13__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_111_108_117_116_105_111_110_115_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__solutions_maybe_bunch_0(void)
{
	solutions_module0();
	solutions_module1();
	solutions_module2();
	solutions_module3();
	solutions_module4();
	solutions_module5();
	solutions_module6();
	solutions_module7();
	solutions_module8();
	solutions_module9();
	solutions_module10();
	solutions_module11();
	solutions_module12();
	solutions_module13();
	solutions_module14();
	solutions_module15();
	solutions_module16();
	solutions_module17();
	solutions_module18();
	solutions_module19();
	solutions_module20();
	solutions_module21();
	solutions_module22();
	solutions_module23();
	solutions_module24();
	solutions_module25();
	solutions_module26();
	solutions_module27();
	solutions_module28();
	solutions_module29();
	solutions_module30();
	solutions_module31();
	solutions_module32();
	solutions_module33();
	solutions_module34();
	solutions_module35();
	solutions_module36();
	solutions_module37();
	solutions_module38();
	solutions_module39();
}

static void mercury__solutions_maybe_bunch_1(void)
{
	solutions_module40();
	solutions_module41();
	solutions_module42();
	solutions_module43();
	solutions_module44();
	solutions_module45();
	solutions_module46();
	solutions_module47();
	solutions_module48();
	solutions_module49();
	solutions_module50();
	solutions_module51();
	solutions_module52();
	solutions_module53();
	solutions_module54();
	solutions_module55();
	solutions_module56();
	solutions_module57();
	solutions_module58();
	solutions_module59();
	solutions_module60();
	solutions_module61();
	solutions_module62();
	solutions_module63();
	solutions_module64();
	solutions_module65();
	solutions_module66();
	solutions_module67();
	solutions_module68();
	solutions_module69();
	solutions_module70();
	solutions_module71();
	solutions_module72();
	solutions_module73();
	solutions_module74();
	solutions_module75();
	solutions_module76();
	solutions_module77();
	solutions_module78();
	solutions_module79();
}

static void mercury__solutions_maybe_bunch_2(void)
{
	solutions_module80();
	solutions_module81();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__solutions__init(void);
void mercury__solutions__init_type_tables(void);
void mercury__solutions__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__solutions__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__solutions__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__solutions__init_threadscope_string_table(void);
#endif

void mercury__solutions__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__solutions_maybe_bunch_0();
	mercury__solutions_maybe_bunch_1();
	mercury__solutions_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_solutions__type_ctor_info_heap_ptr_0,
		solutions__heap_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_solutions__type_ctor_info_trail_ptr_0,
		solutions__trail_ptr_0_0);
	mercury__solutions__init_debugger();
}

void mercury__solutions__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_solutions__type_ctor_info_heap_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_solutions__type_ctor_info_trail_ptr_0);
	}
}


void mercury__solutions__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__solutions__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__solutions);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__solutions__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__solutions__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
