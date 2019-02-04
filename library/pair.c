/*
** Automatically generated from `pair.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__pair__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "pair.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "pair.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "pair.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "pair.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 44 "pair.c"
#line 46 "builtin.opt"
#include "array.mh"

#line 48 "pair.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 52 "pair.c"
#line 58 "array.opt"
#include "store.mh"

#line 56 "pair.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "pair.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "pair.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "pair.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "pair.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "pair.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "pair.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "pair.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "pair.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "pair.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "pair.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "pair.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "pair.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 108 "pair.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "pair.c"
#line 113 "pair.c"
#include "pair.mh"

#line 116 "pair.c"
#line 117 "pair.c"
#ifndef PAIR_DECL_GUARD
#define PAIR_DECL_GUARD

#line 121 "pair.c"
#line 122 "pair.c"

#endif
#line 125 "pair.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_pair__type_ctor_info_pair_2,
	mercury_data_pair__type_ctor_info_pair_1;
MR_decl_label3(__Unify___pair__pair_2_0, 4,8,1)
MR_decl_label4(__Compare___pair__pair_2_0, 3,2,5,21)
MR_def_extern_entry(fn__pair__fst_1_0)
MR_def_extern_entry(pair__fst_2_0)
MR_def_extern_entry(fn__pair__snd_1_0)
MR_def_extern_entry(pair__snd_2_0)
MR_def_extern_entry(fn__pair__pair_2_0)
MR_def_extern_entry(__Unify___pair__pair_1_0)
MR_def_extern_entry(__Compare___pair__pair_1_0)
MR_def_extern_entry(__Unify___pair__pair_2_0)
MR_def_extern_entry(__Compare___pair__pair_2_0)
MR_decl_static(fn__f_112_97_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_PseudoTypeInfo mercury_data_pair__field_types_pair_2_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_pair__du_functor_desc_pair_2_0 = {
	"-",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_pair__field_types_pair_2_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pair__du_stag_ordered_pair_2_0[] = {
	&mercury_data_pair__du_functor_desc_pair_2_0

};

const MR_DuPtagLayout mercury_data_pair__du_ptag_ordered_pair_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_pair__du_stag_ordered_pair_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_pair__du_name_ordered_pair_2[] = {
	&mercury_data_pair__du_functor_desc_pair_2_0
};

const MR_Integer mercury_data_pair__functor_number_map_pair_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pair__pair_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pair__pair_2_0)),
	"pair",
	"pair",
	{ (void *)mercury_data_pair__du_name_ordered_pair_2 },
	{ (void *)mercury_data_pair__du_ptag_ordered_pair_2 },
	1,
	4,
	mercury_data_pair__functor_number_map_pair_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__pseudo_1__pseudo_1 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pair__pair_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pair__pair_1_0)),
	"pair",
	"pair",
	{ 0 },
	{ (void *)&mercury_data_pair__pti_pair_2__pseudo_1__pseudo_1 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(pair_module0)
	MR_init_entry1(fn__pair__fst_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pair__fst_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fst'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pair__fst_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module1)
	MR_init_entry1(pair__fst_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pair__fst_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fst'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pair__fst_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module2)
	MR_init_entry1(fn__pair__snd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pair__snd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'snd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pair__snd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module3)
	MR_init_entry1(pair__snd_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pair__snd_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'snd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pair__snd_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module4)
	MR_init_entry1(fn__pair__pair_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pair__pair_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pair'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pair__pair_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module5)
	MR_init_entry1(__Unify___pair__pair_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pair__pair_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pair__pair_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module6)
	MR_init_entry1(__Compare___pair__pair_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pair__pair_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pair__pair_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(pair_module7)
	MR_init_entry1(__Unify___pair__pair_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pair__pair_2_0);
	MR_init_label3(__Unify___pair__pair_2_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pair__pair_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___pair__pair_2_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___pair__pair_2_0_i4);
MR_def_label(__Unify___pair__pair_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pair__pair_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___pair__pair_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___pair__pair_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(pair_module8)
	MR_init_entry1(__Compare___pair__pair_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pair__pair_2_0);
	MR_init_label4(__Compare___pair__pair_2_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pair__pair_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___pair__pair_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___pair__pair_2_0_i2);
MR_def_label(__Compare___pair__pair_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___pair__pair_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___pair__pair_2_0_i5);
MR_def_label(__Compare___pair__pair_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pair__pair_2_0_i21);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___pair__pair_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pair_module9)
	MR_init_entry1(fn__f_112_97_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_105_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__pair_maybe_bunch_0(void)
{
	pair_module0();
	pair_module1();
	pair_module2();
	pair_module3();
	pair_module4();
	pair_module5();
	pair_module6();
	pair_module7();
	pair_module8();
	pair_module9();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__pair__init(void);
void mercury__pair__init_type_tables(void);
void mercury__pair__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__pair__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__pair__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__pair__init_threadscope_string_table(void);
#endif

void mercury__pair__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__pair_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pair__type_ctor_info_pair_2,
		pair__pair_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pair__type_ctor_info_pair_1,
		pair__pair_1_0);
	mercury__pair__init_debugger();
}

void mercury__pair__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_pair__type_ctor_info_pair_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pair__type_ctor_info_pair_1);
	}
}


void mercury__pair__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__pair__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__pair);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__pair__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__pair__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
