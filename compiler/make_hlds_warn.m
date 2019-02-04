%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1993-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: make_hlds_warn.m.
%
% Generate whatever warnings the module being transformed to HLDS deserves.
%
%-----------------------------------------------------------------------------%

:- module hlds.make_hlds.make_hlds_warn.
:- interface.

:- import_module hlds.hlds_goal.
:- import_module hlds.hlds_module.
:- import_module hlds.quantification.
:- import_module libs.globals.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.

:- import_module list.
:- import_module pair.

%-----------------------------------------------------------------------------%

    % Warn about variables with overlapping scopes.
    %
:- pred warn_overlap(list(quant_warning)::in, prog_varset::in,
    simple_call_id::in, list(error_spec)::in, list(error_spec)::out) is det.

    % Warn about variables which occur only once but don't start with
    % an underscore, or about variables which do start with an underscore
    % but occur more than once, or about variables that do not occur in
    % C code strings when they should.
    %
:- pred warn_singletons(prog_varset::in, simple_call_id::in, module_info::in,
    hlds_goal::in, list(error_spec)::in, list(error_spec)::out) is det.

    % warn_singletons_in_pragma_foreign_proc checks to see if each variable
    % is mentioned at least once in the foreign code fragments that ought to
    % mention it. If not, it gives a warning.
    %
    % (Note that for some foreign languages it might not be appropriate
    % to do this check, or you may need to add a transformation to map
    % Mercury variable names into identifiers for that foreign language).
    %
:- pred warn_singletons_in_pragma_foreign_proc(pragma_foreign_code_impl::in,
    foreign_language::in, list(maybe(pair(string, mer_mode)))::in,
    prog_context::in, simple_call_id::in, pred_id::in, proc_id::in,
    module_info::in, list(error_spec)::in, list(error_spec)::out) is det.

    % This predicate performs the following checks on promise ex declarations
    % (see notes/promise_ex.html).
    %
    % - check for universally quantified variables
    % - check if universal quantification is placed in the wrong position
    %   (i.e. after the `promise_exclusive' rather than before it)
    % - check that its goal is a disjunction and that each arm of the
    %   disjunction has at most one call, and otherwise has only unifications.
    %
:- pred check_promise_ex_decl(prog_vars::in, promise_type::in, goal::in,
    prog_context::in, list(error_spec)::in, list(error_spec)::out) is det.

%----------------------------------------------------------------------------%
%----------------------------------------------------------------------------%

:- implementation.

:- import_module check_hlds.mode_util.
:- import_module hlds.goal_util.
:- import_module libs.options.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.prog_out.

:- import_module bool.
:- import_module char.
:- import_module set.
:- import_module string.
:- import_module varset.

%----------------------------------------------------------------------------%

warn_overlap(Warnings, VarSet, PredCallId, !Specs) :-
    !:Specs =
        list.map(warn_overlap_to_spec(VarSet, PredCallId), Warnings)
        ++ !.Specs.

:- func warn_overlap_to_spec(prog_varset, simple_call_id, quant_warning)
    = error_spec.

warn_overlap_to_spec(VarSet, PredCallId, Warn) = Spec :-
    Warn = warn_overlap(Vars, Context),
    Pieces1 =
        [words("In clause for"), simple_call(PredCallId), suffix(":"), nl],
    ( Vars = [Var] ->
        Pieces2 = [words("warning: variable"),
            quote(mercury_var_to_string(VarSet, no, Var)),
            words("has overlapping scopes.")]
    ;
        Pieces2 = [words("warning: variables"),
            quote(mercury_vars_to_string(VarSet, no, Vars)),
            words("each have overlapping scopes.")]
    ),
    Msg = simple_msg(Context,
        [option_is_set(warn_overlapping_scopes, yes,
            [always(Pieces1 ++ Pieces2)])]),
    Severity = severity_conditional(warn_overlapping_scopes, yes,
        severity_warning, no),
    Spec = error_spec(Severity, phase_parse_tree_to_hlds, [Msg]).

%-----------------------------------------------------------------------------%

warn_singletons(VarSet, PredCallId, ModuleInfo, Body, !Specs) :-
    set.init(QuantVars),
    warn_singletons_in_goal(Body, QuantVars, VarSet, PredCallId,
        ModuleInfo, !Specs).

:- pred warn_singletons_in_goal(hlds_goal::in, set(prog_var)::in,
    prog_varset::in, simple_call_id::in, module_info::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_singletons_in_goal(Goal, QuantVars, VarSet, PredCallId, ModuleInfo,
        !Specs) :-
    Goal = hlds_goal(GoalExpr, GoalInfo),
    (
        GoalExpr = conj(_ConjType, Goals),
        warn_singletons_in_goal_list(Goals, QuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs)
    ;
        GoalExpr = disj(Goals),
        warn_singletons_in_goal_list(Goals, QuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs)
    ;
        GoalExpr = switch(_Var, _CanFail, Cases),
        warn_singletons_in_cases(Cases, QuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs)
    ;
        GoalExpr = negation(SubGoal),
        warn_singletons_in_goal(SubGoal, QuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs)
    ;
        GoalExpr = scope(Reason, SubGoal),
        % Warn if any quantified variables occur only in the quantifier.
        (
            ( Reason = exist_quant(Vars)
            ; Reason = promise_solutions(Vars, _)
            ),
            (
                Vars = [_ | _],
                SubGoalVars = free_goal_vars(SubGoal),
                set.init(EmptySet),
                warn_singletons_goal_vars(Vars, GoalInfo, EmptySet, SubGoalVars,
                    VarSet, PredCallId, !Specs),
                set.insert_list(QuantVars, Vars, SubQuantVars)
            ;
                Vars = [],
                SubQuantVars = QuantVars
            ),
            warn_singletons_in_goal(SubGoal, SubQuantVars, VarSet, PredCallId,
                ModuleInfo, !Specs)
        ;
            ( Reason = promise_purity(_)
            ; Reason = commit(_)
            ; Reason = barrier(_)
            ; Reason = trace_goal(_, _, _, _, _)
            ),
            warn_singletons_in_goal(SubGoal, QuantVars, VarSet, PredCallId,
                ModuleInfo, !Specs)
        ;
            Reason = from_ground_term(TermVar, _Kind),
            % There can be no singleton variables inside the scopes by
            % construction. The only variable involved in the scope
            % that can possibly be singleton is the one representing the entire
            % ground term.
            NonLocals = goal_info_get_nonlocals(GoalInfo),
            warn_singletons_goal_vars([TermVar], GoalInfo, NonLocals,
                QuantVars, VarSet, PredCallId, !Specs)
        )
    ;
        GoalExpr = if_then_else(Vars, Cond, Then, Else),

        % Warn if any quantified variables do not occur in the condition
        % or the "then" part of the if-then-else.
        (
            Vars = [_ | _],
            CondVars = free_goal_vars(Cond),
            ThenVars = free_goal_vars(Then),
            set.union(CondVars, ThenVars, CondThenVars),
            set.init(EmptySet),
            warn_singletons_goal_vars(Vars, GoalInfo, EmptySet, CondThenVars,
                VarSet, PredCallId, !Specs)
        ;
            Vars = []
        ),
        set.insert_list(QuantVars, Vars, CondThenQuantVars),
        warn_singletons_in_goal(Cond, CondThenQuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs),
        warn_singletons_in_goal(Then, CondThenQuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs),
        warn_singletons_in_goal(Else, QuantVars, VarSet, PredCallId,
            ModuleInfo, !Specs)
    ;
        GoalExpr = plain_call(_, _, Args, _, _, _),
        NonLocals = goal_info_get_nonlocals(GoalInfo),
        warn_singletons_goal_vars(Args, GoalInfo, NonLocals, QuantVars, VarSet,
            PredCallId, !Specs)
    ;
        GoalExpr = generic_call(GenericCall, Args0, _, _),
        goal_util.generic_call_vars(GenericCall, Args1),
        list.append(Args0, Args1, Args),
        NonLocals = goal_info_get_nonlocals(GoalInfo),
        warn_singletons_goal_vars(Args, GoalInfo, NonLocals, QuantVars, VarSet,
            PredCallId, !Specs)
    ;
        GoalExpr = unify(Var, RHS, _, _, _),
        warn_singletons_in_unify(Var, RHS, GoalInfo, QuantVars, VarSet,
            PredCallId, ModuleInfo, !Specs)
    ;
        GoalExpr = call_foreign_proc(Attrs, PredId, ProcId, Args, _, _,
            PragmaImpl),
        Context = goal_info_get_context(GoalInfo),
        Lang = get_foreign_language(Attrs),
        NamesModes = list.map(foreign_arg_maybe_name_mode, Args),
        warn_singletons_in_pragma_foreign_proc(PragmaImpl, Lang,
            NamesModes, Context, PredCallId, PredId, ProcId, ModuleInfo, !Specs)
    ;
        GoalExpr = shorthand(ShortHand),
        (
            % XXX STM We need to look at how we should handle Outer, Inner and
            % MaybeOutputVars.
            ShortHand = atomic_goal(_GoalType, _Outer, Inner,
                _MaybeOutputVars, MainGoal, OrElseGoals, _OrElseInners),
            Inner = atomic_interface_vars(InnerDI, InnerUO),
            set.insert_list(QuantVars, [InnerDI, InnerUO], InsideQuantVars),
            warn_singletons_in_goal(MainGoal, InsideQuantVars, VarSet,
                PredCallId, ModuleInfo, !Specs),
            warn_singletons_in_goal_list(OrElseGoals, InsideQuantVars, VarSet,
                PredCallId, ModuleInfo, !Specs)
        ;
            ShortHand = try_goal(_, _, SubGoal),
            warn_singletons_in_goal(SubGoal, QuantVars, VarSet,
                PredCallId, ModuleInfo, !Specs)
        ;
            ShortHand = bi_implication(GoalA, GoalB),
            warn_singletons_in_goal_list([GoalA, GoalB], QuantVars, VarSet,
                PredCallId, ModuleInfo, !Specs)
        )
    ).

:- pred warn_singletons_in_goal_list(list(hlds_goal)::in, set(prog_var)::in,
    prog_varset::in, simple_call_id::in, module_info::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_singletons_in_goal_list([], _, _, _, _, !Specs).
warn_singletons_in_goal_list([Goal | Goals], QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs) :-
    warn_singletons_in_goal(Goal, QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs),
    warn_singletons_in_goal_list(Goals, QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs).

:- pred warn_singletons_in_cases(list(case)::in, set(prog_var)::in,
    prog_varset::in, simple_call_id::in, module_info::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_singletons_in_cases([], _, _, _, _, !IO).
warn_singletons_in_cases([Case | Cases], QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs) :-
    Case = case(_MainConsId, _OtherConsIds, Goal),
    warn_singletons_in_goal(Goal, QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs),
    warn_singletons_in_cases(Cases, QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs).

:- pred warn_singletons_in_unify(prog_var::in, unify_rhs::in,
    hlds_goal_info::in, set(prog_var)::in, prog_varset::in,
    simple_call_id::in, module_info::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_singletons_in_unify(X, rhs_var(Y), GoalInfo, QuantVars, VarSet,
        CallPredId, _, !Specs) :-
    NonLocals = goal_info_get_nonlocals(GoalInfo),
    warn_singletons_goal_vars([X, Y], GoalInfo, NonLocals, QuantVars,
        VarSet, CallPredId, !Specs).
warn_singletons_in_unify(X, rhs_functor(_ConsId, _, Vars), GoalInfo,
        QuantVars, VarSet, CallPredId, _, !Specs) :-
    NonLocals = goal_info_get_nonlocals(GoalInfo),
    warn_singletons_goal_vars([X | Vars], GoalInfo, NonLocals, QuantVars,
        VarSet, CallPredId, !Specs).
warn_singletons_in_unify(X, rhs_lambda_goal(_Purity, _Groundness, _PredOrFunc,
        _Eval, _NonLocals, LambdaVars, _Modes, _Det, LambdaGoal),
        GoalInfo, QuantVars, VarSet, CallPredId, ModuleInfo, !Specs) :-
    % Warn if any lambda-quantified variables occur only in the quantifier.
    LambdaGoal = hlds_goal(_, LambdaGoalInfo),
    LambdaNonLocals = goal_info_get_nonlocals(LambdaGoalInfo),
    warn_singletons_goal_vars(LambdaVars, GoalInfo, LambdaNonLocals, QuantVars,
        VarSet, CallPredId, !Specs),

    % Warn if X (the variable we're unifying the lambda expression with)
    % is singleton.
    NonLocals = goal_info_get_nonlocals(GoalInfo),
    warn_singletons_goal_vars([X], GoalInfo, NonLocals, QuantVars,
        VarSet, CallPredId, !Specs),

    % Warn if the lambda-goal contains singletons.
    warn_singletons_in_goal(LambdaGoal, QuantVars, VarSet, CallPredId,
        ModuleInfo, !Specs).

%-----------------------------------------------------------------------------%

    % warn_singletons_goal_vars(Vars, GoalInfo, NonLocals, QuantVars, ...):
    %
    % Warn if any of the non-underscore variables in Vars don't occur in
    % NonLocals and don't have the same name as any variable in QuantVars,
    % or if any of the underscore variables in Vars do occur in NonLocals.
    % Omit the warning if GoalInfo says we should.
    %
:- pred warn_singletons_goal_vars(list(prog_var)::in, hlds_goal_info::in,
    set(prog_var)::in, set(prog_var)::in, prog_varset::in, simple_call_id::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_singletons_goal_vars(GoalVars, GoalInfo, NonLocals, QuantVars, VarSet,
        PredOrFuncCallId, !Specs) :-
    % Find all the variables in the goal that don't occur outside the goal
    % (i.e. are singleton), have a variable name that doesn't start with "_"
    % or "DCG_", and don't have the same name as any variable in QuantVars
    % (i.e. weren't explicitly quantified).

    list.filter(is_singleton_var(NonLocals, QuantVars, VarSet), GoalVars,
        SingleVars),

    % If there were any such variables, issue a warning.
    (
        (
            SingleVars = []
        ;
            goal_info_has_feature(GoalInfo, feature_dont_warn_singleton)
        )
    ->
        true
    ;
        SinglesPreamble = [words("In clause for"),
            simple_call(PredOrFuncCallId), suffix(":"), nl],
        SingleVarStrs0 = list.map(mercury_var_to_string(VarSet, no),
            SingleVars),
        list.sort_and_remove_dups(SingleVarStrs0, SingleVarStrs),
        SingleVarsPiece = quote(string.join_list(", ", SingleVarStrs)),
        ( SingleVarStrs = [_] ->
            SinglesPieces = [words("warning: variable"), SingleVarsPiece,
                words("occurs only once in this scope."), nl]
        ;
            SinglesPieces = [words("warning: variables"), SingleVarsPiece,
                words("occur only once in this scope."), nl]
        ),
        SinglesMsg = simple_msg(goal_info_get_context(GoalInfo),
            [option_is_set(warn_singleton_vars, yes,
                [always(SinglesPreamble ++ SinglesPieces)])]),
        SingleSeverity = severity_conditional(warn_singleton_vars, yes,
            severity_warning, no),
        SinglesSpec = error_spec(SingleSeverity, phase_parse_tree_to_hlds,
            [SinglesMsg]),
        !:Specs = [SinglesSpec | !.Specs]
    ),

    % Find all the variables in the goal that do occur outside the goal
    % (i.e. are not singleton) and have a variable name that starts
    % with "_". If there were any such variables, issue a warning.

    list.filter(is_multi_var(NonLocals, VarSet), GoalVars, MultiVars),
    (
        MultiVars = []
    ;
        MultiVars = [_ | _],
        MultiPreamble = [words("In clause for"),
            simple_call(PredOrFuncCallId), suffix(":"), nl],
        MultiVarStrs0 = list.map(mercury_var_to_string(VarSet, no),
            MultiVars),
        list.sort_and_remove_dups(MultiVarStrs0, MultiVarStrs),
        MultiVarsPiece = quote(string.join_list(", ", MultiVarStrs)),
        ( MultiVarStrs = [_] ->
            MultiPieces = [words("warning: variable"), MultiVarsPiece,
                words("occurs more than once in this scope."), nl]
        ;
            MultiPieces = [words("warning: variables"), MultiVarsPiece,
                words("ccur more than once in this scope."), nl]
        ),
        MultiMsg = simple_msg(goal_info_get_context(GoalInfo),
            [option_is_set(warn_singleton_vars, yes,
                [always(MultiPreamble ++ MultiPieces)])]),
        MultiSeverity = severity_conditional(warn_singleton_vars, yes,
            severity_warning, no),
        MultiSpec = error_spec(MultiSeverity, phase_parse_tree_to_hlds,
            [MultiMsg]),
        !:Specs = [MultiSpec | !.Specs]
    ).

%-----------------------------------------------------------------------------%

warn_singletons_in_pragma_foreign_proc(PragmaImpl, Lang, Args, Context,
        PredOrFuncCallId, PredId, ProcId, ModuleInfo, !Specs) :-
    LangStr = foreign_language_string(Lang),
    (
        PragmaImpl = fc_impl_ordinary(C_Code, _),
        c_code_to_name_list(C_Code, C_CodeList),
        list.filter_map(var_is_unmentioned(C_CodeList), Args, UnmentionedVars),
        (
            UnmentionedVars = []
        ;
            UnmentionedVars = [_ | _],
            Pieces1 = [words("In the"), words(LangStr), words("code for"),
                simple_call(PredOrFuncCallId), suffix(":"), nl] ++
                variable_warning_start(UnmentionedVars) ++
                [words("not occur in the"), words(LangStr), words("code."),
                nl],
            Msg1 = simple_msg(Context,
                [option_is_set(warn_singleton_vars, yes, [always(Pieces1)])]),
            Severity1 = severity_conditional(warn_singleton_vars, yes,
                severity_warning, no),
            Spec1 = error_spec(Severity1, phase_parse_tree_to_hlds,
                [Msg1]),
            !:Specs = [Spec1 | !.Specs]
        ),
        pragma_foreign_proc_body_checks(Lang, Context, PredOrFuncCallId,
            PredId, ProcId, ModuleInfo, C_CodeList, !Specs)
    ;
        PragmaImpl = fc_impl_model_non(_, _, FirstCode, _, LaterCode,
            _, _, SharedCode, _),
        c_code_to_name_list(FirstCode, FirstCodeList),
        c_code_to_name_list(LaterCode, LaterCodeList),
        c_code_to_name_list(SharedCode, SharedCodeList),
        list.filter_map(input_var_is_unmentioned(ModuleInfo, FirstCodeList),
            Args, UnmentionedInputVars),
        (
            UnmentionedInputVars = []
        ;
            UnmentionedInputVars = [_ | _],
            Pieces2 = [words("In the"), words(LangStr), words("code for"),
                simple_call(PredOrFuncCallId), suffix(":"), nl] ++
                variable_warning_start(UnmentionedInputVars) ++
                [words("not occur in the first"), words(LangStr),
                words("code."), nl],
            Msg2 = simple_msg(Context,
                [option_is_set(warn_singleton_vars, yes, [always(Pieces2)])]),
            Severity2 = severity_conditional(warn_singleton_vars, yes,
                severity_warning, no),
            Spec2 = error_spec(Severity2, phase_parse_tree_to_hlds,
                [Msg2]),
            !:Specs = [Spec2 | !.Specs]
        ),
        list.filter_map(output_var_is_unmentioned(ModuleInfo,
            FirstCodeList, SharedCodeList), Args, UnmentionedFirstOutputVars),
        (
            UnmentionedFirstOutputVars = []
        ;
            UnmentionedFirstOutputVars = [_ | _],
            Pieces3 = [words("In the"), words(LangStr), words("code for"),
                simple_call(PredOrFuncCallId), suffix(":"), nl] ++
                variable_warning_start(UnmentionedFirstOutputVars) ++
                [words("not occur in the first"), words(LangStr),
                words("code or the shared"), words(LangStr), words("code."),
                nl],
            Msg3 = simple_msg(Context,
                [option_is_set(warn_singleton_vars, yes, [always(Pieces3)])]),
            Severity3 = severity_conditional(warn_singleton_vars, yes,
                severity_warning, no),
            Spec3 = error_spec(Severity3, phase_parse_tree_to_hlds,
                [Msg3]),
            !:Specs = [Spec3 | !.Specs]
        ),
        list.filter_map(output_var_is_unmentioned(ModuleInfo,
            LaterCodeList, SharedCodeList), Args, UnmentionedLaterOutputVars),
        (
            UnmentionedLaterOutputVars = []
        ;
            UnmentionedLaterOutputVars = [_ | _],
            list.sort(UnmentionedLaterOutputVars,
                SortedUnmentionedLaterOutputVars),
            Pieces4 = [words("In the"), words(LangStr), words("code for"),
                simple_call(PredOrFuncCallId), suffix(":"), nl] ++
                variable_warning_start(SortedUnmentionedLaterOutputVars) ++
                [words("not occur in the retry"), words(LangStr),
                words("code or the shared"), words(LangStr), words("code."),
                nl],
            Msg4 = simple_msg(Context,
                [option_is_set(warn_singleton_vars, yes, [always(Pieces4)])]),
            Severity4 = severity_conditional(warn_singleton_vars, yes,
                severity_warning, no),
            Spec4 = error_spec(Severity4, phase_parse_tree_to_hlds,
                [Msg4]),
            !:Specs = [Spec4 | !.Specs]
        )
    ;
        PragmaImpl = fc_impl_import(_, _, _, _)
    ).

:- pred var_is_unmentioned(list(string)::in, maybe(pair(string, mer_mode))::in,
    string::out) is semidet.

var_is_unmentioned(NameList1, MaybeArg, Name) :-
    MaybeArg = yes(Name - _Mode),
    \+ string.prefix(Name, "_"),
    \+ list.member(Name, NameList1).

:- pred input_var_is_unmentioned(module_info::in,
    list(string)::in, maybe(pair(string, mer_mode))::in,
    string::out) is semidet.

input_var_is_unmentioned(ModuleInfo, NameList1, MaybeArg, Name) :-
    MaybeArg = yes(Name - Mode),
    mode_is_input(ModuleInfo, Mode),
    \+ string.prefix(Name, "_"),
    \+ list.member(Name, NameList1).

:- pred output_var_is_unmentioned(module_info::in,
    list(string)::in, list(string)::in, maybe(pair(string, mer_mode))::in,
    string::out) is semidet.

output_var_is_unmentioned(ModuleInfo, NameList1, NameList2, MaybeArg, Name) :-
    MaybeArg = yes(Name - Mode),
    mode_is_output(ModuleInfo, Mode),
    \+ string.prefix(Name, "_"),
    \+ list.member(Name, NameList1),
    \+ list.member(Name, NameList2).

:- func variable_warning_start(list(string)) = list(format_component).

variable_warning_start(UnmentionedVars) = Pieces :-
    ( UnmentionedVars = [Var] ->
        Pieces = [words("warning: variable"), quote(Var), words("does")]
    ;
        Pieces = [words("warning: variables"),
            words(add_quotes(string.join_list(", ", UnmentionedVars))),
            words("do")]
    ).

    % c_code_to_name_list(Code, List) is true iff List is a list of the
    % identifiers used in the C code in Code.
    %
:- pred c_code_to_name_list(string::in, list(string)::out) is det.

c_code_to_name_list(Code, List) :-
    string.to_char_list(Code, CharList),
    c_code_to_name_list_2(CharList, List).

:- pred c_code_to_name_list_2(list(char)::in, list(string)::out) is det.

c_code_to_name_list_2(C_Code, List) :-
    get_first_c_name(C_Code, NameCharList, TheRest),
    (
        NameCharList = [],
        % no names left
        List = []
    ;
        NameCharList = [_ | _],
        c_code_to_name_list_2(TheRest, Names),
        string.from_char_list(NameCharList, Name),
        List = [Name | Names]
    ).

:- pred get_first_c_name(list(char)::in, list(char)::out, list(char)::out)
    is det.

get_first_c_name([], [], []).
get_first_c_name([C | CodeChars], NameCharList, TheRest) :-
    ( char.is_alnum_or_underscore(C) ->
        get_first_c_name_in_word(CodeChars, NameCharList0, TheRest),
        NameCharList = [C | NameCharList0]
    ;
        % Strip off any characters in the C code which don't form part
        % of an identifier.
        get_first_c_name(CodeChars, NameCharList, TheRest)
    ).

:- pred get_first_c_name_in_word(list(char)::in, list(char)::out,
    list(char)::out) is det.

get_first_c_name_in_word([], [], []).
get_first_c_name_in_word([C | CodeChars], NameCharList, TheRest) :-
    ( char.is_alnum_or_underscore(C) ->
        % There are more characters in the word.
        get_first_c_name_in_word(CodeChars, NameCharList0, TheRest),
        NameCharList = [C|NameCharList0]
    ;
        % The word is finished.
        NameCharList = [],
        TheRest = CodeChars
    ).

:- pred is_singleton_var(set(prog_var)::in,
    set(prog_var)::in, prog_varset::in, prog_var::in) is semidet.

is_singleton_var(NonLocals, QuantVars, VarSet, Var) :-
    \+ set.member(Var, NonLocals),
    varset.search_name(VarSet, Var, Name),
    \+ string.prefix(Name, "_"),
    \+ string.prefix(Name, "DCG_"),
    \+ (
        set.member(QuantVar, QuantVars),
        varset.search_name(VarSet, QuantVar, Name)
    ).

:- pred is_multi_var(set(prog_var)::in, prog_varset::in, prog_var::in)
    is semidet.

is_multi_var(NonLocals, VarSet, Var) :-
    set.member(Var, NonLocals),
    varset.search_name(VarSet, Var, Name),
    string.prefix(Name, "_").

:- pred pragma_foreign_proc_body_checks(foreign_language::in,
    prog_context::in, simple_call_id::in, pred_id::in, proc_id::in,
    module_info::in, list(string)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

pragma_foreign_proc_body_checks(Lang, Context, PredOrFuncCallId, PredId, ProcId,
        ModuleInfo, BodyPieces, !Specs) :-
    check_fp_body_for_success_indicator(Lang, Context, PredOrFuncCallId,
        PredId, ProcId, ModuleInfo, BodyPieces, !Specs),
    check_fp_body_for_return(Lang, Context, PredOrFuncCallId, BodyPieces,
        !Specs).

:- pred check_fp_body_for_success_indicator(foreign_language::in,
    prog_context::in, simple_call_id::in, pred_id::in, proc_id::in,
    module_info::in, list(string)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

check_fp_body_for_success_indicator(Lang, Context, CallId, PredId, ProcId,
        ModuleInfo, BodyPieces, !Specs) :-
    module_info_proc_info(ModuleInfo, PredId, ProcId, ProcInfo),
    proc_info_get_declared_determinism(ProcInfo, MaybeDeclDetism),
    (
        MaybeDeclDetism = yes(Detism),
        (
            (
                Lang = lang_c,
                SuccIndStr = "SUCCESS_INDICATOR"
            ;
                Lang = lang_csharp,
                SuccIndStr = "SUCCESS_INDICATOR"
            ;
                Lang = lang_erlang,
                SuccIndStr = "SUCCESS_INDICATOR"
            ;
                Lang = lang_java,
                SuccIndStr = "succeeded"
            ),
            ( if    list.member(SuccIndStr, BodyPieces)
              then
                    LangStr = foreign_language_string(Lang),
                    (
                        ( Detism = detism_det
                        ; Detism = detism_cc_multi
                        ; Detism = detism_erroneous
                        ),
                        Pieces = [
                            words("warning: the "), fixed(LangStr),
                            words("code for"), simple_call(CallId),
                            words("may set"), quote(SuccIndStr),
                            words(", but it cannot fail.")
                        ],
                        Msg = simple_msg(Context,
                            [option_is_set(warn_suspicious_foreign_procs, yes,
                                [always(Pieces)])]),
                        Severity = severity_conditional(
                            warn_suspicious_foreign_procs, yes,
                            severity_warning, no),
                        Spec = error_spec(Severity, phase_parse_tree_to_hlds,
                            [Msg]),
                        !:Specs = [Spec | !.Specs]
                    ;
                        ( Detism = detism_semi
                        ; Detism = detism_multi
                        ; Detism = detism_non
                        ; Detism = detism_cc_non
                        ; Detism = detism_failure
                        )
                    )
              else
                    (
                        ( Detism = detism_semi
                        ; Detism = detism_cc_non
                        ),
                        LangStr = foreign_language_string(Lang),
                        Pieces = [
                            words("warning: the "), fixed(LangStr),
                            words("code for"), simple_call(CallId),
                            words("does not appear to set"),
                            quote(SuccIndStr),
                            words(", but it can fail.")
                        ],
                        Msg = simple_msg(Context,
                            [option_is_set(warn_suspicious_foreign_procs, yes,
                                [always(Pieces)])]),
                        Severity = severity_conditional(
                            warn_suspicious_foreign_procs, yes,
                            severity_warning, no),
                        Spec = error_spec(Severity, phase_parse_tree_to_hlds,
                            [Msg]),
                        !:Specs = [Spec | !.Specs]
                    ;
                        ( Detism = detism_det
                        ; Detism = detism_cc_multi
                        ; Detism = detism_failure
                        ; Detism = detism_non
                        ; Detism = detism_multi
                        ; Detism = detism_erroneous
                        )
                    )
            )
        ;
            Lang = lang_il
        )
    ;
        MaybeDeclDetism = no
    ).

    % Check to see if a foreign_proc body contains a return statement
    % (or whatever the foreign language equivalent is).
    %
:- pred check_fp_body_for_return(foreign_language::in,
    prog_context::in, simple_call_id::in, list(string)::in, 
    list(error_spec)::in, list(error_spec)::out) is det.

check_fp_body_for_return(Lang, Context, Id, BodyPieces, !Specs) :-
    (
        ( Lang = lang_c
        ; Lang = lang_csharp
        ; Lang = lang_java
        ),
        ( if    list.member("return", BodyPieces)
          then
                LangStr = foreign_language_string(Lang),
                Pieces = [
                    words("warning: the "), fixed(LangStr), words("code for"),
                    simple_call(Id),
                    words("may contain a"), quote("return"),
                    words("statement.")
                ],
                Msg = simple_msg(Context,
                    [option_is_set(warn_suspicious_foreign_procs, yes,
                        [always(Pieces)])]
                ),
                Severity = severity_conditional(
                    warn_suspicious_foreign_procs, yes, severity_warning, no),
                Spec = error_spec(Severity, phase_parse_tree_to_hlds, [Msg]),
                !:Specs = [Spec | !.Specs]
          else
                true
        )
    ;
        Lang = lang_il,
        ( if    ( list.member("ret", BodyPieces)
                ; list.member("jmp", BodyPieces)
                )
          then
                Pieces = [
                    words("warning: the IL code for"),
                    simple_call(Id),
                    words("may contain a"), quote("ret"),
                    words("or"), quote("jmp"),
                    words("instruction.")
                ],
                Msg = simple_msg(Context,
                    [option_is_set(warn_suspicious_foreign_procs, yes,
                        [always(Pieces)])]
                ),
                Severity = severity_conditional(
                    warn_suspicious_foreign_procs, yes, severity_warning, no),
                Spec = error_spec(Severity, phase_parse_tree_to_hlds, [Msg]),
                !:Specs = [Spec | !.Specs]
          else
                true
        )
    ;
        Lang = lang_erlang
    ).

%-----------------------------------------------------------------------------%
%
% Promise_ex error checking.
%

check_promise_ex_decl(UnivVars, PromiseType, Goal, Context, !Specs) :-
    % Are universally quantified variables present?
    (
        UnivVars = [],
        promise_ex_error(PromiseType, Context,
            "declaration has no universally quantified variables", !Specs)
    ;
        UnivVars = [_ | _]
    ),
    check_promise_ex_goal(PromiseType, Goal, !Specs).

    % Check for misplaced universal quantification, otherwise find the
    % disjunction, flatten it out into list form and perform further checks.
    %
:- pred check_promise_ex_goal(promise_type::in, goal::in,
    list(error_spec)::in, list(error_spec)::out) is det.

check_promise_ex_goal(PromiseType, GoalExpr - Context, !Specs) :-
    ( GoalExpr = some_expr(_, Goal) ->
        check_promise_ex_goal(PromiseType, Goal, !Specs)
    ; GoalExpr = disj_expr(_, _) ->
        flatten_to_disj_list(GoalExpr - Context, DisjList),
        list.map(flatten_to_conj_list, DisjList, DisjConjList),
        check_disjunction(PromiseType, DisjConjList, !Specs)
    ; GoalExpr = all_expr(_UnivVars, Goal) ->
        promise_ex_error(PromiseType, Context,
            "universal quantification should come before " ++
            "the declaration name", !Specs),
        check_promise_ex_goal(PromiseType, Goal, !Specs)
    ;
        promise_ex_error(PromiseType, Context,
            "goal in declaration is not a disjunction", !Specs)
    ).

    % Turns the goal of a promise_ex declaration into a list of goals,
    % where each goal is an arm of the disjunction.
    %
:- pred flatten_to_disj_list(goal::in, goals::out) is det.

flatten_to_disj_list(GoalExpr - Context, GoalList) :-
    ( GoalExpr = disj_expr(GoalA, GoalB) ->
        flatten_to_disj_list(GoalA, GoalListA),
        flatten_to_disj_list(GoalB, GoalListB),
        GoalList = GoalListA ++ GoalListB
    ;
        GoalList = [GoalExpr - Context]
    ).

    % Takes a goal representing an arm of a disjunction and turns it into
    % a list of conjunct goals.
    %
:- pred flatten_to_conj_list(goal::in, goals::out) is det.

flatten_to_conj_list(GoalExpr - Context, GoalList) :-
    ( GoalExpr = conj_expr(GoalA, GoalB) ->
        flatten_to_conj_list(GoalA, GoalListA),
        flatten_to_conj_list(GoalB, GoalListB),
        GoalList = GoalListA ++ GoalListB
    ;
        GoalList = [GoalExpr - Context]
    ).

    % Taking a list of arms of the disjunction, check each arm individually.
    %
:- pred check_disjunction(promise_type::in, list(goals)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

check_disjunction(PromiseType, DisjConjList, !Specs) :-
    (
        DisjConjList = []
    ;
        DisjConjList = [ConjList | Rest],
        check_disj_arm(PromiseType, ConjList, no, !Specs),
        check_disjunction(PromiseType, Rest, !Specs)
    ).

    % Only one goal in an arm is allowed to be a call, the rest must be
    % unifications.
    %
:- pred check_disj_arm(promise_type::in, goals::in, bool::in,
    list(error_spec)::in, list(error_spec)::out) is det.

check_disj_arm(PromiseType, Goals, CallUsed, !Specs) :-
    (
        Goals = []
    ;
        Goals = [GoalExpr - Context | Rest],
        ( GoalExpr = unify_expr(_, _, _) ->
            check_disj_arm(PromiseType, Rest, CallUsed, !Specs)
        ; GoalExpr = some_expr(_, Goal) ->
            check_disj_arm(PromiseType, [Goal | Rest], CallUsed, !Specs)
        ; GoalExpr = call_expr(_, _, _) ->
            (
                CallUsed = no
            ;
                CallUsed = yes,
                promise_ex_error(PromiseType, Context,
                    "disjunct contains more than one call", !Specs)
            ),
            check_disj_arm(PromiseType, Rest, yes, !Specs)
        ;
            promise_ex_error(PromiseType, Context,
                "disjunct is not a call or unification", !Specs),
            check_disj_arm(PromiseType, Rest, CallUsed, !Specs)
        )
    ).

    % Called for any error in the above checks.
    %
:- pred promise_ex_error(promise_type::in, prog_context::in, string::in,
    list(error_spec)::in, list(error_spec)::out) is det.

promise_ex_error(PromiseType, Context, Message, !Specs) :-
    Pieces = [words("In"), quote(prog_out.promise_to_string(PromiseType)),
        words("declaration:"), nl,
        words("error:"), words(Message), nl],
    Msg = simple_msg(Context, [always(Pieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

%-----------------------------------------------------------------------------%
:- end_module make_hlds_warn.
%-----------------------------------------------------------------------------%
