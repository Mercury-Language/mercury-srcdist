%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% This tests two successive disjunctions within the same clause.

:- module disj_disj.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module list.
:- import_module pair.
:- import_module solutions.

main -->
    { solutions((pred(Pair::out) is multi :-
        Pair = X-Y, q(X, Y)), List) },
    print_list(List).

:- pred print_list(list(pair(int))::in, io__state::di, io__state::uo) is det.

print_list([]) --> [].
print_list([X-Y | Rest]) -->
    io__write_string("X = "),
    io__write_int(X),
    io__write_string(", Y = "),
    io__write_int(Y),
    io__write_string("\n"),
    print_list(Rest).

:- pred q(int::out, int::out) is multidet.

q(X, Y) :-
    ( X = 1 ; X = 2 ),
    ( Y = 41 ; Y = 42 ).
