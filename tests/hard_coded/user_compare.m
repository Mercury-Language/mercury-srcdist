:- module user_compare.

:- interface.

:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module int.

main -->
        { compare(Result, foo(1), foo(2)) },
        io__write(Result),
        io__nl,
        ( { unify(foo(1), foo(1)) } ->
                io__write_string("succeeded\n")
        ;
                io__write_string("failed\n")
        ),
	( { foreign(1) = foreign(1) } ->
                io__write_string("succeeded\n")
        ;
                io__write_string("failed\n")
        ),
	( { foreign(2) = foreign(3) } ->
                io__write_string("failed\n")
        ;
                io__write_string("succeeded\n")
        ),
	{ compare(Result2, foreign(3), foreign(2)) },
	io__write(Result2),
	io__nl.

:- type foo
        ---> foo(int)
        where comparison is compare_foo.

        % Reverse the comparison of the integers.
:- pred compare_foo(comparison_result::uo, foo::in, foo::in) is det.

compare_foo(Res, Foo1, Foo2) :-
        Res1 = promise_only_solution(
                (pred(Res0::uo) is cc_multi :-
                        Foo1 = foo(Int1),
                        Foo2 = foo(Int2),
                        compare(Res0, Int2, Int1)
                )
        ),
	Res = Res1.

:- type foreign.
:- pragma foreign_type(c, foreign, "int") where
		 equality is foreign_equals, comparison is foreign_compare.
:- pragma foreign_type(il, foreign, "int32") where
		 equality is foreign_equals, comparison is foreign_compare.
:- pragma foreign_type("C#", foreign, "int") where
		 equality is foreign_equals, comparison is foreign_compare.
:- pragma foreign_type("Java", foreign, "Integer") where
		 equality is foreign_equals, comparison is foreign_compare.
:- pragma foreign_type(erlang, foreign, "") where
		 equality is foreign_equals, comparison is foreign_compare.

:- pred foreign_equals(foreign::in, foreign::in) is semidet.
:- pragma foreign_proc(c, foreign_equals(Foreign1::in, Foreign2::in),
                [will_not_call_mercury, promise_pure],
"SUCCESS_INDICATOR = (Foreign1 == Foreign2);"
).
:- pragma foreign_proc("C#", foreign_equals(Foreign1::in, Foreign2::in),
                [will_not_call_mercury, promise_pure],
"SUCCESS_INDICATOR = (Foreign1 == Foreign2);"
).
:- pragma foreign_proc("Java", foreign_equals(Foreign1::in, Foreign2::in),
                [will_not_call_mercury, promise_pure],
"SUCCESS_INDICATOR = (Foreign1 == Foreign2);"
).
:- pragma foreign_proc("Erlang", foreign_equals(Foreign1::in, Foreign2::in),
                [will_not_call_mercury, promise_pure],
"SUCCESS_INDICATOR = (Foreign1 =:= Foreign2)"
).

:- pred foreign_compare `with_type` compare(foreign)
			`with_inst` compare.
foreign_compare(Result, Foreign1, Foreign2) :-
	foreign_compare_2(Result0, Foreign1, Foreign2),
	Result = ( Result0 < 0 -> (<) ; Result0 = 0 -> (=) ; (>) ).

        % Reverse the comparison of the integers.
:- pred foreign_compare_2(int::out, foreign::in, foreign::in) is det.
:- pragma foreign_proc(c, foreign_compare_2(Result::out, Foreign1::in,
			Foreign2::in),
                [will_not_call_mercury, promise_pure],
"Result = (Foreign1 < Foreign2 ? 1 : (Foreign1 == Foreign2 ? 0 : -1));"
).
:- pragma foreign_proc("C#", foreign_compare_2(Result::out, Foreign1::in,
			Foreign2::in),
                [will_not_call_mercury, promise_pure],
"Result = (Foreign1 < Foreign2 ? 1 : (Foreign1 == Foreign2 ? 0 : -1));"
).
:- pragma foreign_proc("Java", foreign_compare_2(Result::out, Foreign1::in,
			Foreign2::in),
                [will_not_call_mercury, promise_pure],
"Result = (Foreign1 < Foreign2 ? 1 : (Foreign1 == Foreign2 ? 0 : -1));"
).
:- pragma foreign_proc("Erlang", foreign_compare_2(Result::out, Foreign1::in,
			Foreign2::in),
                [will_not_call_mercury, promise_pure],
"Result = if
    Foreign1 < Foreign2 -> 1;
    Foreign1 =:= Foreign2 -> 0;
    true -> -1
end"
).

:- func foreign(int) = foreign.
:- pragma foreign_proc(c, foreign(Int::in) = (Foreign::out),
                [will_not_call_mercury, promise_pure],
"Foreign = Int;"
).
:- pragma foreign_proc("C#", foreign(Int::in) = (Foreign::out),
                [will_not_call_mercury, promise_pure],
"Foreign = Int;"
).
:- pragma foreign_proc("Java", foreign(Int::in) = (Foreign::out),
                [will_not_call_mercury, promise_pure],
"Foreign = Int;"
).
:- pragma foreign_proc("Erlang", foreign(Int::in) = (Foreign::out),
                [will_not_call_mercury, promise_pure],
"Foreign = Int"
).
