%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et wm=0 tw=0
%---------------------------------------------------------------------------%
% Copyright (C) 2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
% 
% File: stm_builtin.m.
% Main author: lmika.
% Stability: low.
% 
% This file is automatically imported into every module that uses software
% transactional memory (STM).  It defines the data types and predicates
% use to implement STM.
% 
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module stm_builtin.
:- interface.

:- import_module io.

%-----------------------------------------------------------------------------%
%
% Transaction state
%

    % The STM transaction state type is used to store a log of (tentative)
    % updates to stm_vars (defined below) within an atomic block.
    % Within an atomic block each call that reads or writes an stm_var has
    % a pair of arguments of this type threaded through it.
    % These arguments are unique so that read or writes to stm_vars cannot
    % be backtracked over.
    %
    % Values of this type are implicitly created by the compiler at the
    % beginning of an atomic block and passed to the goal within that block.
    % User program should not create values of this type.
    %
:- type stm.

%----------------------------------------------------------------------------%
%
% Transaction variables
%
    
    % A transaction variable may contain a value of type T.
    % It may only be accessed from within an atomic scope.
    %
:- type stm_var(T).

    % new_stm_var(Value, TVar, !IO):
    %
    % Create a new transaction variable with initial value `Value'.
    %
    % XXX we need a version that works within atomic blocks as well.
    %
:- pred new_stm_var(T::in, stm_var(T)::out, io::di, io::uo) is det.

    % Update the value stored in a transaction variable.
    %
:- pred write_stm_var(stm_var(T)::in, T::in, stm::di, stm::uo) is det.

    % Read the current value stored in a transaction variable.
    %
:- pred read_stm_var(stm_var(T)::in, T::out, stm::di, stm::uo) is det.

%-----------------------------------------------------------------------------%
%
% Retry
%

    % Abort the current transaction and restart it from the beginning.
    % Operationally this casuses the calling thread to block until the value
    % of at least one transaction variable read during the attempted
    % transaction is written by another thread.
    %
    % XXX the implementation of this predicate is incomplete.  Calling it
    % will currently cause the program to abort execution.
    %
:- pred retry(stm::di) is erroneous.

%-----------------------------------------------------------------------------%
%
% Atomic transactions
%

:- pred atomic_transaction(pred(T, stm, stm), T, io, io).
:- mode atomic_transaction(in(pred(out, di, uo) is det), out, di, uo)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

%-----------------------------------------------------------------------------%

:- interface.

% The remainder of this file contains the builtin predicates that the compiler
% generates calls to when implementing software transactional memory.
% These predicates should not be called by user programs directly.
% This module also defines some types that are used by those predicates.

    % We throw exceptions of this type to indicate that a transaction is
    % being rolled back.
    %
:- type rollback_exception
    --->    rollback_invalid_transaction
    ;       rollback_retry.

    % Create a new transaction log.
    %
:- impure pred stm_create_transaction_log(stm::uo) is det. 

    % Discard a transaction log.
    %
:- impure pred stm_discard_transaction_log(stm::di) is det.

    % stm_create_nested_transaction_log(Parent, Child):
    % `Child' is a new transaction log whose enclosing transaction's
    % log is given by `Parent'.
    %
:- impure pred stm_create_nested_transaction_log(stm::ui, stm::uo) is det.

    % Lock the STM global mutex.
    %
:- impure pred stm_lock is det.

    % Unlock the STM global mutex.
    %
:- impure pred stm_unlock is det.

    % Values of this type are returned by stm_validate/2 and indicate
    % whether a given transaction log is valid.
    % NOTE: The definition of this type must be kept consistent with the
    % constants defined in runtime/mercury_stm.h.
    %
    % 
:- type stm_validation_result
    --->    stm_transaction_valid
    ;       stm_transaction_invalid.

    % Record whether the (partial) transaction recorded in the given
    % transaction log is valid or not.
    %
:- impure pred stm_validate(stm::ui, stm_validation_result::out) is det.

    % Write the changes in the given log to memory.
    % 
    % NOTE: this predicate must *only* be called while the STM global mutex
    %       is locked.
    %
:- impure pred stm_commit(stm::ui) is det.

    % Add this thread to the wait queues of the transaction variables referred
    % to by the given log and then block until another thread makes a commit
    % that involves one of those transaction variables.
    %
    % NOTE: this predicate must *only* be called while the STM global mutex
    %       is locked.
    %
:- impure pred stm_block(stm::ui) is det.

    % This type is used in the case where an atomic_scope has no outputs
    % since the call to try_stm/3 introduced by the expansion of atomic 
    % scopes needs to return at least one value.
    % 
:- type stm_dummy_output
    --->    stm_dummy_output.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module exception.
:- import_module univ.

%-----------------------------------------------------------------------------%

:- pragma foreign_decl("C", "#include \"mercury_stm.h\"").

:- pragma foreign_type("C", stm_var(T), "MR_STM_Var *", 
    [stable, can_pass_as_mercury_type]).

:- pragma foreign_type("C", stm, "MR_STM_TransLog *",
    [can_pass_as_mercury_type]).

    % Definitions for use with the other backends.
    %
:- type stm_var(T)
    --->    tvar(c_pointer).

:- type stm
    --->    stm(c_pointer).

%----------------------------------------------------------------------------%

:- pragma foreign_proc("C",
    new_stm_var(T::in, TVar::out, IO0::di, IO::uo),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    MR_STM_new_stm_var(T, TVar);
    IO = IO0;
").

:- pragma foreign_proc("C",
    write_stm_var(TVar::in, Value::in, STM0::di, STM::uo),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    MR_STM_write_var(TVar, Value, STM0);
    STM = STM0;
").

:- pragma foreign_proc("C",
    read_stm_var(TVar::in, Value::out, STM0::di, STM::uo),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    Value = MR_STM_read_var(TVar, STM0);
    STM = STM0;
").

:- pragma foreign_proc("C",
    stm_create_transaction_log(STM::uo),
    [will_not_call_mercury, thread_safe],
"
    MR_STM_create_log(STM, NULL);
").

:- pragma foreign_proc("C",
    stm_create_nested_transaction_log(Parent::ui, Child::uo),
    [will_not_call_mercury, thread_safe],
"
    MR_STM_create_log(Child, Parent);
").

:- pragma foreign_proc("C",
    stm_discard_transaction_log(STM::di),
    [will_not_call_mercury, thread_safe],
"
    MR_STM_discard_log(STM);
").

:- pragma foreign_proc("C",
    stm_lock,
    [will_not_call_mercury, thread_safe],
"
    #ifdef MR_THREAD_SAFE
        MR_LOCK(&MR_STM_lock, \"stm_lock/0\");
    #endif
").

:- pragma foreign_proc("C",
    stm_unlock,
    [will_not_call_mercury, thread_safe],
"
    #ifdef MR_THREAD_SAFE
        MR_UNLOCK(&MR_STM_lock, \"stm_unlock/0\");
    #endif
").

:- pragma foreign_proc("C",
    stm_validate(STM::ui, IsValid::out),
    [will_not_call_mercury, thread_safe],
"
    IsValid = MR_STM_validate(STM);
").

:- pragma foreign_proc("C",
    stm_commit(STM::ui),
    [will_not_call_mercury, thread_safe],
"
    MR_STM_commit(STM);
").

%-----------------------------------------------------------------------------%

:- pragma foreign_proc("C",
    stm_block(_STM::ui),
    [will_not_call_mercury, thread_safe],
"
").

%-----------------------------------------------------------------------------%
%
% Retry
%

retry(_) :-
    throw(rollback_retry).

%-----------------------------------------------------------------------------%
%
% Atomic transactions
%

:- pragma promise_pure(atomic_transaction/4).
atomic_transaction(Goal, Result, !IO) :-
    impure atomic_transaction_impl(Goal, Result). 

:- impure pred atomic_transaction_impl(pred(T, stm, stm), T).
:- mode atomic_transaction_impl(in(pred(out, di, uo) is det), out)
    is det.

atomic_transaction_impl(Goal, Result) :-
    impure stm_create_transaction_log(STM0),
    promise_equivalent_solutions [Result0, STM] (
        unsafe_try_stm(call_atomic_goal(Goal), Result0, STM0, STM)
    ),
    (
        Result0 = succeeded(Result)
    ;
        Result0 = exception(Excp),
        ( Excp = univ(rollback_invalid_transaction) ->
            impure stm_discard_transaction_log(STM),
            impure atomic_transaction_impl(Goal, Result)
        ; Excp = univ(rollback_retry) ->
            impure stm_lock,
            impure stm_validate(STM, IsValid),
            (
                IsValid = stm_transaction_valid,
                % NOTE: stm_block is responsible for releasing the STM lock.
                impure stm_block(STM)
            ;
                IsValid = stm_transaction_invalid,
                impure stm_unlock
            ),
            impure stm_discard_transaction_log(STM),
            impure atomic_transaction_impl(Goal, Result)
        ;
            impure stm_lock,
            impure stm_validate(STM, IsValid),
            impure stm_unlock,
            (
                IsValid = stm_transaction_valid,
                rethrow(Result0)
            ;
                IsValid = stm_transaction_invalid,
                impure stm_discard_transaction_log(STM),
                impure atomic_transaction_impl(Goal, Result)
            )
        )
    ).

:- pragma promise_pure(call_atomic_goal/4).
:- pred call_atomic_goal(pred(T, stm, stm), T, stm, stm).
:- mode call_atomic_goal(in(pred(out, di, uo) is det), out, di, uo)
    is det.

call_atomic_goal(Goal, Result, !STM) :-
    Goal(Result, !STM),
    impure stm_lock,
    impure stm_validate(!.STM, IsValid),
    (
        IsValid = stm_transaction_valid,
        impure stm_commit(!.STM),
        impure stm_unlock
    ;
        IsValid = stm_transaction_invalid,
        impure stm_unlock,
        throw(rollback_invalid_transaction)
    ).

%----------------------------------------------------------------------------%
:- end_module stm_builtin.
%----------------------------------------------------------------------------%
