%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module family.
:- interface.
:- import_module io.
:- pred main(io__state::di, io__state::uo) is det.
:- implementation.

main -->
    {
        half_siblings(b, c)
    ->
        Msg = "Ok"
    ;
        Msg = "Missing answer: half_siblings(b, c)"
    },
    io__write_string(Msg),
    io__nl.

:- type person
    --->    a
    ;   b
    ;   c
    ;   m
    ;   f
    ;   s.

:- pred parent(person, person).
:- mode parent(out, out) is multi.
:- mode parent(in, out) is nondet.

parent(m, a).
parent(m, b).
parent(f, a).
parent(f, b).
parent(f, c).
parent(s, c).

:- pred male(person::in) is semidet.

male(f).
male(s).

:- pred female(person::in) is semidet.

female(X) :-
    \+ male(X).

:- pred common_mother(person::out, person::out) is nondet.
:- pred common_father(person::out, person::out) is nondet.

common_mother(A, B) :-
    parent(M, A),
    parent(M, B),
    \+ A = B,
    female(M).

common_father(A, B) :-
    parent(F, A),
    parent(A, B),       % Oops, that's a bug.
    \+ A = B,
    male(F).

:- pred siblings(person::out, person::out) is nondet.

siblings(A, B) :-
    common_mother(A, B).
siblings(A, B) :-
    common_father(A, B).

:- pred full_siblings(person::out, person::out) is nondet.

full_siblings(A, B) :-
    common_mother(A, B),
    common_father(A, B).

:- pred half_siblings(person::out, person::out) is nondet.

half_siblings(A, B) :-
    siblings(A, B),
    \+ full_siblings(A, B).
