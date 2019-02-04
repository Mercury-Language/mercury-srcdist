%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Regression test:
%
% This program uses a higher order function. Due to the way higher order
% types are represented as terms (which is quite different from any
% other type) manipulations of types that don't take this into account
% would make mistakes.
%
% The Mercury compiler of 20 December, 1996 failed to compile this,
% giving link errors.

:- module ho_func_reg.

:- interface.

:- import_module int.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- type bar == (func(int) = int).
:- inst bar == (func(in) = out is det).

:- func foo(bar, int) = int.
:- mode foo(in(bar), in) = out is det.

:- func next(int) = int.

:- implementation.

main -->
    io__write_string("I seem to have compiled ok.\n"),
    { Eight = foo(next, 7) },
    io__write_int(Eight),
    io__write_string(" seems to be the answer\n").

next(I) = I + 1.

foo(F, I) = apply(F, I).
