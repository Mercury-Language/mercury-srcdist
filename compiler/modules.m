%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 1996-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: modules.m.
% Main author: fjh.
%
% This module used to contain all the code for handling module imports
% and exports, for computing module dependencies, and for generating makefile
% fragments to record those dependencies. That made it by far the biggest
% module in the compiler (at one point it contained almost 9000 lines),
% so most of this code was moved out into other modules. What is left
% is a mish-mash set predicates, with significantly lower cohesion than
% we would like. The main tasks they handle are
%
% - checking raw compilation units for errors of various kinds
% - figuring out which interface files a module depends on, and reading them
% - figuring out the information from which we create dependency files
%   (.dep and .d files) for mmake
% - figuring out what modules are included in a list of items
%
% Both the interface and the implementation of the module are divided
% into four parts representing these tasks. Some of the auxiliary predicates
% are used by more than one task.
% XXX ITEM_LIST Some of these sections should be in modules of their own.
%
% The roles of the interface files (.int0, .int3, .int2 and .int) that
% this module helps create are documented (to the extent that they are
% documented anywhere) in the module that does actually create them,
% which is write_module_interface_files.m.
%
%---------------------------------------------------------------------------%

:- module parse_tree.modules.
:- interface.

:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module libs.timestamp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.error_util.
:- import_module parse_tree.module_imports.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.read_modules.
:- import_module parse_tree.status.

:- import_module io.
:- import_module list.
:- import_module maybe.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % Given a raw compilation unit, check whether the module exports anything.
    % If it doesn't, and the option --warn-nothing-exported is set,
    % report a warning.
    %
:- pred check_for_no_exports(globals::in, raw_compilation_unit::in,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

    % Given a raw compilation unit, which will be a module's interface,
    % check whether that interface exports anything. If it doesn't, and
    % --warn-nothing-exported is set, report a warning.
    %
    % Basically, it does the same job as check_for_no_exports, except
    % our caller has already done the task of computing the module's
    % interface, and given it to us.
    %
:- pred check_int_for_no_exports(globals::in, raw_compilation_unit::in,
    list(error_spec)::in, list(error_spec)::out, io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

    % grab_imported_modules(Globals, SourceFileName, SourceFileModuleName,
    %   ModuleTimestamp, NestedSubModules, RawCompUnit, HaveReadModuleMaps,
    %   ModuleAndImports, !IO):
    %
    % Given the raw CompUnit, one of the modules stored in SourceFileName,
    % read in the private interface files (.int0) for all the parent modules,
    % the long interface files (.int) for all the imported modules, and the
    % short interface files (.in2) for all the indirectly imported modules.
    % Return the `module_and_imports' structure containing all the information
    % gathered this way, from which we will compute the augmented version
    % of RawCompUnit.
    % XXX ITEM_LIST Move the actual compuation of the AugCompUnit together
    % with this code, preferably in a new module, perhaps named something like
    % "augment_comp_unit.m".
    %
    % SourceFileModuleName is the top-level module name in SourceFileName.
    % ModuleTimestamp is the timestamp of the SourceFileName. NestedSubModules
    % is the list of the names of the nested submodules in SourceFileName
    % if RawCompUnit is the toplevel module in SourceFileName (i.e. if it
    % the compilation unit of SourceFileModuleName). XXX ITEM_LIST document
    % exactly what NestedSubModules is if RawCompUnit is NOT the toplevel
    % module in SourceFileName. HaveReadModuleMaps contains the interface
    % files read during recompilation checking.
    %
:- pred grab_imported_modules(globals::in, file_name::in,
    module_name::in, maybe(timestamp)::in, list(module_name)::in,
    raw_compilation_unit::in, have_read_module_maps::in,
    module_and_imports::out, io::di, io::uo) is det.

    % grab_unqual_imported_modules(Globals, SourceFileName,
    %   SourceFileModuleName, CompUnit, ModuleAndImports, !IO):
    %
    % Similar to grab_imported_modules, but only reads in the unqualified
    % short interfaces (.int3s), and the .int0 files for parent modules,
    % instead of reading the long interfaces and qualified short interfaces
    % (.int and int2s). Does not set the `PublicChildren', `FactDeps'
    % `ForeignIncludeFiles' fields of the module_and_imports structure.
    %
:- pred grab_unqual_imported_modules(globals::in, file_name::in,
    module_name::in, raw_compilation_unit::in, module_and_imports::out,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%
% XXX ITEM_LIST Document what these predicates do more precisely, and document
% exactly WHY they do each of their actions. I (zs) think it likely that
% some of the interface files we now read in are read in unnecessarily.

:- type aug_section_maker == (func(module_name) = aug_module_section).

    % process_module_private_interfaces(Globals, Ancestors,
    %   NewIntSection, NewImpSection, !DirectImports, !DirectUses,
    %   !ModuleAndImports, !IO):
    %
    % Read the complete private interfaces (.int0 files) for all the modules
    % in Ancestors. For each ancestor read, append any imports/uses of modules
    % to the !DirectImports or !DirectUses.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the augmented section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the augmented section kind generated by NewImpSection.
    %
:- pred process_module_private_interfaces(globals::in,
    have_read_module_maps::in, list(module_name)::in,
    aug_section_maker::in, aug_section_maker::in,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_long_interfaces(Globals, HaveReadModuleMaps,
    %   NeedQualifier, Imports, IntFileKind, NewIntSection, NewImpSection,
    %   !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO):
    %
    % Read the interface files (.int or .int2, as indicated by IntFileKind)
    % for all the modules in Imports (unless they have already been read in),
    % and append any imports/uses in those modules to the IndirectImports list,
    % and append any imports/uses in the implementation sections of those
    % modules to the ImpIndirectImports list.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the augmented section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the augmented section kind generated by NewImpSection.
    %
:- pred process_module_long_interfaces(globals::in, have_read_module_maps::in,
    need_qualifier::in, list(module_name)::in, int_file_kind::in,
    aug_section_maker::in, aug_section_maker::in,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
    %   IndirectImports, IntFileKind, NewIntSection, NewImpSection,
    %   !ImpIndirectImports, !ModuleAndImports):
    %
    % Read the short interfaces (.int3) for modules in IndirectImports
    % (unless they have already been read in), and any modules that those
    % modules import (transitively) in the interface.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the augmented section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the augmented section kind generated by NewImpSection.
    %
:- pred process_module_short_interfaces_transitively(globals::in,
    have_read_module_maps::in, list(module_name)::in, int_file_kind::in,
    aug_section_maker::in, aug_section_maker::in,
    list(module_name)::in, list(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_short_interfaces_and_impls_transitively(Globals,
    %   HaveReadModuleMaps, IndirectImports, Ext, NewIntSection, NewImpSection,
    %   !ModuleAndImports):
    %
    % Read the short interfaces for modules in IndirectImports (unless they've
    % already been read in) and any modules that those modules import
    % (transitively) in the interface or implementation.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the augmented section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the augmented section kind generated by NewImpSection.
    %
:- pred process_module_short_interfaces_and_impls_transitively(globals::in,
    have_read_module_maps::in, list(module_name)::in, int_file_kind::in,
    aug_section_maker::in, aug_section_maker::in,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_short_interfaces(Globals, HaveReadModuleMaps,
    %   NewIntSection, NewImpSection, Modules, IntFileKind,
    %   !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO):
    %
    % Read the short interfaces for modules in Modules (unless they have already
    % been read in). Append the modules imported by the interface of Modules to
    % !IndirectImports. Append the modules imported by the implementation of
    % Modules to !ImpIndirectImports.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the augmented section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the augmented section kind generated by NewImpSection.
    %
:- pred process_module_short_interfaces(globals::in,
    have_read_module_maps::in, list(module_name)::in, int_file_kind::in,
    aug_section_maker::in, aug_section_maker::in,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%
%
% These predicates do the top level part of their jobs here in this module,
% and hand over the low level details of writing out their results
% to write_deps_file.m.
% XXX ITEM_LIST Consider moving this section of modules.m to
% write_deps_file.m, perhaps renaming that file.

    % generate_module_dependencies(Globals, ModuleName, !IO):
    %
    % Generate the per-program makefile dependencies (`.dep') file for a
    % program whose top-level module is `ModuleName'. This involves first
    % transitively reading in all imported or ancestor modules. While we're
    % at it, we also save the per-module makefile dependency (`.d') files
    % for all those modules.
    %
    % XXX ITEM_LIST Should we rename this to something like
    % generate_module_dep_file or generate_dep_file_for_module?
    %
:- pred generate_module_dependencies(globals::in, module_name::in,
    io::di, io::uo) is det.

    % generate_file_dependencies(Globals, FileName, !IO):
    %
    % Same as generate_module_dependencies, but takes a file name instead of
    % a module name.
    %
    % XXX ITEM_LIST Should we rename this to something like
    % generate_file_dep_file or generate_dep_file_for_file?
    %
:- pred generate_file_dependencies(globals::in, file_name::in,
    io::di, io::uo) is det.

    % generate_module_dependency_file(Globals, ModuleName, !IO):
    %
    % Generate the per module makefile dependency ('.d') file for the
    % given module.
    %
    % XXX ITEM_LIST Should we rename this to something like
    % generate_module_d_file or generate_d_file_for_module?
    %
:- pred generate_module_dependency_file(globals::in, module_name::in,
    io::di, io::uo) is det.

    % generate_file_dependency_file(Globals, FileName, !IO):
    %
    % Same as generate_module_dependency_file, but takes a file name instead of
    % a module name.
    %
    % XXX ITEM_LIST Should we rename this to something like
    % generate_file_d_file or generate_d_file_for_file?
    %
:- pred generate_file_dependency_file(globals::in, file_name::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%
%
% These predicates are exported for use by module_imports.m.
%
% XXX ITEM_LIST They shouldn't be needed; the representation of the
% compilation unit should have all this information separate from the items.

    % get_included_modules_in_item_blocks(ItemBlocks, IncludeDeps):
    % get_included_modules_in_items(Items, IncludeDeps):
    %
    % IncludeDeps is the list of submodules named in `:- include_module'
    % declarations in ItemBlocks or Items.
    %
:- pred get_included_modules_in_item_blocks(list(item_block(MS))::in,
    list(module_name)::out) is det.
:- pred get_included_modules_in_items(list(item)::in,
    list(module_name)::out) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.
:- import_module parse_tree.comp_unit_interface.    % undesirable dependency
:- import_module parse_tree.deps_map.
:- import_module parse_tree.file_names.
:- import_module parse_tree.item_util.
:- import_module parse_tree.module_cmds.
:- import_module parse_tree.module_deps_graph.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_io_error.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.split_parse_tree_src.   % undesirable dependency
:- import_module parse_tree.write_deps_file.

:- import_module assoc_list.
:- import_module bool.
:- import_module cord.
:- import_module digraph.
:- import_module dir.
:- import_module map.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module solutions.
:- import_module string.
:- import_module term.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

check_for_no_exports(Globals, RawCompUnit, !Specs, !IO) :-
    globals.lookup_bool_option(Globals, warn_nothing_exported, ExportWarning),
    (
        ExportWarning = no
    ;
        ExportWarning = yes,
        RawCompUnit = compilation_unit(ModuleName, Context, _RawItemBlocks),
        get_interface(dont_include_impl_types, RawCompUnit,
            InterfaceRawItemBlocks),
        IntRawCompUnit = compilation_unit(ModuleName, Context,
            InterfaceRawItemBlocks),
        check_int_for_no_exports(Globals, IntRawCompUnit, !Specs, !IO)
    ).

check_int_for_no_exports(Globals, IntRawCompUnit, !Specs, !IO) :-
    IntRawCompUnit = compilation_unit(ModuleName, Context, RawItemBlocks),
    do_ms_interface_item_blocks_export_anything(RawItemBlocks, ExportAnything),
    (
        ExportAnything = yes
    ;
        ExportAnything = no,
        generate_no_exports_warning(Globals, ModuleName, Context, WarnSpec,
            !IO),
        !:Specs = [WarnSpec | !.Specs]
    ).

:- pred do_ms_interface_item_blocks_export_anything(list(raw_item_block)::in,
    bool::out) is det.

do_ms_interface_item_blocks_export_anything([], no).
do_ms_interface_item_blocks_export_anything([RawItemBlock | RawItemBlocks],
        ExportAnything) :-
    RawItemBlock = item_block(Section, _, Items),
    ( if
        Section = ms_interface,
        do_ms_interface_items_export_anything(Items, yes)
    then
        ExportAnything = yes
    else
        do_ms_interface_item_blocks_export_anything(RawItemBlocks,
            ExportAnything)
    ).

:- pred do_ms_interface_items_export_anything(list(item)::in,
    bool::out) is det.

do_ms_interface_items_export_anything([], no).
do_ms_interface_items_export_anything([Item | Items], ExportAnything) :-
    ( if
        (
            Item = item_nothing(_)
        ;
            Item = item_module_defn(ItemModuleDefn),
            ItemModuleDefn = item_module_defn_info(ModuleDefn, _, _),
            ModuleDefn \= md_include_module(_)
        )
    then
        % Item is not useful when exported; keep searching.
        do_ms_interface_items_export_anything(Items, ExportAnything)
    else
        % We found something useful being exported.
        ExportAnything = yes
    ).

:- pred generate_no_exports_warning(globals::in, module_name::in,
    prog_context::in, error_spec::out, io::di, io::uo) is det.

generate_no_exports_warning(Globals, ModuleName, Context0, Spec, !IO) :-
    % XXX ITEM_LIST We should *always* be able to use the module's recorded
    % declaration context, even if a missing `:- module' declaration requires
    % it be faked when the declaration is first missed. The filename should
    % definitely be available there; we shouldn't have to compute it again.
    % We could then avoid passing the I/O state down here.
    ( if Context0 = term.context_init then
        module_name_to_file_name(Globals, ModuleName, ".m", do_not_create_dirs,
            FileName, !IO),
        Context = term.context_init(FileName, 1)
    else
        Context = Context0
    ),
    Severity = severity_conditional(warn_nothing_exported, yes,
        severity_warning, no),
    Component = option_is_set(warn_nothing_exported, yes,
        [always([invis_order_default_start(2),
            words("Warning: interface for module"), sym_name(ModuleName),
            words("does not export anything."), nl]),
        verbose_only(verbose_always,
            [words("To be useful, a module should export something."),
            words("A file should contain at least one declaration"),
            words("other than"), decl("import_module"),
            words("in its interface section(s)."),
            words("This would normally be a"),
            decl("pred"), suffix(","), decl("func"), suffix(","),
            decl("type"), suffix(","), decl("inst"), words("or"),
            decl("mode"), words("declaration."), nl])
        ]),
    Msg = simple_msg(Context, [Component]),
    Spec = error_spec(Severity, phase_term_to_parse_tree, [Msg]).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

grab_imported_modules(Globals, SourceFileName, SourceFileModuleName,
        MaybeTimestamp, NestedChildren, RawCompUnit0, HaveReadModuleMaps,
        !:ModuleAndImports, !IO) :-
    % XXX ITEM_LIST Why aren't we updating !HaveReadModuleMaps?
    RawCompUnit0 = compilation_unit(ModuleName, ModuleNameContext,
        RawItemBlocks0),

    % Find out which modules this one depends on.
    AncestorModules = get_ancestors(ModuleName),
    get_dependencies_int_imp_in_raw_item_blocks(RawItemBlocks0,
        IntImportedModules0, IntUsedModules0,
        ImpImportedModules0, ImpUsedModules0),

    ImportedModules0 = IntImportedModules0 ++ ImpImportedModules0,
    UsedModules0 = IntUsedModules0 ++ ImpUsedModules0,

    some [!Specs] (
        !:Specs = [],

        ( if ModuleNameContext = term.context_init then
            module_name_to_file_name(Globals, ModuleName, ".m",
                do_not_create_dirs, FileName, !IO),
            Context = term.context_init(FileName, 1)
        else
            Context = ModuleNameContext
        ),

        warn_if_import_self_or_ancestor(ModuleName, Context, AncestorModules,
            ImportedModules0, UsedModules0, !Specs),

        warn_if_duplicate_use_import_decls(ModuleName, Context,
            IntImportedModules0, IntImportedModules1,
            IntUsedModules0, IntUsedModules1,
            ImpImportedModules0, ImpImportedModules,
            ImpUsedModules0, ImpUsedModules, !Specs),

        get_int_and_impl(dont_include_impl_types, RawCompUnit0,
            IFileItemBlocks, NoIFileItemBlocks),
        get_included_modules_in_item_blocks(IFileItemBlocks, PublicChildren),
        get_fact_table_dependencies_in_item_blocks(RawItemBlocks0, FactDeps),
        get_foreign_include_files_in_item_blocks(RawItemBlocks0,
            ForeignIncludeFiles),
        (
            MaybeTimestamp = yes(Timestamp),
            MaybeTimestampMap = yes(map.singleton(ModuleName,
                module_timestamp(fk_src, Timestamp, may_be_unqualified)))
        ;
            MaybeTimestamp = no,
            MaybeTimestampMap = no
        ),

        % If this module has any separately-compiled submodules, then
        % we need to make everything in the implementation of this module
        % exported_to_submodules. We do that by splitting out the
        % implementation declarations and putting them in a special
        % `ams_impl_but_exported_to_submodules' section.

        get_included_modules_in_item_blocks(RawItemBlocks0, Children),
        (
            Children = [],
            % XXX ITEM_LIST We could compute AugBlocks1 from
            % IFileItems and NoIFileItems.
            list.map(augment_block, RawItemBlocks0, AugItemBlocks1)
        ;
            Children = [_ | _],
            split_items_in_blocks_into_clauses_and_decls(NoIFileItemBlocks,
                [], RevClauses, [], RevImplDecls),
            list.reverse(RevClauses, Clauses),
            list.reverse(RevImplDecls, ImplDecls),
            list.map(augment_block, IFileItemBlocks, AugIFileItemBlocks),
            AugItemBlocks1 = AugIFileItemBlocks ++
                % XXX ITEM_LIST Is there a useful non-dummy context here?
                [item_block(ams_impl_but_exported_to_submodules,
                    term.context_init, ImplDecls),
                item_block(ams_implementation, term.context_init, Clauses)]
        ),

        make_module_and_imports(SourceFileName, SourceFileModuleName,
            ModuleName, ModuleNameContext, AugItemBlocks1, !.Specs,
            PublicChildren, NestedChildren, FactDeps,
            ForeignIncludeFiles, MaybeTimestampMap, !:ModuleAndImports),

        % Add `builtin' and `private_builtin', and any other builtin modules
        % needed by any of the items, to the imported modules.
        % XXX Why are these added to the interface, and not the implementation
        % dependencies?
        get_implicit_dependencies_in_item_blocks(Globals, AugItemBlocks1,
            ImplicitIntImportedModules, ImplicitIntUsedModules),
        IntImportedModules2 =
            ImplicitIntImportedModules ++ IntImportedModules1,
        IntUsedModules2 = ImplicitIntUsedModules ++ IntUsedModules1,

        % Process the ancestor modules.
        %
        % Uses of the items declared in ancestor modules do not need
        % module qualifiers. Modules imported by ancestors are considered
        % to be visible in the current module.
        process_module_private_interfaces(Globals, HaveReadModuleMaps,
            AncestorModules,
            make_ams_imported(import_locn_interface),
            make_ams_imported(import_locn_ancestor_private_interface_proper),
            IntImportedModules2, IntImportedModules,
            IntUsedModules2, IntUsedModules, !ModuleAndImports, !IO),

        % Process the modules imported using `import_module'.
        % Uses of these items do not need module qualifiers.
        IntIndirectImports0 = [],
        IntImpIndirectImports0 = [],
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            may_be_unqualified, IntImportedModules, ifk_int,
            make_ams_imported(import_locn_interface),
            make_ams_abstract_imported,
            IntIndirectImports0, IntIndirectImports1,
            IntImpIndirectImports0, IntImpIndirectImports1,
            !ModuleAndImports, !IO),

        ImpIndirectImports0 = [],
        ImpImpIndirectImports0 = [],
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            may_be_unqualified, ImpImportedModules, ifk_int,
            make_ams_imported(import_locn_implementation),
            make_ams_abstract_imported,
            ImpIndirectImports0, ImpIndirectImports1,
            ImpImpIndirectImports0, ImpImpIndirectImports1,
            !ModuleAndImports, !IO),

        % Process the modules imported using `use_module' .
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            must_be_qualified, IntUsedModules, ifk_int,
            make_ams_used(import_locn_interface), make_ams_abstract_imported,
            IntIndirectImports1, IntIndirectImports,
            IntImpIndirectImports1, IntImpIndirectImports2,
            !ModuleAndImports, !IO),
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            must_be_qualified, ImpUsedModules, ifk_int,
            make_ams_used(import_locn_implementation),
            make_ams_abstract_imported,
            ImpIndirectImports1, ImpIndirectImports,
            ImpImpIndirectImports1, ImpImpIndirectImports2,
            !ModuleAndImports, !IO),

        % Process the short interfaces for indirectly imported modules.
        % The short interfaces are treated as if they are imported
        % using `use_module'.
        TransitiveImportMarker =
            item_block(ams_transitively_imported, term.context_init, []),
        module_and_imports_add_item_blocks([TransitiveImportMarker],
            !ModuleAndImports),
        process_module_short_interfaces_transitively(Globals,
            HaveReadModuleMaps, IntIndirectImports, ifk_int2,
            make_ams_used(import_locn_interface),
            make_ams_abstract_imported,
            IntImpIndirectImports2, IntImpIndirectImports,
            !ModuleAndImports, !IO),
        process_module_short_interfaces_transitively(Globals,
            HaveReadModuleMaps, ImpIndirectImports, ifk_int2,
            make_ams_used(import_locn_implementation),
            make_ams_abstract_imported,
            ImpImpIndirectImports2, ImpImpIndirectImports,
            !ModuleAndImports, !IO),

        % Process the short interfaces for modules imported in the
        % implementation of indirectly imported modules. The items in these
        % modules shouldn't be visible to typechecking -- they are used for
        % fully expanding equivalence types after the semantic checking passes.
        process_module_short_interfaces_and_impls_transitively(Globals,
            HaveReadModuleMaps, IntImpIndirectImports, ifk_int2,
            make_ams_abstract_imported, make_ams_abstract_imported,
            !ModuleAndImports, !IO),
        process_module_short_interfaces_and_impls_transitively(Globals,
            HaveReadModuleMaps, ImpImpIndirectImports, ifk_int2,
            make_ams_abstract_imported, make_ams_abstract_imported,
            !ModuleAndImports, !IO),

        module_and_imports_get_results(!.ModuleAndImports, AugItemBlocks,
            _, _),
        check_imports_accessibility(ModuleName, AugItemBlocks,
            IntImportedModules ++ IntUsedModules ++
            ImpImportedModules ++ ImpUsedModules,
            [], AccessSpecs),
        module_and_imports_add_specs(AccessSpecs, !ModuleAndImports)
    ).

grab_unqual_imported_modules(Globals, SourceFileName, SourceFileModuleName,
        RawCompUnit0, !:ModuleAndImports, !IO) :-
    RawCompUnit0 = compilation_unit(ModuleName, ModuleNameContext,
        RawItemBlocks0),
    % Find out which modules this one depends on.
    ParentDeps = get_ancestors(ModuleName),
    get_dependencies_int_imp_in_raw_item_blocks(RawItemBlocks0,
        IntImportDeps0, IntUseDeps0, ImpImportDeps, ImpUseDeps),

    % Construct the initial module import structure.
    list.map(augment_block, RawItemBlocks0, AugItemBlocks0),
    make_module_and_imports(SourceFileName, SourceFileModuleName,
        ModuleName, ModuleNameContext, AugItemBlocks0, [], [], [], [],
        cord.init, no, !:ModuleAndImports),

    % Add `builtin' and `private_builtin', and any other builtin modules
    % needed by any of the items, to the imported modules.
    % XXX Why are these added to the interface, and not the implementation
    % dependencies?
    get_implicit_dependencies_in_item_blocks(Globals, RawItemBlocks0,
        ImplicitIntImportDeps, ImplicitIntUseDeps),
    IntImportDeps = ImplicitIntImportDeps ++ IntImportDeps0,
    IntUseDeps = ImplicitIntUseDeps ++ IntUseDeps0,

    % Get the .int3s and .int0s that the current module depends on.
    HaveReadModuleMaps = have_read_module_maps(map.init, map.init, map.init),

    % First the .int0s for parent modules.
    process_module_private_interfaces(Globals, HaveReadModuleMaps, ParentDeps,
        make_ams_imported(import_locn_interface),
        make_ams_imported(import_locn_ancestor_private_interface_proper),
        [], ParentImportDeps, [], ParentUseDeps, !ModuleAndImports, !IO),

    % Then the .int3s for `:- import'-ed modules.
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, ParentImportDeps, ifk_int3,
        make_ams_imported(import_locn_ancestor), make_ams_abstract_imported,
        [], IntIndirectImportDeps0, [], _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, IntImportDeps, ifk_int3,
        make_ams_imported(import_locn_interface),
        make_ams_abstract_imported,
        IntIndirectImportDeps0, IntIndirectImportDeps1,
        [], _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, ImpImportDeps, ifk_int3,
        make_ams_imported(import_locn_implementation),
        make_ams_abstract_imported,
        [], ImpIndirectImportDeps0,
        [], _, !ModuleAndImports, !IO),

    % Then (after appropriate `:- used' decls) the .int3s for `:- use'-ed
    % modules.
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, ParentUseDeps, ifk_int3,
        make_ams_imported(import_locn_ancestor), make_ams_abstract_imported,
        IntIndirectImportDeps1, IntIndirectImportDeps2,
        [], _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        must_be_qualified, IntUseDeps, ifk_int3,
        make_ams_used(import_locn_interface), make_ams_abstract_imported,
        IntIndirectImportDeps2, IntIndirectImportDeps,
        [], _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        must_be_qualified, ImpUseDeps, ifk_int3,
        make_ams_used(import_locn_implementation), make_ams_abstract_imported,
        ImpIndirectImportDeps0, ImpIndirectImportDeps,
        [], _, !ModuleAndImports, !IO),

    % Then (after appropriate `:- used' decl) the .int3s for indirectly
    % imported modules.
    process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        IntIndirectImportDeps, ifk_int3,
        make_ams_used(import_locn_interface), make_ams_abstract_imported,
        [], _, !ModuleAndImports, !IO),

    process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        ImpIndirectImportDeps, ifk_int3,
        make_ams_used(import_locn_implementation), make_ams_abstract_imported,
        [], _, !ModuleAndImports, !IO),

    module_and_imports_get_results(!.ModuleAndImports, AugItemBlocks, _, _),
    check_imports_accessibility(ModuleName, AugItemBlocks,
        IntImportDeps ++ IntUseDeps ++ ImpImportDeps ++ ImpUseDeps,
        [], AccessSpecs),
    module_and_imports_add_specs(AccessSpecs, !ModuleAndImports).

%---------------------------------------------------------------------------%

:- pred split_items_in_blocks_into_clauses_and_decls(list(raw_item_block)::in,
    list(item)::in, list(item)::out, list(item)::in, list(item)::out) is det.

split_items_in_blocks_into_clauses_and_decls([], !RevClauses, !RevImplDecls).
split_items_in_blocks_into_clauses_and_decls([RawItemBlock | RawItemBlocks],
        !RevClauses, !RevImplDecls) :-
    % XXX ITEM_LIST We ignore the section, as the original
    % split_clauses_and_decls did.
    RawItemBlock = item_block(_, _, Items),
    split_items_into_clauses_and_decls(Items, !RevClauses, !RevImplDecls),
    split_items_in_blocks_into_clauses_and_decls(RawItemBlocks,
        !RevClauses, !RevImplDecls).

:- pred split_items_into_clauses_and_decls(list(item)::in,
    list(item)::in, list(item)::out, list(item)::in, list(item)::out) is det.

split_items_into_clauses_and_decls([], !RevClauses, !RevImplDecls).
split_items_into_clauses_and_decls([Item | Items],
        !RevClauses, !RevImplDecls) :-
    (
        ( Item = item_clause(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ),
        !:RevClauses = [Item | !.RevClauses]
    ;
        Item = item_pragma(ItemPragma),
        ItemPragma = item_pragma_info(Pragma, _, _, _),
        AllowedInInterface = pragma_allowed_in_interface(Pragma),
        (
            AllowedInInterface = no,
            !:RevClauses = [Item | !.RevClauses]
        ;
            AllowedInInterface = yes,
            !:RevImplDecls = [Item | !.RevImplDecls]
        )
    ;
        % XXX ITEM_LIST I (zs) think that md_external item_module_defns
        % should be put into !RevClauses, while item_nothings should
        % not be put anywhere.
        ( Item = item_module_defn(_)
        ; Item = item_type_defn(_)
        ; Item = item_inst_defn(_)
        ; Item = item_mode_defn(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_promise(_)
        ; Item = item_typeclass(_)
        ; Item = item_instance(_)
        ; Item = item_mutable(_)
        ; Item = item_nothing(_)
        ),
        !:RevImplDecls = [Item | !.RevImplDecls]
    ),
    split_items_into_clauses_and_decls(Items, !RevClauses, !RevImplDecls).

%---------------------------------------------------------------------------%

    % Warn if a module imports itself, or an ancestor.
    %
:- pred warn_if_import_self_or_ancestor(module_name::in, prog_context::in,
    list(module_name)::in, list(module_name)::in, list(module_name)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_if_import_self_or_ancestor(ModuleName, Context, AncestorModules,
        ImportedModules, UsedModules, !Specs) :-
    IsImportedAncestor = (pred(Import::out) is nondet :-
        list.member(Import, AncestorModules),
        ( list.member(Import, ImportedModules)
        ; list.member(Import, UsedModules)
        )
    ),
    solutions.aggregate(IsImportedAncestor,
        warn_imported_ancestor(ModuleName, Context), !Specs),
    ( if
        ( list.member(ModuleName, ImportedModules)
        ; list.member(ModuleName, UsedModules)
        )
    then
        SelfPieces = [words("Warning: module"),
            sym_name(ModuleName), words("imports itself!")],
        SelfMsg = simple_msg(Context,
            [option_is_set(warn_simple_code, yes, [always(SelfPieces)])]),
        Severity = severity_conditional(warn_simple_code, yes,
            severity_warning, no),
        SelfSpec = error_spec(Severity, phase_parse_tree_to_hlds, [SelfMsg]),
        !:Specs = [SelfSpec | !.Specs]
    else
        true
    ).

:- pred warn_imported_ancestor(module_name::in, prog_context::in,
    module_name::in, list(error_spec)::in, list(error_spec)::out) is det.

warn_imported_ancestor(ModuleName, Context, AncestorName, !Specs) :-
    MainPieces = [words("Module"), sym_name(ModuleName),
        words("imports its own ancestor, module"),
        sym_name(AncestorName), words(".")],
    VerbosePieces = [words("Every sub-module"),
        words("implicitly imports its ancestors."),
        words("There is no need to explicitly import them.")],
    Msg = simple_msg(Context,
        [option_is_set(warn_simple_code, yes,
            [always(MainPieces),
            verbose_only(verbose_always, VerbosePieces)])]),
    Severity = severity_conditional(warn_simple_code, yes,
        severity_warning, no),
    Spec = error_spec(Severity, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

%---------------------------------------------------------------------------%

    % This predicate ensures that every import_module declaration is checked
    % against every use_module declaration, except for the case where
    % the interface has `:- use_module foo.' and the implementation
    % `:- import_module foo.'.
    %
:- pred warn_if_duplicate_use_import_decls(module_name::in, prog_context::in,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_if_duplicate_use_import_decls(ModuleName, Context,
        IntImportedModules0, IntImportedModules,
        IntUsedModules0, IntUsedModules,
        ImpImportedModules0, ImpImportedModules,
        ImpUsedModules0, ImpUsedModules, !Specs) :-

    do_warn_if_duplicate_use_import_decls(ModuleName, Context,
        IntImportedModules0, IntImportedModules1,
        IntUsedModules0, IntUsedModules, !Specs),
    do_warn_if_duplicate_use_import_decls(ModuleName, Context,
        IntImportedModules1, IntImportedModules,
        ImpUsedModules0, ImpUsedModules1, !Specs),

    do_warn_if_duplicate_use_import_decls(ModuleName, Context,
        ImpImportedModules0, ImpImportedModules,
        ImpUsedModules1, ImpUsedModules, !Specs).

    % Report warnings for modules imported using both `:- use_module'
    % and `:- import_module'. Remove the unnecessary `:- use_module'
    % declarations.
    %
:- pred do_warn_if_duplicate_use_import_decls(module_name::in,
    prog_context::in,
    list(module_name)::in, list(module_name)::out,
    list(module_name)::in, list(module_name)::out,
    list(error_spec)::in, list(error_spec)::out) is det.

do_warn_if_duplicate_use_import_decls(_ModuleName, Context,
        !ImportedModules, !UsedModules, !Specs) :-
    set.list_to_set(!.ImportedModules, ImportedSet),
    set.list_to_set(!.UsedModules, UsedSet),
    set.intersect(ImportedSet, UsedSet, BothSet),
    ( if set.is_empty(BothSet) then
        true
    else
        set.to_sorted_list(BothSet, BothList),
        Pieces = [words("Warning:"),
            words(choose_number(BothList, "module", "modules"))] ++
            component_list_to_pieces(list.map(wrap_symname, BothList)) ++
            [words(choose_number(BothList, "is", "are")),
            words("imported using both"), decl("import_module"),
            words("and"), decl("use_module"), words("declarations."), nl],
        Msg = simple_msg(Context,
            [option_is_set(warn_simple_code, yes, [always(Pieces)])]),
        Severity = severity_conditional(warn_simple_code, yes,
            severity_warning, no),
        Spec = error_spec(Severity, phase_parse_tree_to_hlds, [Msg]),
        !:Specs = [Spec | !.Specs],

        % Treat the modules with both types of import as if they
        % were imported using `:- import_module.'
        list.delete_elems(!.UsedModules, BothList, !:UsedModules)
    ).

:- func wrap_symname(module_name) = format_component.

wrap_symname(ModuleName) = sym_name(ModuleName).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

process_module_private_interfaces(_, _, [], _, _,
        !DirectImports, !DirectUses, !ModuleAndImports, !IO).
process_module_private_interfaces(Globals, HaveReadModuleMaps,
        [Ancestor | Ancestors], NewIntSection, NewImpSection,
        !DirectImports, !DirectUses, !ModuleAndImports, !IO) :-
    ModuleName = !.ModuleAndImports ^ mai_module_name,
    expect_not(unify(Ancestor, ModuleName), $module, $pred,
        "module is its own ancestor?"),
    ModAncestors0 = !.ModuleAndImports ^ mai_parent_deps,
    ( if list.member(Ancestor, ModAncestors0) then
        % We have already read it.
        true
    else
        maybe_return_timestamp(!.ModuleAndImports ^ mai_maybe_timestamp_map,
            ReturnTimestamp),
        maybe_read_module_int(Globals, HaveReadModuleMaps ^ hrmm_int,
            "Reading private interface for module", do_search,
            Ancestor, ifk_int0, _AncestorFileName,
            ReturnTimestamp, MaybeTimestamp,
            PrivateIntParseTree, PrivateIntSpecs, PrivateIntErrors, !IO),

        maybe_record_timestamp(Ancestor, ifk_int0, may_be_unqualified,
            MaybeTimestamp, !ModuleAndImports),

        PrivateIntParseTree = parse_tree_int(_, _, PrivateIntContext,
            PrivateIntIntItems, PrivateIntImplItems),
        int_impl_items_to_specified_item_blocks(PrivateIntContext,
            NewIntSection(Ancestor), PrivateIntIntItems,
            NewImpSection(Ancestor), PrivateIntImplItems,
            PrivateIntItemBlocks),

        module_and_imports_add_item_blocks_specs_errors(PrivateIntItemBlocks,
            PrivateIntSpecs, PrivateIntErrors, !ModuleAndImports),

        globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
        maybe_report_stats(Statistics, !IO),

        set.intersect(PrivateIntErrors, fatal_read_module_errors,
            FatalPrivateIntErrors),
        ( if set.is_empty(FatalPrivateIntErrors) then
            ModAncestors = [Ancestor | ModAncestors0]
        else
            ModAncestors = ModAncestors0
        ),
        get_dependencies_in_item_blocks(PrivateIntItemBlocks,
            AncDirectImports, AncDirectUses),
        !:DirectImports = !.DirectImports ++ AncDirectImports,
        !:DirectUses = !.DirectUses ++ AncDirectUses,
        !ModuleAndImports ^ mai_parent_deps := ModAncestors
    ),
    process_module_private_interfaces(Globals, HaveReadModuleMaps,
        Ancestors, NewIntSection, NewImpSection,
        !DirectImports, !DirectUses, !ModuleAndImports, !IO).

%---------------------------------------------------------------------------%

process_module_long_interfaces(_, _, _, [], _IntFileKind, _, _,
        !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO).
process_module_long_interfaces(Globals, HaveReadModuleMaps, NeedQualifier,
        [Import | Imports], IntFileKind, NewIntSection, NewImpSection,
        !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO) :-
    ModuleName = !.ModuleAndImports ^ mai_module_name,
    ModImplementationImports0 = !.ModuleAndImports ^ mai_impl_deps,
    ( if
        % Have we already read it?
        ( Import = ModuleName
        ; list.member(Import, !.ModuleAndImports ^ mai_parent_deps)
        ; list.member(Import, !.ModuleAndImports ^ mai_int_deps)
        ; list.member(Import, ModImplementationImports0)
        )
    then
        true
    else
        maybe_return_timestamp(!.ModuleAndImports ^ mai_maybe_timestamp_map,
            ReturnTimestamp),
        maybe_read_module_int(Globals, HaveReadModuleMaps ^ hrmm_int,
            "Reading interface for module", do_search,
            Import, IntFileKind, _LongIntFileName,
            ReturnTimestamp, MaybeTimestamp,
            LongIntParseTree, LongIntSpecs, LongIntErrors, !IO),

        LongIntParseTree = parse_tree_int(_, _, LongIntContext,
            LongIntIntItems, LongIntImplItems),
        get_dependencies_in_items(LongIntIntItems,
            IndirectImports1, IndirectUses1),
        get_dependencies_in_items(LongIntImplItems,
            ImpIndirectImports1, ImpIndirectUses1),
        int_impl_items_to_specified_item_blocks(LongIntContext,
            NewIntSection(Import), LongIntIntItems,
            NewImpSection(Import), LongIntImplItems,
            LongIntItemBlocks),

        module_and_imports_add_item_blocks_specs_errors(LongIntItemBlocks,
            LongIntSpecs, LongIntErrors, !ModuleAndImports),

        globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
        maybe_report_stats(Statistics, !IO),

        set.intersect(LongIntErrors, fatal_read_module_errors,
            FatalLongIntErrors),
        ( if set.is_empty(FatalLongIntErrors) then
            maybe_record_timestamp(Import, IntFileKind, NeedQualifier,
                MaybeTimestamp, !ModuleAndImports),
            ModImplementationImports = [Import | ModImplementationImports0]
        else
            ModImplementationImports = ModImplementationImports0
        ),
        !:IndirectImports = !.IndirectImports ++ IndirectImports1
            ++ IndirectUses1,
        !:ImpIndirectImports = !.ImpIndirectImports
            ++ ImpIndirectImports1 ++ ImpIndirectUses1,
        !ModuleAndImports ^ mai_impl_deps := ModImplementationImports
    ),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        NeedQualifier, Imports, IntFileKind, NewIntSection, NewImpSection,
        !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO).

%---------------------------------------------------------------------------%

process_module_short_interfaces_and_impls_transitively(Globals,
        HaveReadModuleMaps, Imports, IntFileKind,
        NewIntSection, NewImpSection, !ModuleAndImports, !IO) :-
    process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        Imports, IntFileKind, NewIntSection, NewImpSection,
        [], ImpIndirectImports, !ModuleAndImports, !IO),
    (
        ImpIndirectImports = []
    ;
        ImpIndirectImports = [_ | _],
        process_module_short_interfaces_and_impls_transitively(Globals,
            HaveReadModuleMaps, ImpIndirectImports, IntFileKind,
            NewIntSection, NewImpSection, !ModuleAndImports, !IO)
    ).

process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        Imports, IntFileKind, NewIntSection, NewImpSection,
        !ImpIndirectImports, !ModuleAndImports, !IO) :-
    process_module_short_interfaces(Globals, HaveReadModuleMaps, Imports,
        IntFileKind, NewIntSection, NewImpSection, [], IndirectImports,
        !ImpIndirectImports, !ModuleAndImports, !IO),
    (
        IndirectImports = []
    ;
        IndirectImports = [_ | _],
        process_module_short_interfaces_transitively(Globals,
            HaveReadModuleMaps, IndirectImports, IntFileKind,
            NewIntSection, NewImpSection, !ImpIndirectImports,
            !ModuleAndImports, !IO)
    ).

process_module_short_interfaces(_, _, [], _, _, _,
        !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO).
process_module_short_interfaces(Globals, HaveReadModuleMaps,
        [Import | Imports], IntFileKind, NewIntSection, NewImpSection,
        !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO) :-
    ModIndirectImports0 = !.ModuleAndImports ^ mai_indirect_deps,
    ( if
        % Check if the imported module has already been imported.
        % XXX ITEM_LIST These lists should all be sets.
        ( Import = !.ModuleAndImports ^ mai_module_name
        ; list.member(Import, !.ModuleAndImports ^ mai_parent_deps)
        ; list.member(Import, !.ModuleAndImports ^ mai_int_deps)
        ; list.member(Import, !.ModuleAndImports ^ mai_impl_deps)
        ; list.member(Import, ModIndirectImports0)
        )
    then
        true
    else
        maybe_return_timestamp(!.ModuleAndImports ^ mai_maybe_timestamp_map,
            ReturnTimestamp),
        maybe_read_module_int(Globals, HaveReadModuleMaps ^ hrmm_int,
            "Reading short interface for module", do_search,
            Import, IntFileKind, _ImportFileName,
            ReturnTimestamp, MaybeTimestamp,
            ShortIntParseTree, ShortIntSpecs, ShortIntError, !IO),
        maybe_record_timestamp(Import, IntFileKind, must_be_qualified,
            MaybeTimestamp, !ModuleAndImports),

        ShortIntParseTree = parse_tree_int(_, _, ShortIntContext,
            ShortIntIntItems, ShortIntImplItems),
        get_dependencies_in_items(ShortIntIntItems, IntImports1, IntUses1),
        get_dependencies_in_items(ShortIntImplItems, ImpImports1, ImpUses1),
        int_impl_items_to_specified_item_blocks(ShortIntContext,
            NewIntSection(Import), ShortIntIntItems,
            NewImpSection(Import), ShortIntImplItems,
            ShortIntItemBlocks),

        module_and_imports_add_item_blocks_specs_errors(ShortIntItemBlocks,
            ShortIntSpecs, ShortIntError, !ModuleAndImports),

        globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
        maybe_report_stats(Statistics, !IO),

        ModIndirectImports = [Import | ModIndirectImports0],
        !:IndirectImports = !.IndirectImports ++ IntImports1 ++ IntUses1,
        !:ImpIndirectImports = !.ImpIndirectImports ++ ImpImports1 ++ ImpUses1,
        !ModuleAndImports ^ mai_indirect_deps := ModIndirectImports
    ),
    process_module_short_interfaces(Globals, HaveReadModuleMaps, Imports,
        IntFileKind, NewIntSection, NewImpSection, !IndirectImports,
        !ImpIndirectImports, !ModuleAndImports, !IO).

%---------------------------------------------------------------------------%

:- pred make_module_and_imports(file_name::in, module_name::in,
    module_name::in, prog_context::in, list(aug_item_block)::in,
    list(error_spec)::in, list(module_name)::in, list(module_name)::in,
    list(string)::in, foreign_include_file_infos::in,
    maybe(module_timestamp_map)::in, module_and_imports::out) is det.

make_module_and_imports(SourceFileName, SourceFileModuleName,
        ModuleName, ModuleNameContext, ItemBlocks0, Specs,
        PublicChildren, NestedChildren, FactDeps, ForeignIncludeFiles,
        MaybeTimestampMap, Module) :-
    % XXX The reason why make_module_and_imports is here and not in
    % module_imports.m is this call. This should be fixed, preferably
    % by changing the module_and_imports structure.
    % XXX ITEM_LIST ams_interface is a guess. The original code (whose
    % behavior the current code is trying to emulate) simply added
    % the generated items to a raw item list, seemingly without caring
    % about what section those items would end up (it certainly did not
    % look for any section markers).
    add_needed_foreign_import_module_items_to_item_blocks(ModuleName,
        ams_interface, ItemBlocks0, ItemBlocks),
    ItemBlocksCord = cord.from_list(ItemBlocks),
    set.init(Errors),
    Module = module_and_imports(SourceFileName, SourceFileModuleName,
        ModuleName, ModuleNameContext, [], [], [], [], [], PublicChildren,
        NestedChildren, FactDeps, cord.init, ForeignIncludeFiles,
        contains_foreign_code_unknown, contains_no_foreign_export,
        ItemBlocksCord, Specs, Errors, MaybeTimestampMap,
        no_main, dir.this_directory).

%---------------------------------------------------------------------------%

:- pred maybe_return_timestamp(maybe(T)::in, maybe_return_timestamp::out)
    is det.

maybe_return_timestamp(yes(_), do_return_timestamp).
maybe_return_timestamp(no, dont_return_timestamp).

:- pred maybe_record_timestamp(module_name::in, int_file_kind::in,
    need_qualifier::in, maybe(timestamp)::in,
    module_and_imports::in, module_and_imports::out) is det.

maybe_record_timestamp(ModuleName, IntFileKind, NeedQualifier, MaybeTimestamp,
        !ModuleAndImports) :-
    (
        !.ModuleAndImports ^ mai_maybe_timestamp_map = yes(TimestampMap0),
        (
            MaybeTimestamp = yes(Timestamp),
            FileKind = fk_int(IntFileKind),
            TimestampInfo =
                module_timestamp(FileKind, Timestamp, NeedQualifier),
            map.set(ModuleName, TimestampInfo, TimestampMap0, TimestampMap),
            !ModuleAndImports ^ mai_maybe_timestamp_map := yes(TimestampMap)
        ;
            MaybeTimestamp = no
        )
    ;
        !.ModuleAndImports ^ mai_maybe_timestamp_map = no
    ).

%---------------------------------------------------------------------------%

    % check_imports_accessibility(ModuleName, AugItemBlocks, ImportedModules,
    %     !Specs):
    %
    % By the time we are called, we should have read in all the appropriate
    % interface files, including, for every imported/used module, at least
    % the short interface for that module's parent module, which will contain
    % the `include_module' declarations for any exported submodules
    % of the parent. So the set of accessible submodules can be determined
    % by looking at every include_module declaration in AugItemBlocks.
    %
    % We then go through all of the imported/used modules (ImportedModules),
    % checking that each one is accessible, and generating an error message
    % for each one that is not accessible.
    %
    % XXX ITEM_LIST I (zs) don't know whether our caller will always give us
    % an ImportedModules list that covers every module listed in ImportUseMap,
    % or whether some modules may be missing for good reason. If the former,
    % then being given ImportedModules is unnecessary; we could just use
    % the set of keys of ImportUseMap.
    %
:- pred check_imports_accessibility(module_name::in, list(aug_item_block)::in,
    list(module_name)::in, list(error_spec)::in, list(error_spec)::out) is det.

check_imports_accessibility(ModuleName, AugItemBlocks, ImportedModules,
        !Specs) :-
    record_includes_imports_uses(AugItemBlocks, InclMap, ImportUseMap),
    list.foldl(check_module_accessibility(ModuleName, InclMap, ImportUseMap),
        ImportedModules, !Specs).

%---------------------%
%
% The module_inclusion_map and module_inclusion_map are computed by
% record_includes_imports_uses, for use by check_module_accessibility.
% For their documentation, see those predicates below.
%

:- type module_inclusion_map == map(module_name, one_or_more(term.context)).

:- type import_or_use
    --->    import_decl
    ;       use_decl.

:- type import_or_use_context
    --->    import_or_use_context(
                import_or_use,
                term.context
            ).

:- type module_import_or_use_map ==
    map(module_name, one_or_more(import_or_use_context)).

    % record_includes_imports_uses(AugItemBlocks, InclMap, ImportUseMap):
    %
    % Given AugItemBlocks, return two maps. The first, InclMap, maps
    % each the name of each included module to the location(s) of its
    % inclusions(s). The second, ImportUseMap, maps each the name of every
    % imported or used module to an import_or_use_context, which records
    % whether the module is being imported or used, and where.
    %
    % XXX ITEM_LIST The result of this should be stored in both raw and
    % augmented compilation units. (The raw version would of course be computed
    % from raw_item_blocks.)
    %
:- pred record_includes_imports_uses(list(aug_item_block)::in,
    module_inclusion_map::out, module_import_or_use_map::out) is det.

record_includes_imports_uses(AugItemBlocks, InclMap, ImportUseMap) :-
    record_includes_imports_uses_in_aug_item_blocks_acc(AugItemBlocks,
        map.init, InclMap, map.init, ImportUseMap).

:- pred record_includes_imports_uses_in_aug_item_blocks_acc(
    list(aug_item_block)::in,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_aug_item_blocks_acc([],
        !InclMap, !ImportUseMap).
record_includes_imports_uses_in_aug_item_blocks_acc(
        [AugItemBlock | AugItemBlocks], !InclMap, !ImportUseMap) :-
    AugItemBlock = item_block(AugSection, _, Items),
    (
        ( AugSection = ams_interface
        ; AugSection = ams_implementation
        ; AugSection = ams_impl_but_exported_to_submodules
        ; AugSection = ams_imported(_, _)
        ; AugSection = ams_used(_, _)
        ),
        Visible = yes
    ;
        ( AugSection = ams_abstract_imported(_)
        ; AugSection = ams_opt_imported(_)
        ; AugSection = ams_transitively_imported
        ),
        Visible = no
    ),
    record_includes_imports_uses_in_items_acc(Visible, Items,
        !InclMap, !ImportUseMap),
    record_includes_imports_uses_in_aug_item_blocks_acc(AugItemBlocks,
        !InclMap, !ImportUseMap).

:- pred record_includes_imports_uses_in_items_acc(bool::in, list(item)::in,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_items_acc(_, [], !InclMap, !ImportUseMap).
record_includes_imports_uses_in_items_acc(Visible, [Item | Items],
        !InclMap, !ImportUseMap) :-
    (
        Item = item_module_defn(ItemModuleDefn),
        ItemModuleDefn = item_module_defn_info(ModuleDefn, Context, _),
        (
            ModuleDefn = md_include_module(ModuleName),
            (
                Visible = yes,
                ( if map.search(!.InclMap, ModuleName, OneOrMore0) then
                    OneOrMore0 = one_or_more(HeadContext, TailContexts),
                    OneOrMore = one_or_more(Context,
                        [HeadContext | TailContexts]),
                    map.det_update(ModuleName, OneOrMore, !InclMap)
                else
                    OneOrMore = one_or_more(Context, []),
                    map.det_insert(ModuleName, OneOrMore, !InclMap)
                )
            ;
                Visible = no
            )
        ;
            ( ModuleDefn = md_import(ModuleName), ImportOrUse = import_decl
            ; ModuleDefn = md_use(ModuleName), ImportOrUse = use_decl
            ),
            % XXX ITEM_LIST Should we be ignoring Visible here?
            IoUC = import_or_use_context(ImportOrUse, Context),
            ( if map.search(!.ImportUseMap, ModuleName, OneOrMore0) then
                OneOrMore0 = one_or_more(HeadIoUC, TailIoUCs),
                OneOrMore = one_or_more(IoUC, [HeadIoUC | TailIoUCs]),
                map.det_update(ModuleName, OneOrMore, !ImportUseMap)
            else
                OneOrMore = one_or_more(IoUC, []),
                map.det_insert(ModuleName, OneOrMore, !ImportUseMap)
            )
        ;
            ModuleDefn = md_version_numbers(_, _)
        )
    ;
        ( Item = item_clause(_)
        ; Item = item_type_defn(_)
        ; Item = item_inst_defn(_)
        ; Item = item_mode_defn(_)
        ; Item = item_pred_decl(_)
        ; Item = item_mode_decl(_)
        ; Item = item_pragma(_)
        ; Item = item_promise(_)
        ; Item = item_typeclass(_)
        ; Item = item_instance(_)
        ; Item = item_initialise(_)
        ; Item = item_finalise(_)
        ; Item = item_mutable(_)
        ; Item = item_nothing(_)
        )
    ),
    record_includes_imports_uses_in_items_acc(Visible, Items,
        !InclMap, !ImportUseMap).

%---------------------%

    % check_module_accessibility(ModuleName, InclMap, ImportUseMap,
    %     ImportedModule, !Specs) :-
    %
    % Given the InclMap and ImportUseMap computed by the
    % record_includes_imports_uses_in_items predicate above,
    % check whether ImportedModule is accessible, and generate an error
    % message if it isn't.
    %
    % InclMap tells us what modules are accessible, and ImportUseMap tells
    % the location(s) where each imported module is imported (or used).
    %
    % XXX ITEM_LIST We should also be able to report duplicate imports,
    % duplicate uses, and modules that are both imported and used.
    % For generating good error messages about such problems, we would
    % probably need to record, for each import or use, not just the context,
    % but also the section in which that import or use occurred.
    %
:- pred check_module_accessibility(module_name::in, module_inclusion_map::in,
    module_import_or_use_map::in, module_name::in,
    list(error_spec)::in, list(error_spec)::out) is det.

check_module_accessibility(ModuleName, InclMap, ImportUseMap, ImportedModule,
        !Specs) :-
    (
        ImportedModule = qualified(ParentModule, SubModule),
        ( if map.search(InclMap, ImportedModule, _ImportedInclContexts) then
            true
        else
            map.lookup(ImportUseMap, ImportedModule, ImportsUses),
            ImportsUses = one_or_more(HeadIU, TailIUs),
            report_inaccessible_module_error(ModuleName,
                ParentModule, SubModule, HeadIU, !Specs),
            list.foldl(
                report_inaccessible_module_error(ModuleName,
                    ParentModule, SubModule),
                TailIUs, !Specs)
        )
    ;
        ImportedModule = unqualified(_)
        % For modules without parent modules, accessibility is moot.
    ).

:- pred report_inaccessible_module_error(module_name::in, module_name::in,
    string::in, import_or_use_context::in,
    list(error_spec)::in, list(error_spec)::out) is det.

% The error message should come out like this
% (the second sentence is included only with --verbose-errors):
% very_long_name.m:123: In module `very_long_name':
% very_long_name.m:123:   error in `import_module' declaration:
% very_long_name.m:123:   module `parent_module.sub_module' is inaccessible.
% very_long_name.m:123:   Either there was no prior `import_module' or
% very_long_name.m:123:   `use_module' declaration to import module
% very_long_name.m:123:   `parent_module', or the interface for module
% very_long_name.m:123:   `parent_module' does not contain an `include_module'
% very_long_name.m:123:   declaration for module `sub_module'.

report_inaccessible_module_error(ModuleName, ParentModule, SubModule,
        ImportOrUseContext, !Specs) :-
    ImportOrUseContext = import_or_use_context(ImportOrUse, Context),
    ( ImportOrUse = import_decl, DeclName = "import_module"
    ; ImportOrUse = use_decl, DeclName = "use_module"
    ),
    MainPieces = [words("In module"), sym_name(ModuleName), suffix(":"), nl,
        words("error in"), quote(DeclName), words("declaration:"), nl,
        words("module"), sym_name(qualified(ParentModule, SubModule)),
        words("is inaccessible."), nl],
    VerbosePieces = [words("Either there was no prior"),
        quote("import_module"),
            words("or"), quote("use_module"),
            words("declaration to import module"), sym_name(ParentModule),
            suffix(","), words("or the interface for module"),
            sym_name(ParentModule), words("does not contain an"),
            quote("include_module"), words("declaration for module"),
            quote(SubModule), suffix("."), nl],
    Msg = simple_msg(Context,
        [always(MainPieces), verbose_only(verbose_always, VerbosePieces)]),
    Spec = error_spec(severity_error, phase_parse_tree_to_hlds, [Msg]),
    !:Specs = [Spec | !.Specs].

%---------------------------------------------------------------------------%

    % replace_section_decls(ModuleName, NewIntSection, NewImpSection, !Items):
    %
    % Replace all ms_interfaces with NewIntSection(ModuleName)
    % Replace all ms_implementations with NewImpSection(ModuleName).
    %
:- pred replace_section_decls(module_name::in,
    aug_section_maker::in, aug_section_maker::in,
    list(raw_item_block)::in, list(aug_item_block)::out) is det.

replace_section_decls(_ModuleName, _NewIntSection, _NewImpSection, [], []).
replace_section_decls(ModuleName, NewIntSection, NewImpSection,
        [RawItemBlock | RawItemBlocks], [AugItemBlock | AugItemBlocks]) :-
    RawItemBlock = item_block(Section, Context, Items),
    (
        Section = ms_interface,
        AugSection = NewIntSection(ModuleName)
    ;
        Section = ms_implementation,
        AugSection = NewImpSection(ModuleName)
    ),
    AugItemBlock = item_block(AugSection, Context, Items),
    replace_section_decls(ModuleName, NewIntSection, NewImpSection,
        RawItemBlocks, AugItemBlocks).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

generate_module_dependencies(Globals, ModuleName, !IO) :-
    map.init(DepsMap),
    generate_dependencies(Globals, output_all_dependencies, do_not_search,
        ModuleName, DepsMap, !IO).

generate_file_dependencies(Globals, FileName, !IO) :-
    build_deps_map(Globals, FileName, ModuleName, DepsMap, !IO),
    generate_dependencies(Globals, output_all_dependencies, do_not_search,
        ModuleName, DepsMap, !IO).

generate_module_dependency_file(Globals, ModuleName, !IO) :-
    map.init(DepsMap),
    generate_dependencies(Globals, output_d_file_only, do_search, ModuleName,
        DepsMap, !IO).

generate_file_dependency_file(Globals, FileName, !IO) :-
    build_deps_map(Globals, FileName, ModuleName, DepsMap, !IO),
    generate_dependencies(Globals, output_d_file_only, do_search, ModuleName,
        DepsMap, !IO).

%---------------------------------------------------------------------------%

:- pred build_deps_map(globals::in, file_name::in,
    module_name::out, deps_map::out, io::di, io::uo) is det.

build_deps_map(Globals, FileName, ModuleName, DepsMap, !IO) :-
    % Read in the top-level file (to figure out its module name).
    read_module_src_from_file(Globals, FileName, "Reading file",
        do_not_search, always_read_module(dont_return_timestamp), _,
        ParseTreeSrc, Specs0, Error, !IO),
    split_into_compilation_units_perform_checks(ParseTreeSrc, CompUnits,
        Specs0, Specs),
    ParseTreeSrc = parse_tree_src(ModuleName, _, _),
    % XXX _NumErrors
    write_error_specs(Specs, Globals, 0, _NumWarnings, 0, _NumErrors, !IO),
    NestedModuleNames = list.map(compilation_unit_project_name, CompUnits),
    SourceFileName = FileName ++ ".m",
    list.map(
        init_module_and_imports(Globals, SourceFileName, ModuleName,
            NestedModuleNames, [], Error),
        CompUnits, ModuleAndImportsList),
    map.init(DepsMap0),
    list.foldl(insert_into_deps_map, ModuleAndImportsList, DepsMap0, DepsMap).

:- type generate_dependencies_mode
    --->    output_d_file_only
    ;       output_all_dependencies.

:- pred generate_dependencies(globals::in, generate_dependencies_mode::in,
    maybe_search::in, module_name::in, deps_map::in, io::di, io::uo) is det.

generate_dependencies(Globals, Mode, Search, ModuleName, DepsMap0, !IO) :-
    % First, build up a map of the dependencies.
    generate_deps_map(Globals, ModuleName, Search, DepsMap0, DepsMap, !IO),

    % Check whether we could read the main `.m' file.
    map.lookup(DepsMap, ModuleName, ModuleDep),
    ModuleDep = deps(_, ModuleImports),
    Errors = ModuleImports ^ mai_errors,
    set.intersect(Errors, fatal_read_module_errors, FatalErrors),
    ( if set.is_non_empty(FatalErrors) then
        ModuleString = sym_name_to_string(ModuleName),
        ( if set.contains(FatalErrors, rme_could_not_open_file) then
            string.append_list(["cannot read source file for module `",
                ModuleString, "'."], Message)
        else
            string.append_list(["cannot parse source file for module `",
                ModuleString, "'."], Message)
        ),
        report_error(Message, !IO)
    else
        (
            Mode = output_d_file_only
        ;
            Mode = output_all_dependencies,
            module_and_imports_get_source_file_name(ModuleImports,
                SourceFileName),
            generate_dependencies_write_dv_file(Globals, SourceFileName,
                ModuleName, DepsMap, !IO),
            generate_dependencies_write_dep_file(Globals, SourceFileName,
                ModuleName, DepsMap, !IO)
        ),

        % Compute the interface deps graph and the implementation deps
        % graph from the deps map.

        digraph.init(IntDepsGraph0),
        digraph.init(ImpDepsGraph0),
        map.values(DepsMap, DepsList),
        deps_list_to_deps_graph(DepsList, DepsMap, IntDepsGraph0, IntDepsGraph,
            ImpDepsGraph0, ImpDepsGraph),
        maybe_output_imports_graph(Globals, ModuleName,
            IntDepsGraph, ImpDepsGraph, !IO),

        % Compute the trans-opt deps ordering, by doing an approximate
        % topological sort of the implementation deps, and then finding
        % the subset of those for which of those we have (or can make)
        % trans-opt files.

        digraph.atsort(ImpDepsGraph, ImpDepsOrdering0),
        maybe_output_module_order(Globals, ModuleName, ImpDepsOrdering0, !IO),
        list.map(set.to_sorted_list, ImpDepsOrdering0, ImpDepsOrdering),
        list.condense(ImpDepsOrdering, TransOptDepsOrdering0),
        globals.lookup_accumulating_option(Globals, intermod_directories,
            IntermodDirs),
        get_opt_deps(Globals, yes, TransOptDepsOrdering0, IntermodDirs,
            ".trans_opt", TransOptDepsOrdering, !IO),

        trace [compiletime(flag("deps_graph")), runtime(env("DEPS_GRAPH")),
            io(!TIO)]
        (
            digraph.to_assoc_list(ImpDepsGraph, ImpDepsAL),
            io.print("ImpDepsAL:\n", !TIO),
            io.write_list(ImpDepsAL, "\n", print, !TIO),
            io.nl(!TIO)
        ),

        % Compute the indirect dependencies: they are equal to the composition
        % of the implementation dependencies with the transitive closure of the
        % implementation dependencies. (We used to take the transitive closure
        % of the interface dependencies, but we now include implementation
        % details in the interface files).

        digraph.tc(ImpDepsGraph, TransImpDepsGraph),
        digraph.compose(ImpDepsGraph, TransImpDepsGraph, IndirectDepsGraph),

        % Compute the indirect optimization dependencies: indirect
        % dependencies including those via `.opt' or `.trans_opt' files.
        % Actually we cannot compute that, since we don't know
        % which modules the `.opt' files will import!
        % Instead, we need to make a conservative (over-)approximation,
        % and assume that the each module's `.opt' file might import any
        % of that module's implementation dependencies; in actual fact,
        % it will be some subset of that.

        digraph.tc(ImpDepsGraph, IndirectOptDepsGraph),

        (
            Mode = output_d_file_only,
            DFilesToWrite = [ModuleDep]
        ;
            Mode = output_all_dependencies,
            DFilesToWrite = DepsList
        ),
        generate_dependencies_write_d_files(Globals, DFilesToWrite,
            IntDepsGraph, ImpDepsGraph,
            IndirectDepsGraph, IndirectOptDepsGraph,
            TransOptDepsOrdering, DepsMap, !IO)
    ),

    % For Java, the main target is actually a shell script which will
    % set CLASSPATH appropriately and invoke java on the appropriate
    % .class file. Rather than generating an Mmake rule to build this
    % file when it is needed, we just generate this file "mmake depend"
    % time, since that is simpler and probably more efficient anyway.

    globals.get_target(Globals, Target),
    ( if
        Target = target_java,
        Mode = output_all_dependencies
    then
        create_java_shell_script(Globals, ModuleName, _Succeeded, !IO)
    else
        true
    ).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

get_included_modules_in_item_blocks(ItemBlocks, IncludedModuleNames) :-
    get_included_modules_in_blocks(ItemBlocks,
        cord.init, IncludedModuleNamesCord),
    IncludedModuleNames = cord.list(IncludedModuleNamesCord).

get_included_modules_in_items(Items, IncludedModuleNames) :-
    get_included_modules_in_items(Items,
        cord.init, IncludedModuleNamesCord),
    IncludedModuleNames = cord.list(IncludedModuleNamesCord).

:- pred get_included_modules_in_blocks(list(item_block(MS))::in,
    cord(module_name)::in, cord(module_name)::out) is det.

get_included_modules_in_blocks([], !IncludedModuleNamesCord).
get_included_modules_in_blocks([ItemBlock | ItemBlocks],
        !IncludedModuleNamesCord) :-
    ItemBlock = item_block(_, _, Items),
    get_included_modules_in_items(Items, !IncludedModuleNamesCord),
    get_included_modules_in_blocks(ItemBlocks, !IncludedModuleNamesCord).

:- pred get_included_modules_in_items(list(item)::in,
    cord(module_name)::in, cord(module_name)::out) is det.

get_included_modules_in_items([], !IncludedModuleNamesCord).
get_included_modules_in_items([Item | Items], !IncludedModuleNamesCord) :-
    ( if
        Item = item_module_defn(ItemModuleDefn),
        ItemModuleDefn = item_module_defn_info(ModuleDefn, _, _),
        ModuleDefn = md_include_module(ModuleName)
    then
        !:IncludedModuleNamesCord =
            cord.snoc(!.IncludedModuleNamesCord, ModuleName)
    else
        true
    ),
    get_included_modules_in_items(Items, !IncludedModuleNamesCord).

%---------------------------------------------------------------------------%
:- end_module parse_tree.modules.
%---------------------------------------------------------------------------%
