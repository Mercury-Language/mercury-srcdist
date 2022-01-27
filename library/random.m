%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et wm=0 tw=0
%---------------------------------------------------------------------------%
% Copyright (C) 1994-1998,2001-2006, 2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: random.m
% Main author: conway
% Stability: low
%
% Define a set of random number generator predicates. This implementation
% uses a threaded random-number supply.  The supply can be used in a
% non-unique way, which means that each thread returns the same list of
% random numbers.  However, this may not be desired so in the interests
% of safety it is also declared with (backtrackable) unique modes.
%
% The coefficients used in the implementation were taken from Numerical
% Recipes in C (Press et al), and are originally due to Knuth.  These
% coefficients are described as producing a "Quick and Dirty" random number
% generator, which generates the numbers very quickly but not necessarily
% with a high degree of quality.  As with all random number generators,
% the user is advised to consider carefully whether this generator meets
% their requirements in terms of "randomness".  For applications which have
% special needs (e.g. cryptographic key generation), a generator such as
% this is unlikely to be suitable.
%
% Note that random number generators of this type have several known
% pitfalls which the user may need to avoid:
%
%   1) The high bits tend to be more random than the low bits.  If
%   you wish to generate a random integer within a given range, you
%   should something like 'div' to reduce the random numbers to the
%   required range rather than something like 'mod' (or just use
%   random.random/5).
%
%   2) Similarly, you should not try to break a random number up into
%   components.  Instead, you should generate each number with a
%   separate call to this module.
%
%   3) There can be sequential correlation between successive calls,
%   so you shouldn't try to generate tuples of random numbers, for
%   example, by generating each component of the tuple in sequential
%   order.  If you do, it is likely that the resulting sequence will
%   not cover the full range of possible tuples.
%
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module random.
:- interface.

:- import_module list.

%---------------------------------------------------------------------------%

    % The type `random.supply' represents a supply of random numbers.
    %
:- type random.supply.

    % random.init(Seed, RS): creates a supply of random numbers RS
    % using the specified Seed.
    %
:- pred random.init(int::in, random.supply::uo) is det.

    % random.random(Num, RS0, RS): extracts a number Num in the
    % range 0 .. RandMax from the random number supply RS0, and
    % binds RS to the new state of the random number supply.
    %
:- pred random.random(int, random.supply, random.supply).
:- mode random.random(out, mdi, muo) is det.
:- mode random.random(out, in, out) is det.

    % random.random(Low, Range, Num, RS0, RS): extracts a number Num
    % in the range Low .. (Low + Range - 1) from the random number
    % supply RS0, and binds RS to the new state of the random number
    % supply.  For best results, the value of Range should be no greater
    % than about 100.
    %
:- pred random.random(int, int, int, random.supply, random.supply).
:- mode random.random(in, in, out, mdi, muo) is det.
:- mode random.random(in, in, out, in, out) is det.

    % random.randmax(RandMax, RS0, RS): binds RandMax to the maximum
    % random number that can be returned from the random number
    % supply RS0, and returns RS = RS0.
    %
:- pred random.randmax(int, random.supply, random.supply).
:- mode random.randmax(out, mdi, muo) is det.
:- mode random.randmax(out, in, out) is det.

    % random.randcount(RandCount, RS0, RS): binds RandCount to the
    % number of distinct random numbers that can be returned from the
    % random number supply RS0, and returns RS = RS0.  This will be one
    % more than the number returned by randmax/3.
    %
:- pred random.randcount(int, random.supply, random.supply).
:- mode random.randcount(out, mdi, muo) is det.
:- mode random.randcount(out, in, out) is det.

    % random.permutation(List0, List, RS0, RS):
    % binds List to a random permutation of List0,
    % and binds RS to the new state of the random number supply.
    %
:- pred random.permutation(list(T), list(T), random.supply, random.supply).
:- mode random.permutation(in, out, mdi, muo) is det.
:- mode random.permutation(in, out, in, out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.
    % Everything after the first `:- implementation' does not appear
    % in the Mercury Library Reference Manual.
:- interface.

    % The following predicate was just for test purposes.
    % It should not be used by user programs.
:- pragma obsolete(random.test/4).
:- pred random.test(int::in, int::in, list(int)::out, int::out) is det.

%---------------------------------------------------------------------------%

:- implementation.

:- import_module array.
:- import_module int.

:- type random.supply
    --->    rs(int). % I(j)

:- pred random.params(int::out, int::out, int::out) is det. % a, c, m

random.params(9301, 49297, 233280).

random.init(I0, rs(RS)) :-
    copy(I0, RS).

random.random(I, rs(RS0), rs(RS)) :-
    RS0 = I0,
    random.params(A, C, M),
    I = ((I0 * A) + C) mod M,
    copy(I, RS).

    % We could make this more robust by checking whether the range is
    % less than a certain threshold, and using a more sophisticated
    % algorithm if the threshold is exceeded.  But that would defeat
    % the purpose of having a "quick and dirty" random number generator,
    % so we don't do that.
random.random(Low, Range, Num, !RandomSupply) :-
    random.random(R, !RandomSupply),
    random.randcount(M, !RandomSupply),
    % With our current set of parameters and a reasonable choice of Range,
    % the following should never overflow.
    Num = Low + (Range * R) // M.

random.randmax(M1, RS, RS) :-
    random.params(_A, _C, M),
    M1 = M - 1.

random.randcount(M, RS, RS) :-
    random.params(_A, _C, M).

%---------------------------------------------------------------------------%

    % The random permutation is implemented via a "sampling without
    % replacement" method. In init_record, we build up an array in which
    % every integer in the range 0 .. Length - 1 is mapped to the
    % corresponding element in the list.  The sampling stage
    % iterates from Length - 1 down to 0. The invariant being
    % maintained is that at iteration I, the elements in the image of
    % the part of the map indexed by 0 .. I-1 are the elements that have
    % not been selected yet. At each iteration, perform_sampling generates
    % a random number Index in the range 0 .. I-1, adds the element that
    % Index is mapped to, Next, to the permutation, and then ensures that
    % Next is not generated again by swapping it with the image of I-1.

random.permutation(List0, List, !RS) :-
    Samples = array(List0),
    Len = array.size(Samples),
    perform_sampling(Len, Samples, [], List, !RS).

:- pred perform_sampling(int, array(T), list(T), list(T),
    random.supply, random.supply) is det.
:- mode perform_sampling(in, array_di, in, out, mdi, muo) is det.
:- mode perform_sampling(in, array_di, in, out, in, out) is det.

perform_sampling(I, !.Record, !Order, !RS) :-
    ( if I =< 0 then
        true
    else
        I1 = I - 1,
        random.random(0, I, Index, !RS),
        array.lookup(!.Record, Index, Next),
        array.lookup(!.Record, I1, MaxImage),
        !:Order = [Next | !.Order],
        array.set(Index, MaxImage, !Record),
        array.set(I1, Next, !Record),
        perform_sampling(I1, !.Record, !Order, !RS)
    ).

%---------------------------------------------------------------------------%

random.test(Seed, N, Nums, Max) :-
    random.init(Seed, RS),
    random.randmax(Max, RS, RS1),
    random.test_2(N, Nums, RS1, _RS2).

:- pred random.test_2(int, list(int), random.supply, random.supply).
:- mode random.test_2(in, out, mdi, muo) is det.
:- mode random.test_2(in, out, in, out) is det.

random.test_2(N, Is, !RS) :-
    ( if N > 0 then
        N1 = N - 1,
        random.random(I, !RS),
        random.test_2(N1, Is0, !RS),
        Is = [I | Is0]
    else
        Is = []
    ).

%---------------------------------------------------------------------------%
