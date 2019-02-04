%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module mode_inf.
:- interface.
:- use_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- use_module array.
:- import_module int.
:- import_module solutions.

main -->
    { solutions((pred(X::out) is multi :- do_some_stuff(X)), L) },
    io__write_list(L, "\n", io__write), io__nl.

do_some_stuff(X) :-
    some_array_stuff(42, Y),
    some_backtracking_stuff(Y, X, _).

some_array_stuff(X, Y) :-
    array__init(40, 80, A0),
    array__set(37, X, A0, A1),
    array__lookup(A1, 37, Y).

some_backtracking_stuff(X, Y, Z) :- Y = X + 1, p(Z).
some_backtracking_stuff(X, Y, Z) :- Y = X + 2, p(Z).
some_backtracking_stuff(X, Y, Z) :- Y = X + 3, p(Z).

p(1).
p(2).
