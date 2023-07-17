%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Tests that we write out error messages for things
% that shoudn't occur in module interfaces.

:- module not_in_interface.

:- interface.

:- import_module io.

:- initialise bar/2.

:- mutable(hello, int, 42, ground, [untrailed]).

:- initialise bar/2.

:- pred bar(io::di, io::uo) is det.

:- pragma inline(foo/2).
:- pred foo(int::in, int::out) is det.

foo(X, X).

:- implementation.

bar(!IO).
