/*
** Automatically generated from `process_util.m'
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
INIT mercury__libs__process_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "libs.process_util.c"
#include "libs.process_util.mh"

#line 28 "libs.process_util.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "libs.process_util.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "libs.process_util.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "libs.process_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "libs.process_util.c"
#line 45 "libs.process_util.c"
#ifndef LIBS__PROCESS_UTIL_DECL_GUARD
#define LIBS__PROCESS_UTIL_DECL_GUARD

#line 49 "libs.process_util.c"
#line 158 "process_util.m"

#ifdef MR_HAVE_UNISTD_H
  #include <unistd.h>
#endif

#ifdef MR_HAVE_SYS_TYPES_H
  #include <sys/types.h>
#endif

#ifdef MR_HAVE_SYS_WAIT_H
  #include <sys/wait.h>
#endif

#include <errno.h>

#include "mercury_signal.h"
#include "mercury_types.h"
#include "mercury_heap.h"
#include "mercury_misc.h"

#if defined(MR_HAVE_FORK) && defined(MR_HAVE_WAIT) && defined(MR_HAVE_KILL)
  #define MC_CAN_FORK 1
#endif

#define MC_SETUP_SIGNAL_HANDLER(sig, handler)         MR_setup_signal(sig, (MR_Code *) handler, MR_FALSE,             "mercury_compile: cannot install signal handler");

    /* Have we received a signal. */
extern volatile sig_atomic_t MC_signalled;

    /*
    ** Which signal did we receive.
    ** XXX This assumes a signal number will fit into a sig_atomic_t.
    */
extern volatile sig_atomic_t MC_signal_received;

void MC_mercury_compile_signal_handler(int sig);

#line 88 "libs.process_util.c"
#line 290 "process_util.m"
#include <signal.h>
#line 91 "libs.process_util.c"
#line 92 "libs.process_util.c"

#endif
#line 95 "libs.process_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__process_util__type_ctor_info_build0_1,
	mercury_data_libs__process_util__type_ctor_info_io_pred_0,
	mercury_data_libs__process_util__type_ctor_info_pid_0,
	mercury_data_libs__process_util__type_ctor_info_post_signal_cleanup_1,
	mercury_data_libs__process_util__type_ctor_info_signal_action_0;
MR_decl_label7(libs__process_util__build_with_check_for_interrupt_8_0, 2,6,7,8,9,10,11)
MR_decl_label2(libs__process_util__call_child_process_io_pred_4_0, 2,4)
MR_decl_label4(libs__process_util__call_in_forked_process_with_backup_5_0, 23,6,8,3)
MR_decl_label1(libs__process_util__can_fork_0_0, 1)
MR_decl_label1(libs__process_util__start_in_forked_process_4_0, 2)
MR_decl_label1(libs__process_util__wait_any_4_0, 2)
MR_def_extern_entry(libs__process_util__raise_signal_3_0)
MR_decl_static(libs__process_util__setup_signal_handlers_3_0)
MR_decl_static(libs__process_util__restore_signal_handlers_3_0)
MR_decl_static(libs__process_util__check_for_signal_4_0)
MR_def_extern_entry(libs__process_util__build_with_check_for_interrupt_8_0)
MR_def_extern_entry(libs__process_util__send_signal_4_0)
MR_def_extern_entry(fn__libs__process_util__sigint_0_0)
MR_def_extern_entry(libs__process_util__can_fork_0_0)
MR_decl_static(libs__process_util__start_in_forked_process_2_4_0)
MR_def_extern_entry(libs__process_util__start_in_forked_process_4_0)
MR_decl_static(libs__process_util__do_wait_5_0)
MR_def_extern_entry(libs__process_util__call_in_forked_process_with_backup_5_0)
MR_def_extern_entry(libs__process_util__call_in_forked_process_4_0)
MR_def_extern_entry(libs__process_util__wait_pid_4_0)
MR_def_extern_entry(libs__process_util__wait_any_4_0)
MR_decl_static(fn__libs__process_util__sig_dfl_0_0)
MR_decl_static(libs__process_util__call_child_process_io_pred_4_0)
MR_def_extern_entry(__Unify___libs__process_util__build0_1_0)
MR_def_extern_entry(__Compare___libs__process_util__build0_1_0)
MR_def_extern_entry(__Unify___libs__process_util__io_pred_0_0)
MR_def_extern_entry(__Compare___libs__process_util__io_pred_0_0)
MR_def_extern_entry(__Unify___libs__process_util__pid_0_0)
MR_def_extern_entry(__Compare___libs__process_util__pid_0_0)
MR_def_extern_entry(__Unify___libs__process_util__post_signal_cleanup_1_0)
MR_def_extern_entry(__Compare___libs__process_util__post_signal_cleanup_1_0)
MR_decl_static(__Unify___libs__process_util__signal_action_0_0)
MR_decl_static(__Compare___libs__process_util__signal_action_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_BOOL_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct5 mercury_data___vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	5,
{	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__process_util__type_ctor_info_build0_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__process_util__build0_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__process_util__build0_1_0)),
	"libs.process_util",
	"build0",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

static const MR_VA_TypeInfo_Struct3 mercury_data___vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__process_util__type_ctor_info_io_pred_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__process_util__io_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__process_util__io_pred_0_0)),
	"libs.process_util",
	"io_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_libs__process_util__type_ctor_info_pid_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__process_util__pid_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__process_util__pid_0_0)),
	"libs.process_util",
	"pid",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury_data___vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__process_util__type_ctor_info_post_signal_cleanup_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__process_util__post_signal_cleanup_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__process_util__post_signal_cleanup_1_0)),
	"libs.process_util",
	"post_signal_cleanup",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_libs__process_util__type_ctor_info_signal_action_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__process_util__signal_action_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__process_util__signal_action_0_0)),
	"libs.process_util",
	"signal_action",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(libs__process_util_module0)
	MR_init_entry1(libs__process_util__raise_signal_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__raise_signal_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'raise_signal'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__raise_signal_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Signal;
#define	MR_PROC_LABEL	mercury__libs__process_util__raise_signal_3_0
	Signal = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("raise_signal");
{
#line 299 "process_util.m"

    raise(Signal);
;}
#line 311 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("raise_signal");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module1)
	MR_init_entry1(libs__process_util__setup_signal_handlers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__setup_signal_handlers_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'setup_signal_handlers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__process_util__setup_signal_handlers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_signal_action	SigintHandler;
#define	MR_PROC_LABEL	mercury__libs__process_util__setup_signal_handlers_3_0
	MR_OBTAIN_GLOBAL_LOCK("setup_signal_handlers");
{
#line 219 "process_util.m"

    MC_signalled = MR_FALSE;

    /*
    ** mdb sets up a SIGINT handler, so we should restore
    ** it after we're done.
    */
    MR_get_signal_action(SIGINT, &SigintHandler,
        "error getting SIGINT handler");
    MC_SETUP_SIGNAL_HANDLER(SIGINT, MC_mercury_compile_signal_handler);
    MC_SETUP_SIGNAL_HANDLER(SIGTERM, MC_mercury_compile_signal_handler);
#ifdef SIGHUP
    MC_SETUP_SIGNAL_HANDLER(SIGHUP, MC_mercury_compile_signal_handler);
#endif
#ifdef SIGQUIT
    MC_SETUP_SIGNAL_HANDLER(SIGQUIT, MC_mercury_compile_signal_handler);
#endif
;}
#line 360 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("setup_signal_handlers");
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, SigintHandler, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module2)
	MR_init_entry1(libs__process_util__restore_signal_handlers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__restore_signal_handlers_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_signal_handlers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__process_util__restore_signal_handlers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_signal_action	SigintHandler;
#define	MR_PROC_LABEL	mercury__libs__process_util__restore_signal_handlers_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, MR_r1, SigintHandler);
	MR_OBTAIN_GLOBAL_LOCK("restore_signal_handlers");
{
#line 245 "process_util.m"

    MR_set_signal_action(SIGINT, &SigintHandler,
        "error resetting SIGINT handler");
    MC_SETUP_SIGNAL_HANDLER(SIGTERM, SIG_DFL);
#ifdef SIGHUP
    MC_SETUP_SIGNAL_HANDLER(SIGHUP, SIG_DFL);
#endif
#ifdef SIGQUIT
    MC_SETUP_SIGNAL_HANDLER(SIGQUIT, SIG_DFL);
#endif
;}
#line 404 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("restore_signal_handlers");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module3)
	MR_init_entry1(libs__process_util__check_for_signal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__check_for_signal_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_signal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__process_util__check_for_signal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Signalled;
	MR_Integer	Signal;
#define	MR_PROC_LABEL	mercury__libs__process_util__check_for_signal_4_0
	MR_OBTAIN_GLOBAL_LOCK("check_for_signal");
{
#line 283 "process_util.m"

    Signalled = (MC_signalled ? 1 : 0);
    Signal = MC_signal_received;
;}
#line 440 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("check_for_signal");
	MR_r1 = Signalled;
	MR_r2 = Signal;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(libs__process_util_module4)
	MR_init_entry1(libs__process_util__build_with_check_for_interrupt_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__build_with_check_for_interrupt_8_0);
	MR_init_label7(libs__process_util__build_with_check_for_interrupt_8_0,2,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_with_check_for_interrupt'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__build_with_check_for_interrupt_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_signal_action	SigintHandler;
#define	MR_PROC_LABEL	mercury__libs__process_util__build_with_check_for_interrupt_8_0
	MR_OBTAIN_GLOBAL_LOCK("setup_signal_handlers");
{
#line 219 "process_util.m"

    MC_signalled = MR_FALSE;

    /*
    ** mdb sets up a SIGINT handler, so we should restore
    ** it after we're done.
    */
    MR_get_signal_action(SIGINT, &SigintHandler,
        "error getting SIGINT handler");
    MC_SETUP_SIGNAL_HANDLER(SIGINT, MC_mercury_compile_signal_handler);
    MC_SETUP_SIGNAL_HANDLER(SIGTERM, MC_mercury_compile_signal_handler);
#ifdef SIGHUP
    MC_SETUP_SIGNAL_HANDLER(SIGHUP, MC_mercury_compile_signal_handler);
#endif
#ifdef SIGQUIT
    MC_SETUP_SIGNAL_HANDLER(SIGQUIT, MC_mercury_compile_signal_handler);
#endif
;}
#line 499 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("setup_signal_handlers");
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, SigintHandler, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__process_util__build_with_check_for_interrupt_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__libs__process_util__build_with_check_for_interrupt_8_0_i2);
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_signal_action	SigintHandler;
#define	MR_PROC_LABEL	mercury__libs__process_util__build_with_check_for_interrupt_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, MR_sv(3), SigintHandler);
	MR_OBTAIN_GLOBAL_LOCK("restore_signal_handlers");
{
#line 245 "process_util.m"

    MR_set_signal_action(SIGINT, &SigintHandler,
        "error resetting SIGINT handler");
    MC_SETUP_SIGNAL_HANDLER(SIGTERM, SIG_DFL);
#ifdef SIGHUP
    MC_SETUP_SIGNAL_HANDLER(SIGHUP, SIG_DFL);
#endif
#ifdef SIGQUIT
    MC_SETUP_SIGNAL_HANDLER(SIGQUIT, SIG_DFL);
#endif
;}
#line 533 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("restore_signal_handlers");
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Signalled;
	MR_Integer	Signal;
#define	MR_PROC_LABEL	mercury__libs__process_util__build_with_check_for_interrupt_8_0
	MR_OBTAIN_GLOBAL_LOCK("check_for_signal");
{
#line 283 "process_util.m"

    Signalled = (MC_signalled ? 1 : 0);
    Signal = MC_signal_received;
;}
#line 548 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("check_for_signal");
	MR_r4 = Signalled;
	MR_r5 = Signal;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(libs__process_util__build_with_check_for_interrupt_8_0_i11);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__process_util__build_with_check_for_interrupt_8_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__process_util__build_with_check_for_interrupt_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__libs__process_util__build_with_check_for_interrupt_8_0_i10);
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("** Received signal ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__process_util__build_with_check_for_interrupt_8_0_i7);
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		libs__process_util__build_with_check_for_interrupt_8_0_i8);
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", cleaning up.\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__process_util__build_with_check_for_interrupt_8_0_i9);
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__process_util__build_with_check_for_interrupt_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__libs__process_util__build_with_check_for_interrupt_8_0_i10);
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Signal;
#define	MR_PROC_LABEL	mercury__libs__process_util__build_with_check_for_interrupt_8_0
	Signal = MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("raise_signal");
{
#line 299 "process_util.m"

    raise(Signal);
;}
#line 601 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("raise_signal");
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_r4;
MR_def_label(libs__process_util__build_with_check_for_interrupt_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module5)
	MR_init_entry1(libs__process_util__send_signal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__send_signal_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'send_signal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__send_signal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Pid;
	MR_Integer	Signal;
#define	MR_PROC_LABEL	mercury__libs__process_util__send_signal_4_0
	Pid = MR_r1;
	Signal = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("send_signal");
{
#line 306 "process_util.m"

#ifdef MR_HAVE_KILL
    kill(Pid, Signal);
#endif
;}
#line 645 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("send_signal");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module6)
	MR_init_entry1(fn__libs__process_util__sigint_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__process_util__sigint_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sigint'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__process_util__sigint_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Sigint;
#define	MR_PROC_LABEL	mercury__fn__libs__process_util__sigint_0_0
{
#line 318 "process_util.m"

    Sigint = SIGINT;
;}
#line 678 "libs.process_util.c"
	MR_r1 = Sigint;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module7)
	MR_init_entry1(libs__process_util__can_fork_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__can_fork_0_0);
	MR_init_label1(libs__process_util__can_fork_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_fork'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__can_fork_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__process_util__can_fork_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 351 "process_util.m"

    /*
    ** call_in_forked_process_2 is not `thread_safe' so will hold a mutex
    ** that the child process will want.  At the same time the parent process
    ** waits for the child to exit, so we have a deadlock.
    **
    ** Also, in pthreads, a forked process does not inherit the threads of
    ** the original process so it is not at all clear whether we could use
    ** fork() when running in a parallel grade.
    */
#if (defined MC_CAN_FORK) && (!defined MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 727 "libs.process_util.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(libs__process_util__can_fork_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__process_util__can_fork_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module8)
	MR_init_entry1(libs__process_util__start_in_forked_process_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__start_in_forked_process_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'start_in_forked_process_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__process_util__start_in_forked_process_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	Pred;
	MR_Integer	Pid;
#define	MR_PROC_LABEL	mercury__libs__process_util__start_in_forked_process_2_4_0
	Pred = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("start_in_forked_process_2");
{
#line 386 "process_util.m"

#ifdef MC_CAN_FORK

    Pid = fork();
    if (Pid == -1) {                        /* error */
        MR_perror("error in fork()");
    } else if (Pid == 0) {                  /* child */
        MR_Integer exit_status;

        MC_call_child_process_io_pred(Pred, &exit_status);
        exit(exit_status);
    } else {                                /* parent */
    }

#else /* ! MC_CAN_FORK */
    Pid = 0;
#endif /* ! MC_CAN_FORK */
;}
#line 788 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("start_in_forked_process_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Pid;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module9)
	MR_init_entry1(libs__process_util__start_in_forked_process_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__start_in_forked_process_4_0);
	MR_init_label1(libs__process_util__start_in_forked_process_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'start_in_forked_process'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__start_in_forked_process_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	Pred;
	MR_Integer	Pid;
#define	MR_PROC_LABEL	mercury__libs__process_util__start_in_forked_process_4_0
	Pred = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("start_in_forked_process_2");
{
#line 386 "process_util.m"

#ifdef MC_CAN_FORK

    Pid = fork();
    if (Pid == -1) {                        /* error */
        MR_perror("error in fork()");
    } else if (Pid == 0) {                  /* child */
        MR_Integer exit_status;

        MC_call_child_process_io_pred(Pred, &exit_status);
        exit(exit_status);
    } else {                                /* parent */
    }

#else /* ! MC_CAN_FORK */
    Pid = 0;
#endif /* ! MC_CAN_FORK */
;}
#line 847 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("start_in_forked_process_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r3 = Pid;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__process_util__start_in_forked_process_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(libs__process_util__start_in_forked_process_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module10)
	MR_init_entry1(libs__process_util__do_wait_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__do_wait_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_wait'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__process_util__do_wait_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Pid;
	MR_Integer	WaitedPid;
	MR_Integer	Status;
#define	MR_PROC_LABEL	mercury__libs__process_util__do_wait_5_0
	Pid = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("do_wait");
{
#line 434 "process_util.m"

#ifdef MC_CAN_FORK
    {
        int     child_status;
        pid_t   wait_status;

        /*
        ** Make sure the wait() is interrupted by the signals
        ** which cause us to exit.
        */
        MR_signal_should_restart(SIGINT, MR_FALSE);
        MR_signal_should_restart(SIGTERM, MR_FALSE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_FALSE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_FALSE);
#endif

        while (1) {
            wait_status = waitpid(Pid, &child_status, 0);
            if (wait_status != -1) {
                WaitedPid = wait_status;
                Status = child_status;
                break;
            } else if (MR_is_eintr(errno)) {
                if (MC_signalled) {
                    /*
                    ** A normally fatal signal has been received, so kill the
                    ** child immediately.  Use SIGTERM, not MC_signal_received,
                    ** because the child may be inside a call to system() which
                    ** would cause SIGINT to be ignored on some systems (e.g.
                    ** Linux).
                    */
                    if (Pid != -1) {
                        kill(Pid, SIGTERM);
                    }
                    break;
                }
            } else {
                /*
                ** This should never happen.
                */
                MR_perror("error in wait(): ");
                Status = 1;
                break;
            }
        }

        /*
        ** Restore the system call signal behaviour.
        */
        MR_signal_should_restart(SIGINT, MR_TRUE);
        MR_signal_should_restart(SIGTERM, MR_TRUE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_TRUE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_TRUE);
#endif
    }

#else /* ! MC_CAN_FORK */
    MR_perror("cannot wait() when fork() is unavailable: ");
    Status = 1;
#endif /* ! MC_CAN_FORK */
;}
#line 961 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("do_wait");
	MR_r1 = WaitedPid;
	MR_r2 = Status;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__io__handle_system_command_exit_status_1_0);
MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(libs__process_util_module11)
	MR_init_entry1(libs__process_util__call_in_forked_process_with_backup_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__call_in_forked_process_with_backup_5_0);
	MR_init_label4(libs__process_util__call_in_forked_process_with_backup_5_0,23,6,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_in_forked_process_with_backup'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__call_in_forked_process_with_backup_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__process_util__call_in_forked_process_with_backup_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 351 "process_util.m"

    /*
    ** call_in_forked_process_2 is not `thread_safe' so will hold a mutex
    ** that the child process will want.  At the same time the parent process
    ** waits for the child to exit, so we have a deadlock.
    **
    ** Also, in pthreads, a forked process does not inherit the threads of
    ** the original process so it is not at all clear whether we could use
    ** fork() when running in a parallel grade.
    */
#if (defined MC_CAN_FORK) && (!defined MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1014 "libs.process_util.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(libs__process_util__call_in_forked_process_with_backup_5_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word	Pred;
	MR_Integer	Pid;
#define	MR_PROC_LABEL	mercury__libs__process_util__call_in_forked_process_with_backup_5_0
	Pred = MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("start_in_forked_process_2");
{
#line 386 "process_util.m"

#ifdef MC_CAN_FORK

    Pid = fork();
    if (Pid == -1) {                        /* error */
        MR_perror("error in fork()");
    } else if (Pid == 0) {                  /* child */
        MR_Integer exit_status;

        MC_call_child_process_io_pred(Pred, &exit_status);
        exit(exit_status);
    } else {                                /* parent */
    }

#else /* ! MC_CAN_FORK */
    Pid = 0;
#endif /* ! MC_CAN_FORK */
;}
#line 1049 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("start_in_forked_process_2");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r3 = Pid;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(libs__process_util__call_in_forked_process_with_backup_5_0_i6);
	}
MR_def_label(libs__process_util__call_in_forked_process_with_backup_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(libs__process_util__call_in_forked_process_with_backup_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Pid;
	MR_Integer	WaitedPid;
	MR_Integer	Status;
#define	MR_PROC_LABEL	mercury__libs__process_util__call_in_forked_process_with_backup_5_0
	Pid = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("do_wait");
{
#line 434 "process_util.m"

#ifdef MC_CAN_FORK
    {
        int     child_status;
        pid_t   wait_status;

        /*
        ** Make sure the wait() is interrupted by the signals
        ** which cause us to exit.
        */
        MR_signal_should_restart(SIGINT, MR_FALSE);
        MR_signal_should_restart(SIGTERM, MR_FALSE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_FALSE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_FALSE);
#endif

        while (1) {
            wait_status = waitpid(Pid, &child_status, 0);
            if (wait_status != -1) {
                WaitedPid = wait_status;
                Status = child_status;
                break;
            } else if (MR_is_eintr(errno)) {
                if (MC_signalled) {
                    /*
                    ** A normally fatal signal has been received, so kill the
                    ** child immediately.  Use SIGTERM, not MC_signal_received,
                    ** because the child may be inside a call to system() which
                    ** would cause SIGINT to be ignored on some systems (e.g.
                    ** Linux).
                    */
                    if (Pid != -1) {
                        kill(Pid, SIGTERM);
                    }
                    break;
                }
            } else {
                /*
                ** This should never happen.
                */
                MR_perror("error in wait(): ");
                Status = 1;
                break;
            }
        }

        /*
        ** Restore the system call signal behaviour.
        */
        MR_signal_should_restart(SIGINT, MR_TRUE);
        MR_signal_should_restart(SIGTERM, MR_TRUE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_TRUE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_TRUE);
#endif
    }

#else /* ! MC_CAN_FORK */
    MR_perror("cannot wait() when fork() is unavailable: ");
    Status = 1;
#endif /* ! MC_CAN_FORK */
;}
#line 1142 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("do_wait");
	MR_r1 = Status;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__io__handle_system_command_exit_status_1_0,
		libs__process_util__call_in_forked_process_with_backup_5_0_i8);
MR_def_label(libs__process_util__call_in_forked_process_with_backup_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(libs__process_util__call_in_forked_process_with_backup_5_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(libs__process_util__call_in_forked_process_with_backup_5_0_i23);
	}
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(libs__process_util__call_in_forked_process_with_backup_5_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(libs__process_util__call_in_forked_process_with_backup_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__process_util__call_in_forked_process_with_backup_5_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module12)
	MR_init_entry1(libs__process_util__call_in_forked_process_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__call_in_forked_process_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_in_forked_process'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__call_in_forked_process_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_np_tailcall_ent(libs__process_util__call_in_forked_process_with_backup_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module13)
	MR_init_entry1(libs__process_util__wait_pid_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__wait_pid_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wait_pid'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__wait_pid_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Pid;
	MR_Integer	WaitedPid;
	MR_Integer	Status;
#define	MR_PROC_LABEL	mercury__libs__process_util__wait_pid_4_0
	Pid = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("do_wait");
{
#line 434 "process_util.m"

#ifdef MC_CAN_FORK
    {
        int     child_status;
        pid_t   wait_status;

        /*
        ** Make sure the wait() is interrupted by the signals
        ** which cause us to exit.
        */
        MR_signal_should_restart(SIGINT, MR_FALSE);
        MR_signal_should_restart(SIGTERM, MR_FALSE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_FALSE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_FALSE);
#endif

        while (1) {
            wait_status = waitpid(Pid, &child_status, 0);
            if (wait_status != -1) {
                WaitedPid = wait_status;
                Status = child_status;
                break;
            } else if (MR_is_eintr(errno)) {
                if (MC_signalled) {
                    /*
                    ** A normally fatal signal has been received, so kill the
                    ** child immediately.  Use SIGTERM, not MC_signal_received,
                    ** because the child may be inside a call to system() which
                    ** would cause SIGINT to be ignored on some systems (e.g.
                    ** Linux).
                    */
                    if (Pid != -1) {
                        kill(Pid, SIGTERM);
                    }
                    break;
                }
            } else {
                /*
                ** This should never happen.
                */
                MR_perror("error in wait(): ");
                Status = 1;
                break;
            }
        }

        /*
        ** Restore the system call signal behaviour.
        */
        MR_signal_should_restart(SIGINT, MR_TRUE);
        MR_signal_should_restart(SIGTERM, MR_TRUE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_TRUE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_TRUE);
#endif
    }

#else /* ! MC_CAN_FORK */
    MR_perror("cannot wait() when fork() is unavailable: ");
    Status = 1;
#endif /* ! MC_CAN_FORK */
;}
#line 1291 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("do_wait");
	MR_r1 = Status;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__io__handle_system_command_exit_status_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module14)
	MR_init_entry1(libs__process_util__wait_any_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__wait_any_4_0);
	MR_init_label1(libs__process_util__wait_any_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wait_any'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__process_util__wait_any_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Pid;
	MR_Integer	WaitedPid;
	MR_Integer	Status;
#define	MR_PROC_LABEL	mercury__libs__process_util__wait_any_4_0
	Pid = (MR_Integer) -1;
	MR_OBTAIN_GLOBAL_LOCK("do_wait");
{
#line 434 "process_util.m"

#ifdef MC_CAN_FORK
    {
        int     child_status;
        pid_t   wait_status;

        /*
        ** Make sure the wait() is interrupted by the signals
        ** which cause us to exit.
        */
        MR_signal_should_restart(SIGINT, MR_FALSE);
        MR_signal_should_restart(SIGTERM, MR_FALSE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_FALSE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_FALSE);
#endif

        while (1) {
            wait_status = waitpid(Pid, &child_status, 0);
            if (wait_status != -1) {
                WaitedPid = wait_status;
                Status = child_status;
                break;
            } else if (MR_is_eintr(errno)) {
                if (MC_signalled) {
                    /*
                    ** A normally fatal signal has been received, so kill the
                    ** child immediately.  Use SIGTERM, not MC_signal_received,
                    ** because the child may be inside a call to system() which
                    ** would cause SIGINT to be ignored on some systems (e.g.
                    ** Linux).
                    */
                    if (Pid != -1) {
                        kill(Pid, SIGTERM);
                    }
                    break;
                }
            } else {
                /*
                ** This should never happen.
                */
                MR_perror("error in wait(): ");
                Status = 1;
                break;
            }
        }

        /*
        ** Restore the system call signal behaviour.
        */
        MR_signal_should_restart(SIGINT, MR_TRUE);
        MR_signal_should_restart(SIGTERM, MR_TRUE);
#ifdef SIGHUP
        MR_signal_should_restart(SIGHUP, MR_TRUE);
#endif
#ifdef SIGQUIT
        MR_signal_should_restart(SIGQUIT, MR_TRUE);
#endif
    }

#else /* ! MC_CAN_FORK */
    MR_perror("cannot wait() when fork() is unavailable: ");
    Status = 1;
#endif /* ! MC_CAN_FORK */
;}
#line 1396 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("do_wait");
	MR_r2 = WaitedPid;
	MR_r1 = Status;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__io__handle_system_command_exit_status_1_0,
		libs__process_util__wait_any_4_0_i2);
MR_def_label(libs__process_util__wait_any_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module15)
	MR_init_entry1(fn__libs__process_util__sig_dfl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__process_util__sig_dfl_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sig_dfl'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__process_util__sig_dfl_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_signal_action	Result;
#define	MR_PROC_LABEL	mercury__fn__libs__process_util__sig_dfl_0_0
	MR_OBTAIN_GLOBAL_LOCK("sig_dfl");
{
#line 272 "process_util.m"

    MR_init_signal_action(&Result, SIG_DFL, MR_FALSE, MR_TRUE);
;}
#line 1443 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("sig_dfl");
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, Result, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module16)
	MR_init_entry1(libs__process_util__call_child_process_io_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__process_util__call_child_process_io_pred_4_0);
	MR_init_label2(libs__process_util__call_child_process_io_pred_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_child_process_io_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__process_util__call_child_process_io_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_signal_action	Result;
#define	MR_PROC_LABEL	mercury__libs__process_util__call_child_process_io_pred_4_0
	MR_OBTAIN_GLOBAL_LOCK("sig_dfl");
{
#line 272 "process_util.m"

    MR_init_signal_action(&Result, SIG_DFL, MR_FALSE, MR_TRUE);
;}
#line 1483 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("sig_dfl");
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, Result, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	{
	MR_signal_action	SigintHandler;
#define	MR_PROC_LABEL	mercury__libs__process_util__call_child_process_io_pred_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, MR_tempr1, SigintHandler);
	MR_OBTAIN_GLOBAL_LOCK("restore_signal_handlers");
{
#line 245 "process_util.m"

    MR_set_signal_action(SIGINT, &SigintHandler,
        "error resetting SIGINT handler");
    MC_SETUP_SIGNAL_HANDLER(SIGTERM, SIG_DFL);
#ifdef SIGHUP
    MC_SETUP_SIGNAL_HANDLER(SIGHUP, SIG_DFL);
#endif
#ifdef SIGQUIT
    MC_SETUP_SIGNAL_HANDLER(SIGQUIT, SIG_DFL);
#endif
;}
#line 1506 "libs.process_util.c"
	MR_RELEASE_GLOBAL_LOCK("restore_signal_handlers");
#undef	MR_PROC_LABEL
	}
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__process_util__call_child_process_io_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__process_util__call_child_process_io_pred_4_0_i2);
MR_def_label(libs__process_util__call_child_process_io_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__process_util__call_child_process_io_pred_4_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(libs__process_util__call_child_process_io_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(libs__process_util_module17)
	MR_init_entry1(__Unify___libs__process_util__build0_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__process_util__build0_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__process_util__build0_1_0);
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

MR_BEGIN_MODULE(libs__process_util_module18)
	MR_init_entry1(__Compare___libs__process_util__build0_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__process_util__build0_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__process_util__build0_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module19)
	MR_init_entry1(__Unify___libs__process_util__io_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__process_util__io_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__process_util__io_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(libs__process_util_module20)
	MR_init_entry1(__Compare___libs__process_util__io_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__process_util__io_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__process_util__io_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module21)
	MR_init_entry1(__Unify___libs__process_util__pid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__process_util__pid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__process_util__pid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__process_util_module22)
	MR_init_entry1(__Compare___libs__process_util__pid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__process_util__pid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__process_util__pid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module23)
	MR_init_entry1(__Unify___libs__process_util__post_signal_cleanup_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__process_util__post_signal_cleanup_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__process_util__post_signal_cleanup_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__process_util_module24)
	MR_init_entry1(__Compare___libs__process_util__post_signal_cleanup_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__process_util__post_signal_cleanup_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__process_util__post_signal_cleanup_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(libs__process_util_module25)
	MR_init_entry1(__Unify___libs__process_util__signal_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__process_util__signal_action_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___libs__process_util__signal_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(libs__process_util_module26)
	MR_init_entry1(__Compare___libs__process_util__signal_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__process_util__signal_action_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___libs__process_util__signal_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 199 "process_util.m"

volatile sig_atomic_t MC_signalled = MR_FALSE;
volatile sig_atomic_t MC_signal_received = 0;

void
MC_mercury_compile_signal_handler(int sig)
{
    MC_signalled = MR_TRUE;
    MC_signal_received = sig;
}

#line 1775 "libs.process_util.c"

MR_declare_static(mercury__libs__process_util__call_child_process_io_pred_4_0);

void
MC_call_child_process_io_pred(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2);

void
MC_call_child_process_io_pred(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__process_util__call_child_process_io_pred_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__process_util__call_child_process_io_pred_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__libs__process_util_maybe_bunch_0(void)
{
	libs__process_util_module0();
	libs__process_util_module1();
	libs__process_util_module2();
	libs__process_util_module3();
	libs__process_util_module4();
	libs__process_util_module5();
	libs__process_util_module6();
	libs__process_util_module7();
	libs__process_util_module8();
	libs__process_util_module9();
	libs__process_util_module10();
	libs__process_util_module11();
	libs__process_util_module12();
	libs__process_util_module13();
	libs__process_util_module14();
	libs__process_util_module15();
	libs__process_util_module16();
	libs__process_util_module17();
	libs__process_util_module18();
	libs__process_util_module19();
	libs__process_util_module20();
	libs__process_util_module21();
	libs__process_util_module22();
	libs__process_util_module23();
	libs__process_util_module24();
	libs__process_util_module25();
	libs__process_util_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__process_util__init(void);
void mercury__libs__process_util__init_type_tables(void);
void mercury__libs__process_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__process_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__process_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__libs__process_util__init_threadscope_string_table(void);
#endif

void mercury__libs__process_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__process_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__process_util__type_ctor_info_build0_1,
		libs__process_util__build0_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__process_util__type_ctor_info_io_pred_0,
		libs__process_util__io_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__process_util__type_ctor_info_pid_0,
		libs__process_util__pid_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__process_util__type_ctor_info_post_signal_cleanup_1,
		libs__process_util__post_signal_cleanup_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__process_util__type_ctor_info_signal_action_0,
		libs__process_util__signal_action_0_0);
	mercury__libs__process_util__init_debugger();
}

void mercury__libs__process_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__process_util__type_ctor_info_build0_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__process_util__type_ctor_info_io_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__process_util__type_ctor_info_pid_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__process_util__type_ctor_info_post_signal_cleanup_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__process_util__type_ctor_info_signal_action_0);
	}
}


void mercury__libs__process_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__process_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__libs__process_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__process_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__libs__process_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
