%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module inference_test_2.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module int.

main -->
    main2.

:- typeclass foo(T) where [
    pred p(T::in, int::out) is det
].

:- instance foo(int) where [
    pred(p/2) is forty_two
].

% :- pred forty_two(int, int) is det.
:- mode forty_two(in, out) is det.

forty_two(X, Y) :-
    Y is X + 42.

% :- pred q(T) <= foo(T).
q(X) :-
    p(X, 42).

main2 -->
    ( { r(X), q(X) } ->
        print("yes\n")
    ;
        print("no\n")
    ).

% :- pred r(int).
r(0).
