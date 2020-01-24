%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module parsing_bug.

:- interface.

:- import_module list.
:- import_module set.

:- func { list(T) } = set(T).
:- func (set(T) /\ set(T)) = set(T).
:- func (set(T) \/ set(T)) = set(T).
:- func (set(T) - set(T)) = set(T).

:- implementation.

{ List } = Set :-
    list_to_set(List, Set).

A /\ B = C :-
    set__intersect(A, B, C).

A \/ B = C :-
    set__union(A, B, C).

A - B = C :-
    set__difference(A, B, C).
