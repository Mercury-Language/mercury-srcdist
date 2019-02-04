%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Compiling this module should generate an error message since
% it tries to cast a non-standard func inst to ground.

:- module ho_default_func_1.

:- interface.
:- import_module io.

:- pred main(io__state, io__state).
:- mode main(di, uo) is det.

:- implementation.

:- import_module int.
:- import_module univ.

main -->
    { baz(foo, F) },
    io__write_int(F(42)), nl.

:- func foo(int) = int.
foo(X) = X + 1.

:- func bar(int) = int.
:- mode bar(out) = in is det.
bar(X) = X + 1.

:- pred baz(T::in, T::out) is det.
baz(X, Y) :-
    ( univ_to_type(univ(bar), Y0) ->
        Y = Y0
    ;
        Y = X
    ).
