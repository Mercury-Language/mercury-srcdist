/*
** Automatically generated from `mutvar.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__mutvar__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mutvar.c"
#include "mutvar.mh"

#line 27 "mutvar.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "mutvar.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "mutvar.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "mutvar.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "mutvar.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "mutvar.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 51 "mutvar.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 55 "mutvar.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 59 "mutvar.c"
#line 150 "io.opt"
#include "dir.mh"

#line 63 "mutvar.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 67 "mutvar.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "mutvar.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "mutvar.c"
#line 20 "store.opt"
#include "store.mh"

#line 79 "mutvar.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 83 "mutvar.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "mutvar.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 91 "mutvar.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 95 "mutvar.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "mutvar.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 103 "mutvar.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 107 "mutvar.c"
#line 108 "mutvar.c"
#ifndef MUTVAR_DECL_GUARD
#define MUTVAR_DECL_GUARD

#line 112 "mutvar.c"
#line 113 "mutvar.c"

#endif
#line 116 "mutvar.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mutvar__type_ctor_info_mutvar_1;
MR_decl_label1(__Unify___mutvar__mutvar_1_0, 6)
MR_decl_label2(__Compare___mutvar__mutvar_1_0, 3,2)
MR_def_extern_entry(mutvar__new_mutvar0_1_0)
MR_def_extern_entry(mutvar__set_mutvar_2_0)
MR_def_extern_entry(mutvar__new_mutvar_2_0)
MR_def_extern_entry(mutvar__new_mutvar_2_1)
MR_def_extern_entry(mutvar__get_mutvar_2_0)
MR_def_extern_entry(__Unify___mutvar__mutvar_1_0)
MR_def_extern_entry(__Compare___mutvar__mutvar_1_0)
MR_decl_static(fn__f_109_117_116_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_ref_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_private_builtin__pti_ref_1__pseudo_1 = {
	&mercury_data_private_builtin__type_ctor_info_ref_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_NotagFunctorDesc mercury_data_mutvar__notag_functor_desc_mutvar_1 = {
	"mutvar",
	(MR_PseudoTypeInfo) &mercury_data_private_builtin__pti_ref_1__pseudo_1,
	NULL
};

const MR_Integer mercury_data_mutvar__functor_number_map_mutvar_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mutvar__type_ctor_info_mutvar_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mutvar__mutvar_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mutvar__mutvar_1_0)),
	"mutvar",
	"mutvar",
	{ (void *)&mercury_data_mutvar__notag_functor_desc_mutvar_1 },
	{ (void *)&mercury_data_mutvar__notag_functor_desc_mutvar_1 },
	1,
	4,
	mercury_data_mutvar__functor_number_map_mutvar_1
};


MR_BEGIN_MODULE(mutvar_module0)
	MR_init_entry1(mutvar__new_mutvar0_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mutvar__new_mutvar0_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
#define	MR_PROC_LABEL	mercury__mutvar__new_mutvar0_1_0
{
#line 90 "mutvar.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);
;}
#line 189 "mutvar.c"
	MR_r1 = Ref;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mutvar_module1)
	MR_init_entry1(mutvar__set_mutvar_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mutvar__set_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__mutvar__set_mutvar_2_0
	Ref = MR_r2;
	X = MR_r3;
{
#line 106 "mutvar.m"

    *(MR_Word *) Ref = X;
;}
#line 222 "mutvar.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mutvar_module2)
	MR_init_entry1(mutvar__new_mutvar_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mutvar__new_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Ref;
#define	MR_PROC_LABEL	mercury__mutvar__new_mutvar_2_0
{
#line 90 "mutvar.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);
;}
#line 255 "mutvar.c"
	MR_tempr1 = Ref;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Ref;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__mutvar__new_mutvar_2_0
	Ref = MR_tempr1;
	X = MR_r2;
{
#line 106 "mutvar.m"

    *(MR_Word *) Ref = X;
;}
#line 270 "mutvar.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mutvar_module3)
	MR_init_entry1(mutvar__new_mutvar_2_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mutvar__new_mutvar_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Ref;
#define	MR_PROC_LABEL	mercury__mutvar__new_mutvar_2_1
{
#line 90 "mutvar.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_PROC_LABEL, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);
;}
#line 305 "mutvar.c"
	MR_tempr1 = Ref;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Ref;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__mutvar__new_mutvar_2_1
	Ref = MR_tempr1;
	X = MR_r2;
{
#line 106 "mutvar.m"

    *(MR_Word *) Ref = X;
;}
#line 320 "mutvar.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mutvar_module4)
	MR_init_entry1(mutvar__get_mutvar_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mutvar__get_mutvar_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Ref;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__mutvar__get_mutvar_2_0
	Ref = MR_r2;
{
#line 99 "mutvar.m"

    X = * (MR_Word *) Ref;
;}
#line 353 "mutvar.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___private_builtin__ref_1_0);

MR_BEGIN_MODULE(mutvar_module5)
	MR_init_entry1(__Unify___mutvar__mutvar_1_0);
	MR_init_label1(__Unify___mutvar__mutvar_1_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mutvar__mutvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mutvar__mutvar_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___private_builtin__ref_1_0);
MR_def_label(__Unify___mutvar__mutvar_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___private_builtin__ref_1_0);

MR_BEGIN_MODULE(mutvar_module6)
	MR_init_entry1(__Compare___mutvar__mutvar_1_0);
	MR_init_label2(__Compare___mutvar__mutvar_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mutvar__mutvar_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mutvar__mutvar_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___mutvar__mutvar_1_0_i2);
MR_def_label(__Compare___mutvar__mutvar_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mutvar__mutvar_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___private_builtin__ref_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mutvar_module7)
	MR_init_entry1(fn__f_109_117_116_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_117_116_118_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mutvar_maybe_bunch_0(void)
{
	mutvar_module0();
	mutvar_module1();
	mutvar_module2();
	mutvar_module3();
	mutvar_module4();
	mutvar_module5();
	mutvar_module6();
	mutvar_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mutvar__init(void);
void mercury__mutvar__init_type_tables(void);
void mercury__mutvar__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mutvar__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mutvar__init_complexity_procs(void);
#endif

void mercury__mutvar__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mutvar_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mutvar__type_ctor_info_mutvar_1,
		mutvar__mutvar_1_0);
	mercury__mutvar__init_debugger();
}

void mercury__mutvar__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mutvar__type_ctor_info_mutvar_1);
	}
}


void mercury__mutvar__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mutvar__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mutvar);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mutvar__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
