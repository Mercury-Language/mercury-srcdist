%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2005-2009, 2011-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: prim_data.m.
% Main authors: fjh, zs.
%
% This module contains some types and predicates that are, or are planned to
% be, shared between the compiler and the debugger.
%
%-----------------------------------------------------------------------------%

:- module mdbcomp.prim_data.
:- interface.

:- import_module mdbcomp.sym_name.

    % This enumeration must be EXACTLY the same as the MR_PredFunc enum
    % in runtime/mercury_stack_layout.h, and in the same order, since the
    % code (in browser) assumes the representation is the same.
    %
:- type pred_or_func
    --->    pf_predicate
    ;       pf_function.

    % The kinds of events with which MR_trace may be called, either
    % by compiler-generated code, or by code in the standard library
    % referring to compiler-generated data structures.
    %
    % This enumeration must be EXACTLY the same as the MR_TracePort enum
    % in runtime/mercury_trace_base.h, and in the same order, since the
    % code (in browser) assumes the representation is the same.
    %
:- type trace_port
    --->    port_call
    ;       port_exit
    ;       port_redo
    ;       port_fail
    ;       port_tailrec_call
    ;       port_exception
    ;       port_ite_cond
    ;       port_ite_then
    ;       port_ite_else
    ;       port_neg_enter
    ;       port_neg_success
    ;       port_neg_failure
    ;       port_disj_first
    ;       port_disj_later
    ;       port_switch
    ;       port_user.

    % A proc_label is a data structure a backend can use to as the basis
    % of the label used as the entry point of a procedure.
    %
    % The defining module is the module that provides the code for the
    % predicate, the declaring module contains the `:- pred' declaration.
    % When these are different, as for specialised versions of predicates
    % from `.opt' files, the defining module's name may need to be added
    % as a qualifier to the label.
    %
    % The type string_proc_label in program_representation.m parallels this
    % type, but differs from it in being used not inside the compiler but
    % outside, which means it needs to use different types for many fields.
    %
:- type proc_label
    --->    ordinary_proc_label(
                ord_defining_module     :: module_name,
                ord_p_or_f              :: pred_or_func,
                ord_declaring_module    :: module_name,
                ord_pred_name           :: string,
                ord_arity               :: int,
                ord_mode_number         :: int
            )
    ;       special_proc_label(
                spec_defining_module    :: module_name,
                spec_spec_id            :: special_pred_id,
                                        % The special_pred_id indirectly
                                        % defines the predicate name.
                spec_type_module        :: module_name,
                spec_type_name          :: string,
                spec_type_arity         :: int,
                spec_mode_number        :: int
            ).

:- type special_pred_id
    --->    spec_pred_unify
    ;       spec_pred_index
    ;       spec_pred_compare
    ;       spec_pred_init.

    % special_pred_name_arity(SpecialPredId, GenericPredName, TargetName,
    %   Arity):
    %
    % True iff there is a special predicate of category SpecialPredId,
    % called builtin.GenericPredName/Arity, and for which the name of the
    % predicate in the target language is TargetName.
    %
:- pred special_pred_name_arity(special_pred_id, string, string, int).
:- mode special_pred_name_arity(in, out, out, out) is det.
:- mode special_pred_name_arity(out, in, out, out) is semidet.
:- mode special_pred_name_arity(out, out, in, out) is semidet.

    % get_special_pred_id_generic_name(SpecialPredId) = GenericPredName:
    %
    % The name of the generic predicate for SpecialPredId is
    % builtin.GenericPredName.
    %
:- func get_special_pred_id_generic_name(special_pred_id) = string.

    % get_special_pred_id_target_name(SpecialPredId) = TargetName:
    %
    % The name of the predicate in the target language for SpecialPredId is
    % TargetName.
    %
:- func get_special_pred_id_target_name(special_pred_id) = string.

    % get_special_pred_id_name(SpecialPredId) = Arity:
    %
    % The arity of the SpecialPredId predicate is Arity.
    %
:- func get_special_pred_id_arity(special_pred_id) = int.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

special_pred_name_arity(spec_pred_unify, "unify", "__Unify__", 2).
special_pred_name_arity(spec_pred_index, "index", "__Index__", 2).
special_pred_name_arity(spec_pred_compare, "compare", "__Compare__", 3).
special_pred_name_arity(spec_pred_init, "initialise", "__Initialise__", 1).

get_special_pred_id_generic_name(Id) = Name :-
    special_pred_name_arity(Id, Name, _, _).

get_special_pred_id_target_name(Id) = Name :-
    special_pred_name_arity(Id, _, Name, _).

get_special_pred_id_arity(Id) = Arity :-
    special_pred_name_arity(Id, _, _, Arity).

%-----------------------------------------------------------------------------%
:- end_module mdbcomp.prim_data.
%-----------------------------------------------------------------------------%
