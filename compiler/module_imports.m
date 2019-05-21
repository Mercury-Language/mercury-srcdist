%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: module_imports.m.
% Main author: fjh.
%
% This module contains the main data structure we use while augmenting
% a raw compilation unit. It records all the things that are imported,
% directly or indirectly, by the original raw compilation unit.
%
%-----------------------------------------------------------------------------%

:- module parse_tree.module_imports.
:- interface.

:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module libs.timestamp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.error_util.
:- import_module parse_tree.file_kind.
:- import_module parse_tree.parse_error.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_data_foreign.
:- import_module parse_tree.prog_item.
:- import_module recompilation.

:- import_module cord.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module set.

%-----------------------------------------------------------------------------%

    % When doing smart recompilation, we record, for each module,
    % which of its versions (source .m file, generated .int0/.int3/.int2/.int
    % file, or generated .opt/.transopt file) we read, and the modification
    % time of the file.
    %
    % We also record whether we expected the file we read to be
    % fully module qualified or not.
    %
    % XXX The handling of the map looks wrong to me (zs),
    % for two separate reasons.
    %
    % The first reason is that the need_qualifier field is set by
    % the code that *wants to read* a file, and is not a field
    % whose value should be filled in by *reading* the file.
    % (The timestamp field is properly filled in by reading
    % the file.)
    %
    % The second reason is that when we read in e.g. mod1.int, we simply
    % overwrite any existing entry in the module_timestamp_map for mod1.
    % I see no documented argument anywhere any of the following propositions,
    % which could each make the above the right thing to do.
    %
    % - Proposition 1: when we add an entry for a module, the map
    %   cannot contain any previous entry for that module.
    %
    % - Proposition 2a: when we add an entry for a module, the map
    %   *can* contain a previous entry for the module, but for
    %   a file of that module than contains at most as much information
    %   as the previously-read-in file (as e.g. a .int2 file cannot
    %   contain more information than a .int file for the same
    %   module).
    %
    % - Proposition 2b: when we add an entry for a module, the map
    %   *can* contain a previous entry for the module, the need_qualifier
    %   field in the new entry is at least as restrictive as in
    %   the old entry. (This means that once we required the file
    %   we read for a module to be fully module qualified, we shouldn't
    %   later forget about that requirement.
    %
:- type module_timestamp_map == map(module_name, module_timestamp).
:- type module_timestamp
    --->    module_timestamp(
                mts_file_kind       :: file_kind,
                mts_timestamp       :: timestamp,
                mts_need_qualifier  :: need_qualifier
            ).

    % The `module_and_imports' structure holds information about
    % a module and the modules that it imports.
    %
    % Note that we build this structure up as we go along.
    % When generating the dependencies (for `--generate-dependencies'), the
    % two fields that hold the direct imports do not include the imports via
    % ancestors when the module is first read in; the ancestor imports are
    % added later, once all the modules have been read in. Similarly the
    % indirect imports field is initially set to the empty list and filled
    % in later.
    %
    % When compiling or when making interface files, the same sort of thing
    % applies: initially all the list(module_name) fields except the public
    % children field are set to empty lists, and then we add ancestor
    % modules and imported modules to their respective lists as we process
    % the interface files for those imported or ancestor modules.
    %
:- type module_and_imports
    --->    module_and_imports(
                % The source file.
                mai_source_file_name            :: file_name,

                % The name of the top-level module in the source file
                % containing the module that we are compiling.
                mai_source_file_module_name     :: module_name,

                % The module (or sub-module) that we are compiling.
                mai_module_name                 :: module_name,

                % The context of the module declaration of mai_module_name.
                mai_module_name_context         :: prog_context,

                % The set of ancestor modules it inherits.
                mai_parent_deps                 :: set(module_name),

                % The set of modules it directly imports in the interface
                % (imports via ancestors count as direct).
                mai_int_deps                    :: set(module_name),

                % The set of modules it directly imports in the
                % implementation.
                mai_imp_deps                    :: set(module_name),

                % The set of modules it indirectly imports.
                mai_indirect_deps               :: set(module_name),

                mai_children                    :: set(module_name),

                % The set of its public children, i.e. child modules that
                % it includes in the interface section.
                mai_public_children             :: set(module_name),

                % The modules included in the same source file. This field
                % is only set for the top-level module in each file.
                mai_nested_children             :: set(module_name),

                % The list of filenames for fact tables in this module.
                mai_fact_table_deps             :: list(string),

                % The information from `:- pragma foreign_import_module'
                % declarations.
                mai_foreign_import_modules      :: foreign_import_modules,

                % The list of filenames referenced by `:- pragma foreign_decl'
                % or `:- pragma foreign_code' declarations.
                mai_foreign_include_files       :: foreign_include_file_infos,

                % Whether or not the module contains foreign code, and if yes,
                % which languages they use.
                mai_has_foreign_code            :: contains_foreign_code,

                % Does the module contain any `:- pragma foreign_export'
                % declarations?
                mai_contains_foreign_export     :: contains_foreign_export,

                % The contents of the module and its imports.
                mai_src_blocks                  :: list(src_item_block),
                mai_direct_int_blocks_cord      :: cord(int_item_block),
                mai_indirect_int_blocks_cord    :: cord(int_item_block),
                mai_opt_blocks_cord             :: cord(opt_item_block),
                mai_int_for_opt_blocks_cord     :: cord(int_for_opt_item_block),
                mai_module_version_numbers      :: module_version_numbers_map,

                % Whether an error has been encountered when reading in
                % this module.
                mai_specs                       :: list(error_spec),
                mai_errors                      :: read_module_errors,

                % If we are doing smart recompilation, we need to keep
                % the timestamps of the modules read in.
                mai_maybe_timestamp_map         :: maybe(module_timestamp_map),

                % Does this module contain main/2?
                mai_has_main                    :: has_main,

                % The directory containing the module source.
                mai_module_dir                  :: dir_name
            ).

:- pred module_and_imports_get_source_file_name(module_and_imports::in,
    file_name::out) is det.
:- pred module_and_imports_get_module_name(module_and_imports::in,
    module_name::out) is det.
:- pred module_and_imports_get_module_name_context(module_and_imports::in,
    prog_context::out) is det.
:- pred module_and_imports_get_imp_deps(module_and_imports::in,
    set(module_name)::out) is det.
:- pred module_and_imports_get_errors(module_and_imports::in,
    read_module_errors::out) is det.

    % Set the interface dependencies.
    %
:- pred module_and_imports_set_int_deps(set(module_name)::in,
    module_and_imports::in, module_and_imports::out) is det.

    % Set the implementation dependencies.
    %
:- pred module_and_imports_set_imp_deps(set(module_name)::in,
    module_and_imports::in, module_and_imports::out) is det.

    % Set the indirect dependencies.
    %
:- pred module_and_imports_set_indirect_deps(set(module_name)::in,
    module_and_imports::in, module_and_imports::out) is det.

:- pred module_and_imports_set_errors(read_module_errors::in,
    module_and_imports::in, module_and_imports::out) is det.

:- pred module_and_imports_add_specs(list(error_spec)::in,
    module_and_imports::in, module_and_imports::out) is det.

:- pred module_and_imports_add_interface_error(read_module_errors::in,
    module_and_imports::in, module_and_imports::out) is det.

    % Add items to the end of the list.
    %
:- pred module_and_imports_add_direct_int_item_blocks(
    list(int_item_block)::in,
    module_and_imports::in, module_and_imports::out) is det.
:- pred module_and_imports_add_indirect_int_item_blocks(
    list(int_item_block)::in,
    module_and_imports::in, module_and_imports::out) is det.
:- pred module_and_imports_add_opt_item_blocks(
    list(opt_item_block)::in,
    module_and_imports::in, module_and_imports::out) is det.
:- pred module_and_imports_add_int_for_opt_item_blocks(
    list(int_for_opt_item_block)::in,
    module_and_imports::in, module_and_imports::out) is det.

:- pred module_and_imports_maybe_add_module_version_numbers(
    module_name::in, maybe(version_numbers)::in,
    module_and_imports::in, module_and_imports::out) is det.

:- pred module_and_imports_add_specs_errors(
    list(error_spec)::in, read_module_errors::in,
    module_and_imports::in, module_and_imports::out) is det.

    % Return the results recorded in the module_and_imports structure.
    %
    % There is no predicate to return *just* the items, since that would
    % allow callers to forget to retrieve and then print the error
    % specifications.
    %
:- pred module_and_imports_get_aug_comp_unit(module_and_imports::in,
    aug_compilation_unit::out, list(error_spec)::out, read_module_errors::out)
    is det.

%-----------------------------------------------------------------------------%

    % init_module_and_imports(Globals, FileName, SourceFileModuleName,
    %   NestedModuleNames, Specs, Errors, CompilationUnit, ModuleAndImports).
    %
:- pred init_module_and_imports(globals::in, file_name::in, module_name::in,
    set(module_name)::in, list(error_spec)::in, read_module_errors::in,
    raw_compilation_unit::in, module_and_imports::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module mdbcomp.prim_data.
:- import_module parse_tree.comp_unit_interface.
:- import_module parse_tree.get_dependencies.

:- import_module dir.
:- import_module term.

%-----------------------------------------------------------------------------%

module_and_imports_get_source_file_name(Module, X) :-
    X = Module ^ mai_source_file_name.
module_and_imports_get_module_name(Module, X) :-
    X = Module ^ mai_module_name.
module_and_imports_get_module_name_context(Module, X) :-
    X = Module ^ mai_module_name_context.
module_and_imports_get_imp_deps(Module, X) :-
    X = Module ^ mai_imp_deps.
module_and_imports_get_errors(Module, X) :-
    X = Module ^ mai_errors.

module_and_imports_set_int_deps(IntDeps, !ModuleAndImports) :-
    !ModuleAndImports ^ mai_int_deps := IntDeps.
module_and_imports_set_imp_deps(ImpDeps, !ModuleAndImports) :-
    !ModuleAndImports ^ mai_imp_deps := ImpDeps.
module_and_imports_set_indirect_deps(IndirectDeps, !ModuleAndImports) :-
    !ModuleAndImports ^ mai_indirect_deps := IndirectDeps.
module_and_imports_set_errors(Errors, !ModuleAndImports) :-
    !ModuleAndImports ^ mai_errors := Errors.

module_and_imports_add_specs(NewSpecs, !ModuleAndImports) :-
    Specs0 = !.ModuleAndImports ^ mai_specs,
    Specs = NewSpecs ++ Specs0,
    !ModuleAndImports ^ mai_specs := Specs.

module_and_imports_add_interface_error(InterfaceErrors, !ModuleAndImports) :-
    Errors0 = !.ModuleAndImports ^ mai_errors,
    set.union(Errors0, InterfaceErrors, Errors),
    !ModuleAndImports ^ mai_errors := Errors.

module_and_imports_add_direct_int_item_blocks(NewIntItemBlocks,
        !ModuleAndImports) :-
    IntItemBlocks0 = !.ModuleAndImports ^ mai_direct_int_blocks_cord,
    IntItemBlocks = IntItemBlocks0 ++ cord.from_list(NewIntItemBlocks),
    !ModuleAndImports ^ mai_direct_int_blocks_cord := IntItemBlocks.

module_and_imports_add_indirect_int_item_blocks(NewIntItemBlocks,
        !ModuleAndImports) :-
    IntItemBlocks0 = !.ModuleAndImports ^ mai_indirect_int_blocks_cord,
    IntItemBlocks = IntItemBlocks0 ++ cord.from_list(NewIntItemBlocks),
    !ModuleAndImports ^ mai_indirect_int_blocks_cord := IntItemBlocks.

module_and_imports_add_opt_item_blocks(NewOptItemBlocks, !ModuleAndImports) :-
    OptItemBlocks0 = !.ModuleAndImports ^ mai_opt_blocks_cord,
    OptItemBlocks = OptItemBlocks0 ++ cord.from_list(NewOptItemBlocks),
    !ModuleAndImports ^ mai_opt_blocks_cord := OptItemBlocks.

module_and_imports_add_int_for_opt_item_blocks(NewIntItemBlocks,
        !ModuleAndImports) :-
    IntItemBlocks0 = !.ModuleAndImports ^ mai_int_for_opt_blocks_cord,
    IntItemBlocks = IntItemBlocks0 ++ cord.from_list(NewIntItemBlocks),
    !ModuleAndImports ^ mai_int_for_opt_blocks_cord := IntItemBlocks.

module_and_imports_maybe_add_module_version_numbers(ModuleName,
        MaybeVersionNumbers, !ModuleAndImports) :-
    (
        MaybeVersionNumbers = no
    ;
        MaybeVersionNumbers = yes(VersionNumbers),
        ModuleVersionNumbersMap0 =
            !.ModuleAndImports ^ mai_module_version_numbers,
        map.det_insert(ModuleName, VersionNumbers,
            ModuleVersionNumbersMap0, ModuleVersionNumbersMap),
        !ModuleAndImports ^ mai_module_version_numbers
            := ModuleVersionNumbersMap
    ).

module_and_imports_add_specs_errors(NewSpecs, NewErrors, !ModuleAndImports) :-
    Specs0 = !.ModuleAndImports ^ mai_specs,
    Errors0 = !.ModuleAndImports ^ mai_errors,
    Specs = NewSpecs ++ Specs0,
    set.union(Errors0, NewErrors, Errors),
    !ModuleAndImports ^ mai_specs := Specs,
    !ModuleAndImports ^ mai_errors := Errors.

module_and_imports_get_aug_comp_unit(Module, AugCompUnit, Specs, Errors) :-
    ModuleName = Module ^ mai_module_name,
    ModuleNameContext = Module ^ mai_module_name_context,
    SrcItemBlocks = Module ^ mai_src_blocks,
    DirectIntItemBlocks = cord.list(Module ^ mai_direct_int_blocks_cord),
    IndirectIntItemBlocks = cord.list(Module ^ mai_indirect_int_blocks_cord),
    OptItemBlocks = cord.list(Module ^ mai_opt_blocks_cord),
    IntForOptItemBlocks = cord.list(Module ^ mai_int_for_opt_blocks_cord),
    ModuleVersionNumbers = Module ^ mai_module_version_numbers,
    AugCompUnit = aug_compilation_unit(ModuleName, ModuleNameContext,
        ModuleVersionNumbers, SrcItemBlocks,
        DirectIntItemBlocks, IndirectIntItemBlocks,
        OptItemBlocks, IntForOptItemBlocks),
    Specs = Module ^ mai_specs,
    Errors = Module ^ mai_errors.

%-----------------------------------------------------------------------------%

init_module_and_imports(Globals, FileName, SourceFileModuleName,
        NestedModuleNames, Specs, Errors, RawCompUnit0, ModuleImports) :-
    RawCompUnit0 = raw_compilation_unit(ModuleName, ModuleNameContext,
        RawItemBlocks),
    ParentDeps = get_ancestors(ModuleName),

    get_dependencies_in_item_blocks(RawItemBlocks,
        ImplImportDeps0, ImplUseDeps0),
    get_implicit_dependencies_in_item_blocks(Globals, RawItemBlocks,
        ImplicitImplImportDeps, ImplicitImplUseDeps),
    set.union(ImplicitImplImportDeps, ImplImportDeps0, ImplImportDeps),
    set.union(ImplicitImplUseDeps, ImplUseDeps0, ImplUseDeps),
    set.union(ImplImportDeps, ImplUseDeps, ImplementationDeps),

    get_interface(dont_include_impl_types, RawCompUnit0, RawCompUnit),
    RawCompUnit = raw_compilation_unit(_, _, InterfaceItemBlocks),
    get_dependencies_in_item_blocks(InterfaceItemBlocks,
        InterfaceImportDeps0, InterfaceUseDeps0),
    get_implicit_dependencies_in_item_blocks(Globals, InterfaceItemBlocks,
        ImplicitInterfaceImportDeps, ImplicitInterfaceUseDeps),
    set.union(ImplicitInterfaceImportDeps, InterfaceImportDeps0,
        InterfaceImportDeps),
    set.union(ImplicitInterfaceUseDeps, InterfaceUseDeps0, InterfaceUseDeps),
    set.union(InterfaceImportDeps, InterfaceUseDeps, InterfaceDeps),

    % We don't fill in the indirect dependencies yet.
    set.init(IndirectDeps),

    get_included_modules_in_item_blocks(RawItemBlocks, IncludeDeps),
    get_included_modules_in_item_blocks(InterfaceItemBlocks,
        InterfaceIncludeDeps),

    % XXX ITEM_LIST Document why we do this.
    ( if ModuleName = SourceFileModuleName then
        set.delete(ModuleName, NestedModuleNames, NestedDeps)
    else
        set.init(NestedDeps)
    ),

    get_fact_table_dependencies_in_item_blocks(RawItemBlocks, FactTableDeps),

    % Figure out whether the items contain foreign code.
    get_foreign_code_indicators_from_item_blocks(Globals, RawItemBlocks,
        LangSet, ForeignImports0, ForeignIncludeFiles, ContainsForeignExport),
    ( if set.is_empty(LangSet) then
        ContainsForeignCode = contains_no_foreign_code
    else
        ContainsForeignCode = contains_foreign_code(LangSet)
    ),

    % If this module contains `:- pragma foreign_export' or
    % `:- pragma foreign_type' declarations, importing modules may need
    % to import its `.mh' file.
    get_foreign_self_imports_from_item_blocks(RawItemBlocks, SelfImportLangs),
    list.foldl(
        ( pred(Lang::in, FIM0::in, FIM::out) is det :-
            add_foreign_import_module(Lang, ModuleName, FIM0, FIM)
        ), SelfImportLangs, ForeignImports0, ForeignImports),

    % Work out whether the items contain main/2.
    look_for_main_pred_in_item_blocks(RawItemBlocks, no_main, HasMain),
    % XXX ITEM_LIST SrcItemBlocks is NOT stored here, per the documentation
    % above. Maybe it should be.
    % The definition of the module_and_imports type is exported, so other
    % modules can construct values of this type *without* calling this
    % predicate. The code that does so in make_module_and_imports in modules.m
    % *does* fill in the SrcItemBlocks field with meaningful data.
    ModuleImports = module_and_imports(FileName, SourceFileModuleName,
        ModuleName, ModuleNameContext, set.list_to_set(ParentDeps),
        InterfaceDeps, ImplementationDeps, IndirectDeps,
        IncludeDeps, InterfaceIncludeDeps, NestedDeps, FactTableDeps,
        ForeignImports, ForeignIncludeFiles,
        ContainsForeignCode, ContainsForeignExport,
        [], cord.init, cord.init, cord.init, cord.init, map.init,
        Specs, Errors, no, HasMain, dir.this_directory).

:- pred look_for_main_pred_in_item_blocks(list(item_block(MS))::in,
    has_main::in, has_main::out) is det.

look_for_main_pred_in_item_blocks([], !HasMain).
look_for_main_pred_in_item_blocks([ItemBlock | ItemBlocks], !HasMain) :-
    % XXX ITEM_LIST Warn if Section isn't ms_interface or ams_interface.
    ItemBlock = item_block(_Section, _Context, _Incls, _Imports, Items),
    look_for_main_pred_in_items(Items, !HasMain),
    look_for_main_pred_in_item_blocks(ItemBlocks, !HasMain).

:- pred look_for_main_pred_in_items(list(item)::in,
    has_main::in, has_main::out) is det.

look_for_main_pred_in_items([], !HasMain).
look_for_main_pred_in_items([Item | Items], !HasMain) :-
    ( if
        Item = item_pred_decl(ItemPredDecl),
        ItemPredDecl = item_pred_decl_info(Name, pf_predicate, ArgTypes,
            _, WithType, _, _, _, _, _, _, _, _, _),
        unqualify_name(Name) = "main",
        % XXX We should allow `main/2' to be declared using `with_type`,
        % but equivalences haven't been expanded at this point.
        % The `has_main' field is only used for some special case handling
        % of the module containing main for the IL backend (we generate
        % a `.exe' file rather than a `.dll' file). This would arguably
        % be better done by generating a `.dll' file as normal, and a
        % separate `.exe' file containing initialization code and a call
        % to `main/2', as we do with the `_init.c' file in the C backend.
        ArgTypes = [_, _],
        WithType = no
    then
        % XXX ITEM_LIST Should we warn if !.HasMain = has_main?
        % If not, then we should stop recursing right here.
        !:HasMain = has_main
    else
        true
    ),
    look_for_main_pred_in_items(Items, !HasMain).

%-----------------------------------------------------------------------------%
:- end_module parse_tree.module_imports.
%-----------------------------------------------------------------------------%
