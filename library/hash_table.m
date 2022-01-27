%---------------------------------------------------------------------------%
% vim: ts=4 sw=4 et tw=0 wm=0 ft=mercury
%---------------------------------------------------------------------------%
% Copyright (C) 2001, 2003-2006, 2010-2012 The University of Melbourne
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
% 
% File: hash_table.m.
% Main author: rafe, wangp.
% Stability: low.
% 
% Hash table implementation.
%
% This implementation requires the user to supply a predicate that
% will compute a hash value for any given key.
%
% Default hash functions are provided for ints, strings and generic
% values.
%
% The number of buckets in the hash table is always a power of 2.
%
% When a user set occupancy level is achieved, the number of buckets
% in the table is doubled and the previous contents reinserted into
% the new hash table.
%
% CAVEAT: the user is referred to the warning at the head of array.m
% with regard to the current use of unique objects.  Briefly, the
% problem is that the compiler does not yet properly understand
% unique modes, hence we fake it using non-unique modes.
% This means that care must be taken not to use an old version of a
% destructively updated structure (such as a hash_table) since the
% compiler will not currently detect such errors.
% 
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module hash_table.
:- interface.

:- import_module array.
:- import_module assoc_list.
:- import_module char.

%---------------------------------------------------------------------------%

:- type hash_table(K, V).

    % XXX This is all fake until the compiler can handle nested unique modes.
    %
:- inst hash_table == bound(ht(ground, ground, hash_pred, array)).
:- mode hash_table_ui == in(hash_table).
:- mode hash_table_di == di(hash_table).
:- mode hash_table_uo == out(hash_table).

:- type hash_pred(K) == ( pred(K, int) ).
:- inst hash_pred    == ( pred(in, out) is det ).

    % init(HashPred, N, MaxOccupancy)
    % constructs a new hash table with initial size 2 ^ N that is
    % doubled whenever MaxOccupancy is achieved; elements are
    % indexed using HashPred.
    %
    % HashPred must compute a hash for a given key.
    % N must be greater than 0.
    % MaxOccupancy must be in (0.0, 1.0).
    %
    % XXX Values too close to the limits may cause bad things
    % to happen.
    %
:- func init(hash_pred(K), int, float) = hash_table(K, V).
:- mode init(in(hash_pred), in, in) = hash_table_uo is det.

    % A synonym for the above.
    %
:- pragma obsolete(new/3).
:- func new(hash_pred(K), int, float) = hash_table(K, V).
:- mode new(in(hash_pred), in, in) = hash_table_uo is det.

    % init_default(HashFn) constructs a hash table with default size and
    % occupancy arguments.
    %
:- func init_default(hash_pred(K)) = hash_table(K, V).
:- mode init_default(in(hash_pred)) = hash_table_uo is det.

    % A synonym for the above.
    %
:- pragma obsolete(new_default/1).
:- func new_default(hash_pred(K)) = hash_table(K, V).
:- mode new_default(in(hash_pred)) = hash_table_uo is det.

    % Retrieve the hash_pred associated with a hash table.
    %
:- func hash_pred(hash_table(K, V)) = hash_pred(K).
:- mode hash_pred(hash_table_ui) = out(hash_pred) is det.

    % Default hash_preds for ints and strings and everything (buwahahaha!)
    %
:- pred int_hash(int::in, int::out) is det.
:- pred string_hash(string::in, int::out) is det.
:- pred char_hash(char::in, int::out) is det.
:- pred float_hash(float::in, int::out) is det.
:- pred generic_hash(T::in, int::out) is det.

    % Returns the number of buckets in a hash table.
    %
:- func num_buckets(hash_table(K, V)) = int.
:- mode num_buckets(hash_table_ui) = out is det.
%:- mode num_buckets(in) = out is det.

    % Returns the number of occupants in a hash table.
    %
:- func num_occupants(hash_table(K, V)) = int.
:- mode num_occupants(hash_table_ui) = out is det.
%:- mode num_occupants(in) = out is det.

    % Copy the hash table.
    %
    % This is not a deep copy, it copies only enough of the structure to
    % create a new unique table.
    %
:- func copy(hash_table(K, V)) = hash_table(K, V).
:- mode copy(hash_table_ui) = hash_table_uo is det.

    % Insert key-value binding into a hash table; if one is
    % already there then the previous value is overwritten.
    % A predicate version is also provided.
    %
:- func set(hash_table(K, V), K, V) = hash_table(K, V).
:- mode set(hash_table_di, in, in) = hash_table_uo is det.

:- pred set(K::in, V::in,
    hash_table(K, V)::hash_table_di, hash_table(K, V)::hash_table_uo) is det.

    % Field update for hash tables.
    % HT ^ elem(K) := V  is equivalent to  set(HT, K, V).
    %
:- func 'elem :='(K, hash_table(K, V), V) = hash_table(K, V).
:- mode 'elem :='(in, hash_table_di, in) = hash_table_uo is det.

    % Insert a key-value binding into a hash table.  An
    % exception is thrown if a binding for the key is already
    % present.  A predicate version is also provided.
    %
:- func det_insert(hash_table(K, V), K, V) = hash_table(K, V).
:- mode det_insert(hash_table_di, in, in) = hash_table_uo is det.

:- pred det_insert(K::in, V::in,
    hash_table(K, V)::hash_table_di, hash_table(K, V)::hash_table_uo) is det.

    % Change a key-value binding in a hash table.  An
    % exception is thrown if a binding for the key does not
    % already exist.  A predicate version is also provided.
    %
:- func det_update(hash_table(K, V), K, V) = hash_table(K, V).
:- mode det_update(hash_table_di, in, in) = hash_table_uo is det.

:- pred det_update(K::in, V::in,
    hash_table(K, V)::hash_table_di, hash_table(K, V)::hash_table_uo) is det.

    % Delete the entry for the given key, leaving the hash table
    % unchanged if there is no such entry.  A predicate version is also
    % provided.
    %
:- func delete(hash_table(K, V), K) = hash_table(K, V).
:- mode delete(hash_table_di, in) = hash_table_uo is det.

:- pred delete(K::in,
    hash_table(K, V)::hash_table_di, hash_table(K, V)::hash_table_uo) is det.

    % Lookup the value associated with the given key.  An exception
    % is raised if there is no entry for the key.
    %
:- func lookup(hash_table(K, V), K) = V.
:- mode lookup(hash_table_ui, in) = out is det.
%:- mode lookup(in, in) = out is det.

    % Field access for hash tables.
    % HT ^ elem(K)  is equivalent to  lookup(HT, K).
    %
:- func elem(K, hash_table(K, V)) = V.
:- mode elem(in, hash_table_ui) = out is det.
%:- mode elem(in, in) = out is det.

    % Like lookup, but just fails if there is no entry for the key.
    %
:- func search(hash_table(K, V), K) = V.
:- mode search(hash_table_ui, in) = out is semidet.
%:- mode search(in, in, out) is semidet.

:- pred search(hash_table(K, V), K, V).
:- mode search(hash_table_ui, in, out) is semidet.
%:- mode search(in, in, out) is semidet.

    % Convert a hash table into an association list.
    %
:- func to_assoc_list(hash_table(K, V)) = assoc_list(K, V).
:- mode to_assoc_list(hash_table_ui) = out is det.
%:- mode to_assoc_list(in) = out is det.

    % from_assoc_list(HashPred, N, MaxOccupancy, AssocList) = Table:
    %
    % Convert an association list into a hash table.  The first three
    % parameters are the same as for init/3 above.
    %
:- func from_assoc_list(hash_pred(K), int, float, assoc_list(K, V)) =
    hash_table(K, V).
:- mode from_assoc_list(in(hash_pred), in, in, in) = hash_table_uo is det.

    % A simpler version of from_assoc_list/4, the values for N and
    % MaxOccupancy are configured with defaults such as in init_default/1
    %
:- func from_assoc_list(hash_pred(K)::in(hash_pred), assoc_list(K, V)::in) =
    (hash_table(K, V)::hash_table_uo) is det.

    % Fold a function over the key-value bindings in a hash table.
    %
:- func fold(func(K, V, T) = T, hash_table(K, V), T) = T.
:- mode fold(func(in, in, in) = out is det, hash_table_ui, in) = out is det.
:- mode fold(func(in, in, di) = uo is det, hash_table_ui, di) = uo is det.

    % Fold a predicate over the key-value bindings in a hash table.
    %
:- pred fold(pred(K, V, T, T), hash_table(K, V), T, T).
:- mode fold(in(pred(in, in, in, out) is det), hash_table_ui,
    in, out) is det.
:- mode fold(in(pred(in, in, mdi, muo) is det), hash_table_ui,
    mdi, muo) is det.
:- mode fold(in(pred(in, in, di, uo) is det), hash_table_ui,
    di, uo) is det.
:- mode fold(in(pred(in, in, in, out) is semidet), hash_table_ui,
    in, out) is semidet.
:- mode fold(in(pred(in, in, mdi, muo) is semidet), hash_table_ui,
    mdi, muo) is semidet.
:- mode fold(in(pred(in, in, di, uo) is semidet), hash_table_ui,
    di, uo) is semidet.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module bool.
:- import_module deconstruct.
:- import_module exception.
:- import_module float.
:- import_module int.
:- import_module list.
:- import_module pair.
:- import_module string.
:- import_module type_desc.
:- import_module univ.

%---------------------------------------------------------------------------%

:- interface.

    % This should be abstract, but needs to be exported for insts.
    % We should consider using a mutable for num_occupants.
    %
:- type hash_table(K, V)
    --->    ht(
                num_occupants           :: int,
                max_occupants           :: int,
                hash_pred               :: hash_pred(K),
                buckets                 :: array(hash_table_alist(K, V))
            ).

:- implementation.

    % We use a custom association list representation for better performance.
    % assoc_list requires two cells to be allocated per table entry,
    % and presumably has worse locality.
    %
    % Array bounds checks may be omitted in this module because the array
    % indices are computed by: hash(Key) mod size(Array)

:- type buckets(K, V) == array(hash_table_alist(K, V)).

    % Assuming a decent hash function, there should be few collisions so each
    % bucket will usually contain an empty list or a singleton.  Including a
    % singleton constructor therefore reduces memory consumption.
    %
:- type hash_table_alist(K, V)
    --->    ht_nil
    ;       ht_single(K, V)
    ;       ht_cons(K, V, hash_table_alist(K, V)).

%---------------------------------------------------------------------------%

init(HashPred, N, MaxOccupancy) = HT :-
    (      if N =< 0 then
            throw(software_error("hash_table.init: N =< 0"))
      else if N >= int.bits_per_int then
            throw(software_error(
                "hash_table.init: N >= int.bits_per_int"))
      else if MaxOccupancy =< 0.0 then
            throw(software_error(
                "hash_table.init: MaxOccupancy =< 0.0"))
      else
            NumBuckets = 1 << N,
            MaxOccupants = ceiling_to_int(float(NumBuckets) * MaxOccupancy),
            Buckets = init(NumBuckets, ht_nil),
            HT = ht(0, MaxOccupants, HashPred, Buckets)
    ).

new(HashPred, N, MaxOccupancy) = init(HashPred, N, MaxOccupancy).

%---------------------------------------------------------------------------%

    % These numbers are picked out of thin air.
    %
init_default(HashPred) = init(HashPred, 7, 0.9).
new_default(HashPred) = init(HashPred, 7, 0.9).

%---------------------------------------------------------------------------%

num_buckets(HT) = size(HT ^ buckets).

%---------------------------------------------------------------------------%

:- func find_slot(hash_table(K, V), K) = int.
:- mode find_slot(hash_table_ui, in) = out is det.
%:- mode find_slot(in, in) = out is det.
:- pragma inline(find_slot/2).

find_slot(HT, K) = H :-
    find_slot_2(HT ^ hash_pred, K, HT ^ num_buckets, H).

:- pred find_slot_2(hash_pred(K)::in(hash_pred), K::in, int::in, int::out)
    is det.
:- pragma inline(find_slot_2/4).

find_slot_2(HashPred, K, NumBuckets, H) :-
    HashPred(K, Hash),
    % Since NumBuckets is a power of two we can avoid mod.
    H = Hash /\ (NumBuckets - 1).

%---------------------------------------------------------------------------%

copy(Orig) = Copy :-
    Orig = ht(NumOccupants, MaxOccupants, HashPred, Buckets0),
    array.copy(Buckets0, Buckets),
    Copy = ht(NumOccupants, MaxOccupants, HashPred, Buckets).

%---------------------------------------------------------------------------%

set(HT0, K, V) = HT :-
    H = find_slot(HT0, K),
    HT0 = ht(NumOccupants0, MaxOccupants, HashPred, Buckets0),
    array.unsafe_lookup(Buckets0, H, AL0),
    (
        AL0 = ht_nil,
        AL = ht_single(K, V),
        MayExpand = yes
    ;
        AL0 = ht_single(K0, _V0),
        ( if K0 = K then
            AL = ht_single(K0, V),
            MayExpand = no
          else
            AL = ht_cons(K, V, AL0),
            MayExpand = yes
        )
    ;
        AL0 = ht_cons(_, _, _),
        ( if alist_replace(AL0, K, V, AL1) then
            AL = AL1,
            MayExpand = no
          else
            AL = ht_cons(K, V, AL0),
            MayExpand = yes
        )
    ),
    array.unsafe_set(H, AL, Buckets0, Buckets),
    (
        MayExpand = no,
        HT = ht(NumOccupants0, MaxOccupants, HashPred, Buckets)
    ;
        MayExpand = yes,
        NumOccupants = NumOccupants0 + 1,
        ( NumOccupants > MaxOccupants ->
            HT = expand(NumOccupants, MaxOccupants, HashPred, Buckets)
        ;
            HT = ht(NumOccupants, MaxOccupants, HashPred, Buckets)
        )
    ).

'elem :='(K, HT, V) = set(HT, K, V).

set(K, V, HT, set(HT, K, V)).

:- pred alist_replace(hash_table_alist(K, V)::in, K::in, V::in,
    hash_table_alist(K, V)::out) is semidet.

alist_replace(AL0, K, V, AL) :-
    require_complete_switch [AL0]
    (
        AL0 = ht_nil,
        fail
    ;
        AL0 = ht_single(K, _),
        AL = ht_single(K, V)
    ;
        AL0 = ht_cons(K0, V0, T0),
        ( if K0 = K then
            AL = ht_cons(K0, V, T0)
          else
            alist_replace(T0, K, V, T),
            AL = ht_cons(K0, V0, T)
        )
    ).

%---------------------------------------------------------------------------%

search(HT, K, search(HT, K)).

search(HT, K) = V :-
    H = find_slot(HT, K),
    array.unsafe_lookup(HT ^ buckets, H, AL),
    alist_search(AL, K, V).

:- pred alist_search(hash_table_alist(K, V)::in, K::in, V::out) is semidet.

alist_search(AL, K, V) :-
    require_complete_switch [AL]
    (
        AL = ht_nil,
        fail
    ;
        AL = ht_single(K, V)
    ;
        AL = ht_cons(HK, HV, T),
        ( if HK = K then
            HV = V
          else
            alist_search(T, K, V)
        )
    ).

%---------------------------------------------------------------------------%

det_insert(HT0, K, V) = HT :-
    H = find_slot(HT0, K),
    HT0 = ht(NumOccupants0, MaxOccupants, HashPred, Buckets0),
    array.unsafe_lookup(Buckets0, H, AL0),
    (
        AL0 = ht_nil,
        AL = ht_single(K, V)
    ;
        ( AL0 = ht_single(_, _)
        ; AL0 = ht_cons(_, _, _)
        ),
        ( if alist_search(AL0, K, _) then
            throw(software_error(
                "hash_table.det_insert: key already present"))
          else
            AL = ht_cons(K, V, AL0)
        )
    ),
    array.unsafe_set(H, AL, Buckets0, Buckets),
    NumOccupants = NumOccupants0 + 1,
    ( NumOccupants > MaxOccupants ->
        HT = expand(NumOccupants, MaxOccupants, HashPred, Buckets)
    ;
        HT = ht(NumOccupants, MaxOccupants, HashPred, Buckets)
    ).

det_insert(K, V, HT, det_insert(HT, K, V)).

%---------------------------------------------------------------------------%

det_update(!.HT, K, V) = !:HT :-
    H = find_slot(!.HT, K),
    Buckets0 = !.HT ^ buckets,
    array.unsafe_lookup(Buckets0, H, AL0),
    ( if alist_replace(AL0, K, V, AL1) then
        AL = AL1
      else
        throw(software_error("hash_table.det_update: key not found"))
    ),
    array.unsafe_set(H, AL, Buckets0, Buckets),
    !HT ^ buckets := Buckets.

det_update(K, V, HT, det_update(HT, K, V)).

%---------------------------------------------------------------------------%

lookup(HT, K) =
    ( if V = search(HT, K)
      then V
      else throw(software_error("hash_table.lookup: key not found"))
    ).

elem(K, HT) = lookup(HT, K).

%---------------------------------------------------------------------------%

delete(HT0, K) = HT :-
    H = find_slot(HT0, K),
    array.unsafe_lookup(HT0 ^ buckets, H, AL0),
    ( if alist_remove(AL0, K, AL) then
        HT0 = ht(NumOccupants0, MaxOccupants, HashPred, Buckets0),
        array.unsafe_set(H, AL, Buckets0, Buckets),
        NumOccupants = NumOccupants0 - 1,
        HT = ht(NumOccupants, MaxOccupants, HashPred, Buckets)
      else
        HT = HT0
    ).

delete(K, HT, delete(HT, K)).

:- pred alist_remove(hash_table_alist(K, V)::in, K::in,
    hash_table_alist(K, V)::out) is semidet.

alist_remove(AL0, K, AL) :-
    require_complete_switch [AL0]
    (
        AL0 = ht_nil,
        fail
    ;
        AL0 = ht_single(K, _),
        % The preceding list node remains ht_cons but that is acceptable.
        AL = ht_nil
    ;
        AL0 = ht_cons(K0, V0, T0),
        ( if K0 = K then
            AL = T0
          else
            alist_remove(T0, K, T),
            AL = ht_cons(K0, V0, T)
        )
    ).

%---------------------------------------------------------------------------%

to_assoc_list(HT) = AL :-
    foldl(to_assoc_list_2, HT ^ buckets, [], AL).

:- pred to_assoc_list_2(hash_table_alist(K, V)::in,
    assoc_list(K, V)::in, assoc_list(K, V)::out) is det.

to_assoc_list_2(X, AL0, AL) :-
    (
        X = ht_nil,
        AL = AL0
    ;
        X = ht_single(K, V),
        AL = [K - V | AL0]
    ;
        X = ht_cons(K, V, T),
        AL1 = [K - V | AL0],
        to_assoc_list_2(T, AL1, AL)
    ).

from_assoc_list(HashPred, N, MaxOccupants, AList) = HT :-
    from_assoc_list_2(AList, init(HashPred, N, MaxOccupants), HT).

from_assoc_list(HashPred, AList) = HT :-
    from_assoc_list_2(AList, init_default(HashPred), HT).

:- pred from_assoc_list_2(assoc_list(K, V)::in,
    hash_table(K, V)::hash_table_di, hash_table(K, V)::hash_table_uo) is det.

from_assoc_list_2([], !HT).
from_assoc_list_2([K - V | T], !HT) :-
    !HT ^ elem(K) := V,
    from_assoc_list_2(T, !HT).

%---------------------------------------------------------------------------%

    % Hash tables expand by doubling in size.
    %
    % Ensuring expand/4 is _not_ inlined into hash_table.det_insert, etc.
    % actually makes those predicates more efficient.
    % expand calls array.init, which implicitly takes a type_info for
    % hash_table_alist(K, V) that has to be created dynamically.
    % array.init is not fully opt-exported so the unused type_info
    % argument is not eliminated, nor is the creation of the type_info
    % delayed until the (rare) call to expand.
    %
:- func expand(int::in, int::in, hash_pred(K)::in(hash_pred),
    buckets(K, V)::in) = (hash_table(K, V)::hash_table_uo) is det.

:- pragma no_inline(expand/4).

expand(NumOccupants, MaxOccupants0, HashPred, Buckets0) = HT :-
    NumBuckets0 = size(Buckets0),
    NumBuckets = NumBuckets0 + NumBuckets0,
    MaxOccupants = MaxOccupants0 + MaxOccupants0,
    array.init(NumBuckets, ht_nil, Buckets1),
    reinsert_bindings(0, Buckets0, HashPred, NumBuckets, Buckets1, Buckets),
    HT = ht(NumOccupants, MaxOccupants, HashPred, Buckets).

:- pred reinsert_bindings(int::in, buckets(K, V)::array_ui,
    hash_pred(K)::in(hash_pred), int::in,
    buckets(K, V)::array_di, buckets(K, V)::array_uo) is det.

reinsert_bindings(I, OldBuckets, HashPred, NumBuckets, !Buckets) :-
    ( if I >= size(OldBuckets) then
        true
      else
        array.unsafe_lookup(OldBuckets, I, AL),
        reinsert_alist(AL, HashPred, NumBuckets, !Buckets),
        reinsert_bindings(I + 1, OldBuckets, HashPred, NumBuckets, !Buckets)
    ).

:- pred reinsert_alist(hash_table_alist(K, V)::in, hash_pred(K)::in(hash_pred),
    int::in, buckets(K, V)::array_di, buckets(K, V)::array_uo) is det.

reinsert_alist(AL, HashPred, NumBuckets, !Buckets) :-
    (
        AL = ht_nil
    ;
        AL = ht_single(K, V),
        unsafe_insert(K, V, HashPred, NumBuckets, !Buckets)
    ;
        AL = ht_cons(K, V, T),
        unsafe_insert(K, V, HashPred, NumBuckets, !Buckets),
        reinsert_alist(T, HashPred, NumBuckets, !Buckets)
    ).

:- pred unsafe_insert(K::in, V::in, hash_pred(K)::in(hash_pred), int::in,
    buckets(K, V)::array_di, buckets(K, V)::array_uo) is det.

unsafe_insert(K, V, HashPred, NumBuckets, !Buckets) :-
    find_slot_2(HashPred, K, NumBuckets, H),
    array.unsafe_lookup(!.Buckets, H, AL0),
    (
        AL0 = ht_nil,
        AL = ht_single(K, V)
    ;
        ( AL0 = ht_single(_, _)
        ; AL0 = ht_cons(_, _, _)
        ),
        AL = ht_cons(K, V, AL0)
    ),
    array.unsafe_set(H, AL, !Buckets).

%---------------------------------------------------------------------------%

    % There are almost certainly better ones out there...
    %
int_hash(N, N).

    % From http://www.concentric.net/~Ttwang/tech/inthash.htm
    %   public int hash32shift(int key)
    %   public long hash64shift(long key)
    %
:- pragma foreign_proc("C",
    int_hash(N::in, H::out),
    [will_not_call_mercury, promise_pure, thread_safe, tabled_for_io],
"
    const int c2 = 0x27d4eb2d; /* a prime or an odd constant */
    MR_Unsigned key;

    key = N;

    if (sizeof(MR_Word) == 4) {
        key = (key ^ 61) ^ (key >> 16);
        key = key + (key << 3);
        key = key ^ (key >> 4);
        key = key * c2;
        key = key ^ (key >> 15);
    } else {
        key = (~key) + (key << 21); /* key = (key << 21) - key - 1; */
        key = key ^ (key >> 24);
        key = (key + (key << 3)) + (key << 8); /* key * 265 */
        key = key ^ (key >> 14);
        key = (key + (key << 2)) + (key << 4); /* key * 21 */
        key = key ^ (key >> 28);
        key = key + (key << 31);
    }

    H = key;
").

%---------------------------------------------------------------------------%

    % There are almost certainly better ones out there...
    %
string_hash(S, string.hash(S)).

%---------------------------------------------------------------------------%

    % There are almost certainly better ones out there...
    %
float_hash(F, float.hash(F)).

%---------------------------------------------------------------------------%

    % There are almost certainly better ones out there...
    %
char_hash(C, H) :-
    int_hash(char.to_int(C), H).

%---------------------------------------------------------------------------%

    % This, again, is straight off the top of my head.
    %
generic_hash(T, H) :-
    ( if      dynamic_cast(T, Int) then

        int_hash(Int, H)

      else if dynamic_cast(T, String) then

        string_hash(String, H)

      else if dynamic_cast(T, Float) then

        float_hash(Float, H)

      else if dynamic_cast(T, Char) then

        char_hash(Char, H)

      else if dynamic_cast(T, Univ) then

        generic_hash(univ_value(Univ), H)

      else if dynamic_cast_to_array(T, Array) then

        H = array.foldl(
                ( func(X, HA0) = HA :-
                    generic_hash(X, HX),
                    munge(HX, HA0) = HA
                ),
                Array,
                0
            )

      else

        deconstruct(T, canonicalize, FunctorName, Arity, Args),
        string_hash(FunctorName, H0),
        munge(Arity, H0) = H1,
        list.foldl(
            ( pred(U::in, HA0::in, HA::out) is det :-
                generic_hash(U, HUA),
                munge(HUA, HA0) = HA
            ),
            Args,
            H1, H
        )
    ).

%---------------------------------------------------------------------------%

:- func munge(int, int) = int.

munge(N, X) =
    (X `unchecked_left_shift` N) `xor`
    (X `unchecked_right_shift` (int.bits_per_int - N)).

%---------------------------------------------------------------------------%

fold(F, HT, X0) = X :-
    foldl(fold_f(F), HT ^ buckets, X0, X).

:- pred fold_f(func(K, V, T) = T, hash_table_alist(K, V), T, T).
:- mode fold_f(func(in, in, in) = out is det, in, in, out) is det.
:- mode fold_f(func(in, in, di) = uo is det, in, di, uo) is det.

fold_f(F, List, A0, A) :-
    (
        List = ht_nil,
        A = A0
    ;
        List = ht_single(K, V),
        A = F(K, V, A0)
    ;
        List = ht_cons(K, V, KVs),
        A1 = F(K, V, A0),
        fold_f(F, KVs, A1, A)
    ).

fold(P, HT, !A) :-
    foldl(fold_p(P), HT ^ buckets, !A).

:- pred fold_p(pred(K, V, T, T), hash_table_alist(K, V), T, T).
:- mode fold_p(pred(in, in, in, out) is det, in, in, out) is det.
:- mode fold_p(pred(in, in, mdi, muo) is det, in, mdi, muo) is det.
:- mode fold_p(pred(in, in, di, uo) is det, in, di, uo) is det.
:- mode fold_p(pred(in, in, in, out) is semidet, in, in, out) is semidet.
:- mode fold_p(pred(in, in, mdi, muo) is semidet, in, mdi, muo) is semidet.
:- mode fold_p(pred(in, in, di, uo) is semidet, in, di, uo) is semidet.

fold_p(P, List, !A) :-
    (
        List = ht_nil
    ;
        List = ht_single(K, V),
        P(K, V, !A)
    ;
        List = ht_cons(K, V, KVs),
        P(K, V, !A),
        fold_p(P, KVs, !A)
    ).

%---------------------------------------------------------------------------%
:- end_module hash_table.
%---------------------------------------------------------------------------%
