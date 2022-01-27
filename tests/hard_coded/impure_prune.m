:- module impure_prune.
:- interface.
:- import_module io.

:- pred main(state::di, state::uo) is det.

:- implementation.
:- import_module int, require.

:- pragma promise_pure(main/2).

main -->
	( { impure do_impure_stuff, fail } ->
		{ error("not reached") }
	;
		{ semipure get_counter(X) },
		print("X = "), print(X), nl
	).

:- impure pred do_impure_stuff is multi.
do_impure_stuff :-
	impure bump_counter.
do_impure_stuff :-
	impure bump_counter.
do_impure_stuff :-
	impure bump_counter.

:- impure pred bump_counter is det.
bump_counter :-
	semipure get_counter(X),
	impure set_counter(X + 1).

:- semipure pred get_counter(int::out) is det.
:- impure pred set_counter(int::in) is det.

:- pragma foreign_decl("C", "extern MR_Integer counter;").
:- pragma foreign_code("C", "MR_Integer counter = 0;").
:- pragma foreign_proc("C",
	get_counter(X::out),
	[will_not_call_mercury, promise_semipure],
"
	X = counter;
").
:- pragma foreign_proc("C",
	set_counter(X::in),
	[will_not_call_mercury],
"
	counter = X;
").

:- pragma foreign_code("C#", "static int counter = 0;").
:- pragma foreign_proc("C#",
	get_counter(X::out),
	[will_not_call_mercury, promise_semipure],
"
	X = counter;
").
:- pragma foreign_proc("C#", set_counter(X::in), [], "counter = X;").

:- pragma foreign_code("Java", "static int counter = 0;").
:- pragma foreign_proc("Java",
	get_counter(X::out),
	[will_not_call_mercury, promise_semipure],
"
	X = counter;
").
:- pragma foreign_proc("Java", set_counter(X::in), [], "counter = X;").

:- pragma foreign_proc("Erlang",
	get_counter(X::out),
	[will_not_call_mercury, promise_semipure],
"
	X = case get(counter) of
	    undefined -> 0;
	    C -> C
	end
").
:- pragma foreign_proc("Erlang",
	set_counter(X::in),
	[will_not_call_mercury],
"
	put(counter, X)
").
