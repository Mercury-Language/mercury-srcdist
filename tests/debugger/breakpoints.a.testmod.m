%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module breakpoints__a__testmod.

:- interface.

:- func test_in_a = string.
:- func test_in_ab = string.

:- implementation.

test_in_a = "a".
test_in_ab = "ab".
