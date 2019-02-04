%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
:- module nasty_nondet.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module int.
:- import_module list.
:- import_module solutions.

:- pred p(int::in, int::out) is multi.
:- pred q(int::in, int::out) is multi.

p(Z, Y) :-
    (if some [X, R] (
        (X = 1 ; X = 2),
        q(Z, R),
        X = R
    )
    then
        Y = X * X + R
    else
        Y = 42
    ).

q(_, 0).
q(_, 1).
q(_, 2).

main -->
    { solutions(p(100), List) },
    write_int_list(List).

:- pred write_int_list(list(int)::in, io__state::di, io__state::uo) is det.

write_int_list([]) --> [].
write_int_list([X | Xs]) -->
    io__write_int(X),
    io__write_string("\n"),
    write_int_list(Xs).
