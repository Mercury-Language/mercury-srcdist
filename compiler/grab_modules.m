%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: grab_modules.m.
% Main author: fjh (original), zs (current).
%
% Given a module_and_imports structure initialized for a raw_comp_unit,
% this module has the task of figuring out which interface files the
% raw_comp_unit needs either directly or indirectly, and reading them in,
% adding them to the module_and_imports structure. If intermodule optimization
% is enabled, then calls to grab_plain_opt_and_int_for_opt_files and maybe
% grab_trans_opt_files will figure out what .opt and .trans_opt files
% the compilation unit can use, again either directly or indirectly,
% and add those, and the interface files they need, to the module_and_imports
% structure. When all this is done, the module_and_imports structure
% will contain an augmented version of the original compilation unit.
%
% The roles of the interface files (.int0, .int3, .int2 and .int) that
% this module reads in are documented (to the extent that they are documented
% anywhere) in the modules that creates them, which are comp_unit_interface.m
% and write_module_interface_files.m.
%
% XXX The file notes/interface_files.html contains (a start on) some
% more comprehensive documentation.
%
%---------------------------------------------------------------------------%

:- module parse_tree.grab_modules.
:- interface.

:- import_module libs.
:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module libs.timestamp.
:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.module_imports.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.read_modules.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module set.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % grab_qual_imported_modules_augment(Globals, SourceFileName,
    %   SourceFileModuleName, MaybeTimestamp, NestedSubModules, RawCompUnit,
    %   ModuleAndImports, !HaveReadModuleMaps, !IO):
    %
    % Given the raw CompUnit, one of the modules stored in SourceFileName,
    % read in the private interface files (.int0) for all the parent modules,
    % the long interface files (.int) for all the imported modules, and the
    % short interface files (.in2) for all the indirectly imported modules.
    % Return the `module_and_imports' structure containing all the information
    % gathered this way, from which we will compute the augmented version
    % of RawCompUnit.
    % XXX ITEM_LIST Move the actual computation of the AugCompUnit together
    % with this code, preferably in a new module, perhaps named something like
    % "augment_comp_unit.m".
    %
    % SourceFileModuleName is the top-level module name in SourceFileName.
    % ModuleTimestamp is the timestamp of the SourceFileName. NestedSubModules
    % is the list of the names of the nested submodules in SourceFileName
    % if RawCompUnit is the toplevel module in SourceFileName (i.e. if it is
    % the compilation unit of SourceFileModuleName). XXX ITEM_LIST document
    % exactly what NestedSubModules is if RawCompUnit is NOT the toplevel
    % module in SourceFileName. HaveReadModuleMaps contains the interface
    % files read during recompilation checking.
    %
    % Used when augmenting a module, which we do when asked to do
    % the tasks described by op_mode_augment. Most of the time, this is
    % generating target language code, but sometimes it may be e.g.
    % generating .opt and .trans_opt files.
    %
:- pred grab_qual_imported_modules_augment(globals::in, file_name::in,
    module_name::in, maybe(timestamp)::in, set(module_name)::in,
    raw_compilation_unit::in, module_and_imports::out,
    have_read_module_maps::in, have_read_module_maps::out,
    io::di, io::uo) is det.

    % grab_unqual_imported_modules_make_int(Globals,
    %   SourceFileName, SourceFileModuleName, RawCompUnit,
    %   ModuleAndImports, !HaveReadModuleMaps, !IO):
    %
    % Similar to grab_imported_modules_augment, but only reads in the
    % unqualified short interfaces (.int3s), and the .int0 files for
    % parent modules, instead of reading the long interfaces and
    % qualified short interfaces (.int and int2s). Does not set
    % the `PublicChildren', `FactDeps' and `ForeignIncludeFiles' fields
    % of the module_and_imports structure.
    %
    % Used when generating .int0 files, and when generating .int/.int2 files.
    %
:- pred grab_unqual_imported_modules_make_int(globals::in,
    file_name::in, module_name::in,
    raw_compilation_unit::in, module_and_imports::out,
    have_read_module_maps::in, have_read_module_maps::out,
    io::di, io::uo) is det.

    % Add the items from the .opt files of imported modules to
    % the items for this module.
    %
:- pred grab_plain_opt_and_int_for_opt_files(globals::in, bool::out,
    module_and_imports::in, module_and_imports::out,
    have_read_module_maps::in, have_read_module_maps::out,
    io::di, io::uo) is det.

    % grab_trans_opt_files(Globals, ModuleList, !ModuleAndImports, Error, !IO):
    %
    % Add the items from each of the modules in ModuleList.trans_opt to
    % the items in ModuleAndImports.
    %
:- pred grab_trans_opt_files(globals::in, list(module_name)::in, bool::out,
    module_and_imports::in, module_and_imports::out,
    have_read_module_maps::in, have_read_module_maps::out,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.
:- import_module mdbcomp.builtin_modules.
:- import_module parse_tree.comp_unit_interface.    % undesirable dependency
:- import_module parse_tree.convert_parse_tree.
:- import_module parse_tree.error_util.
:- import_module parse_tree.file_kind.
:- import_module parse_tree.file_names.
:- import_module parse_tree.get_dependencies.
:- import_module parse_tree.item_util.
:- import_module parse_tree.parse_error.
:- import_module parse_tree.parse_module.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_data_foreign.

:- import_module cord.
:- import_module map.
:- import_module one_or_more_map.
:- import_module one_or_more.
:- import_module require.
:- import_module term.
:- import_module string.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

grab_qual_imported_modules_augment(Globals, SourceFileName,
        SourceFileModuleName, MaybeTimestamp, NestedChildren,
        RawCompUnit, !:ModuleAndImports, !HaveReadModuleMaps, !IO) :-
    % The predicates grab_imported_modules and grab_unqual_imported_modules
    % have quite similar tasks. Please keep the corresponding parts of these
    % two predicates in sync.
    %
    % XXX ITEM_LIST Why aren't we updating !HaveReadModuleMaps?
    some [!Specs,
        !IntIndirectImported, !ImpIndirectImported,
        !IntImpIndirectImported, !ImpImpIndirectImported]
    (
        % Construct the initial module import structure.
        RawCompUnit = raw_compilation_unit(ModuleName, ModuleNameContext,
            RawItemBlocks),

        get_raw_components(RawItemBlocks, IntIncls, _ImpIncls,
            _IntAvails, _ImpAvails, _IntFIMs, _ImpFIMs, IntItems, ImpItems),
        get_implicits_foreigns_fact_tables(IntItems, ImpItems,
            _IntImplicitImportNeeds, _IntImpImplicitImportNeeds, Contents),
        Contents = item_contents(ForeignIncludeFilesCord, FactTablesSet,
            LangSet, ForeignExportLangs, HasMain),
        set.to_sorted_list(LangSet, Langs),
        ImplicitFIMs = list.map(make_foreign_import(ModuleName), Langs),
        FactTables = set.to_sorted_list(FactTablesSet),

        make_and_add_item_block(ModuleName, ms_implementation,
            [], [], ImplicitFIMs, [],
            RawItemBlocks, RawItemBlocks1),
        RawCompUnit1 = raw_compilation_unit(ModuleName, ModuleNameContext,
            RawItemBlocks1),
        check_convert_raw_comp_unit_to_module_src(Globals, RawCompUnit1,
            ParseTreeModuleSrc, [], ConvertSpecs),

        (
            MaybeTimestamp = yes(Timestamp),
            MaybeTimestampMap = yes(map.singleton(ModuleName,
                module_timestamp(fk_src, Timestamp, recomp_avail_src)))
        ;
            MaybeTimestamp = no,
            MaybeTimestampMap = no
        ),

        list.foldl(get_included_modules_in_item_include_acc, IntIncls,
            one_or_more_map.init, PublicChildren),

        make_module_and_imports(Globals, SourceFileName, SourceFileModuleName,
            ParseTreeModuleSrc, PublicChildren, NestedChildren, FactTables,
            ForeignIncludeFilesCord, ForeignExportLangs, HasMain,
            MaybeTimestampMap, !:ModuleAndImports),
        module_and_imports_add_specs(ConvertSpecs, !ModuleAndImports),
        !:Specs = [],

        RCUMap0 = !.HaveReadModuleMaps ^ hrmm_rcu,
        map.set(ModuleName, RawCompUnit, RCUMap0, RCUMap),
        !HaveReadModuleMaps ^ hrmm_rcu := RCUMap,

        ImportUseMap = ParseTreeModuleSrc ^ ptms_import_use_map,
        import_and_or_use_map_to_module_name_contexts(ImportUseMap,
            IntImportMap, IntUseMap, ImpImportMap, ImpUseMap,
            IntUseImpImportMap),
        map.keys_as_set(IntImportMap, IntImports2),
        map.keys_as_set(IntUseMap, IntUses2),
        ImpImports = map.sorted_keys(ImpImportMap),
        ImpUses = map.sorted_keys(ImpUseMap),
        IntUseImpImports = map.sorted_keys(IntUseImpImportMap),

        % Get the .int0 files of the ancestor modules.
        %
        % Uses of the items declared in ancestor modules do not need
        % module qualifiers. Modules imported by ancestors are considered
        % to be visible in the current module.
        % XXX grab_unqual_imported_modules_make_int treats AncestorImported and
        % AncestorUsed slightly differently from !.IntImported and !.IntUsed.
        Ancestors = get_ancestors(ModuleName),
        grab_module_int0_files(Globals,
            "ancestors", rwi0_section,
            Ancestors, IntImports2, IntImports, IntUses2, IntUses,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int files of the modules imported using `import_module'.
        set.init(!:IntIndirectImported),
        set.init(!:ImpIndirectImported),
        set.init(!:IntImpIndirectImported),
        set.init(!:ImpImpIndirectImported),
        grab_module_int1_files(Globals,
            "int_imported", rwi1_int_import,
            set.to_sorted_list(IntImports),
            !IntIndirectImported, !IntImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int1_files(Globals,
            "imp_imported", rwi1_imp_import,
            ImpImports,
            !ImpIndirectImported, !ImpImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int files of the modules imported using `use_module'.
        grab_module_int1_files(Globals,
            "int_used", rwi1_int_use,
            set.to_sorted_list(IntUses),
            !IntIndirectImported, !IntImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int1_files(Globals,
            "imp_used", rwi1_imp_use,
            ImpUses,
            !ImpIndirectImported, !ImpImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int files of the modules imported using `use_module'
        % in the interface and `import_module' in the implementation.
        grab_module_int1_files(Globals,
            "int_used_imp_imported", rwi1_int_use_imp_import,
            IntUseImpImports,
            !IntIndirectImported, !IntImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int2 files of the modules imported in .int files.
        grab_module_int2_files_transitively(Globals,
            "int_indirect_imported", rwi2_int_use,
            !.IntIndirectImported, !IntImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int2_files_transitively(Globals,
            "imp_indirect_imported", rwi2_imp_use,
            !.ImpIndirectImported, !ImpImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int2 files of the modules indirectly imported
        % the implementation sections of .int/.int2 files.
        % XXX Shouldn't these be .int3 files, as implied by the following
        % old comment?
        % Process the short interfaces for modules imported in the
        % implementation of indirectly imported modules. The items in these
        % modules shouldn't be visible to typechecking -- they are used for
        % fully expanding equivalence types after the semantic checking passes.
        grab_module_int2_files_and_impls_transitively(Globals,
            "int_imp_indirect_imported", rwi2_abstract,
            !.IntImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int2_files_and_impls_transitively(Globals,
            "imp_imp_indirect_imported", rwi2_abstract,
            !.ImpImpIndirectImported,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        module_and_imports_get_aug_comp_unit(!.ModuleAndImports,
            AugCompUnit, _, _),
        AllImportedOrUsed = set.union_list([IntImports, IntUses,
            set.list_to_set(ImpImports), set.list_to_set(ImpUses),
            set.list_to_set(IntUseImpImports)]),
        check_imports_accessibility(AugCompUnit, AllImportedOrUsed, !Specs),
        module_and_imports_add_specs(!.Specs, !ModuleAndImports)
    ).

grab_unqual_imported_modules_make_int(Globals, SourceFileName,
        SourceFileModuleName, RawCompUnit, !:ModuleAndImports,
        !HaveReadModuleMaps, !IO) :-
    % The predicates grab_imported_modules and grab_unqual_imported_modules
    % have quite similar tasks. Please keep the corresponding parts of these
    % two predicates in sync.
    %
    % XXX ITEM_LIST Why aren't we updating !HaveReadModuleMaps?

    some [!IntIndirectImported, !ImpIndirectImported]
    (
        % XXX We should consider whether we should print _ConvertSpecs,
        % and set the exit status accordingly. Doing so would diagnose
        % several kinds of problems earlier than we do now, but whether
        % people will find that more helpful than annoying cannot be answered
        % without actually tryng it out.
        %
        % XXX For now, we create ParseTreeModuleSrc only to give it to
        % make_module_and_imports. However, much of the code between here
        % and the call to that predicate could probably be simplified
        % if we changed it to work on ParseTreeModuleSrc instead of
        % RawItemBlocks.
        check_convert_raw_comp_unit_to_module_src(Globals, RawCompUnit,
            ParseTreeModuleSrc0, [], _ConvertSpecs),

        RawCompUnit = raw_compilation_unit(ModuleName, ModuleNameContext,
            RawItemBlocks),

        get_raw_components(RawItemBlocks, _IntIncls, _ImpIncls,
            IntAvails, ImpAvails, _IntFIMs0, _ImpFIMs, IntItems, ImpItems),
        get_imports_uses_maps(IntAvails, IntImportsMap0, IntUsesMap0),
        get_imports_uses_maps(ImpAvails, ImpImportsMap0, ImpUsesMap0),
        get_implicits_foreigns_fact_tables(IntItems, ImpItems,
            _IntImplicitImportNeeds, IntImpImplicitImportNeeds, Contents),
        Contents = item_contents(_ForeignInclFiles, _FactTables,
            LangSet, ForeignExportLangs, HasMain),

        warn_if_duplicate_use_import_decls(ModuleName, ModuleNameContext,
            IntImportsMap0, IntImportsMap1, IntUsesMap0, IntUsesMap1,
            ImpImportsMap0, ImpImportsMap, ImpUsesMap0, ImpUsesMap,
            IntUsedImpImported, [], _Specs),

        map.keys_as_set(IntImportsMap1, IntImports0),
        map.keys_as_set(IntUsesMap1, IntUses0),
        map.keys_as_set(ImpImportsMap, ImpImports),
        map.keys_as_set(ImpUsesMap, ImpUses),
        % XXX SECTION
        compute_implicit_avail_needs(Globals, IntImpImplicitImportNeeds,
            ImplicitIntUses),
        set.insert(mercury_public_builtin_module, IntImports0, IntImports),
        set.union(ImplicitIntUses, IntUses0, IntUses),

        ParseTreeModuleSrc = ParseTreeModuleSrc0 ^ ptms_implicit_fim_langs
            := yes(LangSet),

        map.init(PublicChildren),
        set.init(NestedChildren),
        % Nothing that we will do with !:ModuleAndImports when constructing
        % interface files will involve the files containing fact tables,
        % so it is OK to pass a dummy value for FactDeps.
        FactDeps = [],
        ForeignIncludeFiles = cord.init,
        MaybeTimestampMap = no,

        make_module_and_imports(Globals, SourceFileName, SourceFileModuleName,
            ParseTreeModuleSrc, PublicChildren, NestedChildren, FactDeps,
            ForeignIncludeFiles, ForeignExportLangs, HasMain,
            MaybeTimestampMap, !:ModuleAndImports),

        RCUMap0 = !.HaveReadModuleMaps ^ hrmm_rcu,
        map.set(ModuleName, RawCompUnit, RCUMap0, RCUMap),
        !HaveReadModuleMaps ^ hrmm_rcu := RCUMap,

        % Get the .int0 files of the ancestor modules.
        Ancestors = get_ancestors(ModuleName),
        grab_module_int0_files(Globals,
            "unqual_ancestors", rwi0_section,
            Ancestors, set.init, AncestorImports, set.init, AncestorUses,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int3 files of the modules imported using `import_module'.
        set.init(!:IntIndirectImported),
        set.init(!:ImpIndirectImported),
        grab_module_int3_files(Globals,
            "unqual_parent_imported", rwi3_direct_ancestor_import,
            set.to_sorted_list(AncestorImports),
            !IntIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int3_files(Globals,
            "unqual_int_imported", rwi3_direct_int_import,
            set.to_sorted_list(IntImports),
            !IntIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int3_files(Globals,
            "unqual_imp_imported", rwi3_direct_imp_import,
            set.to_sorted_list(ImpImports),
            !ImpIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int3 files of the modules imported using `use_module'.
        grab_module_int3_files(Globals,
            "unqual_parent_used", rwi3_direct_ancestor_use,
            set.to_sorted_list(AncestorUses),
            !IntIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int3_files(Globals,
            "unqual_int_used", rwi3_direct_int_use,
            set.to_sorted_list(IntUses),
            !IntIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int3_files(Globals,
            "unqual_imp_used", rwi3_direct_imp_use,
            set.to_sorted_list(ImpUses),
            !ImpIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int3 files of the modules imported using `use_module'
        % in the interface and `import_module' in the implementation.
        grab_module_int3_files(Globals,
            "unqual_int_used_imp_imported", rwi3_direct_int_use_imp_import,
            set.to_sorted_list(IntUsedImpImported),
            !IntIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),

        % Get the .int3 files of the modules imported in .int3 files.
        grab_module_int3_files_transitively(Globals,
            "unqual_int_indirect_imported", rwi3_indirect_int_use,
            !.IntIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO),
        grab_module_int3_files_transitively(Globals,
            "unqual_imp_indirect_imported", rwi3_indirect_imp_use,
            !.ImpIndirectImported, !HaveReadModuleMaps, !ModuleAndImports, !IO)
    ).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % This predicate ensures that every import_module declaration is checked
    % against every use_module declaration, except for the case where
    % the interface has `:- use_module foo.' and the implementation
    % `:- import_module foo.'. Return the set of modules that have a
    % `:- use_module foo' in the interface and an `:- import_module foo'
    % in the implementation.
    %
:- pred warn_if_duplicate_use_import_decls(module_name::in,
    prog_context::in,
    module_names_contexts::in, module_names_contexts::out,
    module_names_contexts::in, module_names_contexts::out,
    module_names_contexts::in, module_names_contexts::out,
    module_names_contexts::in, module_names_contexts::out,
    set(module_name)::out,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_if_duplicate_use_import_decls(ModuleName, Context,
        !IntImportedMap, !IntUsedMap, !ImpImportedMap, !ImpUsedMap,
        IntUsedImpImported, !Specs) :-
    do_warn_if_duplicate_use_import_decls(ModuleName, Context,
        !.IntImportedMap, !IntUsedMap, !Specs),
    do_warn_if_duplicate_use_import_decls(ModuleName, Context,
        !.IntImportedMap, !ImpUsedMap, !Specs),
    do_warn_if_duplicate_use_import_decls(ModuleName, Context,
        !.ImpImportedMap, !ImpUsedMap, !Specs),
    IntUsedImpImported = set.intersect(
        map.keys_as_set(!.ImpImportedMap),
        map.keys_as_set(!.IntUsedMap)),
    ( if set.is_empty(IntUsedImpImported) then
        % This is the usual case; optimize it.
        true
    else
        IntUsedImpImportedList = set.to_sorted_list(IntUsedImpImported),
        map.delete_list(IntUsedImpImportedList, !IntUsedMap),
        map.delete_list(IntUsedImpImportedList, !ImpImportedMap)
    ).

    % Report warnings for modules imported using both `:- use_module'
    % and `:- import_module'. Remove the unnecessary `:- use_module'
    % declarations.
    %
:- pred do_warn_if_duplicate_use_import_decls(module_name::in,
    prog_context::in, module_names_contexts::in,
    module_names_contexts::in, module_names_contexts::out,
    list(error_spec)::in, list(error_spec)::out) is det.

do_warn_if_duplicate_use_import_decls(_ModuleName, Context,
        ImportedMap, !UsedMap, !Specs) :-
    map.keys_as_set(ImportedMap, Imported),
    map.keys_as_set(!.UsedMap, Used0),
    set.intersect(Imported, Used0, ImportedAndUsed),
    ( if set.is_empty(ImportedAndUsed) then
        true
    else
        set.to_sorted_list(ImportedAndUsed, ImportedAndUsedList),
        Pieces = [words("Warning:"),
            words(choose_number(ImportedAndUsedList, "module", "modules"))] ++
            component_list_to_pieces("and",
                list.map(wrap_module_name, ImportedAndUsedList)) ++
            [words(choose_number(ImportedAndUsedList, "is", "are")),
            words("imported using both"), decl("import_module"),
            words("and"), decl("use_module"), words("declarations."), nl],
        Spec = conditional_spec($pred, warn_simple_code, yes,
            severity_warning, phase_parse_tree_to_hlds,
            [simplest_msg(Context, Pieces)]),
        !:Specs = [Spec | !.Specs],

        % Treat the modules with both types of import as if they
        % were imported using `:- import_module.'
        map.delete_sorted_list(set.to_sorted_list(ImportedAndUsed), !UsedMap)
    ).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

% XXX ITEM_LIST Document what the grab_module_int* predicates do
% more precisely, and document exactly WHY they do each of their actions.
% I (zs) think it likely that some of the interface files we now read in
% are read in unnecessarily.

%---------------------------------------------------------------------------%

:- pred grab_module_int2_files_and_impls_transitively(globals::in,
    string::in, read_why_int2::in, set(module_name)::in,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int2_files_and_impls_transitively(Globals, Why, ReadWhy2,
        Modules, !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    grab_module_int2_files_transitively(Globals, Why, ReadWhy2,
        Modules, set.init, ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO),
    ( if set.is_empty(ImpIndirectImports) then
        true
    else
        grab_module_int2_files_and_impls_transitively(Globals, Why, ReadWhy2,
            ImpIndirectImports, !HaveReadModuleMaps, !ModuleAndImports, !IO)
    ).

:- pred grab_module_int2_files_transitively(globals::in, string::in,
    read_why_int2::in, set(module_name)::in,
    set(module_name)::in, set(module_name)::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int2_files_transitively(Globals, Why, ReadWhy2,
        Modules, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    grab_module_int2_files(Globals, Why, ReadWhy2, set.to_sorted_list(Modules),
        set.init, IndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO),
    ( if set.is_empty(IndirectImports) then
        true
    else
        grab_module_int2_files_transitively(Globals, Why, ReadWhy2,
            IndirectImports, !ImpIndirectImports,
            !HaveReadModuleMaps, !ModuleAndImports, !IO)
    ).

:- pred grab_module_int3_files_transitively(globals::in, string::in,
    read_why_int3::in, set(module_name)::in,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int3_files_transitively(Globals, Why, ReadWhy3,
        Modules, !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    grab_module_int3_files(Globals, Why, ReadWhy3, set.to_sorted_list(Modules),
        set.init, IndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO),
    ( if set.is_empty(IndirectImports) then
        true
    else
        grab_module_int3_files_transitively(Globals, Why, ReadWhy3,
            IndirectImports, !HaveReadModuleMaps, !ModuleAndImports, !IO)
    ).

:- pred grab_module_int0_files(globals::in, string::in, read_why_int0::in,
    list(module_name)::in,
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int0_files(_Globals, _Why, _ReadWhy0, [],
        !DirectImports, !DirectUses,
        !HaveReadModuleMaps, !ModuleAndImports, !IO).
grab_module_int0_files(Globals, Why, ReadWhy0, [ModuleName | ModuleNames],
        !DirectImports, !DirectUses,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    ( if should_read_interface(!.ModuleAndImports, ModuleName, ifk_int0) then
        maybe_log_augment_decision(Why, ifk_int0, ReadWhy0, ModuleName,
            yes, !IO),
        process_module_int0(Globals, ReadWhy0, ModuleName, ParseTreeInt0,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        map.keys_as_set(ParseTreeInt0 ^ pti0_int_imports, IntImports),
        map.keys_as_set(ParseTreeInt0 ^ pti0_imp_imports, ImpImports),
        map.keys_as_set(ParseTreeInt0 ^ pti0_int_uses, IntUses),
        map.keys_as_set(ParseTreeInt0 ^ pti0_imp_uses, ImpUses),
        set.union(IntImports, !DirectImports),
        set.union(ImpImports, !DirectImports),
        set.union(IntUses, !DirectUses),
        set.union(ImpUses, !DirectUses)
    else
        maybe_log_augment_decision(Why, ifk_int0, ReadWhy0, ModuleName,
            no, !IO)
    ),
    grab_module_int0_files(Globals, Why, ReadWhy0, ModuleNames,
        !DirectImports, !DirectUses,
        !HaveReadModuleMaps, !ModuleAndImports, !IO).

:- pred grab_module_int1_files(globals::in, string::in, read_why_int1::in,
    list(module_name)::in,
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int1_files(_Globals, _Why, _ReadWhy1, [],
        !IntIndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO).
grab_module_int1_files(Globals, Why, ReadWhy1, [ModuleName | ModuleNames],
        !IntIndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    ( if should_read_interface(!.ModuleAndImports, ModuleName, ifk_int1) then
        maybe_log_augment_decision(Why, ifk_int1, ReadWhy1, ModuleName,
            yes, !IO),
        process_module_int1(Globals, ReadWhy1, ModuleName, ParseTreeInt1,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        map.keys_as_set(ParseTreeInt1 ^ pti1_int_uses, IntUses),
        map.keys_as_set(ParseTreeInt1 ^ pti1_imp_uses, ImpUses),
        set.union(IntUses, !IntIndirectImports),
        set.union(ImpUses, !ImpIndirectImports)
    else
        maybe_log_augment_decision(Why, ifk_int1, ReadWhy1, ModuleName,
            no, !IO)
    ),
    grab_module_int1_files(Globals, Why, ReadWhy1, ModuleNames,
        !IntIndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO).

:- pred grab_module_int2_files(globals::in, string::in, read_why_int2::in,
    list(module_name)::in,
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int2_files(_Globals, _Why, _ReadWhy2, [],
        !IntIndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO).
grab_module_int2_files(Globals, Why, ReadWhy2, [ModuleName | ModuleNames],
        !IntIndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    ( if should_read_interface(!.ModuleAndImports, ModuleName, ifk_int2) then
        maybe_log_augment_decision(Why, ifk_int2, ReadWhy2, ModuleName,
            yes, !IO),
        process_module_int2(Globals, ReadWhy2, ModuleName, ParseTreeInt2,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        map.keys_as_set(ParseTreeInt2 ^ pti2_int_uses, IntUses),
        set.union(IntUses, !IntIndirectImports)
    else
        maybe_log_augment_decision(Why, ifk_int2, ReadWhy2, ModuleName,
            no, !IO)
    ),
    grab_module_int2_files(Globals, Why, ReadWhy2, ModuleNames,
        !IntIndirectImports, !ImpIndirectImports,
        !HaveReadModuleMaps, !ModuleAndImports, !IO).

:- pred grab_module_int3_files(globals::in, string::in, read_why_int3::in,
    list(module_name)::in,
    set(module_name)::in, set(module_name)::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

grab_module_int3_files(_Globals, _Why, _ReadWhy3, [],
        !IntIndirectImports, !HaveReadModuleMaps, !ModuleAndImports, !IO).
grab_module_int3_files(Globals, Why, ReadWhy3, [ModuleName | ModuleNames],
        !IntIndirectImports, !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    ( if should_read_interface(!.ModuleAndImports, ModuleName, ifk_int3) then
        maybe_log_augment_decision(Why, ifk_int3, ReadWhy3, ModuleName,
            yes, !IO),
        process_module_int3(Globals, ReadWhy3, ModuleName, ParseTreeInt3,
            !HaveReadModuleMaps, !ModuleAndImports, !IO),
        map.keys_as_set(ParseTreeInt3 ^ pti3_int_imports, Imports),
        set.union(Imports, !IntIndirectImports)
    else
        maybe_log_augment_decision(Why, ifk_int3, ReadWhy3, ModuleName,
            no, !IO)
    ),
    grab_module_int3_files(Globals, Why, ReadWhy3, ModuleNames,
        !IntIndirectImports, !HaveReadModuleMaps, !ModuleAndImports, !IO).

:- pred should_read_interface(module_and_imports::in, module_name::in,
    int_file_kind::in) is semidet.

should_read_interface(ModuleAndImports, ModuleName, FileKind) :-
    module_and_imports_get_grabbed_file_map(ModuleAndImports, GrabbedFileMap),
    ( if map.search(GrabbedFileMap, ModuleName, OldGrabbedFile) then
        OldFileKind = grabbed_file_to_file_kind(OldGrabbedFile),
        ( if compare((<), fk_int(FileKind), OldFileKind) then
            true
        else
            fail
        )
    else
        true
    ).

:- func grabbed_file_to_file_kind(grabbed_file) = file_kind.

grabbed_file_to_file_kind(GrabbedWhy) = FileKind :-
    ( GrabbedWhy = gf_src(_),     FileKind = fk_src
    ; GrabbedWhy = gf_int0(_, _), FileKind = fk_int(ifk_int0)
    ; GrabbedWhy = gf_int1(_, _), FileKind = fk_int(ifk_int1)
    ; GrabbedWhy = gf_int2(_, _), FileKind = fk_int(ifk_int2)
    ; GrabbedWhy = gf_int3(_, _), FileKind = fk_int(ifk_int3)
    ).

%---------------------------------------------------------------------------%

:- pred process_module_int0(globals::in, read_why_int0::in, module_name::in,
    parse_tree_int0::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_int0(Globals, ReadWhy0, ModuleName, ParseTreeInt0,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    module_and_imports_do_we_need_timestamps(!.ModuleAndImports,
        ReturnTimestamp),
    maybe_read_module_int0(Globals, do_search, ModuleName, _FileName,
        ReturnTimestamp, MaybeTimestamp, ParseTreeInt0, Specs, Errors,
        !HaveReadModuleMaps, !IO),
    GrabbedFile = gf_int0(ParseTreeInt0, ReadWhy0),
    module_and_imports_add_grabbed_file(ModuleName, GrabbedFile,
        !ModuleAndImports),
    (
        ReadWhy0 = rwi0_section,
        AncestorIntSpec = ancestor_int0(ParseTreeInt0, ReadWhy0),
        module_and_imports_add_ancestor_int_spec(AncestorIntSpec,
            !ModuleAndImports)
    ;
        ReadWhy0 = rwi0_opt,
        IntForOptSpec = for_opt_int0(ParseTreeInt0, ReadWhy0),
        module_and_imports_add_int_for_opt_spec(IntForOptSpec,
            !ModuleAndImports)
    ),
    module_and_imports_add_ancestor(ModuleName, !ModuleAndImports),
    maybe_record_interface_timestamp(ModuleName, ifk_int0,
        recomp_avail_int_import, MaybeTimestamp, !ModuleAndImports),
    module_and_imports_add_specs_errors(Specs, Errors, !ModuleAndImports),
    module_and_imports_maybe_add_module_version_numbers(ModuleName,
        ParseTreeInt0 ^ pti0_maybe_version_numbers, !ModuleAndImports).

:- pred process_module_int1(globals::in, read_why_int1::in, module_name::in,
    parse_tree_int1::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_int1(Globals, ReadWhy1, ModuleName, ParseTreeInt1,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    module_and_imports_do_we_need_timestamps(!.ModuleAndImports,
        ReturnTimestamp),
    maybe_read_module_int1(Globals, do_search, ModuleName, _FileName,
        ReturnTimestamp, MaybeTimestamp, ParseTreeInt1, Specs, Errors,
        !HaveReadModuleMaps, !IO),
    GrabbedFile = gf_int1(ParseTreeInt1, ReadWhy1),
    module_and_imports_add_grabbed_file(ModuleName, GrabbedFile,
        !ModuleAndImports),
    (
        (
            ReadWhy1 = rwi1_int_import,
            RecompAvail = recomp_avail_int_import
        ;
            ReadWhy1 = rwi1_int_use,
            RecompAvail = recomp_avail_int_use
        ;
            ReadWhy1 = rwi1_imp_import,
            RecompAvail = recomp_avail_imp_import
        ;
            ReadWhy1 = rwi1_imp_use,
            RecompAvail = recomp_avail_imp_use
        ;
            ReadWhy1 = rwi1_int_use_imp_import,
            RecompAvail = recomp_avail_int_use_imp_import
        ),
        DirectIntSpec = direct_int1(ParseTreeInt1, ReadWhy1),
        module_and_imports_add_direct_int_spec(DirectIntSpec,
            !ModuleAndImports),
        % XXX CLEANUP Why record a context if it is never meaningful?
        module_and_imports_add_direct_dep(ModuleName, term.dummy_context_init,
            !ModuleAndImports)
    ;
        ReadWhy1 = rwi1_opt,
        RecompAvail = recomp_avail_imp_use,
        IntForOptSpec = for_opt_int1(ParseTreeInt1, ReadWhy1),
        module_and_imports_add_int_for_opt_spec(IntForOptSpec,
            !ModuleAndImports)
    ),
    maybe_record_interface_timestamp(ModuleName, ifk_int1, RecompAvail,
        MaybeTimestamp, !ModuleAndImports),
    module_and_imports_add_specs_errors(Specs, Errors, !ModuleAndImports),
    module_and_imports_maybe_add_module_version_numbers(ModuleName,
        ParseTreeInt1 ^ pti1_maybe_version_numbers, !ModuleAndImports).

:- pred process_module_int2(globals::in, read_why_int2::in, module_name::in,
    parse_tree_int2::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_int2(Globals, ReadWhy2, ModuleName, ParseTreeInt2,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    module_and_imports_do_we_need_timestamps(!.ModuleAndImports,
        ReturnTimestamp),
    maybe_read_module_int2(Globals, do_search, ModuleName, _FileName,
        ReturnTimestamp, MaybeTimestamp, ParseTreeInt2, Specs, Errors,
        !HaveReadModuleMaps, !IO),
    GrabbedFile = gf_int2(ParseTreeInt2, ReadWhy2),
    module_and_imports_add_grabbed_file(ModuleName, GrabbedFile,
        !ModuleAndImports),
    (
        ( ReadWhy2 = rwi2_int_use
        ; ReadWhy2 = rwi2_imp_use
        ; ReadWhy2 = rwi2_abstract
        ),
        IndirectIntSpec = indirect_int2(ParseTreeInt2, ReadWhy2),
        module_and_imports_add_indirect_int_spec(IndirectIntSpec,
            !ModuleAndImports),
        module_and_imports_add_indirect_dep(ModuleName, !ModuleAndImports)
    ;
        ReadWhy2 = rwi2_opt,
        IntForOptSpec = for_opt_int2(ParseTreeInt2, ReadWhy2),
        module_and_imports_add_int_for_opt_spec(IntForOptSpec,
            !ModuleAndImports)
    ),
    maybe_record_interface_timestamp(ModuleName, ifk_int2,
        recomp_avail_imp_use, MaybeTimestamp, !ModuleAndImports),
    module_and_imports_add_specs_errors(Specs, Errors, !ModuleAndImports),
    module_and_imports_maybe_add_module_version_numbers(ModuleName,
        ParseTreeInt2 ^ pti2_maybe_version_numbers, !ModuleAndImports).

:- pred process_module_int3(globals::in, read_why_int3::in, module_name::in,
    parse_tree_int3::out,
    have_read_module_maps::in, have_read_module_maps::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_int3(Globals, ReadWhy3, ModuleName, ParseTreeInt3,
        !HaveReadModuleMaps, !ModuleAndImports, !IO) :-
    module_and_imports_do_we_need_timestamps(!.ModuleAndImports,
        ReturnTimestamp),
    maybe_read_module_int3(Globals, do_search, ModuleName, _FileName,
        ReturnTimestamp, MaybeTimestamp, ParseTreeInt3, Specs, Errors,
        !HaveReadModuleMaps, !IO),
    GrabbedFile = gf_int3(ParseTreeInt3, ReadWhy3),
    module_and_imports_add_grabbed_file(ModuleName, GrabbedFile,
        !ModuleAndImports),
    (
        (
            ReadWhy3 = rwi3_direct_ancestor_import,
            RecompAvail = recomp_avail_int_import
        ;
            ReadWhy3 = rwi3_direct_int_import,
            RecompAvail = recomp_avail_int_import
        ;
            ReadWhy3 = rwi3_direct_imp_import,
            RecompAvail = recomp_avail_imp_import
        ;
            ReadWhy3 = rwi3_direct_ancestor_use,
            RecompAvail = recomp_avail_int_use
        ;
            ReadWhy3 = rwi3_direct_int_use,
            RecompAvail = recomp_avail_int_use
        ;
            ReadWhy3 = rwi3_direct_imp_use,
            RecompAvail = recomp_avail_imp_use
        ;
            ReadWhy3 = rwi3_direct_int_use_imp_import,
            RecompAvail = recomp_avail_int_use_imp_import
        ),
        DirectIntSpec = direct_int3(ParseTreeInt3, ReadWhy3),
        module_and_imports_add_direct_int_spec(DirectIntSpec,
            !ModuleAndImports),
        % XXX CLEANUP Why record a context if it is never meaningful?
        module_and_imports_add_direct_dep(ModuleName, term.dummy_context_init,
            !ModuleAndImports)
    ;
        (
            ReadWhy3 = rwi3_indirect_int_use,
            RecompAvail = recomp_avail_int_use
        ;
            ReadWhy3 = rwi3_indirect_imp_use,
            RecompAvail = recomp_avail_imp_use
        ),
        IndirectIntSpec = indirect_int3(ParseTreeInt3, ReadWhy3),
        module_and_imports_add_indirect_int_spec(IndirectIntSpec,
            !ModuleAndImports)
    ),
    maybe_record_interface_timestamp(ModuleName, ifk_int3, RecompAvail,
        MaybeTimestamp, !ModuleAndImports),
    module_and_imports_add_specs_errors(Specs, Errors, !ModuleAndImports).

%---------------------------------------------------------------------------%

:- pred maybe_log_augment_decision(string::in, int_file_kind::in, T::in,
    module_name::in, bool::in, io::di, io::uo) is det.
% Inlining calls to this predicate effectively optimizes it away
% if the trace condition is not met, as it usually won't be.
:- pragma inline(maybe_log_augment_decision/7).

maybe_log_augment_decision(Why, IntFileKind, ReadWhy, ModuleName, Read, !IO) :-
    trace [compile_time(flag("log_augment_decisions")),
        runtime(env("LOG_AUGMENT_DECISION")), io(!TIO)]
    (
        ModuleNameStr = sym_name_to_string(ModuleName),
        ExtensionStr = int_file_kind_to_extension(IntFileKind),
        WhyStr = string.string(ReadWhy),
        (
            Read = no,
            ReadStr = "decided not to read"
        ;
            Read = yes,
            ReadStr = "decided to read"
        ),
        io.format("AUGMENT_LOG %s, %s, %s, %s: %s\n",
            [s(Why), s(ModuleNameStr), s(ExtensionStr), s(WhyStr), s(ReadStr)],
            !TIO)
    ).

%---------------------------------------------------------------------------%

:- pred maybe_record_interface_timestamp(module_name::in, int_file_kind::in,
    recomp_avail::in, maybe(timestamp)::in,
    module_and_imports::in, module_and_imports::out) is det.

maybe_record_interface_timestamp(ModuleName, IntFileKind, RecompAvail,
        MaybeTimestamp, !ModuleAndImports) :-
    module_and_imports_get_maybe_timestamp_map(!.ModuleAndImports,
        MaybeTimestampMap),
    (
        MaybeTimestampMap = yes(TimestampMap0),
        (
            MaybeTimestamp = yes(Timestamp),
            FileKind = fk_int(IntFileKind),
            TimestampInfo =
                module_timestamp(FileKind, Timestamp, RecompAvail),
            map.set(ModuleName, TimestampInfo, TimestampMap0, TimestampMap),
            module_and_imports_set_maybe_timestamp_map(yes(TimestampMap),
                !ModuleAndImports)
        ;
            MaybeTimestamp = no
        )
    ;
        MaybeTimestampMap = no
    ).

%---------------------------------------------------------------------------%

    % check_imports_accessibility(AugItemBlocks, ImportedModules, !Specs):
    %
    % By the time we are called, we should have read in all the appropriate
    % interface files, including, for every imported/used module, at least
    % the short interface for that module's parent module, which will contain
    % the `include_module' declarations for any exported submodules
    % of the parent. So the set of accessible submodules can be determined
    % by looking at every include_module declaration in AugItemBlocks.
    %
    % We then go through all of the imported/used modules, looking for
    % (and reporting) two different but related kinds of errors.
    %
    % The first is when we see a reference to module x.y.z, but module
    % x.y does not include a submodule named z.
    %
    % The second is when module m.n has an import_module or use_module
    % declaration for module x.y.z, but there is some ancestor of x.y.z
    % (either x or x.y) that neither m.n nor its ancestor m imports or uses.
    %
    % A general principle we follow here is that we look for and report
    % these errors only for source files, and only when generating code them.
    % We do not expect automatically generated interface and optimization
    % files to be free of these kinds of errors, because if any such errors
    % are present in the source files from which they are generated,
    % those exact errors will be present in the interface and optimization
    % files as well. Reporting such errors when generating the interface
    % or optimization files disrupts the usual edit-compile-fix cycle,
    % because when e.g. generating interface files, the compiler puts
    % any error messages on standard output, not the module's .err file.
    % It is also unnecessary, since the error *will* be caught before
    % an executable can be produced.
    %
    % XXX ITEM_LIST The ImportedModules that our caller gives us
    % will consist of:
    %
    % - the modules imported or used in SrcItemBlocks,
    % - the modules imported or used in the .int3 files of the ancestors
    %   of *this* module, and
    % - any implicit dependencies on standard library modules, including
    %   the private and public builtin modules, the modules implementing
    %   the operations that we replace calls to e.g. io.format with, etc.
    %
    % XXX ITEM_LIST We should either record in an updated AugCompUnit
    % the set of imported modules that are inaccessible, or remove their
    % imports from it, so that
    %
    % - when we report e.g. an undefined type, we don't tell the user that
    %   the module that defines the type hasn't been imported, when in fact
    %   it *was* imported, but the import was disregarded because the module
    %   is inaccessible due to the missing import of an ancestor; and
    %
    % - we don't generate "unused module" warnings for them when
    %   --warn-unused-imports is enabled.
    %
:- pred check_imports_accessibility(aug_compilation_unit::in,
    set(module_name)::in, list(error_spec)::in, list(error_spec)::out) is det.

check_imports_accessibility(AugCompUnit, _ImportedModules, !Specs) :-
    AugCompUnit = aug_compilation_unit(ModuleName, ModuleNameContext,
        _ModuleVersionNumbers, ParseTreeModuleSrc, AncestorIntSpecs,
        DirectIntSpecs, IndirectIntSpecs,
        PlainOpts, TransOpts, IntForOptSpecs),
    record_includes_imports_uses(ModuleName, ParseTreeModuleSrc,
        AncestorIntSpecs, DirectIntSpecs, IndirectIntSpecs,
        PlainOpts, TransOpts, IntForOptSpecs, ReadModules, InclMap,
        SrcIntImportUseMap, SrcImpImportUseMap, AncestorImportUseMap),

    % The current module is not an import, but this is the obvious place
    % to check whether its purported parent module (if any) actually
    % includes it.
    report_any_missing_includes(ReadModules, InclMap,
        ModuleName, [ModuleNameContext], !Specs),
    map.foldl(report_any_missing_includes_for_imports(ReadModules, InclMap),
        SrcIntImportUseMap, !Specs),
    map.foldl(report_any_missing_includes_for_imports(ReadModules, InclMap),
        SrcImpImportUseMap, !Specs),

    % When checking whether avail declarations (i.e. import_module
    % and use_module declarations) in the interface section
    % have an accessible avail declaration for their ancestor modules,
    % the places where those declarations may occur include not just
    % the interface of the module itself, but also the contents of
    % the .int0 interface files of ancestor modules.
    map.union(append_one_or_more, SrcIntImportUseMap, AncestorImportUseMap,
        SrcIntAncImportUseMap),
    map.foldl(
        find_any_missing_ancestor_imports(ModuleName, poa_parent,
            SrcIntAncImportUseMap),
        SrcIntImportUseMap, map.init, SrcIntMissingAncestorMap),

    % When checking whether avail declarations in the implementation section
    % have an accessible avail declaration for their ancestor modules,
    % the places where those declarations may occur include not just
    % the implementation section of the module itself, but also every place
    % that the interface of the module has access to.
    map.union(append_one_or_more, SrcIntAncImportUseMap, SrcImpImportUseMap,
        SrcIntImpImportUseMap),
    map.foldl(
        find_any_missing_ancestor_imports(ModuleName, poa_parent,
            SrcIntImpImportUseMap),
        SrcImpImportUseMap, map.init, SrcImpMissingAncestorMap0),

    % If we generate a message about a missing import (or use) for a module
    % in the interface section, do not generate another message for it
    % also missing in the implementation section, because adding an
    % import_module or use_module declaration for it to the interface
    % will also cure the problem in the implementation section.
    map.keys(SrcIntMissingAncestorMap, SrcIntMissingAncestors),
    map.delete_list(SrcIntMissingAncestors,
        SrcImpMissingAncestorMap0, SrcImpMissingAncestorMap),

    map.foldl(
        report_missing_ancestor(ModuleName,
            missing_in_src_int(SrcImpImportUseMap)),
        SrcIntMissingAncestorMap, !Specs),
    map.foldl(
        report_missing_ancestor(ModuleName, missing_in_src_imp),
        SrcImpMissingAncestorMap, !Specs).

:- pred append_one_or_more(one_or_more(T)::in, one_or_more(T)::in,
    one_or_more(T)::out) is det.

append_one_or_more(A, B, AB) :-
    A = one_or_more(HeadA, TailA),
    B = one_or_more(HeadB, TailB),
    AB = one_or_more(HeadA, TailA ++ [HeadB | TailB]).

%---------------------%
%
% The module_inclusion_map and module_import_or_use_map are computed by
% record_includes_imports_uses, for use by find_any_missing_ancestor_imports.
% For their documentation, see those predicates below.
%

:- type maybe_abstract_section
    --->    non_abstract_section
    ;       abstract_section.

:- type include_context
    --->    include_context(maybe_abstract_section, term.context).

:- type module_inclusion_map ==
    map(module_name, one_or_more(include_context)).

:- type import_or_use_context
    --->    import_or_use_context(import_or_use, term.context).

:- type module_import_or_use_map ==
    map(module_name, one_or_more(import_or_use_context)).

    % record_includes_imports_uses(ModuleName, SrcItemBlocks, IntItemBlocks,
    %   OptItemBlocks, IntForOptItemBlocks, ReadModules, InclMap,
    %   SrcIntImportUseMap, SrcImpImportUseMap, AncestorImportUseMap):
    %
    % Scan all the given item blocks from the compilation unit of ModuleName,
    % computing several outputs.
    %
    % - ReadModules will be the set of module names from whose files
    %   (source files, interface files, optimization files) the item blocks
    %   originate.
    % - InclMap will map the name of each module that is named in an
    %   include_module declaration in any item block to the context
    %   of that declaration.
    % - SrcIntImportUseMap will map the module names that occur in
    %   import_module or use_module declarations in the interface sections
    %   of the source file of ModuleName itself to the context(s)
    %   of those declarations.
    % - SrcImpImportUseMap is the same, but for the implementation section.
    % - AncestorImportUseMap is the same, but for import_module and use_module
    %   declarations read from (the .int0 interface files of) the ancestors
    %   of ModuleName.
    %
    % NOTE By making the value in both the module_inclusion_map and the
    % module_import_or_use_map a (nonempty) list, we can represent situations
    % in which a module includes, imports or uses another module
    % more than once. This is an error, and we could and probably should
    % diagnose it here, but doing so would require disabling the code
    % we have elsewhere in the compiler that does that job. If we did that,
    % we could replace the nonempty lists of contexts with just one context,
    % and a message for every other context.
    %
    % XXX ITEM_LIST We could store the results of this call in both raw and
    % augmented compilation units. (The raw version would of course be computed
    % from raw_item_blocks.)
    %
:- pred record_includes_imports_uses(module_name::in,
    parse_tree_module_src::in, map(module_name, ancestor_int_spec)::in,
    map(module_name, direct_int_spec)::in,
    map(module_name, indirect_int_spec)::in,
    map(module_name, parse_tree_plain_opt)::in,
    map(module_name, parse_tree_trans_opt)::in,
    map(module_name, int_for_opt_spec)::in,
    set(module_name)::out, module_inclusion_map::out,
    module_import_or_use_map::out, module_import_or_use_map::out,
    module_import_or_use_map::out) is det.

record_includes_imports_uses(ModuleName, ParseTreeModuleSrc,
        AncestorIntSpecs, DirectIntSpecs, IndirectIntSpecs,
        PlainOpts, _TransOpts, IntForOptSpecs,
        !:ReadModules, !:InclMap,
        !:SrcIntImportUseMap, !:SrcImpImportUseMap, !:AncestorImportUseMap) :-
    set.init(!:ReadModules),
    map.init(!:InclMap),
    map.init(!:SrcIntImportUseMap),
    map.init(!:SrcImpImportUseMap),
    map.init(!:AncestorImportUseMap),
    Ancestors = get_ancestors_set(ModuleName),
    record_includes_imports_uses_in_parse_tree_module_src(ParseTreeModuleSrc,
        !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap),
    map.foldl5_values(
        record_includes_imports_uses_in_ancestor_int_spec(Ancestors),
        AncestorIntSpecs, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap),
    map.foldl5_values(
        record_includes_imports_uses_in_direct_int_spec(Ancestors),
        DirectIntSpecs, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap),
    map.foldl5_values(
        record_includes_imports_uses_in_indirect_int_spec(Ancestors),
        IndirectIntSpecs, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap),
    map.foldl5_values(
        record_includes_imports_uses_in_parse_tree_plain_opt(Ancestors),
        PlainOpts, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap),
    % .trans_opt files may contain no include_module, import_module
    % or use_module declarations, so there is nothing to record for them.
    map.foldl5_values(
        record_includes_imports_uses_in_int_for_opt_spec(Ancestors),
        IntForOptSpecs, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap).

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_parse_tree_module_src(
    parse_tree_module_src::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_parse_tree_module_src(ParseTreeModuleSrc,
        !ReadModules, !MaybeAbstractInclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    % XXX CLEANUP can we use InclMap and/or _ImportUseMap to avoid doing
    % some of the work below? Note that _ImportUseMap includes implicit
    % avails, while {Int,Imp}{Import,Use}Map do not.
    ParseTreeModuleSrc = parse_tree_module_src(ModuleName, _,
        _IntInclMap, _ImpInclMap, InclMap,
        IntImportMap, IntUseMap, ImpImportMap, ImpUseMap, _ImportUseMap,
        _, _, _,
        _, _, _, _, _, _, _, _, _, _, _, _, _,
        _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _),
    set.insert(ModuleName, !ReadModules),
    include_map_to_item_includes(InclMap, IntIncls, ImpIncls),
    AllIncls = IntIncls ++ ImpIncls,
    record_includes_acc(non_abstract_section, AllIncls, !MaybeAbstractInclMap),
    map.foldl(acc_avails_with_contexts(import_decl),
        IntImportMap, [], RevIntImportAvails),
    map.foldl(acc_avails_with_contexts(use_decl),
        IntUseMap, [], RevIntUseAvails),
    map.foldl(acc_avails_with_contexts(import_decl),
        ImpImportMap, [], RevImpImportAvails),
    map.foldl(acc_avails_with_contexts(use_decl),
        ImpUseMap, [], RevImpUseAvails),
    recomp_avails_acc(RevIntImportAvails, !SrcIntImportUseMap),
    recomp_avails_acc(RevIntUseAvails,    !SrcIntImportUseMap),
    recomp_avails_acc(RevImpImportAvails, !SrcImpImportUseMap),
    recomp_avails_acc(RevImpUseAvails,    !SrcImpImportUseMap).

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_ancestor_int_spec(set(module_name)::in,
    ancestor_int_spec::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_ancestor_int_spec(Ancestors,
        AncestorSpec, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    AncestorSpec = ancestor_int0(ParseTreeInt0, ReadWhyInt0),
    record_includes_imports_uses_in_parse_tree_int0(Ancestors,
        ParseTreeInt0, ReadWhyInt0, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap).

:- pred record_includes_imports_uses_in_direct_int_spec(set(module_name)::in,
    direct_int_spec::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_direct_int_spec(Ancestors,
        DirectSpec, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    (
        DirectSpec = direct_int1(ParseTreeInt1, ReadWhyInt1),
        record_includes_imports_uses_in_parse_tree_int1(Ancestors,
            ParseTreeInt1, ReadWhyInt1, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ;
        DirectSpec = direct_int3(ParseTreeInt3, ReadWhyInt3),
        record_includes_imports_uses_in_parse_tree_int3(Ancestors,
            ParseTreeInt3, ReadWhyInt3, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ).

:- pred record_includes_imports_uses_in_indirect_int_spec(set(module_name)::in,
    indirect_int_spec::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_indirect_int_spec(Ancestors,
        IndirectSpec, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    (
        IndirectSpec = indirect_int2(ParseTreeInt2, ReadWhyInt2),
        record_includes_imports_uses_in_parse_tree_int2(Ancestors,
            ParseTreeInt2, ReadWhyInt2, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ;
        IndirectSpec = indirect_int3(ParseTreeInt3, ReadWhyInt3),
        record_includes_imports_uses_in_parse_tree_int3(Ancestors,
            ParseTreeInt3, ReadWhyInt3, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ).

:- pred record_includes_imports_uses_in_int_for_opt_spec(set(module_name)::in,
    int_for_opt_spec::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_int_for_opt_spec(Ancestors,
        IntForOptSpec, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    (
        IntForOptSpec = for_opt_int0(ParseTreeInt0, ReadWhyInt0),
        record_includes_imports_uses_in_parse_tree_int0(Ancestors,
            ParseTreeInt0, ReadWhyInt0, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ;
        IntForOptSpec = for_opt_int1(ParseTreeInt1, ReadWhyInt1),
        record_includes_imports_uses_in_parse_tree_int1(Ancestors,
            ParseTreeInt1, ReadWhyInt1, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ;
        IntForOptSpec = for_opt_int2(ParseTreeInt2, ReadWhyInt2),
        record_includes_imports_uses_in_parse_tree_int2(Ancestors,
            ParseTreeInt2, ReadWhyInt2, !ReadModules, !InclMap,
            !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap)
    ).

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_parse_tree_int0(set(module_name)::in,
    parse_tree_int0::in, read_why_int0::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_parse_tree_int0(Ancestors,
        ParseTreeInt0, _ReadWhyInt0, !ReadModules, !MaybeAbstractInclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    ParseTreeInt0 = parse_tree_int0(ModuleName, _, _,
        _IntInclMap, _ImpInclMap, InclMap,
        _IntImportMap, _IntUseMap, _ImpImportMap, _ImpUseMap, ImportUseMap,
        _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _),
    set.insert(ModuleName, !ReadModules),
    include_map_to_item_includes(InclMap, IntIncls, ImpIncls),
    AllIncls = IntIncls ++ ImpIncls,
    % Both possible values of ReadWhyInt0 call for treating the file contents
    % as non-abstract.
    record_includes_acc(non_abstract_section, AllIncls, !MaybeAbstractInclMap),
    ( if set.contains(Ancestors, ModuleName) then
        % XXX CLEANUP This work could be done on ImportUseMap,
        % *without* constructing AllAvails.
        import_and_or_use_map_to_item_avails(do_not_include_implicit,
            ImportUseMap, IntAvails, ImpAvails),
        AllAvails = IntAvails ++ ImpAvails,
        recomp_avails_acc(AllAvails, !AncestorImportUseMap)
    else
        true
    ).

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_parse_tree_int1(set(module_name)::in,
    parse_tree_int1::in, read_why_int1::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_parse_tree_int1(Ancestors,
        ParseTreeInt1, ReadWhyInt1, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    ParseTreeInt1 = parse_tree_int1(ModuleName, _, _,
        IntInclMap, ImpInclMap, _InclMap, _, _, _,
        _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _),
    set.insert(ModuleName, !ReadModules),
    % All possible values of ReadWhyInt1 call for treating
    % the interface as non-abstract.
    % All possible values of ReadWhyInt1 but one call for treating
    % the implementation as abstract.
    IntIncls = module_names_contexts_to_item_includes(IntInclMap),
    ImpIncls = module_names_contexts_to_item_includes(ImpInclMap),
    (
        ( ReadWhyInt1 = rwi1_int_import
        ; ReadWhyInt1 = rwi1_imp_import
        ; ReadWhyInt1 = rwi1_int_use
        ; ReadWhyInt1 = rwi1_imp_use
        ; ReadWhyInt1 = rwi1_int_use_imp_import
        ),
        record_includes_acc(non_abstract_section, IntIncls, !InclMap),
        record_includes_acc(abstract_section, ImpIncls, !InclMap)
    ;
        ReadWhyInt1 = rwi1_opt,
        record_includes_acc(non_abstract_section, IntIncls, !InclMap),
        record_includes_acc(non_abstract_section, ImpIncls, !InclMap)
    ),
    expect_not(set.contains(Ancestors, ModuleName), $pred,
        "processing the .int file of an ancestor").

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_parse_tree_int2(set(module_name)::in,
    parse_tree_int2::in, read_why_int2::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_parse_tree_int2(Ancestors,
        ParseTreeInt2, ReadWhyInt2, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    ParseTreeInt2 = parse_tree_int2(ModuleName, _, _,
        IntInclMap, _ParseTreeInclMap, _, _, _, _, _, _, _, _, _, _, _),
    set.insert(ModuleName, !ReadModules),
    IntIncls = module_names_contexts_to_item_includes(IntInclMap),
    (
        ( ReadWhyInt2 = rwi2_int_use
        ; ReadWhyInt2 = rwi2_imp_use
        ; ReadWhyInt2 = rwi2_opt
        ),
        record_includes_acc(non_abstract_section, IntIncls, !InclMap)
    ;
        ReadWhyInt2 = rwi2_abstract,
        record_includes_acc(abstract_section, IntIncls, !InclMap)
    ),
    expect_not(set.contains(Ancestors, ModuleName), $pred,
        "processing the .int2 file of an ancestor").

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_parse_tree_int3(set(module_name)::in,
    parse_tree_int3::in, read_why_int3::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_parse_tree_int3(Ancestors,
        ParseTreeInt3, _ReadWhyInt3, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    ParseTreeInt3 = parse_tree_int3(ModuleName, _,
        _IntInclMap, ParseTreeInclMap, _, _, _, _, _, _, _, _),
    set.insert(ModuleName, !ReadModules),
    include_map_to_item_includes(ParseTreeInclMap, IntIncls, ImpIncls),
    expect(unify(ImpIncls, []), $pred, "ImpIncls != []"),
    % All possible values of ReadWhyInt3 call for treating the file's
    % interface as non-abstract.
    record_includes_acc(non_abstract_section, IntIncls, !InclMap),
    expect_not(set.contains(Ancestors, ModuleName), $pred,
        "processing the .int2 file of an ancestor").

%---------------------------------------------------------------------------%

:- pred record_includes_imports_uses_in_parse_tree_plain_opt(
    set(module_name)::in, parse_tree_plain_opt::in,
    set(module_name)::in, set(module_name)::out,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_parse_tree_plain_opt(Ancestors,
        ParseTreePlainOpt, !ReadModules, !InclMap,
        !SrcIntImportUseMap, !SrcImpImportUseMap, !AncestorImportUseMap) :-
    ParseTreePlainOpt = parse_tree_plain_opt(ModuleName, _, UseMap,
        _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _, _),
    ( if set.contains(Ancestors, ModuleName) then
        Avails = use_map_to_item_avails(UseMap),
        recomp_avails_acc(Avails, !AncestorImportUseMap)
    else
        true
    ).

%---------------------------------------------------------------------------%

:- pred record_includes_acc(maybe_abstract_section::in, list(item_include)::in,
    module_inclusion_map::in, module_inclusion_map::out) is det.

record_includes_acc(_, [], !InclMap).
record_includes_acc(Section, [Include | Includes], !InclMap) :-
    Include = item_include(ModuleName, Context, _SeqNum),
    IncludeContext = include_context(Section, Context),
    ( if map.search(!.InclMap, ModuleName, OneOrMore0) then
        OneOrMore0 = one_or_more(HeadContext, TailContexts),
        OneOrMore = one_or_more(IncludeContext, [HeadContext | TailContexts]),
        map.det_update(ModuleName, OneOrMore, !InclMap)
    else
        OneOrMore = one_or_more(IncludeContext, []),
        map.det_insert(ModuleName, OneOrMore, !InclMap)
    ),
    record_includes_acc(Section, Includes, !InclMap).

:- pred recomp_avails_acc(list(item_avail)::in,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

recomp_avails_acc([], !ImportUseMap).
recomp_avails_acc([Avail | Avails], !ImportUseMap) :-
    (
        Avail = avail_import(avail_import_info(ModuleName, Context, _SeqNum)),
        ImportOrUse = import_decl
    ;
        Avail = avail_use(avail_use_info(ModuleName, Context, _SeqNum)),
        ImportOrUse = use_decl
    ),
    IoUC = import_or_use_context(ImportOrUse, Context),
    ( if map.search(!.ImportUseMap, ModuleName, OneOrMore0) then
        OneOrMore0 = one_or_more(HeadIoUC, TailIoUCs),
        OneOrMore = one_or_more(IoUC, [HeadIoUC | TailIoUCs]),
        map.det_update(ModuleName, OneOrMore, !ImportUseMap)
    else
        OneOrMore = one_or_more(IoUC, []),
        map.det_insert(ModuleName, OneOrMore, !ImportUseMap)
    ),
    recomp_avails_acc(Avails, !ImportUseMap).

%---------------------%

:- type parent_or_ancestor
    --->    poa_parent
    ;       poa_ancestor.

:- type import_and_or_use
    --->    import_only
    ;       use_only
    ;       import_and_use.

:- type missing_ancestor_info
    --->    missing_ancestor_info(
                mai_modules         :: set(module_name),
                mai_max_depth       :: parent_or_ancestor,
                mai_import_use      :: import_and_or_use,
                mai_least_context   :: term.context
            ).

:- type missing_ancestor_map == map(module_name, missing_ancestor_info).

    % find_any_missing_ancestor_imports(CurrentModule, ParentOrAncestor,
    %   ImportUseMap, ImportedModule, IoUCs, !MissingAncestorMap):
    %
    % If there are any ancestors of ImportedModule for which there is
    % neither an explicit import_module or use_module declaration in
    % ImportUseMap, nor an implicit declaration by virtue of that ancestor
    % module being an ancestor of CurrentModule as well, then record
    % the fact that we are missing an import or use of that ancestor.
    %
    % We don't generate an error message right here, so that if several
    % imported modules are missing the same ancestor, we can generate
    % just one message for that missing ancestor.
    %
    % The other inputs allow us to record information that will make
    % the eventual error message more informative.
    %
:- pred find_any_missing_ancestor_imports(module_name::in,
    parent_or_ancestor::in, module_import_or_use_map::in,
    module_name::in, one_or_more(import_or_use_context)::in,
    missing_ancestor_map::in, missing_ancestor_map::out) is det.

find_any_missing_ancestor_imports(CurrentModule, ParentOrAncestor,
        ImportUseMap, ImportedModule, IoUCs, !MissingAncestorMap) :-
    (
        ImportedModule = qualified(ParentModule, _SubModule),
        ( if
            (
                % Does CurrentModule import ParentModule explicitly?
                map.search(ImportUseMap, ParentModule, _ParentIoUCs)
            ;
                % Is ParentModule the same as CurrentModule, or a parent
                % or an ancestor of CurrentModule? If yes, then CurrentModule
                % imports it implicitly.
                is_submodule(CurrentModule, ParentModule)
            )
        then
            true
        else
            IoUCs = one_or_more(HeadIoUC, TailIoUCs),
            ( if
                map.search(!.MissingAncestorMap, ParentModule,
                    MissingAncestorInfo0)
            then
                MissingAncestorInfo0 = missing_ancestor_info(ChildModules0,
                    PoA0, ImportAndOrUse0, LeastContext0),
                set.insert(ImportedModule, ChildModules0, ChildModules),
                ( if
                    PoA0 = poa_parent,
                    ParentOrAncestor = poa_ancestor
                then
                    PoA = poa_ancestor
                else
                    PoA = PoA0
                ),
                update_iu_and_least_context(HeadIoUC,
                    ImportAndOrUse0, ImportAndOrUse1,
                    LeastContext0, LeastContext1),
                list.foldl2(update_iu_and_least_context, TailIoUCs,
                    ImportAndOrUse1, ImportAndOrUse,
                    LeastContext1, LeastContext),
                MissingAncestorInfo = missing_ancestor_info(ChildModules,
                    PoA, ImportAndOrUse, LeastContext),
                map.det_update(ParentModule, MissingAncestorInfo,
                    !MissingAncestorMap)
            else
                ChildModules = set.make_singleton_set(ImportedModule),
                HeadIoUC = import_or_use_context(HeadImportOrUse, HeadContext),
                (
                    HeadImportOrUse = import_decl,
                    ImportAndOrUse0 = import_only
                ;
                    HeadImportOrUse = use_decl,
                    ImportAndOrUse0 = use_only
                ),
                list.foldl2(update_iu_and_least_context, TailIoUCs,
                    ImportAndOrUse0, ImportAndOrUse,
                    HeadContext, LeastContext),
                MissingAncestorInfo = missing_ancestor_info(ChildModules,
                    ParentOrAncestor, ImportAndOrUse, LeastContext),
                map.det_insert(ParentModule, MissingAncestorInfo,
                    !MissingAncestorMap),
                find_any_missing_ancestor_imports(CurrentModule, poa_ancestor,
                    ImportUseMap, ParentModule, IoUCs, !MissingAncestorMap)
            )
        )
    ;
        ImportedModule = unqualified(_)
        % For modules without parent modules, accessibility is moot.
    ).

:- pred update_iu_and_least_context(import_or_use_context::in,
    import_and_or_use::in, import_and_or_use::out,
    term.context::in, term.context::out) is det.

update_iu_and_least_context(IoUC, !ImportAndOrUse, !LeastContext) :-
    IoUC = import_or_use_context(ImportOrUse, Context),
    (
        ImportOrUse = import_decl,
        (
            !.ImportAndOrUse = import_only
        ;
            ( !.ImportAndOrUse = use_only
            ; !.ImportAndOrUse = import_and_use
            ),
            !:ImportAndOrUse = import_and_use
        )
    ;
        ImportOrUse = use_decl,
        (
            !.ImportAndOrUse = use_only
        ;
            ( !.ImportAndOrUse = import_only
            ; !.ImportAndOrUse = import_and_use
            ),
            !:ImportAndOrUse = import_and_use
        )
    ),
    ( if
        compare((<), Context, !.LeastContext),
        not is_dummy_context(Context)
    then
        !:LeastContext = Context
    else
        true
    ).

:- type missing_where
    --->    missing_in_src_int(module_import_or_use_map)
    ;       missing_in_src_imp
    ;       missing_in_non_src.

:- pred report_missing_ancestor(module_name::in,
    missing_where::in, module_name::in, missing_ancestor_info::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_missing_ancestor(ModuleName, MissingWhere,
        MissingModuleName, SrcIntInfo, !Specs) :-
    SrcIntInfo = missing_ancestor_info(DescendantModuleNamesSet, MaxDepth,
        ImportAndOrUse, LeastContext),
    set.to_sorted_list(DescendantModuleNamesSet, DescendantModuleNames),
    ( MaxDepth = poa_parent, ChildOrDescendant = "child"
    ; MaxDepth = poa_ancestor, ChildOrDescendant = "descendant"
    ),
    (
        ImportAndOrUse = import_only,
        DeclPieces = [decl("import_module")]
    ;
        ImportAndOrUse = use_only,
        DeclPieces = [decl("use_module")]
    ;
        ImportAndOrUse = import_and_use,
        DeclPieces = [decl("import_module"), words("and"), decl("use_module")]
    ),
    (
        MissingWhere = missing_in_src_int(_),
        InTheInterface = [words("in the interface")]
    ;
        ( MissingWhere = missing_in_src_imp
        ; MissingWhere = missing_in_non_src
        ),
        InTheInterface = []
    ),
    DescendantPieces = list.map(wrap_module_name, DescendantModuleNames),
    ModuleS = choose_number(DescendantModuleNames, "module", "modules"),
    DeclarationS = choose_number(DescendantModuleNames,
        "declaration", "declarations"),
    MainPieces = [words("In module"), qual_sym_name(ModuleName),
        suffix(":"), words("error:"), nl,
        words("the absence of an"), decl("import_module"), words("or"),
        decl("use_module"), words("declaration for"),
        qual_sym_name(MissingModuleName)] ++ InTheInterface ++
        [words("prevents access to the")] ++
        DeclPieces ++ [words(DeclarationS)] ++ InTheInterface ++
        [words("for its"), words(ChildOrDescendant), words(ModuleS)] ++
        component_list_to_pieces("and", DescendantPieces) ++
        [suffix("."), nl],
    MainMsg = simplest_msg(LeastContext, MainPieces),
    ( if
        MissingWhere = missing_in_src_int(SrcImpImportUseMap),
        map.search(SrcImpImportUseMap, MissingModuleName, IoUCs)
    then
        % XXX _TailIoUCs
        IoUCs = one_or_more(HeadIoUC, _TailIoUCs),
        HeadIoUC = import_or_use_context(ImportOrUse, ImpContext),
        ( ImportOrUse = import_decl, ImportOrUseDecl = "import_module"
        ; ImportOrUse = use_decl, ImportOrUseDecl = "use_module"
        ),
        ImpPieces = [words("Adding such a declaration would obsolete"),
            words("this"), decl(ImportOrUseDecl), words("declaration"),
            words("in the implementation section."), nl],
        ImpMsg = simplest_msg(ImpContext, ImpPieces),
        Msgs = [MainMsg, ImpMsg]
    else
        Msgs = [MainMsg]
    ),
    Spec = error_spec($pred, severity_error, phase_parse_tree_to_hlds, Msgs),
    !:Specs = [Spec | !.Specs].

:- func wrap_module_name(sym_name) = format_component.

wrap_module_name(Module) = qual_sym_name(Module).

%---------------------%

:- pred report_any_missing_includes_for_imports(set(module_name)::in,
    module_inclusion_map::in,
    module_name::in, one_or_more(import_or_use_context)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_any_missing_includes_for_imports(ReadModules, InclMap,
        ModuleName, IoUCs, !Specs) :-
    IoUCs = one_or_more(HeadIoUC, TailIoUCs),
    Contexts = list.map(project_out_import_or_use, [HeadIoUC | TailIoUCs]),
    report_any_missing_includes(ReadModules, InclMap,
        ModuleName, Contexts, !Specs).

    % report_any_missing_includes(ReadModules, InclMap, Module, Contexts,
    %   !Specs):
    %
    % If Module is a submodule of ParentModule but we haven't seen
    % an include_module declaration for Module in ParentModule even though
    % we should have seen it is exists (because we have read an interface
    % file for ParentModule, which should contain all its include_module
    % declarations), then add an error message reporting this fact to !Specs.
    %
:- pred report_any_missing_includes(set(module_name)::in,
    module_inclusion_map::in, module_name::in, list(term.context)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_any_missing_includes(ReadModules, InclMap, Module, Contexts, !Specs) :-
    (
        Module = qualified(ParentModule, SubModule),
        ( if map.search(InclMap, Module, IncludeContexts) then
            % Module *has* its include in ParentModule, ...
            IncludeContexts =
                one_or_more(HeadIncludeContext, TailIncludeContexts),
            IncludeContextsList = [HeadIncludeContext | TailIncludeContexts],
            ( if any_true(is_non_abstract_include, IncludeContextsList) then
                % ... and it is visible here.
                true
            else
                % ... and it is NOT visible here.
                list.foldl(report_abstract_include(ParentModule, SubModule),
                    Contexts, !Specs)
            )
        else
            % We have not seen Module's include in ParentModule.
            ( if set.contains(ReadModules, ParentModule) then
                % We have read item blocks from ParentModule, and they
                % *should* have included its include_module declarations.
                list.foldl(report_missing_include(ParentModule, SubModule),
                    Contexts, !Specs)
            else
                % We have read not any item blocks from ParentModule.
                % For all we know, ParentModule *may* contain an include
                % for Module; we just don't know. Reporting an error
                % would be misleading.
                %
                % If we had imported ParentModule, we would have read
                % item blocks from one of its interface files. We will
                % report the missing import. If the include is truly missing
                % in ParentModule, we will discover and report that fact
                % when the missing import of ParentModule in the *current*
                % module is fixed by the programmer.
                true
            )
        ),
        report_any_missing_includes(ReadModules, InclMap,
            ParentModule, Contexts, !Specs)
    ;
        Module = unqualified(_)
        % For modules without parent modules, accessibility is moot.
    ).

:- pred report_abstract_include(module_name::in, string::in, term.context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_abstract_include(ParentModule, SubModule, Context, !Specs) :-
    Pieces = [words("Error:"),
        words("module"), qual_sym_name(ParentModule),
        words("has a submodule named"), quote(SubModule), suffix(","),
        words("but it is visible only to its other submodules."), nl],
    Spec = simplest_spec($pred, severity_error, phase_parse_tree_to_hlds,
        Context, Pieces),
    !:Specs = [Spec | !.Specs].

:- pred report_missing_include(module_name::in, string::in, term.context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

report_missing_include(ParentModule, SubModule, Context, !Specs) :-
    Pieces = [words("Error:"),
        words("module"), qual_sym_name(ParentModule),
        words("does not have a submodule named"), quote(SubModule),
        suffix("."), nl],
    Spec = simplest_spec($pred, severity_error, phase_parse_tree_to_hlds,
        Context, Pieces),
    !:Specs = [Spec | !.Specs].

:- pred is_non_abstract_include(include_context::in) is semidet.

is_non_abstract_include(IncludeContext) :-
    IncludeContext = include_context(MaybeAbstractInclude, _Context),
    MaybeAbstractInclude = non_abstract_section.

:- func project_out_import_or_use(import_or_use_context) = term.context.

project_out_import_or_use(import_or_use_context(_, Context)) = Context.

%---------------------------------------------------------------------------%

grab_plain_opt_and_int_for_opt_files(Globals, FoundError,
        !ModuleAndImports, !HaveReadModuleMaps, !IO) :-
    % Read in the .opt files for imported and ancestor modules.
    module_and_imports_get_module_name(!.ModuleAndImports, ModuleName),
    module_and_imports_get_ancestors(!.ModuleAndImports, Ancestors0),
    module_and_imports_get_int_deps_set(!.ModuleAndImports, IntDeps0),
    module_and_imports_get_imp_deps_set(!.ModuleAndImports, ImpDeps0),
    OptModules = set.union_list([Ancestors0, IntDeps0, ImpDeps0]),
    globals.lookup_bool_option(Globals, very_verbose, VeryVerbose),
    globals.lookup_bool_option(Globals, read_opt_files_transitively,
        ReadOptFilesTransitively),
    % Do not add to the queue either the modules in the initial queue,
    % or the module being compiled.
    set.insert(ModuleName, OptModules, DontQueueOptModules),
    read_plain_opt_files(Globals, VeryVerbose, ReadOptFilesTransitively,
        set.to_sorted_list(OptModules), DontQueueOptModules,
        cord.empty, ParseTreePlainOptsCord0, set.init, ExplicitDeps,
        cord.empty, ImplicitNeedsCord, [], OptSpecs0, no, OptError0, !IO),
    ParseTreePlainOpts0 = cord.list(ParseTreePlainOptsCord0),

    % Get the :- pragma unused_args(...) declarations created when writing
    % the .opt file for the current module. These are needed because we can
    % probably remove more arguments with intermod_unused_args, but the
    % interface for other modules must remain the same.
    %
    % Similarly for the  :- pragma structure_reuse(...) declarations. With more
    % information available when making the target code than when writing the
    % `.opt' file, it can turn out that a procedure which seemed to have
    % condition reuse actually has none. But we have to maintain the interface
    % for modules that use the conditional reuse information from the `.opt'
    % file.
    globals.lookup_bool_option(Globals, intermod_unused_args, UnusedArgs),
    globals.lookup_bool_option(Globals, structure_reuse_analysis,
        StructureReuse),
    ( if (UnusedArgs = yes ; StructureReuse = yes) then
        read_plain_opt_file(Globals, VeryVerbose, ModuleName, OwnFileName,
            OwnParseTreePlainOpt0, OwnSpecs, OwnError, !IO),
        % XXX We should store the whole parse_tree, with a note next to it
        % saying "keep only these two kinds of pragmas".
        keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt(
            UnusedArgs, StructureReuse,
            OwnParseTreePlainOpt0, OwnParseTreePlainOpt),
        ParseTreePlainOpts = [OwnParseTreePlainOpt | ParseTreePlainOpts0],
        OptSpecs1 = OwnSpecs ++ OptSpecs0,
        update_opt_error_status(Globals, warn_missing_opt_files, OwnFileName,
            OwnSpecs, OwnError, OptSpecs1, OptSpecs2, OptError0, OptError),
        pre_hlds_maybe_write_out_errors(VeryVerbose, Globals,
            OptSpecs2, OptSpecs, !IO)
    else
        ParseTreePlainOpts = ParseTreePlainOpts0,
        OptSpecs = OptSpecs0,
        OptError = OptError0
    ),

    list.foldl(module_and_imports_add_plain_opt, ParseTreePlainOpts,
        !ModuleAndImports),
    module_and_imports_add_specs(OptSpecs, !ModuleAndImports),

    % Read .int0 files required by the `.opt' files, except the ones
    % we have already read as ancestors of ModuleName,
    % XXX This code reads in the .int0 files of the ancestors of *OptModules*,
    % but due to read_opt_files_transitively, ParseTreePlainOpts may contain
    % more the .opt files of modules that are *not* in OptModules.
    % This looks like a bug.
    OptModuleAncestors =
        set.power_union(set.map(get_ancestors_set, OptModules)),
    OldModuleAncestors = get_ancestors_set(ModuleName),
    OptOnlyModuleAncestors =
        set.difference(OptModuleAncestors, OldModuleAncestors),

    grab_module_int0_files(Globals,
        "opt_int0s", rwi0_opt,
        set.to_sorted_list(OptOnlyModuleAncestors),
        set.init, OptAncestorImports, set.init, OptAncestorUses,
        !HaveReadModuleMaps, !ModuleAndImports, !IO),

    % Figure out which .int files are implicitly needed by the .opt files.
    combine_implicit_needs(cord.list(ImplicitNeedsCord), AllImplicitNeeds),
    compute_implicit_avail_needs(Globals, AllImplicitNeeds, ImplicitDeps),
    NewDeps = set.union_list([ExplicitDeps, ImplicitDeps,
        OptAncestorImports, OptAncestorUses]),

    % Read in the .int, and .int2 files needed by the .opt files.
    grab_module_int1_files(Globals,
        "opt_new_deps", rwi1_opt,
        set.to_sorted_list(NewDeps),
        set.init, NewIndirectDeps, set.init, NewImplIndirectDeps,
        !HaveReadModuleMaps, !ModuleAndImports, !IO),
    grab_module_int2_files_and_impls_transitively(Globals,
        "opt_new_indirect_deps", rwi2_opt,
        set.union(NewIndirectDeps, NewImplIndirectDeps),
        !HaveReadModuleMaps, !ModuleAndImports, !IO),

    % Figure out whether anything went wrong.
    % XXX We should try to put all the relevant error indications into
    % !ModuleAndImports, and let our caller figure out what to do with them.
    module_and_imports_get_errors(!.ModuleAndImports, ModuleErrors),
    ( if
        ( set.is_non_empty(ModuleErrors)
        ; OptError = yes
        )
    then
        FoundError = yes
    else
        FoundError = no
    ).

:- pred keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt(
    bool::in, bool::in,
    parse_tree_plain_opt::in, parse_tree_plain_opt::out) is det.

keep_only_unused_and_reuse_pragmas_in_parse_tree_plain_opt(
        KeepUnusedArgs, KeepReuses, ParseTreePlainOpt0, ParseTreePlainOpt) :-
    ParseTreePlainOpt0 = parse_tree_plain_opt(ModuleName, ModuleNameContext,
        _UsedModuleNames, _FIMSpecs, _TypeDefns, _ForeignEnums,
        _InstDefns, _ModeDefns, _TypeClasses, _Instances,
        _PredDecls, _ModeDecls, _Clauses, _ForeignProcs, _Promises,
        _MarkerPragmas, _TypeSpecs, UnusedArgs0, _TermInfos, _Term2Infos,
        _Exceptions, _Trailings, _MMTablings, _Sharings, Reuses0),
    (
        KeepUnusedArgs = yes,
        UnusedArgs = UnusedArgs0
    ;
        KeepUnusedArgs = no,
        UnusedArgs = []
    ),
    (
        KeepReuses = yes,
        Reuses = Reuses0
    ;
        KeepReuses = no,
        Reuses = []
    ),
    ParseTreePlainOpt = parse_tree_plain_opt(ModuleName, ModuleNameContext,
        map.init, set.init, [], [], [], [], [], [], [], [], [], [], [],
        [], [], UnusedArgs, [], [], [], [], [], [], Reuses).

:- pred read_plain_opt_files(globals::in, bool::in, bool::in,
    list(module_name)::in, set(module_name)::in,
    cord(parse_tree_plain_opt)::in, cord(parse_tree_plain_opt)::out,
    set(module_name)::in, set(module_name)::out,
    cord(implicit_avail_needs)::in, cord(implicit_avail_needs)::out,
    list(error_spec)::in, list(error_spec)::out,
    bool::in, bool::out, io::di, io::uo) is det.

read_plain_opt_files(_, _, _, [], _,
        !ParseTreePlainOptsCord, !ExplicitDeps, !ImplicitNeeds,
        !Specs, !Error, !IO).
read_plain_opt_files(Globals, VeryVerbose, ReadOptFilesTransitively,
        [ModuleName | ModuleNames0], DontQueueOptModules0,
        !ParseTreePlainOptsCord, !ExplicitDeps, !ImplicitNeeds,
        !Specs, !Error, !IO) :-
    read_plain_opt_file(Globals, VeryVerbose, ModuleName, FileName,
        ParseTreePlainOpt, OptSpecs, OptError, !IO),
    cord.snoc(ParseTreePlainOpt, !ParseTreePlainOptsCord),
    get_explicit_and_implicit_avail_needs_in_parse_tree_plain_opt(
        ParseTreePlainOpt, ParseTreeExplicitDeps, ParseTreeImplicitNeeds),
    set.union(ParseTreeExplicitDeps, !ExplicitDeps),
    cord.snoc(ParseTreeImplicitNeeds, !ImplicitNeeds),
    % We could add OptSpecs to !Specs, but with the option combination
    % --intermodule-analysis --no-intermodule-optimization, not finding
    % a .opt file for ModuleName is not an error, and update_opt_error_status
    % knows that (it treats it as a warning). However, the error_spec
    % reporting the failure to open the .opt file *will* have severity error,
    % put there by read_error_msg in parse_module.m. Until read_error_msg
    % is made configurable in severity, we must not add OptSpecs to !Specs.
    % If we do, the hard_coded/intermod_unused_args test case will fail.
    update_opt_error_status(Globals, warn_missing_opt_files, FileName,
        OptSpecs, OptError, !Specs, !Error),
    pre_hlds_maybe_write_out_errors(VeryVerbose, Globals, !Specs, !IO),
    (
        ReadOptFilesTransitively = yes,
        compute_implicit_avail_needs(Globals, ParseTreeImplicitNeeds,
            ParseTreeImplicitDeps),
        set.union(ParseTreeExplicitDeps, ParseTreeImplicitDeps, ParseTreeDeps),
        set.difference(ParseTreeDeps, DontQueueOptModules0, NewDeps),
        ModuleNames1 = set.to_sorted_list(NewDeps) ++ ModuleNames0,
        set.union(NewDeps, DontQueueOptModules0, DontQueueOptModules1)
    ;
        ReadOptFilesTransitively = no,
        ModuleNames1 = ModuleNames0,
        DontQueueOptModules1 = DontQueueOptModules0
    ),
    read_plain_opt_files(Globals, VeryVerbose, ReadOptFilesTransitively,
        ModuleNames1, DontQueueOptModules1,
        !ParseTreePlainOptsCord, !ExplicitDeps, !ImplicitNeeds,
        !Specs, !Error, !IO).

:- pred read_plain_opt_file(globals::in, bool::in,
    module_name::in, string::out, parse_tree_plain_opt::out,
    list(error_spec)::out, read_module_errors::out, io::di, io::uo) is det.

read_plain_opt_file(Globals, VeryVerbose, ModuleName, FileName,
        ParseTreePlainOpt, OptSpecs, OptError, !IO) :-
    maybe_write_string(VeryVerbose,
        "% Reading optimization interface for module", !IO),
    maybe_write_string(VeryVerbose, " `", !IO),
    ModuleNameString = sym_name_to_string(ModuleName),
    maybe_write_string(VeryVerbose, ModuleNameString, !IO),
    maybe_write_string(VeryVerbose, "'...\n", !IO),
    maybe_flush_output(VeryVerbose, !IO),

    module_name_to_search_file_name(Globals, ".opt",
        ModuleName, FileName, !IO),
    actually_read_module_plain_opt(Globals, FileName, ModuleName, [],
        ParseTreePlainOpt, OptSpecs, OptError, !IO),
    maybe_write_string(VeryVerbose, "% done.\n", !IO).

%---------------------------------------------------------------------------%

grab_trans_opt_files(Globals, TransOptModuleNames, FoundError,
        !ModuleAndImports, !HaveReadModuleMaps, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    maybe_write_string(Verbose, "% Reading .trans_opt files..\n", !IO),
    maybe_flush_output(Verbose, !IO),

    globals.lookup_bool_option(Globals, very_verbose, VeryVerbose),
    read_trans_opt_files(Globals, VeryVerbose, TransOptModuleNames,
        cord.init, ParseTreeTransOptsCord,
        [], TransOptSpecs, no, FoundError, !IO),
    list.foldl(module_and_imports_add_trans_opt,
        cord.list(ParseTreeTransOptsCord), !ModuleAndImports),
    module_and_imports_add_specs(TransOptSpecs, !ModuleAndImports),
    % XXX why ignore any existing errors?
    module_and_imports_set_errors(set.init, !ModuleAndImports),

    maybe_write_string(Verbose, "% Done.\n", !IO).

:- pred read_trans_opt_files(globals::in, bool::in, list(module_name)::in,
    cord(parse_tree_trans_opt)::in, cord(parse_tree_trans_opt)::out,
    list(error_spec)::in, list(error_spec)::out, bool::in, bool::out,
    io::di, io::uo) is det.

read_trans_opt_files(_, _, [], !ParseTreeTransOpts, !Specs, !Error, !IO).
read_trans_opt_files(Globals, VeryVerbose, [ModuleName | ModuleNames],
        !ParseTreeTransOptsCord, !Specs, !Error, !IO) :-
    read_trans_opt_file(Globals, VeryVerbose, ModuleName, FileName,
        ParseTreeTransOpt, TransOptSpecs, TransOptError, !IO),

    cord.snoc(ParseTreeTransOpt, !ParseTreeTransOptsCord),
    !:Specs = TransOptSpecs ++ !.Specs,
    update_opt_error_status(Globals, warn_missing_trans_opt_files, FileName,
        TransOptSpecs, TransOptError, !Specs, !Error),
    pre_hlds_maybe_write_out_errors(VeryVerbose, Globals, !Specs, !IO),

    read_trans_opt_files(Globals, VeryVerbose, ModuleNames,
        !ParseTreeTransOptsCord, !Specs, !Error, !IO).

:- pred read_trans_opt_file(globals::in, bool::in,
    module_name::in, string::out, parse_tree_trans_opt::out,
    list(error_spec)::out, read_module_errors::out, io::di, io::uo) is det.

read_trans_opt_file(Globals, VeryVerbose, ModuleName, FileName,
        ParseTreeTransOpt, TransOptSpecs, TransOptError, !IO) :-
    ModuleNameStr = sym_name_to_string(ModuleName),
    string.format("%% Reading `%s.trans_opt'... ", [s(ModuleNameStr)], Msg),
    maybe_write_string(VeryVerbose, Msg, !IO),
    maybe_flush_output(VeryVerbose, !IO),

    module_name_to_search_file_name(Globals, ".trans_opt",
        ModuleName, FileName, !IO),
    actually_read_module_trans_opt(Globals, FileName, ModuleName, [],
        ParseTreeTransOpt, TransOptSpecs, TransOptError, !IO),
    maybe_write_string(VeryVerbose, " done.\n", !IO).

%---------------------------------------------------------------------------%

:- type opt_file_type
    --->    opt_file
    ;       trans_opt_file.

    % update_opt_error_status(Globals, WarnOption, FileName,
    %   ModuleSpecs, ModuleErrors, !Specs, !Error):
    %
    % Work out whether any fatal errors have occurred while reading
    % `.opt' or `.trans_opt' files, updating !Errors if there were
    % fatal errors.
    %
    % A missing `.opt' or `.trans_opt' file is only a fatal error if
    % `--halt-at-warn' was passed the compiler together with
    % `--warn-missing-opt-files' or `--warn-missing-trans-opt-files'
    % respectively.
    %
    % On the other hand, we consider syntax and other errors in these files
    % to be always fatal.
    %
:- pred update_opt_error_status(globals::in, option::in, string::in,
    list(error_spec)::in, read_module_errors::in,
    list(error_spec)::in, list(error_spec)::out, bool::in, bool::out) is det.

update_opt_error_status(Globals, WarnOption, FileName,
        ModuleSpecs, ModuleErrors, !Specs, !Error) :-
    ( if set.is_empty(ModuleErrors) then
        % ModuleSpecs contains no errors. I (zs) don't know whether it could
        % contain any warnings or informational messages, but if it could,
        % we should add those error_specs to !Specs. Not doing so preserves
        % old behavior.
        true
    else if set.contains(ModuleErrors, rme_could_not_open_file) then
        % We get here if we couldn't find and/or open the file.
        % ModuleSpecs will already contain an error_severity error_spec
        % about that, with more details than the message we generate below,
        % but the test case hard_coded/intermod_unused_args insists on
        % there being no error, only a warning, and on the text below.
        % That is why we do not add ModuleSpecs to !Specs here.
        %
        % I (zs) don't know whether we should add a version of ModuleSpecs
        % with downgraded severity to !Specs instead of the Spec we generate
        % below.
        globals.lookup_bool_option(Globals, WarnOption, WarnOptionValue),
        (
            WarnOptionValue = no
        ;
            WarnOptionValue = yes,
            Pieces = [words("Warning: cannot open"), quote(FileName),
                suffix("."), nl],
            Msg = error_msg(no, treat_as_first, 0, [always(Pieces)]),
            Spec = error_spec($pred, severity_warning, phase_read_files,
                [Msg]),
            !:Specs = [Spec | !.Specs]
        )
        % NOTE: We do NOT update !Error, since a missing optimization
        % interface file is not necessarily an error.
    else
        % ModuleErrors may or may not contain fatal errors other than
        % rme_could_not_open_file, but we do not care.
        !:Specs = ModuleSpecs ++ !.Specs,
        !:Error = yes
    ).

%---------------------------------------------------------------------------%
:- end_module parse_tree.grab_modules.
%---------------------------------------------------------------------------%
