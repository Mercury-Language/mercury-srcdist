/*
** Automatically generated from `svarray.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__svarray__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 149 "array.int"
#include "array.mh"

#line 27 "svarray.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "svarray.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "svarray.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "svarray.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "svarray.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 47 "svarray.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "svarray.c"
#line 150 "io.opt"
#include "dir.mh"

#line 55 "svarray.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 59 "svarray.c"
#line 4 "char.opt"
#include "char.mh"

#line 63 "svarray.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 67 "svarray.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "svarray.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "svarray.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 79 "svarray.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "svarray.c"
#line 20 "store.opt"
#include "store.mh"

#line 87 "svarray.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "svarray.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 95 "svarray.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 99 "svarray.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "svarray.c"
#line 104 "svarray.c"
#include "svarray.mh"

#line 107 "svarray.c"
#line 108 "svarray.c"
#ifndef SVARRAY_DECL_GUARD
#define SVARRAY_DECL_GUARD

#line 112 "svarray.c"
#line 113 "svarray.c"

#endif
#line 116 "svarray.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(svarray__semidet_set_4_0, 1)
MR_decl_label2(svarray__semidet_slow_set_4_0, 2,1)
MR_def_extern_entry(svarray__set_4_0)
MR_def_extern_entry(svarray__semidet_set_4_0)
MR_def_extern_entry(svarray__slow_set_4_0)
MR_def_extern_entry(svarray__semidet_slow_set_4_0)
MR_def_extern_entry(svarray__resize_4_0)
MR_def_extern_entry(svarray__shrink_3_0)
MR_decl_static(fn__f_115_118_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)



MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(svarray_module0)
	MR_init_entry1(svarray__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svarray__set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svarray__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svarray_module1)
	MR_init_entry1(svarray__semidet_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svarray__semidet_set_4_0);
	MR_init_label1(svarray__semidet_set_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svarray__semidet_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__svarray__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 98 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 193 "svarray.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__svarray__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 106 "array.opt"

    Max = Array->size - 1;
;}
#line 207 "svarray.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(svarray__semidet_set_4_0_i1);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(svarray__semidet_set_4_0_i1);
	}
	{
	MR_ArrayPtr	Array0;
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__svarray__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
	Index = MR_r2;
	Item = MR_r3;
{
#line 148 "array.opt"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 232 "svarray.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(svarray__semidet_set_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svarray_module2)
	MR_init_entry1(svarray__slow_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svarray__slow_set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'slow_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svarray__slow_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__svarray__slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 169 "array.opt"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 276 "svarray.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svarray_module3)
	MR_init_entry1(svarray__semidet_slow_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svarray__semidet_slow_set_4_0);
	MR_init_label2(svarray__semidet_slow_set_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_slow_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svarray__semidet_slow_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__svarray__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 98 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 321 "svarray.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__svarray__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 106 "array.opt"

    Max = Array->size - 1;
;}
#line 335 "svarray.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(svarray__semidet_slow_set_4_0_i1);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(svarray__semidet_slow_set_4_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__svarray__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 169 "array.opt"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 358 "svarray.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(array__set_4_0,
		svarray__semidet_slow_set_4_0_i2);
MR_def_label(svarray__semidet_slow_set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(svarray__semidet_slow_set_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svarray_module4)
	MR_init_entry1(svarray__resize_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svarray__resize_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svarray__resize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array0;
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__svarray__resize_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
	Size = MR_r2;
	Item = MR_r3;
{
#line 175 "array.opt"

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
        ML_resize_array(Array, Array0, Size, Item);
    }
;}
#line 418 "svarray.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__shrink_3_0);

MR_BEGIN_MODULE(svarray_module5)
	MR_init_entry1(svarray__shrink_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__svarray__shrink_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shrink'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__svarray__shrink_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(array__shrink_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(svarray_module6)
	MR_init_entry1(fn__f_115_118_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_118_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_118_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__svarray_maybe_bunch_0(void)
{
	svarray_module0();
	svarray_module1();
	svarray_module2();
	svarray_module3();
	svarray_module4();
	svarray_module5();
	svarray_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__svarray__init(void);
void mercury__svarray__init_type_tables(void);
void mercury__svarray__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__svarray__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__svarray__init_complexity_procs(void);
#endif

void mercury__svarray__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__svarray_maybe_bunch_0();
	mercury__svarray__init_debugger();
}

void mercury__svarray__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__svarray__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__svarray__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__svarray);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__svarray__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
