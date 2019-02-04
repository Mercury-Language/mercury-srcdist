/*
** Automatically generated from `term_size_prof_builtin.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__term_size_prof_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "term_size_prof_builtin.c"
#include "term_size_prof_builtin.mh"

#line 28 "term_size_prof_builtin.c"
#line 136 "io.int2"
#include "io.mh"

#line 32 "term_size_prof_builtin.c"
#line 144 "io.int2"
#include "string.mh"

#line 36 "term_size_prof_builtin.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 40 "term_size_prof_builtin.c"
#line 28 "time.int2"
#include "time.mh"

#line 44 "term_size_prof_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "term_size_prof_builtin.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 52 "term_size_prof_builtin.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 56 "term_size_prof_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "term_size_prof_builtin.c"
#line 150 "io.opt"
#include "dir.mh"

#line 64 "term_size_prof_builtin.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 68 "term_size_prof_builtin.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "term_size_prof_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "term_size_prof_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "term_size_prof_builtin.c"
#line 20 "store.opt"
#include "store.mh"

#line 84 "term_size_prof_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "term_size_prof_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "term_size_prof_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "term_size_prof_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "term_size_prof_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "term_size_prof_builtin.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "term_size_prof_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "term_size_prof_builtin.c"
#line 113 "term_size_prof_builtin.c"
#ifndef TERM_SIZE_PROF_BUILTIN_DECL_GUARD
#define TERM_SIZE_PROF_BUILTIN_DECL_GUARD

#line 117 "term_size_prof_builtin.c"
#line 86 "term_size_prof_builtin.m"

#ifndef MR_TERM_SIZE_PROFILING_GUARD
#define MR_TERM_SIZE_PROFILING_GUARD

  #ifdef MR_RECORD_TERM_SIZES
    #include "mercury_term_size.h"
  #endif /* MR_RECORD_TERM_SIZES */

#endif /* MR_TERM_SIZE_PROFILING_GUARD */

#line 129 "term_size_prof_builtin.c"
#line 130 "term_size_prof_builtin.c"

#endif
#line 133 "term_size_prof_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_term_size_prof_builtin__type_ctor_info_complexity_is_active_0,
	mercury_data_term_size_prof_builtin__type_ctor_info_complexity_slot_0;
MR_decl_label2(__Compare___term_size_prof_builtin__complexity_is_active_0_0, 2,3)
MR_decl_label2(__Compare___term_size_prof_builtin__complexity_slot_0_0, 2,3)
MR_def_extern_entry(term_size_prof_builtin__measure_size_2_0)
MR_def_extern_entry(term_size_prof_builtin__measure_size_acc_3_0)
MR_def_extern_entry(term_size_prof_builtin__increment_size_2_0)
MR_def_extern_entry(fn__term_size_prof_builtin__term_size_plus_2_0)
MR_def_extern_entry(term_size_prof_builtin__complexity_is_active_1_0)
MR_def_extern_entry(term_size_prof_builtin__complexity_call_proc_1_0)
MR_def_extern_entry(term_size_prof_builtin__complexity_exit_proc_1_0)
MR_def_extern_entry(term_size_prof_builtin__complexity_fail_proc_1_0)
MR_def_extern_entry(term_size_prof_builtin__complexity_redo_proc_1_0)
MR_def_extern_entry(__Unify___term_size_prof_builtin__complexity_is_active_0_0)
MR_def_extern_entry(__Compare___term_size_prof_builtin__complexity_is_active_0_0)
MR_def_extern_entry(__Unify___term_size_prof_builtin__complexity_slot_0_0)
MR_def_extern_entry(__Compare___term_size_prof_builtin__complexity_slot_0_0)
MR_decl_static(fn__f_116_101_114_109_95_115_105_122_101_95_112_114_111_102_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_EnumFunctorDesc mercury_data_term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0 = {
	"is_inactive",
	0
};

static const MR_EnumFunctorDesc mercury_data_term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1 = {
	"is_active",
	1
};

const MR_EnumFunctorDescPtr mercury_data_term_size_prof_builtin__enum_value_ordered_complexity_is_active_0[] = {
	&mercury_data_term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0,
	&mercury_data_term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1
};

const MR_EnumFunctorDescPtr mercury_data_term_size_prof_builtin__enum_name_ordered_complexity_is_active_0[] = {
	&mercury_data_term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_1,
	&mercury_data_term_size_prof_builtin__enum_functor_desc_complexity_is_active_0_0
};

const MR_Integer mercury_data_term_size_prof_builtin__functor_number_map_complexity_is_active_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_size_prof_builtin__type_ctor_info_complexity_is_active_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_size_prof_builtin__complexity_is_active_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_size_prof_builtin__complexity_is_active_0_0)),
	"term_size_prof_builtin",
	"complexity_is_active",
	{ (void *)mercury_data_term_size_prof_builtin__enum_name_ordered_complexity_is_active_0 },
	{ (void *)mercury_data_term_size_prof_builtin__enum_value_ordered_complexity_is_active_0 },
	2,
	4,
	mercury_data_term_size_prof_builtin__functor_number_map_complexity_is_active_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_term_size_prof_builtin__type_ctor_info_complexity_slot_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_size_prof_builtin__complexity_slot_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_size_prof_builtin__complexity_slot_0_0)),
	"term_size_prof_builtin",
	"complexity_slot",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(term_size_prof_builtin_module0)
	MR_init_entry1(term_size_prof_builtin__measure_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__measure_size_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'measure_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__measure_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__measure_size_2_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 100 "term_size_prof_builtin.m"
{
#ifdef MR_RECORD_TERM_SIZES
    MR_TypeInfo type_info;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    Size = MR_term_size(type_info, Term);
  #ifdef MR_DEBUG_TERM_SIZES
    if (MR_heapdebug && MR_lld_print_enabled) {
        printf("measure_size: %p -> %d\n",
            (void *) Term, (int) Size);
    }
  #endif
#else
    MR_fatal_error("measure_size: term size profiling not enabled");
#endif
};}
#line 260 "term_size_prof_builtin.c"
	MR_r1 = Size;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module1)
	MR_init_entry1(term_size_prof_builtin__measure_size_acc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__measure_size_acc_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'measure_size_acc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__measure_size_acc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Size0;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__measure_size_acc_3_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Size0 = MR_r3;
{
#line 127 "term_size_prof_builtin.m"
{
#ifdef MR_RECORD_TERM_SIZES
    MR_TypeInfo type_info;

    type_info = (MR_TypeInfo) TypeInfo_for_T;
    Size = MR_term_size(type_info, Term) + Size0;
  #ifdef MR_DEBUG_TERM_SIZES
    if (MR_heapdebug && MR_lld_print_enabled) {
        printf("measure_size_acc: %p + %d -> %d\n",
            (void *) Term, (int) Size0, (int) Size);
    }
  #endif
#else
    MR_fatal_error("measure_size_acc: term size profiling not enabled");
#endif
};}
#line 312 "term_size_prof_builtin.c"
	MR_r1 = Size;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module2)
	MR_init_entry1(term_size_prof_builtin__increment_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__increment_size_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'increment_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__increment_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Term;
	MR_Integer	Incr;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__increment_size_2_0
	Term = MR_r1;
	Incr = MR_r2;
{
#line 154 "term_size_prof_builtin.m"
{
#ifdef MR_RECORD_TERM_SIZES
  #ifdef MR_DEBUG_TERM_SIZES
    if (MR_heapdebug && MR_lld_print_enabled) {
        printf("increment_size: %p + %d\n",
            (void *) Term, (int) Incr);
    }
  #endif
    MR_mask_field(Term, -1) += Incr;
#else
    MR_fatal_error("increment_size: term size profiling not enabled");
#endif
};}
#line 358 "term_size_prof_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module3)
	MR_init_entry1(fn__term_size_prof_builtin__term_size_plus_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_size_prof_builtin__term_size_plus_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_size_plus'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_size_prof_builtin__term_size_plus_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module4)
	MR_init_entry1(term_size_prof_builtin__complexity_is_active_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__complexity_is_active_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_is_active'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__complexity_is_active_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	IsActive;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__complexity_is_active_1_0
{
#line 179 "term_size_prof_builtin.m"

    /* mention IsActive to avoid warning */
    MR_fatal_error("complexity_mark_active");
;}
#line 413 "term_size_prof_builtin.c"
	MR_r1 = IsActive;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module5)
	MR_init_entry1(term_size_prof_builtin__complexity_call_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__complexity_call_proc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_call_proc'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__complexity_call_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Slot;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__complexity_call_proc_1_0
{
#line 187 "term_size_prof_builtin.m"

    /* mention Slot to avoid warning */
    MR_fatal_error("complexity_call_proc");
;}
#line 447 "term_size_prof_builtin.c"
	MR_r1 = Slot;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module6)
	MR_init_entry1(term_size_prof_builtin__complexity_exit_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__complexity_exit_proc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_exit_proc'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__complexity_exit_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Slot;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__complexity_exit_proc_1_0
	Slot = MR_r1;
{
#line 195 "term_size_prof_builtin.m"

    /* mention Slot to avoid warning */
    MR_fatal_error("complexity_exit_proc");
;}
#line 482 "term_size_prof_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module7)
	MR_init_entry1(term_size_prof_builtin__complexity_fail_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__complexity_fail_proc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_fail_proc'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__complexity_fail_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Slot;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__complexity_fail_proc_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Slot = MR_r1;
{
#line 203 "term_size_prof_builtin.m"

    /* mention Slot to avoid warning */
    MR_fatal_error("complexity_fail_proc");
;}
#line 519 "term_size_prof_builtin.c"
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module8)
	MR_init_entry1(term_size_prof_builtin__complexity_redo_proc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_size_prof_builtin__complexity_redo_proc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'complexity_redo_proc'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_size_prof_builtin__complexity_redo_proc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Slot;
#define	MR_PROC_LABEL	mercury__term_size_prof_builtin__complexity_redo_proc_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Slot = MR_r1;
{
#line 211 "term_size_prof_builtin.m"

    /* mention Slot to avoid warning */
    MR_fatal_error("complexity_redo_proc");
;}
#line 559 "term_size_prof_builtin.c"
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module9)
	MR_init_entry1(__Unify___term_size_prof_builtin__complexity_is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term_size_prof_builtin__complexity_is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_size_prof_builtin__complexity_is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module10)
	MR_init_entry1(__Compare___term_size_prof_builtin__complexity_is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term_size_prof_builtin__complexity_is_active_0_0);
	MR_init_label2(__Compare___term_size_prof_builtin__complexity_is_active_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_size_prof_builtin__complexity_is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_size_prof_builtin__complexity_is_active_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___term_size_prof_builtin__complexity_is_active_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_size_prof_builtin__complexity_is_active_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term_size_prof_builtin__complexity_is_active_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module11)
	MR_init_entry1(__Unify___term_size_prof_builtin__complexity_slot_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term_size_prof_builtin__complexity_slot_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_size_prof_builtin__complexity_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module12)
	MR_init_entry1(__Compare___term_size_prof_builtin__complexity_slot_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term_size_prof_builtin__complexity_slot_0_0);
	MR_init_label2(__Compare___term_size_prof_builtin__complexity_slot_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_size_prof_builtin__complexity_slot_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_size_prof_builtin__complexity_slot_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___term_size_prof_builtin__complexity_slot_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_size_prof_builtin__complexity_slot_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term_size_prof_builtin__complexity_slot_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_size_prof_builtin_module13)
	MR_init_entry1(fn__f_116_101_114_109_95_115_105_122_101_95_112_114_111_102_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_101_114_109_95_115_105_122_101_95_112_114_111_102_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_114_109_95_115_105_122_101_95_112_114_111_102_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__term_size_prof_builtin_maybe_bunch_0(void)
{
	term_size_prof_builtin_module0();
	term_size_prof_builtin_module1();
	term_size_prof_builtin_module2();
	term_size_prof_builtin_module3();
	term_size_prof_builtin_module4();
	term_size_prof_builtin_module5();
	term_size_prof_builtin_module6();
	term_size_prof_builtin_module7();
	term_size_prof_builtin_module8();
	term_size_prof_builtin_module9();
	term_size_prof_builtin_module10();
	term_size_prof_builtin_module11();
	term_size_prof_builtin_module12();
	term_size_prof_builtin_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__term_size_prof_builtin__init(void);
void mercury__term_size_prof_builtin__init_type_tables(void);
void mercury__term_size_prof_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__term_size_prof_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__term_size_prof_builtin__init_complexity_procs(void);
#endif

void mercury__term_size_prof_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__term_size_prof_builtin_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_size_prof_builtin__type_ctor_info_complexity_is_active_0,
		term_size_prof_builtin__complexity_is_active_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_size_prof_builtin__type_ctor_info_complexity_slot_0,
		term_size_prof_builtin__complexity_slot_0_0);
	mercury__term_size_prof_builtin__init_debugger();
}

void mercury__term_size_prof_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_term_size_prof_builtin__type_ctor_info_complexity_is_active_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_size_prof_builtin__type_ctor_info_complexity_slot_0);
	}
}


void mercury__term_size_prof_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__term_size_prof_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__term_size_prof_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__term_size_prof_builtin__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
