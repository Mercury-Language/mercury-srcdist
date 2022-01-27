%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2000-2001, 2003-2004, 2006-2008, 2010-2011 The University
% of Melbourne.
% Copyright (C) 2014 The Mercury Team.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: thread.m.
% Authors: conway, wangp.
% Stability: medium.
%
% This module defines the Mercury concurrency interface.
%
% The term `concurrency' refers to threads, not necessarily to parallel
% execution of those threads.  (The latter is also possible if you are using
% one of the .par grades or the Java or C# backends.)
%
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module thread.
:- interface.

:- import_module io.
:- import_module maybe.

:- include_module barrier.
:- include_module channel.
:- include_module future.
:- include_module mvar.
:- include_module semaphore.

%---------------------------------------------------------------------------%

    % Abstract type representing a thread.
    %
:- type thread.

    % can_spawn succeeds if spawn/4 is supported in the current grade.
    %
:- pred can_spawn is semidet.

    % can_spawn_native succeeds if spawn_native/4 is supported in the current
    % grade.
    %
:- pred can_spawn_native is semidet.

    % spawn(Closure, IO0, IO) is true iff `IO0' denotes a list of I/O
    % transactions that is an interleaving of those performed by `Closure'
    % and those contained in `IO' - the list of transactions performed by
    % the continuation of spawn/3.
    %
    % Operationally, spawn/3 is like spawn/4 except that Closure does not
    % accept a thread handle argument, and an exception is thrown if the
    % thread cannot be created.
    %
:- pred spawn(pred(io, io), io, io).
:- mode spawn(pred(di, uo) is cc_multi, di, uo) is cc_multi.

    % spawn(Closure, Res, IO0, IO) creates a new thread and performs Closure in
    % that thread. On success it returns ok(Thread) where Thread is a handle to
    % the new thread. Otherwise it returns an error.
    %
:- pred spawn(pred(thread, io, io), maybe_error(thread), io, io).
:- mode spawn(pred(in, di, uo) is cc_multi, out, di, uo) is cc_multi.

    % spawn_native(Closure, Res, IO0, IO):
    % Like spawn/4, but Closure will be performed in a separate "native thread"
    % of the environment the program is running in (POSIX thread, Windows
    % thread, Java thread, etc.).
    %
    % spawn_native exposes a low-level implementation detail, so it is more
    % likely to change with the implementation.
    %
    % Rationale: on the low-level C backend Mercury threads are multiplexed
    % onto a limited number of OS threads. A call to a blocking procedure
    % prevents that OS thread from making progress on another Mercury thread.
    % Some foreign code depends on OS thread-local state so needs to be
    % consistently executed on a dedicated OS thread to be usable.
    %
:- pred spawn_native(pred(thread, io, io), maybe_error(thread), io, io).
:- mode spawn_native(pred(in, di, uo) is cc_multi, out, di, uo) is cc_multi.

    % yield(IO0, IO) is logically equivalent to (IO = IO0) but
    % operationally, yields the Mercury engine to some other thread
    % if one exists.
    %
    % NOTE: this is not yet implemented in the hl*.par.gc grades; currently
    % it is a no-op in those grades.
    % 
:- pred yield(io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module bool.
:- import_module require.
:- import_module string.

:- pragma foreign_decl("C", "
#ifndef MR_HIGHLEVEL_CODE
  #if (!defined(MR_EXEC_TRACE) && !defined(MR_DEEP_PROFILING)) || !defined(MR_USE_GCC_NONLOCAL_GOTOS)
    /*
    ** In calling thread.yield, semaphore.wait or semaphore.signal, the
    ** calling context may need to suspend and yield to another context.
    ** This is implemented by setting the resume address of the context to an
    ** auxiliary function outside of the foreign_proc.  This breaks when
    ** execution tracing or deep profiling are enabled as code inserted at the
    ** end of the foreign_proc won't be executed.  In those cases we rely on
    ** the gcc extension that allows us to take the address of labels within
    ** the foreign_proc, so the context will resume back inside the
    ** foreign_proc.
    **
    ** XXX implement those procedures as :- external procedures so that the
    ** transforms won't be applied
    */
    #define ML_THREAD_AVOID_LABEL_ADDRS
  #endif
#endif
").

:- pragma foreign_decl("Java", "
import jmercury.runtime.JavaInternal;
import jmercury.runtime.Task;
").

    % The thread id is not formally exposed yet but allows different thread
    % handles to compare unequal.
    %
:- type thread
    --->    thread(thread_id).

:- type thread_id == string.

%---------------------------------------------------------------------------%

can_spawn :-
    ( can_spawn_context
    ; can_spawn_native
    ).

:- pred can_spawn_context is semidet.

can_spawn_context :-
    semidet_fail.

:- pragma foreign_proc("C",
    can_spawn_context,
    [will_not_call_mercury, promise_pure, thread_safe, may_not_duplicate],
"
#if !defined(MR_HIGHLEVEL_CODE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
").

:- pragma foreign_proc("C",
    can_spawn_native,
    [will_not_call_mercury, promise_pure, thread_safe],
"
#if defined(MR_THREAD_SAFE)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
").

:- pragma foreign_proc("C#",
    can_spawn_native,
    [will_not_call_mercury, promise_pure, thread_safe],
"
    SUCCESS_INDICATOR = true;
").

:- pragma foreign_proc("Java",
    can_spawn_context,
    [will_not_call_mercury, promise_pure],
"
    SUCCESS_INDICATOR = true;
").

:- pragma foreign_proc("Java",
    can_spawn_native,
    [will_not_call_mercury, promise_pure, thread_safe],
"
    SUCCESS_INDICATOR = true;
").

%---------------------------------------------------------------------------%

spawn(Goal0, !IO) :-
    Goal = (pred(_Thread::in, IO0::di, IO::uo) is cc_multi :- Goal0(IO0, IO)),
    spawn(Goal, Res, !IO),
    (
        Res = ok(_)
    ;
        Res = error(Error),
        unexpected($module, $pred, Error)
    ).

spawn(Goal, Res, !IO) :-
    ( can_spawn_context ->
        spawn_context(Goal, Res, !IO)
    ;
        spawn_native(Goal, Res, !IO)
    ).

%---------------------------------------------------------------------------%

:- pred spawn_context(pred(thread, io, io), maybe_error(thread), io, io).
:- mode spawn_context(pred(in, di, uo) is cc_multi, out, di, uo) is cc_multi.

spawn_context(Goal, Res, !IO) :-
    spawn_context_2(Goal, Success, ThreadId, !IO),
    (
        Success = yes,
        Res = ok(thread(ThreadId))
    ;
        Success = no,
        Res = error("Unable to spawn threads in this grade.")
    ).

:- pred spawn_context_2(pred(thread, io, io), bool, string, io, io).
:- mode spawn_context_2(pred(in, di, uo) is cc_multi, out, out, di, uo)
    is cc_multi.

spawn_context_2(_, Res, "", !IO) :-
    ( Res = no
    ; Res = no
    ).

:- pragma foreign_proc("C",
    spawn_context_2(Goal::(pred(in, di, uo) is cc_multi), Success::out,
        ThreadId::out, _IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
#if !defined(MR_HIGHLEVEL_CODE)
{
    MR_Context          *ctxt;
    MR_ThreadLocalMuts  *tlm;

    ML_incr_thread_barrier_count();

    ctxt = MR_create_context(""spawn"", MR_CONTEXT_SIZE_REGULAR, NULL);
    ctxt->MR_ctxt_resume = MR_ENTRY(mercury__thread__spawn_begin_thread);

    tlm = MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    ctxt->MR_ctxt_thread_local_mutables = tlm;

    /*
    ** Derive a thread id from the address of the thread-local mutable vector
    ** for the Mercury thread. It should actually be more unique than a
    ** context address as contexts are kept around and reused.
    */
    ThreadId = MR_make_string(MR_ALLOC_ID, ""%p"", tlm);

    /*
    ** Store Goal and ThreadId on the top of the new context's stack.
    */
    ctxt->MR_ctxt_sp[0] = Goal;
    ctxt->MR_ctxt_sp[-1] = (MR_Word) ThreadId;

    MR_schedule_context(ctxt);

    Success = MR_TRUE;
}
#else /* MR_HIGHLEVEL_CODE */
{
    Success = MR_FALSE;
    ThreadId = MR_make_string_const("""");
}
#endif /* MR_HIGHLEVEL_CODE */
").

:- pragma foreign_proc("Java",
    spawn_context_2(Goal::(pred(in, di, uo) is cc_multi), Success::out,
        ThreadId::out, _IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
    RunGoal rg = new RunGoal((Object[]) Goal);
    Task task = new Task(rg);
    ThreadId = String.valueOf(task.getId());
    rg.setId(ThreadId);
    JavaInternal.getThreadPool().submit(task);
    Success = bool.YES;
").

%---------------------------------------------------------------------------%

spawn_native(Goal, Res, !IO) :-
    spawn_native_2(Goal, Success, ThreadId, !IO),
    (
        Success = yes,
        Res = ok(thread(ThreadId))
    ;
        Success = no,
        Res = error("Unable to create native thread.")
    ).

:- pred spawn_native_2(pred(thread, io, io), bool, thread_id, io, io).
:- mode spawn_native_2(pred(in, di, uo) is cc_multi, out, out, di, uo)
    is cc_multi.

:- pragma foreign_proc("C",
    spawn_native_2(Goal::(pred(in, di, uo) is cc_multi), Success::out,
        ThreadId::out, _IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
    ThreadId = MR_make_string_const("""");
#ifdef MR_THREAD_SAFE
    Success = ML_create_exclusive_thread(Goal, &ThreadId);
#else
    Success = MR_FALSE;
#endif
").

:- pragma foreign_proc("C#",
    spawn_native_2(Goal::(pred(in, di, uo) is cc_multi), Success::out,
        ThreadId::out, _IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
    try {
        object[] thread_locals = runtime.ThreadLocalMutables.clone();
        MercuryThread mt = new MercuryThread(Goal, thread_locals);
        System.Threading.Thread thread = new System.Threading.Thread(
            new System.Threading.ThreadStart(mt.run));
        ThreadId = thread.ManagedThreadId.ToString();
        mt.setThreadId(ThreadId);
        thread.Start();
        Success = mr_bool.YES;
    } catch (System.Threading.ThreadStartException e) {
        Success = mr_bool.NO;
        ThreadId = """";
    }
").

:- pragma foreign_proc("Java",
    spawn_native_2(Goal::(pred(in, di, uo) is cc_multi), Success::out,
        ThreadId::out, _IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
    RunGoal rg = new RunGoal((Object[]) Goal);
    Task task = new Task(rg);
    ThreadId = String.valueOf(task.getId());
    rg.setId(ThreadId);
    JavaInternal.getThreadPool().submitExclusiveThread(task);
    Success = bool.YES;
").

%---------------------------------------------------------------------------%

:- pragma no_inline(yield/2).
:- pragma foreign_proc("C",
    yield(_IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
#ifndef MR_HIGHLEVEL_CODE
    MR_save_context(MR_ENGINE(MR_eng_this_context));
  #ifdef ML_THREAD_AVOID_LABEL_ADDRS
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        MR_ENTRY(mercury__thread__yield_resume);
  #else
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        &&yield_skip_to_the_end;
  #endif
    MR_schedule_context(MR_ENGINE(MR_eng_this_context));
    MR_ENGINE(MR_eng_this_context) = NULL;
    MR_idle();

  #ifndef ML_THREAD_AVOID_LABEL_ADDRS
    yield_skip_to_the_end:
  #endif
#endif
").

:- pragma foreign_proc("C#",
    yield(_IO0::di, _IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
    // Only available in .NET 4.0.
    // System.Threading.Yield();
").

:- pragma foreign_proc("Java",
    yield(IO0::di, IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe, tabled_for_io,
        may_not_duplicate],
"
    java.lang.Thread.yield();
    IO = IO0;
").

yield(!IO).

%---------------------------------------------------------------------------%
%
% Low-level C implementation
%

:- pragma foreign_decl("C",
"
/*
INIT mercury_sys_init_thread_modules
*/

#ifndef MR_HIGHLEVEL_CODE
    MR_define_extern_entry(mercury__thread__spawn_begin_thread);
    MR_declare_label(mercury__thread__spawn_end_thread);
    MR_define_extern_entry(mercury__thread__yield_resume);
#endif
").

:- pragma foreign_code("C",
"
#ifndef MR_HIGHLEVEL_CODE

    MR_declare_entry(mercury__do_call_closure_1);

    MR_BEGIN_MODULE(hand_written_thread_module)
        MR_init_entry_ai(mercury__thread__spawn_begin_thread);
        MR_init_label(mercury__thread__spawn_end_thread);
        MR_init_entry_ai(mercury__thread__yield_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__thread__spawn_begin_thread);
    {
        /* Call the closure placed the top of the stack. */
        MR_r1 = MR_stackvar(1); /* Goal */
        MR_r2 = MR_stackvar(2); /* ThreadId */
        MR_noprof_call(MR_ENTRY(mercury__do_call_closure_1),
            MR_LABEL(mercury__thread__spawn_end_thread));
    }
    MR_define_label(mercury__thread__spawn_end_thread);
    {
        ML_decr_thread_barrier_count();

        MR_save_context(MR_ENGINE(MR_eng_this_context));
        MR_release_context(MR_ENGINE(MR_eng_this_context));
        MR_ENGINE(MR_eng_this_context) = NULL;
        MR_idle();
    }

    MR_define_entry(mercury__thread__yield_resume);
    {
        MR_proceed();
    }
    MR_END_MODULE

#endif

    /* forward decls to suppress gcc warnings */
    void mercury_sys_init_thread_modules_init(void);
    void mercury_sys_init_thread_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_thread_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp);
    #endif

    void mercury_sys_init_thread_modules_init(void)
    {
    #ifndef MR_HIGHLEVEL_CODE
        hand_written_thread_module();
    #endif
    }

    void mercury_sys_init_thread_modules_init_type_tables(void)
    {
        /* no types to register */
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_thread_modules_write_out_proc_statics(FILE *deep_fp,
        FILE *procrep_fp)
    {
        /* no proc_statics to write out */
    }
    #endif
").

%---------------------------------------------------------------------------%
%
% High-level C and low-level C exclusive threads
%

:- pragma foreign_decl("C", "
#if defined(MR_THREAD_SAFE)
  #include  <pthread.h>

  MR_bool ML_create_exclusive_thread(MR_Word goal, MR_String *thread_id);
  void *ML_exclusive_thread_wrapper(void *arg);

  typedef struct ML_ThreadWrapperArgs ML_ThreadWrapperArgs;
  struct ML_ThreadWrapperArgs {
        MercurySem          sem;
        MR_Word             goal;
        MR_ThreadLocalMuts  *thread_local_mutables;
        MR_bool             thread_started;
        MR_String           thread_id;
  };
#endif /* MR_THREAD_SAFE */
").

:- pragma foreign_code("C", "
#if defined(MR_THREAD_SAFE)
  MR_bool ML_create_exclusive_thread(MR_Word goal, MR_String *thread_id)
  {
    ML_ThreadWrapperArgs    args;
    pthread_t               thread;
    pthread_attr_t          attrs;
    int err;

    ML_incr_thread_barrier_count();

    sem_init(&args.sem, 0, 0);
    args.goal = goal;
    args.thread_local_mutables =
        MR_clone_thread_local_mutables(MR_THREAD_LOCAL_MUTABLES);
    args.thread_started = MR_FALSE;
    args.thread_id = NULL;

    pthread_attr_init(&attrs);
    pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED);
    err = pthread_create(&thread, &attrs, ML_exclusive_thread_wrapper, &args);
    pthread_attr_destroy(&attrs);

    if (err == 0) {
        MR_SEM_WAIT(&args.sem, ""ML_create_exclusive_thread"");
    }

    sem_destroy(&args.sem);

    if (args.thread_started) {
        *thread_id = args.thread_id;
        return MR_TRUE;
    }

    ML_decr_thread_barrier_count();
    return MR_FALSE;
  }

  void *ML_exclusive_thread_wrapper(void *arg)
  {
    ML_ThreadWrapperArgs    *args = arg;
    MR_Word                 goal;
    MR_String               thread_id;

    if (MR_init_thread(MR_use_now) == MR_FALSE) {
        args->thread_started = MR_FALSE;
        MR_SEM_POST(&args->sem, ""ML_exclusive_thread_wrapper"");
        return NULL;
    }

    /*
    ** Set the context to have the current engine as its exclusive engine.
    */
    MR_assert(MR_ENGINE(MR_eng_this_context) != NULL);
    MR_ENGINE(MR_eng_this_context)->MR_ctxt_exclusive_engine =
        MR_ENGINE(MR_eng_id);

    MR_assert(MR_THREAD_LOCAL_MUTABLES == NULL);
    MR_SET_THREAD_LOCAL_MUTABLES(args->thread_local_mutables);

    thread_id = MR_make_string(MR_ALLOC_SITE_RUNTIME,
        ""%"" MR_INTEGER_LENGTH_MODIFIER ""x"", MR_SELF_THREAD_ID);

    /*
    ** Take a copy of the goal before telling the parent we are ready.
    */
    goal = args->goal;
    args->thread_started = MR_TRUE;
    args->thread_id = thread_id;
    MR_SEM_POST(&args->sem, ""ML_exclusive_thread_wrapper"");

    ML_call_back_to_mercury_cc_multi(goal, thread_id);

    MR_finalize_thread_engine();

    ML_decr_thread_barrier_count();

    return NULL;
  }
#endif /* MR_THREAD_SAFE */
").

:- pred call_back_to_mercury(pred(thread, io, io), thread_id, io, io).
:- mode call_back_to_mercury(pred(in, di, uo) is cc_multi, in, di, uo)
    is cc_multi.
:- pragma foreign_export("C",
    call_back_to_mercury(pred(in, di, uo) is cc_multi, in, di, uo),
    "ML_call_back_to_mercury_cc_multi").
:- pragma foreign_export("C#",
    call_back_to_mercury(pred(in, di, uo) is cc_multi, in, di, uo),
    "ML_call_back_to_mercury_cc_multi").
:- pragma foreign_export("Java",
    call_back_to_mercury(pred(in, di, uo) is cc_multi, in, di, uo),
    "ML_call_back_to_mercury_cc_multi").

call_back_to_mercury(Goal, ThreadId, !IO) :-
    Goal(thread(ThreadId), !IO).

%---------------------------------------------------------------------------%

:- pragma foreign_decl("C", local,
"
#if defined(MR_THREAD_SAFE) || !defined(MR_HIGHLEVEL_CODE)
  static void ML_incr_thread_barrier_count(void);
  static void ML_decr_thread_barrier_count(void);
#endif
").

:- pragma foreign_code("C",
"
#if defined(MR_THREAD_SAFE) || !defined(MR_HIGHLEVEL_CODE)

  static void ML_incr_thread_barrier_count(void)
  {
    MR_LOCK(&MR_thread_barrier_lock, ""ML_incr_thread_barrier_count"");
    MR_thread_barrier_count++;
    MR_UNLOCK(&MR_thread_barrier_lock, ""ML_incr_thread_barrier_count"");
  }

  static void ML_decr_thread_barrier_count(void)
  {
    MR_LOCK(&MR_thread_barrier_lock, ""ML_decr_thread_barrier_count"");
    MR_thread_barrier_count--;
  #ifdef MR_HIGHLEVEL_CODE
    if (MR_thread_barrier_count == 0) {
        MR_SIGNAL(&MR_thread_barrier_cond, ""ML_decr_thread_barrier_count"");
    }
  #else
    if (MR_thread_barrier_count == 0) {
        /*
        ** If this is the last spawned context to terminate and the
        ** main context was just waiting on us in order to terminate
        ** then reschedule the main context.
        */
        if (MR_thread_barrier_context) {
            MR_schedule_context(MR_thread_barrier_context);
            MR_thread_barrier_context = NULL;
        }
    }
  #endif
    MR_UNLOCK(&MR_thread_barrier_lock, ""ML_decr_thread_barrier_count"");
  }

#endif /* MR_THREAD_SAFE || !MR_HIGHLEVEL_CODE */
").

%---------------------------------------------------------------------------%

:- pragma foreign_code("C#", "
private class MercuryThread {
    private object[] Goal;
    private object[] thread_local_mutables;
    private string ThreadId;

    internal MercuryThread(object[] g, object[] tlmuts)
    {
        Goal = g;
        thread_local_mutables = tlmuts;
    }

    internal void setThreadId(string id)
    {
        ThreadId = id;
    }

    internal void run()
    {
        runtime.ThreadLocalMutables.set_array(thread_local_mutables);
        thread.ML_call_back_to_mercury_cc_multi(Goal, ThreadId);
    }
}").

:- pragma foreign_code("Java", "
public static class RunGoal implements Runnable {
    private final Object[]  goal;
    private String          id;

    private RunGoal(Object[] g)
    {
        goal = g;
        id = null;
    }

    private void setId(String id)
    {
        this.id = id;
    }

    public void run()
    {
        thread.ML_call_back_to_mercury_cc_multi(goal, id);
    }
}").

%---------------------------------------------------------------------------%
:- end_module thread.
%---------------------------------------------------------------------------%
