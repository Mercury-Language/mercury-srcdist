/*
** Automatically generated from `solutions.m'
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
#include "string.mh"

#line 36 "solutions.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "solutions.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "solutions.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "solutions.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 52 "solutions.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 56 "solutions.c"
#line 61 "array.opt"
#include "store.mh"

#line 60 "solutions.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "solutions.c"
#line 156 "io.opt"
#include "dir.mh"

#line 68 "solutions.c"
#line 170 "io.opt"
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
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "solutions.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "solutions.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "solutions.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "solutions.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "solutions.c"
#line 129 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "solutions.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "solutions.c"
#line 113 "solutions.c"
#ifndef SOLUTIONS_DECL_GUARD
#define SOLUTIONS_DECL_GUARD

#line 117 "solutions.c"
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


#line 147 "solutions.c"
#line 148 "solutions.c"

#endif
#line 151 "solutions.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

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
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_heap_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_heap_pointer_0;

const MR_TypeCtorInfo_Struct mercury_data_solutions__type_ctor_info_heap_ptr_0 = {
	0,
	13,
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
	13,
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
#line 407 "solutions.c"
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
#line 446 "solutions.c"
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
#line 479 "solutions.c"
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
#line 520 "solutions.c"
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
#line 558 "solutions.c"
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
#line 597 "solutions.c"
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
#line 636 "solutions.c"
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
#line 672 "solutions.c"
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
#line 705 "solutions.c"
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
#line 738 "solutions.c"
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
#line 796 "solutions.c"
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
#line 811 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_0_i8);
MR_def_label(solutions__builtin_aggregate_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 853 "solutions.c"
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
#line 873 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 892 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_0_i9);
MR_def_label(solutions__builtin_aggregate_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 944 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 962 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 989 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_0
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1004 "solutions.c"
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
#line 1016 "solutions.c"
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
#line 1068 "solutions.c"
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
#line 1083 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_1_i8);
MR_def_label(solutions__builtin_aggregate_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1125 "solutions.c"
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
#line 1145 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1164 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_1_i9);
MR_def_label(solutions__builtin_aggregate_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 1216 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 1234 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1261 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_1
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1276 "solutions.c"
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
#line 1288 "solutions.c"
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
#line 1341 "solutions.c"
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
#line 1356 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_2_i8);
MR_def_label(solutions__builtin_aggregate_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1398 "solutions.c"
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
#line 1418 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1437 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_2_i9);
MR_def_label(solutions__builtin_aggregate_4_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 1490 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 1508 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1535 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_2
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1550 "solutions.c"
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
#line 1562 "solutions.c"
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
#line 1614 "solutions.c"
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
#line 1629 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_3_i8);
MR_def_label(solutions__builtin_aggregate_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1671 "solutions.c"
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
#line 1691 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1710 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_3_i9);
MR_def_label(solutions__builtin_aggregate_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 1763 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 1781 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1808 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_3
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 1823 "solutions.c"
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
#line 1835 "solutions.c"
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
#line 1887 "solutions.c"
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
#line 1902 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_4_i8);
MR_def_label(solutions__builtin_aggregate_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 1944 "solutions.c"
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
#line 1964 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 1983 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_4_i9);
MR_def_label(solutions__builtin_aggregate_4_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 2035 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 2053 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2080 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_4
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2095 "solutions.c"
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
#line 2107 "solutions.c"
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
#line 2159 "solutions.c"
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
#line 2174 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_5_i8);
MR_def_label(solutions__builtin_aggregate_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2216 "solutions.c"
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
#line 2236 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2255 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_5_i9);
MR_def_label(solutions__builtin_aggregate_4_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 2307 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 2325 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2352 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_5
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2367 "solutions.c"
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
#line 2379 "solutions.c"
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
#line 2431 "solutions.c"
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
#line 2446 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_6_i8);
MR_def_label(solutions__builtin_aggregate_4_6,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2488 "solutions.c"
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
#line 2508 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2527 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_6_i9);
MR_def_label(solutions__builtin_aggregate_4_6,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 2580 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_6,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 2598 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2625 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_6
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2640 "solutions.c"
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
#line 2652 "solutions.c"
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
#line 2704 "solutions.c"
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
#line 2719 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_7_i8);
MR_def_label(solutions__builtin_aggregate_4_7,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 2761 "solutions.c"
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
#line 2781 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2800 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_7_i9);
MR_def_label(solutions__builtin_aggregate_4_7,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 2852 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_7,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 2870 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 2897 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_7
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 2912 "solutions.c"
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
#line 2924 "solutions.c"
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
#line 2976 "solutions.c"
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
#line 2991 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_8_i8);
MR_def_label(solutions__builtin_aggregate_4_8,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3033 "solutions.c"
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
#line 3053 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3072 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_8_i9);
MR_def_label(solutions__builtin_aggregate_4_8,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 3125 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_8,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 3143 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3170 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_8
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3185 "solutions.c"
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
#line 3197 "solutions.c"
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
#line 3249 "solutions.c"
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
#line 3264 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate_4_9));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate_4_9_i8);
MR_def_label(solutions__builtin_aggregate_4_9,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3306 "solutions.c"
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
#line 3326 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 818 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3345 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate_4_9_i9);
MR_def_label(solutions__builtin_aggregate_4_9,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 3397 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate_4_9,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 3415 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3442 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate_4_9
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3457 "solutions.c"
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
#line 3469 "solutions.c"
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
#line 3525 "solutions.c"
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
#line 3540 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_solutions_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_solutions_2_0_i9);
MR_def_label(solutions__builtin_solutions_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	TrailPtr = MR_sv(6);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3581 "solutions.c"
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
#line 3601 "solutions.c"
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
	TypeInfo_for_T = MR_sv(2);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3620 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
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
#line 3662 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_solutions_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 3680 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
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
	TypeInfo_for_T = MR_sv(3);
	SolutionsHeapPtr = MR_sv(5);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3707 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_0
	SolutionsHeapPtr = MR_sv(5);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3722 "solutions.c"
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
#line 3734 "solutions.c"
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
#line 3789 "solutions.c"
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
#line 3804 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr4;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_solutions_2_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_solutions_2_1_i9);
MR_def_label(solutions__builtin_solutions_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	TrailPtr = MR_sv(6);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 3845 "solutions.c"
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
#line 3865 "solutions.c"
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
	TypeInfo_for_T = MR_sv(2);
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3884 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
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
#line 3926 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_solutions_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 3944 "solutions.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
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
	TypeInfo_for_T = MR_sv(3);
	SolutionsHeapPtr = MR_sv(5);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 3971 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_solutions_2_1
	SolutionsHeapPtr = MR_sv(5);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 3986 "solutions.c"
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
#line 3998 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 4409 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 4451 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 5137 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 5179 "solutions.c"
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
#line 99 "builtin.opt"

    Y = X;
;}
#line 5221 "solutions.c"
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
#line 99 "builtin.opt"

    Y = X;
;}
#line 5263 "solutions.c"
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
#line 99 "builtin.opt"

    Y = X;
;}
#line 5305 "solutions.c"
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
#line 99 "builtin.opt"

    Y = X;
;}
#line 5347 "solutions.c"
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
#line 99 "builtin.opt"

    Y = X;
;}
#line 5389 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 5431 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 5473 "solutions.c"
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
#line 99 "builtin.opt"

    Y = X;
;}
#line 5515 "solutions.c"
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
#line 5570 "solutions.c"
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
#line 5585 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_0_i9);
MR_def_label(solutions__builtin_aggregate2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 5640 "solutions.c"
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
#line 5660 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5679 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i10);
MR_def_label(solutions__builtin_aggregate2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i11);
MR_def_label(solutions__builtin_aggregate2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_0_i12);
MR_def_label(solutions__builtin_aggregate2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i13);
MR_def_label(solutions__builtin_aggregate2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
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
#line 5747 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 5765 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_0_i16);
MR_def_label(solutions__builtin_aggregate2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5802 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 5820 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_0
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 5835 "solutions.c"
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
#line 5847 "solutions.c"
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
#line 5902 "solutions.c"
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
#line 5917 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_1_i9);
MR_def_label(solutions__builtin_aggregate2_6_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 5972 "solutions.c"
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
#line 5992 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6011 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i10);
MR_def_label(solutions__builtin_aggregate2_6_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i11);
MR_def_label(solutions__builtin_aggregate2_6_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i14);
MR_def_label(solutions__builtin_aggregate2_6_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
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
#line 6080 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 6098 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_1_i17);
MR_def_label(solutions__builtin_aggregate2_6_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6135 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6153 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_1
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6168 "solutions.c"
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
#line 6180 "solutions.c"
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
#line 6235 "solutions.c"
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
#line 6250 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_2_i9);
MR_def_label(solutions__builtin_aggregate2_6_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6305 "solutions.c"
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
#line 6325 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6344 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i10);
MR_def_label(solutions__builtin_aggregate2_6_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i11);
MR_def_label(solutions__builtin_aggregate2_6_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_2_i12);
MR_def_label(solutions__builtin_aggregate2_6_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i13);
MR_def_label(solutions__builtin_aggregate2_6_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
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
#line 6412 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 6430 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_2_i16);
MR_def_label(solutions__builtin_aggregate2_6_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6467 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6485 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_2
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6500 "solutions.c"
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
#line 6512 "solutions.c"
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
#line 6567 "solutions.c"
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
#line 6582 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_3_i9);
MR_def_label(solutions__builtin_aggregate2_6_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6637 "solutions.c"
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
#line 6657 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6676 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i10);
MR_def_label(solutions__builtin_aggregate2_6_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i11);
MR_def_label(solutions__builtin_aggregate2_6_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i14);
MR_def_label(solutions__builtin_aggregate2_6_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
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
#line 6745 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 6763 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_3_i17);
MR_def_label(solutions__builtin_aggregate2_6_3,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6800 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 6818 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_3
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 6833 "solutions.c"
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
#line 6845 "solutions.c"
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
#line 6900 "solutions.c"
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
#line 6915 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_4_i9);
MR_def_label(solutions__builtin_aggregate2_6_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 6970 "solutions.c"
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
#line 6990 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7009 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i10);
MR_def_label(solutions__builtin_aggregate2_6_4,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i11);
MR_def_label(solutions__builtin_aggregate2_6_4,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_4_i12);
MR_def_label(solutions__builtin_aggregate2_6_4,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i13);
MR_def_label(solutions__builtin_aggregate2_6_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
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
#line 7077 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_4,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 7095 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_4_i16);
MR_def_label(solutions__builtin_aggregate2_6_4,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7132 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7150 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_4
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7165 "solutions.c"
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
#line 7177 "solutions.c"
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
#line 7232 "solutions.c"
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
#line 7247 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_5_i9);
MR_def_label(solutions__builtin_aggregate2_6_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 7302 "solutions.c"
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
#line 7322 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7341 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i10);
MR_def_label(solutions__builtin_aggregate2_6_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i11);
MR_def_label(solutions__builtin_aggregate2_6_5,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i14);
MR_def_label(solutions__builtin_aggregate2_6_5,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
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
#line 7410 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_5,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 7428 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_5_i17);
MR_def_label(solutions__builtin_aggregate2_6_5,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7465 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7483 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_5
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7498 "solutions.c"
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
#line 7510 "solutions.c"
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
#line 7565 "solutions.c"
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
#line 7580 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_6_i9);
MR_def_label(solutions__builtin_aggregate2_6_6,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 7635 "solutions.c"
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
#line 7655 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7674 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i10);
MR_def_label(solutions__builtin_aggregate2_6_6,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i11);
MR_def_label(solutions__builtin_aggregate2_6_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__solutions__builtin_aggregate2_6_6_i12);
MR_def_label(solutions__builtin_aggregate2_6_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i13);
MR_def_label(solutions__builtin_aggregate2_6_6,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
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
#line 7742 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_6,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 7760 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_6_i16);
MR_def_label(solutions__builtin_aggregate2_6_6,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7797 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 7815 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_6
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 7830 "solutions.c"
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
#line 7842 "solutions.c"
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
#line 7897 "solutions.c"
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
#line 7912 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
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
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__builtin_aggregate2_6_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__builtin_aggregate2_6_7_i9);
MR_def_label(solutions__builtin_aggregate2_6_7,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 7967 "solutions.c"
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
#line 7987 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8006 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i10);
MR_def_label(solutions__builtin_aggregate2_6_7,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i11);
MR_def_label(solutions__builtin_aggregate2_6_7,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i14);
MR_def_label(solutions__builtin_aggregate2_6_7,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
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
#line 8075 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(solutions__builtin_aggregate2_6_7,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
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
#line 8093 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__builtin_aggregate2_6_7_i17);
MR_def_label(solutions__builtin_aggregate2_6_7,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_sv(1);
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8130 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8148 "solutions.c"
	MR_r2 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__builtin_aggregate2_6_7
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 8163 "solutions.c"
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
#line 8175 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8218 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_0
	X = MR_r2;
{
#line 102 "builtin.opt"

    Y = X;
;}
#line 8232 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8274 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_1
	X = MR_r2;
{
#line 102 "builtin.opt"

    Y = X;
;}
#line 8288 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8330 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_2
	X = MR_r2;
{
#line 99 "builtin.opt"

    Y = X;
;}
#line 8344 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8386 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_3
	X = MR_r2;
{
#line 99 "builtin.opt"

    Y = X;
;}
#line 8400 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8442 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_4
	X = MR_r2;
{
#line 102 "builtin.opt"

    Y = X;
;}
#line 8456 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8498 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_5
	X = MR_r2;
{
#line 102 "builtin.opt"

    Y = X;
;}
#line 8512 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8554 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_6
	X = MR_r2;
{
#line 99 "builtin.opt"

    Y = X;
;}
#line 8568 "solutions.c"
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
#line 102 "builtin.opt"

    Y = X;
;}
#line 8610 "solutions.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__solutions__unsorted_aggregate2_6_7
	X = MR_r2;
{
#line 99 "builtin.opt"

    Y = X;
;}
#line 8624 "solutions.c"
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
#line 8658 "solutions.c"
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
#line 8710 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
#line 8739 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_0_i6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_0_i8);
MR_def_label(solutions__do_while_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 8767 "solutions.c"
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
#line 8787 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8806 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_0_i9);
MR_def_label(solutions__do_while_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 8859 "solutions.c"
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
#line 8874 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_0_i13);
MR_def_label(solutions__do_while_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_0_i5);
MR_def_label(solutions__do_while_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
#line 8903 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 8929 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_0
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 8944 "solutions.c"
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
#line 8956 "solutions.c"
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
#line 9009 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
#line 9038 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_1_i6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_1_i8);
MR_def_label(solutions__do_while_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9066 "solutions.c"
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
#line 9086 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9105 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_1_i9);
MR_def_label(solutions__do_while_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 9158 "solutions.c"
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
#line 9173 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_1_i13);
MR_def_label(solutions__do_while_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_1_i5);
MR_def_label(solutions__do_while_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
#line 9202 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9228 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_1
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9243 "solutions.c"
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
#line 9255 "solutions.c"
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
#line 9308 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
#line 9337 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_2_i6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_2_i8);
MR_def_label(solutions__do_while_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9365 "solutions.c"
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
#line 9385 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9404 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_2_i9);
MR_def_label(solutions__do_while_4_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 9458 "solutions.c"
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
#line 9473 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_2_i14);
MR_def_label(solutions__do_while_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_2_i5);
MR_def_label(solutions__do_while_4_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
#line 9502 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9528 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_2
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9543 "solutions.c"
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
#line 9555 "solutions.c"
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
#line 9607 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
#line 9636 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_3_i6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_3_i8);
MR_def_label(solutions__do_while_4_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9664 "solutions.c"
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
#line 9684 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9703 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_3_i9);
MR_def_label(solutions__do_while_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 9756 "solutions.c"
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
#line 9771 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_3_i13);
MR_def_label(solutions__do_while_4_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_3_i5);
MR_def_label(solutions__do_while_4_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
#line 9800 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 9826 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_3
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 9841 "solutions.c"
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
#line 9853 "solutions.c"
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
#line 9905 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
#line 9934 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_4_i6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_4_i8);
MR_def_label(solutions__do_while_4_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 9962 "solutions.c"
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
#line 9982 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10001 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_4_i9);
MR_def_label(solutions__do_while_4_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 10054 "solutions.c"
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
#line 10069 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_4_i13);
MR_def_label(solutions__do_while_4_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(solutions__do_while_4_4_i5);
MR_def_label(solutions__do_while_4_4,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
#line 10098 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10124 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_4
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 10139 "solutions.c"
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
#line 10151 "solutions.c"
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
#line 10204 "solutions.c"
	MR_tempr1 = HeapPtr;
	MR_tempr2 = SolutionsHeapPtr;
	MR_tempr3 = TrailPtr;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tempr3;
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
#line 10233 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(solutions__do_while_4_5_i6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(solutions__do_while_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_0),
		mercury__solutions__do_while_4_5_i8);
MR_def_label(solutions__do_while_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TrailPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	TrailPtr = MR_sv(5);
{
#line 652 "solutions.m"

#ifdef MR_USE_TRAIL
    /* check for outstanding delayed goals (``floundering'') */
    MR_reset_ticket(TrailPtr, MR_solve);
#endif
;}
#line 10261 "solutions.c"
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
#line 10281 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(3);
	OldVal = MR_r1;
{
#line 812 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10300 "solutions.c"
	MR_tempr1 = NewVal;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		solutions__do_while_4_5_i9);
MR_def_label(solutions__do_while_4_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
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
	MR_r2 = MR_sv(1);
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
#line 10354 "solutions.c"
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
#line 10369 "solutions.c"
#undef	MR_PROC_LABEL
	}
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_5_i14);
MR_def_label(solutions__do_while_4_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(solutions__do_while_4_5_i5);
MR_def_label(solutions__do_while_4_5,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
#line 10398 "solutions.c"
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
	SolutionsHeapPtr = MR_sv(4);
	OldVal = MR_r1;
{
#line 824 "solutions.m"

    MR_PARTIAL_DEEP_COPY(SolutionsHeapPtr, OldVal, NewVal, TypeInfo_for_T);
;}
#line 10424 "solutions.c"
	MR_r1 = NewVal;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	SolutionsHeapPtr;
#define	MR_PROC_LABEL	mercury__solutions__do_while_4_5
	SolutionsHeapPtr = MR_sv(4);
{
#line 911 "solutions.m"

#ifdef MR_RECLAIM_HP_ON_FAILURE
    MR_sol_hp = (MR_Word *) SolutionsHeapPtr;
#endif
;}
#line 10439 "solutions.c"
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
#line 10451 "solutions.c"
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
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__solutions);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__solutions__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
