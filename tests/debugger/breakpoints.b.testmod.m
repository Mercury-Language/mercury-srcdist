%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et ft=mercury
%---------------------------------------------------------------------------%

:- module breakpoints__b__testmod.

:- interface.

:- func test_in_b = string.
:- func test_in_ab = string.

:- implementation.

test_in_b = "b".
test_in_ab = "ab".
