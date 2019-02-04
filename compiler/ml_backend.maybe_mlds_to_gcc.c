/*
** Automatically generated from `maybe_mlds_to_gcc.m'
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
INIT mercury__ml_backend__maybe_mlds_to_gcc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ml_backend.maybe_mlds_to_gcc.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "ml_backend.maybe_mlds_to_gcc.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.maybe_mlds_to_gcc.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.maybe_mlds_to_gcc.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ml_backend.maybe_mlds_to_gcc.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.maybe_mlds_to_gcc.c"
#line 49 "ml_backend.maybe_mlds_to_gcc.c"
#include "ml_backend.maybe_mlds_to_gcc.mh"

#line 52 "ml_backend.maybe_mlds_to_gcc.c"
#line 53 "ml_backend.maybe_mlds_to_gcc.c"
#ifndef ML_BACKEND__MAYBE_MLDS_TO_GCC_DECL_GUARD
#define ML_BACKEND__MAYBE_MLDS_TO_GCC_DECL_GUARD

#line 57 "ml_backend.maybe_mlds_to_gcc.c"
#line 58 "ml_backend.maybe_mlds_to_gcc.c"

#endif
#line 61 "ml_backend.maybe_mlds_to_gcc.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__maybe_mlds_to_gcc__type_ctor_info_frontend_callback_1;
MR_decl_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0, 2)
MR_def_extern_entry(ml_backend__maybe_mlds_to_gcc__maybe_run_gcc_backend_5_0)
MR_def_extern_entry(ml_backend__maybe_mlds_to_gcc__maybe_compile_to_asm_4_0)
MR_def_extern_entry(__Unify___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0)
MR_def_extern_entry(__Compare___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0)
MR_def_extern_entry(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_117_110_95_103_99_99_95_98_97_99_107_101_110_100_95_95_91_50_93_95_48_5_0)
MR_def_extern_entry(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__maybe_mlds_to_gcc__type_ctor_info_frontend_callback_1 = {
	1,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0)),
	"ml_backend.maybe_mlds_to_gcc",
	"frontend_callback",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(ml_backend__maybe_mlds_to_gcc_module0)
	MR_init_entry1(ml_backend__maybe_mlds_to_gcc__maybe_run_gcc_backend_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__maybe_mlds_to_gcc__maybe_run_gcc_backend_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_run_gcc_backend'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__maybe_mlds_to_gcc__maybe_run_gcc_backend_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_117_110_95_103_99_99_95_98_97_99_107_101_110_100_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__maybe_mlds_to_gcc_module1)
	MR_init_entry1(ml_backend__maybe_mlds_to_gcc__maybe_compile_to_asm_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__maybe_mlds_to_gcc__maybe_compile_to_asm_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_compile_to_asm'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__maybe_mlds_to_gcc__maybe_compile_to_asm_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ml_backend__maybe_mlds_to_gcc_module2)
	MR_init_entry1(__Unify___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(ml_backend__maybe_mlds_to_gcc_module3)
	MR_init_entry1(__Compare___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(ml_backend__maybe_mlds_to_gcc_module4)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_117_110_95_103_99_99_95_98_97_99_107_101_110_100_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_117_110_95_103_99_99_95_98_97_99_107_101_110_100_95_95_91_50_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_run_gcc_backend__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_117_110_95_103_99_99_95_98_97_99_107_101_110_100_95_95_91_50_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_114_117_110_95_103_99_99_95_98_97_99_107_101_110_100_95_95_91_50_93_95_48_5_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__file_util__report_error_3_0);

MR_BEGIN_MODULE(ml_backend__maybe_mlds_to_gcc_module5)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0);
	MR_init_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__maybe_compile_to_asm__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("Sorry, \140--target asm\' not supported: this installation of the Mercury\ncompiler was built without support for the GCC back-end interface.", 136);
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_97_121_98_101_95_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_99_111_109_112_105_108_101_95_116_111_95_97_115_109_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__maybe_mlds_to_gcc_maybe_bunch_0(void)
{
	ml_backend__maybe_mlds_to_gcc_module0();
	ml_backend__maybe_mlds_to_gcc_module1();
	ml_backend__maybe_mlds_to_gcc_module2();
	ml_backend__maybe_mlds_to_gcc_module3();
	ml_backend__maybe_mlds_to_gcc_module4();
	ml_backend__maybe_mlds_to_gcc_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__maybe_mlds_to_gcc__init(void);
void mercury__ml_backend__maybe_mlds_to_gcc__init_type_tables(void);
void mercury__ml_backend__maybe_mlds_to_gcc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__maybe_mlds_to_gcc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__maybe_mlds_to_gcc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__maybe_mlds_to_gcc__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__maybe_mlds_to_gcc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__maybe_mlds_to_gcc_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__maybe_mlds_to_gcc__type_ctor_info_frontend_callback_1,
		ml_backend__maybe_mlds_to_gcc__frontend_callback_1_0);
	mercury__ml_backend__maybe_mlds_to_gcc__init_debugger();
}

void mercury__ml_backend__maybe_mlds_to_gcc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__maybe_mlds_to_gcc__type_ctor_info_frontend_callback_1);
	}
}


void mercury__ml_backend__maybe_mlds_to_gcc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__maybe_mlds_to_gcc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__maybe_mlds_to_gcc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__maybe_mlds_to_gcc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__maybe_mlds_to_gcc__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
