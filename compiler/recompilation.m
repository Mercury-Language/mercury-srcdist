%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001-2007, 2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: recompilation.m.
% Main author: stayl.
%
% Type declarations for smart recompilation.
% Predicates to record program items used by a compilation.
%
% A module must be recompiled if
% - The file itself has changed.
% - An imported item used in compiling the module has changed or been removed.
% - An item has been added to an imported module which could cause an
%   ambiguity with an item used in compiling the module.
%
% Currently smart recompilation does not work properly with
% inter-module optimization. If a `.opt' file changes, all modules
% importing it need to be recompiled.
%
%-----------------------------------------------------------------------------%

:- module recompilation.
:- interface.

:- import_module libs.
:- import_module libs.timestamp.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module map.
:- import_module maybe.
:- import_module set.
:- import_module term.

:- include_module recompilation.check.
:- include_module recompilation.usage.
:- include_module recompilation.used_file.
:- include_module recompilation.version.

    % Identify a particular version of a program item.
    % This could be done using a timestamp or a hash value.
    %
    % XXX RECOMP We had a thread on m-rev on .used files starting on 2021-04-19
    % on replacing this with two separate representations of time: a binary one
    % containing seconds since the epoch, plus any sub-second-precision
    % information the OS may offer, and a text one for the readability
    % of .used files.
    %
:- type version_number == timestamp.

:- pred parse_version_number_term(term(T)::in, version_number::out) is semidet.

:- pred parse_timestamp_term(term(T)::in, timestamp::out) is semidet.

:- func version_number_to_string(version_number) = string.

%-----------------------------------------------------------------------------%

% XXX ITEM_LIST Choose a base name for these types that DOESN'T clash
% with the item type in the parse tree. While the types here are closely
% related to prog_item.item, they are NOT the same. Using the same name
% here encourages thinking that they are, which may lead to bugs.
%
% XXX ITEM_LIST Document what prog_item.item, or what sequence of
% prog_item.items, each item_type may correspond to.

:- type item_id
    --->    item_id(item_type, item_name).

:- type item_name
    --->    item_name(sym_name, arity).

    % XXX RECOMP Consider splitting this type into two or more types,
    % one for each separate purpose. We use this, amongst other things,
    % for selecting one field from several data structures (module_versions,
    % used_items, resolved_used_items, module_imported_items, and
    % gathered_items) which have similar but NOT IDENTICAL sets of fields,
    % so some of these item_types *have* no corresponding field in some
    % of those structures.
    %
:- type item_type
    --->    type_name_item
            % Just the name of the type, not its body. It is common
            % for a value of a type to be passed through a predicate without
            % inspecting the value -- such predicates do not need to be
            % recompiled if the body of the type changes (except for
            % equivalence types).
    ;       type_defn_item
    ;       inst_item
    ;       mode_item
    ;       typeclass_item
    ;       functor_item        % The RHS of a var-functor unification.
    ;       predicate_item
    ;       function_item
    ;       mutable_item
    ;       foreign_proc_item.

:- inst simple_item for item_type/0
    --->    type_name_item
    ;       type_defn_item
    ;       inst_item
    ;       mode_item
    ;       typeclass_item.

:- inst pred_or_func_item for item_type/0
    --->    predicate_item
    ;       function_item.

:- func pred_or_func_to_item_type(pred_or_func::in)
    = (item_type::out(pred_or_func_item)) is det.

:- pred string_to_item_type(string, item_type).
:- mode string_to_item_type(in, out) is semidet.
:- mode string_to_item_type(out, in) is det.

:- func type_ctor_to_item_name(type_ctor) = item_name.
:- func inst_ctor_to_item_name(inst_ctor) = item_name.
:- func mode_ctor_to_item_name(mode_ctor) = item_name.

:- func item_name_to_type_ctor(item_name) = type_ctor.
:- func item_name_to_inst_ctor(item_name) = inst_ctor.
:- func item_name_to_mode_ctor(item_name) = mode_ctor.

%-----------------------------------------------------------------------------%

:- type recompilation_info
    --->    recompilation_info(
                % Name of the current module.
                recomp_module_name      :: module_name,

                % Used items imported from other modules.
                recomp_used_items       :: used_items,

                % For now we only record dependencies of imported items
                % on equivalence types. The rest of the dependencies can be
                % found by examining the pred_infos, type_defns etc of the
                % items recorded in the used_items field above.
                recomp_dependencies     :: map(item_id, set(item_id)),

                recomp_version_numbers  :: module_item_version_numbers_map
            ).

:- func init_recompilation_info(module_name) = recompilation_info.

%-----------------------------------------------------------------------------%

:- type used_item_type
    --->    used_type_name
            % Just the name of the type, not its body. It is common
            % for a value of a type to be passed through a predicate without
            % inspecting the value -- such predicates do not need to be
            % recompiled if the body of the type changes (except for
            % equivalence types).
    ;       used_type_defn
    ;       used_inst
    ;       used_mode
    ;       used_typeclass
    ;       used_functor        % The RHS of a var-functor unification.
    ;       used_predicate
    ;       used_function.

    % A simple_item_set records the single possible match for an item.
    %
    % XXX RECOMP RENAME The type name should reflect that fact.
    %
:- type simple_item_set == map(name_arity, map(module_qualifier, module_name)).

    % Items which are used by local items.
    %
    % XXX That "documentation" is not exactly complete ...
    %
:- type used_items
    --->    used_items(
                used_type_names     :: simple_item_set,
                used_type_defns     :: simple_item_set,
                used_insts          :: simple_item_set,
                used_modes          :: simple_item_set,
                used_typeclasses    :: simple_item_set,
                used_functors       :: simple_item_set,
                used_predicates     :: simple_item_set,
                used_functions      :: simple_item_set
            ).

:- func init_used_items = used_items.

%-----------------------------------------------------------------------------%

    % Map modules' names to their version number info.
:- type module_item_version_numbers_map ==
    map(module_name, module_item_version_numbers).

    % Values of this type specify the version number of each visible item
    % in a module.
    %
    % XXX The comment on the type of the predecessor of the vn_instances field
    % said: "For each interface file, we keep a version number for each class",
    % which is quite confusing.
    %
:- type module_item_version_numbers
    --->    module_item_version_numbers(
                mivn_type_names     :: name_arity_version_map,
                mivn_type_defns     :: name_arity_version_map,
                mivn_insts          :: name_arity_version_map,
                mivn_modes          :: name_arity_version_map,
                mivn_typeclasses    :: name_arity_version_map,
                mivn_instances      :: item_name_version_map,
                mivn_predicates     :: name_arity_version_map,
                mivn_functions      :: name_arity_version_map
            ).

:- type name_arity_version_map == map(name_arity, version_number).

:- type item_name_version_map == map(item_name, version_number).

:- func init_module_item_version_numbers = module_item_version_numbers.

%-----------------------------------------------------------------------------%

    % unqualified("") if the symbol was unqualified.
:- type module_qualifier == module_name.

:- func find_module_qualifier(sym_name) = module_qualifier.

:- func module_qualify_name(module_qualifier, string) = sym_name.

%-----------------------------------------------------------------------------%

    % record_used_item(ItemType, UnqualifiedId, QualifiedId, !Info).
    %
    % Record a reference to UnqualifiedId, for which QualifiedId
    % is the only match. If a new declaration is added so that
    % QualifiedId is not the only match, we need to recompile.
    %
:- pred record_used_item(used_item_type::in, item_name::in, item_name::in,
    recompilation_info::in, recompilation_info::out) is det.

    % For each imported item we need to record which equivalence types
    % are used because equiv_type.m removes all references to the
    % equivalence types, and at that point we don't know which imported
    % items are going to be used by the compilation.
    %
    % For predicates declared using `with_type` annotations,
    % the version number in the interface file and the
    % version_numbers map will refer to the arity before expansion
    % of the `with_type` annotation, so that needs to be recorded
    % here as well.
    %
:- pred record_expanded_items(item_id::in, set(item_id)::in,
    recompilation_info::in, recompilation_info::out) is det.

%-----------------------------------------------------------------------------%

    % XXX RECOMP RENAME It is the eqv_expanded_item_set type that plays
    % the role that X_info types (for X = polymorphism, simplify etc)
    % play in the rest of the compiler, in that it contains a data structure
    % that is threaded through a set of predicates (a) to give them the
    % info they need to do their jobs, and (b) to collect their observations.
    %
:- type eqv_expand_info
    --->    no_eqv_expand_info
    ;       eqv_expand_info(module_name, set(item_id)).
            % The module_name field contains the name of the module
            % currently being compiled.
            %
            % XXX Document the meaning of the second field.

    % For smart recompilation we need to record which items were expanded
    % in each declaration. Any items which depend on that declaration also
    % depend on the expanded items.
    %
:- pred maybe_start_recording_expanded_items(module_name::in, sym_name::in,
    maybe(recompilation_info)::in, eqv_expand_info::out) is det.

:- pred record_expanded_item(item_id::in,
    eqv_expand_info::in, eqv_expand_info::out) is det.

    % Record all the expanded items in the recompilation_info.
    %
:- pred finish_recording_expanded_items(item_id::in, eqv_expand_info::in,
    maybe(recompilation_info)::in, maybe(recompilation_info)::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module list.
:- import_module require.
:- import_module string.

%-----------------------------------------------------------------------------%

parse_version_number_term(Term, Timestamp) :-
    parse_timestamp_term(Term, Timestamp).

parse_timestamp_term(Term, Timestamp) :-
    Term = term.functor(term.string(Str), [], _),
    parse_timestamp_string(Str, Timestamp).

version_number_to_string(VersionNumber) = VersionNumberStr :-
    string.format("""%s""", [s(timestamp_to_string(VersionNumber))],
        VersionNumberStr).

%-----------------------------------------------------------------------------%

pred_or_func_to_item_type(pf_predicate) = predicate_item.
pred_or_func_to_item_type(pf_function) = function_item.

string_to_item_type("type", type_name_item).        % for historical reasons
string_to_item_type("type_body", type_defn_item).   % for historical reasons
string_to_item_type("inst", inst_item).
string_to_item_type("mode", mode_item).
string_to_item_type("typeclass", typeclass_item).
string_to_item_type("functor", functor_item).
string_to_item_type("predicate", predicate_item).
string_to_item_type("function", function_item).
string_to_item_type("mutable", mutable_item).
string_to_item_type("foreign_proc", foreign_proc_item).

type_ctor_to_item_name(type_ctor(SymName, Arity)) = item_name(SymName, Arity).
inst_ctor_to_item_name(inst_ctor(SymName, Arity)) = item_name(SymName, Arity).
mode_ctor_to_item_name(mode_ctor(SymName, Arity)) = item_name(SymName, Arity).

item_name_to_type_ctor(item_name(SymName, Arity)) = type_ctor(SymName, Arity).
item_name_to_inst_ctor(item_name(SymName, Arity)) = inst_ctor(SymName, Arity).
item_name_to_mode_ctor(item_name(SymName, Arity)) = mode_ctor(SymName, Arity).

%-----------------------------------------------------------------------------%

init_recompilation_info(ModuleName) =
    recompilation_info(ModuleName, init_used_items, map.init, map.init).

init_used_items =
    used_items(map.init, map.init, map.init, map.init, map.init, map.init,
        map.init, map.init).

:- func get_used_item_ids(used_items, used_item_type) = simple_item_set.

get_used_item_ids(Used, used_type_name) = Used ^ used_type_names.
get_used_item_ids(Used, used_type_defn) = Used ^ used_type_defns.
get_used_item_ids(Used, used_inst) = Used ^ used_insts.
get_used_item_ids(Used, used_mode) = Used ^ used_modes.
get_used_item_ids(Used, used_typeclass) = Used ^ used_typeclasses.
get_used_item_ids(Used, used_functor) = Used ^ used_functors.
get_used_item_ids(Used, used_predicate) = Used ^ used_predicates.
get_used_item_ids(Used, used_function) = Used ^ used_functions.

:- pred set_used_item_ids(used_item_type::in, simple_item_set::in,
    used_items::in, used_items::out) is det.

set_used_item_ids(used_type_name, IdMap, !Used) :-
    !Used ^ used_type_names := IdMap.
set_used_item_ids(used_type_defn, IdMap, !Used) :-
    !Used ^ used_type_defns := IdMap.
set_used_item_ids(used_inst, IdMap, !Used) :-
    !Used ^ used_insts := IdMap.
set_used_item_ids(used_mode, IdMap, !Used) :-
    !Used ^ used_modes := IdMap.
set_used_item_ids(used_typeclass, IdMap, !Used) :-
    !Used ^ used_typeclasses := IdMap.
set_used_item_ids(used_functor, IdMap, !Used) :-
    !Used ^ used_functors := IdMap.
set_used_item_ids(used_predicate, IdMap, !Used) :-
    !Used ^ used_predicates := IdMap.
set_used_item_ids(used_function, IdMap, !Used) :-
    !Used ^ used_functions := IdMap.

%-----------------------------------------------------------------------------%

init_module_item_version_numbers =
    module_item_version_numbers(map.init, map.init, map.init, map.init,
        map.init, map.init, map.init, map.init).

%-----------------------------------------------------------------------------%

find_module_qualifier(unqualified(_)) = unqualified("").
find_module_qualifier(qualified(ModuleName, _)) = ModuleName.

module_qualify_name(Qualifier, Name) =
    ( if Qualifier = unqualified("") then
        unqualified(Name)
    else
        qualified(Qualifier, Name)
    ).

%-----------------------------------------------------------------------------%

record_used_item(UsedItemType, Id, QualifiedId, !Info) :-
    QualifiedId = item_name(QualifiedName, Arity),
    ( if
        % Don't record builtin items (QualifiedId may be unqualified
        % for predicates, functions and functors because they aren't
        % qualified until after typechecking).
        QualifiedName = unqualified(_),
        ignore_unqual_item_for_item_type(UsedItemType) = ignore
    then
        true
    else
        Used0 = !.Info ^ recomp_used_items,
        IdSet0 = get_used_item_ids(Used0, UsedItemType),
        UnqualifiedName = unqualify_name(QualifiedName),
        ModuleName = find_module_qualifier(QualifiedName),
        UnqualifiedId = name_arity(UnqualifiedName, Arity),
        Id = item_name(SymName, _),
        ModuleQualifier = find_module_qualifier(SymName),
        ( if map.search(IdSet0, UnqualifiedId, MatchingNames0) then
            ( if map.contains(MatchingNames0, ModuleQualifier) then
                true
            else
                map.det_insert(ModuleQualifier, ModuleName,
                    MatchingNames0, MatchingNames),
                map.det_update(UnqualifiedId, MatchingNames, IdSet0, IdSet),
                set_used_item_ids(UsedItemType, IdSet, Used0, Used),
                !Info ^ recomp_used_items := Used
            )
        else
            MatchingNames = map.singleton(ModuleQualifier, ModuleName),
            map.det_insert(UnqualifiedId, MatchingNames, IdSet0, IdSet),
            set_used_item_ids(UsedItemType, IdSet, Used0, Used),
            !Info ^ recomp_used_items := Used
        )
    ).

:- type maybe_ignore
    --->    do_not_ignore
    ;       ignore.

:- func ignore_unqual_item_for_item_type(used_item_type) = maybe_ignore.

ignore_unqual_item_for_item_type(UsedItemType) = Ignore :-
    (
        ( UsedItemType = used_type_name
        ; UsedItemType = used_type_defn
        ; UsedItemType = used_inst
        ; UsedItemType = used_mode
        ; UsedItemType = used_typeclass
        ),
        Ignore = ignore
    ;
        ( UsedItemType = used_functor
        ; UsedItemType = used_predicate
        ; UsedItemType = used_function
        ),
        Ignore = do_not_ignore
    ).

%-----------------------------------------------------------------------------%

record_expanded_items(Item, ExpandedItems, !Info) :-
    ( if set.is_empty(ExpandedItems) then
        true
    else
        DepsMap0 = !.Info ^ recomp_dependencies,
        ( if map.search(DepsMap0, Item, Deps0) then
            set.union(ExpandedItems, Deps0, Deps),
            map.det_update(Item, Deps, DepsMap0, DepsMap)
        else
            map.det_insert(Item, ExpandedItems, DepsMap0, DepsMap)
        ),
        !Info ^ recomp_dependencies := DepsMap
    ).

maybe_start_recording_expanded_items(ModuleName, SymName, MaybeRecompInfo,
        ExpandInfo) :-
    (
        MaybeRecompInfo = no,
        ExpandInfo = no_eqv_expand_info
    ;
        MaybeRecompInfo = yes(_),
        ( if SymName = qualified(ModuleName, _) then
            ExpandInfo = no_eqv_expand_info
        else
            ExpandInfo = eqv_expand_info(ModuleName, set.init)
        )
    ).

record_expanded_item(ItemId, !ExpandInfo) :-
    (
        !.ExpandInfo = no_eqv_expand_info
    ;
        !.ExpandInfo = eqv_expand_info(ModuleName, ExpandedItemIds0),
        ItemId = item_id(_, ItemName),
        ( if ItemName = item_name(qualified(ModuleName, _), _) then
            % We don't need to record local items.
            true
        else
            set.insert(ItemId, ExpandedItemIds0, ExpandedItemIds),
            !:ExpandInfo = eqv_expand_info(ModuleName, ExpandedItemIds)
        )
    ).

finish_recording_expanded_items(ItemId, ExpandInfo,
        MaybeRecomp0, MaybeRecomp) :-
    (
        ExpandInfo = no_eqv_expand_info,
        MaybeRecomp = MaybeRecomp0
    ;
        ExpandInfo = eqv_expand_info(_, ExpandedItemIds),
        (
            MaybeRecomp0 = no,
            unexpected($pred, "items but no info")
        ;
            MaybeRecomp0 = yes(Recomp0),
            record_expanded_items(ItemId, ExpandedItemIds, Recomp0, Recomp),
            MaybeRecomp = yes(Recomp)
        )
    ).

%-----------------------------------------------------------------------------%
:- end_module recompilation.
%-----------------------------------------------------------------------------%
