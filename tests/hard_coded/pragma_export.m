% This test case tests using `pragma foreign_export' on a procedure defined
% in a different module (in this case, one from the standard library).
% Previously the MLDS back-end was failing this test case.

:- module pragma_export.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

main -->
	my_write_string("pragma_export test succeeded\n").

:- pred my_write_string(string::in, io__state::di, io__state::uo) is det.

:- pragma foreign_proc("C",
	my_write_string(Str::in, _IO0::di, _IO::uo),
	[promise_pure, may_call_mercury, thread_safe],
"
	write_str(Str);
").

:- pragma foreign_proc("C#",
	my_write_string(Str::in, _IO0::di, _IO::uo),
	[promise_pure, may_call_mercury, thread_safe],
"
	write_str(Str);
").

:- pragma foreign_export("C", io__write_string(in, di, uo), "write_str").
:- pragma foreign_export("C#", io__write_string(in, di, uo), "write_str").
