%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2001, 2003-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: prog_util.
% Main author: fjh.
%
% Various utility predicates acting on the parse tree data structure defined
% in prog_data.m and prog_item.m
%
%-----------------------------------------------------------------------------%

:- module parse_tree.prog_util.
:- interface.

:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_item.

:- import_module list.
:- import_module maybe.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

    % Given a possible module qualified sym_name and a list of
    % argument types and a context, construct a term. This is
    % used to construct types.
    %
:- pred construct_qualified_term(sym_name::in, list(term(T))::in,
    term(T)::out) is det.

:- pred construct_qualified_term_with_context(sym_name::in, list(term(T))::in,
    prog_context::in, term(T)::out) is det.

%-----------------------------------------------------------------------------%

    % adjust_func_arity(PredOrFunc, FuncArity, PredArity).
    %
    % We internally store the arity as the length of the argument
    % list including the return value, which is one more than the
    % arity of the function reported in error messages.
    %
:- pred adjust_func_arity(pred_or_func, int, int).
:- mode adjust_func_arity(in, in, out) is det.
:- mode adjust_func_arity(in, out, in) is det.

%-----------------------------------------------------------------------------%

    % make_pred_name_with_context(ModuleName, Prefix, PredOrFunc, PredName,
    %   Line, Counter, SymName).
    %
    % Create a predicate name with context, e.g. for introduced
    % lambda or deforestation predicates.
    %
:- pred make_pred_name(module_name::in, string::in, maybe(pred_or_func)::in,
    string::in, new_pred_id::in, sym_name::out) is det.

    % make_pred_name_with_context(ModuleName, Prefix, PredOrFunc, PredName,
    %   Line, Counter, SymName).
    %
    % Create a predicate name with context, e.g. for introduced
    % lambda or deforestation predicates.
    %
:- pred make_pred_name_with_context(module_name::in, string::in,
    pred_or_func::in, string::in, int::in, int::in, sym_name::out) is det.

:- type new_pred_id
    --->    newpred_counter(int, int)                   % Line number, Counter
    ;       newpred_type_subst(tvarset, type_subst)
    ;       newpred_unused_args(list(int))
    ;       newpred_parallel_args(list(int))
    ;       newpred_parallel_loop_control
    ;       newpred_structure_reuse(int, list(int))     % Mode, no-clobber
                                                        % arguments.
    ;       newpred_distance_granularity(int).          % Distance

%-----------------------------------------------------------------------------%

    % A pred declaration may contains just types, as in
    %   :- pred list.append(list(T), list(T), list(T)).
    % or it may contain both types and modes, as in
    %   :- pred list.append(list(T)::in, list(T)::in, list(T)::output).
    %
    % This predicate takes the argument list of a pred declaration, splits it
    % into two separate lists for the types and (if present) the modes.

:- type maybe_modes == maybe(list(mer_mode)).

:- pred split_types_and_modes(list(type_and_mode)::in, list(mer_type)::out,
    maybe_modes::out) is det.

:- pred split_type_and_mode(type_and_mode::in, mer_type::out,
    maybe(mer_mode)::out) is det.

%-----------------------------------------------------------------------------%

    % Perform a substitution on a goal.
    %
:- pred rename_in_goal(prog_var::in, prog_var::in, goal::in, goal::out) is det.

%-----------------------------------------------------------------------------%

    % Various predicates for accessing the cons_id type.

    % Given a cons_id and a list of argument terms, convert it into a term.
    % Works only on the cons_ids that can be expressed in source programs,
    % so it fails e.g. on pred_consts and type_ctor_info_consts.
    %
:- pred cons_id_and_args_to_term(cons_id::in, list(term(T))::in, term(T)::out)
    is semidet.

    % Get the arity of a cons_id, aborting on pred_const and
    % type_ctor_info_const.
    %
:- func cons_id_arity(cons_id) = arity.

    % Get the arity of a cons_id. Return a `no' on those cons_ids
    % where cons_id_arity/2 would normally abort.
    %
:- func cons_id_maybe_arity(cons_id) = maybe(arity).

    % The reverse conversion - make a cons_id for a functor.
    % Given a const and an arity for the functor, create a cons_id.
    %
:- func make_functor_cons_id(const, arity) = cons_id.

%-----------------------------------------------------------------------------%

    % make_n_fresh_vars(Name, N, VarSet0, Vars, VarSet):
    %   `Vars' is a list of `N' fresh variables allocated from
    %   `VarSet0'.  The variables will be named "<Name>1", "<Name>2",
    %   "<Name>3", and so on, where <Name> is the value of `Name'.
    %   `VarSet' is the resulting varset.
    %
:- pred make_n_fresh_vars(string::in, int::in, list(var(T))::out,
    varset(T)::in, varset(T)::out) is det.

    % Given the list of predicate arguments for a predicate that
    % is really a function, split that list into the function arguments
    % and the function return type.
    %
:- pred pred_args_to_func_args(list(T)::in, list(T)::out, T::out) is det.

    % Get the last two arguments from the list, failing if there
    % aren't at least two arguments.
    %
:- pred get_state_args(list(T)::in, list(T)::out, T::out, T::out) is semidet.

    % Get the last two arguments from the list, aborting if there
    % aren't at least two arguments.
    %
:- pred get_state_args_det(list(T)::in, list(T)::out, T::out, T::out) is det.

    % Parse a term of the form `Head :- Body', treating a term not in that form
    % as `Head :- true'.
    %
:- pred parse_rule_term(term.context::in, term(T)::in, term(T)::out,
    term(T)::out) is det.

%-----------------------------------------------------------------------------%

    % Add new type variables for those introduced by a type qualification.
    %
:- pred get_new_tvars(list(tvar)::in, tvarset::in, tvarset::in, tvarset::out,
    tvar_name_map::in, tvar_name_map::out,
    tvar_renaming::in, tvar_renaming::out) is det.

%-----------------------------------------------------------------------------%

    % We need to "unparse" the sym_name to construct the properly
    % module qualified term.
    %
:- func sym_name_and_args_to_term(sym_name, list(term(T)), prog_context) =
    term(T).

%-----------------------------------------------------------------------------%

    % Convert a list of goals into a conjunction.
    %
:- func goal_list_to_conj(prog_context, list(goal)) = goal.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.prog_out.

:- import_module bool.
:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module require.
:- import_module string.
:- import_module term_io.
:- import_module varset.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

construct_qualified_term(SymName, Args, Term) :-
    term.context_init(Context),
    construct_qualified_term_with_context(SymName, Args, Context, Term).

construct_qualified_term_with_context(SymName, Args, Context, Term) :-
    (
        SymName = qualified(Module, Name),
        construct_qualified_term_with_context(Module, [], Context, ModuleTerm),
        UnqualifiedTerm = term.functor(term.atom(Name), Args, Context),
        Term = term.functor(term.atom("."),
            [ModuleTerm, UnqualifiedTerm], Context)
    ;
        SymName = unqualified(Name),
        Term = term.functor(term.atom(Name), Args, Context)
    ).

%-----------------------------------------------------------------------------%

adjust_func_arity(pf_predicate, Arity, Arity).
adjust_func_arity(pf_function, Arity - 1, Arity).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

split_types_and_modes(TypesAndModes, Types, MaybeModes) :-
    split_types_and_modes_2(TypesAndModes, yes, Types, Modes, Result),
    (
        Result = yes,
        MaybeModes = yes(Modes)
    ;
        Result = no,
        MaybeModes = no
    ).

:- pred split_types_and_modes_2(list(type_and_mode)::in, bool::in,
    list(mer_type)::out, list(mer_mode)::out, bool::out) is det.

    % T = type, M = mode, TM = combined type and mode
split_types_and_modes_2([], Result, [], [], Result).
split_types_and_modes_2([TM|TMs], Result0, [T|Ts], [M|Ms], Result) :-
    split_type_and_mode(TM, Result0, T, M, Result1),
    split_types_and_modes_2(TMs, Result1, Ts, Ms, Result).

    % If a pred declaration specifies modes for some but not all of the
    % arguments, then the modes are ignored - should this be an error instead?
    % trd: this should never happen because prog_io.m will detect these cases.
    %
:- pred split_type_and_mode(type_and_mode::in, bool::in,
    mer_type::out, mer_mode::out, bool::out) is det.

split_type_and_mode(type_only(T), _, T, (free -> free), no).
split_type_and_mode(type_and_mode(T,M), R, T, M, R).

split_type_and_mode(type_only(T), T, no).
split_type_and_mode(type_and_mode(T,M), T, yes(M)).

%-----------------------------------------------------------------------------%

rename_in_goal(OldVar, NewVar, Goal0 - Context, Goal - Context) :-
    rename_in_goal_expr(OldVar, NewVar, Goal0, Goal).

:- pred rename_in_goal_expr(prog_var::in, prog_var::in,
    goal_expr::in, goal_expr::out) is det.

rename_in_goal_expr(OldVar, NewVar, Expr0, Expr) :-
    (
        ( Expr0 = true_expr
        ; Expr0 = fail_expr
        ),
        Expr = Expr0
    ;
        Expr0 = conj_expr(GoalA0, GoalB0),
        rename_in_goal(OldVar, NewVar, GoalA0, GoalA),
        rename_in_goal(OldVar, NewVar, GoalB0, GoalB),
        Expr = conj_expr(GoalA, GoalB)
    ;
        Expr0 = par_conj_expr(GoalA0, GoalB0),
        rename_in_goal(OldVar, NewVar, GoalA0, GoalA),
        rename_in_goal(OldVar, NewVar, GoalB0, GoalB),
        Expr = par_conj_expr(GoalA, GoalB)
    ;
        Expr0 = disj_expr(GoalA0, GoalB0),
        rename_in_goal(OldVar, NewVar, GoalA0, GoalA),
        rename_in_goal(OldVar, NewVar, GoalB0, GoalB),
        Expr = disj_expr(GoalA, GoalB)
    ;
        Expr0 = not_expr(Goal0),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = not_expr(Goal)
    ;
        Expr0 = some_expr(Vars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = some_expr(Vars, Goal)
    ;
        Expr0 = some_state_vars_expr(Vars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = some_state_vars_expr(Vars, Goal)
    ;
        Expr0 = all_expr(Vars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = all_expr(Vars, Goal)
    ;
        Expr0 = all_state_vars_expr(Vars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = all_state_vars_expr(Vars, Goal)
    ;
        Expr0 = promise_purity_expr(Purity, Goal0),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = promise_purity_expr(Purity, Goal)
    ;
        Expr0 = promise_equivalent_solutions_expr(Vars0, StateVars0,
            DotSVars0, ColonSVars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_vars(OldVar, NewVar, StateVars0, StateVars),
        rename_in_vars(OldVar, NewVar, DotSVars0, DotSVars),
        rename_in_vars(OldVar, NewVar, ColonSVars0, ColonSVars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = promise_equivalent_solutions_expr(Vars, StateVars,
            DotSVars, ColonSVars, Goal)
    ;
        Expr0 = promise_equivalent_solution_sets_expr(Vars0, StateVars0,
            DotSVars0, ColonSVars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_vars(OldVar, NewVar, StateVars0, StateVars),
        rename_in_vars(OldVar, NewVar, DotSVars0, DotSVars),
        rename_in_vars(OldVar, NewVar, ColonSVars0, ColonSVars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = promise_equivalent_solution_sets_expr(Vars, StateVars,
            DotSVars, ColonSVars, Goal)
    ;
        Expr0 = promise_equivalent_solution_arbitrary_expr(Vars0, StateVars0,
            DotSVars0, ColonSVars0, Goal0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_vars(OldVar, NewVar, StateVars0, StateVars),
        rename_in_vars(OldVar, NewVar, DotSVars0, DotSVars),
        rename_in_vars(OldVar, NewVar, ColonSVars0, ColonSVars),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = promise_equivalent_solution_arbitrary_expr(Vars, StateVars,
            DotSVars, ColonSVars, Goal)
    ;
        Expr0 = require_detism_expr(Detism, Goal0),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = require_detism_expr(Detism, Goal)
    ;
        Expr0 = require_complete_switch_expr(Var0, Goal0),
        rename_in_var(OldVar, NewVar, Var0, Var),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = require_complete_switch_expr(Var, Goal)
    ;
        Expr0 = require_switch_arms_detism_expr(Var0, Detism, Goal0),
        rename_in_var(OldVar, NewVar, Var0, Var),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = require_switch_arms_detism_expr(Var, Detism, Goal)
    ;
        Expr0 = trace_expr(CompileTime, RunTime, MaybeIO0, Mutables0, Goal0),
        (
            MaybeIO0 = no,
            MaybeIO = no
        ;
            MaybeIO0 = yes(IOStateVar0),
            rename_in_var(OldVar, NewVar, IOStateVar0, IOStateVar),
            MaybeIO = yes(IOStateVar)
        ),
        list.map(rename_in_trace_mutable_var(OldVar, NewVar),
            Mutables0, Mutables),
        rename_in_goal(OldVar, NewVar, Goal0, Goal),
        Expr = trace_expr(CompileTime, RunTime, MaybeIO, Mutables, Goal)
    ;
        Expr0 = atomic_expr(InVars0, OutVars0, MaybeVars0, MainExpr0,
            OrElseExpr0),
        rename_in_atomic_varlist(OldVar, NewVar, InVars0, InVars),
        rename_in_atomic_varlist(OldVar, NewVar, OutVars0, OutVars),
        (
            MaybeVars0 = no,
            MaybeVars = no
        ;
            MaybeVars0 = yes(TransVars0),
            list.map(rename_in_var(OldVar, NewVar),
                TransVars0, TransVars),
            MaybeVars = yes(TransVars)
        ),
        rename_in_goal(OldVar, NewVar, MainExpr0, MainExpr),
        list.map(rename_in_goal(OldVar, NewVar), OrElseExpr0, OrElseExpr),
        Expr = atomic_expr(InVars, OutVars, MaybeVars, MainExpr, OrElseExpr)
    ;
        Expr0 = try_expr(MaybeIO0, SubGoal0, Then0, MaybeElse0, Catches0,
            MaybeCatchAny0),
        rename_in_maybe_var(OldVar, NewVar, MaybeIO0, MaybeIO),
        rename_in_goal(OldVar, NewVar, SubGoal0, SubGoal),
        rename_in_goal(OldVar, NewVar, Then0, Then),
        (
            MaybeElse0 = yes(Else0),
            rename_in_goal(OldVar, NewVar, Else0, Else),
            MaybeElse = yes(Else)
        ;
            MaybeElse0 = no,
            MaybeElse = no
        ),
        list.map(rename_in_catch_expr(OldVar, NewVar), Catches0, Catches),
        (
            MaybeCatchAny0 = yes(catch_any_expr(CatchAnyVar0, CatchAnyGoal0)),
            rename_in_var(OldVar, NewVar, CatchAnyVar0, CatchAnyVar),
            rename_in_goal(OldVar, NewVar, CatchAnyGoal0, CatchAnyGoal),
            MaybeCatchAny = yes(catch_any_expr(CatchAnyVar, CatchAnyGoal))
        ;
            MaybeCatchAny0 = no,
            MaybeCatchAny = no
        ),
        Expr = try_expr(MaybeIO, SubGoal, Then, MaybeElse, Catches,
            MaybeCatchAny)
    ;
        Expr0 = implies_expr(GoalA0, GoalB0),
        rename_in_goal(OldVar, NewVar, GoalA0, GoalA),
        rename_in_goal(OldVar, NewVar, GoalB0, GoalB),
        Expr = implies_expr(GoalA, GoalB)
    ;
        Expr0 = equivalent_expr(GoalA0, GoalB0),
        rename_in_goal(OldVar, NewVar, GoalA0, GoalA),
        rename_in_goal(OldVar, NewVar, GoalB0, GoalB),
        Expr = equivalent_expr(GoalA, GoalB)
    ;
        Expr0 = if_then_else_expr(Vars0, StateVars0, Cond0, Then0, Else0),
        rename_in_vars(OldVar, NewVar, Vars0, Vars),
        rename_in_vars(OldVar, NewVar, StateVars0, StateVars),
        rename_in_goal(OldVar, NewVar, Cond0, Cond),
        rename_in_goal(OldVar, NewVar, Then0, Then),
        rename_in_goal(OldVar, NewVar, Else0, Else),
        Expr = if_then_else_expr(Vars, StateVars, Cond, Then, Else)
    ;
        Expr0 = event_expr(Name, Terms0),
        term.substitute_list(Terms0, OldVar, variable(NewVar, context_init),
            Terms),
        Expr = event_expr(Name, Terms)
    ;
        Expr0 = call_expr(SymName, Terms0, Purity),
        term.substitute_list(Terms0, OldVar, variable(NewVar, context_init),
            Terms),
        Expr = call_expr(SymName, Terms, Purity)
    ;
        Expr0 = unify_expr(TermA0, TermB0, Purity),
        term.substitute(TermA0, OldVar, term.variable(NewVar, context_init),
            TermA),
        term.substitute(TermB0, OldVar, term.variable(NewVar, context_init),
            TermB),
        Expr = unify_expr(TermA, TermB, Purity)
    ).

:- pred rename_in_atomic_varlist(prog_var::in, prog_var::in,
    atomic_component_state::in, atomic_component_state::out) is det.

rename_in_atomic_varlist(OldVar, NewVar, Comp0, Comp) :-
    (
        Comp0 = atomic_state_var(SVar0),
        rename_in_var(OldVar, NewVar, SVar0, SVar),
        Comp = atomic_state_var(SVar)
    ;
        Comp0 = atomic_var_pair(IVar0, OVar0),
        rename_in_var(OldVar, NewVar, IVar0, IVar),
        rename_in_var(OldVar, NewVar, OVar0, OVar),
        Comp = atomic_var_pair(IVar, OVar)
    ).

:- pred rename_in_trace_mutable_var(prog_var::in, prog_var::in,
    trace_mutable_var::in, trace_mutable_var::out) is det.

rename_in_trace_mutable_var(OldVar, NewVar, TMV0, TMV) :-
    TMV0 = trace_mutable_var(MutableName, StateVar0),
    rename_in_var(OldVar, NewVar, StateVar0, StateVar),
    TMV = trace_mutable_var(MutableName, StateVar).

:- pred rename_in_vars(prog_var::in, prog_var::in,
    list(prog_var)::in, list(prog_var)::out) is det.

rename_in_vars(_, _, [], []).
rename_in_vars(OldVar, NewVar, [Var0 | Vars0], [Var | Vars]) :-
    rename_in_var(OldVar, NewVar, Var0, Var),
    rename_in_vars(OldVar, NewVar, Vars0, Vars).

:- pred rename_in_var(prog_var::in, prog_var::in,
    prog_var::in, prog_var::out) is det.

rename_in_var(OldVar, NewVar, Var0, Var) :-
    ( Var0 = OldVar ->
        Var = NewVar
    ;
        Var = Var0
    ).

:- pred rename_in_maybe_var(prog_var::in, prog_var::in,
    maybe(prog_var)::in, maybe(prog_var)::out) is det.

rename_in_maybe_var(OldVar, NewVar, MaybeVar0, MaybeVar) :-
    (
        MaybeVar0 = yes(Var0),
        rename_in_var(OldVar, NewVar, Var0, Var),
        MaybeVar = yes(Var)
    ;
        MaybeVar0 = no,
        MaybeVar = no
    ).

:- pred rename_in_catch_expr(prog_var::in, prog_var::in,
    catch_expr::in, catch_expr::out) is det.

rename_in_catch_expr(OldVar, NewVar, Catch0, Catch) :-
    Catch0 = catch_expr(Term0, Goal0),
    term.substitute(Term0, OldVar, term.variable(NewVar, context_init), Term),
    rename_in_goal(OldVar, NewVar, Goal0, Goal),
    Catch = catch_expr(Term, Goal).

%-----------------------------------------------------------------------------%

make_pred_name_with_context(ModuleName, Prefix,
        PredOrFunc, PredName, Line, Counter, SymName) :-
    make_pred_name(ModuleName, Prefix, yes(PredOrFunc), PredName,
        newpred_counter(Line, Counter), SymName).

make_pred_name(ModuleName, Prefix, MaybePredOrFunc, PredName,
        NewPredId, SymName) :-
    (
        MaybePredOrFunc = yes(PredOrFunc),
        PFS = pred_or_func_to_str(PredOrFunc)
    ;
        MaybePredOrFunc = no,
        PFS = "pred_or_func"
    ),
    (
        NewPredId = newpred_counter(Line, Counter),
        string.format("%d__%d", [i(Line), i(Counter)], PredIdStr)
    ;
        NewPredId = newpred_type_subst(VarSet, TypeSubst),
        SubstToString = (pred(SubstElem::in, SubstStr::out) is det :-
            SubstElem = Var - Type,
            varset.lookup_name(VarSet, Var, VarName),
            TypeString = mercury_type_to_string(VarSet, no, Type),
            string.append_list([VarName, " = ", TypeString], SubstStr)
        ),
        list_to_string(SubstToString, TypeSubst, PredIdStr)
    ;
        ( NewPredId = newpred_unused_args(Args)
        ; NewPredId = newpred_parallel_args(Args)
        ),
        list_to_string(int_to_string, Args, PredIdStr)
    ;
        NewPredId = newpred_structure_reuse(ModeNum, Args),
        int_to_string(ModeNum, ModeStr),
        list_to_string(int_to_string, Args, ArgsStr),
        PredIdStr = ModeStr ++ "__" ++ ArgsStr
    ;
        NewPredId = newpred_distance_granularity(Distance),
        int_to_string(Distance, PredIdStr)
    ;
        NewPredId = newpred_parallel_loop_control,
        PredIdStr = ""
    ),

    string.format("%s__%s__%s__%s",
        [s(Prefix), s(PFS), s(PredName), s(PredIdStr)], Name),
    SymName = qualified(ModuleName, Name).

:- pred list_to_string(pred(T, string)::in(pred(in, out) is det),
    list(T)::in, string::out) is det.

list_to_string(Pred, List, String) :-
    list_to_string_2(Pred, List, ["]"], Strings),
    string.append_list(["[" | Strings], String).

:- pred list_to_string_2(pred(T, string)::in(pred(in, out) is det),
    list(T)::in, list(string)::in, list(string)::out) is det.

list_to_string_2(_, [], !Strings).
list_to_string_2(Pred, [T | Ts], !Strings) :-
    (
        Ts = []
    ;
        Ts = [_ | _],
        list_to_string_2(Pred, Ts, !Strings),
        !:Strings = [", " | !.Strings]
    ),
    call(Pred, T, String),
    !:Strings = [String | !.Strings].

%-----------------------------------------------------------------------------%

cons_id_and_args_to_term(int_const(Int), [], Term) :-
    term.context_init(Context),
    Term = term.functor(term.integer(Int), [], Context).
cons_id_and_args_to_term(float_const(Float), [], Term) :-
    term.context_init(Context),
    Term = term.functor(term.float(Float), [], Context).
cons_id_and_args_to_term(char_const(Char), [], Term) :-
    SymName = unqualified(string.from_char(Char)),
    construct_qualified_term(SymName, [], Term).
cons_id_and_args_to_term(string_const(String), [], Term) :-
    term.context_init(Context),
    Term = term.functor(term.string(String), [], Context).
cons_id_and_args_to_term(tuple_cons(_Arity), Args, Term) :-
    SymName = unqualified("{}"),
    construct_qualified_term(SymName, Args, Term).
cons_id_and_args_to_term(cons(SymName, _Arity, _TypeCtor), Args, Term) :-
    construct_qualified_term(SymName, Args, Term).

cons_id_arity(ConsId) = Arity :-
    (
        ConsId = cons(_, Arity, _)
    ;
        ConsId = tuple_cons(Arity)
    ;
        ConsId = ground_term_const(_, SubConsId),
        Arity = cons_id_arity(SubConsId)
    ;
        ( ConsId = int_const(_)
        ; ConsId = float_const(_)
        ; ConsId = char_const(_)
        ; ConsId = string_const(_)
        ; ConsId = impl_defined_const(_)
        ),
        Arity = 0
    ;
        ( ConsId = closure_cons(_, _)
        ; ConsId = type_ctor_info_const(_, _, _)
        ; ConsId = base_typeclass_info_const(_, _, _, _)
        ; ConsId = type_info_cell_constructor(_)
        ; ConsId = typeclass_info_cell_constructor
        ; ConsId = type_info_const(_)
        ; ConsId = typeclass_info_const(_)
        ; ConsId = tabling_info_const(_)
        ; ConsId = deep_profiling_proc_layout(_)
        ; ConsId = table_io_entry_desc(_)
        ),
        unexpected($module, $pred, "unexpected cons_id")
    ).

cons_id_maybe_arity(cons(_, Arity, _)) = yes(Arity).
cons_id_maybe_arity(tuple_cons(Arity)) = yes(Arity).
cons_id_maybe_arity(int_const(_)) = yes(0).
cons_id_maybe_arity(float_const(_)) = yes(0).
cons_id_maybe_arity(char_const(_)) = yes(0).
cons_id_maybe_arity(string_const(_)) = yes(0).
cons_id_maybe_arity(impl_defined_const(_)) = yes(0).
cons_id_maybe_arity(closure_cons(_, _)) = no.
cons_id_maybe_arity(type_ctor_info_const(_, _, _)) = no.
cons_id_maybe_arity(base_typeclass_info_const(_, _, _, _)) = no.
cons_id_maybe_arity(type_info_cell_constructor(_)) = no.
cons_id_maybe_arity(typeclass_info_cell_constructor) = no.
cons_id_maybe_arity(type_info_const(_)) = no.
cons_id_maybe_arity(typeclass_info_const(_)) = no.
cons_id_maybe_arity(ground_term_const(_, ConsId)) =
    cons_id_maybe_arity(ConsId).
cons_id_maybe_arity(tabling_info_const(_)) = no.
cons_id_maybe_arity(deep_profiling_proc_layout(_)) = no.
cons_id_maybe_arity(table_io_entry_desc(_)) = no.

make_functor_cons_id(term.atom(Name), Arity) =
    cons(unqualified(Name), Arity, cons_id_dummy_type_ctor).
make_functor_cons_id(term.integer(Int), _) = int_const(Int).
make_functor_cons_id(term.string(String), _) = string_const(String).
make_functor_cons_id(term.float(Float), _) = float_const(Float).
make_functor_cons_id(term.implementation_defined(Name), _) =
    impl_defined_const(Name).

%-----------------------------------------------------------------------------%

make_n_fresh_vars(BaseName, N, Vars, VarSet0, VarSet) :-
    make_n_fresh_vars_2(BaseName, 0, N, Vars, VarSet0, VarSet).

:- pred make_n_fresh_vars_2(string::in, int::in, int::in, list(var(T))::out,
    varset(T)::in, varset(T)::out) is det.

make_n_fresh_vars_2(BaseName, N, Max, Vars, !VarSet) :-
    ( N = Max ->
        Vars = []
    ;
        N1 = N + 1,
        varset.new_var(Var, !VarSet),
        string.int_to_string(N1, Num),
        string.append(BaseName, Num, VarName),
        varset.name_var(Var, VarName, !VarSet),
        Vars = [Var | Vars1],
        make_n_fresh_vars_2(BaseName, N1, Max, Vars1, !VarSet)
    ).

pred_args_to_func_args(PredArgs, FuncArgs, FuncReturn) :-
    list.length(PredArgs, NumPredArgs),
    NumFuncArgs = NumPredArgs - 1,
    ( list.split_list(NumFuncArgs, PredArgs, FuncArgs0, [FuncReturn0]) ->
        FuncArgs = FuncArgs0,
        FuncReturn = FuncReturn0
    ;
        unexpected($module, $pred, "function missing return value?")
    ).

get_state_args(Args0, Args, State0, State) :-
    list.reverse(Args0, RevArgs0),
    RevArgs0 = [State, State0 | RevArgs],
    list.reverse(RevArgs, Args).

get_state_args_det(Args0, Args, State0, State) :-
    ( get_state_args(Args0, Args1, State0A, StateA) ->
        Args = Args1,
        State0 = State0A,
        State = StateA
    ;
        unexpected($module, $pred)
    ).

%-----------------------------------------------------------------------------%

parse_rule_term(Context, RuleTerm, HeadTerm, GoalTerm) :-
    ( RuleTerm = term.functor(term.atom(":-"), [HeadTerm0, GoalTerm0], _) ->
        HeadTerm = HeadTerm0,
        GoalTerm = GoalTerm0
    ;
        HeadTerm = RuleTerm,
        GoalTerm = term.functor(term.atom("true"), [], Context)
    ).

get_new_tvars([], _,  !TVarSet, !TVarNameMap, !TVarRenaming).
get_new_tvars([TVar | TVars], VarSet, !TVarSet, !TVarNameMap, !TVarRenaming) :-
    ( map.contains(!.TVarRenaming, TVar) ->
        true
    ;
        ( varset.search_name(VarSet, TVar, TVarName) ->
            ( map.search(!.TVarNameMap, TVarName, TVarSetVar) ->
                map.det_insert(TVar, TVarSetVar, !TVarRenaming)
            ;
                varset.new_var(NewTVar, !TVarSet),
                varset.name_var(NewTVar, TVarName, !TVarSet),
                map.det_insert(TVarName, NewTVar, !TVarNameMap),
                map.det_insert(TVar, NewTVar, !TVarRenaming)
            )
        ;
            varset.new_var(NewTVar, !TVarSet),
            map.det_insert(TVar, NewTVar, !TVarRenaming)
        )
    ),
    get_new_tvars(TVars, VarSet, !TVarSet, !TVarNameMap, !TVarRenaming).

%-----------------------------------------------------------------------------%

sym_name_and_args_to_term(unqualified(Name), Xs, Context) =
    term.functor(term.atom(Name), Xs, Context).

sym_name_and_args_to_term(qualified(ModuleNames, Name), Xs, Context) =
    sym_name_and_term_to_term(ModuleNames,
        term.functor(term.atom(Name), Xs, Context), Context).

:- func sym_name_and_term_to_term(module_specifier, term(T), prog_context) =
    term(T).

sym_name_and_term_to_term(unqualified(ModuleName), Term, Context) =
    term.functor(
        term.atom("."),
        [term.functor(term.atom(ModuleName), [], Context), Term],
        Context
    ).
sym_name_and_term_to_term(qualified(ModuleNames, ModuleName), Term, Context) =
    term.functor(
        term.atom("."),
        [sym_name_and_term_to_term(
            ModuleNames,
            term.functor(term.atom(ModuleName), [], Context),
            Context),
        Term],
        Context
    ).

%-----------------------------------------------------------------------------%

goal_list_to_conj(Context, []) = true_expr - Context.
goal_list_to_conj(Context, [Goal | Goals]) =
    goal_list_to_conj_2(Context, Goal, Goals).

:- func goal_list_to_conj_2(prog_context, goal, list(goal)) = goal.

goal_list_to_conj_2(_, Goal, []) = Goal.
goal_list_to_conj_2(Context, Goal0, [Goal1 | Goals]) =
    conj_expr(Goal0, goal_list_to_conj_2(Context, Goal1, Goals)) - Context.

%-----------------------------------------------------------------------------%
:- end_module parse_tree.prog_util.
%-----------------------------------------------------------------------------%
