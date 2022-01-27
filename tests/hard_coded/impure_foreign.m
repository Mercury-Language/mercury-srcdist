:- module impure_foreign.

:- interface.

:- import_module io.

:- impure pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module require.

main -->
		% Inlining this call forces recomputation
		% of purity for main/2 (because of the
		% `:- pragma promise_pure').
		% In some versions of this compiler, this
		% recomputation would erroneously infer
		% that the inlined calls to incr/1 below
		% were `pure'. Duplicate call elimination
		% would then remove all but one of them.
	{ unsafe_get(Val0) },

	io__write_int(Val0),
	io__nl,

	{ impure incr(_) },
	{ impure incr(_) },
	{ impure incr(_) },
	{ semipure get(Val) },
	io__write_int(Val),
	io__nl.

:- pragma foreign_decl("C",
"
	int counter;
").

:- pragma foreign_code("C",
"
	int counter = 1;
").

:- pragma foreign_code("C#", "static int counter = 1;").

:- pragma foreign_code("Java", "static int counter = 1;").

:- impure pred incr(int::out) is det.

incr(_::out) :- error("incr/1 called for language other than C").

:- pragma foreign_proc("C", incr(Val::out), [will_not_call_mercury],
			"counter++; Val = counter;").
:- pragma foreign_proc("C#", incr(Val::out), [will_not_call_mercury],
			"counter++; Val = counter;").
:- pragma foreign_proc("Java", incr(Val::out), [will_not_call_mercury],
			"counter++; Val = counter;").
:- pragma foreign_proc("Erlang", incr(Val::out), [will_not_call_mercury],
			"case get(counter) of
			    undefined -> Val = 2;
			    C -> Val = C + 1
			 end,
			 put(counter, Val)").

:- semipure pred get(int::out) is det.

get(_::out) :- error("get/1 called for language other than C").

:- pragma foreign_proc("C", get(Val::out),
		[will_not_call_mercury, promise_semipure],
		"Val = counter").
:- pragma foreign_proc("C#", get(Val::out),
		[will_not_call_mercury, promise_semipure],
		"Val = counter;").
:- pragma foreign_proc("Java", get(Val::out),
		[will_not_call_mercury, promise_semipure],
		"Val = counter;").
:- pragma foreign_proc("Erlang", get(Val::out),
		[will_not_call_mercury, promise_semipure],
		"Val = case get(counter) of
		    undefined -> 1;
		    C -> C
		end").
	
:- pred unsafe_get(int::out) is det.
:- pragma promise_pure(unsafe_get/1).

unsafe_get(X) :- semipure get(X).
