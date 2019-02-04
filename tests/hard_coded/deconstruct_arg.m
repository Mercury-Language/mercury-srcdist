%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%
%
% Test case for functor, arg, deconstruct and their variants.
%
% Author: zs
%

:- module deconstruct_arg.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is cc_multi.

:- implementation.

%---------------------------------------------------------------------------%

:- import_module array.
:- import_module list.
:- import_module string.
:- import_module deconstruct.
:- import_module maybe.
:- import_module pair.
:- import_module univ.

:- type enum
    --->    one
    ;       two
    ;       three.

:- type fruit
    --->    apple(list(int))
    ;       banana(list(enum)).

:- type thingie
    --->    foo
    ;       bar(int)
    ;       bar(int, int)
    ;       qux(int)
    ;       quux(int)
    ;       quuux(int, int)
    ;       wombat
    ;       zoom(int)
    ;       zap(int, float, int)
    ;       zip(int, int, int, int)
    ;       zop(float, float)
    ;       moomoo(
                moo :: int,
                'mooo!' :: string
            )
    ;       packed(
                packed1 :: int,
                packed2 :: enum,
                packed3 :: enum,
                packed4 :: enum,
                packed5 :: string
            ).

:- type poly(A, B)
    --->    poly_one(A)
    ;       poly_two(B)
    ;       poly_three(B, A, poly(B, A)).

:- type no_tag
    --->    qwerty(int).

:- type set(T)
    --->    set_rep(list(T))
    where equality is set_equal.

%---------------------------------------------------------------------------%

% convert list to set
:- func set(list(T)) = set(T).

set(List) = set_rep(List).

% convert set to sorted list
:- func set_to_sorted_list(set(T)) = list(T).

set_to_sorted_list(Set) = Sorted :-
    promise_equivalent_solutions [Sorted] (
        Set = set_rep(Unsorted),
        list.sort_and_remove_dups(Unsorted, Sorted)
    ).

:- pred set_equal(set(T)::in, set(T)::in) is semidet.

set_equal(Set1, Set2) :-
    set_to_sorted_list(Set1) = set_to_sorted_list(Set2).

%---------------------------------------------------------------------------%

main(!IO) :-
    % test enumerations
    % test_all(one, !IO),

    % test primary tags
    test_all(apple([]), !IO),
    test_all(apple([9, 5, 1]), !IO),

    % test remote secondary tags
    test_all(zop(3.3, 2.03), !IO),
    test_all(zap(50, 51.0, 52), !IO),
    test_all(zip(50, 51, 52, 53), !IO),

    % test local secondary tags
    test_all(wombat, !IO),

    % test notag
    test_all(qwerty(5), !IO),

    % test named arguments
    test_all(moomoo(50, "moo."), !IO),

    % test characters
    test_all('a', !IO),

    % test a float which requires 17 digits of precision
    test_all(0.12345678901234566, !IO),

    % test integers
    test_all(4, !IO),

    % test unigned integers
    test_all(561u, !IO),

    % test fixed size integers.
    test_all(42i8, !IO),
    test_all(42u8, !IO),
    test_all(42i16, !IO),
    test_all(42u16, !IO),
    test_all(42i32, !IO),
    test_all(43u32, !IO),
    test_all(66i64, !IO),
    test_all(67u64, !IO),

    % test univ.
    type_to_univ(["hi! I'm a univ!"], Univ),
    test_all(Univ, !IO),

    % test noncanonical type
    test_all(set([1, 2, 3, 3]), !IO),

    % test predicates
    test_all(newline, !IO),
    test_all(test_all([1, 2]), !IO),
    test_all(p(1, 2.2, "three"), !IO),

    % test tuples
    test_all({1, 'b'}, !IO),
    test_all({1, 'b', "third"}, !IO),
    test_all({1, 'b', "third", {1, 2, 3, 4}}, !IO),

    % test arrays
    test_all(array([1000, 2000]), !IO),
    test_all(array([100, 200, 300]), !IO),
    test_all(array([10, 20, 30, 40]), !IO),

    % test packed fields
    test_all(packed(100, one, two, three, "four"), !IO).

:- pred p(int::in, float::in, string::in, io::di, io::uo) is det.

p(_, _, _, !IO).

:- pred newline(io::di, io::uo) is det.

newline(!IO) :-
    io.write_char('\n', !IO).

%---------------------------------------------------------------------------%

:- pred test_all(T::in, io::di, io::uo) is cc_multi.

test_all(T, !IO) :-
    test_deconstruct_functor(T, !IO),
    test_deconstruct_arg(T, 0, !IO),
    test_deconstruct_arg(T, 1, !IO),
    test_deconstruct_arg(T, 2, !IO),
    test_deconstruct_named_arg(T, "moo", !IO),
    test_deconstruct_named_arg(T, "mooo!", !IO),
    test_deconstruct_named_arg(T, "packed1", !IO),
    test_deconstruct_named_arg(T, "packed2", !IO),
    test_deconstruct_named_arg(T, "packed3", !IO),
    test_deconstruct_deconstruct(T, !IO),
    test_deconstruct_limited_deconstruct(T, 3, !IO),
    io.nl(!IO).

%---------------------------------------------------------------------------%

:- pred test_deconstruct_functor(T::in, io::di, io::uo) is cc_multi.

test_deconstruct_functor(T, !IO) :-
    io.write_string("deconstruct functor: ", !IO),
    deconstruct.functor(T, include_details_cc, Functor, Arity),
    io.write_string(Functor, !IO),
    io.write_string("/", !IO),
    io.write_int(Arity, !IO),
    io.write_string("\n", !IO).

:- pred test_deconstruct_arg(T::in, int::in, io::di, io::uo) is cc_multi.

test_deconstruct_arg(T, ArgNum, !IO) :-
    string.format("deconstruct argument %d of ", [i(ArgNum)], Str),
    io.write_string(Str, !IO),
    io.print(T, !IO),
    deconstruct.arg_cc(T, ArgNum, MaybeArg),
    (
        MaybeArg = arg(Arg),
        io.write_string(" is ", !IO),
        io.write(Arg, !IO),
        io.write_string("\n", !IO)
    ;
        MaybeArg = no_arg,
        io.write_string(" doesn't exist\n", !IO)
    ).

:- pred test_deconstruct_named_arg(T::in, string::in, io::di, io::uo)
    is cc_multi.

test_deconstruct_named_arg(T, Name, !IO) :-
    io.format("deconstruct argument '%s'", [s(Name)], !IO),
    deconstruct.named_arg_cc(T, Name, MaybeArg),
    (
        MaybeArg = arg(Arg),
        io.write_string(" is ", !IO),
        io.write(Arg, !IO),
        io.nl(!IO)
    ;
        MaybeArg = no_arg,
        io.write_string(" doesn't exist\n", !IO)
    ).

:- pred test_deconstruct_deconstruct(T::in, io::di, io::uo) is cc_multi.

test_deconstruct_deconstruct(T, !IO) :-
    deconstruct.deconstruct(T, include_details_cc,
        Functor, Arity, Arguments),
    string.format("deconstruct deconstruct: functor %s arity %d\n",
        [s(Functor), i(Arity)], Str),
    io.write_string(Str, !IO),
    io.write_string("[", !IO),
    io.write_list(Arguments, ", ", io.print, !IO),
    io.write_string("]\n", !IO).

:- pred test_deconstruct_limited_deconstruct(T::in, int::in, io::di, io::uo)
    is cc_multi.

test_deconstruct_limited_deconstruct(T, Limit, !IO) :-
    string.format("deconstruct limited deconstruct %d of ", [i(Limit)], Str),
    io.write_string(Str, !IO),
    io.print(T, !IO),
    io.write_string("\n", !IO),
    deconstruct.limited_deconstruct_cc(T, Limit, Result),
    (
        Result = yes({Functor, Arity, Arguments}),
        string.format("functor %s arity %d ", [s(Functor), i(Arity)], Str2),
        io.write_string(Str2, !IO),
        io.write_string("[", !IO),
        io.write_list(Arguments, ", ", io.print, !IO),
        io.write_string("]\n", !IO)
    ;
        Result = no,
        io.write_string("failed\n", !IO)
    ).

%---------------------------------------------------------------------------%
