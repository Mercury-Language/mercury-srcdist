%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module complex_constraint.
:- interface.

:- import_module list.
:- import_module map.
:- import_module pair.

:- typeclass foo(A, B, C) <= (A -> B) where [].
:- typeclass bar(B, C) <= (B -> C) where [].

:- pred t(A) <= (foo(A, B, C), bar(B, C)).
:- mode t(in) is semidet.

:- pred u(A) <= (foo(A, pair(W, X), map(Y, Z)), bar(W, Y), bar(X, list(Z))).
:- mode u(in) is semidet.

:- implementation.

t(_) :- semidet_succeed.
u(_) :- semidet_succeed.
