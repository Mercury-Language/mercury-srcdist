%------------------------------------------------------------------------------%
% string_to_float.m
% Ralph Becket <rafe@cs.mu.oz.au>
% Mon Feb 11 17:52:44 EST 2002
% vim: ft=mercury ff=unix ts=4 sw=4 et tw=0 wm=0
%
%------------------------------------------------------------------------------%

:- module string_to_float.

:- interface.

:- import_module io.



:- pred main(io::di, io::uo) is det.

%------------------------------------------------------------------------------%
%------------------------------------------------------------------------------%

:- implementation.

:- import_module list, string, float.

%------------------------------------------------------------------------------%

main -->
    test("1.23"),
    test("x1.23"),
    test("1.23x"),
    test("x1.23x"),
    test(" 1.23"),
    test("1.23 "),
    test(" 1.23 "),
    test("1"),
    test("-1"),
    test("+1"),
    test("0"),
    test("+0"),
    test("-0"),
    test("-"),
    test("+"),
    test(" "),
    test("").

:- pred test(string::in, io::di, io::uo) is det.

test(S) -->
    io__format("string__to_float(\"%s\") %s\n",
        [ s(S),
          s( if   string__to_float(S, X)
             then string__format("= %f", [f(X)])
             else "FAILS"
          )
        ]).

%------------------------------------------------------------------------------%
%------------------------------------------------------------------------------%
