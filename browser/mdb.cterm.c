/*
** Automatically generated from `cterm.m'
** by the Mercury compiler,
** version rotd-2011-08-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__cterm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.cterm.c"
#include "mdb.cterm.mh"

#line 28 "mdb.cterm.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.cterm.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdb.cterm.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 40 "mdb.cterm.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.cterm.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.cterm.c"
#line 49 "mdb.cterm.c"
#ifndef MDB__CTERM_DECL_GUARD
#define MDB__CTERM_DECL_GUARD

#line 53 "mdb.cterm.c"
#line 52 "cterm.m"

#include "mercury_trace_term.h"

#line 58 "mdb.cterm.c"
#line 59 "mdb.cterm.c"

#endif
#line 62 "mdb.cterm.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__cterm__type_ctor_info_cargs_0,
	mercury_data_mdb__cterm__type_ctor_info_cterm_0;
MR_decl_label1(mdb__cterm__cterm_head_tail_3_0, 1)
MR_decl_label3(mdb__cterm__match_with_cterm_3_0, 2,3,5)
MR_decl_label7(mdb__cterm__match_with_cterms_3_0, 36,7,8,9,18,11,3)
MR_def_extern_entry(mdb__cterm__cterm_deconstruct_3_0)
MR_def_extern_entry(mdb__cterm__cterm_head_tail_3_0)
MR_def_extern_entry(mdb__cterm__match_with_cterm_3_0)
MR_decl_static(mdb__cterm__match_with_cterms_3_0)
MR_def_extern_entry(__Unify___mdb__cterm__cargs_0_0)
MR_def_extern_entry(__Compare___mdb__cterm__cargs_0_0)
MR_def_extern_entry(__Unify___mdb__cterm__cterm_0_0)
MR_def_extern_entry(__Compare___mdb__cterm__cterm_0_0)

const MR_TypeCtorInfo_Struct mercury_data_mdb__cterm__type_ctor_info_cargs_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__cterm__cargs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__cterm__cargs_0_0)),
	"mdb.cterm",
	"cargs",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__cterm__type_ctor_info_cterm_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__cterm__cterm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__cterm__cterm_0_0)),
	"mdb.cterm",
	"cterm",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(mdb__cterm_module0)
	MR_init_entry1(mdb__cterm__cterm_deconstruct_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__cterm__cterm_deconstruct_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cterm_deconstruct'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__cterm__cterm_deconstruct_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CTerm	Term;
	MR_String	Functor;
	MR_CArgs	Args;
#define	MR_PROC_LABEL	mercury__mdb__cterm__cterm_deconstruct_3_0
	Term = (MR_CTerm) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("cterm_deconstruct");
{
#line 121 "cterm.m"

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;
;}
#line 150 "mdb.cterm.c"
	MR_RELEASE_GLOBAL_LOCK("cterm_deconstruct");
	MR_r1 = (MR_Word) Functor;
	MR_r2 = (MR_Word) Args;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__cterm_module1)
	MR_init_entry1(mdb__cterm__cterm_head_tail_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__cterm__cterm_head_tail_3_0);
	MR_init_label1(mdb__cterm__cterm_head_tail_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cterm_head_tail'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__cterm__cterm_head_tail_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CArgs	Args;
	MR_CTerm	Head;
	MR_CArgs	Tail;
#define	MR_PROC_LABEL	mercury__mdb__cterm__cterm_head_tail_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Args = (MR_CArgs) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("cterm_head_tail");
{
#line 140 "cterm.m"

    if (Args == NULL) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Head = Args->MR_args_head;
        Tail = Args->MR_args_tail;
        SUCCESS_INDICATOR = MR_TRUE;
    }
;}
#line 199 "mdb.cterm.c"
	MR_RELEASE_GLOBAL_LOCK("cterm_head_tail");
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__cterm__cterm_head_tail_3_0_i1);
	MR_r2 = (MR_Word) Head;
	MR_r3 = (MR_Word) Tail;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__cterm__cterm_head_tail_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_2);

MR_BEGIN_MODULE(mdb__cterm_module2)
	MR_init_entry1(mdb__cterm__match_with_cterm_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__cterm__match_with_cterm_3_0);
	MR_init_label3(mdb__cterm__match_with_cterm_3_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_with_cterm'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__cterm__match_with_cterm_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_2,
		mdb__cterm__match_with_cterm_3_0_i2);
MR_def_label(mdb__cterm__match_with_cterm_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CTerm	Term;
	MR_String	Functor;
	MR_CArgs	Args;
#define	MR_PROC_LABEL	mercury__mdb__cterm__match_with_cterm_3_0
	Term = (MR_CTerm) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("cterm_deconstruct");
{
#line 121 "cterm.m"

    if (Term == NULL) {
        MR_fatal_error("cterm_deconstruct: NULL term");
    }

    Functor = Term->MR_term_functor;
    Args = Term->MR_term_args;
;}
#line 261 "mdb.cterm.c"
	MR_RELEASE_GLOBAL_LOCK("cterm_deconstruct");
	MR_r4 = (MR_Word) Functor;
	MR_r2 = (MR_Word) Args;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r4) != 0)) {
		MR_GOTO_LAB(mdb__cterm__match_with_cterm_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdb__cterm__match_with_cterms_3_0);
MR_def_label(mdb__cterm__match_with_cterm_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("_", 1)) != 0)) {
		MR_GOTO_LAB(mdb__cterm__match_with_cterm_3_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__cterm__match_with_cterm_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_value_1_0);

MR_BEGIN_MODULE(mdb__cterm_module3)
	MR_init_entry1(mdb__cterm__match_with_cterms_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__cterm__match_with_cterms_3_0);
	MR_init_label7(mdb__cterm__match_with_cterms_3_0,36,7,8,9,18,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_with_cterms'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__cterm__match_with_cterms_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__cterm__match_with_cterms_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CArgs	Args;
	MR_CTerm	Head;
	MR_CArgs	Tail;
#define	MR_PROC_LABEL	mercury__mdb__cterm__match_with_cterms_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Args = (MR_CArgs) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("cterm_head_tail");
{
#line 140 "cterm.m"

    if (Args == NULL) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Head = Args->MR_args_head;
        Tail = Args->MR_args_tail;
        SUCCESS_INDICATOR = MR_TRUE;
    }
;}
#line 332 "mdb.cterm.c"
	MR_RELEASE_GLOBAL_LOCK("cterm_head_tail");
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__cterm__match_with_cterms_3_0_i3);
	MR_r2 = (MR_Word) Head;
	MR_r3 = (MR_Word) Tail;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__cterm__match_with_cterms_3_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(mdb__cterm__match_with_cterms_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__univ__univ_value_1_0,
		mdb__cterm__match_with_cterms_3_0_i8);
MR_def_label(mdb__cterm__match_with_cterms_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__cterm__match_with_cterm_3_0,
		mdb__cterm__match_with_cterms_3_0_i9);
MR_def_label(mdb__cterm__match_with_cterms_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__cterm__match_with_cterms_3_0_i11);
	}
MR_def_label(mdb__cterm__match_with_cterms_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(mdb__cterm__match_with_cterms_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__cterm__match_with_cterms_3_0_i36);
MR_def_label(mdb__cterm__match_with_cterms_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__cterm__match_with_cterms_3_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__cterm_module4)
	MR_init_entry1(__Unify___mdb__cterm__cargs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__cterm__cargs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__cterm__cargs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__cterm_module5)
	MR_init_entry1(__Compare___mdb__cterm__cargs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__cterm__cargs_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__cterm__cargs_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__cterm_module6)
	MR_init_entry1(__Unify___mdb__cterm__cterm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__cterm__cterm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__cterm__cterm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__cterm_module7)
	MR_init_entry1(__Compare___mdb__cterm__cterm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__cterm__cterm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__cterm__cterm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdb__cterm__match_with_cterm_3_0);

void
ML_BROWSE_match_with_cterm(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_CTerm Mercury__argument3, MR_Word * Mercury__argument4);

void
ML_BROWSE_match_with_cterm(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_CTerm Mercury__argument3, MR_Word * Mercury__argument4)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdb__cterm__match_with_cterm_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_CTerm, Mercury__argument3, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__cterm__match_with_cterm_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument4 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__cterm_maybe_bunch_0(void)
{
	mdb__cterm_module0();
	mdb__cterm_module1();
	mdb__cterm_module2();
	mdb__cterm_module3();
	mdb__cterm_module4();
	mdb__cterm_module5();
	mdb__cterm_module6();
	mdb__cterm_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__cterm__init(void);
void mercury__mdb__cterm__init_type_tables(void);
void mercury__mdb__cterm__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__cterm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__cterm__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__cterm__init_threadscope_string_table(void);
#endif

void mercury__mdb__cterm__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__cterm_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__cterm__type_ctor_info_cargs_0,
		mdb__cterm__cargs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__cterm__type_ctor_info_cterm_0,
		mdb__cterm__cterm_0_0);
	mercury__mdb__cterm__init_debugger();
}

void mercury__mdb__cterm__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__cterm__type_ctor_info_cargs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__cterm__type_ctor_info_cterm_0);
	}
}


void mercury__mdb__cterm__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__cterm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__cterm);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__cterm__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__cterm__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
