% crypt
%
% Cryptomultiplication:
% Find the unique answer to:
%	OEE
%	 EE
% 	---
%      EOEE
%      EOE
%      ----
%      OOEE
%
% where E=even, O=odd.
% This program generalizes easily
% to any such problem.
% Originally written by Peter Van Roy

:- module crypt.

:- interface.

:- import_module list, int, io, printlist.

:- pred main(io__state, io__state).
:- mode main(di, uo) is nondet.

:- pred main1(list(int)).
:- mode main1(out) is nondet.

:- pred main3(list(int), io__state, io__state).
:- mode main3(out, di, uo) is nondet.

:- implementation.

main --> main3(_).

:- import_module require.

main1(Out) :-	
	crypt(Out).

main3(Out) -->
	{ main1(Out) },
	print_list(Out).

:- pred crypt(list(int)).
:- mode crypt(out) is nondet.

:- pred sum2(list(int), list(int), list(int)).
:- mode sum2(in, in, out) is det.

:- pred sum2(list(int), list(int), int, list(int)).
:- mode sum2(in, in, in, out) is det.

:- pred mult(list(int), int, list(int)).
:- mode mult(in, in, out) is det.

:- pred mult(list(int), int, int, list(int)).
:- mode mult(in, in, in, out) is det.

:- pred zero(list(int)).
:- mode zero(in) is semidet.

:- pred odd(int).
:- mode odd(in) is semidet.
:- mode odd(out) is nondet.

:- pred even(int).
:- mode even(in) is semidet.
:- mode even(out) is nondet.

:- pred lefteven(int).
:- mode lefteven(in) is semidet.
:- mode lefteven(out) is nondet.

crypt([A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P]) :-
	odd(A), even(B), even(C), even(E),
	mult([C, B, A], E, [I, H, G, F | X]),
	lefteven(F), odd(G), even(H), even(I), zero(X), lefteven(D),
	mult([C, B, A], D, [L, K, J | Y]),
	lefteven(J), odd(K), even(L), zero(Y),
	sum2([I, H, G, F], [0, L, K, J], [P, O, N, M | Z]),
	odd(M), odd(N), even(O), even(P), zero(Z).
	% write(' '), write(A), write(B), write(C), nl,
	% write('  '), write(D), write(E), nl,
	% write(F), write(G), write(H), write(I), nl,
	% write(J), write(K), write(L), nl,
	% write(M), write(N), write(O), write(P), nl.

% In the usual source this predicate is named sum. However, sum is a
% language construct in NU-Prolog, and cannot be defined as a predicate.
% If you try, nc comes up with an obscure error message.

sum2(AL, BL, CL) :-
	sum2(AL, BL, 0, CL).

sum2([], [], Carry, Cs) :-
	( Carry = 0 ->
		Cs = []
	;
		Cs = [Carry]
	).
sum2([], [B | BL], Carry, Cs) :-
	( Carry = 0 ->
		Cs = [B | BL]
	;
		X is B + Carry,
		NewCarry is X // 10,
		C is X mod 10,
		sum2([], BL, NewCarry, CL),
		Cs = [C | CL]
	).
sum2([A | AL], [], Carry, Cs) :-
	( Carry = 0 ->
		Cs = [A | AL]
	;
		X is A + Carry,
		NewCarry is X // 10,
		C is X mod 10,
		sum2([], AL, NewCarry, CL),
		Cs = [C | CL]
	).
sum2([A | AL], [B | BL], Carry, Cs) :-
	X1 is A + B,
	X is X1 + Carry,
	C is X mod 10,
	NewCarry is X // 10,
	sum2(AL, BL, NewCarry, CL),
	Cs = [C | CL].

mult(AL, D, BL) :- mult(AL, D, 0, BL).

mult([A | AL], D, Carry, [B | BL] ) :-
	X1 is A * D,
	X is X1 + Carry,
	B is X mod 10,
	NewCarry is X // 10,
	mult(AL, D, NewCarry, BL).
mult([], _, Carry, [C, Cend]) :-
	C is Carry mod 10,
	Cend is Carry // 10.

zero([]).
zero([0 | L]) :- zero(L).

odd(1).
odd(3).
odd(5).
odd(7).
odd(9).

even(0).
even(2).
even(4).
even(6).
even(8).

lefteven(2).
lefteven(4).
lefteven(6).
lefteven(8).
