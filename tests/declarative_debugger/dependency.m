%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module dependency.

:- interface.

:- import_module io.
:- pred main(io::di, io::uo) is cc_multi.

:- implementation.

:- import_module bool.
:- import_module int.
:- import_module list.
:- import_module pair.
:- import_module require.

:- pragma promise_pure(main/2).
main(!IO) :-
    impure turn_on_origin_debug,
    test(L),
    io.write(L, !IO),
    io.write_string(".\n", !IO).

:- pred test(list(int)::out) is cc_multi.

test(L) :-
    p(U),
    ( if U = 1 then
        A = 1
    else
        A = U
    ),
    q(V),
    (
        V = no,
        r(A, [3, 4], BX),
        BX = B - _
    ;
        V = yes,
        B = 4
    ),
    AB = {A, B},
    (
        A = 2,
        C = 5,
        D = []
    ;
        C = 6,
        AB = {Aprime, Bprime},
        D = [Aprime, Bprime]
    ),
    L = [A, B, C | D].

:- pred p(int::out) is det.

p(1).

:- pred q(bool::out) is det.

q(no).

:- pred r(int::in, list(T)::in, pair(T)::out) is det.

r(A, L, BX) :-
    ( if
        A = 1,
        L = [E1, E2 | _]
    then
        BX = E1 - E2
    else
        error("r: bad input")
    ).

:- impure pred turn_on_origin_debug is det.

:- pragma foreign_proc("C",
    turn_on_origin_debug,
    [will_not_call_mercury],
"
    extern  int MR_DD_debug_origin;

    MR_DD_debug_origin = 1;
").
