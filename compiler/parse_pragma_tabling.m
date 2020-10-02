%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 expandtab
%---------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: parse_pragma.m.
%
% This module parses tabling pragmas.
%
%---------------------------------------------------------------------------%

:- module parse_tree.parse_pragma_tabling.
:- interface.

:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.error_util.
:- import_module parse_tree.maybe_error.
:- import_module parse_tree.parse_types.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_data_pragma.

:- import_module list.
:- import_module term.
:- import_module varset.

%---------------------------------------------------------------------------%

    % Parse a tabling pragma.
    %
:- pred parse_tabling_pragma(module_name::in, varset::in, term::in,
    string::in, list(term)::in, prog_context::in, int::in,
    eval_method::in, maybe1(item_or_marker)::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module mdbcomp.prim_data.
:- import_module parse_tree.parse_tree_out_term.
:- import_module parse_tree.parse_util.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.prog_out.

:- import_module assoc_list.
:- import_module bool.
:- import_module cord.
:- import_module maybe.
:- import_module pair.
:- import_module require.

%---------------------------------------------------------------------------%

parse_tabling_pragma(ModuleName, VarSet, ErrorTerm, PragmaName, PragmaTerms,
        Context, SeqNum, EvalMethod0, MaybeIOM) :-
    (
        (
            PragmaTerms = [PredAndModesTerm0],
            MaybeAttrs = no
        ;
            PragmaTerms = [PredAndModesTerm0, AttrListTerm0],
            MaybeAttrs = yes(AttrListTerm0)
        ),
        ContextPieces = cord.from_list([words("In the first argument of"),
            pragma_decl(PragmaName), words("declaration:"), nl]),
        parse_arity_or_modes(ModuleName, PredAndModesTerm0, ErrorTerm,
            VarSet, ContextPieces, MaybeArityOrModes),
        (
            MaybeArityOrModes = ok1(ArityOrModes),
            ArityOrModes = pred_name_arity_mpf_mmode(PredName, Arity,
                MaybePredOrFunc, MaybeModes),
            (
                MaybeAttrs = no,
                PredNameArityMPF = pred_name_arity_mpf(PredName, Arity,
                    MaybePredOrFunc),
                TabledInfo = pragma_info_tabled(EvalMethod0, PredNameArityMPF,
                    MaybeModes, no),
                Pragma = impl_pragma_tabled(TabledInfo),
                ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
                Item = item_impl_pragma(ItemPragma),
                MaybeIOM = ok1(iom_item(Item))
            ;
                MaybeAttrs = yes(AttrsListTerm),
                AttrContextPieces = cord.from_list(
                    [words("In the second argument of"),
                    pragma_decl(PragmaName), words("declaration:"), nl]),
                parse_list_elements("tabling attributes",
                    parse_tabling_attribute(AttrContextPieces, EvalMethod0),
                    VarSet, AttrsListTerm, MaybeAttributeList),
                (
                    MaybeAttributeList = ok1(AttributeList),
                    update_tabling_attributes(AttributeList,
                        default_memo_table_attributes, Attributes,
                        [], DuplicateSpecs),
                    (
                        DuplicateSpecs = [],
                        DisableWarning =
                            Attributes ^ table_attr_backend_warning,
                        (
                            DisableWarning = table_attr_ignore_with_warning,
                            EvalMethod = EvalMethod0
                        ;
                            DisableWarning = table_attr_ignore_without_warning,
                            (
                                EvalMethod0 = eval_memo(_),
                                EvalMethod = eval_memo(
                                    table_attr_ignore_without_warning)
                            ;
                                ( EvalMethod0 = eval_loop_check
                                ; EvalMethod0 = eval_minimal(_)
                                ),
                                EvalMethod = EvalMethod0
                            ;
                                ( EvalMethod0 = eval_table_io(_, _)
                                ; EvalMethod0 = eval_normal
                                ),
                                unexpected($pred, "non-pragma eval method")
                            )
                        ),
                        PredNameArityMPF = pred_name_arity_mpf(PredName,
                            Arity, MaybePredOrFunc),
                        TabledInfo = pragma_info_tabled(EvalMethod,
                            PredNameArityMPF, MaybeModes, yes(Attributes)),
                        Pragma = impl_pragma_tabled(TabledInfo),
                        ItemPragma = item_pragma_info(Pragma, Context, SeqNum),
                        Item = item_impl_pragma(ItemPragma),
                        MaybeIOM = ok1(iom_item(Item))
                    ;
                        DuplicateSpecs = [_ | _],
                        MaybeIOM = error1(DuplicateSpecs)
                    )
                ;
                    MaybeAttributeList = error1(Specs),
                    MaybeIOM = error1(Specs)
                )
            )
        ;
            MaybeArityOrModes = error1(Specs),
            MaybeIOM = error1(Specs)
        )
    ;
        ( PragmaTerms = []
        ; PragmaTerms = [_, _, _ | _]
        ),
        Pieces = [words("Error: a"), pragma_decl(PragmaName),
            words("declaration must have one or two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(ErrorTerm), Pieces),
        MaybeIOM = error1([Spec])
    ).

%---------------------------------------------------------------------------%

:- pred parse_tabling_attribute(cord(format_component)::in, eval_method::in,
    varset::in, term::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attribute(ContextPieces, EvalMethod, VarSet, Term,
        MaybeContextAttribute) :-
    ( if
        Term = term.functor(term.atom(Functor), ArgTerms, Context),
        ( Functor = "fast_loose"
        ; Functor = "specified"
        ; Functor = "size_limit"
        ; Functor = "statistics"
        ; Functor = "allow_reset"
        ; Functor = "disable_warning_if_ignored"
        )
    then
        (
            Functor = "fast_loose",
            parse_tabling_attr_fast_loose(ContextPieces, EvalMethod,
                VarSet, Context, ArgTerms, MaybeContextAttribute)
        ;
            Functor = "specified",
            parse_tabling_attr_specified(ContextPieces, EvalMethod,
                VarSet, Context, ArgTerms, MaybeContextAttribute)
        ;
            Functor = "size_limit",
            parse_tabling_attr_size_limit(ContextPieces, EvalMethod,
                VarSet, Context, ArgTerms, MaybeContextAttribute)
        ;
            Functor = "statistics",
            parse_tabling_attr_statistics(ContextPieces, EvalMethod,
                VarSet, Context, ArgTerms, MaybeContextAttribute)
        ;
            Functor = "allow_reset",
            parse_tabling_attr_allow_reset(ContextPieces, EvalMethod,
                VarSet, Context, ArgTerms, MaybeContextAttribute)
        ;
            Functor = "disable_warning_if_ignored",
            parse_tabling_attr_backend_warning(ContextPieces, EvalMethod,
                VarSet, Context, ArgTerms, MaybeContextAttribute)
        )
    else
        TermStr = describe_error_term(VarSet, Term),
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: expected one of"),
            quote("fast_loose"), suffix(","),
            quote("specified(...)"), suffix(","),
            quote("size_limit(...)"), suffix(","),
            quote("statistics"), suffix(","),
            quote("allow_reset"), suffix(","), words("and"),
            quote("disable_warning_if_ignored"), suffix(","),
            words("got"), quote(TermStr), suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

%---------------------%

:- pred parse_tabling_attr_fast_loose(cord(format_component)::in,
    eval_method::in, varset::in, term.context::in, list(term)::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attr_fast_loose(ContextPieces, EvalMethod, _VarSet,
        Context, ArgTerms, MaybeContextAttribute) :-
    (
        ArgTerms = [],
        require_tabling_fast_loose(ContextPieces, EvalMethod, Context,
            FastLooseSpecs),
        (
            FastLooseSpecs = [],
            Attribute = attr_strictness(cts_all_fast_loose),
            MaybeContextAttribute = ok1(Context - Attribute)
        ;
            FastLooseSpecs = [_ | _],
            MaybeContextAttribute = error1(FastLooseSpecs)
        )
    ;
        ArgTerms = [_ | _],
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: fast_loose"),
            words("must have no arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

%---------------------%

:- pred parse_tabling_attr_specified(cord(format_component)::in,
    eval_method::in, varset::in, term.context::in, list(term)::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attr_specified(ContextPieces, EvalMethod, VarSet,
        Context, ArgTerms, MaybeContextAttribute) :-
    (
        (
            ArgTerms = [MethodsTerm],
            MaybeHiddenArg = ok1(table_hidden_arg_value)
        ;
            ArgTerms = [MethodsTerm, HiddenArgTerm],
            ( if
                HiddenArgTerm = term.functor(
                    term.atom("hidden_arg_value"), [], _)
            then
                MaybeHiddenArg = ok1(table_hidden_arg_value)
            else if
                HiddenArgTerm = term.functor(
                    term.atom("hidden_arg_addr"), [], _)
            then
                MaybeHiddenArg = ok1(table_hidden_arg_addr)
            else
                HiddenArgTermStr = describe_error_term(VarSet, HiddenArgTerm),
                HiddenArgPieces = cord.list(ContextPieces) ++
                    [lower_case_next_if_not_first,
                    words("In the second argument of specified:"), nl,
                    words("error: expected either"),
                    quote("hidden_arg_value"), words("or"),
                    quote("hidden_arg_addr"), suffix(","),
                    words("got"), quote(HiddenArgTermStr), suffix("."), nl],
                HiddenArgSpec = simplest_spec($pred, severity_error,
                    phase_term_to_parse_tree,
                    get_term_context(HiddenArgTerm), HiddenArgPieces),
                MaybeHiddenArg = error1([HiddenArgSpec])
            )
        ),
        MethodsContextPieces = ContextPieces ++
            cord.from_list([lower_case_next_if_not_first,
            words("In the first argument of specified:"), nl]),
        parse_list_elements("argument tabling methods",
            parse_arg_tabling_method(MethodsContextPieces),
            VarSet, MethodsTerm, MaybeMaybeArgMethods),
        require_tabling_fast_loose(ContextPieces, EvalMethod, Context,
            FastLooseSpecs),
        ( if
            MaybeMaybeArgMethods = ok1(MaybeArgMethods),
            MaybeHiddenArg = ok1(HiddenArg),
            FastLooseSpecs = []
        then
            Attribute = attr_strictness(
                cts_specified(MaybeArgMethods, HiddenArg)),
            MaybeContextAttribute = ok1(Context - Attribute)
        else
            Specs = get_any_errors1(MaybeMaybeArgMethods) ++
                get_any_errors1(MaybeHiddenArg) ++
                FastLooseSpecs,
            MaybeContextAttribute = error1(Specs)
        )
    ;
        ( ArgTerms = []
        ; ArgTerms = [_, _, _ | _]
        ),
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: specified must have one or two arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

:- pred parse_arg_tabling_method(cord(format_component)::in,
    varset::in, term::in, maybe1(maybe(arg_tabling_method))::out) is det.

parse_arg_tabling_method(ContextPieces, VarSet, Term,
        MaybeMaybeArgTablingMethod) :-
    ( if
        Term = term.functor(term.atom(Functor), [], _),
        (
            Functor = "value",
            MaybeArgTablingMethod = yes(arg_value)
        ;
            Functor = "addr",
            MaybeArgTablingMethod = yes(arg_addr)
        ;
            Functor = "promise_implied",
            MaybeArgTablingMethod = yes(arg_promise_implied)
        ;
            Functor = "output",
            MaybeArgTablingMethod = no
        )
    then
        MaybeMaybeArgTablingMethod = ok1(MaybeArgTablingMethod)
    else
        TermStr = describe_error_term(VarSet, Term),
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: expected one of"),
            quote("value"), suffix(","),
            quote("addr"), suffix(","),
            quote("promise_implied"), suffix(","), words("and"),
            quote("output"), suffix(","),
            words("got"), quote(TermStr), suffix("."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            get_term_context(Term), Pieces),
        MaybeMaybeArgTablingMethod = error1([Spec])
    ).

%---------------------%

:- pred parse_tabling_attr_size_limit(cord(format_component)::in,
    eval_method::in, varset::in, term.context::in, list(term)::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attr_size_limit(ContextPieces, EvalMethod, VarSet,
        Context, ArgTerms, MaybeContextAttribute) :-
    (
        ArgTerms = [LimitTerm],
        LimitContextPieces = ContextPieces ++ cord.from_list(
            [lower_case_next_if_not_first,
            words("In the first argument of size_limit:"), nl]),
        parse_decimal_int(LimitContextPieces, VarSet, LimitTerm, MaybeLimit),
        AllowsSizeLimit = eval_method_allows_size_limit(EvalMethod),
        (
            AllowsSizeLimit = yes,
            AllowSpecs = []
        ;
            AllowsSizeLimit = no,
            AllowPieces = cord.list(ContextPieces) ++
                [lower_case_next_if_not_first,
                words("Error: evaluation method"),
                fixed(eval_method_to_string(EvalMethod)),
                words("does not allow size limits."), nl],
            AllowSpec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, AllowPieces),
            AllowSpecs = [AllowSpec]
        ),
        ( if
            MaybeLimit = ok1(Limit),
            AllowSpecs = []
        then
            Attribute = attr_size_limit(Limit),
            MaybeContextAttribute = ok1(Context - Attribute)
        else
            Specs = get_any_errors1(MaybeLimit) ++ AllowSpecs,
            MaybeContextAttribute = error1(Specs)
        )
    ;
        ( ArgTerms = []
        ; ArgTerms = [_, _ | _]
        ),
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: size_limit must have one argument."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

%---------------------%

:- pred parse_tabling_attr_statistics(cord(format_component)::in,
    eval_method::in, varset::in, term.context::in, list(term)::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attr_statistics(ContextPieces, _EvalMethod, _VarSet,
        Context, ArgTerms, MaybeContextAttribute) :-
    (
        ArgTerms = [],
        Attribute = attr_statistics,
        MaybeContextAttribute = ok1(Context - Attribute)
    ;
        ArgTerms = [_ | _],
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: statistics must have no arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

%---------------------%

:- pred parse_tabling_attr_allow_reset(cord(format_component)::in,
    eval_method::in, varset::in, term.context::in, list(term)::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attr_allow_reset(ContextPieces, _EvalMethod, _VarSet,
        Context, ArgTerms, MaybeContextAttribute) :-
    (
        ArgTerms = [],
        Attribute = attr_allow_reset,
        MaybeContextAttribute = ok1(Context - Attribute)
    ;
        ArgTerms = [_ | _],
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: allow_reset must have no arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

%---------------------%

:- pred parse_tabling_attr_backend_warning(cord(format_component)::in,
    eval_method::in, varset::in, term.context::in, list(term)::in,
    maybe1(pair(term.context, single_tabling_attribute))::out) is det.

parse_tabling_attr_backend_warning(ContextPieces, EvalMethod, _VarSet,
        Context, ArgTerms, MaybeContextAttribute) :-
    (
        ArgTerms = [],
        AllowsDisableWarning =
            eval_method_allows_disable_warning_if_ignored(EvalMethod),
        (
            AllowsDisableWarning = yes,
            Attribute = attr_ignore_without_warning,
            MaybeContextAttribute = ok1(Context - Attribute)
        ;
            AllowsDisableWarning = no,
            Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
                words("Error: evaluation method"),
                fixed(eval_method_to_string(EvalMethod)),
                words("does not allow disable_warning_if_ignored."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            MaybeContextAttribute = error1([Spec])
        )
    ;
        ArgTerms = [_ | _],
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: allow_reset must have no arguments."), nl],
        Spec = simplest_spec($pred, severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeContextAttribute = error1([Spec])
    ).

%---------------------------------------------------------------------------%

:- pred require_tabling_fast_loose(cord(format_component)::in, eval_method::in,
    term.context::in, list(error_spec)::out) is det.

require_tabling_fast_loose(ContextPieces, EvalMethod, Context, Specs) :-
    AllowsFastLoose = eval_method_allows_fast_loose(EvalMethod),
    (
        AllowsFastLoose = yes,
        Specs = []
    ;
        AllowsFastLoose = no,
        Pieces = cord.list(ContextPieces) ++ [lower_case_next_if_not_first,
            words("Error: evaluation method"),
            fixed(eval_method_to_string(EvalMethod)),
            words("does not allow fast_loose tabling."), nl],
        Spec = simplest_spec($pred, severity_error,
            phase_term_to_parse_tree, Context, Pieces),
        Specs = [Spec]
    ).

%---------------------------------------------------------------------------%

:- func eval_method_allows_fast_loose(eval_method) = bool.

eval_method_allows_fast_loose(eval_normal) = no.
eval_method_allows_fast_loose(eval_loop_check) = yes.
eval_method_allows_fast_loose(eval_memo(_)) = yes.
eval_method_allows_fast_loose(eval_table_io(_, _)) = no.
eval_method_allows_fast_loose(eval_minimal(_)) = no.

:- func eval_method_allows_size_limit(eval_method) = bool.

eval_method_allows_size_limit(eval_normal) = no.
eval_method_allows_size_limit(eval_loop_check) = yes.
eval_method_allows_size_limit(eval_memo(_)) = yes.
eval_method_allows_size_limit(eval_table_io(_, _)) = no.
eval_method_allows_size_limit(eval_minimal(_)) = no.

:- func eval_method_allows_disable_warning_if_ignored(eval_method) = bool.

eval_method_allows_disable_warning_if_ignored(eval_normal) = no.
eval_method_allows_disable_warning_if_ignored(eval_loop_check) = no.
eval_method_allows_disable_warning_if_ignored(eval_memo(_)) = yes.
eval_method_allows_disable_warning_if_ignored(eval_table_io(_, _)) = no.
eval_method_allows_disable_warning_if_ignored(eval_minimal(_)) = no.

%---------------------------------------------------------------------------%

:- type single_tabling_attribute
    --->    attr_strictness(call_table_strictness)
    ;       attr_size_limit(int)
    ;       attr_statistics
    ;       attr_allow_reset
    ;       attr_ignore_without_warning.

:- pred update_tabling_attributes(
    assoc_list(term.context, single_tabling_attribute)::in,
    table_attributes::in, table_attributes::out,
    list(error_spec)::in, list(error_spec)::out) is det.

update_tabling_attributes([], !Attributes, !Specs).
update_tabling_attributes([Context - Attr | ContextAttrs],
        !Attributes, !Specs) :-
    (
        Attr = attr_strictness(Strictness),
        ( if !.Attributes ^ table_attr_strictness = cts_all_strict then
            !Attributes ^ table_attr_strictness := Strictness
        else
            Pieces = [words("Error: duplicate argument tabling methods"),
                words("attribute in"), pragma_decl("memo"),
                words("declaration."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            !:Specs = [Spec | !.Specs]
        )
    ;
        Attr = attr_size_limit(Limit),
        ( if !.Attributes ^ table_attr_size_limit = no then
            !Attributes ^ table_attr_size_limit := yes(Limit)
        else
            Pieces = [words("Error: duplicate size limits attribute in"),
                pragma_decl("memo"), words("declaration."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            !:Specs = [Spec | !.Specs]
        )
    ;
        Attr = attr_statistics,
        ( if
            !.Attributes ^ table_attr_statistics = table_dont_gather_statistics
        then
            !Attributes ^ table_attr_statistics := table_gather_statistics
        else
            Pieces = [words("Error: duplicate statistics attribute in"),
                pragma_decl("memo"), words("declaration."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            !:Specs = [Spec | !.Specs]
        )
    ;
        Attr = attr_allow_reset,
        ( if
            !.Attributes ^ table_attr_allow_reset = table_dont_allow_reset
        then
            !Attributes ^ table_attr_allow_reset := table_allow_reset
        else
            Pieces = [words("Error: duplicate allow_reset attribute in"),
                pragma_decl("memo"), words("declaration."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            !:Specs = [Spec | !.Specs]
        )
    ;
        Attr = attr_ignore_without_warning,
        ( if
            !.Attributes ^ table_attr_backend_warning =
                table_attr_ignore_with_warning
        then
            !Attributes ^ table_attr_backend_warning :=
                table_attr_ignore_without_warning
        else
            Pieces = [words("Error: duplicate disable_warning_if_ignored"),
                words("attribute in"),
                pragma_decl("memo"), words("declaration."), nl],
            Spec = simplest_spec($pred, severity_error,
                phase_term_to_parse_tree, Context, Pieces),
            !:Specs = [Spec | !.Specs]
        )
    ),
    update_tabling_attributes(ContextAttrs, !Attributes, !Specs).

%---------------------------------------------------------------------------%
:- end_module parse_tree.parse_pragma_tabling.
%---------------------------------------------------------------------------%
