:- module find_origin.

%
% Tests 4 cases of dependency tracking : 
%   1. When the subterm is an input and the origin is the output of a sibling.
%   2. When the subterm is an input and the origin is the input from the 
%      parent.
%   3. When the subterm is an output and the origin is an input argument of the
%      same procedure.
%   4. When the subterm is an output and the origin is an output of a child.
%   
% These 4 cases are tested with a monomorphic predicate and a polymorphic 
% predicate.
% 

:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module int, list.

main(!IO) :-
	monotest(X, _),
	polytest("hello", Y, Z),
	tracetest(U, V),
	write(U, !IO),
	write(V, !IO),
	write(X, !IO),
	write(Y, !IO),
	write(Z, !IO).

:- type t ---> t(int).

:- pred monotest(t::out, int::out) is det.

monotest(B, I) :-
	make_int(I),
	monotest1(C),
	C = t(X),
	(
		X > 0
	->
		monotest2(C, D)
	;
		C = D
	),
	D = t(Y),
	(
		Y =< 0
	->
		D = E
	;
		monotest3(D, E)
	),
	monotest4(E, B).

:- pred monotest1(t::out) is det.

monotest1(t(101)).

:- pred monotest2(t::in, t::out) is det.

monotest2(A, A).

:- pred monotest3(t::in, t::out) is det.

monotest3(A, B) :-
	L = [A, t(1), t(2)],
	reverse(L, LR),
	(
		LR = [_, _, E]
	->
		B = E
	;
		B = t(1)
	).

:- pred monotest4(t::in, t::out) is det.

monotest4(A, B) :-
	L = [t(1), t(2), A, t(3)],
	filter(unify(A), L, L1),
	(
		L1 = [C]
	->
		B = C
	;
		B = t(4)
	).

:- type u(T) ---> u(T); v(T).

:- pred polytest(T::in, u(T)::out, int::out) is det.

polytest(A, B, I) :-
	make_int(I1),
	polytest1(A, C),
	(
		C = u(_)
	->
		polytest2(C, D)
	;
		C = D
	),
	I2 = 2 + I1 * 2,
	(
		D = v(X),
		u(X) = E,
		I3 = I2 + 2
	;
		D = u(_),
		I3 = I1 + 2,
		polytest3(D, E)
	),
	I4 = I3 mod 3 + I1,
	polytest4(E, B),
	I = I4 * 5.

:- pred polytest1(T::in, u(T)::out) is det.

polytest1(X, u(X)).

:- pred polytest2(T::in, T::out) is det.

polytest2(A, A).

:- pred polytest3(T::in, T::out) is det.

polytest3(A, B) :-
	L = [A, A, A],
	reverse(L, LR),
	(
		LR = [_, _, E]
	->
		B = E
	;
		B = A
	).

:- pred polytest4(T::in, T::out) is det.

polytest4(A, B) :-
	L = [v(A), v(A), v(A), u(A)],
	filter(unify(u(A)), L, L1),
	(
		L1 = [u(C)]
	->
		B = C
	;
		B = A
	).

:- pred tracetest(t::out, int::out) is det.

tracetest(B, I) :-
	make_int(I0),
	tracetest1(C),
	I1 = I0 - 5,
	(
		I0 > 0
	->
		tracetest2(C, D),
		I2 = I1 + 6
	;
		C = D,
		I2 = I0 + 9
	),
	I3 = I2 + I0 + I1,
	I4 = I3 * 2,
	(
		I0 =< 0
	->
		D = E,
		I6 = I4 + 2
	;
		I5 = I4 + 3,
		tracetest3(D, E),
		I6 = I5 - 5
	),
	I7 = I6 + 1,
	tracetest4(E, B),
	I = I7 + 1.

:- pred tracetest1(t::out) is det.

tracetest1(t(101)).

:- pred tracetest2(t::in, t::out) is det.

tracetest2(A, A).

:- pred tracetest3(t::in, t::out) is det.

tracetest3(A, B) :-
	L = [t(1), t(2), A],
	(
		L = [_, _, E],
		E = A
	->
		B = E
	;
		B = t(1)
	).

:- pred tracetest4(t::in, t::out) is det.

tracetest4(A, B) :-
	L = [t(1), t(2), A, t(3)],
	(
		L = [_, _, C, _],
		C = A
	->
		B = C
	;
		B = t(4)
	).

:- pred make_int(int::out) is det.

make_int(1).
