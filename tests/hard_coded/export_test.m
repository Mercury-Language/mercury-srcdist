%
% test case for calling an exported Mercury proc from pragma c_code.
%
% author: dgj
:- module export_test.

:- interface.

:- import_module int, io.

:- pred main(io__state::di, io__state::uo) is det.

:- pred foo(int::in, int::out) is det.

:- pred bar(int::in, int::out) is det.

:- implementation.

main -->
	{ bar(41, X) },
	io__write(X),
	io__write_char('\n').

foo(X, X+1).

:- pragma foreign_export("C", foo(in, out), "foo").
:- pragma foreign_export("C#", foo(in, out), "foo").
:- pragma foreign_export("Java", foo(in, out), "foo").

:- pragma foreign_proc("C",
	bar(X::in, Y::out),
	[promise_pure, may_call_mercury],
"
	foo(X, &Y);
").
:- pragma foreign_proc("C#", bar(X::in, Y::out),
		[may_call_mercury, promise_pure], "
	Y = export_test.foo(X);
").
:- pragma foreign_proc("Java", bar(X::in, Y::out),
		[may_call_mercury, promise_pure], "
	Y = export_test.foo(X);
").
:- pragma foreign_proc("Erlang", bar(X::in, Y::out),
		[may_call_mercury, promise_pure], "
	Y = foo_2_p_0(X)
").
