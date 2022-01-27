/*
** Automatically generated from `process_util.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module libs.process_util. */
/* :- implementation. */

/*
INIT mercury__libs__process_util__init
ENDINIT
*/

#include "libs.process_util.mih"
#include "libs.process_util.mh"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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





#line 66 "libs.process_util.c"
static const MR_VA_PseudoTypeInfo_Struct5 libs__process_util____vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 69 "libs.process_util.c"
static const MR_VA_TypeInfo_Struct3 libs__process_util____vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 72 "libs.process_util.c"
static const MR_VA_PseudoTypeInfo_Struct4 libs__process_util____vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 75 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____build0_1_0_10001(
#line 78 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 80 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 82 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3);

#line 85 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____build0_1_0_10001(
#line 88 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 90 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_2,
#line 92 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3,
#line 94 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_4);

#line 97 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____io_pred_0_0_10001(
#line 100 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 102 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2);

#line 105 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____io_pred_0_0_10001(
#line 108 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_1,
#line 110 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 112 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3);

#line 115 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____pid_0_0_10001(
#line 118 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 120 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2);

#line 123 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____pid_0_0_10001(
#line 126 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_1,
#line 128 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 130 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3);

#line 133 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____post_signal_cleanup_1_0_10001(
#line 136 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 138 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 140 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3);

#line 143 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____post_signal_cleanup_1_0_10001(
#line 146 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 148 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_2,
#line 150 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3,
#line 152 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_4);

#line 155 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0_10001(
#line 158 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 160 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2);

#line 163 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____signal_action_0_0_10001(
#line 166 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_1,
#line 168 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 170 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3);

#line 156 "process_util.m"
static void MR_CALL 
libs__process_util____Compare____signal_action_0_0(
#line 156 "process_util.m"
  MR_Word * libs__process_util__HeadVar__1_1,
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__2_2,
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__3_3);

#line 156 "process_util.m"
static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0(
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__1_1,
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__2_2);

#line 429 "process_util.m"
static void MR_CALL 
libs__process_util__do_wait_5_p_0(
#line 429 "process_util.m"
  MR_Integer libs__process_util__Pid_1,
#line 429 "process_util.m"
  MR_Integer * libs__process_util__WaitedPid_2,
#line 429 "process_util.m"
  MR_Integer * libs__process_util__Status_3);

#line 406 "process_util.m"
static void MR_CALL 
libs__process_util__call_child_process_io_pred_4_p_0(
#line 406 "process_util.m"
  MR_Word libs__process_util__P_5,
#line 406 "process_util.m"
  MR_Integer * libs__process_util__Status_6);

#line 376 "process_util.m"
static void MR_CALL 
libs__process_util__start_in_forked_process_2_4_p_0(
#line 376 "process_util.m"
  MR_Word libs__process_util__Pred_1,
#line 376 "process_util.m"
  MR_Integer * libs__process_util__Pid_2);

#line 276 "process_util.m"
static void MR_CALL 
libs__process_util__check_for_signal_4_p_0(
#line 276 "process_util.m"
  MR_Integer * libs__process_util__Signalled_1,
#line 276 "process_util.m"
  MR_Integer * libs__process_util__Signal_2);

#line 265 "process_util.m"
static MR_Box MR_CALL 
libs__process_util__sig_dfl_0_f_0(void);

#line 238 "process_util.m"
static void MR_CALL 
libs__process_util__restore_signal_handlers_3_p_0(
#line 238 "process_util.m"
  MR_Box libs__process_util__SigintHandler_1);

#line 212 "process_util.m"
static void MR_CALL 
libs__process_util__setup_signal_handlers_3_p_0(
#line 212 "process_util.m"
  MR_Box * libs__process_util__SigintHandler_1);


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



#include "libs.process_util.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#line 199 "process_util.m"

volatile sig_atomic_t MC_signalled = MR_FALSE;
volatile sig_atomic_t MC_signal_received = 0;

void
MC_mercury_compile_signal_handler(int sig)
{
    MC_signalled = MR_TRUE;
    MC_signal_received = sig;
}

#line 409 "process_util.m"
void 
MC_call_child_process_io_pred(
#line 409 "process_util.m"
  MR_Word libs__process_util__P_5,
#line 409 "process_util.m"
  MR_Integer * libs__process_util__Status_6)
#line 409 "process_util.m"
{
#line 409 "process_util.m"
	libs__process_util__call_child_process_io_pred_4_p_0((MR_Word) libs__process_util__P_5, (MR_Integer *) libs__process_util__Status_6);
}


#line 295 "libs.process_util.c"
static const MR_VA_PseudoTypeInfo_Struct5 libs__process_util____vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 308 "libs.process_util.c"
const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_build0_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__process_util____Unify____build0_1_0_10001)),
  ((MR_Box) (libs__process_util____Compare____build0_1_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "build0",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__process_util____vpti_pred_5__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 329 "libs.process_util.c"
static const MR_VA_TypeInfo_Struct3 libs__process_util____vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 340 "libs.process_util.c"
const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_io_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__process_util____Unify____io_pred_0_0_10001)),
  ((MR_Box) (libs__process_util____Compare____io_pred_0_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "io_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__process_util____vti_pred_3bool__type_ctor_info_bool_0io__type_ctor_info_state_0io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 361 "libs.process_util.c"
const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_pid_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__process_util____Unify____pid_0_0_10001)),
  ((MR_Box) (libs__process_util____Compare____pid_0_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "pid",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 382 "libs.process_util.c"
static const MR_VA_PseudoTypeInfo_Struct4 libs__process_util____vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 394 "libs.process_util.c"
const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_post_signal_cleanup_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__process_util____Unify____post_signal_cleanup_1_0_10001)),
  ((MR_Box) (libs__process_util____Compare____post_signal_cleanup_1_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "post_signal_cleanup",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__process_util____vpti_pred_4__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 415 "libs.process_util.c"
const MR_TypeCtorInfo_Struct libs__process_util__libs__process_util__type_ctor_info_signal_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (libs__process_util____Unify____signal_action_0_0_10001)),
  ((MR_Box) (libs__process_util____Compare____signal_action_0_0_10001)),
  (MR_String) "libs.process_util",
  (MR_String) "signal_action",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 436 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____build0_1_0_10001(
#line 439 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 441 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 443 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3)
#line 445 "libs.process_util.c"
{
#line 447 "libs.process_util.c"
  {
#line 449 "libs.process_util.c"
    MR_bool libs__process_util__succeeded;

#line 452 "libs.process_util.c"
    {
#line 454 "libs.process_util.c"
      libs__process_util__succeeded = libs__process_util____Unify____build0_1_0(((MR_Word) libs__process_util__wrapper_arg_1), ((MR_Word) libs__process_util__wrapper_arg_2), ((MR_Word) libs__process_util__wrapper_arg_3));
    }
#line 457 "libs.process_util.c"
    return libs__process_util__succeeded;
#line 459 "libs.process_util.c"
  }
#line 461 "libs.process_util.c"
}

#line 464 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____build0_1_0_10001(
#line 467 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 469 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_2,
#line 471 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3,
#line 473 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_4)
#line 475 "libs.process_util.c"
{
#line 477 "libs.process_util.c"
  {
#line 479 "libs.process_util.c"
    MR_Word libs__process_util__conv0_HeadVar__1_1;

#line 482 "libs.process_util.c"
    {
#line 484 "libs.process_util.c"
      libs__process_util____Compare____build0_1_0(((MR_Word) libs__process_util__wrapper_arg_1), &libs__process_util__conv0_HeadVar__1_1, ((MR_Word) libs__process_util__wrapper_arg_3), ((MR_Word) libs__process_util__wrapper_arg_4));
    }
#line 487 "libs.process_util.c"
    *libs__process_util__wrapper_arg_2 = ((MR_Box) (libs__process_util__conv0_HeadVar__1_1));
#line 489 "libs.process_util.c"
  }
#line 491 "libs.process_util.c"
}

#line 494 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____io_pred_0_0_10001(
#line 497 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 499 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2)
#line 501 "libs.process_util.c"
{
#line 503 "libs.process_util.c"
  {
#line 505 "libs.process_util.c"
    MR_bool libs__process_util__succeeded;

#line 508 "libs.process_util.c"
    {
#line 510 "libs.process_util.c"
      libs__process_util__succeeded = libs__process_util____Unify____io_pred_0_0(((MR_Word) libs__process_util__wrapper_arg_1), ((MR_Word) libs__process_util__wrapper_arg_2));
    }
#line 513 "libs.process_util.c"
    return libs__process_util__succeeded;
#line 515 "libs.process_util.c"
  }
#line 517 "libs.process_util.c"
}

#line 520 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____io_pred_0_0_10001(
#line 523 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_1,
#line 525 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 527 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3)
#line 529 "libs.process_util.c"
{
#line 531 "libs.process_util.c"
  {
#line 533 "libs.process_util.c"
    MR_Word libs__process_util__conv0_HeadVar__1_1;

#line 536 "libs.process_util.c"
    {
#line 538 "libs.process_util.c"
      libs__process_util____Compare____io_pred_0_0(&libs__process_util__conv0_HeadVar__1_1, ((MR_Word) libs__process_util__wrapper_arg_2), ((MR_Word) libs__process_util__wrapper_arg_3));
    }
#line 541 "libs.process_util.c"
    *libs__process_util__wrapper_arg_1 = ((MR_Box) (libs__process_util__conv0_HeadVar__1_1));
#line 543 "libs.process_util.c"
  }
#line 545 "libs.process_util.c"
}

#line 548 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____pid_0_0_10001(
#line 551 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 553 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2)
#line 555 "libs.process_util.c"
{
#line 557 "libs.process_util.c"
  {
#line 559 "libs.process_util.c"
    MR_bool libs__process_util__succeeded;

#line 562 "libs.process_util.c"
    {
#line 564 "libs.process_util.c"
      libs__process_util__succeeded = libs__process_util____Unify____pid_0_0(((MR_Integer) libs__process_util__wrapper_arg_1), ((MR_Integer) libs__process_util__wrapper_arg_2));
    }
#line 567 "libs.process_util.c"
    return libs__process_util__succeeded;
#line 569 "libs.process_util.c"
  }
#line 571 "libs.process_util.c"
}

#line 574 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____pid_0_0_10001(
#line 577 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_1,
#line 579 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 581 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3)
#line 583 "libs.process_util.c"
{
#line 585 "libs.process_util.c"
  {
#line 587 "libs.process_util.c"
    MR_Word libs__process_util__conv0_HeadVar__1_1;

#line 590 "libs.process_util.c"
    {
#line 592 "libs.process_util.c"
      libs__process_util____Compare____pid_0_0(&libs__process_util__conv0_HeadVar__1_1, ((MR_Integer) libs__process_util__wrapper_arg_2), ((MR_Integer) libs__process_util__wrapper_arg_3));
    }
#line 595 "libs.process_util.c"
    *libs__process_util__wrapper_arg_1 = ((MR_Box) (libs__process_util__conv0_HeadVar__1_1));
#line 597 "libs.process_util.c"
  }
#line 599 "libs.process_util.c"
}

#line 602 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____post_signal_cleanup_1_0_10001(
#line 605 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 607 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 609 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3)
#line 611 "libs.process_util.c"
{
#line 613 "libs.process_util.c"
  {
#line 615 "libs.process_util.c"
    MR_bool libs__process_util__succeeded;

#line 618 "libs.process_util.c"
    {
#line 620 "libs.process_util.c"
      libs__process_util__succeeded = libs__process_util____Unify____post_signal_cleanup_1_0(((MR_Word) libs__process_util__wrapper_arg_1), ((MR_Word) libs__process_util__wrapper_arg_2), ((MR_Word) libs__process_util__wrapper_arg_3));
    }
#line 623 "libs.process_util.c"
    return libs__process_util__succeeded;
#line 625 "libs.process_util.c"
  }
#line 627 "libs.process_util.c"
}

#line 630 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____post_signal_cleanup_1_0_10001(
#line 633 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 635 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_2,
#line 637 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3,
#line 639 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_4)
#line 641 "libs.process_util.c"
{
#line 643 "libs.process_util.c"
  {
#line 645 "libs.process_util.c"
    MR_Word libs__process_util__conv0_HeadVar__1_1;

#line 648 "libs.process_util.c"
    {
#line 650 "libs.process_util.c"
      libs__process_util____Compare____post_signal_cleanup_1_0(((MR_Word) libs__process_util__wrapper_arg_1), &libs__process_util__conv0_HeadVar__1_1, ((MR_Word) libs__process_util__wrapper_arg_3), ((MR_Word) libs__process_util__wrapper_arg_4));
    }
#line 653 "libs.process_util.c"
    *libs__process_util__wrapper_arg_2 = ((MR_Box) (libs__process_util__conv0_HeadVar__1_1));
#line 655 "libs.process_util.c"
  }
#line 657 "libs.process_util.c"
}

#line 660 "libs.process_util.c"
static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0_10001(
#line 663 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_1,
#line 665 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2)
#line 667 "libs.process_util.c"
{
#line 669 "libs.process_util.c"
  {
#line 671 "libs.process_util.c"
    MR_bool libs__process_util__succeeded;

#line 674 "libs.process_util.c"
    {
#line 676 "libs.process_util.c"
      libs__process_util__succeeded = libs__process_util____Unify____signal_action_0_0(((MR_Box) libs__process_util__wrapper_arg_1), ((MR_Box) libs__process_util__wrapper_arg_2));
    }
#line 679 "libs.process_util.c"
    return libs__process_util__succeeded;
#line 681 "libs.process_util.c"
  }
#line 683 "libs.process_util.c"
}

#line 686 "libs.process_util.c"
static void MR_CALL 
libs__process_util____Compare____signal_action_0_0_10001(
#line 689 "libs.process_util.c"
  MR_Box * libs__process_util__wrapper_arg_1,
#line 691 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_2,
#line 693 "libs.process_util.c"
  MR_Box libs__process_util__wrapper_arg_3)
#line 695 "libs.process_util.c"
{
#line 697 "libs.process_util.c"
  {
#line 699 "libs.process_util.c"
    MR_Word libs__process_util__conv0_HeadVar__1_1;

#line 702 "libs.process_util.c"
    {
#line 704 "libs.process_util.c"
      libs__process_util____Compare____signal_action_0_0(&libs__process_util__conv0_HeadVar__1_1, ((MR_Box) libs__process_util__wrapper_arg_2), ((MR_Box) libs__process_util__wrapper_arg_3));
    }
#line 707 "libs.process_util.c"
    *libs__process_util__wrapper_arg_1 = ((MR_Box) (libs__process_util__conv0_HeadVar__1_1));
#line 709 "libs.process_util.c"
  }
#line 711 "libs.process_util.c"
}

#line 156 "process_util.m"
static void MR_CALL 
libs__process_util____Compare____signal_action_0_0(
#line 156 "process_util.m"
  MR_Word * libs__process_util__HeadVar__1_1,
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__2_2,
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__3_3)
#line 156 "process_util.m"
{
#line 156 "process_util.m"
  {
#line 156 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 156 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_4 = (MR_Word) libs__process_util__HeadVar__2_2;
#line 156 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_5 = (MR_Word) libs__process_util__HeadVar__3_3;

#line 156 "process_util.m"
    {
#line 156 "process_util.m"
      mercury__builtin____Compare____c_pointer_0_0(libs__process_util__HeadVar__1_1, libs__process_util__Cast_HeadVar1_4, libs__process_util__Cast_HeadVar2_5);
#line 156 "process_util.m"
      return;
    }
#line 156 "process_util.m"
  }
#line 156 "process_util.m"
}

#line 156 "process_util.m"
static MR_bool MR_CALL 
libs__process_util____Unify____signal_action_0_0(
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__1_1,
#line 156 "process_util.m"
  MR_Box libs__process_util__HeadVar__2_2)
#line 156 "process_util.m"
{
#line 156 "process_util.m"
  {
#line 156 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 156 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_3 = (MR_Word) libs__process_util__HeadVar__1_1;
#line 156 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_4 = (MR_Word) libs__process_util__HeadVar__2_2;

#line 156 "process_util.m"
    {
#line 156 "process_util.m"
      return libs__process_util__succeeded = mercury__builtin____Unify____c_pointer_0_0(libs__process_util__Cast_HeadVar1_3, libs__process_util__Cast_HeadVar2_4);
    }
#line 156 "process_util.m"
    return libs__process_util__succeeded;
#line 156 "process_util.m"
  }
#line 156 "process_util.m"
}

#line 29 "process_util.m"
void MR_CALL 
libs__process_util____Compare____post_signal_cleanup_1_0(
#line 29 "process_util.m"
  MR_Word libs__process_util__TypeInfo_for_Info_6,
#line 29 "process_util.m"
  MR_Word * libs__process_util__HeadVar__1_1,
#line 29 "process_util.m"
  MR_Word libs__process_util__HeadVar__2_2,
#line 29 "process_util.m"
  MR_Word libs__process_util__HeadVar__3_3)
#line 29 "process_util.m"
{
#line 29 "process_util.m"
  {
#line 29 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 29 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_4 = libs__process_util__HeadVar__2_2;
#line 29 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_5 = libs__process_util__HeadVar__3_3;

#line 29 "process_util.m"
    {
#line 29 "process_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(libs__process_util__HeadVar__1_1, (MR_Word) libs__process_util__Cast_HeadVar1_4, (MR_Word) libs__process_util__Cast_HeadVar2_5);
#line 29 "process_util.m"
      return;
    }
#line 29 "process_util.m"
  }
#line 29 "process_util.m"
}

#line 29 "process_util.m"
MR_bool MR_CALL 
libs__process_util____Unify____post_signal_cleanup_1_0(
#line 29 "process_util.m"
  MR_Word libs__process_util__TypeInfo_for_Info_5,
#line 29 "process_util.m"
  MR_Word libs__process_util__HeadVar__1_1,
#line 29 "process_util.m"
  MR_Word libs__process_util__HeadVar__2_2)
#line 29 "process_util.m"
{
#line 29 "process_util.m"
  {
#line 29 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 29 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_3 = libs__process_util__HeadVar__1_1;
#line 29 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_4 = libs__process_util__HeadVar__2_2;

#line 29 "process_util.m"
    {
#line 29 "process_util.m"
      return libs__process_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__process_util__Cast_HeadVar1_3, (MR_Word) libs__process_util__Cast_HeadVar2_4);
    }
#line 29 "process_util.m"
    return libs__process_util__succeeded;
#line 29 "process_util.m"
  }
#line 29 "process_util.m"
}

#line 66 "process_util.m"
void MR_CALL 
libs__process_util____Compare____pid_0_0(
#line 66 "process_util.m"
  MR_Word * libs__process_util__HeadVar__1_1,
#line 66 "process_util.m"
  MR_Integer libs__process_util__HeadVar__2_2,
#line 66 "process_util.m"
  MR_Integer libs__process_util__HeadVar__3_3)
#line 66 "process_util.m"
{
#line 66 "process_util.m"
  {
#line 66 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 66 "process_util.m"
    MR_Integer libs__process_util__Cast_HeadVar1_4 = libs__process_util__HeadVar__2_2;
#line 66 "process_util.m"
    MR_Integer libs__process_util__Cast_HeadVar2_5 = libs__process_util__HeadVar__3_3;

#line 66 "process_util.m"
    {
#line 66 "process_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__process_util__HeadVar__1_1, libs__process_util__Cast_HeadVar1_4, libs__process_util__Cast_HeadVar2_5);
#line 66 "process_util.m"
      return;
    }
#line 66 "process_util.m"
  }
#line 66 "process_util.m"
}

#line 66 "process_util.m"
MR_bool MR_CALL 
libs__process_util____Unify____pid_0_0(
#line 66 "process_util.m"
  MR_Integer libs__process_util__HeadVar__1_1,
#line 66 "process_util.m"
  MR_Integer libs__process_util__HeadVar__2_2)
#line 66 "process_util.m"
{
#line 66 "process_util.m"
  {
#line 66 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 66 "process_util.m"
    MR_Integer libs__process_util__Cast_HeadVar1_3 = libs__process_util__HeadVar__1_1;
#line 66 "process_util.m"
    MR_Integer libs__process_util__Cast_HeadVar2_4 = libs__process_util__HeadVar__2_2;

#line 66 "process_util.m"
    libs__process_util__succeeded = (libs__process_util__Cast_HeadVar1_3 == libs__process_util__Cast_HeadVar2_4);
#line 66 "process_util.m"
    return libs__process_util__succeeded;
#line 66 "process_util.m"
  }
#line 66 "process_util.m"
}

#line 63 "process_util.m"
void MR_CALL 
libs__process_util____Compare____io_pred_0_0(
#line 63 "process_util.m"
  MR_Word * libs__process_util__HeadVar__1_1,
#line 63 "process_util.m"
  MR_Word libs__process_util__HeadVar__2_2,
#line 63 "process_util.m"
  MR_Word libs__process_util__HeadVar__3_3)
#line 63 "process_util.m"
{
#line 63 "process_util.m"
  {
#line 63 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 63 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_4 = libs__process_util__HeadVar__2_2;
#line 63 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_5 = libs__process_util__HeadVar__3_3;

#line 63 "process_util.m"
    {
#line 63 "process_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__process_util_scalar_common_1[0], libs__process_util__HeadVar__1_1, ((MR_Box) (libs__process_util__Cast_HeadVar1_4)), ((MR_Box) (libs__process_util__Cast_HeadVar2_5)));
#line 63 "process_util.m"
      return;
    }
#line 63 "process_util.m"
  }
#line 63 "process_util.m"
}

#line 63 "process_util.m"
MR_bool MR_CALL 
libs__process_util____Unify____io_pred_0_0(
#line 63 "process_util.m"
  MR_Word libs__process_util__HeadVar__1_1,
#line 63 "process_util.m"
  MR_Word libs__process_util__HeadVar__2_2)
#line 63 "process_util.m"
{
#line 63 "process_util.m"
  {
#line 63 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 63 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_3 = libs__process_util__HeadVar__1_1;
#line 63 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_4 = libs__process_util__HeadVar__2_2;

#line 63 "process_util.m"
    {
#line 63 "process_util.m"
      return libs__process_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__process_util__Cast_HeadVar1_3, (MR_Word) libs__process_util__Cast_HeadVar2_4);
    }
#line 63 "process_util.m"
    return libs__process_util__succeeded;
#line 63 "process_util.m"
  }
#line 63 "process_util.m"
}

#line 26 "process_util.m"
void MR_CALL 
libs__process_util____Compare____build0_1_0(
#line 26 "process_util.m"
  MR_Word libs__process_util__TypeInfo_for_Info_6,
#line 26 "process_util.m"
  MR_Word * libs__process_util__HeadVar__1_1,
#line 26 "process_util.m"
  MR_Word libs__process_util__HeadVar__2_2,
#line 26 "process_util.m"
  MR_Word libs__process_util__HeadVar__3_3)
#line 26 "process_util.m"
{
#line 26 "process_util.m"
  {
#line 26 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 26 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_4 = libs__process_util__HeadVar__2_2;
#line 26 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_5 = libs__process_util__HeadVar__3_3;

#line 26 "process_util.m"
    {
#line 26 "process_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(libs__process_util__HeadVar__1_1, (MR_Word) libs__process_util__Cast_HeadVar1_4, (MR_Word) libs__process_util__Cast_HeadVar2_5);
#line 26 "process_util.m"
      return;
    }
#line 26 "process_util.m"
  }
#line 26 "process_util.m"
}

#line 26 "process_util.m"
MR_bool MR_CALL 
libs__process_util____Unify____build0_1_0(
#line 26 "process_util.m"
  MR_Word libs__process_util__TypeInfo_for_Info_5,
#line 26 "process_util.m"
  MR_Word libs__process_util__HeadVar__1_1,
#line 26 "process_util.m"
  MR_Word libs__process_util__HeadVar__2_2)
#line 26 "process_util.m"
{
#line 26 "process_util.m"
  {
#line 26 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 26 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar1_3 = libs__process_util__HeadVar__1_1;
#line 26 "process_util.m"
    MR_Word libs__process_util__Cast_HeadVar2_4 = libs__process_util__HeadVar__2_2;

#line 26 "process_util.m"
    {
#line 26 "process_util.m"
      return libs__process_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__process_util__Cast_HeadVar1_3, (MR_Word) libs__process_util__Cast_HeadVar2_4);
    }
#line 26 "process_util.m"
    return libs__process_util__succeeded;
#line 26 "process_util.m"
  }
#line 26 "process_util.m"
}

#line 429 "process_util.m"
static void MR_CALL 
libs__process_util__do_wait_5_p_0(
#line 429 "process_util.m"
  MR_Integer libs__process_util__Pid_1,
#line 429 "process_util.m"
  MR_Integer * libs__process_util__WaitedPid_2,
#line 429 "process_util.m"
  MR_Integer * libs__process_util__Status_3)
#line 429 "process_util.m"
{
#line 431 "process_util.m"
  {
#line 431 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 434 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__do_wait_5_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  libs__process_util__Pid_1 ;
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

#line 1123 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 *libs__process_util__WaitedPid_2  = WaitedPid;
	 *libs__process_util__Status_3  = Status;
#line 434 "process_util.m"
}
#line 431 "process_util.m"
  }
#line 429 "process_util.m"
}

#line 406 "process_util.m"
static void MR_CALL 
libs__process_util__call_child_process_io_pred_4_p_0(
#line 406 "process_util.m"
  MR_Word libs__process_util__P_5,
#line 406 "process_util.m"
  MR_Integer * libs__process_util__Status_6)
#line 406 "process_util.m"
{
#line 413 "process_util.m"
  {
#line 413 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 413 "process_util.m"
    MR_Word libs__process_util__Success_8;
#line 413 "process_util.m"
    MR_Box libs__process_util__V_16_16;
#line 415 "process_util.m"
    void MR_CALL (* libs__process_util__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 415 "process_util.m"
    MR_Box libs__process_util__conv2_Success_8;
#line 415 "process_util.m"
    MR_Box libs__process_util__conv1_STATE_VARIABLE_IO_10;

#line 272 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__call_child_process_io_pred_4_p_0

	MR_signal_action Result;

		{
#line 272 "process_util.m"

    MR_init_signal_action(&Result, SIG_DFL, MR_FALSE, MR_TRUE);

#line 1171 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, Result, libs__process_util__V_16_16 );
#line 272 "process_util.m"
}
#line 245 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__call_child_process_io_pred_4_p_0

	MR_signal_action SigintHandler;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, libs__process_util__V_16_16 , SigintHandler);
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

#line 1198 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
#line 245 "process_util.m"
}
#line 415 "process_util.m"
    libs__process_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__process_util__P_5, (MR_Integer) 1)));
#line 415 "process_util.m"
    {
#line 415 "process_util.m"
      libs__process_util__func_0(((MR_Box) libs__process_util__P_5), &libs__process_util__conv2_Success_8, ((MR_Box) ((MR_Integer) 0)), &libs__process_util__conv1_STATE_VARIABLE_IO_10);
    }
#line 415 "process_util.m"
    libs__process_util__Success_8 = ((MR_Word) libs__process_util__conv2_Success_8);
#line 419 "process_util.m"
    if ((libs__process_util__Success_8 == (MR_Integer) 0))
#line 421 "process_util.m"
      *libs__process_util__Status_6 = (MR_Integer) 1;
#line 419 "process_util.m"
    else
#line 418 "process_util.m"
      *libs__process_util__Status_6 = (MR_Integer) 0;
#line 413 "process_util.m"
  }
#line 406 "process_util.m"
}

#line 376 "process_util.m"
static void MR_CALL 
libs__process_util__start_in_forked_process_2_4_p_0(
#line 376 "process_util.m"
  MR_Word libs__process_util__Pred_1,
#line 376 "process_util.m"
  MR_Integer * libs__process_util__Pid_2)
#line 376 "process_util.m"
{
#line 382 "process_util.m"
  {
#line 382 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 386 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__start_in_forked_process_2_4_p_0

	MR_Word Pred;
	MR_Integer Pid;

	Pred =  libs__process_util__Pred_1 ;
		{
#line 386 "process_util.m"

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

#line 1268 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 *libs__process_util__Pid_2  = Pid;
#line 386 "process_util.m"
}
#line 382 "process_util.m"
  }
#line 376 "process_util.m"
}

#line 276 "process_util.m"
static void MR_CALL 
libs__process_util__check_for_signal_4_p_0(
#line 276 "process_util.m"
  MR_Integer * libs__process_util__Signalled_1,
#line 276 "process_util.m"
  MR_Integer * libs__process_util__Signal_2)
#line 276 "process_util.m"
{
#line 280 "process_util.m"
  {
#line 280 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 283 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__check_for_signal_4_p_0

	MR_Integer Signalled;
	MR_Integer Signal;

		{
#line 283 "process_util.m"

    Signalled = (MC_signalled ? 1 : 0);
    Signal = MC_signal_received;

#line 1307 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 *libs__process_util__Signalled_1  = Signalled;
	 *libs__process_util__Signal_2  = Signal;
#line 283 "process_util.m"
}
#line 280 "process_util.m"
  }
#line 276 "process_util.m"
}

#line 265 "process_util.m"
static MR_Box MR_CALL 
libs__process_util__sig_dfl_0_f_0(void)
#line 265 "process_util.m"
{
#line 269 "process_util.m"
  {
#line 269 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 269 "process_util.m"
    MR_Box libs__process_util__Result_1;

#line 272 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__sig_dfl_0_f_0

	MR_signal_action Result;

		{
#line 272 "process_util.m"

    MR_init_signal_action(&Result, SIG_DFL, MR_FALSE, MR_TRUE);

#line 1343 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, Result, libs__process_util__Result_1 );
#line 272 "process_util.m"
}
#line 269 "process_util.m"
    return libs__process_util__Result_1;
#line 269 "process_util.m"
  }
#line 265 "process_util.m"
}

#line 238 "process_util.m"
static void MR_CALL 
libs__process_util__restore_signal_handlers_3_p_0(
#line 238 "process_util.m"
  MR_Box libs__process_util__SigintHandler_1)
#line 238 "process_util.m"
{
#line 242 "process_util.m"
  {
#line 242 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 245 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__restore_signal_handlers_3_p_0

	MR_signal_action SigintHandler;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, libs__process_util__SigintHandler_1 , SigintHandler);
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

#line 1389 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
#line 245 "process_util.m"
}
#line 242 "process_util.m"
  }
#line 238 "process_util.m"
}

#line 212 "process_util.m"
static void MR_CALL 
libs__process_util__setup_signal_handlers_3_p_0(
#line 212 "process_util.m"
  MR_Box * libs__process_util__SigintHandler_1)
#line 212 "process_util.m"
{
#line 216 "process_util.m"
  {
#line 216 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 219 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__setup_signal_handlers_3_p_0

	MR_signal_action SigintHandler;

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

#line 1438 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, SigintHandler, *libs__process_util__SigintHandler_1 );
#line 219 "process_util.m"
}
#line 216 "process_util.m"
  }
#line 212 "process_util.m"
}

#line 118 "process_util.m"
void MR_CALL 
libs__process_util__wait_any_4_p_0(
#line 118 "process_util.m"
  MR_Integer * libs__process_util__Pid_5,
#line 118 "process_util.m"
  MR_Word * libs__process_util__Status_6)
#line 118 "process_util.m"
{
#line 509 "process_util.m"
  {
#line 509 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 509 "process_util.m"
    MR_Integer libs__process_util__Status0_8;

#line 434 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__wait_any_4_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  (MR_Integer) -1 ;
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

#line 1544 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 *libs__process_util__Pid_5  = WaitedPid;
	 libs__process_util__Status0_8  = Status;
#line 434 "process_util.m"
}
#line 511 "process_util.m"
    {
#line 511 "process_util.m"
      *libs__process_util__Status_6 = mercury__io__handle_system_command_exit_status_1_f_0(libs__process_util__Status0_8);
    }
#line 509 "process_util.m"
  }
#line 118 "process_util.m"
}

#line 110 "process_util.m"
void MR_CALL 
libs__process_util__wait_pid_4_p_0(
#line 110 "process_util.m"
  MR_Integer libs__process_util__Pid_5,
#line 110 "process_util.m"
  MR_Word * libs__process_util__Status_6)
#line 110 "process_util.m"
{
#line 505 "process_util.m"
  {
#line 505 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 505 "process_util.m"
    MR_Integer libs__process_util__Status0_9;
#line 431 "process_util.m"
    MR_Integer libs__process_util___Pid_8;

#line 434 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__wait_pid_4_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  libs__process_util__Pid_5 ;
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

#line 1658 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 libs__process_util___Pid_8  = WaitedPid;
	 libs__process_util__Status0_9  = Status;
#line 434 "process_util.m"
}
#line 507 "process_util.m"
    {
#line 507 "process_util.m"
      *libs__process_util__Status_6 = mercury__io__handle_system_command_exit_status_1_f_0(libs__process_util__Status0_9);
    }
#line 505 "process_util.m"
  }
#line 110 "process_util.m"
}

#line 102 "process_util.m"
void MR_CALL 
libs__process_util__start_in_forked_process_4_p_0(
#line 102 "process_util.m"
  MR_Word libs__process_util__P_5,
#line 102 "process_util.m"
  MR_Word * libs__process_util__MaybePid_6)
#line 102 "process_util.m"
{
#line 368 "process_util.m"
  {
#line 368 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 368 "process_util.m"
    MR_Integer libs__process_util__Pid_8;

#line 386 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__start_in_forked_process_4_p_0

	MR_Word Pred;
	MR_Integer Pid;

	Pred =  libs__process_util__P_5 ;
		{
#line 386 "process_util.m"

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

#line 1720 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 libs__process_util__Pid_8  = Pid;
#line 386 "process_util.m"
}
#line 370 "process_util.m"
    libs__process_util__succeeded = (libs__process_util__Pid_8 == (MR_Integer) 0);
#line 372 "process_util.m"
    if (libs__process_util__succeeded)
#line 371 "process_util.m"
      *libs__process_util__MaybePid_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "process_util.m"
    else
#line 373 "process_util.m"
      {
#line 373 "process_util.m"
        MR_Word base;
#line 373 "process_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 373 "process_util.m"
        *libs__process_util__MaybePid_6 = base;
#line 373 "process_util.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__process_util__Pid_8));
#line 373 "process_util.m"
      }
#line 368 "process_util.m"
  }
#line 102 "process_util.m"
}

#line 90 "process_util.m"
void MR_CALL 
libs__process_util__call_in_forked_process_4_p_0(
#line 90 "process_util.m"
  MR_Word libs__process_util__P_5,
#line 90 "process_util.m"
  MR_Word * libs__process_util__Success_6)
#line 90 "process_util.m"
{
#line 328 "process_util.m"
  {
#line 328 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 328 "process_util.m"
    {
#line 328 "process_util.m"
      libs__process_util__call_in_forked_process_with_backup_5_p_0(libs__process_util__P_5, libs__process_util__P_5, libs__process_util__Success_6);
#line 328 "process_util.m"
      return;
    }
#line 328 "process_util.m"
  }
#line 90 "process_util.m"
}

#line 84 "process_util.m"
void MR_CALL 
libs__process_util__call_in_forked_process_with_backup_5_p_0(
#line 84 "process_util.m"
  MR_Word libs__process_util__P_6,
#line 84 "process_util.m"
  MR_Word libs__process_util__AltP_7,
#line 84 "process_util.m"
  MR_Word * libs__process_util__Success_8)
#line 84 "process_util.m"
{
#line 342 "process_util.m"
  {
#line 342 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 351 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__call_in_forked_process_with_backup_5_p_0

	MR_bool SUCCESS_INDICATOR;

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

#line 1818 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 351 "process_util.m"
	}
libs__process_util__succeeded  = SUCCESS_INDICATOR;
}
#line 342 "process_util.m"
    if (libs__process_util__succeeded)
#line 332 "process_util.m"
      {
#line 332 "process_util.m"
        MR_Integer libs__process_util__Pid_27;

#line 386 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__call_in_forked_process_with_backup_5_p_0

	MR_Word Pred;
	MR_Integer Pid;

	Pred =  libs__process_util__P_6 ;
		{
#line 386 "process_util.m"

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

#line 1862 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 libs__process_util__Pid_27  = Pid;
#line 386 "process_util.m"
}
#line 370 "process_util.m"
        libs__process_util__succeeded = (libs__process_util__Pid_27 == (MR_Integer) 0);
#line 1871 "libs.process_util.c"
        if (libs__process_util__succeeded)
#line 340 "process_util.m"
          *libs__process_util__Success_8 = (MR_Integer) 0;
#line 1875 "libs.process_util.c"
        else
#line 1877 "libs.process_util.c"
          {
#line 1879 "libs.process_util.c"
            MR_Integer libs__process_util__CallStatus_13;
#line 1881 "libs.process_util.c"
            MR_Word libs__process_util__Status_14;
#line 431 "process_util.m"
            MR_Integer libs__process_util__V_12_12;
#line 337 "process_util.m"
            MR_Word libs__process_util__V_19_19;
#line 337 "process_util.m"
            MR_Integer libs__process_util__V_20_20;

#line 434 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__call_in_forked_process_with_backup_5_p_0

	MR_Integer Pid;
	MR_Integer WaitedPid;
	MR_Integer Status;

	Pid =  libs__process_util__Pid_27 ;
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

#line 1968 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 libs__process_util__V_12_12  = WaitedPid;
	 libs__process_util__CallStatus_13  = Status;
#line 434 "process_util.m"
}
#line 336 "process_util.m"
            {
#line 336 "process_util.m"
              libs__process_util__Status_14 = mercury__io__handle_system_command_exit_status_1_f_0(libs__process_util__CallStatus_13);
            }
#line 337 "process_util.m"
            libs__process_util__succeeded = ((MR_tag((MR_Word) libs__process_util__Status_14)) == (MR_mktag((MR_Integer) 0)));
#line 337 "process_util.m"
            if (libs__process_util__succeeded)
#line 337 "process_util.m"
              {
#line 337 "process_util.m"
                libs__process_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__process_util__Status_14, (MR_Integer) 0)));
#line 337 "process_util.m"
                libs__process_util__succeeded = ((MR_tag((MR_Word) libs__process_util__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 337 "process_util.m"
                if (libs__process_util__succeeded)
#line 337 "process_util.m"
                  {
#line 337 "process_util.m"
                    libs__process_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__process_util__V_19_19, (MR_Integer) 0)));
#line 337 "process_util.m"
                    libs__process_util__succeeded = (libs__process_util__V_20_20 == (MR_Integer) 0);
#line 337 "process_util.m"
                  }
#line 337 "process_util.m"
              }
#line 337 "process_util.m"
            if (libs__process_util__succeeded)
#line 337 "process_util.m"
              *libs__process_util__Success_8 = (MR_Integer) 1;
#line 337 "process_util.m"
            else
#line 337 "process_util.m"
              *libs__process_util__Success_8 = (MR_Integer) 0;
#line 2011 "libs.process_util.c"
          }
#line 332 "process_util.m"
      }
#line 342 "process_util.m"
    else
#line 343 "process_util.m"
      {
#line 343 "process_util.m"
        void MR_CALL (* libs__process_util__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__process_util__AltP_7, (MR_Integer) 1)));
#line 343 "process_util.m"
        MR_Box libs__process_util__conv2_Success_8;
#line 343 "process_util.m"
        MR_Box libs__process_util__conv1_STATE_VARIABLE_IO_16;

#line 343 "process_util.m"
        {
#line 343 "process_util.m"
          libs__process_util__func_0(((MR_Box) libs__process_util__AltP_7), &libs__process_util__conv2_Success_8, ((MR_Box) ((MR_Integer) 0)), &libs__process_util__conv1_STATE_VARIABLE_IO_16);
        }
#line 343 "process_util.m"
        *libs__process_util__Success_8 = ((MR_Word) libs__process_util__conv2_Success_8);
#line 343 "process_util.m"
      }
#line 342 "process_util.m"
  }
#line 84 "process_util.m"
}

#line 70 "process_util.m"
MR_bool MR_CALL 
libs__process_util__can_fork_0_p_0(void)
#line 70 "process_util.m"
{
#line 348 "process_util.m"
  {
#line 348 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 351 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__can_fork_0_p_0

	MR_bool SUCCESS_INDICATOR;

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

#line 2074 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 351 "process_util.m"
	}
libs__process_util__succeeded  = SUCCESS_INDICATOR;
}
#line 348 "process_util.m"
    return libs__process_util__succeeded;
#line 348 "process_util.m"
  }
#line 70 "process_util.m"
}

#line 59 "process_util.m"
MR_Integer MR_CALL 
libs__process_util__sigint_0_f_0(void)
#line 59 "process_util.m"
{
#line 315 "process_util.m"
  {
#line 315 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 315 "process_util.m"
    MR_Integer libs__process_util__Sigint_1;

#line 318 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__sigint_0_f_0

	MR_Integer Sigint;

		{
#line 318 "process_util.m"

    Sigint = SIGINT;

#line 2113 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 libs__process_util__Sigint_1  = Sigint;
#line 318 "process_util.m"
}
#line 315 "process_util.m"
    return libs__process_util__Sigint_1;
#line 315 "process_util.m"
  }
#line 59 "process_util.m"
}

#line 57 "process_util.m"
void MR_CALL 
libs__process_util__send_signal_4_p_0(
#line 57 "process_util.m"
  MR_Integer libs__process_util__Pid_1,
#line 57 "process_util.m"
  MR_Integer libs__process_util__Signal_2)
#line 57 "process_util.m"
{
#line 303 "process_util.m"
  {
#line 303 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 306 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__send_signal_4_p_0

	MR_Integer Pid;
	MR_Integer Signal;

	Pid =  libs__process_util__Pid_1 ;
	Signal =  libs__process_util__Signal_2 ;
		{
#line 306 "process_util.m"

#ifdef MR_HAVE_KILL
    kill((pid_t)Pid, (int)Signal);
#endif

#line 2157 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
#line 306 "process_util.m"
}
#line 303 "process_util.m"
  }
#line 57 "process_util.m"
}

#line 52 "process_util.m"
void MR_CALL 
libs__process_util__raise_signal_3_p_0(
#line 52 "process_util.m"
  MR_Integer libs__process_util__Signal_1)
#line 52 "process_util.m"
{
#line 296 "process_util.m"
  {
#line 296 "process_util.m"
    MR_bool libs__process_util__succeeded;

#line 299 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__raise_signal_3_p_0

	MR_Integer Signal;

	Signal =  libs__process_util__Signal_1 ;
		{
#line 299 "process_util.m"

    raise((int)Signal);

#line 2192 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
#line 299 "process_util.m"
}
#line 296 "process_util.m"
  }
#line 52 "process_util.m"
}

#line 45 "process_util.m"
void MR_CALL 
libs__process_util__build_with_check_for_interrupt_8_p_0(
#line 45 "process_util.m"
  MR_Word libs__process_util__TypeInfo_for_Info_36,
#line 45 "process_util.m"
  MR_Word libs__process_util__VeryVerbose_9,
#line 45 "process_util.m"
  MR_Word libs__process_util__Build_10,
#line 45 "process_util.m"
  MR_Word libs__process_util__Cleanup_11,
#line 45 "process_util.m"
  MR_Word * libs__process_util__Succeeded_12,
#line 45 "process_util.m"
  MR_Box libs__process_util__STATE_VARIABLE_Info_0_19,
#line 45 "process_util.m"
  MR_Box * libs__process_util__STATE_VARIABLE_Info_20)
#line 45 "process_util.m"
{
#line 131 "process_util.m"
  {
#line 131 "process_util.m"
    MR_bool libs__process_util__succeeded;
#line 131 "process_util.m"
    MR_Box libs__process_util__MaybeSigIntHandler_15;
#line 131 "process_util.m"
    MR_Word libs__process_util__Succeeded0_16;
#line 131 "process_util.m"
    MR_Integer libs__process_util__Signalled_17;
#line 131 "process_util.m"
    MR_Integer libs__process_util__Signal_18;
#line 131 "process_util.m"
    MR_Box libs__process_util__STATE_VARIABLE_Info_24_24;
#line 133 "process_util.m"
    void MR_CALL (* libs__process_util__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 133 "process_util.m"
    MR_Box libs__process_util__conv2_Succeeded0_16;
#line 133 "process_util.m"
    MR_Box libs__process_util__conv1_STATE_VARIABLE_IO_25_25;

#line 219 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_signal_action SigintHandler;

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

#line 2269 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_signal_action, SigintHandler, libs__process_util__MaybeSigIntHandler_15 );
#line 219 "process_util.m"
}
#line 133 "process_util.m"
    libs__process_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__process_util__Build_10, (MR_Integer) 1)));
#line 133 "process_util.m"
    {
#line 133 "process_util.m"
      libs__process_util__func_0(((MR_Box) libs__process_util__Build_10), &libs__process_util__conv2_Succeeded0_16, libs__process_util__STATE_VARIABLE_Info_0_19, &libs__process_util__STATE_VARIABLE_Info_24_24, ((MR_Box) ((MR_Integer) 0)), &libs__process_util__conv1_STATE_VARIABLE_IO_25_25);
    }
#line 133 "process_util.m"
    libs__process_util__Succeeded0_16 = ((MR_Word) libs__process_util__conv2_Succeeded0_16);
#line 245 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_signal_action SigintHandler;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_signal_action, libs__process_util__MaybeSigIntHandler_15 , SigintHandler);
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

#line 2305 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
#line 245 "process_util.m"
}
#line 283 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_Integer Signalled;
	MR_Integer Signal;

		{
#line 283 "process_util.m"

    Signalled = (MC_signalled ? 1 : 0);
    Signal = MC_signal_received;

#line 2324 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
	 libs__process_util__Signalled_17  = Signalled;
	 libs__process_util__Signal_18  = Signal;
#line 283 "process_util.m"
}
#line 136 "process_util.m"
    libs__process_util__succeeded = (libs__process_util__Signalled_17 == (MR_Integer) 1);
#line 151 "process_util.m"
    if (libs__process_util__succeeded)
#line 137 "process_util.m"
      {
#line 146 "process_util.m"
        void MR_CALL (* libs__process_util__func_3)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 146 "process_util.m"
        MR_Box libs__process_util__conv4_STATE_VARIABLE_IO_34_34;

#line 137 "process_util.m"
        *libs__process_util__Succeeded_12 = (MR_Integer) 0;
#line 143 "process_util.m"
        if ((libs__process_util__VeryVerbose_9 == (MR_Integer) 0))
#line 144 "process_util.m"
          {
#line 144 "process_util.m"
          }
#line 143 "process_util.m"
        else
#line 139 "process_util.m"
          {
#line 140 "process_util.m"
            {
#line 140 "process_util.m"
              mercury__io__write_string_3_p_0((MR_String) "** Received signal ");
            }
#line 141 "process_util.m"
            {
#line 141 "process_util.m"
              mercury__io__write_int_3_p_0(libs__process_util__Signal_18);
            }
#line 142 "process_util.m"
            {
#line 142 "process_util.m"
              mercury__io__write_string_3_p_0((MR_String) ", cleaning up.\n");
            }
#line 139 "process_util.m"
          }
#line 146 "process_util.m"
        libs__process_util__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__process_util__Cleanup_11, (MR_Integer) 1)));
#line 146 "process_util.m"
        {
#line 146 "process_util.m"
          libs__process_util__func_3(((MR_Box) libs__process_util__Cleanup_11), libs__process_util__STATE_VARIABLE_Info_24_24, libs__process_util__STATE_VARIABLE_Info_20, ((MR_Box) ((MR_Integer) 0)), &libs__process_util__conv4_STATE_VARIABLE_IO_34_34);
        }
#line 299 "process_util.m"
{
#define MR_PROC_LABEL libs__process_util__build_with_check_for_interrupt_8_p_0

	MR_Integer Signal;

	Signal =  libs__process_util__Signal_18 ;
		{
#line 299 "process_util.m"

    raise((int)Signal);

#line 2391 "libs.process_util.c"

		;}
#undef MR_PROC_LABEL
#line 299 "process_util.m"
}
#line 137 "process_util.m"
      }
#line 151 "process_util.m"
    else
#line 152 "process_util.m"
      {
#line 152 "process_util.m"
        *libs__process_util__Succeeded_12 = libs__process_util__Succeeded0_16;
#line 152 "process_util.m"
        *libs__process_util__STATE_VARIABLE_Info_20 = libs__process_util__STATE_VARIABLE_Info_24_24;
#line 152 "process_util.m"
      }
#line 131 "process_util.m"
  }
#line 45 "process_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.process_util. */
