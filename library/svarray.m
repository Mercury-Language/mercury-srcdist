%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et wm=0 tw=0
%-----------------------------------------------------------------------------%
% Copyright (C) 2004-2007, 2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%-----------------------------------------------------------------------------%
% 
% File: svarray.m
% 
% This file provides an interface to the 'array' ADT that is conducive to the
% use of state variable notation. The predicates here do the same thing as
% their counterparts in the array module; the only difference is the order
% of the arguments.
% 
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module svarray.
:- interface.

:- import_module array.

%-----------------------------------------------------------------------------%

    % svarray.set sets the nth element of an array, and returns the
    % resulting array (good opportunity for destructive update ;-).
    % Throws an exception if the index is out of bounds.
    %
:- pred svarray.set(int::in, T::in, array(T)::array_di, array(T)::array_uo)
    is det.

    % svarray.semidet_set sets the nth element of an array,
    % and returns the resulting array.
    % It fails if the index is out of bounds.
    %
:- pred svarray.semidet_set(int::in, T::in,
    array(T)::array_di, array(T)::array_uo) is semidet.

    % svarray.slow_set sets the nth element of an array,
    % and returns the resulting array.  The initial array is not
    % required to be unique, so the implementation may not be able to use
    % destructive update.
    % It is an error if the index is out of bounds.
    %
:- pred svarray.slow_set(int, T, array(T), array(T)).
%:- mode svarray.slow_set(in, in, array_ui, array_uo) is det.
:- mode svarray.slow_set(in, in, in, array_uo) is det.

    % svarray.semidet_slow_set sets the nth element of an array,
    % and returns the resulting array.  The initial array is not
    % required to be unique, so the implementation may not be able to use
    % destructive update.
    % It fails if the index is out of bounds.
    %
:- pred svarray.semidet_slow_set(int, T, array(T), array(T)).
%:- mode svarray.semidet_slow_set(in, in, array_ui, array_uo) is semidet.
:- mode svarray.semidet_slow_set(in, in, in, array_uo) is semidet.

    % svarray.resize(Size, Init, Array0, Array):
    % The array is expanded or shrunk to make it fit
    % the new size `Size'.  Any new entries are filled
    % with `Init'.
    %
:- pred svarray.resize(int::in, T::in, array(T)::array_di, array(T)::array_uo)
    is det.

    % svarray.shrink(Size, Array0, Array):
    % The array is shrunk to make it fit the new size `Size'.
    % Throws an exception if `Size' is larger than the size of `Array0'.
    %
:- pred svarray.shrink(int::in, array(T)::array_di, array(T)::array_uo)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

svarray.set(Index, Value, !Array) :-
    array.set(Index, Value, !Array).

svarray.semidet_set(Index, Value, !Array) :-
    array.semidet_set(Index, Value, !Array).

svarray.slow_set(Index, Value, !Array) :-
    array.slow_set(Index, Value, !Array).

svarray.semidet_slow_set(Index, Value, !Array) :-
    array.semidet_slow_set(Index, Value, !Array).

svarray.resize(Size, Init, !Array) :-
    array.resize(Size, Init, !Array).

svarray.shrink(Size, !Array) :-
    array.shrink(Size, !Array).

%-----------------------------------------------------------------------------%
