:- module tak.

:- interface.

:- import_module int, char, list, graph, require, std_util, io.

:- pred main1(int).
:- mode main1(out) is det.

:- pred main3(int, io__state, io__state).
:- mode main3(out, di, uo) is det.

:- pred main(io__state, io__state).
:- mode main(di, uo) is det.

:- implementation.

main --> main3(_).

main1(Out) :-
	tak(18, 12, 6, Out).

main3(Out) -->
	{ tak(18, 12, 6, Out) },
	io__write_int(Out),
	io__write_string("\n").

:- pred tak(int, int, int, int).
:- mode tak(in, in, in, out) is det.

tak(X, Y, Z, A) :-
	(X =< Y ->
		Z = A
	;
		X1 is X - 1,
		tak(X1, Y, Z, A1),
		Y1 is Y - 1,
		tak(Y1, Z, X, A2),
		Z1 is Z - 1,
		tak(Z1, X, Y, A3),
		tak(A1, A2, A3, A)
	).
