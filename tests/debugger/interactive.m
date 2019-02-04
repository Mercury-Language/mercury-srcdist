%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
:- module interactive.

:- interface.

:- import_module io.
:- import_module list.

:- pred main(io__state, io__state).
:- mode main(di, uo) is cc_multi.

    % exported for use with interactive queries in the debugger
:- pred queen(list(int), list(int)).
:- mode queen(in, out) is nondet.

    % exported for use with interactive queries in the debugger
:- pred qperm(list(T), list(T)).
:- mode qperm(in, out) is nondet.

:- implementation.

:- import_module int.

main -->
    ( { data(Data), queen(Data, Out) } ->
        print_list(Out)
    ;
        io__write_string("No solution\n")
    ).

:- pred data(list(int)).
:- mode data(out) is det.

:- pred qdelete(T, list(T), list(T)).
:- mode qdelete(out, in, out) is nondet.

:- pred safe(list(int)).
:- mode safe(in) is semidet.

:- pred nodiag(int, int, list(int)).
:- mode nodiag(in, in, in) is semidet.

data([1, 2, 3, 4, 5]).

queen(Data, Out) :-
    qperm(Data, Out),
    safe(Out).

qperm([], []).
qperm([X | Y], K) :-
    qdelete(U, [X | Y], Z),
    K = [U | V],
    qperm(Z, V).

qdelete(A, [A | L], L).
qdelete(X, [A | Z], [A | R]) :-
    qdelete(X, Z, R).

safe([]).
safe([N | L]) :-
    nodiag(N, 1, L),
    safe(L).

nodiag(_, _, []).
nodiag(B, D, [N | L]) :-
    NmB is N - B,
    BmN is B - N,
    ( D = NmB ->
        fail
    ; D = BmN ->
        fail
    ;
        true
    ),
    D1 is D + 1,
    nodiag(B, D1, L).

:- pred print_list(list(int), io__state, io__state).
:- mode print_list(in, di, uo) is det.

print_list(Xs) -->
    (
        { Xs = [] }
    ->
        io__write_string("[]\n")
    ;
        io__write_string("["),
        print_list_2(Xs),
        io__write_string("]\n")
    ).

:- pred print_list_2(list(int), io__state, io__state).
:- mode print_list_2(in, di, uo) is det.

print_list_2([]) --> [].
print_list_2([X | Xs]) -->
    io__write_int(X),
    (
        { Xs = [] }
    ->
        []
    ;
        io__write_string(", "),
        print_list_2(Xs)
    ).
