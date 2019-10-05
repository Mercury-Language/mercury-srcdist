%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module conflicting_tabling_pragmas.

:- interface.

:- func fac(int) = int.

:- implementation.

:- import_module int.

:- pragma memo(fac/1).
:- pragma loop_check(fac/1).

fac(X) = Y :-
    ( X =< 0 ->
        Y = 0
    ;
        Y = X * fac(X - 1)
    ).
