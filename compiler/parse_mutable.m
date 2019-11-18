%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2008, 2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: parse_mutable.m.
%
% This module defines predicates for parsing the parts of Mercury programs
% relating to initialise, finalise and mutable declarations.

:- module parse_tree.parse_mutable.

:- interface.

:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.maybe_error.
:- import_module parse_tree.parse_types.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_item.

:- import_module list.
:- import_module term.
:- import_module varset.

:- pred parse_initialise_item(module_name::in, varset::in, list(term)::in,
    prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

:- pred parse_finalise_item(module_name::in, varset::in, list(term)::in,
    prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

:- pred parse_mutable_item(module_name::in, varset::in, list(term)::in,
    prog_context::in, int::in, maybe1(item_or_marker)::out) is det.

:- type mutable_locn
    --->    mutable_locn_item
            % The mutable is an item of its own.
    ;       mutable_locn_in_solver_type.
            % The mutable is part of an item that defines a solver type.

:- pred parse_mutable_decl_info(module_name::in, varset::in, list(term)::in,
    prog_context::in, int::in, mutable_locn::in,
    maybe1(item_mutable_info)::out) is det.

%-----------------------------------------------------------------------------e

:- implementation.

:- import_module parse_tree.error_util.
:- import_module parse_tree.parse_inst_mode_name.
:- import_module parse_tree.parse_pragma.
:- import_module parse_tree.parse_sym_name.
:- import_module parse_tree.parse_tree_out_term.
:- import_module parse_tree.parse_type_name.
:- import_module parse_tree.parse_util.

:- import_module cord.
:- import_module maybe.
:- import_module pair.
:- import_module string.

%-----------------------------------------------------------------------------e

parse_initialise_item(_ModuleName, VarSet, ArgTerms, Context, SeqNum,
        MaybeIOM) :-
    ( if ArgTerms = [Term] then
        parse_symbol_name_specifier(VarSet, Term, MaybeSymNameSpecifier),
        (
            MaybeSymNameSpecifier = error1(Specs),
            MaybeIOM = error1(Specs)
        ;
            MaybeSymNameSpecifier = ok1(SymNameSpecifier),
            (
                SymNameSpecifier = sym_name_specifier_name(_),
                TermStr = describe_error_term(VarSet, Term),
                Pieces = [words("Error: the predicate specification in an"),
                    decl("initialise"), words("declaration"),
                    words("must specify the predicate's arity;"),
                    quote(TermStr), words("doesn't."), nl],
                Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
                    get_term_context(Term), Pieces),
                MaybeIOM = error1([Spec])
            ;
                SymNameSpecifier =
                    sym_name_specifier_name_arity(SymName, Arity),
                ( if ( Arity = 0 ; Arity = 2 ) then
                    ItemInitialise = item_initialise_info(SymName, Arity,
                        item_origin_user, Context, SeqNum),
                    Item = item_initialise(ItemInitialise),
                    MaybeIOM = ok1(iom_item(Item))
                else
                    TermStr = describe_error_term(VarSet, Term),
                    Pieces = [words("Error:"), decl("initialise"),
                        words("declaration specifies a predicate,"),
                        quote(TermStr), suffix(","), words("whose arity"),
                        words("is not zero or two."), nl],
                    Spec = simplest_spec(severity_error,
                        phase_term_to_parse_tree, get_term_context(Term),
                        Pieces),
                    MaybeIOM = error1([Spec])
                )
            )
        )
    else
        Pieces = [words("Error: an"), decl("initialise"), words("declaration"),
            words("should have the form"),
            quote(":- initialise pred_name/pred_arity."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeIOM = error1([Spec])
    ).

%---------------------------------------------------------------------------%

parse_finalise_item(_ModuleName, VarSet, ArgTerms, Context, SeqNum,
        MaybeIOM) :-
    ( if ArgTerms = [Term] then
        parse_symbol_name_specifier(VarSet, Term, MaybeSymNameSpecifier),
        (
            MaybeSymNameSpecifier = error1(Specs),
            MaybeIOM = error1(Specs)
        ;
            MaybeSymNameSpecifier = ok1(SymNameSpecifier),
            (
                SymNameSpecifier = sym_name_specifier_name(_),
                TermStr = describe_error_term(VarSet, Term),
                Pieces = [words("Error:"), decl("finalise"),
                    words("declaration"), words("requires arity, found"),
                    fixed(TermStr), suffix("."), nl],
                Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
                    get_term_context(Term), Pieces),
                MaybeIOM = error1([Spec])
            ;
                SymNameSpecifier =
                    sym_name_specifier_name_arity(SymName, Arity),
                ( if ( Arity = 0 ; Arity = 2 ) then
                    ItemFinalise = item_finalise_info(SymName, Arity,
                        item_origin_user, Context, SeqNum),
                    Item = item_finalise(ItemFinalise),
                    MaybeIOM = ok1(iom_item(Item))
                else
                    TermStr = describe_error_term(VarSet, Term),
                    Pieces = [words("Error:"), decl("finalise"),
                        words("declaration specifies a predicate"),
                        words("whose arity is not zero or two:"),
                        words(TermStr), suffix("."), nl],
                    Spec = simplest_spec(severity_error,
                        phase_term_to_parse_tree, get_term_context(Term),
                        Pieces),
                    MaybeIOM = error1([Spec])
                )
            )
        )
    else
        Pieces = [words("Error: a"), decl("finalise"), words("declaration"),
            words("should have the form"),
            quote(":- finalise pred_name/pred_arity."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeIOM = error1([Spec])
    ).

%---------------------------------------------------------------------------%

parse_mutable_item(ModuleName, VarSet, ArgTerms, Context, SeqNum, MaybeIOM) :-
    parse_mutable_decl_info(ModuleName, VarSet, ArgTerms, Context, SeqNum,
        mutable_locn_item, MaybeItemMutableInfo),
    (
        MaybeItemMutableInfo = ok1(ItemMutableInfo),
        MaybeIOM = ok1(iom_item(item_mutable(ItemMutableInfo)))
    ;
        MaybeItemMutableInfo = error1(Specs),
        MaybeIOM = error1(Specs)
    ).

%---------------------------------------------------------------------------%

parse_mutable_decl_info(_ModuleName, VarSet, ArgTerms, Context, SeqNum,
        MutableLocn, MaybeItemMutableInfo) :-
    ( if
        ArgTerms = [NameTerm, TypeTerm, ValueTerm, InstTerm | OptMutAttrsTerm],
        % The list of attributes is optional.
        (
            OptMutAttrsTerm = [],
            MaybeAttrsTerm = no
        ;
            OptMutAttrsTerm = [MutAttrsTerm0],
            MaybeAttrsTerm = yes(MutAttrsTerm0)
        )
    then
        parse_mutable_name(NameTerm, MaybeName),
        parse_mutable_type(VarSet, TypeTerm, MaybeType),
        term.coerce(ValueTerm, Value),
        varset.coerce(VarSet, ProgVarSet),
        parse_mutable_inst(VarSet, InstTerm, MaybeInst),

        (
            MaybeAttrsTerm = no,
            MaybeMutAttrs = ok1(default_mutable_attributes)
        ;
            MaybeAttrsTerm = yes(MutAttrsTerm),
            parse_mutable_attrs(VarSet, MutAttrsTerm, MaybeMutAttrs)
        ),
        ( if
            MaybeName = ok1(Name),
            MaybeType = ok1(Type),
            MaybeInst = ok1(Inst),
            MaybeMutAttrs = ok1(MutAttrs)
        then
            % We *must* attach the varset to the mutable item because if the
            % initial value is non-ground, then the initial value will be a
            % variable and the mutable initialisation predicate will contain
            % references to it. Ignoring the varset may lead to later compiler
            % passes attempting to reuse this variable when fresh variables are
            % allocated.
            ItemMutableInfo = item_mutable_info(Name, Type, Type, Inst, Inst,
                Value, ProgVarSet, MutAttrs, Context, SeqNum),
            MaybeItemMutableInfo = ok1(ItemMutableInfo)
        else
            Specs = get_any_errors1(MaybeName) ++ get_any_errors1(MaybeType) ++
                get_any_errors1(MaybeInst) ++ get_any_errors1(MaybeMutAttrs),
            MaybeItemMutableInfo = error1(Specs)
        )
    else
        Form1 = "mutable(name, type, init_value, inst)",
        Form2 = "mutable(name, type, init_value, inst, [attr1, ...])",
        (
            MutableLocn = mutable_locn_item,
            WhatPieces = [words("a"), decl("mutable"), words("declaration")],
            Prefix = ":- ",
            Suffix1 = "."
        ;
            MutableLocn = mutable_locn_in_solver_type,
            WhatPieces = [words("a"), decl("mutable"),
                words("representing part of the constraint store")],
            Prefix = "",
            Suffix1 = ""
        ),
        Pieces = [words("Error:") | WhatPieces] ++
            [words("should have the form"), quote(Prefix ++ Form1 ++ Suffix1),
            words("or the form"), quote(Prefix ++ Form2 ++ "."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            Context, Pieces),
        MaybeItemMutableInfo = error1([Spec])
    ).

:- pred parse_mutable_name(term::in, maybe1(string)::out) is det.

parse_mutable_name(NameTerm, MaybeName) :-
    ( if NameTerm = term.functor(atom(Name), [], _) then
        MaybeName = ok1(Name)
    else
        Pieces = [words("Error: invalid mutable name."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            get_term_context(NameTerm), Pieces),
        MaybeName = error1([Spec])
    ).

:- pred parse_mutable_type(varset::in, term::in, maybe1(mer_type)::out) is det.

parse_mutable_type(VarSet, TypeTerm, MaybeType) :-
    ( if term.contains_var(TypeTerm, _) then
        TypeTermStr = describe_error_term(VarSet, TypeTerm),
        Pieces = [words("Error: the type in a"), decl("mutable"),
            words("declaration cannot contain variables:"),
            words(TypeTermStr), suffix("."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            get_term_context(TypeTerm), Pieces),
        MaybeType = error1([Spec])
    else
        ContextPieces = cord.init,
        parse_type(no_allow_ho_inst_info(wnhii_mutable_decl),
            VarSet, ContextPieces, TypeTerm, MaybeType)
    ).

:- pred parse_mutable_inst(varset::in, term::in, maybe1(mer_inst)::out) is det.

parse_mutable_inst(VarSet, InstTerm, MaybeInst) :-
    % XXX We should check whether the *inst* contains variables, not whether
    % the *term* does, but (a) inst_contains_inst_var is in inst_match.m,
    % not in inst_util.m, and (b) it is not exported.
    ( if term.contains_var(InstTerm, _) then
        InstTermStr = describe_error_term(VarSet, InstTerm),
        Pieces = [words("Error: the inst in a"), decl("mutable"),
            words("declaration cannot contain variables:"),
            words(InstTermStr), suffix("."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            get_term_context(InstTerm), Pieces),
        MaybeInst = error1([Spec])
    else
        ContextPieces = cord.from_list([words("In a"), decl("mutable"),
            words("declaration:")]),
        parse_inst(no_allow_constrained_inst_var(wnciv_mutable_inst),
            VarSet, ContextPieces, InstTerm, MaybeInst)
    ).

:- type collected_mutable_attribute
    --->    mutable_attr_trailed(mutable_trailed)
    ;       mutable_attr_foreign_name(foreign_name)
    ;       mutable_attr_attach_to_io_state(mutable_attach_to_io_state)
    ;       mutable_attr_constant(mutable_constant)
    ;       mutable_attr_thread_local(mutable_thread_local).

:- pred parse_mutable_attrs(varset::in, term::in,
    maybe1(mutable_var_attributes)::out) is det.

parse_mutable_attrs(VarSet, MutAttrsTerm, MaybeMutAttrs) :-
    Attributes0 = default_mutable_attributes,
    ConflictingAttributes = [
        mutable_attr_trailed(mutable_trailed) -
            mutable_attr_trailed(mutable_untrailed),
        mutable_attr_trailed(mutable_trailed) -
            mutable_attr_thread_local(mutable_thread_local),
        mutable_attr_constant(mutable_constant) -
            mutable_attr_trailed(mutable_trailed),
        mutable_attr_constant(mutable_constant) -
            mutable_attr_attach_to_io_state(mutable_attach_to_io_state),
        mutable_attr_constant(mutable_constant) -
            mutable_attr_thread_local(mutable_thread_local)
    ],
    ( if
        list_term_to_term_list(MutAttrsTerm, MutAttrTerms),
        map_parser(parse_mutable_attr, MutAttrTerms, MaybeAttrList),
        MaybeAttrList = ok1(CollectedMutAttrs)
    then
        % We check for trailed/untrailed, constant/trailed,
        % trailed/thread_local, constant/attach_to_io_state,
        % constant/thread_local conflicts here and deal with conflicting
        % foreign_name attributes in make_hlds_passes.m.
        ( if
            list.member(Conflict1 - Conflict2, ConflictingAttributes),
            list.member(Conflict1, CollectedMutAttrs),
            list.member(Conflict2, CollectedMutAttrs)
        then
            % XXX Should generate more specific error message.
            MutAttrsStr = mercury_term_to_string(VarSet, print_name_only,
                MutAttrsTerm),
            Pieces = [words("Error: conflicting attributes"),
                words("in attribute list:"), nl,
                words(MutAttrsStr), suffix("."), nl],
            Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
                get_term_context(MutAttrsTerm), Pieces),
            MaybeMutAttrs = error1([Spec])
        else
            list.foldl(process_mutable_attribute, CollectedMutAttrs,
                Attributes0, Attributes),
            MaybeMutAttrs = ok1(Attributes)
        )
    else
        MutAttrsStr = mercury_term_to_string(VarSet, print_name_only,
            MutAttrsTerm),
        Pieces = [words("Error: malformed attribute list"),
            words("in"), decl("mutable"), words("declaration:"),
            words(MutAttrsStr), suffix("."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            get_term_context(MutAttrsTerm), Pieces),
        MaybeMutAttrs = error1([Spec])
    ).

:- pred process_mutable_attribute(collected_mutable_attribute::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.

process_mutable_attribute(mutable_attr_trailed(Trailed), !Attributes) :-
    set_mutable_var_trailed(Trailed, !Attributes).
process_mutable_attribute(mutable_attr_foreign_name(ForeignName),
        !Attributes) :-
    set_mutable_add_foreign_name(ForeignName, !Attributes).
process_mutable_attribute(mutable_attr_attach_to_io_state(AttachToIOState),
        !Attributes) :-
    set_mutable_var_attach_to_io_state(AttachToIOState, !Attributes).
process_mutable_attribute(mutable_attr_constant(Constant), !Attributes) :-
    set_mutable_var_constant(Constant, !Attributes),
    (
        Constant = mutable_constant,
        set_mutable_var_trailed(mutable_untrailed, !Attributes),
        set_mutable_var_attach_to_io_state(mutable_dont_attach_to_io_state,
            !Attributes)
    ;
        Constant = mutable_not_constant
    ).
process_mutable_attribute(mutable_attr_thread_local(ThrLocal), !Attributes) :-
    set_mutable_var_thread_local(ThrLocal, !Attributes).

:- pred parse_mutable_attr(term::in,
    maybe1(collected_mutable_attribute)::out) is det.

parse_mutable_attr(MutAttrTerm, MutAttrResult) :-
    ( if
        MutAttrTerm = term.functor(term.atom(String), [], _),
        (
            String  = "untrailed",
            MutAttr = mutable_attr_trailed(mutable_untrailed)
        ;
            String = "trailed",
            MutAttr = mutable_attr_trailed(mutable_trailed)
        ;
            String  = "attach_to_io_state",
            MutAttr = mutable_attr_attach_to_io_state(
                mutable_attach_to_io_state)
        ;
            String = "constant",
            MutAttr = mutable_attr_constant(mutable_constant)
        ;
            String = "thread_local",
            MutAttr = mutable_attr_thread_local(mutable_thread_local)
        )
    then
        MutAttrResult = ok1(MutAttr)
    else if
        MutAttrTerm = term.functor(term.atom("foreign_name"), Args, _),
        Args = [LangTerm, ForeignNameTerm],
        term_to_foreign_language(LangTerm, Lang),
        ForeignNameTerm = term.functor(term.string(ForeignName), [], _)
    then
        MutAttr = mutable_attr_foreign_name(foreign_name(Lang, ForeignName)),
        MutAttrResult = ok1(MutAttr)
    else
        Pieces = [words("Error: unrecognised attribute"),
            words("in"), decl("mutable"), words("declaration."), nl],
        Spec = simplest_spec(severity_error, phase_term_to_parse_tree,
            get_term_context(MutAttrTerm), Pieces),
        MutAttrResult = error1([Spec])
    ).

%---------------------------------------------------------------------------%
:- end_module parse_tree.parse_mutable.
%---------------------------------------------------------------------------%
