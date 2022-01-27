%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module table_with_inline.

:- interface.

:- import_module int.

:- func foo(int) = int.

:- implementation.

:- pragma memo(foo/1).
:- pragma inline(foo/1).

foo(A) = A + A.
