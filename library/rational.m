%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et wm=0 tw=0
%---------------------------------------------------------------------------%
% Copyright (C) 1997-1998, 2003-2006 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
% 
% File: rational.m.
% Authors: aet Apr 1998. (with plagiarism from rat.m)
% Stability: high.
% 
% Implements a rational number type and a set of basic operations on
% rational numbers.
% 
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module rational.
:- interface.

:- import_module integer.

%---------------------------------------------------------------------------%

:- type rational.

:- pred '<'(rational::in, rational::in) is semidet.

:- pred '>'(rational::in, rational::in) is semidet.

:- pred '=<'(rational::in, rational::in) is semidet.

:- pred '>='(rational::in, rational::in) is semidet.

:- func rational(int) = rational.

:- func rational(int, int) = rational.

:- func from_integer(integer) = rational.

:- func from_integers(integer, integer) = rational.

% :- func float(rational) = float.

:- func '+'(rational) = rational.

:- func '-'(rational) = rational.

:- func rational + rational = rational.

:- func rational - rational = rational.

:- func rational * rational = rational.

:- func rational / rational = rational.

:- func numer(rational) = integer.

:- func denom(rational) = integer.

:- func abs(rational) = rational.

:- func reciprocal(rational) = rational.

:- func one = rational.

:- func zero = rational.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module require.

    % The normal form of a rational number has the following
    % properties:
    %   - numerator and denominator have no common factors.
    %   - denominator is positive.
    %   - denominator is not zero.
    %   - if numerator is zero, then denominator is one.
    %
    % These invariants must be preserved by any rational number
    % constructed using this module since the equality predicate
    % on rationals is simply Mercury's default unification
    % predicate =/2. If the invariants were not maintained,
    % we would have pathologies like r(-1,2) \= r(1,-2).
    %
    % The rational_norm/2 function generates rationals in this
    % normal form.
    %
:- type rational
    --->    r(integer, integer).

'<'(R1, R2) :-
    Cmp = cmp(R1, R2),
    Cmp = (<).

'>'(R1, R2) :-
    Cmp = cmp(R1, R2),
    Cmp = (>).

'=<'(R1, R2) :-
    Cmp = cmp(R1, R2),
    (Cmp = (<) ; Cmp = (=)).

'>='(R1, R2) :-
    Cmp = cmp(R1, R2),
    (Cmp = (>) ; Cmp = (=)).

rational.rational(Int) = rational_norm(integer(Int), integer.one).

rational.rational(Num, Den) = rational_norm(integer(Num), integer(Den)).

rational.from_integer(Integer) = rational_norm(Integer, integer.one).

rational.from_integers(Num, Den) = rational_norm(Num, Den).

%% XXX: There are ways to do this in some cases even if the
%% float conversions would overflow.
% rational.float(r(Num, Den)) =
%   float:'/'(integer.float(Num), integer.float(Den)).

rational.one = r(integer.one, integer.one).

rational.zero = r(integer.zero, integer.one).

'+'(Rat) = Rat.

'-'(r(Num, Den)) = r(-Num, Den).

r(An, Ad) + r(Bn, Bd) = rational_norm(Numer, M) :-
    M = lcm(Ad, Bd),
    CA = M // Ad,
    CB = M // Bd,
    Numer = An * CA + Bn * CB.

R1 - R2 = R1 + (-R2).

    % XXX: need we call rational_norm here?
r(An, Ad) * r(Bn, Bd) = rational_norm(Numer, Denom) :-
    G1 = gcd(An, Bd),
    G2 = gcd(Ad, Bn),
    Numer = (An // G1) * (Bn // G2),
    Denom = (Ad // G2) * (Bd // G1).

R1 / R2 = R1 * reciprocal(R2).

rational.reciprocal(r(Num, Den)) =
    ( Num = integer.zero ->
        func_error("rational.reciprocal: division by zero")
    ;
        r(signum(Num) * Den, integer.abs(Num))
    ).

rational.numer(r(Num, _)) = Num.

rational.denom(r(_, Den)) = Den.

rational.abs(r(Num, Den)) = r(integer.abs(Num), Den).

:- func rational_norm(integer, integer) = rational.

rational_norm(Num, Den) = Rat :-
    ( Den = integer.zero ->
        error("rational.rational_norm: division by zero")
    ; Num = integer.zero ->
        Rat = r(integer.zero, integer.one)
    ;
        G    = gcd(Num, Den),
        Num2 = Num * signum(Den),
        Den2 = integer.abs(Den),
        Rat  = r(Num2 // G, Den2 // G)
    ).

:- func gcd(integer, integer) = integer.

gcd(A, B) = gcd_2(integer.abs(A), integer.abs(B)).

:- func gcd_2(integer, integer) = integer.

gcd_2(A, B) = ( B = integer.zero -> A ; gcd_2(B, A rem B) ).

:- func lcm(integer, integer) = integer.

lcm(A, B) =
    ( A = integer.zero -> integer.zero
    ; B = integer.zero -> integer.zero
    ; integer.abs((A // gcd(A, B)) * B)
    ).

:- func signum(integer) = integer.

signum(N) =
    ( N = integer.zero -> integer.zero
    ; N < integer.zero -> -integer.one
    ; integer.one
    ).

:- func cmp(rational, rational) = comparison_result.

cmp(R1, R2) = Cmp :-
    Diff = R1 - R2,
    ( is_zero(Diff) ->
        Cmp = (=)
    ; is_negative(Diff) ->
        Cmp = (<)
    ;
        Cmp = (>)
    ).

:- pred is_zero(rational::in) is semidet.

is_zero(r(integer.zero, _)).

:- pred is_negative(rational::in) is semidet.

is_negative(r(Num, _)) :-
    Num < integer.zero.

%---------------------------------------------------------------------------%
:- end_module rational.
%---------------------------------------------------------------------------%
