%   nreverse
%
%   David H. D. Warren
%
%   "naive"-reverse a list of 30 integers

:- module nrev.

:- interface.

:- import_module list, int, io, printlist.

:- pred main(io__state, io__state).
:- mode main(di, uo) is det.

:- pred main1(list(int)).
:- mode main1(out) is det.

:- pred main3(list(int), io__state, io__state).
:- mode main3(out, di, uo) is det.

:- implementation.

main --> main3(_).

main1(Out) :-	
	data(Data),
	nreverse(Data, Out).

main3(Out) -->
	{ main1(Out) },
	print_list(Out).

:- pred data(list(int)).
:- mode data(out) is det.

:- pred nreverse(list(int), list(int)).
:- mode nreverse(in, out) is det.

:- pred concatenate(list(int), list(int), list(int)).
:- mode concatenate(in, in, out) is det.

data([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
	16,17,18,19,20,21,22,23, 24,25,26,27,28,29,30]).

nreverse([X|L0], L) :-
	nreverse(L0, L1), concatenate(L1, [X], L).
nreverse([], []).

concatenate([X|L1], L2, [X|L3]) :-	
	concatenate(L1, L2, L3).
concatenate([], L, L).
