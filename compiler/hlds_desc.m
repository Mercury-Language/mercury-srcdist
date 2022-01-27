%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2008-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: hlds_desc.m.
% Main author: zs.
%
% This module's functions are intended to generate short descriptions
% of parts of the HLDS for use in debugging messages. Whereas the code
% in hlds_out.m is intended to completely describe a given construct,
% the code here is intended to orient programmers about what part of the HLDS
% is currently being processed.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module hlds.hlds_desc.
:- interface.

:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module parse_tree.prog_data.

:- import_module list.

%-----------------------------------------------------------------------------%

    % Return a short, less than one line description of the given goal,
    % given the ModuleInfo and the varset of the procedure the goal is from.
    %
:- func describe_goal(module_info, prog_varset, hlds_goal) = string.

    % If the list is empty, return the empty string; if the list contains
    % some variables, return the descriptions of those variables between
    % parentheses. The varset should be the varset of the procedure the
    % arguments are from.
    %
:- func describe_args(prog_varset, list(prog_var)) = string.

    % Return a description of the given variable, given the varset of the
    % procedure it is from.
    %
:- func describe_var(prog_varset, prog_var) = string.

%-----------------------------------------------------------------------------%

:- implementation.

:- import_module hlds.hlds_out.
:- import_module hlds.hlds_out.hlds_out_util.
:- import_module hlds.hlds_pred.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.prog_out.

:- import_module bool.
:- import_module list.
:- import_module string.
:- import_module term.

describe_goal(ModuleInfo, VarSet, Goal) = FullDesc :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    (
        GoalExpr = unify(_, _, _, Unification, _),
        (
            Unification = construct(Var, ConsId, Args, _, _, _, _),
            Desc = describe_var(VarSet, Var) ++ " <= " ++
                cons_id_and_arity_to_string(ConsId) ++
                describe_args(VarSet, Args)
        ;
            Unification = deconstruct(Var, ConsId, Args, _, _, _),
            Desc = describe_var(VarSet, Var) ++ " => " ++
                cons_id_and_arity_to_string(ConsId) ++
                describe_args(VarSet, Args)
        ;
            Unification = assign(ToVar, FromVar),
            Desc = describe_var(VarSet, ToVar) ++
                " := " ++ describe_var(VarSet, FromVar)
        ;
            Unification = simple_test(VarA, VarB),
            Desc = describe_var(VarSet, VarA) ++
                " == " ++ describe_var(VarSet, VarB)
        ;
            Unification = complicated_unify(_, _, _),
            Desc = "complicated unify"
        )
    ;
        GoalExpr = plain_call(_, _, Args, _, _, SymName),
        Desc = sym_name_to_string(SymName) ++ describe_args(VarSet, Args)
    ;
        GoalExpr = generic_call(GCall, Args, _, _, _),
        (
            GCall = higher_order(Var, _, _, _),
            Desc = describe_var(VarSet, Var) ++ describe_args(VarSet, Args)
        ;
            GCall = class_method(Var, _, _, Method),
            Desc = simple_call_id_to_string(Method) ++
                "[" ++ describe_var(VarSet, Var) ++ "]" ++
                describe_args(VarSet, Args)
        ;
            GCall = event_call(Event),
            Desc = "event " ++ Event ++ describe_args(VarSet, Args)
        ;
            GCall = cast(_),
            Desc = "cast " ++ describe_args(VarSet, Args)
        )
    ;
        GoalExpr = call_foreign_proc(_, PredId, _, Args, ExtraArgs, _, _),
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        Name = pred_info_name(PredInfo),
        Desc = "foreign " ++ Name ++
            describe_args(VarSet, list.map(foreign_arg_var, Args)) ++
            describe_args(VarSet, list.map(foreign_arg_var, ExtraArgs))
    ;
        GoalExpr = conj(_, _),
        Desc = "conj"
    ;
        GoalExpr = disj(_),
        Desc = "disj"
    ;
        GoalExpr = switch(Var, _, _),
        Desc = "switch on " ++ describe_var(VarSet, Var)
    ;
        GoalExpr = negation(_),
        Desc = "negation"
    ;
        GoalExpr = scope(Reason, _),
        (
            Reason = exist_quant(_),
            Desc = "scope exist quant"
        ;
            Reason = promise_solutions(_, _),
            Desc = "scope promise solutions"
        ;
            Reason = promise_purity(_),
            Desc = "scope promise purity"
        ;
            Reason = require_detism(_),
            Desc = "scope require detism"
        ;
            Reason = require_complete_switch(_),
            Desc = "scope require complete switch"
        ;
            Reason = require_switch_arms_detism(_, _),
            Desc = "scope require switch arm detism"
        ;
            Reason = commit(_),
            Desc = "scope commit"
        ;
            Reason = barrier(_),
            Desc = "scope barrier"
        ;
            Reason = from_ground_term(_, _),
            Desc = "scope from_ground_term"
        ;
            Reason = trace_goal(_, _, _, _, _),
            Desc = "scope trace goal"
        ;
            Reason = loop_control(_, _, _),
            Desc = "scope loop control goal"
        )
    ;
        GoalExpr = if_then_else(_, _, _, _),
        Desc = "if_then_else"
    ;
        GoalExpr = shorthand(_),
        Desc = "shorthand"
    ),
    Context = goal_info_get_context(GoalInfo),
    Line = term.context_line(Context),
    FullDesc = Desc ++ "@" ++ int_to_string(Line).

describe_args(_, []) = "".
describe_args(VarSet, [HeadVar | TailVars]) =
    "(" ++
    describe_var(VarSet, HeadVar) ++
    string.append_list(list.map(describe_comma_var(VarSet), TailVars)) ++
    ")".

describe_var(VarSet, Var) = mercury_var_to_string(VarSet, yes, Var).

:- func describe_comma_var(prog_varset, prog_var) = string.

describe_comma_var(VarSet, Var) =
    ", " ++ mercury_var_to_string(VarSet, yes, Var).

%---------------------------------------------------------------------------%
:- end_module hlds.hlds_desc.
%---------------------------------------------------------------------------%
