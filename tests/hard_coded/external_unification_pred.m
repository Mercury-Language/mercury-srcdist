% The mercury compiler from 2003-12-01 generated uncompilable il code for this
% test case.
:- module external_unification_pred.

:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

    :- module external_unification_pred.sub.

    :- interface.

    :- type ft.
    :- func create_ft(int) = ft.

    :- implementation.

    :- pragma foreign_type(c, ft, "int") where equality is unify_ft.
    :- pragma foreign_type(il, ft, "valuetype [mscorlib]System.Int32")
		    where equality is unify_ft.
    :- pragma foreign_type("C#", ft, "int") where equality is unify_ft.
    :- pragma foreign_type(java, ft, "Integer") where equality is unify_ft.
    :- pragma foreign_type(erlang, ft, "") where equality is unify_ft.

    :- pred unify_ft(ft::in, ft::in) is semidet.

    :- pragma foreign_proc("C", unify_ft(X::in, Y::in), [promise_pure],
    "
	    SUCCESS_INDICATOR = (X == Y);
    ").
    :- pragma foreign_proc("C#", unify_ft(X::in, Y::in), [promise_pure],
    "
	    SUCCESS_INDICATOR = (X == Y);
    ").
    :- pragma foreign_proc("Java", unify_ft(X::in, Y::in), [promise_pure],
    "
	    SUCCESS_INDICATOR = (X == Y);
    ").
    :- pragma foreign_proc("Erlang", unify_ft(X::in, Y::in), [promise_pure],
    "
	    SUCCESS_INDICATOR = (X =:= Y)
    ").

    :- pragma foreign_proc("C", create_ft(X::in) = (Y::out), [promise_pure],
    "
	    Y = X;
    ").
    :- pragma foreign_proc("C#", create_ft(X::in) = (Y::out), [promise_pure],
    "
	    Y = X;
    ").
    :- pragma foreign_proc("Java", create_ft(X::in) = (Y::out), [promise_pure],
    "
	    Y = X;
    ").
    :- pragma foreign_proc("Erlang", create_ft(X::in) = (Y::out), [promise_pure],
    "
	    Y = X
    ").
    :- end_module external_unification_pred.sub.

:- import_module external_unification_pred.sub.

main(!IO) :-
    X = create_ft(1),
    Y = create_ft(2),
    ( X = Y ->
    	io__write_string("true.\n", !IO)
    ;
    	io__write_string("false.\n", !IO)
    ).

:- end_module external_unification_pred.
