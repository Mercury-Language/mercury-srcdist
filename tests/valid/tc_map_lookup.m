% Mercury rotd-2006-11-04 and before could not compile this module because
% the .int file for tc_map_lookup_2 did not contain the (implementation)
% imports required by the typeclass constraints on the typeclass tc/1.
%
:- module tc_map_lookup.
:- interface.

:- import_module io.
:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module tc_map_lookup_2.

main -->
    io.write_string("hi.\n").
