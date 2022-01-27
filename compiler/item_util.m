%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2014 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: item_util.m.
%
% This module contains utility predicates for dealing with items.
%
%-----------------------------------------------------------------------------%

:- module parse_tree.item_util.
:- interface.

:- import_module libs.globals.
:- import_module parse_tree.prog_item.

:- import_module bool.
:- import_module list.

%-----------------------------------------------------------------------------%

    % This is effectively a subtype of int_file_kind, which is defined in
    % prog_item.m.
:- type short_int_file_kind
    --->    sifk_int2   % the qualified short interface, for the .int2 file
    ;       sifk_int3.  % the unqualified short interface, for the .int3 file

    % XXX make_abstract_defn should be merged with make_abstract_unify_compare
    % and made det, returning the unchanged item if it does not need to be made
    % abstract (so we can use det switches instead semidet tests in the code).
    %
:- pred maybe_make_abstract_type_defn(short_int_file_kind::in,
    item_type_defn_info::in, item_type_defn_info::out) is det.

:- pred make_abstract_typeclass(item_typeclass_info::in,
    item_typeclass_info::out) is det.

:- pred maybe_make_abstract_instance(short_int_file_kind::in,
    item_instance_info::in, item_instance_info::out) is det.

    % All instance declarations must be written to `.int' files as
    % abstract instance declarations, because the method names have not yet
    % been module qualified. This could cause the wrong predicate to be
    % used if calls to the method are specialized.
    %
:- func make_instance_abstract(item_instance_info) = item_instance_info.

%-----------------------------------------------------------------------------%

    % Could this item use items from imported modules.
    %
:- func item_needs_imports(item) = bool.

:- func item_needs_foreign_imports(item) = list(foreign_language).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_type.

:- import_module maybe.

%-----------------------------------------------------------------------------%

maybe_make_abstract_type_defn(ShortIntFileKind,
        ItemTypeDefn, MaybeAbstractItemTypeDefn) :-
    TypeDefn = ItemTypeDefn ^ td_ctor_defn,
    (
        TypeDefn = parse_tree_du_type(Ctors, MaybeUserEqComp,
            MaybeDirectArgCtors),
        % For the `.int2' files, we need the full definitions of
        % discriminated union types. Even if the functors for a type
        % are not used within a module, we may need to know them for
        % comparing insts, e.g. for comparing `ground' and `bound(...)'.
        (
            ShortIntFileKind = sifk_int2,
            (
                MaybeUserEqComp = no,
                MaybeAbstractItemTypeDefn = ItemTypeDefn
            ;
                MaybeUserEqComp = yes(_UserEqComp),
                AbstractTypeDefn = parse_tree_du_type(Ctors,
                    yes(abstract_noncanonical_type(non_solver_type)),
                    MaybeDirectArgCtors),
                MaybeAbstractItemTypeDefn = ItemTypeDefn ^ td_ctor_defn :=
                    AbstractTypeDefn
            )
        ;
            ShortIntFileKind = sifk_int3,
            ( if du_type_is_enum(Ctors, NumBits) then
                AbstractDetails = abstract_enum_type(NumBits)
            else
                AbstractDetails = abstract_type_general
            ),
            MaybeAbstractItemTypeDefn = ItemTypeDefn ^ td_ctor_defn
                := parse_tree_abstract_type(AbstractDetails)
        )
    ;
        TypeDefn = parse_tree_abstract_type(AbstractDetails),
        MaybeAbstractItemTypeDefn = ItemTypeDefn ^ td_ctor_defn
            := parse_tree_abstract_type(AbstractDetails)
    ;
        TypeDefn = parse_tree_solver_type(_, _),
        % rafe: XXX we need to also export the details of the
        % forwarding type for the representation and the forwarding
        % pred for initialization.
        AbstractDetails = abstract_solver_type,
        MaybeAbstractItemTypeDefn = ItemTypeDefn ^ td_ctor_defn
            := parse_tree_abstract_type(AbstractDetails)
    ;
        TypeDefn = parse_tree_eqv_type(_),
        % For the `.int2' files, we need the full definitions of
        % equivalence types. They are needed to ensure that
        % non-abstract equivalence types always get fully expanded
        % before code generation, even in modules that only indirectly
        % import the definition of the equivalence type.
        % But the full definitions are not needed for the `.int3'
        % files. So we convert equivalence types into abstract types
        % only for the `.int3' files.
        (
            ShortIntFileKind = sifk_int2,
            MaybeAbstractItemTypeDefn = ItemTypeDefn
        ;
            ShortIntFileKind = sifk_int3,
            % XXX is this right for solver types?
            AbstractDetails = abstract_type_general,
            MaybeAbstractItemTypeDefn = ItemTypeDefn ^ td_ctor_defn
                := parse_tree_abstract_type(AbstractDetails)
        )
    ;
        TypeDefn = parse_tree_foreign_type(ForeignType, MaybeUserEqComp,
            Assertions),
        % We always need the definitions of foreign types
        % to handle inter-language interfacing correctly.
        % However, we want to abstract away any unify and compare predicates.
        (
            MaybeUserEqComp = no,
            MaybeAbstractItemTypeDefn = ItemTypeDefn
        ;
            MaybeUserEqComp = yes(_UserEqComp),
            AbstractTypeDefn = parse_tree_foreign_type(ForeignType,
                yes(abstract_noncanonical_type(non_solver_type)), Assertions),
            MaybeAbstractItemTypeDefn = ItemTypeDefn ^ td_ctor_defn :=
                AbstractTypeDefn
        )
    ).

make_abstract_typeclass(ItemTypeClass, AbstractItemTypeClass) :-
    AbstractItemTypeClass = ItemTypeClass ^ tc_class_methods
        := class_interface_abstract.

maybe_make_abstract_instance(ShortIntFileKind,
        ItemInstance, MaybeAbstractItemInstance) :-
    (
        ShortIntFileKind = sifk_int2,
        MaybeAbstractItemInstance = make_instance_abstract(ItemInstance)
    ;
        ShortIntFileKind = sifk_int3,
        MaybeAbstractItemInstance = ItemInstance
    ).

make_instance_abstract(ItemInstance0) = ItemInstance :-
    ItemInstance = ItemInstance0 ^ ci_method_instances
        := instance_body_abstract.

%-----------------------------------------------------------------------------%

item_needs_imports(Item) = NeedsImports :-
    (
        Item = item_type_defn(ItemTypeDefn),
        ( if ItemTypeDefn ^ td_ctor_defn = parse_tree_abstract_type(_) then
            NeedsImports = no
        else
            NeedsImports = yes
        )
    ;
        ( Item = item_clause(_)
        ; Item = item_inst_defn(_)
        ; Item = item_mode_defn(_)
        ; Item = item_pragma(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_typeclass(_)
        ; Item = item_instance(_)
        ; Item = item_promise(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ; Item = item_mutable(_)
        ),
        NeedsImports = yes
    ;
        Item = item_nothing(_),
        NeedsImports = no
    ).

item_needs_foreign_imports(Item) = Langs :-
    (
        Item = item_mutable(_ItemMutable),
        % We can use all foreign languages.
        Langs = all_foreign_languages
    ;
        Item = item_type_defn(ItemTypeDefn),
        ( if
            ItemTypeDefn ^ td_ctor_defn =
                parse_tree_foreign_type(ForeignType, _, _)
        then
            Langs = [foreign_type_language(ForeignType)]
        else
            Langs = []
        )
    ;
        Item = item_pragma(ItemPragma),
        ItemPragma = item_pragma_info(Pragma, _, _, _),
        (
            (
                Pragma = pragma_foreign_decl(FDInfo),
                FDInfo = pragma_info_foreign_decl(Lang, _, _)
            ;
                Pragma = pragma_foreign_code(FCInfo),
                FCInfo = pragma_info_foreign_code(Lang, _)
            ;
                Pragma = pragma_foreign_enum(FEInfo),
                FEInfo = pragma_info_foreign_enum(Lang, _, _)
            ;
                Pragma = pragma_foreign_proc_export(FPEInfo),
                FPEInfo = pragma_info_foreign_proc_export(Lang, _, _)
            ),
            Langs = [Lang]
        ;
            Pragma = pragma_foreign_proc(FPInfo),
            FPInfo = pragma_info_foreign_proc(Attrs, _, _, _, _, _, _),
            Langs = [get_foreign_language(Attrs)]
        ;
            ( Pragma = pragma_foreign_import_module(_)
            ; Pragma = pragma_foreign_export_enum(_)
            ; Pragma = pragma_external_proc(_)
            ; Pragma = pragma_type_spec(_)
            ; Pragma = pragma_inline(_)
            ; Pragma = pragma_no_inline(_)
            ; Pragma = pragma_unused_args(_)
            ; Pragma = pragma_exceptions(_)
            ; Pragma = pragma_trailing_info(_)
            ; Pragma = pragma_mm_tabling_info(_)
            ; Pragma = pragma_obsolete(_)
            ; Pragma = pragma_no_detism_warning(_)
            ; Pragma = pragma_oisu(_)
            ; Pragma = pragma_tabled(_)
            ; Pragma = pragma_fact_table(_)
            ; Pragma = pragma_reserve_tag(_)
            ; Pragma = pragma_promise_eqv_clauses(_)
            ; Pragma = pragma_promise_pure(_)
            ; Pragma = pragma_promise_semipure(_)
            ; Pragma = pragma_termination_info(_)
            ; Pragma = pragma_termination2_info(_)
            ; Pragma = pragma_terminates(_)
            ; Pragma = pragma_does_not_terminate(_)
            ; Pragma = pragma_check_termination(_)
            ; Pragma = pragma_mode_check_clauses(_)
            ; Pragma = pragma_structure_sharing(_)
            ; Pragma = pragma_structure_reuse(_)
            ; Pragma = pragma_require_feature_set(_)
            ),
            Langs = []
        )
    ;
        ( Item = item_clause(_)
        ; Item = item_inst_defn(_)
        ; Item = item_mode_defn(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_typeclass(_)
        ; Item = item_instance(_)
        ; Item = item_promise(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ; Item = item_nothing(_)
        ),
        Langs = []
    ).

%-----------------------------------------------------------------------------%
:- end_module parse_tree.item_util.
%-----------------------------------------------------------------------------%
