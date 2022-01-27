%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2016 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% This module defines predicates that parse and unparse type names.
%
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module parse_tree.prog_io_type_name.
:- interface.

:- import_module parse_tree.error_util.
:- import_module parse_tree.maybe_error.
:- import_module parse_tree.prog_data.

:- import_module cord.
:- import_module list.
:- import_module term.
:- import_module varset.

%---------------------------------------------------------------------------%

:- pred maybe_parse_type(term::in, mer_type::out) is semidet.

:- pred parse_type(term::in, varset::in, cord(format_component)::in,
    maybe1(mer_type)::out) is det.

:- pred maybe_parse_types(list(term)::in, list(mer_type)::out) is semidet.

:- pred parse_types(list(term)::in, varset::in, cord(format_component)::in,
    maybe1(list(mer_type))::out) is det.

:- pred is_known_type_name(string::in) is semidet.

:- pred unparse_type(mer_type::in, term::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module mdbcomp.sym_name.
:- import_module parse_tree.parse_tree_out_term.
:- import_module parse_tree.prog_io_sym_name.
:- import_module parse_tree.prog_out.

:- import_module bool.
:- import_module maybe.
:- import_module require.

%---------------------------------------------------------------------------%

maybe_parse_type(Term, Type) :-
    % The values of VarSet and ContextPieces do not matter since we succeed
    % only if they aren't used.
    VarSet = varset.init,
    ContextPieces = cord.init,
    parse_type(Term, VarSet, ContextPieces, ok1(Type)).

parse_type(Term, VarSet, ContextPieces, Result) :-
    % XXX kind inference: We currently give all types kind `star'.
    % This will be different when we have a kind system.
    (
        Term = term.variable(Var0, _),
        term.coerce_var(Var0, Var),
        Result = ok1(type_variable(Var, kind_star))
    ;
        Term = term.functor(Functor, ArgTerms, _),
        (
            ( Functor = term.integer(_)
            ; Functor = term.big_integer(_, _)
            ; Functor = term.float(_)
            ; Functor = term.string(_)
            ; Functor = term.implementation_defined(_)
            ),
            Result = ill_formed_type_result(ContextPieces, VarSet, Term)
        ;
            Functor = term.atom(Name),
            % XXX We *could* generate a specific error message for each kind
            % of "ill-typed" term.
            ( if is_known_type_name_args(Name, ArgTerms, KnownTypeKind) then
                (
                    KnownTypeKind = known_type_simple(Type),
                    Result = ok1(Type)
                ;
                    KnownTypeKind = known_type_compound(CompoundTypeKind),
                    parse_compound_type(Term, VarSet, ContextPieces,
                        CompoundTypeKind, Result)
                ;
                    KnownTypeKind = known_type_bad_arity,
                    Result = ill_formed_type_result(ContextPieces, VarSet,
                        Term)
                )
            else
                % We don't support kind annotations yet, and we don't report
                % an error either. Perhaps we should?
                parse_sym_name_and_args(Term, VarSet, ContextPieces,
                    NameResult),
                (
                    NameResult = ok2(SymName, SymNameArgTerms),
                    parse_types(SymNameArgTerms, VarSet, ContextPieces,
                        SymNameArgsResult),
                    (
                        SymNameArgsResult = ok1(ArgTypes),
                        Result = ok1(defined_type(SymName, ArgTypes,
                            kind_star))
                    ;
                        SymNameArgsResult = error1(Specs),
                        Result = error1(Specs)
                    )
                ;
                    NameResult = error2(Specs),
                    Result = error1(Specs)
                )
            )
        )
    ).

:- pred parse_compound_type(term::in, varset::in, cord(format_component)::in,
    known_compound_type_kind(term)::in, maybe1(mer_type)::out) is det.

parse_compound_type(Term, VarSet, ContextPieces, CompoundTypeKind, Result) :-
    (
        CompoundTypeKind = kctk_tuple(Args),
        parse_types(Args, VarSet, ContextPieces, ArgsResult),
        (
            ArgsResult = ok1(ArgTypes),
            Result = ok1(tuple_type(ArgTypes, kind_star))
        ;
            ArgsResult = error1(Specs),
            Result = error1(Specs)
        )
    ;
        CompoundTypeKind = kctk_apply(_),
        % We don't support apply/N types yet, so we just detect them
        % and report an error message.
        TermStr = describe_error_term(VarSet, Term),
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: ill-formed type"), words(TermStr), suffix("."), nl],
        Spec = error_spec(severity_error, phase_term_to_parse_tree,
            [simple_msg(get_term_context(Term), [always(Pieces)])]),
        Result = error1([Spec])
    ;
        CompoundTypeKind = kctk_pure_pred(Args),
        ( if
            maybe_parse_types(Args, ArgTypes)
        then
            Result = ok1(higher_order_type(ArgTypes, no, purity_pure,
                lambda_normal))
        else
            Result = ill_formed_type_result(ContextPieces, VarSet, Term)
        )
    ;
        CompoundTypeKind = kctk_pure_func(Arg1, Arg2),
        ( if
            Arg1 = term.functor(term.atom("func"), FuncArgs, _),
            maybe_parse_types(FuncArgs, ArgTypes),
            maybe_parse_type(Arg2, RetType)
        then
            Result = ok1(higher_order_type(ArgTypes,
                yes(RetType), purity_pure, lambda_normal))
        else
            Result = ill_formed_type_result(ContextPieces, VarSet, Term)
        )
    ;
        CompoundTypeKind = kctk_purity(Purity, SubTerm),
        ( if
            SubTerm = term.functor(term.atom(Name), Args, _),
            (
                Name = "=",
                Args = [Arg1, Arg2],
                Arg1 = term.functor(term.atom("func"), FuncArgs, _),
                maybe_parse_types(FuncArgs, ArgTypes),
                maybe_parse_type(Arg2, RetType),
                ResultPrime = ok1(higher_order_type(ArgTypes,
                    yes(RetType), Purity, lambda_normal))
            ;
                Name = "pred",
                maybe_parse_types(Args, ArgTypes),
                ResultPrime = ok1(higher_order_type(ArgTypes, no, Purity,
                    lambda_normal))
            )
        then
            Result = ResultPrime
        else
            Result = ill_formed_type_result(ContextPieces, VarSet, Term)
        )
    ).

is_known_type_name(Name) :-
    (
        is_known_type_name_args(Name, [] : list(mer_type), _)
    ;
        % The first disjunct succeeds for "pred", and the fact that
        % a higher order function type's top level functor is "=" and
        % not "func" is merely an implementation detail. Reserving "pred"
        % but not "func" as a type constructor name because of this detail
        % would be wrong, so we reserve "func" here as well.
        Name = "func"
    ).

:- type known_compound_type_kind(T)
    --->    kctk_tuple(list(T))
    ;       kctk_pure_func(T, T)
    ;       kctk_pure_pred(list(T))
    ;       kctk_purity(purity, T)
    ;       kctk_apply(list(T)).

:- type known_type_kind(T)
    --->    known_type_simple(mer_type)
    ;       known_type_compound(known_compound_type_kind(T))
    ;       known_type_bad_arity.

    % is_known_type_name_args(TypeName, TypeArgs, KnownTypeKind):
    %
    % If Name is a known type name and Name(TypeArgs) is a valid type
    % structure, then return its kind in KnownTypeKind.
    %
    % If Name is a known type name but Name(TypeArgs) is NOT a valid type
    % structure, then return known_type_bad_arity in KnownTypeKind.
    %
    % If Name is not a known type name, fail.
    %
:- pred is_known_type_name_args(string::in, list(T)::in,
    known_type_kind(T)::out) is semidet.

is_known_type_name_args(Name, Args, KnownType) :-
    (
        % Known types which are always simple.
        (
            Name = "int",
            BuiltinType = builtin_type_int
        ;
            Name = "float",
            BuiltinType = builtin_type_float
        ;
            Name = "character",
            BuiltinType = builtin_type_char
        ;
            % The type "char" is defined in library/char.m as equivalent
            % to the builtin type "character". However, if we recognize it
            % here, then imports of the char module won't be seen to be used.
%           Name = "char",
%           BuiltinType = builtin_type_char
%       ;
            Name = "string",
            BuiltinType = builtin_type_string
        ),
        (
            Args = [],
            KnownType = known_type_simple(builtin_type(BuiltinType))
        ;
            Args = [_ | _],
            KnownType = known_type_bad_arity
        )
    ;
        Name = "{}",
        KnownType = known_type_compound(kctk_tuple(Args))
    ;
        Name = "=",
        (
            ( Args = []
            ; Args = [_]
            ; Args = [_, _, _ | _]
            ),
            KnownType = known_type_bad_arity
        ;
            Args = [Arg1, Arg2],
            KnownType = known_type_compound(kctk_pure_func(Arg1, Arg2))
        )
    ;
        Name = "pred",
        KnownType = known_type_compound(kctk_pure_pred(Args))
    ;
        (
            Name = "pure",
            Purity = purity_pure
        ;
            Name = "semipure",
            Purity = purity_semipure
        ;
            Name = "impure",
            Purity = purity_impure
        ),
        (
            ( Args = []
            ; Args = [_, _ | _]
            ),
            KnownType = known_type_bad_arity
        ;
            Args = [Arg1],
            KnownType = known_type_compound(kctk_purity(Purity, Arg1))
        )
    ;
        Name = "",
        KnownType = known_type_compound(kctk_apply(Args))
    ).

:- func ill_formed_type_result(cord(format_component), varset, term)
    = maybe1(mer_type).

ill_formed_type_result(ContextPieces, VarSet, Term) = Result :-
    TermStr = describe_error_term(VarSet, Term),
    Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
        words("Error: ill-formed type"), words(TermStr), suffix("."), nl],
    Spec = error_spec(severity_error, phase_term_to_parse_tree,
        [simple_msg(get_term_context(Term), [always(Pieces)])]),
    Result = error1([Spec]).

%---------------------------------------------------------------------------%

maybe_parse_types(Term, Types) :-
    % The values of VarSet and ContextPieces do not matter since we succeed
    % only if they aren't used.
    VarSet = varset.init,
    ContextPieces = cord.init,
    parse_types(Term, VarSet, ContextPieces, ok1(Types)).

parse_types(Terms, VarSet, ContextPieces, Result) :-
    parse_types_acc(Terms, VarSet, ContextPieces, [], RevTypes, [], Specs),
    (
        Specs = [],
        Result = ok1(list.reverse(RevTypes))
    ;
        Specs = [_ | _],
        Result = error1(Specs)
    ).

:- pred parse_types_acc(list(term)::in, varset::in, cord(format_component)::in,
    list(mer_type)::in, list(mer_type)::out,
    list(error_spec)::in, list(error_spec)::out) is det.

parse_types_acc([], _, _, !RevTypes, !Specs).
parse_types_acc([Term | Terms], VarSet, ContextPieces, !RevTypes, !Specs) :-
    % XXX We should pass a ContextPieces updated as the "nth type in ...".
    parse_type(Term, VarSet, ContextPieces, TermResult),
    (
        TermResult = ok1(Type),
        !:RevTypes = [Type | !.RevTypes]
    ;
        TermResult = error1(TermSpecs),
        !:Specs = TermSpecs ++ !.Specs
    ),
    parse_types_acc(Terms, VarSet, ContextPieces, !RevTypes, !Specs).

%---------------------------------------------------------------------------%

unparse_type(Type, Term) :-
    Context = term.context_init,
    (
        Type = type_variable(TVar, _),
        Var = term.coerce_var(TVar),
        Term = term.variable(Var, Context)
    ;
        Type = defined_type(SymName, Args, _),
        unparse_type_list(Args, ArgTerms),
        unparse_qualified_term(SymName, ArgTerms, Term)
    ;
        Type = builtin_type(BuiltinType),
        builtin_type_to_string(BuiltinType, Name),
        Term = term.functor(term.atom(Name), [], Context)
    ;
        Type = higher_order_type(Args, MaybeRet, Purity, EvalMethod),
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
        maybe_add_purity_annotation(Purity, Term2, Term)
    ;
        Type = tuple_type(Args, _),
        unparse_type_list(Args, ArgTerms),
        Term = term.functor(term.atom("{}"), ArgTerms, Context)
    ;
        Type = apply_n_type(TVar, Args, _),
        Var = term.coerce_var(TVar),
        unparse_type_list(Args, ArgTerms),
        Term = term.functor(term.atom(""),
            [term.variable(Var, Context) | ArgTerms], Context)
    ;
        Type = kinded_type(_, _),
        unexpected($module, $pred, "kind annotation")
    ).

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

%---------------------------------------------------------------------------%
:- end_module parse_tree.prog_io_type_name.
%---------------------------------------------------------------------------%
