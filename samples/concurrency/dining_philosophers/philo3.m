%-----------------------------------------------------------------------------%
% vim: ts=4 sw=4 et tw=0 wm=0 ff=unix ft=mercury
%-----------------------------------------------------------------------------%
%
% philo3.m
% Copyright (C) 2001-2002 Ralph Becket <rbeck@microsoft.com>
% Mon May 14 14:32:29 BST 2001
%
% RELEASED TO THE MERCURY PROJECT FOR DISTRIBUTION UNDER
% WHATEVER LICENCE IS DEEMED APPROPRIATE BY THE PROJECT
% MANAGEMENT.
%
% The dining philosophers using semaphores.  The philosophers acquire forks
% such that even numbered philosophers pick up left then right whereas odd
% numbered philosophers pick up right then left.  This is guaranteed not to
% lead to deadlock.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module philo3.
:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is cc_multi.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- pragma require_feature_set([concurrency]).

:- import_module thread.
:- import_module thread.semaphore.

:- import_module list.
:- import_module string.

%-----------------------------------------------------------------------------%

main(!IO) :-
    semaphore.new(Fork0, !IO), semaphore.signal(Fork0, !IO),
    semaphore.new(Fork1, !IO), semaphore.signal(Fork1, !IO),
    semaphore.new(Fork2, !IO), semaphore.signal(Fork2, !IO),
    semaphore.new(Fork3, !IO), semaphore.signal(Fork3, !IO),
    semaphore.new(Fork4, !IO), semaphore.signal(Fork4, !IO),
    spawn(philosopher("Plato",      0, Fork0, 1, Fork1), !IO),
    spawn(philosopher("Aristotle",  2, Fork2, 1, Fork1), !IO),
    spawn(philosopher("Descartes",  2, Fork2, 3, Fork3), !IO),
    spawn(philosopher("Calvin",     4, Fork4, 3, Fork3), !IO),
          philosopher("Hobbes",     4, Fork4, 0, Fork0, !IO).

%-----------------------------------------------------------------------------%

:- pred philosopher(string::in, int::in, semaphore::in, int::in,
    semaphore::in, io::di, io::uo) is cc_multi.

philosopher(Name, A, ForkA, B, ForkB, !IO) :-

    io.format("%s is thinking\n", [s(Name)], !IO),
    yield(!IO),
    rand_sleep(10, !IO),

    semaphore.wait(ForkA, !IO),
    io.format("%s has acquired fork %d\n", [s(Name), i(A)], !IO),
    semaphore.wait(ForkB, !IO),
    io.format("%s has acquired fork %d\n", [s(Name), i(B)], !IO),

    io.format("%s is eating\n", [s(Name)], !IO),
    yield(!IO),
    rand_sleep(5, !IO),

    io.format("%s relinquishes fork %d\n", [s(Name), i(B)], !IO),
    semaphore__signal(ForkB, !IO),
    io.format("%s relinquishes fork %d\n", [s(Name), i(A)], !IO),
    semaphore.signal(ForkA, !IO),

    philosopher(Name, A, ForkA, B, ForkB, !IO).

%-----------------------------------------------------------------------------%

:- pragma foreign_code("C#", "
	public static System.Random rng = new System.Random();
").

:- pragma foreign_decl("Java", "

import java.util.Random;

").

:- pragma foreign_code("Java", "
    public static Random rng = new Random();
").

:- pred rand_sleep(int::in, io::di, io::uo) is det.
:- pragma foreign_proc("C",
    rand_sleep(Int::in, _IO0::di, _IO::uo),
	[promise_pure, thread_safe, will_not_call_mercury],
"
#if defined(MR_WIN32)
	Sleep(1000 * (rand() % Int));
#else
	sleep((rand() % Int));
#endif
").

:- pragma foreign_proc("C#",
    rand_sleep(Int::in, _IO0::di, _IO::uo),
	[promise_pure, thread_safe, will_not_call_mercury],
"
	System.Threading.Thread.Sleep(rng.Next(Int) * 1000);
").

:- pragma foreign_proc("Java",
    rand_sleep(Int::in, _IO0::di, _IO::uo),
    [promise_pure, thread_safe, will_not_call_mercury],
"
    try {
        Thread.sleep(rng.nextInt(Int) * 1000);
    } catch ( InterruptedException e ) {
        /* Just return if we are interrupted.*/
    }
").

%-----------------------------------------------------------------------------%
:- end_module philo3.
%-----------------------------------------------------------------------------%
