% The compiler used to issue a spurious warning
% about `M' having an unbound type.
:- module quantifier_warning.
:- interface.
:- import_module io.
:- pred main(io__state::di, io__state::uo) is det.
:- implementation.
:- import_module std_util, int, bool.

main -->
	{ p(1, R) },
	io__write(R),
	io__nl.

:- pred p(int::in, bool::out) is det.

p(N, R) :-
	(
		some [M] (
			M > 5,
			q(N, M)
		)
	->
		R = yes
	;
		R = no
	).

:- pred q(int::in, int::out) is nondet.

q(0, 0).
q(1, 1).
q(1, 2).
q(1, 3).
q(2, 2).
q(2, 4).
