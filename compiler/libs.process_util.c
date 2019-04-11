/*
** Automatically generated from `process_util.m'
** by the Mercury compiler,
** version rotd-2018-07-17
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module libs.process_util.
// :- implementation.

/*
INIT mercury__libs__process_util__init
ENDINIT
*/

#include "libs.process_util.mih"
#include "libs.process_util.mh"


#include "libs.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"





static const MR_VA_PseudoTypeInfo_Struct5 libs__process_util____vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_TypeInfo_Struct3 libs__process_util____vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct4 libs__process_util____vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static void MR_CALL 
libs__process_util____Compare____signal_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static void MR_CALL 
libs__process_util__do_wait_5_p_0(
  MR_Integer Pid_1,
  MR_Integer * WaitedPid_2,
  MR_Integer * Status_3);

static void MR_CALL 
libs__process_util__call_child_process_io_pred_4_p_0(
  MR_Word P_5,
  MR_Integer * Status_6);

static void MR_CALL 
libs__process_util__start_in_forked_process_2_4_p_0(
  MR_Word Pred_1,
  MR_Integer * Pid_2);

static void MR_CALL 
libs__process_util__check_for_signal_4_p_0(
  MR_Integer * Signalled_1,
  MR_Integer * Signal_2);

static MR_Box MR_CALL 
libs__process_util__sig_dfl_0_f_0(void);

static void MR_CALL 
libs__process_util__restore_signal_handlers_3_p_0(
  MR_Box SigintHandler_1);

static void MR_CALL 
libs__process_util__setup_signal_handlers_3_p_0(
  MR_Box * SigintHandler_1);

static MR_bool MR_CALL 
libs__process_util____Unify____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__process_util____Compare____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__process_util____Unify____io_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__process_util____Compare____io_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__process_util____Unify____pid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__process_util____Compare____pid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__process_util____Unify____post_signal_cleanup_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
libs__process_util____Compare____post_signal_cleanup_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__process_util____Compare____signal_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__process_util_scalar_common_1[1][5];




static /* final */ const MR_Box libs__process_util_scalar_common_1[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.process_util.mh"
#line 199 "process_util.m"

volatile sig_atomic_t MC_signalled = MR_FALSE;
volatile sig_atomic_t MC_signal_received = 0;

void
MC_mercury_compile_signal_handler(int sig)
{
    MC_signalled = MR_TRUE;
    MC_signal_received = sig;
}

#line 413 "process_util.m"
void 
MC_call_child_process_io_pred(
  MR_Word P_5,
  MR_Integer * Status_6)
#line 413 "process_util.m"
{
#line 413 "process_util.m"
	libs__process_util__call_child_process_io_pred_4_p_0((MR_Word) P_5, (MR_Integer *) Status_6);
}


static const MR_VA_PseudoTypeInfo_Struct5 libs__process_util____vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_build0_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__process_util____Unify____build0_1_0_10001)),
  ((MR_Box) (libs__process_util____Compare____build0_1_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "build0",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__process_util____vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct3 libs__process_util____vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_io_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__process_util____Unify____io_pred_0_0_10001)),
  ((MR_Box) (libs__process_util____Compare____io_pred_0_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "io_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__process_util____vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_pid_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__process_util____Unify____pid_0_0_10001)),
  ((MR_Box) (libs__process_util____Compare____pid_0_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "pid",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_PseudoTypeInfo_Struct4 libs__process_util____vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_post_signal_cleanup_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__process_util____Unify____post_signal_cleanup_1_0_10001)),
  ((MR_Box) (libs__process_util____Compare____post_signal_cleanup_1_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "post_signal_cleanup",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__process_util____vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_signal_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (libs__process_util____Unify____signal_action_0_0_10001)),
  ((MR_Box) (libs__process_util____Compare____signal_action_0_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "signal_action",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
libs__process_util____Compare____signal_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__process_util____Compare____post_signal_cleanup_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
libs__process_util____Unify____post_signal_cleanup_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
libs__process_util____Compare____pid_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__process_util____Unify____pid_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__process_util____Compare____io_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__process_util_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__process_util____Unify____io_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
libs__process_util____Compare____build0_1_0(
  MR_Word TypeInfo_for_Info_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
libs__process_util____Unify____build0_1_0(
  MR_Word TypeInfo_for_Info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
libs__process_util__do_wait_5_p_0(
  MR_Integer Pid_1,
  MR_Integer * WaitedPid_2,
  MR_Integer * Status_3)
{
  {
{
#define MR_PROC_LABEL libs__process_util__do_wait_5_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  Pid_1 ;
		{

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
            wait_status = waitpid((pid_t)Pid, &child_status, 0);
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
                        kill((pid_t)Pid, SIGTERM);
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
#undef MR_PROC_LABEL
	 *WaitedPid_2  = WaitedPid;
	 *Status_3  = Status;
}
  }
}

static void MR_CALL 
libs__process_util__call_child_process_io_pred_4_p_0(
  MR_Word P_5,
  MR_Integer * Status_6)
{
  {
    MR_Word Success_8;
    MR_Box Var_16;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_Success_8;
    MR_Box conv1_STATE_VARIABLE_IO_10;

{
#define MR_PROC_LABEL libs__process_util__call_child_process_io_pred_4_p_0

	MR_signal_action Result;

		{

    MR_init_signal_action(&Result, SIG_DFL, MR_FALSE, MR_TRUE);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, Result, Var_16 );
}
{
#define MR_PROC_LABEL libs__process_util__call_child_process_io_pred_4_p_0

	MR_signal_action SigintHandler;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, Var_16 , SigintHandler);
		{

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
#undef MR_PROC_LABEL
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
    func_0(((MR_Box) (P_5)), &conv2_Success_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10);
    Success_8 = ((MR_Word) (conv2_Success_8));
    switch (Success_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Status_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        *Status_6 = (MR_Integer) 0;
        break;
    }
  }
}

static void MR_CALL 
libs__process_util__start_in_forked_process_2_4_p_0(
  MR_Word Pred_1,
  MR_Integer * Pid_2)
{
  {
{
#define MR_PROC_LABEL libs__process_util__start_in_forked_process_2_4_p_0

	MR_Word Pred;
	MR_Integer Pid;

	Pred =  Pred_1 ;
		{

#ifdef MC_CAN_FORK

    Pid = fork();
    if (Pid == -1) {                        /* error */
        MR_perror("error in fork()");
    } else if (Pid == 0) {                  /* child */
        MR_Integer exit_status;

        MC_call_child_process_io_pred(Pred, &exit_status);
        exit((int)exit_status);
    } else {                                /* parent */
    }

#else /* ! MC_CAN_FORK */
    Pid = 0;
#endif /* ! MC_CAN_FORK */


		;}
#undef MR_PROC_LABEL
	 *Pid_2  = Pid;
}
  }
}

static void MR_CALL 
libs__process_util__check_for_signal_4_p_0(
  MR_Integer * Signalled_1,
  MR_Integer * Signal_2)
{
  {
{
#define MR_PROC_LABEL libs__process_util__check_for_signal_4_p_0

	MR_Integer Signalled;
	MR_Integer Signal;

		{

    Signalled = (MC_signalled ? 1 : 0);
    Signal = MC_signal_received;


		;}
#undef MR_PROC_LABEL
	 *Signalled_1  = Signalled;
	 *Signal_2  = Signal;
}
  }
}

static MR_Box MR_CALL 
libs__process_util__sig_dfl_0_f_0(void)
{
  {
    MR_Box Result_1;

{
#define MR_PROC_LABEL libs__process_util__sig_dfl_0_f_0

	MR_signal_action Result;

		{

    MR_init_signal_action(&Result, SIG_DFL, MR_FALSE, MR_TRUE);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, Result, Result_1 );
}
    return Result_1;
  }
}

static void MR_CALL 
libs__process_util__restore_signal_handlers_3_p_0(
  MR_Box SigintHandler_1)
{
  {
{
#define MR_PROC_LABEL libs__process_util__restore_signal_handlers_3_p_0

	MR_signal_action SigintHandler;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, SigintHandler_1 , SigintHandler);
		{

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
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__process_util__setup_signal_handlers_3_p_0(
  MR_Box * SigintHandler_1)
{
  {
{
#define MR_PROC_LABEL libs__process_util__setup_signal_handlers_3_p_0

	MR_signal_action SigintHandler;

		{

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
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, SigintHandler, *SigintHandler_1 );
}
  }
}

void MR_CALL 
libs__process_util__wait_any_4_p_0(
  MR_Integer * Pid_5,
  MR_Word * Status_6)
{
  {
    MR_Integer Status0_8;

{
#define MR_PROC_LABEL libs__process_util__wait_any_4_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  (MR_Integer) -1 ;
		{

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
            wait_status = waitpid((pid_t)Pid, &child_status, 0);
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
                        kill((pid_t)Pid, SIGTERM);
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
#undef MR_PROC_LABEL
	 *Pid_5  = WaitedPid;
	 Status0_8  = Status;
}
    *Status_6 = mercury__io__decode_system_command_exit_code_1_f_0(Status0_8);
  }
}

void MR_CALL 
libs__process_util__wait_pid_4_p_0(
  MR_Integer Pid_5,
  MR_Word * Status_6)
{
  {
    MR_Integer Status0_9;
    MR_Integer _Pid_8;

{
#define MR_PROC_LABEL libs__process_util__wait_pid_4_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  Pid_5 ;
		{

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
            wait_status = waitpid((pid_t)Pid, &child_status, 0);
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
                        kill((pid_t)Pid, SIGTERM);
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
#undef MR_PROC_LABEL
	 _Pid_8  = WaitedPid;
	 Status0_9  = Status;
}
    *Status_6 = mercury__io__decode_system_command_exit_code_1_f_0(Status0_9);
  }
}

void MR_CALL 
libs__process_util__start_in_forked_process_4_p_0(
  MR_Word P_5,
  MR_Word * MaybePid_6)
{
  {
    MR_bool succeeded;
    MR_Integer Pid_8;

{
#define MR_PROC_LABEL libs__process_util__start_in_forked_process_4_p_0

	MR_Word Pred;
	MR_Integer Pid;

	Pred =  P_5 ;
		{

#ifdef MC_CAN_FORK

    Pid = fork();
    if (Pid == -1) {                        /* error */
        MR_perror("error in fork()");
    } else if (Pid == 0) {                  /* child */
        MR_Integer exit_status;

        MC_call_child_process_io_pred(Pred, &exit_status);
        exit((int)exit_status);
    } else {                                /* parent */
    }

#else /* ! MC_CAN_FORK */
    Pid = 0;
#endif /* ! MC_CAN_FORK */


		;}
#undef MR_PROC_LABEL
	 Pid_8  = Pid;
}
    succeeded = (Pid_8 == (MR_Integer) 0);
    if (succeeded)
      *MaybePid_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePid_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pid_8));
      }
  }
}

void MR_CALL 
libs__process_util__call_in_forked_process_4_p_0(
  MR_Word P_5,
  MR_Word * Success_6)
{
  libs__process_util__call_in_forked_process_with_backup_5_p_0(P_5, P_5, Success_6);
}

void MR_CALL 
libs__process_util__call_in_forked_process_with_backup_5_p_0(
  MR_Word P_6,
  MR_Word AltP_7,
  MR_Word * Success_8)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL libs__process_util__call_in_forked_process_with_backup_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

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
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer Pid_27;

{
#define MR_PROC_LABEL libs__process_util__call_in_forked_process_with_backup_5_p_0

	MR_Word Pred;
	MR_Integer Pid;

	Pred =  P_6 ;
		{

#ifdef MC_CAN_FORK

    Pid = fork();
    if (Pid == -1) {                        /* error */
        MR_perror("error in fork()");
    } else if (Pid == 0) {                  /* child */
        MR_Integer exit_status;

        MC_call_child_process_io_pred(Pred, &exit_status);
        exit((int)exit_status);
    } else {                                /* parent */
    }

#else /* ! MC_CAN_FORK */
    Pid = 0;
#endif /* ! MC_CAN_FORK */


		;}
#undef MR_PROC_LABEL
	 Pid_27  = Pid;
}
      succeeded = (Pid_27 == (MR_Integer) 0);
      if (succeeded)
        *Success_8 = (MR_Integer) 0;
      else
      {
        MR_Integer CallStatus_13;
        MR_Word Status_14;
        MR_Integer Var_12;
        MR_Word Var_19;
        MR_Integer Var_20;

{
#define MR_PROC_LABEL libs__process_util__call_in_forked_process_with_backup_5_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  Pid_27 ;
		{

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
            wait_status = waitpid((pid_t)Pid, &child_status, 0);
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
                        kill((pid_t)Pid, SIGTERM);
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
#undef MR_PROC_LABEL
	 Var_12  = WaitedPid;
	 CallStatus_13  = Status;
}
        Status_14 = mercury__io__decode_system_command_exit_code_1_f_0(CallStatus_13);
        succeeded = ((MR_tag((MR_Word) Status_14)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Status_14, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
            succeeded = (Var_20 == (MR_Integer) 0);
          }
        }
        if (succeeded)
          *Success_8 = (MR_Integer) 1;
        else
          *Success_8 = (MR_Integer) 0;
      }
    }
    else
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), AltP_7, (MR_Integer) 1))));
      MR_Box conv2_Success_8;
      MR_Box conv1_STATE_VARIABLE_IO_16;

      func_0(((MR_Box) (AltP_7)), &conv2_Success_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
      *Success_8 = ((MR_Word) (conv2_Success_8));
    }
  }
}

MR_bool MR_CALL 
libs__process_util__can_fork_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL libs__process_util__can_fork_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

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
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_Integer MR_CALL 
libs__process_util__sigint_0_f_0(void)
{
  {
    MR_Integer Sigint_1;

{
#define MR_PROC_LABEL libs__process_util__sigint_0_f_0

	MR_Integer Sigint;

		{

    Sigint = SIGINT;


		;}
#undef MR_PROC_LABEL
	 Sigint_1  = Sigint;
}
    return Sigint_1;
  }
}

void MR_CALL 
libs__process_util__send_signal_4_p_0(
  MR_Integer Pid_1,
  MR_Integer Signal_2)
{
  {
{
#define MR_PROC_LABEL libs__process_util__send_signal_4_p_0

	MR_Integer Pid;
	MR_Integer Signal;

	Pid =  Pid_1 ;
	Signal =  Signal_2 ;
		{

#ifdef MR_HAVE_KILL
    kill((pid_t)Pid, (int)Signal);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__process_util__raise_signal_3_p_0(
  MR_Integer Signal_1)
{
  {
{
#define MR_PROC_LABEL libs__process_util__raise_signal_3_p_0

	MR_Integer Signal;

	Signal =  Signal_1 ;
		{

    raise((int)Signal);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
libs__process_util__build_with_check_for_interrupt_8_p_0(
  MR_Word TypeInfo_for_Info_36,
  MR_Word VeryVerbose_9,
  MR_Word Build_10,
  MR_Word Cleanup_11,
  MR_Word * Succeeded_12,
  MR_Box STATE_VARIABLE_Info_0_19,
  MR_Box * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded;
    MR_Box MaybeSigIntHandler_15;
    MR_Word Succeeded0_16;
    MR_Integer Signalled_17;
    MR_Integer Signal_18;
    MR_Box STATE_VARIABLE_Info_24_24;
    void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv2_Succeeded0_16;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_signal_action SigintHandler;

		{

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
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, SigintHandler, MaybeSigIntHandler_15 );
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Build_10, (MR_Integer) 1))));
    func_0(((MR_Box) (Build_10)), &conv2_Succeeded0_16, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_24_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    Succeeded0_16 = ((MR_Word) (conv2_Succeeded0_16));
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_signal_action SigintHandler;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, MaybeSigIntHandler_15 , SigintHandler);
		{

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
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_Integer Signalled;
	MR_Integer Signal;

		{

    Signalled = (MC_signalled ? 1 : 0);
    Signal = MC_signal_received;


		;}
#undef MR_PROC_LABEL
	 Signalled_17  = Signalled;
	 Signal_18  = Signal;
}
    succeeded = (Signalled_17 == (MR_Integer) 1);
    if (succeeded)
    {
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv4_STATE_VARIABLE_IO_34_34;

      *Succeeded_12 = (MR_Integer) 0;
      switch (VeryVerbose_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "** Received signal ");
            mercury__io__write_int_3_p_0(Signal_18);
            mercury__io__write_string_3_p_0((MR_String) ", cleaning up.\n");
          }
          break;
      }
      func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Cleanup_11, (MR_Integer) 1))));
      func_3(((MR_Box) (Cleanup_11)), STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_20, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_34_34);
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_Integer Signal;

	Signal =  Signal_18 ;
		{

    raise((int)Signal);


		;}
#undef MR_PROC_LABEL
}
    }
    else
    {
      *Succeeded_12 = Succeeded0_16;
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_24_24;
    }
  }
}

static MR_bool MR_CALL 
libs__process_util____Unify____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__process_util____Unify____build0_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__process_util____Compare____build0_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__process_util____Compare____build0_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__process_util____Unify____io_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__process_util____Unify____io_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__process_util____Compare____io_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__process_util____Compare____io_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__process_util____Unify____pid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__process_util____Unify____pid_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__process_util____Compare____pid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__process_util____Compare____pid_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__process_util____Unify____post_signal_cleanup_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = libs__process_util____Unify____post_signal_cleanup_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
libs__process_util____Compare____post_signal_cleanup_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__process_util____Compare____post_signal_cleanup_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__process_util____Unify____signal_action_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__process_util____Compare____signal_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__process_util____Compare____signal_action_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__process_util__init(void)
{
}

void mercury__libs__process_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__process_util__libs__process_util__type_ctor_info_build0_1);
	MR_register_type_ctor_info(&libs__process_util__libs__process_util__type_ctor_info_io_pred_0);
	MR_register_type_ctor_info(&libs__process_util__libs__process_util__type_ctor_info_pid_0);
	MR_register_type_ctor_info(&libs__process_util__libs__process_util__type_ctor_info_post_signal_cleanup_1);
	MR_register_type_ctor_info(&libs__process_util__libs__process_util__type_ctor_info_signal_action_0);
}

void mercury__libs__process_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__process_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.process_util.
