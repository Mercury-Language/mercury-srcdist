%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: prog_io_util.m.
% Main author: fjh.
%
% This module defines the types used by prog_io and its subcontractors
% to return the results of parsing, and some utility predicates needed
% by several of prog_io's submodules.
%
% Most parsing predicates must check for errors. They return either the
% item(s) they were looking for, or an error indication.
%
% Most of the parsing predicates return a `maybe1(T)' or a `maybe2(T1, T2)',
% which will either be the `ok(ParseTree)' (or `ok(ParseTree1, ParseTree2)'),
% if the parse is successful, or `error(Message, Term)' if it is not.
% The `Term' there should be the term which is syntactically incorrect.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module parse_tree.prog_io_util.
:- interface.

:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_data.

:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

:- type maybe1(T1)
    --->    error1(list(error_spec))
    ;       ok1(T1).

:- type maybe2(T1, T2)
    --->    error2(list(error_spec))
    ;       ok2(T1, T2).

:- type maybe3(T1, T2, T3)
    --->    error3(list(error_spec))
    ;       ok3(T1, T2, T3).

:- type maybe4(T1, T2, T3, T4)
    --->    error4(list(error_spec))
    ;       ok4(T1, T2, T3, T4).

:- func get_any_errors1(maybe1(T1)) = list(error_spec).
:- func get_any_errors2(maybe2(T1, T2)) = list(error_spec).
:- func get_any_errors3(maybe3(T1, T2, T3)) = list(error_spec).
:- func get_any_errors4(maybe4(T1, T2, T3, T4)) = list(error_spec).

:- type maybe_functor    ==  maybe_functor(generic).
:- type maybe_functor(T) ==  maybe2(sym_name, list(term(T))).

    % ok(SymName, Args - MaybeFuncRetArg) ; error(Msg, Term).
:- type maybe_pred_or_func(T) == maybe2(sym_name, pair(list(T), maybe(T))).

:- type var2tvar    ==  map(var, tvar).

:- type var2pvar    ==  map(var, prog_var).

:- type parser(T) == pred(term, maybe1(T)).
:- mode parser == (pred(in, out) is det).

% Various predicates to parse small bits of syntax.
% These predicates simply fail if they encounter a syntax error.

:- pred parse_list_of_vars(term(T)::in, list(var(T))::out) is semidet.

    % Parse a list of quantified variables.
    % The other input argument is a prefix for any error messages.
    %
:- pred parse_vars(term(T)::in, varset(T)::in, list(format_component)::in,
    maybe1(list(var(T)))::out) is det.

    % Parse a list of quantified variables, splitting it into
    % ordinary logic variables and state variables respectively.
    % The other input argument is a prefix for any error messages.
    %
:- pred parse_quantifier_vars(term(T)::in, varset(T)::in,
    list(format_component)::in, maybe2(list(var(T)), list(var(T)))::out)
    is det.

    % Similar to parse_vars, but also allow state variables to appear
    % in the list. The outputs separate the parsed variables into ordinary
    % variables, state variables listed as !.X, and state variables
    % listed as !:X.
    %
:- pred parse_vars_and_state_vars(term(T)::in, varset(T)::in,
    list(format_component)::in,
    maybe3(list(var(T)), list(var(T)), list(var(T)))::out) is det.

:- pred parse_name_and_arity(module_name::in, term(T)::in,
    sym_name::out, arity::out) is semidet.

:- pred parse_name_and_arity(term(T)::in, sym_name::out, arity::out)
    is semidet.

:- pred parse_pred_or_func_name_and_arity(term(T)::in,
    pred_or_func::out, sym_name::out, arity::out) is semidet.

:- pred parse_pred_or_func_and_args(term(_T)::in,
    pred_or_func::out, sym_name::out, list(term(_T))::out) is semidet.

:- pred parse_pred_or_func_and_args_general(maybe(module_name)::in,
    term(_T)::in, term(_T)::in, varset(_T)::in, list(format_component)::in,
    maybe_pred_or_func(term(_T))::out) is det.

:- pred maybe_parse_type(term::in, mer_type::out) is semidet.

:- pred parse_type(term::in, varset::in, list(format_component)::in,
    maybe1(mer_type)::out) is det.

:- pred maybe_parse_types(list(term)::in, list(mer_type)::out) is semidet.

:- pred parse_types(list(term)::in, varset::in, list(format_component)::in,
    maybe1(list(mer_type))::out) is det.

:- pred unparse_type(mer_type::in, term::out) is det.

:- pred parse_purity_annotation(term(T)::in, purity::out, term(T)::out) is det.

:- type allow_constrained_inst_var
    --->    allow_constrained_inst_var
    ;       no_allow_constrained_inst_var.

:- pred convert_mode_list(allow_constrained_inst_var::in, list(term)::in,
    list(mer_mode)::out) is semidet.

:- pred convert_mode(allow_constrained_inst_var::in, term::in, mer_mode::out)
    is semidet.

:- pred convert_inst_list(allow_constrained_inst_var::in, list(term)::in,
    list(mer_inst)::out) is semidet.

:- pred convert_inst(allow_constrained_inst_var::in, term::in, mer_inst::out)
    is semidet.

:- pred standard_det(string::in, determinism::out) is semidet.

    % Convert a "disjunction" (bunch of terms separated by ';'s) to a list.
    %
:- pred disjunction_to_list(term(T)::in, list(term(T))::out) is det.

    % Convert a "conjunction" (bunch of terms separated by ','s) to a list.
    %
:- pred conjunction_to_list(term(T)::in, list(term(T))::out) is det.

    % list_to_conjunction(Context, First, Rest, Term):
    % Convert a list to a "conjunction" (bunch of terms separated by ','s).
    %
:- pred list_to_conjunction(prog_context::in, term(T)::in, list(term(T))::in,
    term(T)::out) is det.

    % Convert a "sum" (bunch of terms separated by '+' operators) to a list.
    %
:- pred sum_to_list(term(T)::in, list(term(T))::out) is det.

    % Parse a comma-separated list (misleading described as a "conjunction")
    % of things.
    %
:- pred parse_list(parser(T)::parser, term::in, maybe1(list(T))::out) is det.

:- pred map_parser(parser(T)::parser, list(term)::in, maybe1(list(T))::out)
    is det.

:- pred list_term_to_term_list(term::in, list(term)::out) is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.prog_io.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_util.

:- import_module set.
:- import_module term.

%-----------------------------------------------------------------------------%

get_any_errors1(ok1(_)) = [].
get_any_errors1(error1(Specs)) = Specs.

get_any_errors2(ok2(_, _)) = [].
get_any_errors2(error2(Specs)) = Specs.

get_any_errors3(ok3(_, _, _)) = [].
get_any_errors3(error3(Specs)) = Specs.

get_any_errors4(ok4(_, _, _, _)) = [].
get_any_errors4(error4(Specs)) = Specs.

parse_name_and_arity(ModuleName, PredAndArityTerm, SymName, Arity) :-
    PredAndArityTerm = term.functor(term.atom("/"),
        [PredNameTerm, ArityTerm], _),
    % The values of VarSet and ContextPieces do not matter here since
    % we succeed only if they aren't needed.
    VarSet = varset.init,
    ContextPieces = [],
    parse_implicitly_qualified_term(ModuleName, PredNameTerm, PredNameTerm,
        VarSet, ContextPieces, ok2(SymName, [])),
    ArityTerm = term.functor(term.integer(Arity), [], _).

parse_name_and_arity(PredAndArityTerm, SymName, Arity) :-
    parse_name_and_arity(unqualified(""),
        PredAndArityTerm, SymName, Arity).

parse_pred_or_func_name_and_arity(PorFPredAndArityTerm,
        PredOrFunc, SymName, Arity) :-
    PorFPredAndArityTerm = term.functor(term.atom(PredOrFuncStr), Args, _),
    ( PredOrFuncStr = "pred", PredOrFunc = pf_predicate
    ; PredOrFuncStr = "func", PredOrFunc = pf_function
    ),
    Args = [Arg],
    ModuleName = unqualified(""),
    parse_name_and_arity(ModuleName, Arg, SymName, Arity).

parse_pred_or_func_and_args(PredAndArgsTerm, PredOrFunc, SymName, ArgTerms) :-
    (
        PredAndArgsTerm = term.functor(term.atom("="),
            [FuncAndArgsTerm, FuncResultTerm], _)
    ->
        sym_name_and_args(FuncAndArgsTerm, SymName, ArgTerms0),
        PredOrFunc = pf_function,
        ArgTerms = ArgTerms0 ++ [FuncResultTerm]
    ;
        sym_name_and_args(PredAndArgsTerm, SymName, ArgTerms),
        PredOrFunc = pf_predicate
    ).

parse_pred_or_func_and_args_general(MaybeModuleName, PredAndArgsTerm,
        ErrorTerm, VarSet, ContextPieces, PredAndArgsResult) :-
    (
        PredAndArgsTerm = term.functor(term.atom("="),
            [FuncAndArgsTerm, FuncResultTerm], _)
    ->
        FunctorTerm = FuncAndArgsTerm,
        MaybeFuncResult = yes(FuncResultTerm)
    ;
        FunctorTerm = PredAndArgsTerm,
        MaybeFuncResult = no
    ),
    varset.coerce(VarSet, GenericVarSet),
    (
        MaybeModuleName = yes(ModuleName),
        parse_implicitly_qualified_term(ModuleName, FunctorTerm,
            ErrorTerm, GenericVarSet, ContextPieces, Result)
    ;
        MaybeModuleName = no,
        parse_qualified_term(FunctorTerm,
            ErrorTerm, GenericVarSet, ContextPieces, Result)
    ),
    (
        Result = ok2(SymName, Args),
        PredAndArgsResult = ok2(SymName, Args - MaybeFuncResult)
    ;
        Result = error2(Specs),
        PredAndArgsResult = error2(Specs)
    ).

maybe_parse_type(Term, Type) :-
    % The values of VarSet and ContextPieces do not matter since we succeed
    % only if they aren't used.
    VarSet = varset.init,
    ContextPieces = [],
    parse_type(Term, VarSet, ContextPieces, ok1(Type)).

parse_type(Term, VarSet, ContextPieces, Result) :-
    % XXX kind inference: We currently give all types kind `star'.
    % This will be different when we have a kind system.

    (
        Term = term.variable(Var0, _)
    ->
        term.coerce_var(Var0, Var),
        Result = ok1(type_variable(Var, kind_star))
    ;
        parse_builtin_type(Term, BuiltinType)
    ->
        Result = ok1(builtin_type(BuiltinType))
    ;
        parse_higher_order_type(Term, HOArgs, MaybeRet, Purity, EvalMethod)
    ->
        Result = ok1(higher_order_type(HOArgs, MaybeRet, Purity, EvalMethod))
    ;
        Term = term.functor(term.atom("{}"), Args, _)
    ->
        parse_types(Args, VarSet, ContextPieces, ArgsResult),
        (
            ArgsResult = ok1(ArgTypes),
            Result = ok1(tuple_type(ArgTypes, kind_star))
        ;
            ArgsResult = error1(Specs),
            Result = error1(Specs)
        )
    ;
        % We don't support apply/N types yet, so we just detect them
        % and report an error message.
        Term = term.functor(term.atom(""), _, Context)
    ->
        TermStr = describe_error_term(VarSet, Term),
        Pieces = ContextPieces ++ [lower_case_next_if_not_first,
            words("Error: ill-formed type"), words(TermStr), suffix("."), nl],
        Spec = error_spec(severity_error, phase_term_to_parse_tree,
            [simple_msg(Context, [always(Pieces)])]),
        Result = error1([Spec])
    ;
        % We don't support kind annotations yet, and we don't report
        % an error either. Perhaps we should?
        parse_qualified_term(Term, Term, VarSet, ContextPieces, NameResult),
        (
            NameResult = ok2(SymName, ArgTerms),
            parse_types(ArgTerms, VarSet, ContextPieces, ArgsResult),
            (
                ArgsResult = ok1(ArgTypes),
                Result = ok1(defined_type(SymName, ArgTypes, kind_star))
            ;
                ArgsResult = error1(Specs),
                Result = error1(Specs)
            )
        ;
            NameResult = error2(Specs),
            Result = error1(Specs)
        )
    ).

maybe_parse_types(Term, Types) :-
    % The values of VarSet and ContextPieces do not matter since we succeed
    % only if they aren't used.
    VarSet = varset.init,
    ContextPieces = [],
    parse_types(Term, VarSet, ContextPieces, ok1(Types)).

parse_types(Terms, VarSet, ContextPieces, Result) :-
    parse_types_2(Terms, VarSet, ContextPieces, [], Result).

:- pred parse_types_2(list(term)::in, varset::in, list(format_component)::in,
    list(mer_type)::in, maybe1(list(mer_type))::out) is det.

parse_types_2([], _, _, RevTypes, ok1(Types)) :-
    list.reverse(RevTypes, Types).
parse_types_2([Term | Terms], VarSet, ContextPieces, RevTypes, Result) :-
    parse_type(Term, VarSet, ContextPieces, Result0),
    (
        Result0 = ok1(Type),
        parse_types_2(Terms, VarSet, ContextPieces, [Type | RevTypes], Result)
    ;
        Result0 = error1(Specs),
        Result = error1(Specs)
    ).

:- pred parse_builtin_type(term::in, builtin_type::out) is semidet.

parse_builtin_type(Term, BuiltinType) :-
    Term = term.functor(term.atom(Name), [], _),
    builtin_type_to_string(BuiltinType, Name).

    % If there are any ill-formed types in the argument then we just fail.
    % The predicate parse_type will then try to parse the term as an ordinary
    % defined type and will produce the required error message.
    %
:- pred parse_higher_order_type(term::in, list(mer_type)::out,
    maybe(mer_type)::out, purity::out, lambda_eval_method::out) is semidet.

parse_higher_order_type(Term0, ArgTypes, MaybeRet, Purity, lambda_normal) :-
    parse_purity_annotation(Term0, Purity, Term1),
    ( Term1 = term.functor(term.atom("="), [FuncAndArgs, Ret], _) ->
        FuncAndArgs = term.functor(term.atom("func"), Args, _),
        maybe_parse_type(Ret, RetType),
        MaybeRet = yes(RetType)
    ;
        Term1 = term.functor(term.atom("pred"), Args, _),
        MaybeRet = no
    ),
    maybe_parse_types(Args, ArgTypes).

parse_purity_annotation(Term0, Purity, Term) :-
    (
        Term0 = term.functor(term.atom(PurityName), [Term1], _),
        purity_name(Purity0, PurityName)
    ->
        Purity = Purity0,
        Term = Term1
    ;
        Purity = purity_pure,
        Term = Term0
    ).

unparse_type(type_variable(TVar, _), term.variable(Var, context_init)) :-
    Var = term.coerce_var(TVar).
unparse_type(defined_type(SymName, Args, _), Term) :-
    unparse_type_list(Args, ArgTerms),
    unparse_qualified_term(SymName, ArgTerms, Term).
unparse_type(builtin_type(BuiltinType), Term) :-
    Context = term.context_init,
    builtin_type_to_string(BuiltinType, Name),
    Term = term.functor(term.atom(Name), [], Context).
unparse_type(higher_order_type(Args, MaybeRet, Purity, EvalMethod), Term) :-
    Context = term.context_init,
    unparse_type_list(Args, ArgTerms),
    (
        MaybeRet = yes(Ret),
        Term0 = term.functor(term.atom("func"), ArgTerms, Context),
        maybe_add_lambda_eval_method(EvalMethod, Term0, Term1),
        unparse_type(Ret, RetTerm),
        Term2 = term.functor(term.atom("="), [Term1, RetTerm], Context)
    ;
        MaybeRet = no,
        Term0 = term.functor(term.atom("pred"), ArgTerms, Context),
        maybe_add_lambda_eval_method(EvalMethod, Term0, Term2)
    ),
    maybe_add_purity_annotation(Purity, Term2, Term).
unparse_type(tuple_type(Args, _), Term) :-
    Context = term.context_init,
    unparse_type_list(Args, ArgTerms),
    Term = term.functor(term.atom("{}"), ArgTerms, Context).
unparse_type(apply_n_type(TVar, Args, _), Term) :-
    Context = term.context_init,
    Var = term.coerce_var(TVar),
    unparse_type_list(Args, ArgTerms),
    Term = term.functor(term.atom(""), [term.variable(Var, Context) | ArgTerms],
        Context).
unparse_type(kinded_type(_, _), _) :-
    unexpected(this_file, "prog_io_util: kind annotation").

:- pred unparse_type_list(list(mer_type)::in, list(term)::out) is det.

unparse_type_list(Types, Terms) :-
    list.map(unparse_type, Types, Terms).

:- pred unparse_qualified_term(sym_name::in, list(term)::in, term::out) is det.

unparse_qualified_term(unqualified(Name), Args, Term) :-
    Context = term.context_init,
    Term = term.functor(term.atom(Name), Args, Context).
unparse_qualified_term(qualified(Qualifier, Name), Args, Term) :-
    Context = term.context_init,
    unparse_qualified_term(Qualifier, [], QualTerm),
    Term0 = term.functor(term.atom(Name), Args, Context),
    Term = term.functor(term.atom("."), [QualTerm, Term0], Context).

:- pred maybe_add_lambda_eval_method(lambda_eval_method::in, term::in,
    term::out) is det.

maybe_add_lambda_eval_method(lambda_normal, Term, Term).

:- pred maybe_add_purity_annotation(purity::in, term::in, term::out) is det.

maybe_add_purity_annotation(purity_pure, Term, Term).
maybe_add_purity_annotation(purity_semipure, Term0, Term) :-
    Context = term.context_init,
    Term = term.functor(term.atom("semipure"), [Term0], Context).
maybe_add_purity_annotation(purity_impure, Term0, Term) :-
    Context = term.context_init,
    Term = term.functor(term.atom("impure"), [Term0], Context).

convert_mode_list(_, [], []).
convert_mode_list(AllowConstrainedInstVar, [H0 | T0], [H | T]) :-
    convert_mode(AllowConstrainedInstVar, H0, H),
    convert_mode_list(AllowConstrainedInstVar, T0, T).

convert_mode(AllowConstrainedInstVar, Term, Mode) :-
    (
        Term = term.functor(term.atom(">>"), [InstTermA, InstTermB], _)
    ->
        convert_inst(AllowConstrainedInstVar, InstTermA, InstA),
        convert_inst(AllowConstrainedInstVar, InstTermB, InstB),
        Mode = (InstA -> InstB)
    ;
        % Handle higher-order predicate modes:
        % a mode of the form
        %   pred(<Mode1>, <Mode2>, ...) is <Det>
        % is an abbreviation for the inst mapping
        %   (  pred(<Mode1>, <Mode2>, ...) is <Det>
        %   -> pred(<Mode1>, <Mode2>, ...) is <Det>
        %   )

        Term = term.functor(term.atom("is"), [PredTerm, DetTerm], _),
        PredTerm = term.functor(term.atom("pred"), ArgModesTerms, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerms, ArgModes),
        PredInstInfo = pred_inst_info(pf_predicate, ArgModes, Detism),
        Inst = ground(shared, higher_order(PredInstInfo)),
        Mode = (Inst -> Inst)
    ;
        % Handle higher-order function modes:
        % a mode of the form
        %   func(<Mode1>, <Mode2>, ...) = <RetMode> is <Det>
        % is an abbreviation for the inst mapping
        %   (  func(<Mode1>, <Mode2>, ...) = <RetMode> is <Det>
        %   -> func(<Mode1>, <Mode2>, ...) = <RetMode> is <Det>
        %   )

        Term = term.functor(term.atom("is"), [EqTerm, DetTerm], _),
        EqTerm = term.functor(term.atom("="), [FuncTerm, RetModeTerm], _),
        FuncTerm = term.functor(term.atom("func"), ArgModesTerms, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerms, ArgModes0),
        convert_mode(AllowConstrainedInstVar, RetModeTerm, RetMode),
        list.append(ArgModes0, [RetMode], ArgModes),
        FuncInstInfo = pred_inst_info(pf_function, ArgModes, Detism),
        Inst = ground(shared, higher_order(FuncInstInfo)),
        Mode = (Inst -> Inst)
    ;
        % Handle higher-order predicate modes:
        % a mode of the form
        %   any_pred(<Mode1>, <Mode2>, ...) is <Det>
        % is an abbreviation for the inst mapping
        %   (  any_pred(<Mode1>, <Mode2>, ...) is <Det>
        %   -> any_pred(<Mode1>, <Mode2>, ...) is <Det>
        %   )

        Term = term.functor(term.atom("is"), [PredTerm, DetTerm], _),
        PredTerm = term.functor(term.atom("any_pred"), ArgModesTerms, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerms, ArgModes),
        PredInstInfo = pred_inst_info(pf_predicate, ArgModes, Detism),
        Inst = any(shared, higher_order(PredInstInfo)),
        Mode = (Inst -> Inst)
    ;
        % Handle higher-order function modes:
        % a mode of the form
        %   any_func(<Mode1>, <Mode2>, ...) = <RetMode> is <Det>
        % is an abbreviation for the inst mapping
        %   (  any_func(<Mode1>, <Mode2>, ...) = <RetMode> is <Det>
        %   -> any_func(<Mode1>, <Mode2>, ...) = <RetMode> is <Det>
        %   )

        Term = term.functor(term.atom("is"), [EqTerm, DetTerm], _),
        EqTerm = term.functor(term.atom("="), [FuncTerm, RetModeTerm], _),
        FuncTerm = term.functor(term.atom("any_func"), ArgModesTerms, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerms, ArgModes0),
        convert_mode(AllowConstrainedInstVar, RetModeTerm, RetMode),
        list.append(ArgModes0, [RetMode], ArgModes),
        FuncInstInfo = pred_inst_info(pf_function, ArgModes, Detism),
        Inst = any(shared, higher_order(FuncInstInfo)),
        Mode = (Inst -> Inst)
    ;
        % If the sym_name_and_args fails, we should report the error
        % (we would need to call parse_qualified_term instead).
        sym_name_and_args(Term, Name, Args),
        convert_inst_list(AllowConstrainedInstVar, Args, ConvertedArgs),
        Mode = user_defined_mode(Name, ConvertedArgs)
    ).

convert_inst_list(_, [], []).
convert_inst_list(AllowConstrainedInstVar, [H0 | T0], [H | T]) :-
    convert_inst(AllowConstrainedInstVar, H0, H),
    convert_inst_list(AllowConstrainedInstVar, T0, T).

convert_inst(_, term.variable(V0, _), inst_var(V)) :-
    term.coerce_var(V0, V).
convert_inst(AllowConstrainedInstVar, Term, Result) :-
    Term = term.functor(term.atom(Name), Args0, _Context),
    (
        convert_simple_builtin_inst(Name, Args0, Result0)
    ->
        Result = Result0
    ;
        % The syntax for a ground higher-order pred inst is
        %
        %   pred(<Mode1>, <Mode2>, ...) is <Detism>
        %
        % where <Mode1>, <Mode2>, ... are a list of modes,
        % and <Detism> is a determinism.

        Name = "is", Args0 = [PredTerm, DetTerm],
        PredTerm = term.functor(term.atom("pred"), ArgModesTerm, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerm, ArgModes),
        PredInst = pred_inst_info(pf_predicate, ArgModes, Detism),
        Result = ground(shared, higher_order(PredInst))
    ;
        % The syntax for a ground higher-order func inst is
        %
        %   func(<Mode1>, <Mode2>, ...) = <RetMode> is <Detism>
        %
        % where <Mode1>, <Mode2>, ... are a list of modes,
        % <RetMode> is a mode, and <Detism> is a determinism.

        Name = "is", Args0 = [EqTerm, DetTerm],
        EqTerm = term.functor(term.atom("="), [FuncTerm, RetModeTerm], _),
        FuncTerm = term.functor(term.atom("func"), ArgModesTerm, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerm, ArgModes0),
        convert_mode(AllowConstrainedInstVar, RetModeTerm, RetMode),
        list.append(ArgModes0, [RetMode], ArgModes),
        FuncInst = pred_inst_info(pf_function, ArgModes, Detism),
        Result = ground(shared, higher_order(FuncInst))
    ;
        % The syntax for an `any' higher-order pred inst is
        %
        %   any_pred(<Mode1>, <Mode2>, ...) is <Detism>
        %
        % where <Mode1>, <Mode2>, ... are a list of modes,
        % and <Detism> is a determinism.

        Name = "is", Args0 = [PredTerm, DetTerm],
        PredTerm = term.functor(term.atom("any_pred"), ArgModesTerm, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerm, ArgModes),
        PredInst = pred_inst_info(pf_predicate, ArgModes, Detism),
        Result = any(shared, higher_order(PredInst))
    ;
        % The syntax for an `any' higher-order func inst is
        %
        %   any_func(<Mode1>, <Mode2>, ...) = <RetMode> is <Detism>
        %
        % where <Mode1>, <Mode2>, ... are a list of modes,
        % <RetMode> is a mode, and <Detism> is a determinism.

        Name = "is", Args0 = [EqTerm, DetTerm],
        EqTerm = term.functor(term.atom("="), [FuncTerm, RetModeTerm], _),
        FuncTerm = term.functor(term.atom("any_func"), ArgModesTerm, _)
    ->
        DetTerm = term.functor(term.atom(DetString), [], _),
        standard_det(DetString, Detism),
        convert_mode_list(AllowConstrainedInstVar, ArgModesTerm, ArgModes0),
        convert_mode(AllowConstrainedInstVar, RetModeTerm, RetMode),
        list.append(ArgModes0, [RetMode], ArgModes),
        FuncInst = pred_inst_info(pf_function, ArgModes, Detism),
        Result = any(shared, higher_order(FuncInst))

    ; Name = "bound", Args0 = [Disj] ->
        % `bound' insts
        parse_bound_inst_list(AllowConstrainedInstVar, Disj, shared, Result)
    ; Name = "bound_unique", Args0 = [Disj] ->
        % `bound_unique' is for backwards compatibility - use `unique' instead.
        parse_bound_inst_list(AllowConstrainedInstVar, Disj, unique, Result)
    ; Name = "unique", Args0 = [Disj] ->
        parse_bound_inst_list(AllowConstrainedInstVar, Disj, unique, Result)
    ; Name = "mostly_unique", Args0 = [Disj] ->
        parse_bound_inst_list(AllowConstrainedInstVar, Disj, mostly_unique,
            Result)
    ; Name = "=<", Args0 = [VarTerm, InstTerm] ->
        AllowConstrainedInstVar = allow_constrained_inst_var,
        VarTerm = term.variable(Var, _),
        % Do not allow nested constrained_inst_vars.
        convert_inst(no_allow_constrained_inst_var, InstTerm, Inst),
        Result = constrained_inst_vars(set.make_singleton_set(
            term.coerce_var(Var)), Inst)
    ;
        % Anything else must be a user-defined inst.
        sym_name_and_args(Term, QualifiedName, Args1),
        (
            BuiltinModule = mercury_public_builtin_module,
            sym_name_get_module_name_default(QualifiedName, unqualified(""),
                BuiltinModule),
            % If the term is qualified with the `builtin' module
            % then it may be one of the simple builtin insts.
            % We call convert_inst recursively to check for this.
            UnqualifiedName = unqualify_name(QualifiedName),
            convert_simple_builtin_inst(UnqualifiedName, Args1, Result0),

            % However, if the inst is a user_inst defined inside
            % the `builtin' module then we need to make sure it is
            % properly module-qualified.
            Result0 \= defined_inst(user_inst(_, _))
        ->
            Result = Result0
        ;
            convert_inst_list(AllowConstrainedInstVar, Args1, Args),
            Result = defined_inst(user_inst(QualifiedName, Args))
        )
    ).

    % A "simple" builtin inst is one that has no arguments and no special
    % syntax.
    %
:- pred convert_simple_builtin_inst(string::in, list(term)::in, mer_inst::out)
    is semidet.

convert_simple_builtin_inst(Name, [], Inst) :-
    convert_simple_builtin_inst_2(Name, Inst).

:- pred convert_simple_builtin_inst_2(string::in, mer_inst::out) is semidet.

    % `free' insts
convert_simple_builtin_inst_2("free", free).

    % `any' insts
convert_simple_builtin_inst_2("any",                any(shared, none)).
convert_simple_builtin_inst_2("unique_any",         any(unique, none)).
convert_simple_builtin_inst_2("mostly_unique_any",  any(mostly_unique, none)).
convert_simple_builtin_inst_2("clobbered_any",      any(clobbered, none)).
convert_simple_builtin_inst_2("mostly_clobbered_any",
    any(mostly_clobbered, none)).

    % `ground' insts
convert_simple_builtin_inst_2("ground",         ground(shared, none)).
convert_simple_builtin_inst_2("unique",         ground(unique, none)).
convert_simple_builtin_inst_2("mostly_unique",  ground(mostly_unique, none)).
convert_simple_builtin_inst_2("clobbered",      ground(clobbered, none)).
convert_simple_builtin_inst_2("mostly_clobbered",
    ground(mostly_clobbered, none)).

    % `not_reached' inst
convert_simple_builtin_inst_2("not_reached", not_reached).

standard_det("det",       detism_det).
standard_det("cc_nondet", detism_cc_non).
standard_det("cc_multi",  detism_cc_multi).
standard_det("nondet",    detism_non).
standard_det("multi",     detism_multi).
standard_det("multidet",  detism_multi).
standard_det("semidet",   detism_semi).
standard_det("erroneous", detism_erroneous).
standard_det("failure",   detism_failure).

:- pred parse_bound_inst_list(allow_constrained_inst_var::in, term::in,
    uniqueness::in, mer_inst::out) is semidet.

parse_bound_inst_list(AllowConstrainedInstVar, Disj, Uniqueness,
        bound(Uniqueness, Functors)) :-
    disjunction_to_list(Disj, List),
    convert_bound_inst_list(AllowConstrainedInstVar, List, Functors0),
    list.sort(Functors0, Functors),
    % Check that the list doesn't specify the same functor twice.
    \+ (
        list.append(_, SubList, Functors),
        SubList = [F1, F2 | _],
        F1 = bound_functor(ConsId, _),
        F2 = bound_functor(ConsId, _)
    ).

:- pred convert_bound_inst_list(allow_constrained_inst_var::in, list(term)::in,
    list(bound_inst)::out) is semidet.

convert_bound_inst_list(_, [], []).
convert_bound_inst_list(AllowConstrainedInstVar, [H0 | T0], [H | T]) :-
    convert_bound_inst(AllowConstrainedInstVar, H0, H),
    convert_bound_inst_list(AllowConstrainedInstVar, T0, T).

:- pred convert_bound_inst(allow_constrained_inst_var::in, term::in,
    bound_inst::out) is semidet.

convert_bound_inst(AllowConstrainedInstVar, InstTerm,
        bound_functor(ConsId, Args)) :-
    InstTerm = term.functor(Functor, Args0, _),
    (
        Functor = term.atom(_),
        sym_name_and_args(InstTerm, SymName, Args1),
        list.length(Args1, Arity),
        ConsId = cons(SymName, Arity)
    ;
        Functor = term.implementation_defined(_),
        % Implementation-defined literals should not appear in inst
        % definitions.
        fail
    ;
        ( Functor = term.integer(_)
        ; Functor = term.float(_)
        ; Functor = term.string(_)
        ),
        Args1 = Args0,
        list.length(Args1, Arity),
        ConsId = make_functor_cons_id(Functor, Arity)
    ),
    convert_inst_list(AllowConstrainedInstVar, Args1, Args).

disjunction_to_list(Term, List) :-
    binop_term_to_list(";", Term, List).

conjunction_to_list(Term, List) :-
    binop_term_to_list(",", Term, List).

list_to_conjunction(_, Term, [], Term).
list_to_conjunction(Context, First, [Second | Rest], Term) :-
    list_to_conjunction(Context, Second, Rest, Tail),
    Term = term.functor(term.atom(","), [First, Tail], Context).

sum_to_list(Term, List) :-
    binop_term_to_list("+", Term, List).

    % General predicate to convert terms separated by any specified operator
    % into a list.
    %
:- pred binop_term_to_list(string::in, term(T)::in, list(term(T))::out) is det.

binop_term_to_list(Op, Term, List) :-
    binop_term_to_list_2(Op, Term, [], List).

:- pred binop_term_to_list_2(string::in, term(T)::in, list(term(T))::in,
    list(term(T))::out) is det.

binop_term_to_list_2(Op, Term, !List) :-
    ( Term = term.functor(term.atom(Op), [L, R], _Context) ->
        binop_term_to_list_2(Op, R, !List),
        binop_term_to_list_2(Op, L, !List)
    ;
        !:List = [Term | !.List]
    ).

parse_list(Parser, Term, Result) :-
    conjunction_to_list(Term, List),
    map_parser(Parser, List, Result).

map_parser(_, [], ok1([])).
map_parser(Parser, [X | Xs], Result) :-
    call(Parser, X, X_Result),
    map_parser(Parser, Xs, Xs_Result),
    combine_list_results(X_Result, Xs_Result, Result).

    % If several items in a list contain errors, then we report them all.
    %
:- pred combine_list_results(maybe1(T)::in, maybe1(list(T))::in,
    maybe1(list(T))::out) is det.

combine_list_results(error1(HeadSpecs), error1(TailSpecs),
    error1(HeadSpecs ++ TailSpecs)).
combine_list_results(error1(Specs), ok1(_), error1(Specs)).
combine_list_results(ok1(_), error1(Specs), error1(Specs)).
combine_list_results(ok1(X), ok1(Xs), ok1([X | Xs])).

%-----------------------------------------------------------------------------%

parse_list_of_vars(term.functor(term.atom("[]"), [], _), []).
parse_list_of_vars(term.functor(term.atom("[|]"), [Head, Tail], _),
        [Var | Vars]) :-
    Head = term.variable(Var, _),
    parse_list_of_vars(Tail, Vars).

parse_vars(Term, VarSet, ContextPieces, MaybeVars) :-
    ( Term = functor(atom("[]"), [], _) ->
        MaybeVars = ok1([])
    ; Term = functor(atom("[|]"), [HeadTerm, TailTerm], _) ->
        (
            HeadTerm = variable(HeadVar, _),
            parse_vars(TailTerm, VarSet, ContextPieces, MaybeVarsTail),
            (
                MaybeVarsTail = ok1(TailVars),
                Vars = [HeadVar] ++ TailVars,
                MaybeVars = ok1(Vars)
            ;
                MaybeVarsTail = error1(_),
                MaybeVars = MaybeVarsTail
            )
        ;
            HeadTerm = functor(_, _, _),
            TermStr = describe_error_term(VarSet, Term),
            Pieces = ContextPieces ++ [lower_case_next_if_not_first,
                words("Expected variable, not"),
                words(TermStr), suffix("."), nl],
            Spec = error_spec(severity_error, phase_term_to_parse_tree,
                [simple_msg(get_term_context(HeadTerm), [always(Pieces)])]),
            MaybeVars = error1([Spec])
        )
    ;
        TermStr = describe_error_term(VarSet, Term),
        Pieces = ContextPieces ++ [lower_case_next_if_not_first,
            words("Expected list of variables, not"),
            words(TermStr), suffix("."), nl],
        Spec = error_spec(severity_error, phase_term_to_parse_tree,
            [simple_msg(get_term_context(Term), [always(Pieces)])]),
        MaybeVars = error1([Spec])
    ).

parse_quantifier_vars(Term, VarSet, ContextPieces, MaybeVars) :-
    ( Term = functor(atom("[]"), [], _) ->
        MaybeVars = ok2([], [])
    ; Term = functor(atom("[|]"), [HeadTerm, TailTerm], _) ->
        (
            (
                HeadTerm = functor(atom("!"), [variable(SV, _)], _),
                HeadVars = [],
                HeadStateVars = [SV]
            ;
                HeadTerm = variable(V, _),
                HeadVars = [V],
                HeadStateVars = []
            )
        ->
            parse_quantifier_vars(TailTerm, VarSet, ContextPieces,
                MaybeVarsTail),
            (
                MaybeVarsTail = ok2(TailVars, TailStateVars),
                Vars = HeadVars ++ TailVars,
                StateVars = HeadStateVars ++ TailStateVars,
                MaybeVars = ok2(Vars, StateVars)
            ;
                MaybeVarsTail = error2(_),
                MaybeVars = MaybeVarsTail
            )
        ;
            TermStr = describe_error_term(VarSet, Term),
            Pieces = ContextPieces ++ [lower_case_next_if_not_first,
                words("Expected variable or state variable, not"),
                words(TermStr), suffix("."), nl],
            Spec = error_spec(severity_error, phase_term_to_parse_tree,
                [simple_msg(get_term_context(HeadTerm), [always(Pieces)])]),
            MaybeVars = error2([Spec])
        )
    ;
        TermStr = describe_error_term(VarSet, Term),
        Pieces = ContextPieces ++ [lower_case_next_if_not_first,
            words("Expected list of variables and/or state variables, not"),
            words(TermStr), suffix("."), nl],
        Spec = error_spec(severity_error, phase_term_to_parse_tree,
            [simple_msg(get_term_context(Term), [always(Pieces)])]),
        MaybeVars = error2([Spec])
    ).

parse_vars_and_state_vars(Term, VarSet, ContextPieces, MaybeVars) :-
    ( Term = functor(atom("[]"), [], _) ->
        MaybeVars = ok3([], [], [])
    ; Term = functor(atom("[|]"), [HeadTerm, Tail], _) ->
        (
            (
                HeadTerm = functor(atom("!"), [variable(SV, _)], _),
                HeadVars = [],
                HeadDotVars = [SV],
                HeadColonVars = [SV]
            ;
                HeadTerm = functor(atom("!."), [variable(SV, _)], _),
                HeadVars = [],
                HeadDotVars = [SV],
                HeadColonVars = []
            ;
                HeadTerm = functor(atom("!:"), [variable(SV, _)], _),
                HeadVars = [],
                HeadDotVars = [],
                HeadColonVars = [SV]
            ;
                HeadTerm = variable(V, _),
                HeadVars = [V],
                HeadDotVars = [],
                HeadColonVars = []
            )
        ->
            parse_vars_and_state_vars(Tail, VarSet, ContextPieces,
                MaybeVarsTail),
            (
                MaybeVarsTail = ok3(TailVars, TailDotVars, TailColonVars),
                Vars = HeadVars ++ TailVars,
                DotVars = HeadDotVars ++ TailDotVars,
                ColonVars = HeadColonVars ++ TailColonVars,
                MaybeVars = ok3(Vars, DotVars, ColonVars)
            ;
                MaybeVarsTail = error3(_),
                MaybeVars = MaybeVarsTail
            )
        ;
            TermStr = describe_error_term(VarSet, Term),
            Pieces = ContextPieces ++ [lower_case_next_if_not_first,
                words("Expected variable or state variable, not"),
                words(TermStr), suffix("."), nl],
            Spec = error_spec(severity_error, phase_term_to_parse_tree,
                [simple_msg(get_term_context(HeadTerm), [always(Pieces)])]),
            MaybeVars = error3([Spec])
        )
    ;
        TermStr = describe_error_term(VarSet, Term),
        Pieces = ContextPieces ++ [lower_case_next_if_not_first,
            words("Expected list of variables and/or state variables, not"),
            words(TermStr), suffix("."), nl],
        Spec = error_spec(severity_error, phase_term_to_parse_tree,
            [simple_msg(get_term_context(Term), [always(Pieces)])]),
        MaybeVars = error3([Spec])
    ).

%-----------------------------------------------------------------------------%

list_term_to_term_list(Term, Terms) :-
    (
        Term = term.functor(term.atom("[|]"), [HeadTerm, TailTerm], _),
        list_term_to_term_list(TailTerm, TailTerms),
        Terms = [HeadTerm | TailTerms]
    ;
        Term = term.functor(term.atom("[]"), [], _),
        Terms = []
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "prog_io_util.m".

%-----------------------------------------------------------------------------%
:- end_module parse_tree.prog_io_util.
%-----------------------------------------------------------------------------%
