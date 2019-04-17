%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Tom says "The following module loops forever on mundook".

:- module string_loop.

:- interface.

:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module list.
:- import_module float.
:- import_module string.

main(IO0, IO) :-
    string__format("%ei\n", [f(0.0)], Str),
    io__write_string(Str, IO0, IO).
