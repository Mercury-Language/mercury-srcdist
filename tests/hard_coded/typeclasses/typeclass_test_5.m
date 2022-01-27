:- module typeclass_test_5.
:- interface.
:- import_module io.
:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

main --> io__write_int(type_num(43)), io__nl.

:- typeclass numbered_type(T) where [
	func type_num(T::in) = (int::out) is det
].

:- instance numbered_type(int) where [
	func(type_num/1) is foo_type_num
].

:- func foo_type_num(T::in) = (int::out) is det.
foo_type_num(_) = 42.

