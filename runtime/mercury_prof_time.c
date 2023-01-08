// vim: ts=4 sw=4 expandtab ft=c

// Copyright (C) 2001-2002, 2005-2006 The University of Melbourne.
// Copyright (C) 2014, 2016, 2018 The Mercury team.
// This file is distributed under the terms specified in COPYING.LIB.

// mercury_prof_time.c
//
// Author: petdr

const char      *MR_time_method;

#include "mercury_imp.h"
#include "mercury_signal.h"
#include "mercury_timing.h"
#include "mercury_prof_time.h"

#include    <signal.h>
#include    <errno.h>

#ifdef  MR_HAVE_UNISTD_H
  #include  <unistd.h>
#endif

#ifdef  MR_HAVE_SYS_TIME_H
  #include  <sys/time.h>
#endif

#if defined(MR_MPROF_PROFILE_TIME) || defined(MR_DEEP_PROFILING_TIMING)

#if !defined(MR_CLOCK_TICKS_PER_SECOND) || !defined(MR_HAVE_SETITIMER)
  #error "Time profiling not supported on this system"
#endif

static  int         MR_itimer_sig;
static  int         MR_itimer_type;

static  MR_bool     MR_time_profiling_on = MR_FALSE;

static  void        MR_checked_setitimer(int which, struct itimerval *value);

// MR_init_time_profile_method:
//
// Initializes MR_itimer_type and MR_itimer_sig based on the setting of
// MR_time_profile_method.

void
MR_init_time_profile_method(void)
{
    switch (MR_time_profile_method) {
#if defined(ITIMER_REAL) && defined(SIGALRM)
        case MR_profile_real_time:
            MR_itimer_type = ITIMER_REAL;
            MR_itimer_sig  = SIGALRM;
            MR_time_method = "real-time";
            break;
#endif
#if defined(ITIMER_VIRTUAL) && defined(SIGVTALRM)
        case MR_profile_user_time:
            MR_itimer_type = ITIMER_VIRTUAL;
            MR_itimer_sig  = SIGVTALRM;
            MR_time_method = "user-time";
            break;
#endif
#if defined(ITIMER_PROF) && defined(SIGPROF)
        case MR_profile_user_plus_system_time:
            MR_itimer_type = ITIMER_PROF;
            MR_itimer_sig  = SIGPROF;
            MR_time_method = "user-plus-system-time";
            break;
#endif
        default:
            MR_fatal_error("invalid time profile method");
    }
}

// MR_turn_on_time_profiling:
//
// Sets up the profiling timer and starts it up. At the moment it is after
// every MR_CLOCK_TICKS_PER_PROF_SIG ticks of the clock.
//
// WARNING: SYSTEM SPECIFIC CODE. This code is not very portable, because
// it uses setitimer(), which is not part of POSIX.1 or ANSI C.

void
MR_turn_on_time_profiling(MR_time_signal_handler handler)
{
    struct itimerval    itime;
    const long          prof_sig_interval_in_usecs =
                            MR_CLOCK_TICKS_PER_PROF_SIG *
                            (MR_USEC_PER_SEC / MR_CLOCK_TICKS_PER_SECOND);

    MR_time_profiling_on = MR_TRUE;

    itime.it_value.tv_sec = 0;
    itime.it_value.tv_usec = prof_sig_interval_in_usecs;
    itime.it_interval.tv_sec = 0;
    itime.it_interval.tv_usec = prof_sig_interval_in_usecs;

    MR_setup_signal(MR_itimer_sig, handler, MR_FALSE,
        "cannot install signal handler");
    MR_checked_setitimer(MR_itimer_type, &itime);
}

// MR_turn_off_time_profiling:
//
// Turns off the time profiling.

void
MR_turn_off_time_profiling(void)
{
    struct itimerval itime;

    if (! MR_time_profiling_on) {
        return;
    }

    itime.it_value.tv_sec = 0;
    itime.it_value.tv_usec = 0;
    itime.it_interval.tv_sec = 0;
    itime.it_interval.tv_usec = 0;

    MR_checked_setitimer(MR_itimer_type, &itime);
}

static void
MR_checked_setitimer(int which, struct itimerval *value)
{
    errno = 0;
    if (setitimer(which, value, NULL) != 0) {
        MR_perror("cannot set timer for profiling");
        exit(EXIT_FAILURE);
    }
}

#endif // MR_MPROF_PROFILE_TIME || MR_DEEP_PROFILING_TIMING
