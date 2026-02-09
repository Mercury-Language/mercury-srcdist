%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module inline_conflict.

:- interface.

:- pred foo(int::in, int::out) is det.

:- implementation.

foo(X, Y) :-
    bar(X, Y).

:- pred bar(int::in, int::out) is det.

:- pragma inline(bar/2).
:- pragma no_inline(bar/2).

bar(X, X).

:- pred baz(int::in, int::out) is det.
:- func baz(int, int) = int.

:- pragma inline(baz/2).

baz(X, X).
baz(X, _Y) = X.
