%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: stratify.m.
% Main authors: ohutch, conway.
%
% This module performs stratification analysis.
% It works by processing the call graph 1 scc at a time. It traverses
% the goal for each procedure in the scc and reports an error or
% warning (depending on the context) for any negated call to another member
% of the scc. If it encounters a higher order call or a call to an
% outside module it will also emit a message.
%
% It has a second pass which is not currently enabled
%
% The second pass looks for possible non stratified code by looking at
% higher order calls. This second pass works by rebuilding the call
% graph with any possible arcs that can arise though higher order calls
% and then traversing the new sccs looking for negative loops
%
% The second pass is necessary because the rebuilt call graph does not
% allow the detection of definite non-stratification.
%
%-----------------------------------------------------------------------------%

:- module check_hlds.stratify.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_module.

:- import_module io.

    % Perform stratification analysis, for the given module. If the
    % "warn-non-stratification" option is set, this predicate will check
    % the entire module for stratification, otherwise it will only check
    % the predicates in the stratified_preds set of the module_info structure.
    %
:- pred check_stratification(module_info::in, module_info::out,
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.mode_util.
:- import_module hlds.hlds_error_util.
:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.hlds_pred.
:- import_module libs.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_type.
:- import_module transform_hlds.    % for pd_cost, etc.
:- import_module transform_hlds.dependency_graph.

:- import_module assoc_list.
:- import_module bool.
:- import_module digraph.
:- import_module list.
:- import_module map.
:- import_module pair.
:- import_module set.
:- import_module string.

check_stratification(!ModuleInfo, !IO) :-
    module_info_ensure_dependency_info(!ModuleInfo),
    module_info_dependency_info(!.ModuleInfo, DepInfo),

    hlds_dependency_info_get_dependency_graph(DepInfo, DepGraph0),
    digraph.atsort(DepGraph0, FOSCCs1),
    dep_sets_to_lists_and_sets(FOSCCs1, [], FOSCCs),
    globals.io_lookup_bool_option(warn_non_stratification, Warn, !IO),
    module_info_get_stratified_preds(!.ModuleInfo, StratifiedPreds),
    first_order_check_sccs(FOSCCs, StratifiedPreds, Warn, !ModuleInfo, !IO).

    % The following code was used for the second pass of this module but
    % as that pass is disabled so is this code. The higher order code
    % is disabled because it is currently unable to detect cases where a
    % higher order proc is hidden in some complex data structure
    %
    % gen_conservative_graph(!ModuleInfo, DepGraph0, DepGraph, HOInfo),
    % digraph.atsort(DepGraph, HOSCCs1),
    % dep_sets_to_lists_and_sets(HOSCCs1, [], HOSCCs),
    % higher_order_check_sccs(HOSCCs, HOInfo, !ModuleInfo, !IO).

%-----------------------------------------------------------------------------%

:- pred dep_sets_to_lists_and_sets(list(set(pred_proc_id))::in,
    assoc_list(list(pred_proc_id), set(pred_id))::in,
    assoc_list(list(pred_proc_id), set(pred_id))::out) is det.

dep_sets_to_lists_and_sets([], !DepList).
dep_sets_to_lists_and_sets([PredProcSet | PredProcSets], !DepList) :-
    set.to_sorted_list(PredProcSet, PredProcList),
    list.map(get_proc_id, PredProcList, ProcList),
    set.list_to_set(ProcList, ProcSet),
    !:DepList = [PredProcList - ProcSet | !.DepList],
        dep_sets_to_lists_and_sets(PredProcSets, !DepList).

:- pred get_proc_id(pred_proc_id::in, pred_id::out) is det.

get_proc_id(proc(PredId, _), PredId).

    % Check the first order SCCs for stratification.
    %
:- pred first_order_check_sccs(
    assoc_list(list(pred_proc_id), set(pred_id))::in,
    set(pred_id)::in, bool::in, module_info::in, module_info::out,
    io::di, io::uo) is det.

first_order_check_sccs([], _, _, !ModuleInfo, !IO).
first_order_check_sccs([SCCl - SCCs | Rest], StratifiedPreds, Warn0,
        !ModuleInfo, !IO) :-
    (
        set.intersect(SCCs, StratifiedPreds, Intersection),
        set.empty(Intersection)
    ->
        Warn = Warn0
    ;
        Warn = yes
    ),
    (
        Warn = yes,
        first_order_check_scc(SCCl, no, !ModuleInfo, !IO)
    ;
        Warn = no
    ),
    first_order_check_sccs(Rest, StratifiedPreds, Warn0, !ModuleInfo, !IO).

:- pred first_order_check_scc(list(pred_proc_id)::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

first_order_check_scc(Scc, Error, !ModuleInfo, !IO) :-
    first_order_check_scc_2(Scc, Scc, Error, !ModuleInfo, !IO).

:- pred first_order_check_scc_2(list(pred_proc_id)::in, list(pred_proc_id)::in,
    bool::in, module_info::in, module_info::out, io::di, io::uo) is det.

first_order_check_scc_2([], _Scc, _, !ModuleInfo, !IO).
first_order_check_scc_2([PredProcId | Remaining], WholeScc, Error, !ModuleInfo,
        !IO) :-
    PredProcId = proc(PredId, ProcId),
    module_info_pred_info(!.ModuleInfo, PredId, PredInfo),
    pred_info_get_procedures(PredInfo, ProcTable),
    map.lookup(ProcTable, ProcId, Proc),
    proc_info_get_goal(Proc, hlds_goal(GoalExpr, GoalInfo)),
    first_order_check_goal(GoalExpr, GoalInfo, no, WholeScc,
        PredProcId, Error, !ModuleInfo, !IO),
    first_order_check_scc_2(Remaining, WholeScc, Error, !ModuleInfo, !IO).

:- pred first_order_check_goal(hlds_goal_expr::in, hlds_goal_info::in,
    bool::in, list(pred_proc_id)::in, pred_proc_id::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

first_order_check_goal(conj(_ConjType, Goals), _GoalInfo, Negated, WholeScc,
        ThisPredProcId, Error, !ModuleInfo, !IO) :-
    first_order_check_goal_list(Goals, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).
first_order_check_goal(disj(Goals), _GoalInfo, Negated,
        WholeScc, ThisPredProcId, Error, !ModuleInfo, !IO) :-
    first_order_check_goal_list(Goals, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).
first_order_check_goal(switch(_Var, _Fail, Cases), _GoalInfo, Negated,
        WholeScc, ThisPredProcId, Error, !ModuleInfo, !IO) :-
    first_order_check_case_list(Cases, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).
first_order_check_goal(if_then_else(_Vars, Cond, Then, Else), _GoalInfo,
        Negated, WholeScc, ThisPredProcId, Error, !ModuleInfo, !IO) :-
    Cond = hlds_goal(CondExpr, CInfo),
    Then = hlds_goal(ThenExpr, TInfo),
    Else = hlds_goal(ElseExpr, EInfo),
    first_order_check_goal(CondExpr, CInfo, yes, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO),
    first_order_check_goal(ThenExpr, TInfo, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO),
    first_order_check_goal(ElseExpr, EInfo, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).
first_order_check_goal(scope(_, hlds_goal(GoalExpr, GoalInfo)), _GoalInfo,
        Negated, WholeScc, ThisPredProcId, Error, !ModuleInfo, !IO) :-
    first_order_check_goal(GoalExpr, GoalInfo, Negated, WholeScc,
        ThisPredProcId, Error, !ModuleInfo, !IO).
first_order_check_goal(negation(hlds_goal(GoalExpr, GoalInfo)), _GoalInfo,
        _Negated, WholeScc, ThisPredProcId, Error, !ModuleInfo, !IO) :-
    first_order_check_goal(GoalExpr, GoalInfo, yes, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).
first_order_check_goal(call_foreign_proc(_Attributes, CPred, CProc,
        _, _, _, _), GoalInfo, Negated, WholeScc, ThisPredProcId, Error,
        !ModuleInfo, !IO) :-
    (
        Negated = yes,
        list.member(proc(CPred, CProc),  WholeScc)
    ->
        Context = goal_info_get_context(GoalInfo),
        emit_message(ThisPredProcId, Context,
            "call introduces a non-stratified loop.", Error, !ModuleInfo, !IO)
    ;
        true
    ).
first_order_check_goal(unify(_Var, _RHS, _Mode, _Uni, _Context), _GoalInfo,
        _Negated, _WholeScc, _ThisPredProcId, _, !ModuleInfo, !IO).
first_order_check_goal(plain_call(CPred, CProc, _Args, _BuiltinState, _UC,
        _Sym), GInfo, Negated, WholeScc, ThisPredProcId, Error, !ModuleInfo,
        !IO) :-
    Callee = proc(CPred, CProc),
    (
        Negated = yes,
        list.member(Callee, WholeScc)
    ->
        Context = goal_info_get_context(GInfo),
        emit_message(ThisPredProcId, Context,
            "call introduces a non-stratified loop.", Error, !ModuleInfo, !IO)
    ;
        true
    ).
first_order_check_goal(generic_call(_Var, _Vars, _Modes, _Det), _GInfo,
        _Negated, _WholeScc, _ThisPredProcId, _Error,  !ModuleInfo, !IO).
first_order_check_goal(shorthand(_), _, _, _, _, _, !ModuleInfo, !IO) :-
    % these should have been expanded out by now
    unexpected(this_file, "first_order_check_goal: unexpected shorthand").

:- pred first_order_check_goal_list(list(hlds_goal)::in, bool::in,
    list(pred_proc_id)::in, pred_proc_id::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

first_order_check_goal_list([], _, _, _, _, !ModuleInfo, !IO).
first_order_check_goal_list([hlds_goal(GoalExpr, GoalInfo) | Goals], Negated,
        WholeScc, ThisPredProcId, Error, !ModuleInfo, !IO) :-
    first_order_check_goal(GoalExpr, GoalInfo, Negated, WholeScc,
        ThisPredProcId, Error, !ModuleInfo, !IO),
    first_order_check_goal_list(Goals, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).

:- pred first_order_check_case_list(list(case)::in, bool::in,
    list(pred_proc_id)::in, pred_proc_id::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

first_order_check_case_list([], _, _, _, _, !ModuleInfo, !IO).
first_order_check_case_list([Case | Goals], Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO) :-
    Case = case(_ConsId, hlds_goal(GoalExpr, GoalInfo)),
    first_order_check_goal(GoalExpr, GoalInfo, Negated, WholeScc,
        ThisPredProcId, Error, !ModuleInfo, !IO),
    first_order_check_case_list(Goals, Negated, WholeScc, ThisPredProcId,
        Error, !ModuleInfo, !IO).

%-----------------------------------------------------------------------------%

 % XXX : Currently we don't allow the higher order case so this code
 % is disabled.

    % Check the higher order SCCs for stratification.
    %
:- pred higher_order_check_sccs(
    assoc_list(list(pred_proc_id), set(pred_proc_id))::in,
    ho_map::in, module_info::in, module_info::out, io::di, io::uo) is det.

higher_order_check_sccs([], _HOInfo, !ModuleInfo, !IO).
higher_order_check_sccs([SCCl - SCCs | Rest], HOInfo, !ModuleInfo, !IO) :-
    higher_order_check_scc(SCCl, SCCs, HOInfo, !ModuleInfo, !IO),
    higher_order_check_sccs(Rest, HOInfo, !ModuleInfo, !IO).

:- pred higher_order_check_scc(list(pred_proc_id)::in, set(pred_proc_id)::in,
    ho_map::in, module_info::in, module_info::out, io::di, io::uo) is det.

higher_order_check_scc([], _WholeScc, _HOInfo, !ModuleInfo, !IO).
higher_order_check_scc([PredProcId | Remaining], WholeScc, HOInfo,
        !ModuleInfo, !IO) :-
    PredProcId = proc(PredId, ProcId),
    module_info_pred_info(!.ModuleInfo, PredId, PredInfo),
    globals.io_lookup_bool_option(warn_non_stratification, Warn, !IO),
    Error = no,
    (
        Warn = yes,
        map.search(HOInfo, PredProcId, HigherOrderInfo)
    ->
        HigherOrderInfo = info(HOCalls, _),
        set.intersect(HOCalls, WholeScc, HOLoops),
        ( set.empty(HOLoops) ->
            HighOrderLoops = no
        ;
            HighOrderLoops = yes
        ),
        pred_info_get_procedures(PredInfo, ProcTable),
        map.lookup(ProcTable, ProcId, Proc),
        proc_info_get_goal(Proc, hlds_goal(GoalExpr, GoalInfo)),
        higher_order_check_goal(GoalExpr, GoalInfo, no, WholeScc,
            PredProcId, HighOrderLoops, Error, !ModuleInfo, !IO)
    ;
        true
    ),
    higher_order_check_scc(Remaining, WholeScc, HOInfo, !ModuleInfo, !IO).

:- pred higher_order_check_goal(hlds_goal_expr::in, hlds_goal_info::in,
    bool::in, set(pred_proc_id)::in, pred_proc_id::in, bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

higher_order_check_goal(conj(_ConjType, Goals), _GoalInfo, Negated, WholeScc,
        ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO) :-
    higher_order_check_goal_list(Goals, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).
higher_order_check_goal(disj(Goals), _GoalInfo, Negated, WholeScc,
        ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO) :-
    higher_order_check_goal_list(Goals, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).
higher_order_check_goal(switch(_Var, _Fail, Cases), _GoalInfo, Negated,
        WholeScc, ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO) :-
    higher_order_check_case_list(Cases, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).
higher_order_check_goal(if_then_else(_Vars, Cond, Then, Else), _GoalInfo,
        Negated, WholeScc, ThisPredProcId, HighOrderLoops, Error,
        !ModuleInfo, !IO) :-
    Cond = hlds_goal(CondExpr, CInfo),
    Then = hlds_goal(ThenExpr, TInfo),
    Else = hlds_goal(ElseExpr, EInfo),
    higher_order_check_goal(CondExpr, CInfo, yes, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO),
    higher_order_check_goal(ThenExpr, TInfo, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO),
    higher_order_check_goal(ElseExpr, EInfo, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).
higher_order_check_goal(scope(_, hlds_goal(GoalExpr, GoalInfo)), _GoalInfo,
        Negated, WholeScc, ThisPredProcId, HighOrderLoops, Error,
        !ModuleInfo, !IO) :-
    higher_order_check_goal(GoalExpr, GoalInfo, Negated, WholeScc,
        ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO).
higher_order_check_goal(negation(hlds_goal(GoalExpr, GoalInfo)), _GoalInfo,
        _Negated, WholeScc, ThisPredProcId, HighOrderLoops, Error,
        !ModuleInfo, !IO) :-
    higher_order_check_goal(GoalExpr, GoalInfo, yes, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).
higher_order_check_goal(call_foreign_proc(_IsRec, _, _, _, _, _, _), _GoalInfo,
        _Negated, _WholeScc, _ThisPredProcId, _HighOrderLoops, _,
        !ModuleInfo, !IO).
higher_order_check_goal(unify(_Var, _RHS, _Mode, _Uni, _Context), _GoalInfo,
        _Negated, _WholeScc, _ThisPredProcId, _HighOrderLoops, _Error,
        !ModuleInfo, !IO).
higher_order_check_goal(plain_call(_CPred, _CProc, _Args, _Builtin, _UC, Sym),
        GoalInfo, _Negated, _WholeScc, ThisPredProcId, HighOrderLoops,
        Error, !ModuleInfo, !IO) :-
    (
        % XXX : is this good enough to detect all calls to solutions ?
        HighOrderLoops = yes,
        ( Sym = unqualified(Name)
        ; Sym = qualified(_, Name)
        ),
        Name = "solutions"
    ->
        Context = goal_info_get_context(GoalInfo),
        emit_message(ThisPredProcId, Context,
            "call to solutions/2 introduces a non-stratified loop.",
            Error, !ModuleInfo, !IO)
    ;
        true
    ).

higher_order_check_goal(generic_call(GenericCall, _Vars, _Modes, _Det),
        GoalInfo, Negated, _WholeScc, ThisPredProcId, HighOrderLoops,
        Error, !ModuleInfo, !IO) :-
    (
        Negated = yes,
        HighOrderLoops = yes,
        ( GenericCall = higher_order(_, _, _, _), Msg = "higher order"
        ; GenericCall = class_method(_, _, _, _), Msg = "class method"
        )
    ->
        Context = goal_info_get_context(GoalInfo),
        ErrorMsg = Msg ++ " call may introduce a non-stratified loop.",
        emit_message(ThisPredProcId, Context, ErrorMsg, Error, !ModuleInfo,
            !IO)
    ;
        true
    ).
higher_order_check_goal(shorthand(_), _, _, _, _, _, _, _, _, !IO) :-
    % these should have been expanded out by now
    unexpected(this_file, "higher_order_check_goal: unexpected shorthand").

:- pred higher_order_check_goal_list(list(hlds_goal)::in, bool::in,
    set(pred_proc_id)::in, pred_proc_id::in, bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

higher_order_check_goal_list([], _, _, _, _, _, !ModuleInfo, !IO).
higher_order_check_goal_list([hlds_goal(GoalExpr, GoalInfo) | Goals], Negated,
        WholeScc, ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO) :-
    higher_order_check_goal(GoalExpr, GoalInfo, Negated, WholeScc,
        ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO),
    higher_order_check_goal_list(Goals, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).

:- pred higher_order_check_case_list(list(case)::in, bool::in,
    set(pred_proc_id)::in, pred_proc_id::in, bool::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

higher_order_check_case_list([], _, _, _, _, _, !ModuleInfo, !IO).
higher_order_check_case_list([Case | Goals], Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO) :-
    Case = case(_ConsId, hlds_goal(GoalExpr, GoalInfo)),
    higher_order_check_goal(GoalExpr, GoalInfo, Negated, WholeScc,
        ThisPredProcId, HighOrderLoops, Error, !ModuleInfo, !IO),
    higher_order_check_case_list(Goals, Negated, WholeScc, ThisPredProcId,
        HighOrderLoops, Error, !ModuleInfo, !IO).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

    % Direction higher order params can flow in a procedure.
:- type ho_in_out
    --->    ho_in
    ;       ho_out
    ;       ho_in_out
    ;       ho_none.

    % This structure is used to hold the higher order characteristics of a
    % procedure.
:- type higher_order_info
    --->    info(
                set(pred_proc_id),  % Possible higher order addresses that
                                    % can reach the procedure.
                ho_in_out           % Possible paths the address can take
                                    % in and out of the procedure.
            ).

    % A map from all non imported procedures to there higher order info.
:- type ho_map   == map(pred_proc_id, higher_order_info).

    % A map from all non imported procs to all the procedures they can call.
:- type call_map == map(pred_proc_id, set(pred_proc_id)).

    % Given a module and a dependency graph, this predicate builds
    % a new dependency graph with all possible higher order calls added.
    % It also returns a map of all the higher order info it collects.
    %
:- pred gen_conservative_graph(module_info::in, module_info::out,
    dependency_graph::in, dependency_graph::out, ho_map::out) is det.

gen_conservative_graph(!ModuleInfo, !DepGraph, HOInfo) :-
    get_call_info(!ModuleInfo, ProcCalls, HOInfo0, CallsHO),
    map.keys(ProcCalls, Callers),
    iterate_solution(Callers, ProcCalls, CallsHO, HOInfo0, HOInfo),
    map.to_assoc_list(HOInfo, HOInfoL),
    add_new_arcs(HOInfoL, CallsHO, !DepGraph).

    % For a given module, collects for each non imported procedure
    % a set of called procedures and a higher order info structure.
    % This pred also returns a set of all non imported procedures that
    % make a higher order call.
    %
:- pred get_call_info(module_info::in, module_info::out, call_map::out,
    ho_map::out, set(pred_proc_id)::out) is det.

get_call_info(!ModuleInfo, !:ProcCalls, !:HOInfo, !:CallsHO) :-
    map.init(!:ProcCalls),
    map.init(!:HOInfo),
    set.init(!:CallsHO),
    module_info_predids(PredIds, !ModuleInfo),
    expand_predids(PredIds, !.ModuleInfo, !ProcCalls, !HOInfo, !CallsHO).

    % Finds the transitive closure of a given list of procedures.
    % This pred is used to see how face(???) a higher order address
    % can reach though procedure calls.
    %
:- pred iterate_solution(list(pred_proc_id)::in, call_map::in,
    set(pred_proc_id)::in, ho_map::in, ho_map::out) is det.

iterate_solution(PredProcs, ProcCalls, CallsHO, !HOInfo) :-
    tc(PredProcs, ProcCalls, CallsHO, !HOInfo, no, Changed),
    (
        Changed = no
    ;
        Changed = yes,
        iterate_solution(PredProcs, ProcCalls, CallsHO, !HOInfo)
    ).

    % For each caller, merge any higher order addresses it takes with all of
    % its callees, and return if any change has occurred.
    %
:- pred tc(list(pred_proc_id)::in, call_map::in, set(pred_proc_id)::in,
    ho_map::in, ho_map::out, bool::in, bool::out) is det.

tc([], _, _, !HOInfo, !Changed).
tc([PredProcId | PredProcIds], ProcCalls, CallsHO, !HOInfo, !Changed) :-
    map.lookup(ProcCalls, PredProcId, PCalls),
    set.to_sorted_list(PCalls, PCallsL),
    merge_calls(PCallsL, PredProcId, CallsHO, yes, !HOInfo, !Changed),
    tc(PredProcIds, ProcCalls, CallsHO, !HOInfo, !Changed).

    % Merge any higher order addresses that can pass between the given caller
    % and callees. This code also merges any possible addresses that can pass
    % in and out of higher order calls.
    %
:- pred merge_calls(list(pred_proc_id)::in, pred_proc_id::in,
    set(pred_proc_id)::in, bool::in, ho_map::in, ho_map::out,
    bool::in, bool::out) is det.

merge_calls([], _, _, _, !HOInfo, !Changed).
merge_calls([C | Cs], P, CallsHO, DoingFirstOrder, !HOInfo, !Changed) :-
    ( map.search(!.HOInfo, C, CInfo) ->
        map.lookup(!.HOInfo, P, PInfo),
        CInfo = info(CHaveAT0, CHOInOut),
        PInfo = info(PHaveAT0, PHOInOut),
        % First merge the first order info, if we need to.
        ( CHOInOut = ho_none ->
            true
        ;
            (
                CHOInOut = ho_in,
                ( set.subset(PHaveAT0, CHaveAT0) ->
                    CHaveAT = CHaveAT0
                ;
                    set.union(PHaveAT0, CHaveAT0, CHaveAT),
                    !:Changed = yes
                ),
                PHaveAT = PHaveAT0
            ;
                CHOInOut = ho_out,
                ( set.subset(CHaveAT0, PHaveAT0) ->
                    PHaveAT = PHaveAT0
                ;
                    set.union(CHaveAT0, PHaveAT0, PHaveAT),
                    !:Changed = yes
                ),
                CHaveAT = CHaveAT0
            ;
                CHOInOut = ho_in_out,
                ( CHaveAT0 = PHaveAT0 ->
                    CHaveAT = CHaveAT0,
                    PHaveAT = PHaveAT0
                ;
                    set.union(CHaveAT0, PHaveAT0, NewHaveAT),
                    CHaveAT = NewHaveAT,
                    PHaveAT = NewHaveAT,
                    !:Changed = yes
                )
            ;
                CHOInOut = ho_none,
                % XXX : what is a good message for this?
                unexpected(this_file, "merge_calls : this cannot happen!")
            ),
            NewCInfo = info(CHaveAT, CHOInOut),
            NewPInfo = info(PHaveAT, PHOInOut),
            map.det_update(!.HOInfo, C, NewCInfo, !:HOInfo),
            map.det_update(!.HOInfo, P, NewPInfo, !:HOInfo)
        ),
        % Then, if we need to, merge the higher order info.
        (
            DoingFirstOrder = yes,
            set.member(P, CallsHO)
        ->
            map.lookup(!.HOInfo, P, PHOInfo),
            PHOInfo = info(PossibleCalls, _),
            set.to_sorted_list(PossibleCalls, PossibleCallsL),
            merge_calls(PossibleCallsL, P, CallsHO, no, !HOInfo, !Changed)
        ;
            true
        ),
        merge_calls(Cs, P, CallsHO, DoingFirstOrder, !HOInfo, !Changed)
    ;
        merge_calls(Cs, P, CallsHO, DoingFirstOrder, !HOInfo, !Changed)
    ).

    % Given the set of procedures that make higher order calls and a
    % list of procedures and higher order call info, this predicate rebuilds
    % the given call graph with new arcs for every possible higher order call.
    %
:- pred add_new_arcs(assoc_list(pred_proc_id, higher_order_info)::in,
    set(pred_proc_id)::in, dependency_graph::in, dependency_graph::out) is det.

add_new_arcs([], _, !DepGraph).
add_new_arcs([Caller - CallerInfo | Cs], CallsHO, !DepGraph) :-
    % Only add arcs for callers who call higher order procs.
    ( set.member(Caller, CallsHO) ->
        CallerInfo = info(PossibleCallees0, _),
        set.to_sorted_list(PossibleCallees0, PossibleCallees),
        digraph.lookup_key(!.DepGraph, Caller, CallerKey),
        add_new_arcs2(PossibleCallees, CallerKey, !DepGraph)
    ;
        true
    ),
    add_new_arcs(Cs, CallsHO, !DepGraph).

:- pred add_new_arcs2(list(pred_proc_id)::in, dependency_graph_key::in,
    dependency_graph::in, dependency_graph::out) is det.

add_new_arcs2([], _, !DepGraph).
add_new_arcs2([Callee | Cs], CallerKey, !DepGraph) :-
    digraph.lookup_key(!.DepGraph, Callee, CalleeKey),
    digraph.add_edge(CallerKey, CalleeKey, !DepGraph),
    add_new_arcs2(Cs, CallerKey, !DepGraph).

    % For each given pred id, pass all non imported procs onto the
    % process_procs predicate.
    %
:- pred expand_predids(list(pred_id)::in, module_info::in,
    call_map::in, call_map::out, ho_map::in, ho_map::out,
    set(pred_proc_id)::in, set(pred_proc_id)::out) is det.

expand_predids([], _, !ProcCalls, !HOInfo, !CallsHO).
expand_predids([PredId | PredIds], ModuleInfo, !ProcCalls, !HOInfo,
        !CallsHO) :-
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    Procs = pred_info_non_imported_procids(PredInfo),
    pred_info_get_procedures(PredInfo, ProcTable),
    pred_info_get_arg_types(PredInfo, ArgTypes),
    process_procs(Procs, ModuleInfo, PredId, ArgTypes, ProcTable,
        !ProcCalls, !HOInfo, !CallsHO),
    expand_predids(PredIds, ModuleInfo, !ProcCalls, !HOInfo, !CallsHO).

    % For each given proc id, generate the set of procedures it calls
    % and its higher order info structure.
    %
:- pred process_procs(list(proc_id)::in, module_info::in, pred_id::in,
    list(mer_type)::in, proc_table::in, call_map::in, call_map::out,
    ho_map::in, ho_map::out, set(pred_proc_id)::in, set(pred_proc_id)::out)
    is det.

process_procs([], _, _, _, _, !ProcCalls, !HOInfo, !CallsHO).
process_procs([ProcId | Procs], ModuleInfo, PredId, ArgTypes, ProcTable,
        !ProcCalls, !HOInfo, !CallsHO) :-
    map.lookup(ProcTable, ProcId, ProcInfo),
    proc_info_get_argmodes(ProcInfo, ArgModes),
    proc_info_get_goal(ProcInfo, hlds_goal(GoalExpr, _GoalInfo)),
    PredProcId = proc(PredId, ProcId),
    check_goal(GoalExpr, Calls, HaveAT, CallsHigherOrder),
    map.det_insert(!.ProcCalls, PredProcId, Calls, !:ProcCalls),
    higherorder_in_out(ArgTypes, ArgModes, ModuleInfo, HOInOut),
    map.det_insert(!.HOInfo, PredProcId, info(HaveAT, HOInOut), !:HOInfo),
    (
        CallsHigherOrder = yes,
        set.insert(!.CallsHO, PredProcId, !:CallsHO)
    ;
        CallsHigherOrder = no
    ),
    process_procs(Procs, ModuleInfo, PredId, ArgTypes, ProcTable,
        !ProcCalls, !HOInfo, !CallsHO).

    % Determine if a given set of modes and types indicates that
    % higher order values can be passed into and/or out of a procedure.
    %
:- pred higherorder_in_out(list(mer_type)::in, list(mer_mode)::in,
    module_info::in, ho_in_out::out) is det.

higherorder_in_out(Types, Modes, ModuleInfo, HOInOut) :-
    higherorder_in_out1(Types, Modes, ModuleInfo, no, HOIn, no, HOOut),
    bool_2_ho_in_out(HOIn, HOOut, HOInOut).

:- pred bool_2_ho_in_out(bool::in, bool::in, ho_in_out::out) is det.

bool_2_ho_in_out(yes, no, ho_in).
bool_2_ho_in_out(no, yes, ho_out).
bool_2_ho_in_out(yes, yes, ho_in_out).
bool_2_ho_in_out(no, no, ho_none).

:- pred higherorder_in_out1(list(mer_type)::in, list(mer_mode)::in,
    module_info::in, bool::in, bool::out, bool::in, bool::out) is det.

higherorder_in_out1([], [], _ModuleInfo, !HOIn, !HOOut).
higherorder_in_out1([], [_ | _], _, !HOIn, !HOOut) :-
    unexpected(this_file, "higherorder_in_out1: lists were different lengths").
higherorder_in_out1([_ | _], [], _, !HOIn, !HOOut) :-
    unexpected(this_file, "higherorder_in_out1: lists were different lengths").
higherorder_in_out1([Type | Types], [Mode | Modes], ModuleInfo,
        !HOIn, !HOOut) :-
    (
        % XXX Will have to use a more general check for higher order constants
        % in parameters user could hide higher order consts in a data structure
        % etc..
        type_is_higher_order(Type)
    ->
        ( mode_is_input(ModuleInfo, Mode) ->
            !:HOIn = yes
        ; mode_is_output(ModuleInfo, Mode) ->
            !:HOOut = yes
        ;
            true
        )
    ;
        true
    ),
    higherorder_in_out1(Types, Modes, ModuleInfo, !HOIn, !HOOut).

    % Return the set of all procedures called in the given goal
    % and all addresses taken in the given goal.
    %
:- pred check_goal(hlds_goal_expr::in, set(pred_proc_id)::out,
    set(pred_proc_id)::out, bool::out) is det.

check_goal(Goal, Calls, TakenAddrs, CallsHO) :-
    set.init(Calls0),
    set.init(TakenAddrs0),
    check_goal1(Goal, Calls0, Calls, TakenAddrs0, TakenAddrs, no, CallsHO).

:- pred check_goal1(hlds_goal_expr::in,
    set(pred_proc_id)::in, set(pred_proc_id)::out,
    set(pred_proc_id)::in, set(pred_proc_id)::out,
    bool::in, bool::out) is det.

check_goal1(unify(_Var, RHS, _Mode, Unification, _Context), !Calls,
        !HasAT, !CallsHO) :-
    % See if a goal has its address taken.
    (
        % Currently this code assumes that all procs called in a lambda goal
        % have addresses taken. This is not always to case, but should be
        % a suitable approximation for the stratification analysis.
        RHS = rhs_lambda_goal(_Purity, _PredOrFunc, _EvalMethod, _NonLocals,
            _Vars, _Modes, _Determinism, hlds_goal(GoalExpr, _GoalInfo))
    ->
        get_called_procs(GoalExpr, [], CalledProcs),
        set.insert_list(!.HasAT, CalledProcs, !:HasAT)
    ;
        % Currently when this pass is run the construct/4 case will not happen
        % as higher order constants have been transformed to lambda goals.
        % See above.
        Unification = construct(_Var2, ConsId, _, _, _, _, _)
    ->
        ( ConsId = pred_const(ShroudedPredProcId, _) ->
            PredProcId = unshroud_pred_proc_id(ShroudedPredProcId),
            set.insert(!.HasAT, PredProcId, !:HasAT)
        ;
            true
        )
    ;
        true
    ).
check_goal1(plain_call(CPred, CProc, _Args, _Builtin, _UC, _Sym), !Calls,
        !HasAT, !CallsHO) :-
    % Add this call to the call list.
    set.insert(!.Calls, proc(CPred, CProc), !:Calls).
check_goal1(generic_call(_Var, _Vars, _Modes, _Det), !Calls, !HasAT, _, yes).
    % Record that the higher order call was made.
check_goal1(conj(_ConjType, Goals), !Calls, !HasAT, !CallsHO) :-
    check_goal_list(Goals, !Calls, !HasAT, !CallsHO).
check_goal1(disj(Goals), !Calls, !HasAT, !CallsHO) :-
    check_goal_list(Goals, !Calls, !HasAT, !CallsHO).
check_goal1(switch(_Var, _Fail, Cases), !Calls, !HasAT, !CallsHO) :-
    check_case_list(Cases, !Calls, !HasAT, !CallsHO).
check_goal1(if_then_else(_Vars, Cond, Then, Else), !Calls, !HasAT, !CallsHO) :-
    Cond = hlds_goal(CondExpr, _),
    Then = hlds_goal(ThenExpr, _),
    Else = hlds_goal(ElseExpr, _),
    check_goal1(CondExpr, !Calls, !HasAT, !CallsHO),
    check_goal1(ThenExpr, !Calls, !HasAT, !CallsHO),
    check_goal1(ElseExpr, !Calls, !HasAT, !CallsHO).
check_goal1(scope(_, hlds_goal(GoalExpr, _)), !Calls, !HasAT, !CallsHO) :-
    check_goal1(GoalExpr, !Calls, !HasAT, !CallsHO).
check_goal1(negation(hlds_goal(GoalExpr, _)), !Calls, !HasAT, !CallsHO) :-
    check_goal1(GoalExpr, !Calls, !HasAT, !CallsHO).
check_goal1(call_foreign_proc(_Attrib, _CPred, _CProc, _, _, _, _),
        !Calls, !HasAT, !CallsHO).
check_goal1(shorthand(_), _, _, _, _, _, _) :-
    % These should have been expanded out by now.
    unexpected(this_file, "check_goal1: unexpected shorthand").

:- pred check_goal_list(list(hlds_goal)::in,
    set(pred_proc_id)::in, set(pred_proc_id)::out,
    set(pred_proc_id)::in, set(pred_proc_id)::out,
    bool::in, bool::out) is det.

check_goal_list([], !Calls, !HasAT, !CallsHO).
check_goal_list([hlds_goal(GoalExpr, _) | Goals], !Calls, !HasAT, !CallsHO) :-
    check_goal1(GoalExpr, !Calls, !HasAT, !CallsHO),
    check_goal_list(Goals, !Calls, !HasAT, !CallsHO).

:- pred check_case_list(list(case)::in,
    set(pred_proc_id)::in, set(pred_proc_id)::out,
    set(pred_proc_id)::in, set(pred_proc_id)::out,
    bool::in, bool::out) is det.

check_case_list([], !Calls, !HasAT, !CallsHO).
check_case_list([Case | Goals], !Calls, !HasAT, !CallsHO) :-
    Case = case(_ConsId, hlds_goal(GoalExpr, _)),
    check_goal1(GoalExpr, !Calls, !HasAT, !CallsHO),
    check_case_list(Goals, !Calls, !HasAT, !CallsHO).

    % This pred returns a list of all the calls in a given set of goals,
    % including calls in unification lambda functions and pred_proc_id's
    % in constructs.
    %
:- pred get_called_procs(hlds_goal_expr::in,
    list(pred_proc_id)::in, list(pred_proc_id)::out) is det.

get_called_procs(unify(_Var, RHS, _Mode, Unification, _Context), !Calls) :-
    (
        % Currently this code assumes that all procs called in a lambda goal
        % have addresses taken. This is not always to case, but should be
        % a suitable approximation for the stratification analysis.
        RHS = rhs_lambda_goal(_Purity, _PredOrFunc, _EvalMethod, _NonLocals,
            _Vars, _Modes, _Determinism, hlds_goal(GoalExpr, _GoalInfo))
    ->
        get_called_procs(GoalExpr, !Calls)
    ;
        % Currently when this pass is run the construct/4 case will not happen
        % as higher order constants have been transformed to lambda goals.
        % See above.
        Unification = construct(_Var2, ConsId, _, _, _, _, _)
    ->
        ( ConsId = pred_const(ShroudedPredProcId, _) ->
            PredProcId = unshroud_pred_proc_id(ShroudedPredProcId),
            !:Calls = [PredProcId | !.Calls]
        ;
            true
        )
    ;
        true
    ).

get_called_procs(plain_call(CPred, CProc, _Args, _Builtin, _UC, _Sym),
        !Calls) :-
    % Add this call to the call list.
    !:Calls = [proc(CPred, CProc) | !.Calls].

get_called_procs(generic_call(_Var, _Vars, _Modes, _Det), !Calls).

get_called_procs(conj(_ConjType, Goals), !Calls) :-
    check_goal_list(Goals, !Calls).
get_called_procs(disj(Goals), !Calls) :-
    check_goal_list(Goals, !Calls).
get_called_procs(switch(_Var, _Fail, Cases), !Calls) :-
    check_case_list(Cases, !Calls).
get_called_procs(if_then_else(_Vars, Cond, Then, Else), !Calls) :-
    Cond = hlds_goal(CondExpr, _),
    Then = hlds_goal(ThenExpr, _),
    Else = hlds_goal(ElseExpr, _),
    get_called_procs(CondExpr, !Calls),
    get_called_procs(ThenExpr, !Calls),
    get_called_procs(ElseExpr, !Calls).
get_called_procs(scope(_, hlds_goal(GoalExpr, _)), !Calls) :-
    get_called_procs(GoalExpr, !Calls).
get_called_procs(negation(hlds_goal(GoalExpr, _)), !Calls) :-
    get_called_procs(GoalExpr, !Calls).
get_called_procs(call_foreign_proc(_Attrib, _CPred, _CProc, _, _, _, _),
        !Calls).
get_called_procs(shorthand(_), !Calls) :-
    % These should have been expanded out by now.
    unexpected(this_file, "get_called_procs: unexpected shorthand").

:- pred check_goal_list(list(hlds_goal)::in,
    list(pred_proc_id)::in, list(pred_proc_id)::out) is det.

check_goal_list([], !Calls).
check_goal_list([hlds_goal(GoalExpr, _) | Goals], !Calls) :-
    get_called_procs(GoalExpr, !Calls),
    check_goal_list(Goals, !Calls).

:- pred check_case_list(list(case)::in,
    list(pred_proc_id)::in, list(pred_proc_id)::out) is det.

check_case_list([], !Calls).
check_case_list([Case | Goals], !Calls) :-
    Case = case(_ConsId, hlds_goal(GoalExpr, _)),
    get_called_procs(GoalExpr, !Calls),
    check_case_list(Goals, !Calls).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred emit_message(pred_proc_id::in, prog_context::in, string::in, bool::in,
    module_info::in, module_info::out, io::di, io::uo) is det.

emit_message(PPId, Context, Message, Error, !ModuleInfo, !IO) :-
    PPIdDescription = describe_one_proc_name_mode(!.ModuleInfo,
        should_not_module_qualify, PPId),
    Preamble = [words("In")] ++ PPIdDescription ++ [suffix(":"), nl],
    (
        Error = no,
        ErrOrWarnMsg = words("warning:"),
        Severity = severity_warning
    ;
        Error = yes,
        ErrOrWarnMsg = words("error:"),
        Severity = severity_error
    ),
    MainPieces = [ErrOrWarnMsg, words(Message), nl],
    VerbosePieces =
        [words("A non-stratified loop is a loop in the call graph"),
        words("of the given predicate/function that allows it to call"),
        words("itself negatively. This can cause problems for"),
        words("bottom-up evaluation of the predicate/function."), nl],
    Msg = simple_msg(Context,
        [always(Preamble ++ MainPieces), verbose_only(VerbosePieces)]),
    Spec = error_spec(Severity, phase_code_gen, [Msg]),
    module_info_get_globals(!.ModuleInfo, Globals),
    % XXX _NumErrors
    write_error_spec(Spec, Globals, 0, _NumWarnings, 0, _NumErrors, !IO).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "stratify.m".

%-----------------------------------------------------------------------------%
