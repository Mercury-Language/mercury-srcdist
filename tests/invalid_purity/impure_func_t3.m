%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module impure_func_t3.

:- interface.

:- import_module io.

:- pred main(state::di, state::uo) is det.

:- implementation.

:- import_module int.
:- import_module require.

:- pragma promise_pure(main/2).

main -->
    print("X = "),
    impure print(get_counter),
    nl.

:- impure func get_counter = int is det.

:- pragma foreign_decl("C", "extern MR_Integer counter;").
:- pragma foreign_code("C" , "MR_Integer counter = 0;").
:- pragma foreign_proc("C",
    get_counter = (X::out),
    [will_not_call_mercury],
"
    X = counter;
").
get_counter = 0.

