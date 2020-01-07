%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Test case for spurious errors if there are predicates
% module1.p and module2.module1.p.

:- module nested_module_bug.

:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module list.
:- import_module nested_module_bug.parser.
:- import_module parser.

main -->
    { parse_tokens("foo", [1, 2], List) },
    io__write(List),
    io__nl.

    :- module nested_module_bug.parser.

    :- interface.

    :- pred parse_tokens(string::in, list(int)::in, list(int)::out) is det.

    :- implementation.

    parse_tokens(_, X, X).

    :- end_module nested_module_bug.parser.
