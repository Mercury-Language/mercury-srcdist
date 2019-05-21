%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% A test of the C interface.

:- module pragma_c_code.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module int.
:- import_module list.
:- import_module math.
:- import_module string.

main -->
    c_write_string("Hello, world\n"),
    % test integer and multiple output args handling
    { c_incr_and_decr(42, Y1, Y2) },
    c_write_integer(Y1),
    c_write_integer(Y2),
    { c_get_meaning_of_life(Z) }, % test floats
    c_write_float(Z),
    c_write_cosine(Z).      % test c_header_code

:- pragma foreign_decl("C", "#include <stdio.h>").

:- pred c_write_string(string::in, io__state::di, io__state::uo) is det.

:- pragma foreign_proc("C",
    c_write_string(Message::in, IO0::di, IO::uo),
    [promise_pure, will_not_call_mercury],
"
    printf(""%s"", Message);
    IO = IO0;
").
c_write_string(Str) -->
    io__write_string(Str).

:- pred c_incr_and_decr(int::in, int::out, int::out) is det.

:- pragma foreign_proc("C",
    c_incr_and_decr(Int0::in, Int1::out, Int2::out),
    [will_not_call_mercury, promise_pure],
"
    Int1 = Int0 + 1;
    Int2 = Int0 - 1;
").
c_incr_and_decr(A, A + 1, A - 1).

:- pred c_write_integer(int::in, io__state::di, io__state::uo) is det.

:- pragma foreign_proc("C",
    c_write_integer(Int::in, IO0::di, IO::uo),
    [will_not_call_mercury, promise_pure],
"
    printf(""%ld\\n"", (long) Int);
    IO = IO0;
").
c_write_integer(Int) -->
    io__format("%d\n", [i(Int)]).

:- pred c_get_meaning_of_life(float::out) is det.

:- pragma foreign_proc("C",
    c_get_meaning_of_life(X::out),
    [will_not_call_mercury, promise_pure],
"
    X = 42.0;
").
c_get_meaning_of_life(42.0).

:- pred c_write_float(float::in, io__state::di, io__state::uo) is det.

:- pragma foreign_proc("C",
    c_write_float(X::in, IO0::di, IO::uo),
    [will_not_call_mercury, promise_pure],
"
    printf(""%.1f\\n"", X);
    IO = IO0;
").
c_write_float(F) -->
    io__format("%.1f\n", [f(F)]).

:- pragma foreign_decl("C", "#include <math.h>").

:- pred c_write_cosine(float::in, io__state::di, io__state::uo) is det.

:- pragma foreign_proc("C",
    c_write_cosine(X::in, IO0::di, IO::uo),
    [will_not_call_mercury, promise_pure],
"
    printf(""%.3f\\n"", cos(X));
    IO = IO0;
").
c_write_cosine(F) -->
    io__format("%.3f\n", [f(cos(F))]).
