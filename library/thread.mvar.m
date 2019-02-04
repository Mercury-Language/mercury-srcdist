%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2000-2003, 2006-2007, 2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: thread.mvar.m.
% Main author: petdr, fjh.
% Stability: low.
%
% This module provides a Mercury version of Haskell mutable variables.  A
% mutable variable (mvar) is a reference to a mutable location which can
% either contain a value of type T or be empty.
%
% Access to a mvar is thread-safe and can be used to synchronize between
% different threads.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module thread.mvar.
:- interface.

:- import_module io.
:- import_module maybe.

%-----------------------------------------------------------------------------%

:- type mvar(T).

    % Create an empty mvar.
    %
:- func mvar.init = (mvar(T)::uo) is det.

    % Create an empty mvar.
    %
:- pred mvar.init(mvar(T)::out, io::di, io::uo) is det.

    % Take the contents of the mvar out leaving the mvar empty.
    % If the mvar is empty, block until some thread fills the mvar.
    %
:- pred mvar.take(mvar(T)::in, T::out, io::di, io::uo) is det.

    % Take the contents of the mvar out leaving the mvar empty.
    % Returns immediately with no if the mvar was empty, or yes(X) if
    % the mvar contained X.
    %
:- pred mvar.try_take(mvar(T)::in, maybe(T)::out, io::di, io::uo) is det.

    % Place the value of type T into an empty mvar.
    % If the mvar is full block until it becomes empty.
    %
:- pred mvar.put(mvar(T)::in, T::in, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module bool.
:- import_module mutvar.
:- import_module thread.semaphore.

%-----------------------------------------------------------------------------%

:- type mvar(T)
    --->    mvar(
                semaphore,  % full
                semaphore,  % empty
                mutvar(T)   % data
            ).

mvar.init(mvar.init, !IO).

:- pragma promise_pure(mvar.init/0).

mvar.init = mvar(Full, Empty, Ref) :-
    Full = semaphore.init(0),
    Empty = semaphore.init(1),      % Initially a mvar starts empty.
    impure new_mutvar0(Ref).

:- pragma promise_pure(mvar.take/4).

mvar.take(mvar(Full, Empty, Ref), Data, !IO) :-
    semaphore.wait(Full, !IO),
    impure get_mutvar(Ref, Data),
    semaphore.signal(Empty, !IO).

:- pragma promise_pure(mvar.try_take/4).

mvar.try_take(mvar(Full, Empty, Ref), MaybeData, !IO) :-
    semaphore.try_wait(Full, Success, !IO),
    (
        Success = yes,
        impure get_mutvar(Ref, Data),
        semaphore.signal(Empty, !IO),
        MaybeData = yes(Data)
    ;
        Success = no,
        MaybeData = no
    ).

:- pragma promise_pure(mvar.put/4).

mvar.put(mvar(Full, Empty, Ref), Data, !IO) :-
    semaphore.wait(Empty, !IO),
    impure set_mutvar(Ref, Data),
    semaphore.signal(Full, !IO).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%
