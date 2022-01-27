/*
** Automatically generated from `mode_robdd.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__mode_robdd__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "mode_robdd.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "mode_robdd.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "mode_robdd.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "mode_robdd.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "mode_robdd.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "mode_robdd.c"
#line 49 "mode_robdd.c"
#include "mode_robdd.mh"

#line 52 "mode_robdd.c"
#line 53 "mode_robdd.c"
#ifndef MODE_ROBDD_DECL_GUARD
#define MODE_ROBDD_DECL_GUARD

#line 57 "mode_robdd.c"
#line 58 "mode_robdd.c"

#endif
#line 61 "mode_robdd.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mode_robdd__type_ctor_info_mode_robdd_1;
MR_def_extern_entry(__Unify___mode_robdd__mode_robdd_1_0)
MR_def_extern_entry(__Compare___mode_robdd__mode_robdd_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__tfeirn__type_ctor_info_tfeirn_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_mode_robdd__tfeirn__pti_tfeirn_1__pseudo_1 = {
	&mercury_data_mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_TypeCtorInfo_Struct mercury_data_mode_robdd__type_ctor_info_mode_robdd_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mode_robdd__mode_robdd_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mode_robdd__mode_robdd_1_0)),
	"mode_robdd",
	"mode_robdd",
	{ 0 },
	{ (void *)&mercury_data_mode_robdd__tfeirn__pti_tfeirn_1__pseudo_1 },
	-1,
	0,
	NULL
};



MR_decl_entry(__Unify___mode_robdd__tfeirn__tfeirn_1_0);

MR_BEGIN_MODULE(mode_robdd_module0)
	MR_init_entry1(__Unify___mode_robdd__mode_robdd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mode_robdd__mode_robdd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mode_robdd__mode_robdd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mode_robdd__tfeirn__tfeirn_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mode_robdd__tfeirn__tfeirn_1_0);

MR_BEGIN_MODULE(mode_robdd_module1)
	MR_init_entry1(__Compare___mode_robdd__mode_robdd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mode_robdd__mode_robdd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mode_robdd__mode_robdd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___mode_robdd__tfeirn__tfeirn_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mode_robdd_maybe_bunch_0(void)
{
	mode_robdd_module0();
	mode_robdd_module1();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mode_robdd__init(void);
void mercury__mode_robdd__init_type_tables(void);
void mercury__mode_robdd__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mode_robdd__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mode_robdd__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mode_robdd__init_threadscope_string_table(void);
#endif

void mercury__mode_robdd__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mode_robdd_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mode_robdd__type_ctor_info_mode_robdd_1,
		mode_robdd__mode_robdd_1_0);
	mercury__mode_robdd__init_debugger();
}

void mercury__mode_robdd__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mode_robdd__type_ctor_info_mode_robdd_1);
	}
}


void mercury__mode_robdd__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mode_robdd__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__mode_robdd);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mode_robdd__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mode_robdd__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
