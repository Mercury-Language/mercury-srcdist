%----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%----------------------------------------------------------------------------%
% Copyright (C) 2014 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%----------------------------------------------------------------------------%
%
% File: simplify_tasks.m.
%
% This module handles the specification of what tasks the submodules of
% simplify.m should perform.
%
%----------------------------------------------------------------------------%

:- module check_hlds.simplify.simplify_tasks.
:- interface.

:- import_module libs.
:- import_module libs.globals.

:- import_module bool.
:- import_module list.

    % Each value of this type represents a task, or a group of related tasks,
    % that simplification should perform.
:- type simplify_task
    --->    simptask_warn_simple_code
            % --warn-simple-code

    ;       simptask_warn_duplicate_calls
            % --warn-duplicate-calls

    ;       simptask_format_calls
            % Invoke format_call.m.

    ;       simptask_warn_obsolete
            % --warn-obsolete

    ;       simptask_mark_code_model_changes
            % Some compiler passes generate HLDS in which changes in code model
            % are implicit in the determinisms stored in the goal_infos of
            % nested goals (such as a conjunction without outputs being
            % semidet, and some conjuncts being nondet). Make these code model
            % changes visible by adding a scope wrapper.

    ;       simptask_after_front_end
            % Do the tasks that should be done at the end of the front end.

    ;       simptask_excess_assigns
            % Remove excess assignment unifications.

    ;       simptask_elim_removable_scopes
            % Remove scopes that do not need processing during LLDS code
            % generation.

    ;       simptask_opt_duplicate_calls
            % Optimize duplicate calls.

    ;       simptask_constant_prop
            % Partially evaluate calls.

    ;       simptask_common_struct
            % Common structure elimination.

    ;       simptask_extra_common_struct
            % Do common structure elimination even when it might
            % increase stack usage (used by deforestation).

    ;       simptask_ignore_par_conjs.
            % Replace parallel conjunctions with plain conjunctions.

    % Each value of this type represents the full set of tasks
    % that simplification should perform. The submodules of simplify.m
    % use it to find out whether they should perform a specific task
    % without having to search a list of simplifications.
    %
    % The definition of this type does not need to be visible to modules
    % outside simplify.m, but avoiding such visibility would cost more
    % in extra complexity than it would gain.
:- type simplify_tasks
    --->    simplify_tasks(
                do_warn_simple_code         :: bool,
                do_warn_duplicate_calls     :: bool,
                do_format_calls             :: bool,
                do_warn_obsolete            :: bool,
                do_mark_code_model_changes  :: bool,
                do_after_front_end          :: bool,
                do_excess_assign            :: bool,
                do_elim_removable_scopes    :: bool,
                do_opt_duplicate_calls      :: bool,
                do_constant_prop            :: bool,
                do_common_struct            :: bool,
                do_extra_common_struct      :: bool,
                do_ignore_par_conjunctions  :: bool
            ).

:- func simplify_tasks_to_list(simplify_tasks) = list(simplify_task).
:- func list_to_simplify_tasks(list(simplify_task)) = simplify_tasks.

    % Find out which simplifications should be run from the options table
    % stored in the globals. The first argument states whether warnings
    % should be issued during this pass of simplification.
    %
:- pred find_simplify_tasks(bool::in, globals::in, simplify_tasks::out) is det.

%----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.

simplify_tasks_to_list(SimplifyTasks) = List :-
    SimplifyTasks = simplify_tasks(WarnSimpleCode, WarnDupCalls,
        DoFormatCalls, WarnObsolete, MarkCodeModelChanges,
        AfterFrontEnd, ExcessAssign, ElimRemovableScopes, OptDuplicateCalls,
        ConstantProp, CommonStruct, ExtraCommonStruct, RemoveParConjunctions),
    List =
        ( WarnSimpleCode = yes -> [simptask_warn_simple_code] ; [] ) ++
        ( WarnDupCalls = yes -> [simptask_warn_duplicate_calls] ; [] ) ++
        ( DoFormatCalls = yes -> [simptask_format_calls] ; [] ) ++
        ( WarnObsolete = yes -> [simptask_warn_obsolete] ; [] ) ++
        ( MarkCodeModelChanges = yes ->
            [simptask_mark_code_model_changes] ; [] ) ++
        ( AfterFrontEnd = yes -> [simptask_after_front_end] ; [] ) ++
        ( ExcessAssign = yes -> [simptask_excess_assigns] ; [] ) ++
        ( ElimRemovableScopes = yes ->
            [simptask_elim_removable_scopes] ; [] ) ++
        ( OptDuplicateCalls = yes -> [simptask_opt_duplicate_calls] ; [] ) ++
        ( ConstantProp = yes -> [simptask_constant_prop] ; [] ) ++
        ( CommonStruct = yes -> [simptask_common_struct] ; [] ) ++
        ( ExtraCommonStruct = yes -> [simptask_extra_common_struct] ; [] ) ++
        ( RemoveParConjunctions = yes -> [simptask_ignore_par_conjs] ; [] ).

list_to_simplify_tasks(List) =
    simplify_tasks(
        ( list.member(simptask_warn_simple_code, List) -> yes ; no ),
        ( list.member(simptask_warn_duplicate_calls, List) -> yes ; no ),
        ( list.member(simptask_format_calls, List) -> yes ; no ),
        ( list.member(simptask_warn_obsolete, List) -> yes ; no ),
        ( list.member(simptask_mark_code_model_changes, List) -> yes ; no ),
        ( list.member(simptask_after_front_end, List) -> yes ; no ),
        ( list.member(simptask_excess_assigns, List) -> yes ; no ),
        ( list.member(simptask_elim_removable_scopes, List) -> yes ; no ),
        ( list.member(simptask_opt_duplicate_calls, List) -> yes ; no ),
        ( list.member(simptask_constant_prop, List) -> yes ; no ),
        ( list.member(simptask_common_struct, List) -> yes ; no ),
        ( list.member(simptask_extra_common_struct, List) -> yes ; no ),
        ( list.member(simptask_ignore_par_conjs, List) -> yes ; no )
    ).

find_simplify_tasks(WarnThisPass, Globals, SimplifyTasks) :-
    globals.lookup_bool_option(Globals, warn_simple_code, WarnSimple),
    globals.lookup_bool_option(Globals, warn_duplicate_calls, WarnDupCalls),
    globals.lookup_bool_option(Globals, warn_known_bad_format_calls,
        WarnKnownBadFormat),
    globals.lookup_bool_option(Globals, warn_unknown_format_calls,
        WarnUnknownFormat),
    globals.lookup_bool_option(Globals, optimize_format_calls,
        OptFormatCalls),
    (
        (
            WarnThisPass = yes,
            ( WarnKnownBadFormat = yes ; WarnUnknownFormat = yes  )
        ;
            OptFormatCalls = yes
        )
    ->
        DoFormatCalls = yes
    ;
        DoFormatCalls = no
    ),
    globals.lookup_bool_option(Globals, warn_obsolete, WarnObsolete),
    globals.lookup_bool_option(Globals, excess_assign, ExcessAssign),
    globals.lookup_bool_option(Globals, common_struct, CommonStruct),
    globals.lookup_bool_option(Globals, optimize_duplicate_calls,
        OptDuplicateCalls),
    globals.lookup_bool_option(Globals, constant_propagation, ConstantProp),
    MarkCodeModelChanges = no,
    AfterFrontEnd = no,
    ElimRemovableScopes = no,
    ExtraCommonStruct = no,
    globals.lookup_bool_option(Globals, ignore_par_conjunctions,
        RemoveParConjunctions),

    SimplifyTasks = simplify_tasks(
        ( WarnSimple = yes, WarnThisPass = yes -> yes ; no),
        ( WarnDupCalls = yes, WarnThisPass = yes -> yes ; no),
        DoFormatCalls,
        ( WarnObsolete = yes, WarnThisPass = yes -> yes ; no),
        MarkCodeModelChanges,
        AfterFrontEnd,
        ExcessAssign,
        ElimRemovableScopes,
        OptDuplicateCalls,
        ConstantProp,
        CommonStruct,
        ExtraCommonStruct,
        RemoveParConjunctions
    ).

%---------------------------------------------------------------------------%
:- end_module check_hlds.simplify.simplify_tasks.
%---------------------------------------------------------------------------%
