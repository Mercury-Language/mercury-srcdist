%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et wm=0 tw=0
%---------------------------------------------------------------------------%
% Copyright (C) 1994-1999, 2003-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
% 
% File: bag.m.
% Main authors: conway, crs.
% Stability: medium.
% 
% An implementation of multisets.
% 
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module bag.
:- interface.

:- import_module assoc_list.
:- import_module list.
:- import_module set.

%---------------------------------------------------------------------------%

:- type bag(T).

    % Create an empty bag.
    %
:- pred bag.init(bag(T)::out) is det.
:- func bag.init = bag(T).

    % Return the number of values in a bag (including duplicate values).
    %
:- func bag.count(bag(T)) = int.

    % Return the number of unique values in a bag, duplicate values are counted
    % only once.
    %
:- func bag.count_unique(bag(T)) = int.

    % Insert a particular value in a bag.
    %
:- pred bag.insert(bag(T)::in, T::in, bag(T)::out) is det.
:- func bag.insert(bag(T), T) = bag(T).

    % Insert a list of values into a bag.
    %
:- pred bag.insert_list(bag(T)::in, list(T)::in, bag(T)::out) is det.
:- func bag.insert_list(bag(T), list(T)) = bag(T).

    % Insert a list of values into a bag.
    %
:- pred bag.insert_set(bag(T)::in, set(T)::in, bag(T)::out) is det.
:- func bag.insert_set(bag(T), set(T)) = bag(T).

    % bag.member(Val, Bag) :
    %   True iff `Bag' contains at least one occurrence of `Val'.
    %
:- pred bag.member(T::in, bag(T)::in) is semidet.

    % bag.member(Val, Bag, Remainder) :
    %   Nondeterministically returns all values from Bag and the
    %   corresponding bag after the value has been removed. Duplicate values
    %   are returned as many times as they occur in the Bag.
    %
:- pred bag.member(T::out, bag(T)::in, bag(T)::out) is nondet.

    % Make a bag from a list.
    %
:- func bag.bag(list(T)) = bag(T).
:- pred bag.from_list(list(T)::in, bag(T)::out) is det.
:- func bag.from_list(list(T)) = bag(T).

    % Make a bag from a set.
    %
:- pred bag.from_set(set(T)::in, bag(T)::out) is det.
:- func bag.from_set(set(T)) = bag(T).

    % Given a bag, produce a sorted list containing all the values in
    % the bag.  Each value will appear in the list the same number of
    % times that it appears in the bag.
    %
:- pred bag.to_list(bag(T)::in, list(T)::out) is det.
:- func bag.to_list(bag(T)) = list(T).

    % Given a bag, produce a sorted list containing all the values in the bag.
    % Each value will appear in the list once, with the associated integer
    % giving the number of times that it appears in the bag.
    %
:- pred bag.to_assoc_list(bag(T)::in, assoc_list(T, int)::out) is det.
:- func bag.to_assoc_list(bag(T)) = assoc_list(T, int).

    % Given a bag, produce a sorted list with no duplicates containing
    % all the values in the bag.
    %
:- pred bag.to_list_without_duplicates(bag(T)::in, list(T)::out) is det.
:- func bag.to_list_without_duplicates(bag(T)) = list(T).

    % Given a bag, produce a set containing all the values in the bag.
    %
:- pred bag.to_set_without_duplicates(bag(T)::in, set(T)::out) is det.
:- func bag.to_set_without_duplicates(bag(T)) = set(T).
:- func bag.to_set(bag(T)) = set(T).

    % Remove one occurrence of a particular value from a bag.
    % Fail if the item does not exist in the bag.
    %
:- pred bag.remove(bag(T)::in, T::in, bag(T)::out) is semidet.

    % Remove one occurrence of a particular value from a bag.
    % Abort if the item does not exist in the bag.
    %
:- pred bag.det_remove(bag(T)::in, T::in, bag(T)::out) is det.
:- func bag.det_remove(bag(T), T) = bag(T).

    % Remove a list of values from a bag. Duplicates are removed from the bag
    % the appropriate number of times. Fail if any of the items in the list
    % do not exist in the bag.
    %
    % This call is logically equivalent to:
    %
    %   bag.remove_list(Bag0, RemoveList, Bag) :-
    %       bag.from_list(RemoveList, RemoveBag),
    %       bag.is_subbag(RemoveBag, Bag0),
    %       bag.subtract(Bag0, RemoveBag, Bag).
    %
:- pred bag.remove_list(bag(T)::in, list(T)::in, bag(T)::out) is semidet.

    % Remove a list of values from a bag. Duplicates are removed from the bag
    % the appropriate number of times.  Abort if any of the items in the list
    % do not exist in the bag.
    %
:- pred bag.det_remove_list(bag(T)::in, list(T)::in, bag(T)::out) is det.
:- func bag.det_remove_list(bag(T), list(T)) = bag(T).

    % Remove a set of values from a bag. Each value is removed once.
    % Fail if any of the items in the set do not exist in the bag.
    %
:- pred bag.remove_set(bag(T)::in, set(T)::in, bag(T)::out) is semidet.

    % Remove a set of values from a bag. Each value is removed once.
    % Abort if any of the items in the set do not exist in the bag.
    %
:- pred bag.det_remove_set(bag(T)::in, set(T)::in, bag(T)::out) is det.
:- func bag.det_remove_set(bag(T), set(T)) = bag(T).

    % Delete one occurrence of a particular value from a bag.
    % If the key is not present, leave the bag unchanged.
    %
:- pred bag.delete(bag(T)::in, T::in, bag(T)::out) is det.
:- func bag.delete(bag(T), T) = bag(T).

    % Remove all occurrences of a particular value from a bag.
    % Fail if the item does not exist in the bag.
    %
:- pred bag.remove_all(bag(T)::in, T::in, bag(T)::out) is semidet.

:- func bag.delete_all(bag(T), T) = bag(T).

    % Delete all occurrences of a particular value from a bag.
    %
:- pred bag.delete_all(bag(T)::in, T::in, bag(T)::out) is det.

    % Check whether a bag contains a particular value.
    %
:- pred bag.contains(bag(T)::in, T::in) is semidet.

    % Count how many occurrences of the value the bag contains.
    %
:- pred bag.count_value(bag(T)::in, T::in, int::out) is det.
:- func bag.count_value(bag(T), T) = int.

    % bag.subtract(Bag0, SubBag, Bag):
    %
    % Subtracts SubBag from Bag0 to produce Bag. Each element in SubBag is
    % removed from Bag0 to produce Bag. If an element exists in SubBag,
    % but not in Bag, then that element is not removed. An example:
    % bag.subtract({1, 1, 2, 2, 3 }, {1, 1, 2, 3, 3, 3}, {2}).
    %
:- pred bag.subtract(bag(T)::in, bag(T)::in, bag(T)::out) is det.
:- func bag.subtract(bag(T), bag(T)) = bag(T).

    % The third bag is the union of the first 2 bags,
    % e.g. {1, 1, 2, 2} U {2, 2, 3, 3} = {1, 1, 2, 2, 2, 2, 3, 3}.
    % If the two input bags are known to be unequal in size, then making
    % the first bag the larger bag will usually be more efficient.
    %
:- pred bag.union(bag(T)::in, bag(T)::in, bag(T)::out) is det.
:- func bag.union(bag(T), bag(T)) = bag(T).

    % The third bag is the intersection of the first 2 bags. Every element
    % in the third bag exists in both of the first 2 bags, e.g.
    % bag.intersect({1, 2, 2, 3, 3}, {2, 2, 3, 4}, {2, 2, 3}).
    %
:- pred bag.intersect(bag(T)::in, bag(T)::in, bag(T)::out) is det.
:- func bag.intersect(bag(T), bag(T)) = bag(T).

    % Fails if there is no intersection between the 2 bags.
    % bag.intersect(A, B) :- bag.intersect(A, B, C), not bag.is_empty(C).
    %
:- pred bag.intersect(bag(T)::in, bag(T)::in) is semidet.

    % The third bag is the smallest bag that has both the first two bags
    % as subbags. If an element X is present N times in one of the first
    % two bags, X will be present at least N times in the third bag.
    % E.g. {1, 1, 2} upper_bound {2, 2, 3} = {1, 1, 2, 2, 3}.
    % If the two input bags are known to be unequal in size, then making
    % the first bag the larger bag will usually be more efficient.
    %
:- pred bag.least_upper_bound(bag(T)::in, bag(T)::in, bag(T)::out) is det.
:- func bag.least_upper_bound(bag(T), bag(T)) = bag(T).

    % Tests whether the first bag is a subbag of the second.
    % bag.is_subbag(A, B) implies that every element in the bag A
    % is also in the bag B. If an element is in bag A multiple times,
    % it must be in bag B at least as many times.
    % e.g. bag.is_subbag({1, 1, 2}, {1, 1, 2, 2, 3}).
    % e.g. bag.is_subbag({1, 1, 2}, {1, 2, 3}) :- fail.
    %
:- pred bag.is_subbag(bag(T)::in, bag(T)::in) is semidet.

    % Check whether a bag is empty.
    %
:- pred bag.is_empty(bag(T)::in) is semidet.

    % Fails if the bag is empty.
    %
:- pred bag.remove_smallest(bag(T)::in, T::out, bag(T)::out) is semidet.

    % Compares the two bags, and returns whether the first bag is a
    % subset (<), is equal (=), or is a superset (>) of the second.
    % bag.subset_compare(<, {apple, orange}, {apple, apple, orange}).
    % bag.subset_compare(=, {apple, orange}, {apple, orange}).
    % bag.subset_compare(>, {apple, apple, orange}, {apple, orange}).
    % bag.subset_compare(_, {apple, apple}, {orange, orange}) :- fail.
    %
:- pred bag.subset_compare(comparison_result::out, bag(T)::in, bag(T)::in)
    is semidet.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

% Everything below here is not intended to be part of the public interface,
% and will not be included in the Mercury library reference manual.

:- interface.

:- import_module term.      % for var/1.

:- pragma type_spec(bag.insert/3, T = var(_)).
:- pragma type_spec(bag.insert_list/3, T = var(_)).
:- pragma type_spec(bag.insert_set/3, T = var(_)).

:- pragma type_spec(bag.remove/3, T = var(_)).
:- pragma type_spec(bag.remove_list/3, T = var(_)).
:- pragma type_spec(bag.det_remove_list/3, T = var(_)).
:- pragma type_spec(bag.det_remove_set/3, T = var(_)).

%-----------------------------------------------------------------------------%

:- implementation.

:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module require.

:- type bag(T)
    --->    bag(map(T, int)).

%---------------------------------------------------------------------------%

bag.init(bag(Bag)) :-
    map.init(Bag).

%---------------------------------------------------------------------------%

bag.count(bag(Bag)) = list.foldl(int.plus, map.values(Bag), 0).

%---------------------------------------------------------------------------%

bag.count_unique(bag(Bag)) = map.count(Bag).

%---------------------------------------------------------------------------%

bag.insert(bag(Bag0), Item, bag(Bag)) :-
    ( map.search(Bag0, Item, Count0) ->
        Count = Count0 + 1
    ;
        Count = 1
    ),
    map.set(Bag0, Item, Count, Bag).

%---------------------------------------------------------------------------%

bag.insert_list(Bag, [], Bag).
bag.insert_list(Bag0, [Item | Items], Bag) :-
    bag.insert(Bag0, Item, Bag1),
    bag.insert_list(Bag1, Items, Bag).

bag.insert_set(Bag0, Set, Bag) :-
    set.to_sorted_list(Set, List),
    % XXX We should exploit the sortedness of List.
    bag.insert_list(Bag0, List, Bag).

bag.member(M, bag(Bag)) :-
    map.search(Bag, M, _Occurrences).

bag.member(OutVal, InBag, OutBag) :-
    Vals = bag.to_list(InBag),
    list.member(OutVal, Vals),
    OutBag = bag.det_remove(InBag, OutVal).

bag.from_list(List, Bag) :-
    bag.init(Bag0),
    bag.insert_list(Bag0, List, Bag).

bag.from_set(Set, Bag) :-
    set.to_sorted_list(Set, List),
    bag.init(Bag0),
    % XXX We should exploit the sortedness of List.
    bag.insert_list(Bag0, List, Bag).

bag.to_list(bag(Bag), List) :-
    map.to_assoc_list(Bag, AssocList),
    bag.to_list_2(AssocList, List).

:- pred bag.to_list_2(assoc_list(T, int)::in, list(T)::out) is det.

bag.to_list_2([], []).
bag.to_list_2([X - Int | Xs ], Out) :-
    ( Int =< 0 ->
        bag.to_list_2(Xs, Out)
    ;
        NewInt = Int - 1,
        bag.to_list_2([X - NewInt | Xs], Out0),
        Out = [X | Out0]
    ).

bag.to_assoc_list(bag(Bag), AssocList) :-
    map.to_assoc_list(Bag, AssocList).

bag.to_list_without_duplicates(bag(Bag), List) :-
    map.keys(Bag, List).

bag.to_set_without_duplicates(bag(Bag), Set) :-
    map.keys(Bag, List),
    set.sorted_list_to_set(List, Set).

%---------------------------------------------------------------------------%

bag.delete(Bag0, Item, Bag) :-
    ( bag.remove(Bag0, Item, Bag1) ->
        Bag = Bag1
    ;
        Bag = Bag0
    ).

bag.remove(bag(Bag0), Item, bag(Bag)) :-
    map.search(Bag0, Item, Count0),
    ( Count0 > 1 ->
        Count = Count0 - 1,
        map.set(Bag0, Item, Count, Bag)
    ;
        map.delete(Bag0, Item, Bag)
    ).

bag.det_remove(Bag0, Item, Bag) :-
    ( bag.remove(Bag0, Item, Bag1) ->
        Bag = Bag1
    ;
        error("bag.det_remove: Missing item in bag.")
    ).

bag.remove_list(Bag, [], Bag).
bag.remove_list(Bag0, [X | Xs], Bag) :-
    bag.remove(Bag0, X, Bag1),
    bag.remove_list(Bag1, Xs, Bag).

bag.det_remove_list(Bag0, List, Bag) :-
    ( bag.remove_list(Bag0, List, Bag1) ->
        Bag = Bag1
    ;
        error("bag.det_remove_list: Missing item in bag.")
    ).

bag.remove_set(Bag0, Set, Bag) :-
    set.to_sorted_list(Set, List),
        % XXX We should exploit the sortedness of List.
    bag.remove_list(Bag0, List, Bag).

bag.det_remove_set(Bag0, Set, Bag) :-
    set.to_sorted_list(Set, List),
        % XXX We should exploit the sortedness of List.
    bag.det_remove_list(Bag0, List, Bag).

bag.remove_all(bag(Bag0), Item, bag(Bag)) :-     % semidet
    map.remove(Bag0, Item, _Val, Bag).

bag.delete_all(bag(Bag0), Item, bag(Bag)) :- % det
    map.delete(Bag0, Item, Bag).

%---------------------------------------------------------------------------%

bag.contains(bag(Bag), Item) :-
    map.contains(Bag, Item).

%---------------------------------------------------------------------------%

bag.count_value(bag(Bag), Item, Count) :-
    ( map.search(Bag, Item, Count0) ->
        Count = Count0
    ;
        Count = 0
    ).

%---------------------------------------------------------------------------%

bag.subtract(bag(Bag0), bag(SubBag), bag(Bag)) :-
    ( map.remove_smallest(SubBag, SubKey, SubVal, SubBag0) ->
        ( map.search(Bag0, SubKey, Val) ->
            NewVal = Val - SubVal,
            ( NewVal > 0 ->
                map.det_update(Bag0, SubKey, NewVal, Bag1)
            ;
                map.det_remove(Bag0, SubKey, _Val, Bag1)
            )
        ;
            Bag1 = Bag0
        ),
        bag.subtract(bag(Bag1), bag(SubBag0), bag(Bag))
    ;
        Bag = Bag0
    ).

bag.union(bag(A), bag(B), bag(Out)) :-
    ( map.remove_smallest(B, Key, BVal, B0) ->
        ( map.search(A, Key, AVal) ->
            NewVal = AVal + BVal,
            map.det_update(A, Key, NewVal, A0)
        ;
            map.det_insert(A, Key, BVal, A0)
        ),
        bag.union(bag(A0), bag(B0), bag(Out))
    ;
        Out = A
    ).

bag.intersect(A, B, Out) :-
    bag.init(Out0),
    bag.intersect_2(A, B, Out0, Out).

:- pred bag.intersect_2(bag(T)::in, bag(T)::in, bag(T)::in, bag(T)::out)
    is det.

bag.intersect_2(bag(A), bag(B), bag(Out0), bag(Out)) :-
    ( map.remove_smallest(A, Key, AVal,A0) ->
        ( map.search(B, Key, BVal) ->
            int.min(AVal, BVal, Val),
            map.det_insert(Out0, Key, Val, Out1)
        ;
            Out1 = Out0
        ),
        bag.intersect_2(bag(A0), bag(B), bag(Out1), bag(Out))
    ;
        Out = Out0
    ).

bag.intersect(bag(A), bag(B)) :-
    map.remove_smallest(A, Key, _AVal,A0),
    ( map.contains(B, Key) ->
        true
    ;
        bag.intersect(bag(A0), bag(B))
    ).

bag.least_upper_bound(bag(A), bag(B), bag(Out)) :-
    ( map.remove_smallest(B, Key, BVal, B0) ->
        ( map.search(A, Key, AVal) ->
            int.max(AVal, BVal, NewVal),
            map.det_update(A, Key, NewVal, A0)
        ;
            map.det_insert(A, Key, BVal, A0)
        ),
        bag.least_upper_bound(bag(A0), bag(B0), bag(Out))
    ;
        Out = A
    ).

%---------------------------------------------------------------------------%

bag.is_subbag(SubBag, BigBag) :-
    bag.subtract(SubBag, BigBag, SubBag0),
    bag.is_empty(SubBag0).

%---------------------------------------------------------------------------%

bag.is_empty(bag(Bag)) :-
    map.is_empty(Bag).

%---------------------------------------------------------------------------%

bag.remove_smallest(bag(Bag0), Item, bag(Bag)) :-
    map.remove_smallest(Bag0, Item, Val, Bag1),
    ( Val > 1 ->
        NewVal = Val - 1,
        map.det_insert(Bag1, Item, NewVal, Bag)
    ;
        Bag = Bag1
    ).

    % compares the two bags, and returns whether the first bag is a
    % subset (<), is equal (=), or is a superset (>) of the second
    % bag.subset_compare(<, {apple, orange}, {apple, apple, orange}).
    % bag.subset_compare(=, {apple, orange}, {apple, orange}).
    % bag.subset_compare(>, {apple, apple, orange}, {apple, orange}).
    % bag.subset_compare(_, {apple, apple}, {orange, orange}) :- fail.
    % :- pred bag.subset_compare(comparison_result, bag(T), bag(T)).
    % :- mode bag.subset_compare(out, in, in) is semidet.
    %
bag.subset_compare(Res, bag(A), bag(B)) :-
    ( map.remove_smallest(A, Key, AVal, A0) ->
        ( map.remove(B, Key, BVal, B0) ->
            compare(ValRes, AVal, BVal),
            (
                ValRes = (>),
                bag.is_subbag(bag(B0), bag(A0)),
                Res = (>)
            ;
                ValRes = (=),
                bag.subset_compare(Res, bag(A0), bag(B0))
            ;
                ValRes = (<),
                bag.is_subbag(bag(A0), bag(B0)),
                Res = (<)
            )
        ;
            % B is empty, but A is not
            Res = (>)
        )
    ;
        % A is empty
        ( map.is_empty(B) ->
            Res = (=)
        ;
            Res = (<)
        )
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%
% Ralph Becket <rwab1@cl.cam.ac.uk> 29/04/99
%   Function forms added.

bag.init = B :-
    bag.init(B).

bag.insert(B1, X) = B2 :-
    bag.insert(B1, X, B2).

bag.insert_list(B1, Xs) = B2 :-
    bag.insert_list(B1, Xs, B2).

bag.insert_set(B1, Xs) = B2 :-
    bag.insert_set(B1, Xs, B2).

bag.from_list(Xs) = B :-
    bag.from_list(Xs, B).

bag.from_set(Xs) = B :-
    bag.from_set(Xs, B).

bag.to_list(B) = Xs :-
    bag.to_list(B, Xs).

bag.to_assoc_list(B) = AL :-
    bag.to_assoc_list(B, AL).

bag.to_list_without_duplicates(B) = Xs :-
    bag.to_list_without_duplicates(B, Xs).

bag.to_set_without_duplicates(B) = Xs :-
    bag.to_set_without_duplicates(B, Xs).

bag.det_remove(B1, X) = B2 :-
    bag.det_remove(B1, X, B2).

bag.det_remove_list(B1, Xs) = B2 :-
    bag.det_remove_list(B1, Xs, B2).

bag.det_remove_set(B1, Xs) = B2 :-
    bag.det_remove_set(B1, Xs, B2).

bag.delete(B1, X) = B2 :-
    bag.delete(B1, X, B2).

bag.delete_all(B1, X) = B2 :-
    bag.delete_all(B1, X, B2).

bag.count_value(B, X) = N :-
    bag.count_value(B, X, N).

bag.subtract(B1, B2) = B3 :-
    bag.subtract(B1, B2, B3).

bag.union(B1, B2) = B3 :-
    bag.union(B1, B2, B3).

bag.intersect(B1, B2) = B3 :-
    bag.intersect(B1, B2, B3).

bag.least_upper_bound(B1, B2) = B3 :-
    bag.least_upper_bound(B1, B2, B3).

bag.bag(Xs) = bag.from_list(Xs).

bag.to_set(B) = bag.to_set_without_duplicates(B).
