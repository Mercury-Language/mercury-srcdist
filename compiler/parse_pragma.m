%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 expandtab
%---------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: parse_pragma.m.
% Main authors: fjh, dgj, zs.
%
% This module handles the parsing of pragma directives.
%
%---------------------------------------------------------------------------%

:- module parse_tree.parse_pragma.
:- interface.

:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.error_util.
:- import_module parse_tree.maybe_error.
:- import_module parse_tree.parse_types.
:- import_module parse_tree.prog_data.

:- import_module list.
:- import_module term.
:- import_module varset.

%---------------------------------------------------------------------------%

    % Parse the pragma declaration. What it returns is not necessarily
    % a pragma item, and it may not even be an item.
    %
:- pred parse_pragma(module_name::in, varset::in, list(term)::in,
    prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.
:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.parse_pragma_analysis.
:- import_module parse_tree.parse_pragma_foreign.
:- import_module parse_tree.parse_pragma_tabling.
:- import_module parse_tree.parse_sym_name.
:- import_module parse_tree.parse_tree_out_term.
:- import_module parse_tree.parse_type_defn.
:- import_module parse_tree.parse_type_name.
:- import_module parse_tree.parse_util.
:- import_module parse_tree.prog_data_pragma.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.prog_util.

:- import_module cord.
:- import_module int.
:- import_module maybe.
:- import_module pair.
:- import_module set.
:- import_module string.

%---------------------------------------------------------------------------%

parse_pragma(ModuleName, VarSet, PragmaTerms, Context, SeqNum, MaybeIOM) :-
    ( if
        PragmaTerms = [PragmaTerm],
        PragmaTerm = term.functor(term.atom(PragmaName), PragmaArgTerms,
            PragmaContext)
    then
        ( if
            parse_pragma_type(ModuleName, VarSet, PragmaTerm,
                PragmaName, PragmaArgTerms, PragmaContext, SeqNum,
                MaybeIOMPrime)
        then
            MaybeIOM = MaybeIOMPrime
        else
            Pieces = [words("Error:"), quote(PragmaName),
                words("is not a recognized pragma name."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            MaybeIOM = error1([Spec])
        )
    else
        Spec = report_unrecognized_pragma(Context),
        MaybeIOM = error1([Spec])
    ).

:- pred parse_pragma_type(module_name::in, varset::in, term::in,
    string::in, list(term)::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is semidet.

parse_pragma_type(ModuleName, VarSet, ErrorTerm, PragmaName, PragmaTerms,
        Context, SeqNum, MaybeIOM) :-
    require_switch_arms_det [PragmaName]
    (
        PragmaName = "source_file",
        parse_pragma_source_file(PragmaTerms, Context, MaybeIOM)
    ;
        PragmaName = "foreign_type",
        parse_pragma_foreign_type(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, ok1(canon), MaybeIOM)
    ;
        PragmaName = "foreign_decl",
        parse_pragma_foreign_decl(VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "foreign_code",
        parse_pragma_foreign_code(VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "foreign_proc",
        parse_pragma_foreign_proc(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "foreign_export_enum",
        parse_pragma_foreign_export_enum(VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "foreign_enum",
        parse_pragma_foreign_enum(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "foreign_export",
        parse_pragma_foreign_export(VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "foreign_import_module",
        parse_pragma_foreign_import_module(VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        (
            PragmaName = "external_pred",
            PorF = pf_predicate
        ;
            PragmaName = "external_func",
            PorF = pf_function
        ),
        parse_pragma_external(ModuleName, VarSet, ErrorTerm,
            PragmaName, PragmaTerms, Context, SeqNum, PorF, MaybeIOM)
    ;
        PragmaName = "obsolete",
        parse_pragma_obsolete(ModuleName, PragmaTerms, ErrorTerm, VarSet,
            Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "obsolete_proc",
        parse_pragma_obsolete_proc(ModuleName, PragmaTerms, ErrorTerm, VarSet,
            Context, SeqNum, MaybeIOM)
    ;
        (
            PragmaName = "terminates",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = decl_pragma_terminates(PredNameArity)
                )
        ;
            PragmaName = "does_not_terminate",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = decl_pragma_does_not_terminate(PredNameArity)
                )
        ;
            PragmaName = "check_termination",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = decl_pragma_check_termination(PredNameArity)
                )
        ),
        parse_name_arity_decl_pragma(ModuleName, PragmaName,
            "predicate or function", MakePragma, PragmaTerms, ErrorTerm,
            VarSet, Context, SeqNum, MaybeIOM)
    ;
        (
            PragmaName = "inline",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_inline(PredNameArity)
                )
        ;
            PragmaName = "no_inline",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_no_inline(PredNameArity)
                )
        ;
            PragmaName = "consider_used",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_consider_used(PredNameArity)
                )
        ;
            PragmaName = "no_determinism_warning",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_no_detism_warning(PredNameArity)
                )
        ;
            PragmaName = "mode_check_clauses",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_mode_check_clauses(PredNameArity)
                )
        ;
            PragmaName = "promise_pure",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_promise_pure(PredNameArity)
                )
        ;
            PragmaName = "promise_semipure",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_promise_semipure(PredNameArity)
                )
        ;
            PragmaName = "promise_equivalent_clauses",
            MakePragma =
                ( pred(Name::in, Arity::in, Pragma::out) is det :-
                    PredNameArity = pred_name_arity(Name, Arity),
                    Pragma = impl_pragma_promise_eqv_clauses(PredNameArity)
                )
        ),
        parse_name_arity_impl_pragma(ModuleName, PragmaName,
            "predicate or function", MakePragma, PragmaTerms, ErrorTerm,
            VarSet, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "require_tail_recursion",
        parse_pragma_require_tail_recursion(ModuleName, PragmaName,
            PragmaTerms, ErrorTerm, VarSet, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "oisu",
        parse_oisu_pragma(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        (
            PragmaName = "memo",
            % We don't know yet whether the pragma has a
            % disable_warning_if_ignored attribute, but if it does,
            % parse_tabling_pragma will override this placeholder argument.
            EvalMethod = eval_memo(table_attr_ignore_with_warning)
        ;
            PragmaName = "loop_check",
            EvalMethod = eval_loop_check
        ;
            PragmaName = "minimal_model",
            % We don't yet know whether we will use the stack_copy or the
            % own_stacks technique for computing minimal models. The decision
            % depends on the grade, and is made in make_hlds.m; the
            % "stack_copy" here is just a placeholder.
            EvalMethod = eval_minimal(stack_copy)
        ),
        parse_tabling_pragma(ModuleName, VarSet, ErrorTerm,
            PragmaName, PragmaTerms, Context, SeqNum, EvalMethod, MaybeIOM)
    ;
        PragmaName = "unused_args",
        parse_pragma_unused_args(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "type_spec",
        parse_pragma_type_spec(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "fact_table",
        parse_pragma_fact_table(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "termination_info",
        parse_pragma_termination_info(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "termination2_info",
        parse_pragma_termination2_info(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "structure_sharing",
        parse_pragma_structure_sharing(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "structure_reuse",
        parse_pragma_structure_reuse(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "exceptions",
        parse_pragma_exceptions(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "trailing_info",
        parse_pragma_trailing_info(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "mm_tabling_info",
        parse_pragma_mm_tabling_info(ModuleName, VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "require_feature_set",
        parse_pragma_require_feature_set(VarSet, ErrorTerm,
            PragmaTerms, Context, SeqNum, MaybeIOM)
    ;
        PragmaName = "where",
        ( if
            PragmaTerms = [BeforeWhereTerm, WhereTerm],
            BeforeWhereTerm = term.functor(term.atom("foreign_type"),
                BeforeWherePragmaTerms, BeforeWhereContext)
        then
            parse_where_unify_compare(ModuleName, VarSet, WhereTerm,
                MaybeMaybeUC),
            parse_pragma_foreign_type(ModuleName, VarSet, ErrorTerm,
                BeforeWherePragmaTerms, BeforeWhereContext, SeqNum,
                MaybeMaybeUC, MaybeIOM)
        else
            Spec = report_unrecognized_pragma(Context),
            MaybeIOM = error1([Spec])
        )
    ).

:- func report_unrecognized_pragma(prog_context) = error_spec.

report_unrecognized_pragma(Context) = Spec :-
    Pieces = [words("Error: a"), decl("pragma"), words("declaration"),
        words("should have the form"),
        quote(":- pragma pragma_name(pragma_arguments)."), nl],
    Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
        Context, Pieces).

%---------------------------------------------------------------------------%
%
% Parse the sole argument of a (decl or impl) pragma that should contain
% a symbol name / arity pair.
%

:- pred parse_name_arity_decl_pragma(module_name::in, string::in, string::in,
    pred(sym_name, int, decl_pragma)::(pred(in, in, out) is det),
    list(term)::in, term::in, varset::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is det.

parse_name_arity_decl_pragma(ModuleName, PragmaName, NameKind, MakePragma,
        PragmaTerms, ErrorTerm, VarSet, Context, SeqNum, MaybeIOM) :-
    (
        PragmaTerms = [NameAndArityTerm],
        parse_simple_name_and_arity(ModuleName, PragmaName, NameKind,
            NameAndArityTerm, NameAndArityTerm, VarSet, MaybeNameAndArity),
        (
            MaybeNameAndArity = ok2(Name, Arity),
            MakePragma(Name, Arity, Pragma),
            ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
            Item = item_decl_pragma(ItemPragma),
            MaybeIOM = ok1(iom_item(Item))
        ;
            MaybeNameAndArity = error2(Specs),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl(PragmaName),
            words("declaration must have exactly one argument."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
   ).

:- pred parse_name_arity_impl_pragma(module_name::in, string::in, string::in,
    pred(sym_name, int, impl_pragma)::(pred(in, in, out) is det),
    list(term)::in, term::in, varset::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is det.

parse_name_arity_impl_pragma(ModuleName, PragmaName, NameKind, MakePragma,
        PragmaTerms, ErrorTerm, VarSet, Context, SeqNum, MaybeIOM) :-
    (
        PragmaTerms = [NameAndArityTerm],
        parse_simple_name_and_arity(ModuleName, PragmaName, NameKind,
            NameAndArityTerm, NameAndArityTerm, VarSet, MaybeNameAndArity),
        (
            MaybeNameAndArity = ok2(Name, Arity),
            MakePragma(Name, Arity, Pragma),
            ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
            Item = item_impl_pragma(ItemPragma),
            MaybeIOM = ok1(iom_item(Item))
        ;
            MaybeNameAndArity = error2(Specs),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl(PragmaName),
            words("declaration must have exactly one argument."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
   ).

%---------------------------------------------------------------------------%

% The predicates in the rest of this module are to be clustered together
% into groups of related predicates. All groups but the last contain
% the main predicate for parsing one kind of pragma, followed by its
% dedicated helper predicates. The last group contains helper predicates
% needed for the parsing of more than one kind of pragma.

%---------------------------------------------------------------------------%
%
% Parse source_file pragmas.
%

:- pred parse_pragma_source_file(list(term)::in, prog_context::in,
    maybe1(item_or_marker)::out) is det.

parse_pragma_source_file(PragmaTerms, Context, MaybeIOM) :-
    ( if PragmaTerms = [SourceFileTerm] then
        ( if SourceFileTerm = term.functor(term.string(SourceFile), [], _) then
            Marker = iom_marker_src_file(SourceFile),
            MaybeIOM = ok1(Marker)
        else
            Pieces = [words("Error: the argument of a"),
                pragma_decl("source_file"),
                words("declaration should be a string."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            MaybeIOM = error1([Spec])
        )
    else
        Pieces = [words("Error: a"), pragma_decl("source_file"),
            words("declaration must have exactly one argument."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeIOM = error1([Spec])
    ).

%---------------------------------------------------------------------------%
%
% Parse external_pred and external_proc pragmas.
%

:- pred parse_pragma_external(module_name::in, varset::in, term::in,
    string::in, list(term)::in, prog_context::in, int::in,
    pred_or_func::in, maybe1(item_or_marker)::out) is det.

parse_pragma_external(ModuleName, VarSet, ErrorTerm, PragmaName, PragmaTerms,
        Context, SeqNum, PorF, MaybeIOM) :-
    ( if
        (
            PragmaTerms = [PredTerm],
            MaybeOptionsTerm = no
        ;
            PragmaTerms = [PredTerm, OptionsTerm],
            MaybeOptionsTerm = yes(OptionsTerm)
        )
    then
        ContextPieces1 = cord.from_list([words("first argument of"),
            pragma_decl(PragmaName), words("declaration")]),
        parse_symname_arity(VarSet, PredTerm, ContextPieces1,
            MaybeSymNameArity),
        ContextPieces2 = cord.from_list([words("second argument of"),
            pragma_decl(PragmaName), words("declaration")]),
        parse_pragma_external_options(VarSet, MaybeOptionsTerm, ContextPieces2,
            MaybeMaybeBackend),
        ( if
            MaybeSymNameArity = ok2(SymName, Arity),
            MaybeMaybeBackend = ok1(MaybeBackend)
        then
            BaseName = unqualify_name(SymName),
            FullSymName = qualified(ModuleName, BaseName),
            ( if partial_sym_name_is_part_of_full(SymName, FullSymName) then
                ExternalInfo = pragma_info_external_proc(FullSymName, Arity,
                    PorF, MaybeBackend),
                Pragma = impl_pragma_external_proc(ExternalInfo),
                PragmaInfo = item_pragma_info(Pragma, Context, SeqNum),
                Item = item_impl_pragma(PragmaInfo),
                MaybeIOM = ok1(iom_item(Item))
            else
                Pieces = [words("Error: the predicate name in the")] ++
                    cord.list(ContextPieces1) ++
                    [words("is not for the expected module, which is"),
                    qual_sym_name(ModuleName), suffix("."), nl],
                Spec = simplest_spec($pred, severity_error,
                    phase_term_to_parse_tree,
                    get_term_context(ErrorTerm), Pieces),
                MaybeIOM = error1([Spec])
            )
        else
            Specs = get_any_errors2(MaybeSymNameArity)
                ++ get_any_errors1(MaybeMaybeBackend),
            MaybeIOM = error1(Specs)
        )
    else
        Pieces = [words("Error: a"), pragma_decl(PragmaName),
            words("declaration must have one or two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
    ).

:- pred parse_symname_arity(varset::in, term::in, cord(format_component)::in,
    maybe2(sym_name, arity)::out) is det.

parse_symname_arity(VarSet, PredTerm, ContextPieces, MaybeSymNameArity) :-
    ( if PredTerm = term.functor(term.atom("/"), [NameTerm, ArityTerm], _) then
        parse_symbol_name(VarSet, NameTerm, MaybeSymName),
        ( if decimal_term_to_int(ArityTerm, ArityPrime) then
            MaybeArity = ok1(ArityPrime)
        else
            ArityPieces = [words("Error: in")] ++ cord.list(ContextPieces) ++
                [suffix(":"), words("the arity must be an integer."), nl],
            AritySpec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree,
                get_term_context(ArityTerm), ArityPieces),
            MaybeArity = error1([AritySpec])
        ),
        ( if
            MaybeSymName = ok1(SymName),
            MaybeArity = ok1(Arity)
        then
            MaybeSymNameArity = ok2(SymName, Arity)
        else
            Specs = get_any_errors1(MaybeSymName)
                ++ get_any_errors1(MaybeArity),
            MaybeSymNameArity = error2(Specs)
        )
    else
        Pieces = [words("Error:") | cord.list(ContextPieces)] ++
            [words("should be Name/Arity."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(PredTerm), Pieces),
        MaybeSymNameArity = error2([Spec])
    ).

:- pred parse_pragma_external_options(varset::in, maybe(term)::in,
    cord(format_component)::in, maybe1(maybe(backend))::out) is det.

parse_pragma_external_options(VarSet, MaybeOptionsTerm, ContextPieces,
        MaybeMaybeBackend) :-
    (
        MaybeOptionsTerm = no,
        MaybeMaybeBackend = ok1(no)
    ;
        MaybeOptionsTerm = yes(OptionsTerm),
        ( if
            OptionsTerm = term.functor(term.atom("[]"), [], _)
        then
            MaybeMaybeBackend = ok1(no)
        else if
            OptionsTerm = term.functor(term.atom("[|]"),
                [OptionsTermHead, OptionsTermTail], _),
            (
                OptionsTermHead =
                    term.functor(term.atom("low_level_backend"), [], _),
                Backend = low_level_backend
            ;
                OptionsTermHead =
                    term.functor(term.atom("high_level_backend"), [], _),
                Backend = high_level_backend
            ),
            OptionsTermTail = term.functor(term.atom("[]"), [], _)
        then
            MaybeMaybeBackend = ok1(yes(Backend))
        else
            OptionsTermStr = describe_error_term(VarSet, OptionsTerm),
            Pieces = cord.list(ContextPieces) ++
                [lower_case_next_if_not_first, words("Error:"),
                words("expected either an empty list,"),
                words("or a singleton list containing either"),
                quote("low_level_backend"), words("or"),
                quote("high_level_backend"), suffix(","),
                words("got"), words(OptionsTermStr), suffix("."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree,
                get_term_context(OptionsTerm), Pieces),
            MaybeMaybeBackend = error1([Spec])
        )
    ).

%---------------------------------------------------------------------------%
%
% Parse obsolete and obsolete_proc pragmas.
%

:- pred parse_pragma_obsolete(module_name::in, list(term)::in, term::in,
    varset::in, prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

parse_pragma_obsolete(ModuleName, PragmaTerms, ErrorTerm, VarSet,
        Context, SeqNum, MaybeIOM) :-
    (
        (
            PragmaTerms = [NameAndArityTerm],
            MaybeObsoleteInFavourOf = ok1([])
        ;
            PragmaTerms = [NameAndArityTerm, ObsoleteInFavourOfTerm],
            parse_pragma_obsolete_in_favour_of(ObsoleteInFavourOfTerm,
                VarSet, MaybeObsoleteInFavourOf)
        ),
        parse_simple_name_and_arity(ModuleName, "obsolete",
            "predicate or function", NameAndArityTerm, NameAndArityTerm,
            VarSet, MaybeNameAndArity),
        ( if
            MaybeNameAndArity = ok2(PredName, PredArity),
            MaybeObsoleteInFavourOf = ok1(ObsoleteInFavourOf)
        then
            PredNameArity = pred_name_arity(PredName, PredArity),
            ObsoletePragma =
                pragma_info_obsolete_pred(PredNameArity, ObsoleteInFavourOf),
            Pragma = decl_pragma_obsolete_pred(ObsoletePragma),
            ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
            Item = item_decl_pragma(ItemPragma),
            MaybeIOM = ok1(iom_item(Item))
        else
            Specs =
                get_any_errors2(MaybeNameAndArity) ++
                get_any_errors1(MaybeObsoleteInFavourOf),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _, _ | _]
        ),
        Pieces = [words("Error: an"), pragma_decl("obsolete"),
            words("declaration must have one or two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
   ).

:- pred parse_pragma_obsolete_proc(module_name::in, list(term)::in, term::in,
    varset::in, prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

parse_pragma_obsolete_proc(ModuleName, PragmaTerms, ErrorTerm, VarSet,
        Context, SeqNum, MaybeIOM) :-
    (
        (
            PragmaTerms = [PredAndModesTerm],
            MaybeObsoleteInFavourOf = ok1([])
        ;
            PragmaTerms = [PredAndModesTerm, ObsoleteInFavourOfTerm],
            parse_pragma_obsolete_in_favour_of(ObsoleteInFavourOfTerm,
                VarSet, MaybeObsoleteInFavourOf)
        ),
        PredAndModesContextPieces = cord.from_list(
            [words("In the first  argument of"), pragma_decl("obsolete_proc"),
            words("declaration:"), nl]),
        parse_pred_or_func_and_arg_modes(yes(ModuleName), VarSet,
            PredAndModesContextPieces, PredAndModesTerm, MaybePredAndModes),
        ( if
            MaybePredAndModes = ok3(PredName, PredOrFunc, Modes),
            MaybeObsoleteInFavourOf = ok1(ObsoleteInFavourOf)
        then
            PredNameModesPF = pred_name_modes_pf(PredName, Modes, PredOrFunc),
            ObsoletePragma =
                pragma_info_obsolete_proc(PredNameModesPF, ObsoleteInFavourOf),
            Pragma = decl_pragma_obsolete_proc(ObsoletePragma),
            ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
            Item = item_decl_pragma(ItemPragma),
            MaybeIOM = ok1(iom_item(Item))
        else
            Specs =
                get_any_errors3(MaybePredAndModes) ++
                get_any_errors1(MaybeObsoleteInFavourOf),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _, _ | _]
        ),
        Pieces = [words("Error: an"), pragma_decl("obsolete_proc"),
            words("declaration must have one or two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
   ).

:- pred parse_pragma_obsolete_in_favour_of(term::in, varset::in,
    maybe1(list(sym_name_arity))::out) is det.

parse_pragma_obsolete_in_favour_of(Term, VarSet, MaybeObsoleteInFavourOf) :-
    ( if list_term_to_term_list(Term, Terms) then
        parse_pragma_obsolete_in_favour_of_snas(1, Terms, VarSet,
            MaybeObsoleteInFavourOf)
    else
        Pieces = [words("Error: the second argument of a"),
            pragma_decl("obsolete"), words("declaration"),
            words("should be a list of the names and arities of the"),
            words("suggested replacement predicates and/or functions."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeObsoleteInFavourOf = error1([Spec])
    ).

:- pred parse_pragma_obsolete_in_favour_of_snas(int::in, list(term)::in,
    varset::in, maybe1(list(sym_name_arity))::out) is det.

parse_pragma_obsolete_in_favour_of_snas(_ArgNum, [], _VarSet, ok1([])).
parse_pragma_obsolete_in_favour_of_snas(ArgNum, [Term | Terms], VarSet,
        MaybeSNAs) :-
    ( if parse_unqualified_name_and_arity(Term, SymName, Arity) then
        MaybeHeadSNA = ok1(sym_name_arity(SymName, Arity))
    else
        Pieces = [words("In the"), nth_fixed(ArgNum),
            words("element in the second argument of"),
            pragma_decl("obsolete"), words("declaration:"), nl,
            words("error: expected a name/arity pair, got"),
            quote(describe_error_term(VarSet, Term)), suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeHeadSNA = error1([Spec])
    ),
    parse_pragma_obsolete_in_favour_of_snas(ArgNum + 1, Terms, VarSet,
        MaybeTailSNAs),
    ( if
        MaybeHeadSNA = ok1(HeadSNA),
        MaybeTailSNAs = ok1(TailSNAs)
    then
        MaybeSNAs = ok1([HeadSNA | TailSNAs])
    else
        Specs =
            get_any_errors1(MaybeHeadSNA) ++
            get_any_errors1(MaybeTailSNAs),
        MaybeSNAs = error1(Specs)
    ).

%---------------------------------------------------------------------------%
%
% Parse require_tail_recursion pragmas.
%

:- pred parse_pragma_require_tail_recursion(module_name::in, string::in,
    list(term)::in, term::in, varset::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is det.

parse_pragma_require_tail_recursion(ModuleName, PragmaName, PragmaTerms,
        _ErrorTerm, VarSet, Context, SeqNum, MaybeIOM) :-
    (
        (
            PragmaTerms = [PredAndModesTerm],
            MaybeOptionsTerm = no
        ;
            PragmaTerms = [PredAndModesTerm, OptionsTermPrime],
            MaybeOptionsTerm = yes(OptionsTermPrime)
        ),
        % Parse the procedure name.
        ContextPieces = cord.from_list([words("In the first argument of"),
            pragma_decl(PragmaName), words("declaration:"), nl]),
        parse_arity_or_modes(ModuleName, PredAndModesTerm,
            PredAndModesTerm, VarSet, ContextPieces, MaybeProc),
        % Parse the options.
        (
            MaybeOptionsTerm = yes(OptionsTerm),
            ( if list_term_to_term_list(OptionsTerm, OptionsTerms) then
                parse_pragma_require_tail_recursion_options(OptionsTerms,
                    have_not_seen_none, no, no, [], Context, MaybeOptions)
            else
                OptionsContext = get_term_context(OptionsTerm),
                OptionsTermStr = describe_error_term(VarSet, OptionsTerm),
                Pieces = [words("In the second argument of"),
                    pragma_decl("require_tail_recursion"),
                    words("declaration:"), nl,
                    words("error: expected attribute list, got"),
                    quote(OptionsTermStr), suffix("."), nl],
                Spec = simplest_spec($pred, severity_error,
                    phase_term_to_parse_tree, OptionsContext, Pieces),
                MaybeOptions = error1([Spec])
            )
        ;
            MaybeOptionsTerm = no,
            MaybeOptions = ok1(enable_tailrec_warnings(we_warning,
                both_self_and_mutual_recursion_must_be_tail, Context))
        ),
        ( if
            MaybeProc = ok1(Proc),
            MaybeOptions = ok1(Options)
        then
            PragmaType = impl_pragma_require_tail_rec(
                pragma_info_require_tail_rec(Proc, Options)),
            PragmaInfo = item_pragma_info(PragmaType, Context, SeqNum),
            MaybeIOM = ok1(iom_item(item_impl_pragma(PragmaInfo)))
        else
            Specs = get_any_errors1(MaybeProc) ++
                get_any_errors1(MaybeOptions),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl(PragmaName),
            words("declaration must have one or two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeIOM = error1([Spec])
    ).

:- type seen_none
    --->    seen_none
    ;       have_not_seen_none.

:- pred parse_pragma_require_tail_recursion_options(list(term)::in,
    seen_none::in, maybe(warning_or_error)::in,
    maybe(require_tail_recursion_type)::in, list(error_spec)::in,
    prog_context::in, maybe1(require_tail_recursion)::out) is det.

parse_pragma_require_tail_recursion_options([], SeenNone, MaybeWarnOrError,
        MaybeType, !.Specs, Context, MaybeRTR) :-
    (
        SeenNone = seen_none,
        % Check for conflicts with "none" option.
        (
            MaybeWarnOrError = yes(WarnOrError0),
            warning_or_error_string(WarnOrError0, WarnOrErrorString),
            SpecA = conflicting_attributes_error("none", WarnOrErrorString,
                Context),
            !:Specs = [SpecA | !.Specs]
        ;
            MaybeWarnOrError = no
        ),
        (
            MaybeType = yes(Type0),
            require_tailrec_type_string(Type0, TypeString),
            SpecB = conflicting_attributes_error("none", TypeString,
                Context),
            !:Specs = [SpecB | !.Specs]
        ;
            MaybeType = no
        )
    ;
        SeenNone = have_not_seen_none
    ),
    (
        !.Specs = [_ | _],
        MaybeRTR = error1(!.Specs)
    ;
        !.Specs = [],
        (
            SeenNone = seen_none,
            MaybeRTR = ok1(suppress_tailrec_warnings(Context))
        ;
            SeenNone = have_not_seen_none,
            % If these values were not set then use the defaults.
            (
                MaybeWarnOrError = yes(WarnOrError)
            ;
                MaybeWarnOrError = no,
                WarnOrError = we_warning
            ),
            (
                MaybeType = yes(Type)
            ;
                MaybeType = no,
                Type = both_self_and_mutual_recursion_must_be_tail
            ),
            RTR = enable_tailrec_warnings(WarnOrError, Type, Context),
            MaybeRTR = ok1(RTR)
        )
    ).
parse_pragma_require_tail_recursion_options([Term | Terms], SeenNone0,
        MaybeWarnOrError0, MaybeType0, !.Specs, PragmaContext, MaybeRTR) :-
    (
        Term = functor(Functor, _Args, Context),
        ( if
            Functor = atom(Name),
            warning_or_error_string(WarnOrError, Name)
        then
            (
                MaybeWarnOrError0 = no,
                MaybeWarnOrError = yes(WarnOrError)
            ;
                MaybeWarnOrError0 = yes(WarnOrErrorFirst),
                warning_or_error_string(WarnOrErrorFirst,
                    WarnOrErrorFirstString),
                Spec = conflicting_attributes_error(Name,
                    WarnOrErrorFirstString, Context),
                MaybeWarnOrError = MaybeWarnOrError0,
                !:Specs = [Spec | !.Specs]
            ),
            MaybeType = MaybeType0,
            SeenNone = SeenNone0
        else if
            Functor = atom(Name),
            require_tailrec_type_string(Type, Name)
        then
            (
                MaybeType0 = no,
                MaybeType = yes(Type)
            ;
                MaybeType0 = yes(TypeFirst),
                require_tailrec_type_string(TypeFirst, TypeFirstString),
                Spec = conflicting_attributes_error(Name,
                    TypeFirstString, Context),
                MaybeType = MaybeType0,
                !:Specs = [Spec | !.Specs]
            ),
            MaybeWarnOrError = MaybeWarnOrError0,
            SeenNone = SeenNone0
        else if
            Functor = atom("none")
        then
            SeenNone = seen_none,
            MaybeWarnOrError = MaybeWarnOrError0,
            MaybeType = MaybeType0
        else
            Spec = pragma_require_tailrec_unknown_term_error(Term, Context),
            !:Specs = [Spec | !.Specs],
            SeenNone = SeenNone0,
            MaybeType = MaybeType0,
            MaybeWarnOrError = MaybeWarnOrError0
        )
    ;
        Term = variable(_, Context),
        Spec = pragma_require_tailrec_unknown_term_error(Term, Context),
        !:Specs = [Spec | !.Specs],
        SeenNone = SeenNone0,
        MaybeType = MaybeType0,
        MaybeWarnOrError = MaybeWarnOrError0
    ),
    parse_pragma_require_tail_recursion_options(Terms, SeenNone,
        MaybeWarnOrError, MaybeType, !.Specs, PragmaContext, MaybeRTR).

:- func conflicting_attributes_error(string, string, prog_context) =
    error_spec.

conflicting_attributes_error(ThisName, EarlierName, Context) = Spec :-
    Pieces = [words("Error: conflicting "),
        pragma_decl("require_tail_recursion"), words("attributes: "),
        quote(ThisName), words("conflicts with earlier attribute"),
        quote(EarlierName), suffix("."), nl],
    Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
        Context, Pieces).

:- func pragma_require_tailrec_unknown_term_error(term, prog_context) =
    error_spec.

pragma_require_tailrec_unknown_term_error(Term, Context) = Spec :-
    varset.init(VarSet),
    Pieces = [words("Error: unrecognised "),
        pragma_decl("require_tail_recursion"), words("attribute: "),
        quote(describe_error_term(VarSet, Term)), suffix("."), nl],
    Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
        Context, Pieces).

%---------------------------------------------------------------------------%
%
% Parse oisu (order-independent state update) pragmas.
%

:- pred parse_oisu_pragma(module_name::in, varset::in, term::in,
    list(term)::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is det.

parse_oisu_pragma(ModuleName, VarSet, ErrorTerm, PragmaTerms, Context, SeqNum,
        MaybeIOM) :-
    (
        PragmaTerms = [TypeCtorTerm, CreatorsTerm, MutatorsTerm | OtherTerms],
        (
            OtherTerms = [],
            MaybeDestructorsTerm = no
        ;
            OtherTerms = [DestructorsTerm],
            MaybeDestructorsTerm = yes(DestructorsTerm)
        ),
        ( if
            parse_implicitly_qualified_name_and_arity(ModuleName, TypeCtorTerm,
                Name, Arity)
        then
            MaybeTypeCtor = ok1(type_ctor(Name, Arity))
        else
            TypeCtorTermStr = describe_error_term(VarSet, TypeCtorTerm),
            Pieces = [words("In the first argument of"),
                pragma_decl("oisu"), words("declaration:"), nl,
                words("error: expected predicate name/arity, got"),
                quote(TypeCtorTermStr), suffix("."), nl],
            TypeCtorSpec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, get_term_context(ErrorTerm), Pieces),
            MaybeTypeCtor = error1([TypeCtorSpec])
        ),
        parse_oisu_preds_term(ModuleName, VarSet, "second", "creators",
            CreatorsTerm, MaybeCreatorsNamesArities),
        parse_oisu_preds_term(ModuleName, VarSet, "third", "mutators",
            MutatorsTerm, MaybeMutatorsNamesArities),
        (
            MaybeDestructorsTerm = yes(DestructorsTerm2),
            parse_oisu_preds_term(ModuleName, VarSet, "fourth", "destructors",
                DestructorsTerm2, MaybeDestructorsNamesArities)
        ;
            MaybeDestructorsTerm = no,
            MaybeDestructorsNamesArities = ok1([])
        ),
        ( if
            MaybeTypeCtor = ok1(TypeCtor),
            MaybeCreatorsNamesArities = ok1(CreatorsNamesArities),
            MaybeMutatorsNamesArities = ok1(MutatorsNamesArities),
            MaybeDestructorsNamesArities = ok1(DestructorsNamesArities)
        then
            OISUInfo = pragma_info_oisu(TypeCtor, CreatorsNamesArities,
                MutatorsNamesArities, DestructorsNamesArities),
            Pragma = decl_pragma_oisu(OISUInfo),
            ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
            Item = item_decl_pragma(ItemPragma),
            MaybeIOM = ok1(iom_item(Item))
        else
            Specs = get_any_errors1(MaybeTypeCtor) ++
                get_any_errors1(MaybeCreatorsNamesArities) ++
                get_any_errors1(MaybeMutatorsNamesArities) ++
                get_any_errors1(MaybeDestructorsNamesArities),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_]
        ; PragmaTerms = [_, _]
        ; PragmaTerms = [_, _, _, _, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl("oisu"),
            words("declaration must have three or four arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
   ).

:- pred parse_oisu_preds_term(module_name::in, varset::in, string::in,
    string::in, term::in, maybe1(list(pred_name_arity))::out) is det.

parse_oisu_preds_term(ModuleName, VarSet, ArgNum, ExpectedFunctor, Term,
        MaybeNamesArities) :-
    ( if
        Term = term.functor(term.atom(Functor), Args, _),
        Functor = ExpectedFunctor,
        Args = [Arg]
    then
        parse_name_and_arity_list(ModuleName, VarSet, ExpectedFunctor,
            Arg, MaybeNamesArities)
    else
        Pieces = [words("Error:"), words(ArgNum), words("argument of"),
            pragma_decl("oisu"), words("declaration"),
            words("should have the form"),
            quote(ExpectedFunctor ++ "([pred1/arity1, ..., predn/arityn])"),
            suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeNamesArities = error1([Spec])
    ).

:- pred parse_name_and_arity_list(module_name::in, varset::in, string::in,
    term::in, maybe1(list(pred_name_arity))::out) is det.

parse_name_and_arity_list(ModuleName, VarSet, Wrapper, Term,
        MaybeNamesArities) :-
    (
        Term = term.functor(Functor, Args, _),
        ( if
            Functor = term.atom("[]"),
            Args = []
        then
            MaybeNamesArities = ok1([])
        else if
            Functor = term.atom("[|]"),
            Args = [Arg1, Arg2]
        then
            ( if
                parse_implicitly_qualified_name_and_arity(ModuleName,
                    Arg1, Arg1Name, Arg1Arity)
            then
                MaybeHeadNameArity = ok1(pred_name_arity(Arg1Name, Arg1Arity))
            else
                Arg1Str = describe_error_term(VarSet, Arg1),
                Pieces = [words("Error: expected predname/arity,"),
                    words("got"), quote(Arg1Str), suffix("."), nl],
                Spec = simplest_spec($pred, severity_error,
                    phase_term_to_parse_tree, get_term_context(Arg1), Pieces),
                MaybeHeadNameArity = error1([Spec])
            ),
            parse_name_and_arity_list(ModuleName, VarSet, Wrapper, Arg2,
                MaybeTailNamesArities),
            ( if
                MaybeHeadNameArity = ok1(HeadNameArity),
                MaybeTailNamesArities = ok1(TailNamesArities)
            then
                MaybeNamesArities = ok1([HeadNameArity | TailNamesArities])
            else
                HeadSpecs = get_any_errors1(MaybeHeadNameArity),
                TailSpecs = get_any_errors1(MaybeTailNamesArities),
                MaybeNamesArities = error1(HeadSpecs ++ TailSpecs)
            )
        else
            TermStr = describe_error_term(VarSet, Term),
            Pieces = [words("Error: expected a list as the argument of"),
                words(Wrapper), suffix(","),
                words("got"), quote(TermStr), suffix("."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, get_term_context(Term), Pieces),
            MaybeNamesArities = error1([Spec])
        )
    ;
        Term = term.variable(_, _),
        TermStr = describe_error_term(VarSet, Term),
        Pieces = [words("Error: expected a list as the argument of"),
            words(Wrapper), suffix(","),
            words("got"), quote(TermStr), suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeNamesArities = error1([Spec])
    ).

%---------------------------------------------------------------------------%
%
% Parse type_spec pragmas.
%

:- pred parse_pragma_type_spec(module_name::in, varset::in, term::in,
    list(term)::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is det.

parse_pragma_type_spec(ModuleName, VarSet, ErrorTerm, PragmaTerms,
        Context, SeqNum, MaybeIOM) :-
    ( if
        (
            PragmaTerms = [PredAndModesTerm, TypeSubnTerm],
            MaybeName = no
        ;
            PragmaTerms = [PredAndModesTerm, TypeSubnTerm, SpecNameTerm],

            % This form of the pragma should not appear in source files.
            SpecNameTerm = term.functor(_, _, SpecContext),
            term.context_file(SpecContext, FileName),
            not string.remove_suffix(FileName, ".m", _),

            try_parse_implicitly_qualified_sym_name_and_no_args(ModuleName,
                SpecNameTerm, SpecName),
            MaybeName = yes(SpecName)
        )
    then
        ArityOrModesContextPieces = cord.from_list(
            [words("In the first argument"), pragma_decl("type_spec"),
            words("declaration:"), nl]),
        parse_arity_or_modes(ModuleName, PredAndModesTerm, ErrorTerm,
            VarSet, ArityOrModesContextPieces, MaybeArityOrModes),
        (
            MaybeArityOrModes = ok1(ArityOrModes),
            ArityOrModes = pred_name_arity_mpf_mmode(PredName, Arity,
                MaybePredOrFunc, MaybeModes),
            conjunction_to_list(TypeSubnTerm, TypeSubnTerms),

            % The varset is actually a tvarset.
            varset.coerce(VarSet, TVarSet),
            ( if
                list.map(parse_type_spec_pair, TypeSubnTerms, TypeSubns)
            then
                (
                    MaybeName = yes(SpecializedName0),
                    SpecializedName = SpecializedName0
                ;
                    MaybeName = no,
                    UnqualName = unqualify_name(PredName),
                    make_pred_name(ModuleName, "TypeSpecOf", MaybePredOrFunc,
                        UnqualName, newpred_type_subst(TVarSet, TypeSubns),
                        SpecializedName)
                ),
                TypeSpecInfo = pragma_info_type_spec(PredName, SpecializedName,
                    Arity, MaybePredOrFunc, MaybeModes, TypeSubns, TVarSet,
                    set.init),
                Pragma = decl_pragma_type_spec(TypeSpecInfo),
                ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
                Item = item_decl_pragma(ItemPragma),
                MaybeIOM = ok1(iom_item(Item))
            else
                TypeSubnTermStr = describe_error_term(VarSet, TypeSubnTerm),
                Pieces = [words("In the second argument of"),
                    pragma_decl("type_spec"), words("declaration:"), nl,
                    words("error: expected a type substitution, got"),
                    quote(TypeSubnTermStr), suffix("."), nl],
                Spec = simplest_spec($pred, severity_error,
                    phase_term_to_parse_tree,
                    get_term_context(TypeSubnTerm), Pieces),
                MaybeIOM = error1([Spec])
            )
        ;
            MaybeArityOrModes = error1(Specs),
            MaybeIOM = error1(Specs)
        )
    else
        Pieces = [words("Error: a"), pragma_decl("type_spec"),
            words("declaration must have two or three arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
    ).

:- pred parse_type_spec_pair(term::in, pair(tvar, mer_type)::out) is semidet.

parse_type_spec_pair(Term, TypeSpec) :-
    Term = term.functor(term.atom("="), [TypeVarTerm, SpecTypeTerm0], _),
    TypeVarTerm = term.variable(TypeVar0, _),
    term.coerce_var(TypeVar0, TypeVar),
    % XXX We should call parse_type instead.
    maybe_parse_type(no_allow_ho_inst_info(wnhii_pragma_type_spec),
        SpecTypeTerm0, SpecType),
    TypeSpec = TypeVar - SpecType.

%---------------------------------------------------------------------------%
%
% Parse fact_table pragmas.
%

:- pred parse_pragma_fact_table(module_name::in, varset::in, term::in,
    list(term)::in, prog_context::in, int::in,
    maybe1(item_or_marker)::out) is det.

parse_pragma_fact_table(ModuleName, VarSet, ErrorTerm, PragmaTerms,
        Context, SeqNum, MaybeIOM) :-
    (
        PragmaTerms = [PredAndArityTerm, FileNameTerm],
        parse_pred_name_and_arity(ModuleName, "fact_table",
            PredAndArityTerm, ErrorTerm, VarSet, MaybeNameAndArity),
        (
            MaybeNameAndArity = ok2(PredName, Arity),
            ( if FileNameTerm = term.functor(term.string(FileName), [], _) then
                PredNameArity = pred_name_arity(PredName, Arity),
                FactTableInfo = pragma_info_fact_table(PredNameArity,
                    FileName),
                Pragma = impl_pragma_fact_table(FactTableInfo),
                ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
                Item = item_impl_pragma(ItemPragma),
                MaybeIOM = ok1(iom_item(Item))
            else
                FileNameTermStr = describe_error_term(VarSet, FileNameTerm),
                Pieces = [words("In the second argument of"),
                    pragma_decl("fact_table"), words("declaration:"), nl,
                    words("error: expected a string specifying a filename,"),
                    words("got"), quote(FileNameTermStr), suffix("."), nl],
                Spec = simplest_spec($pred, severity_error,
                    phase_term_to_parse_tree,
                    get_term_context(FileNameTerm), Pieces),
                MaybeIOM = error1([Spec])
            )
        ;
            MaybeNameAndArity = error2(Specs),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_]
        ; PragmaTerms = [_, _, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl("fact_table"),
            words("declaration must have two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
    ).

:- pred parse_pred_name_and_arity(module_name::in, string::in, term::in,
    term::in, varset::in, maybe2(sym_name, arity)::out) is det.

parse_pred_name_and_arity(ModuleName, PragmaName, NameAndArityTerm, ErrorTerm,
        VarSet, MaybeNameAndArity) :-
    parse_simple_name_and_arity(ModuleName, PragmaName,
        "predicate or function", NameAndArityTerm, ErrorTerm, VarSet,
        MaybeNameAndArity).

%---------------------------------------------------------------------------%
%
% Parse require_feature_set pragmas.
%

:- pred parse_pragma_require_feature_set(varset::in, term::in, list(term)::in,
    prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

parse_pragma_require_feature_set(VarSet, ErrorTerm, PragmaTerms,
        Context, SeqNum, MaybeIOM) :-
    (
        PragmaTerms = [FeatureListTerm],
        parse_list_elements("a list of features", parse_required_feature,
            VarSet, FeatureListTerm, MaybeFeatureList),
        (
            MaybeFeatureList = ok1(FeatureList),
            ConflictingFeatures = [
                conflict(reqf_single_prec_float, reqf_double_prec_float,
                    "floats cannot be both single- and double-precision"),
                conflict(reqf_parallel_conj, reqf_trailing,
                    "trailing works only with sequential conjunctions")
            ],
            FeatureListContext = get_term_context(FeatureListTerm),
            report_any_conflicts(FeatureListContext,
                "conflicting features in feature set",
                ConflictingFeatures, FeatureList, ConflictSpecs),
            (
                ConflictSpecs = [_ | _],
                MaybeIOM = error1(ConflictSpecs)
            ;
                ConflictSpecs = [],
                (
                    FeatureList = [],
                    MaybeIOM = ok1(iom_handled([]))
                ;
                    FeatureList = [_ | _],
                    FeatureSet = set.list_to_set(FeatureList),
                    RFSInfo = pragma_info_require_feature_set(FeatureSet),
                    Pragma = impl_pragma_require_feature_set(RFSInfo),
                    ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
                    Item = item_impl_pragma(ItemPragma),
                    MaybeIOM = ok1(iom_item(Item))
                )
            )
        ;
            MaybeFeatureList = error1(Specs),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl("require_feature_set"),
            words("declaration must have exactly one argument."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
    ).

:- pred parse_required_feature(varset::in, term::in,
    maybe1(required_feature)::out) is det.

parse_required_feature(VarSet, Term, MaybeReqFeature) :-
    ( if
        Term = term.functor(term.atom(Functor), [], _),
        string_to_required_feature(Functor, ReqFeature)
    then
        MaybeReqFeature = ok1(ReqFeature)
    else
        TermStr = describe_error_term(VarSet, Term),
        Pieces = [words("Error: expected the name of a required feature,"),
            words("which must be one of"),
            quote("concurrency"), suffix(","),
            quote("single_prec_float"), suffix(","),
            quote("double_prec_float"), suffix(","),
            quote("memo"), suffix(","),
            quote("parallel_conj"), suffix(","),
            quote("trailing"), suffix(","),
            quote("strict_sequential"), suffix(","), words("and"),
            quote("conservative_gc"), suffix(","),
            words("got"), quote(TermStr), suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeReqFeature = error1([Spec])
    ).

:- pred string_to_required_feature(string::in, required_feature::out)
    is semidet.

string_to_required_feature("concurrency",       reqf_concurrency).
string_to_required_feature("single_prec_float", reqf_single_prec_float).
string_to_required_feature("double_prec_float", reqf_double_prec_float).
string_to_required_feature("memo",              reqf_memo).
string_to_required_feature("parallel_conj",     reqf_parallel_conj).
string_to_required_feature("trailing",          reqf_trailing).
string_to_required_feature("strict_sequential", reqf_strict_sequential).
string_to_required_feature("conservative_gc",   reqf_conservative_gc).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%
%
% Helper predicates used for parsing more than one kind of pragma.
%

:- pred parse_simple_name_and_arity(module_name::in, string::in, string::in,
    term::in, term::in, varset::in, maybe2(sym_name, arity)::out) is det.

parse_simple_name_and_arity(ModuleName, PragmaName, NameKind,
        NameAndArityTerm, ErrorTerm, VarSet, MaybeNameAndArity) :-
    ( if
        parse_implicitly_qualified_name_and_arity(ModuleName,
            NameAndArityTerm, Name, Arity)
    then
        MaybeNameAndArity = ok2(Name, Arity)
    else
        NameAndArityTermStr = describe_error_term(VarSet, NameAndArityTerm),
        Pieces = [words("Error: expected"), words(NameKind),
            words("name/arity for"), pragma_decl(PragmaName),
            words("declaration, got"), quote(NameAndArityTermStr),
            suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeNameAndArity = error2([Spec])
    ).

%---------------------------------------------------------------------------%
:- end_module parse_tree.parse_pragma.
%---------------------------------------------------------------------------%
