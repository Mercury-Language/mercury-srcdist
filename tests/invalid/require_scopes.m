% vim: ft=mercury ts=4 sw=4 et

:- module require_scopes.

:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module int.
:- import_module list.
:- import_module string.
:- import_module solutions.

:- type t
    --->    f1
    ;       f2
    ;       f3(int).

main(!IO) :-
    test_detism_scope(1, !IO),
    test_detism_scope(11, !IO),
    test_detism_scope(21, !IO),
    test_switch_scope(f1, !IO),
    test_switch_scope(f2, !IO),
    test_switch_scope(f3(10), !IO),
    test_switch_scope(f3(20), !IO).

:- pred test_detism_scope(int::in, io::di, io::uo) is det.

test_detism_scope(A, !IO) :-
    (
        require_det (
            A > 10
        ),
        B = A * 2,
        require_nondet (
            C = B mod 3,
            C = 1
        )
    ->
        X = C
    ;
        X = A
    ),
    io.format("test_detism_scope(%d) = %d\n", [i(A), i(X)], !IO).

:- pred test_switch_scope(t::in, io::di, io::uo) is det.

test_switch_scope(A, !IO) :-
    solutions(do_test_switch_scope(A), Solns),
    io.write_string("test_switch_scope(", !IO),
    io.write(A, !IO),
    io.write_string(") = ", !IO),
    io.write(Solns, !IO),
    io.nl(!IO).

:- pred do_test_switch_scope(t::in, int::out) is nondet.

do_test_switch_scope(A, X) :-
    require_complete_switch [A] (
        (
            A = f2,
            ( X = 1
            ; X = 2
            )
        ;
            A = f3(B),
            ( X = 3
            ; X = B
            ; X = B + 1
            )
        )
    ).

:- pred test_switch_arms_detism_scope(t::in, io::di, io::uo) is det.

test_switch_arms_detism_scope(A, !IO) :-
    solutions(do_test_switch_arms_detism_scope(A), Solns),
    io.write_string("test_switch_arms_detism_scope(", !IO),
    io.write(A, !IO),
    io.write_string(") = ", !IO),
    io.write(Solns, !IO),
    io.nl(!IO).

:- pred do_test_switch_arms_detism_scope(t::in, int::out) is nondet.

do_test_switch_arms_detism_scope(A, X) :-
    require_switch_arms_det [A] (
        (
            A = f1,
            B = 1
        ;
            A = f3(B),
            B > 10
        )
    ),
    require_switch_arms_semidet [B] (
        (
            B = 1,
            C = 101
        ;
            B = 2,
            C = 102
        ;
            B = 10,
            ( C = 110
            ; C = 120
            )
        ;
            B = 20,
            fail
        )
    ),
    (
        X = C
    ;
        X = 1000 + C
    ).
