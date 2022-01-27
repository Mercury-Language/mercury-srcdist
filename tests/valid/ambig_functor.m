:- module ambig_functor.

:- interface.

:- import_module io.

:- type a ---> foo(int, string) ; bar.
:- type b ---> foo(string, int) ; bar.
:- type c(T) ---> foo(T, T) ; bar.

:- pred main(io::di, io::uo) is det.
:- pred ambig(T).
:- mode ambig(in) is semidet.

:- implementation.

main(!IO) :-
    ( ambig(foo(3, "string")) ->
        true
    ;
        true
    ).

ambig(A1) :-
    A1 = foo(3, _),
    A1 = foo(_, "string").

:- end_module ambig_functor.

