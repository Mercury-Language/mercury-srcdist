%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Tests module qualification of types, insts and modes.
% Should get syntax errors if the qualified types, insts and modes are
% not correctly parsed, module qualification errors if the correct match
% cannot be determined or type or determinism errors if the wrong type
% or mode is chosen.

:- module tim_qual1.

:- interface.

:- import_module io.
:- import_module tim_qual2.
:- import_module tim_qual3.

:- pred main(io__state::di, io__state::uo) is det.

:- pred test(tim_qual2__test_type::tim_qual3__test_mode) is det.

:- pred test2(tim_qual2__test_type::test_mode2) is det.

:- mode test_mode2 == tim_qual2__inst1 >> tim_qual3__inst1.

:- implementation.

main -->
    ( { test(ok), test2(ok) } ->
        io__write_string("ok\n")
    ;
        io__write_string("error\n")
    ).

test2(ok).

test(ok).
