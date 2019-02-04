%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et wm=0 tw=0
%---------------------------------------------------------------------------%
% Copyright (C) 2003, 2005-2006 The University of Melbourne.
% This file may only be copied under the terms of the GNU Library General
% Public License - see the file COPYING.LIB in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% This is the top module of a library that contains information shared
% between the debugger and the compiler. This means mostly the definitions
% of data structures that the compiler generates for the debugger, and
% the predicates that operate on them.
%
% The compiler links in this library in all grades, but links in the browser
% library (module mdb and its submodules) only when debugging is enabled.
% Therefore the modules of the mdbcomp library should avoid importing any
% part of the mdb module.

:- module mdbcomp.

:- interface.

:- pred mdbcomp.version(string::out) is det.

% If you add any modules here, you should update the list in slice/Mmakefile.
:- include_module prim_data.
:- include_module program_representation.
:- include_module rtti_access.
:- include_module slice_and_dice.
:- include_module trace_counts.

:- implementation.

% See library/library.m for why we implement this predicate this way.

:- pragma foreign_proc("C",
    mdbcomp.version(Version::out),
    [will_not_call_mercury, promise_pure, thread_safe],
"
    MR_ConstString version_string;

    version_string = MR_VERSION "", configured for "" MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
").

mdbcomp.version("unknown version").

%---------------------------------------------------------------------------%
