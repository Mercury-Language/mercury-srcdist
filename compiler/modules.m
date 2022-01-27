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
% Given a module_and_imports structure initialized for a raw_comp_unit,
% this module has the task of figuring out which interface files the
% raw_comp_unit needs either directly or indirectly, and reading them in,
% adding them to the module_and_imports structure. If intermodule optimization
% is enabled, then intermod.m or trans_opt.m will figure out what optimization
% files the compilation unit can use, again either directly or indirectly,
% and adding those to the module_and_imports structure. When all this is done,
% the module_and_imports structure will contain an augmented version
% of the original compilation unit.
%
% The roles of the interface files (.int0, .int3, .int2 and .int) that
% this module reads in are documented (to the extent that they are documented
% anywhere) in the module that creates them, which is
% write_module_interface_files.m.
%
%---------------------------------------------------------------------------%

:- module parse_tree.modules.
:- interface.

:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module libs.timestamp.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.file_kind.
:- import_module parse_tree.module_imports.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.read_modules.
:- import_module parse_tree.status.

:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module set.

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
    module_name::in, maybe(timestamp)::in, set(module_name)::in,
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

:- type int_section_maker(MS) ==
    (func(module_name, int_file_kind) = MS).

:- type section_appender(MS) ==
    (pred(list(item_block(MS)), module_and_imports, module_and_imports)).
:- inst section_appender ==
    (pred(in, in, out) is det).

    % process_module_private_interfaces(Globals, Ancestors,
    %   NewIntSection, NewImpSection, SectionAppend,
    %   !DirectImports, !DirectUses, !ModuleAndImports, !IO):
    %
    % Read the complete private interfaces (.int0 files) for all the modules
    % in Ancestors. For each ancestor read, append any imports/uses of modules
    % to the !DirectImports or !DirectUses.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the int_module_section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the int_module_section section kind generated by NewImpSection.
    %
:- pred process_module_private_interfaces(globals::in,
    have_read_module_maps::in, set(module_name)::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_long_interfaces(Globals, HaveReadModuleMaps,
    %   NeedQual, Imports, IntFileKind,
    %   NewIntSection, NewImpSection, SectionAppend,
    %   !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO):
    %
    % Read the interface files (.int or .int2, as indicated by IntFileKind)
    % for all the modules in Imports (unless they have already been read in),
    % and append any imports/uses in those modules to the IndirectImports list,
    % and append any imports/uses in the implementation sections of those
    % modules to the ImpIndirectImports list.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the int_module_section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the int_module_section kind generated by NewImpSection.
    %
:- pred process_module_long_interfaces(globals::in, have_read_module_maps::in,
    need_qualifier::in, set(module_name)::in, int_file_kind::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
    %   IndirectImports, IntFileKind,
    %   NewIntSection, NewImpSection, SectionAppend,
    %   !ImpIndirectImports, !ModuleAndImports):
    %
    % Read the short interfaces (.int3) for modules in IndirectImports
    % (unless they have already been read in), and any modules that those
    % modules import (transitively) in the interface.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the int_module_section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the int_module_section kind generated by NewImpSection.
    %
:- pred process_module_short_interfaces_transitively(globals::in,
    have_read_module_maps::in, set(module_name)::in, int_file_kind::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_short_interfaces_and_impls_transitively(Globals,
    %   HaveReadModuleMaps, IndirectImports, IntFileKind,
    %   NewIntSection, NewImpSection, SectionAppend, !ModuleAndImports):
    %
    % Read the short interfaces for modules in IndirectImports (unless they've
    % already been read in) and any modules that those modules import
    % (transitively) in the interface or implementation.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the int_module_section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the int_module_section kind generated by NewImpSection.
    %
:- pred process_module_short_interfaces_and_impls_transitively(globals::in,
    have_read_module_maps::in, set(module_name)::in, int_file_kind::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

    % process_module_short_interfaces(Globals, HaveReadModuleMaps,
    %   Modules, IntFileKind, NewIntSection, NewImpSection, SectionAppend,
    %   !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO):
    %
    % Read the short interfaces for modules in Modules (unless they have already
    % been read in). Append the modules imported by the interface of Modules to
    % !IndirectImports. Append the modules imported by the implementation of
    % Modules to !ImpIndirectImports.
    %
    % Append all the item blocks in the read-in files to !ModuleAndImports,
    % putting all the ms_interface blocks in the int_module_section kind
    % generated by NewIntSection, and putting all the ms_implementation blocks
    % in the int_module_section kind generated by NewImpSection.
    %
:- pred process_module_short_interfaces(globals::in,
    have_read_module_maps::in, set(module_name)::in, int_file_kind::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.options.
:- import_module parse_tree.comp_unit_interface.    % undesirable dependency
:- import_module parse_tree.error_util.
:- import_module parse_tree.file_names.
:- import_module parse_tree.get_dependencies.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_io_error.

:- import_module bool.
:- import_module cord.
:- import_module dir.
:- import_module map.
:- import_module require.
:- import_module term.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

grab_imported_modules(Globals, SourceFileName, SourceFileModuleName,
        MaybeTimestamp, NestedChildren, RawCompUnit0, HaveReadModuleMaps,
        !:ModuleAndImports, !IO) :-
    % XXX ITEM_LIST Why aren't we updating !HaveReadModuleMaps?
    RawCompUnit0 = raw_compilation_unit(ModuleName, ModuleNameContext,
        RawItemBlocks0),

    % Find out which modules this one depends on.
    get_dependencies_int_imp_in_raw_item_blocks(RawItemBlocks0,
        IntImportedModules0, IntUsedModules0,
        ImpImportedModules0, ImpUsedModules0),

    set.union(IntImportedModules0, ImpImportedModules0, ImportedModules0),
    set.union(IntUsedModules0, ImpUsedModules0, UsedModules0),

    some [!Specs] (
        !:Specs = [],

        ( if ModuleNameContext = term.context_init then
            module_name_to_file_name(Globals, ModuleName, ".m",
                do_not_create_dirs, FileName, !IO),
            Context = term.context_init(FileName, 1)
        else
            Context = ModuleNameContext
        ),

        AncestorModules = set.list_to_set(get_ancestors(ModuleName)),
        warn_if_import_self_or_ancestor(ModuleName, Context, AncestorModules,
            ImportedModules0, UsedModules0, !Specs),

        warn_if_duplicate_use_import_decls(ModuleName, Context,
            IntImportedModules0, IntImportedModules1,
            IntUsedModules0, IntUsedModules1,
            ImpImportedModules0, ImpImportedModules,
            ImpUsedModules0, ImpUsedModules, !Specs),

        get_src_item_blocks_public_children(RawCompUnit0,
            SrcItemBlocks1, PublicChildren),

        % XXX ITEM_LIST Store the info we now find by these traversals
        % in the raw_comp_unit.
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

        make_module_and_imports(SourceFileName, SourceFileModuleName,
            ModuleName, ModuleNameContext, SrcItemBlocks1, !.Specs,
            PublicChildren, NestedChildren, FactDeps,
            ForeignIncludeFiles, MaybeTimestampMap, !:ModuleAndImports),

        % Add `builtin' and `private_builtin', and any other builtin modules
        % needed by any of the items, to the imported modules.
        % XXX Why are these added to the interface, and not the implementation
        % dependencies?
        get_implicit_dependencies_in_item_blocks(Globals, SrcItemBlocks1,
            ImplicitIntImportedModules, ImplicitIntUsedModules),
        set.union(ImplicitIntImportedModules, IntImportedModules1,
            IntImportedModules2),
        set.union(ImplicitIntUsedModules, IntUsedModules1, IntUsedModules2),

        % Process the ancestor modules.
        %
        % Uses of the items declared in ancestor modules do not need
        % module qualifiers. Modules imported by ancestors are considered
        % to be visible in the current module.
        process_module_private_interfaces(Globals, HaveReadModuleMaps,
            AncestorModules,
            make_ims_imported(import_locn_interface),
            make_ims_imported(import_locn_ancestor_private_interface_proper),
            module_and_imports_add_direct_int_item_blocks,
            IntImportedModules2, IntImportedModules,
            IntUsedModules2, IntUsedModules, !ModuleAndImports, !IO),

        % Process the modules imported using `import_module'.
        % Uses of these items do not need module qualifiers.
        set.init(IntIndirectImports0),
        set.init(IntImpIndirectImports0),
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            may_be_unqualified, IntImportedModules, ifk_int,
            make_ims_imported(import_locn_interface),
            make_ims_abstract_imported,
            module_and_imports_add_direct_int_item_blocks,
            IntIndirectImports0, IntIndirectImports1,
            IntImpIndirectImports0, IntImpIndirectImports1,
            !ModuleAndImports, !IO),

        set.init(ImpIndirectImports0),
        set.init(ImpImpIndirectImports0),
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            may_be_unqualified, ImpImportedModules, ifk_int,
            make_ims_imported(import_locn_implementation),
            make_ims_abstract_imported,
            module_and_imports_add_direct_int_item_blocks,
            ImpIndirectImports0, ImpIndirectImports1,
            ImpImpIndirectImports0, ImpImpIndirectImports1,
            !ModuleAndImports, !IO),

        % Process the modules imported using `use_module' .
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            must_be_qualified, IntUsedModules, ifk_int,
            make_ims_used(import_locn_interface),
            make_ims_abstract_imported,
            module_and_imports_add_direct_int_item_blocks,
            IntIndirectImports1, IntIndirectImports,
            IntImpIndirectImports1, IntImpIndirectImports2,
            !ModuleAndImports, !IO),
        process_module_long_interfaces(Globals, HaveReadModuleMaps,
            must_be_qualified, ImpUsedModules, ifk_int,
            make_ims_used(import_locn_implementation),
            make_ims_abstract_imported,
            module_and_imports_add_direct_int_item_blocks,
            ImpIndirectImports1, ImpIndirectImports,
            ImpImpIndirectImports1, ImpImpIndirectImports2,
            !ModuleAndImports, !IO),

        process_module_short_interfaces_transitively(Globals,
            HaveReadModuleMaps, IntIndirectImports, ifk_int2,
            make_ims_used(import_locn_interface),
            make_ims_abstract_imported,
            module_and_imports_add_indirect_int_item_blocks,
            IntImpIndirectImports2, IntImpIndirectImports,
            !ModuleAndImports, !IO),
        process_module_short_interfaces_transitively(Globals,
            HaveReadModuleMaps, ImpIndirectImports, ifk_int2,
            make_ims_used(import_locn_implementation),
            make_ims_abstract_imported,
            module_and_imports_add_indirect_int_item_blocks,
            ImpImpIndirectImports2, ImpImpIndirectImports,
            !ModuleAndImports, !IO),

        % Process the short interfaces for modules imported in the
        % implementation of indirectly imported modules. The items in these
        % modules shouldn't be visible to typechecking -- they are used for
        % fully expanding equivalence types after the semantic checking passes.
        process_module_short_interfaces_and_impls_transitively(Globals,
            HaveReadModuleMaps, IntImpIndirectImports, ifk_int2,
            make_ims_abstract_imported, make_ims_abstract_imported,
            module_and_imports_add_indirect_int_item_blocks,
            !ModuleAndImports, !IO),
        process_module_short_interfaces_and_impls_transitively(Globals,
            HaveReadModuleMaps, ImpImpIndirectImports, ifk_int2,
            make_ims_abstract_imported, make_ims_abstract_imported,
            module_and_imports_add_indirect_int_item_blocks,
            !ModuleAndImports, !IO),

        module_and_imports_get_aug_comp_unit(!.ModuleAndImports, AugCompUnit,
            _, _),
        check_imports_accessibility(AugCompUnit,
            set.union_list([IntImportedModules, IntUsedModules,
                ImpImportedModules, ImpUsedModules]),
            [], AccessSpecs),
        module_and_imports_add_specs(AccessSpecs, !ModuleAndImports)
    ).

grab_unqual_imported_modules(Globals, SourceFileName, SourceFileModuleName,
        RawCompUnit0, !:ModuleAndImports, !IO) :-
    RawCompUnit0 = raw_compilation_unit(ModuleName, ModuleNameContext,
        RawItemBlocks0),
    % Find out which modules this one depends on.
    ParentDeps = get_ancestors(ModuleName),
    get_dependencies_int_imp_in_raw_item_blocks(RawItemBlocks0,
        IntImportDeps0, IntUseDeps0, ImpImportDeps, ImpUseDeps),

    % Construct the initial module import structure.
    raw_item_blocks_to_src(RawItemBlocks0, SrcItemBlocks),
    make_module_and_imports(SourceFileName, SourceFileModuleName,
        ModuleName, ModuleNameContext, SrcItemBlocks, [], set.init, set.init,
        [], cord.init, no, !:ModuleAndImports),

    % Add `builtin' and `private_builtin', and any other builtin modules
    % needed by any of the items, to the imported modules.
    % XXX Why are these added to the interface, and not the implementation
    % dependencies?
    get_implicit_dependencies_in_item_blocks(Globals, RawItemBlocks0,
        ImplicitIntImportDeps, ImplicitIntUseDeps),
    set.union(ImplicitIntImportDeps, IntImportDeps0, IntImportDeps),
    set.union(ImplicitIntUseDeps, IntUseDeps0, IntUseDeps),

    % Get the .int3s and .int0s that the current module depends on.
    HaveReadModuleMaps = have_read_module_maps(map.init, map.init, map.init),

    % First the .int0s for parent modules.
    process_module_private_interfaces(Globals, HaveReadModuleMaps,
        set.list_to_set(ParentDeps),
        make_ims_imported(import_locn_interface),
        make_ims_imported(import_locn_ancestor_private_interface_proper),
        module_and_imports_add_direct_int_item_blocks,
        set.init, ParentImportDeps, set.init, ParentUseDeps,
        !ModuleAndImports, !IO),

    % Then the .int3s for `:- import'-ed modules.
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, ParentImportDeps, ifk_int3,
        make_ims_imported(import_locn_ancestor), make_ims_abstract_imported,
        module_and_imports_add_direct_int_item_blocks,
        set.init, IntIndirectImportDeps0, set.init, _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, IntImportDeps, ifk_int3,
        make_ims_imported(import_locn_interface),
        make_ims_abstract_imported,
        module_and_imports_add_direct_int_item_blocks,
        IntIndirectImportDeps0, IntIndirectImportDeps1,
        set.init, _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, ImpImportDeps, ifk_int3,
        make_ims_imported(import_locn_implementation),
        make_ims_abstract_imported,
        module_and_imports_add_direct_int_item_blocks,
        set.init, ImpIndirectImportDeps0, set.init, _,
        !ModuleAndImports, !IO),

    % Then (after appropriate `:- used' decls) the .int3s for `:- use'-ed
    % modules.
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        may_be_unqualified, ParentUseDeps, ifk_int3,
        make_ims_imported(import_locn_ancestor), make_ims_abstract_imported,
        module_and_imports_add_direct_int_item_blocks,
        IntIndirectImportDeps1, IntIndirectImportDeps2,
        set.init, _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        must_be_qualified, IntUseDeps, ifk_int3,
        make_ims_used(import_locn_interface), make_ims_abstract_imported,
        module_and_imports_add_direct_int_item_blocks,
        IntIndirectImportDeps2, IntIndirectImportDeps,
        set.init, _, !ModuleAndImports, !IO),
    process_module_long_interfaces(Globals, HaveReadModuleMaps,
        must_be_qualified, ImpUseDeps, ifk_int3,
        make_ims_used(import_locn_implementation), make_ims_abstract_imported,
        module_and_imports_add_direct_int_item_blocks,
        ImpIndirectImportDeps0, ImpIndirectImportDeps,
        set.init, _, !ModuleAndImports, !IO),

    % Then (after appropriate `:- used' decl) the .int3s for indirectly
    % imported modules.
    process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        IntIndirectImportDeps, ifk_int3,
        make_ims_used(import_locn_interface), make_ims_abstract_imported,
        module_and_imports_add_indirect_int_item_blocks,
        set.init, _, !ModuleAndImports, !IO),

    process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        ImpIndirectImportDeps, ifk_int3,
        make_ims_used(import_locn_implementation), make_ims_abstract_imported,
        module_and_imports_add_indirect_int_item_blocks,
        set.init, _, !ModuleAndImports, !IO),

    module_and_imports_get_aug_comp_unit(!.ModuleAndImports, AugCompUnit,
        _, _),
    check_imports_accessibility(AugCompUnit,
        set.union_list([IntImportDeps, IntUseDeps, ImpImportDeps, ImpUseDeps]),
        [], AccessSpecs),
    module_and_imports_add_specs(AccessSpecs, !ModuleAndImports).

%---------------------------------------------------------------------------%

:- pred get_src_item_blocks_public_children(raw_compilation_unit::in,
    list(src_item_block)::out, set(module_name)::out) is det.

get_src_item_blocks_public_children(RawCompUnit,
        SrcItemBlocks, PublicChildren) :-
    RawCompUnit = raw_compilation_unit(_, _, RawItemBlocks),
    get_included_modules_in_item_blocks(RawItemBlocks, Children),
    ( if set.is_empty(Children) then
        raw_item_blocks_to_src(RawItemBlocks, SrcItemBlocks),
        set.init(PublicChildren)
    else
        get_int_and_impl(dont_include_impl_types, RawCompUnit,
            IFileItemBlocks, NoIFileItemBlocks),
        raw_item_blocks_to_src(IFileItemBlocks, IFileSrcItemBlocks),
        raw_item_blocks_to_split_src(NoIFileItemBlocks, NoIFileSrcItemBlocks),
        SrcItemBlocks = IFileSrcItemBlocks ++ NoIFileSrcItemBlocks,
        get_included_modules_in_item_blocks(IFileItemBlocks, PublicChildren)
    ).

:- pred raw_item_blocks_to_src(list(item_block(module_section))::in,
    list(item_block(src_module_section))::out) is det.

raw_item_blocks_to_src([], []).
raw_item_blocks_to_src([RawItemBlock | RawItemBlocks],
        [SrcItemBlock | SrcItemBlocks]) :-
    RawItemBlock = item_block(Section, SectionContext,
        Incls, Avails, Items),
    (
        Section = ms_interface,
        SrcSection = sms_interface
    ;
        Section = ms_implementation,
        SrcSection = sms_implementation
    ),
    SrcItemBlock = item_block(SrcSection, SectionContext,
        Incls, Avails, Items),
    raw_item_blocks_to_src(RawItemBlocks, SrcItemBlocks).

:- pred raw_item_blocks_to_split_src(list(raw_item_block)::in,
    list(src_item_block)::out) is det.

raw_item_blocks_to_split_src([], []).
raw_item_blocks_to_split_src([RawItemBlock | RawItemBlocks],
        !:SrcItemBlocks) :-
    raw_item_blocks_to_split_src(RawItemBlocks, !:SrcItemBlocks),
    RawItemBlock = item_block(_Section, SectionContext, Incls, Avails, Items),
    % _Section can sometimes (rarely) be ms_interface. This can happen
    % when an instance declaration occurs in the interface section of a module.
    % The abstract version of the declaration gets put into the interface,
    % but the full version gets put into the noifile item blocks, with
    % the original (i.e. ms_interface) section marker.
    % XXX ITEM_LIST Fix that section marker.
    split_items_into_clauses_and_decls(Items,
        [], RevClauses, [], RevImpDecls),
    ( if
        RevClauses = []
    then
        true
    else
        list.reverse(RevClauses, Clauses),
        ClauseItemBlock = item_block(sms_implementation,
            SectionContext, [], [], Clauses),
        !:SrcItemBlocks = [ClauseItemBlock | !.SrcItemBlocks]
    ),
    ( if
        Incls = [],
        Avails = [],
        RevImpDecls = []
    then
        true
    else
        list.reverse(RevImpDecls, ImpDecls),
        ImpDeclItemBlock = item_block(sms_impl_but_exported_to_submodules,
            SectionContext, Incls, Avails, ImpDecls),
        !:SrcItemBlocks = [ImpDeclItemBlock | !.SrcItemBlocks]
    ).

:- pred split_items_into_clauses_and_decls(list(item)::in,
    list(item)::in, list(item)::out, list(item)::in, list(item)::out) is det.

split_items_into_clauses_and_decls([], !RevClauses, !RevImpDecls).
split_items_into_clauses_and_decls([Item | Items],
        !RevClauses, !RevImpDecls) :-
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
            !:RevImpDecls = [Item | !.RevImpDecls]
        )
    ;
        % XXX ITEM_LIST I (zs) think that item_nothings should not be put
        % anywhere.
        ( Item = item_type_defn(_)
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
        !:RevImpDecls = [Item | !.RevImpDecls]
    ),
    split_items_into_clauses_and_decls(Items, !RevClauses, !RevImpDecls).

%---------------------------------------------------------------------------%

    % Warn if a module imports itself, or an ancestor.
    %
:- pred warn_if_import_self_or_ancestor(module_name::in, prog_context::in,
    set(module_name)::in, set(module_name)::in, set(module_name)::in,
    list(error_spec)::in, list(error_spec)::out) is det.

warn_if_import_self_or_ancestor(ModuleName, Context, AncestorModules,
        ImportedModules, UsedModules, !Specs) :-
    set.union(ImportedModules, UsedModules, ImportedOrUsedModules),
    set.intersect(AncestorModules, ImportedOrUsedModules,
        ImportedOrUsedAncestorModules),
    set.fold(warn_imported_ancestor(ModuleName, Context),
        ImportedOrUsedAncestorModules, !Specs),
    ( if set.member(ModuleName, ImportedOrUsedModules) then
        SelfPieces = [words("Warning: module"), sym_name(ModuleName),
            words("imports itself!"), nl],
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
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
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
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    list(error_spec)::in, list(error_spec)::out) is det.

do_warn_if_duplicate_use_import_decls(_ModuleName, Context,
        !ImportedModules, !UsedModules, !Specs) :-
    set.intersect(!.ImportedModules, !.UsedModules, BothSet),
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
        set.difference(!.UsedModules, BothSet, !:UsedModules)
    ).

:- func wrap_symname(module_name) = format_component.

wrap_symname(ModuleName) = sym_name(ModuleName).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

process_module_private_interfaces(Globals, HaveReadModuleMaps,
        Ancestors, NewIntSection, NewImpSection, SectionAppend,
        !DirectImports, !DirectUses, !ModuleAndImports, !IO) :-
    ( if set.remove_least(FirstAncestor, Ancestors, LaterAncestors) then
        ModuleName = !.ModuleAndImports ^ mai_module_name,
        expect_not(unify(FirstAncestor, ModuleName), $module, $pred,
            "module is its own ancestor?"),
        ModAncestors0 = !.ModuleAndImports ^ mai_parent_deps,
        ( if set.member(FirstAncestor, ModAncestors0) then
            % We have already read it.
            true
        else
            process_module_private_interface(Globals, HaveReadModuleMaps,
                FirstAncestor, NewIntSection, NewImpSection, SectionAppend,
                !DirectImports, !DirectUses, !ModuleAndImports, !IO)
        ),
        process_module_private_interfaces(Globals, HaveReadModuleMaps,
            LaterAncestors, NewIntSection, NewImpSection, SectionAppend,
            !DirectImports, !DirectUses, !ModuleAndImports, !IO)
    else
        true
    ).

:- pred process_module_private_interface(globals::in,
    have_read_module_maps::in, module_name::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_private_interface(Globals, HaveReadModuleMaps,
        Ancestor, NewIntSection, NewImpSection, SectionAppend,
        !DirectImports, !DirectUses, !ModuleAndImports, !IO) :-
    maybe_return_timestamp(!.ModuleAndImports ^ mai_maybe_timestamp_map,
        ReturnTimestamp),
    maybe_read_module_int(Globals, HaveReadModuleMaps ^ hrmm_int,
        "Reading private interface for module", do_search,
        Ancestor, ifk_int0, _AncestorFileName,
        ReturnTimestamp, MaybeTimestamp,
        PrivateIntParseTree, PrivateIntSpecs, PrivateIntErrors, !IO),

    maybe_record_timestamp(Ancestor, ifk_int0, may_be_unqualified,
        MaybeTimestamp, !ModuleAndImports),

    PrivateIntParseTree = parse_tree_int(PrivateIntModuleName,
        PrivateIntKind, PrivateIntContext, MaybeVersionNumbers,
        PrivateIntIntIncls, PrivateIntImpIncls,
        PrivateIntIntAvails, PrivateIntImpAvails,
        PrivateIntIntItems, PrivateIntImpItems),
    module_and_imports_maybe_add_module_version_numbers(
        PrivateIntModuleName, MaybeVersionNumbers, !ModuleAndImports),
    int_imp_items_to_item_blocks(PrivateIntContext,
        NewIntSection(Ancestor, PrivateIntKind),
        NewImpSection(Ancestor, PrivateIntKind),
        PrivateIntIntIncls, PrivateIntImpIncls,
        PrivateIntIntAvails, PrivateIntImpAvails,
        PrivateIntIntItems, PrivateIntImpItems,
        PrivateIntItemBlocks),

    get_dependencies_in_item_blocks(PrivateIntItemBlocks,
        AncDirectImports, AncDirectUses),
    set.union(AncDirectImports, !DirectImports),
    set.union(AncDirectUses, !DirectUses),

    SectionAppend(PrivateIntItemBlocks, !ModuleAndImports),
    module_and_imports_add_specs_errors(PrivateIntSpecs, PrivateIntErrors,
        !ModuleAndImports),

    globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
    maybe_report_stats(Statistics, !IO),

    set.intersect(PrivateIntErrors, fatal_read_module_errors,
        FatalPrivateIntErrors),
    ( if set.is_empty(FatalPrivateIntErrors) then
        ModAncestors0 = !.ModuleAndImports ^ mai_parent_deps,
        set.insert(Ancestor, ModAncestors0, ModAncestors),
        !ModuleAndImports ^ mai_parent_deps := ModAncestors
    else
        true
    ).

%---------------------------------------------------------------------------%

process_module_long_interfaces(Globals, HaveReadModuleMaps, NeedQual,
        Imports, IntFileKind, NewIntSection, NewImpSection,
        SectionAppend, !IndirectImports, !ImpIndirectImports,
        !ModuleAndImports, !IO) :-
    ( if set.remove_least(FirstImport, Imports, LaterImports) then
        ModuleName = !.ModuleAndImports ^ mai_module_name,
        ( if
            % Have we already read it?
            ( FirstImport = ModuleName
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_parent_deps)
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_int_deps)
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_imp_deps)
            )
        then
            true
        else
            process_module_long_interface(Globals, HaveReadModuleMaps,
                NeedQual, FirstImport, IntFileKind,
                NewIntSection, NewImpSection, SectionAppend,
                !IndirectImports, !ImpIndirectImports, !ModuleAndImports, !IO)
        ),
        process_module_long_interfaces(Globals, HaveReadModuleMaps, NeedQual,
            LaterImports, IntFileKind, NewIntSection, NewImpSection,
            SectionAppend, !IndirectImports, !ImpIndirectImports,
            !ModuleAndImports, !IO)
    else
        true
    ).

:- pred process_module_long_interface(globals::in, have_read_module_maps::in,
    need_qualifier::in, module_name::in, int_file_kind::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_long_interface(Globals, HaveReadModuleMaps, NeedQual,
        Import, IntFileKind, NewIntSection, NewImpSection,
        SectionAppend, !IndirectImports, !ImpIndirectImports,
        !ModuleAndImports, !IO) :-
    maybe_return_timestamp(!.ModuleAndImports ^ mai_maybe_timestamp_map,
        ReturnTimestamp),
    maybe_read_module_int(Globals, HaveReadModuleMaps ^ hrmm_int,
        "Reading interface for module", do_search,
        Import, IntFileKind, _LongIntFileName,
        ReturnTimestamp, MaybeTimestamp,
        LongIntParseTree, LongIntSpecs, LongIntErrors, !IO),

    LongIntParseTree = parse_tree_int(LongIntModuleName, LongIntKind,
        LongIntContext, MaybeVersionNumbers,
        LongIntIntIncls, LongIntImpIncls,
        LongIntIntAvails, LongIntImpAvails,
        LongIntIntItems, LongIntImpItems),
    module_and_imports_maybe_add_module_version_numbers(
        LongIntModuleName, MaybeVersionNumbers, !ModuleAndImports),
    get_dependencies_in_avails(LongIntIntAvails,
        IndirectImports1, IndirectUses1),
    get_dependencies_in_avails(LongIntImpAvails,
        ImpIndirectImports1, ImpIndirectUses1),
    int_imp_items_to_item_blocks(LongIntContext,
        NewIntSection(Import, LongIntKind), NewImpSection(Import, LongIntKind),
        LongIntIntIncls, LongIntImpIncls, LongIntIntAvails, LongIntImpAvails,
        LongIntIntItems, LongIntImpItems, LongIntItemBlocks),

    !:IndirectImports = set.union_list([!.IndirectImports,
        IndirectImports1, IndirectUses1]),
    !:ImpIndirectImports = set.union_list([!.ImpIndirectImports,
        ImpIndirectImports1, ImpIndirectUses1]),

    SectionAppend(LongIntItemBlocks, !ModuleAndImports),
    module_and_imports_add_specs_errors(LongIntSpecs, LongIntErrors,
        !ModuleAndImports),

    globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
    maybe_report_stats(Statistics, !IO),

    set.intersect(LongIntErrors, fatal_read_module_errors, FatalLongIntErrors),
    ( if set.is_empty(FatalLongIntErrors) then
        maybe_record_timestamp(Import, IntFileKind, NeedQual,
            MaybeTimestamp, !ModuleAndImports),
        ModImpImports0 = !.ModuleAndImports ^ mai_imp_deps,
        set.insert(Import, ModImpImports0, ModImpImports),
        !ModuleAndImports ^ mai_imp_deps := ModImpImports
    else
        true
    ).

%---------------------------------------------------------------------------%

process_module_short_interfaces_and_impls_transitively(Globals,
        HaveReadModuleMaps, Imports, IntFileKind,
        NewIntSection, NewImpSection, SectionAppend, !ModuleAndImports, !IO) :-
    process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        Imports, IntFileKind, NewIntSection, NewImpSection, SectionAppend,
        set.init, ImpIndirectImports, !ModuleAndImports, !IO),
    ( if set.is_empty(ImpIndirectImports) then
        true
    else
        process_module_short_interfaces_and_impls_transitively(Globals,
            HaveReadModuleMaps, ImpIndirectImports, IntFileKind,
            NewIntSection, NewImpSection, SectionAppend,
            !ModuleAndImports, !IO)
    ).

process_module_short_interfaces_transitively(Globals, HaveReadModuleMaps,
        Imports, IntFileKind, NewIntSection, NewImpSection, SectionAppend,
        !ImpIndirectImports, !ModuleAndImports, !IO) :-
    process_module_short_interfaces(Globals, HaveReadModuleMaps, Imports,
        IntFileKind, NewIntSection, NewImpSection, SectionAppend,
        set.init, IndirectImports, !ImpIndirectImports,
        !ModuleAndImports, !IO),
    ( if set.is_empty(IndirectImports) then
        true
    else
        process_module_short_interfaces_transitively(Globals,
            HaveReadModuleMaps, IndirectImports, IntFileKind,
            NewIntSection, NewImpSection, SectionAppend, !ImpIndirectImports,
            !ModuleAndImports, !IO)
    ).

process_module_short_interfaces(Globals, HaveReadModuleMaps,
        Imports, IntFileKind, NewIntSection, NewImpSection,
        SectionAppend, !IndirectImports, !ImpIndirectImports,
        !ModuleAndImports, !IO) :-
    ( if set.remove_least(FirstImport, Imports, LaterImports) then
        ( if
            % Check if the imported module has already been imported.
            % XXX ITEM_LIST These lists should all be sets.
            ( FirstImport = !.ModuleAndImports ^ mai_module_name
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_parent_deps)
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_int_deps)
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_imp_deps)
            ; set.member(FirstImport, !.ModuleAndImports ^ mai_indirect_deps)
            )
        then
            true
        else
            process_module_short_interface(Globals, HaveReadModuleMaps,
                FirstImport, IntFileKind, NewIntSection, NewImpSection,
                SectionAppend, !IndirectImports, !ImpIndirectImports,
                !ModuleAndImports, !IO)
        ),
        process_module_short_interfaces(Globals, HaveReadModuleMaps,
            LaterImports, IntFileKind, NewIntSection, NewImpSection,
            SectionAppend, !IndirectImports, !ImpIndirectImports,
            !ModuleAndImports, !IO)
    else
        true
    ).

:- pred process_module_short_interface(globals::in,
    have_read_module_maps::in, module_name::in, int_file_kind::in,
    int_section_maker(MS)::in, int_section_maker(MS)::in,
    section_appender(MS)::in(section_appender),
    set(module_name)::in, set(module_name)::out,
    set(module_name)::in, set(module_name)::out,
    module_and_imports::in, module_and_imports::out, io::di, io::uo) is det.

process_module_short_interface(Globals, HaveReadModuleMaps,
        Import, IntFileKind, NewIntSection, NewImpSection,
        SectionAppend, !IndirectImports, !ImpIndirectImports,
        !ModuleAndImports, !IO) :-
    maybe_return_timestamp(!.ModuleAndImports ^ mai_maybe_timestamp_map,
        ReturnTimestamp),
    maybe_read_module_int(Globals, HaveReadModuleMaps ^ hrmm_int,
        "Reading short interface for module", do_search,
        Import, IntFileKind, _ImportFileName,
        ReturnTimestamp, MaybeTimestamp,
        ShortIntParseTree, ShortIntSpecs, ShortIntError, !IO),
    maybe_record_timestamp(Import, IntFileKind, must_be_qualified,
        MaybeTimestamp, !ModuleAndImports),

    ShortIntParseTree = parse_tree_int(ShortIntModuleName, ShortIntKind,
        ShortIntContext, MaybeVersionNumbers,
        ShortIntIntIncls, ShortIntImpIncls,
        ShortIntIntAvails, ShortIntImpAvails,
        ShortIntIntItems, ShortIntImpItems),
    module_and_imports_maybe_add_module_version_numbers(
        ShortIntModuleName, MaybeVersionNumbers, !ModuleAndImports),
    get_dependencies_in_avails(ShortIntIntAvails, IntImports1, IntUses1),
    get_dependencies_in_avails(ShortIntImpAvails, ImpImports1, ImpUses1),
    int_imp_items_to_item_blocks(ShortIntContext,
        NewIntSection(Import, ShortIntKind),
        NewImpSection(Import, ShortIntKind),
        ShortIntIntIncls, ShortIntImpIncls,
        ShortIntIntAvails, ShortIntImpAvails,
        ShortIntIntItems, ShortIntImpItems,
        ShortIntItemBlocks),

    !:IndirectImports = set.union_list([!.IndirectImports,
        IntImports1, IntUses1]),
    !:ImpIndirectImports = set.union_list([!.ImpIndirectImports,
        ImpImports1, ImpUses1]),

    SectionAppend(ShortIntItemBlocks, !ModuleAndImports),
    module_and_imports_add_specs_errors(ShortIntSpecs, ShortIntError,
        !ModuleAndImports),

    globals.lookup_bool_option(Globals, detailed_statistics, Statistics),
    maybe_report_stats(Statistics, !IO),

    ModIndirectImports0 = !.ModuleAndImports ^ mai_indirect_deps,
    set.insert(Import, ModIndirectImports0, ModIndirectImports),
    !ModuleAndImports ^ mai_indirect_deps := ModIndirectImports.

%---------------------------------------------------------------------------%

:- pred make_module_and_imports(file_name::in, module_name::in,
    module_name::in, prog_context::in, list(src_item_block)::in,
    list(error_spec)::in, set(module_name)::in, set(module_name)::in,
    list(string)::in, foreign_include_file_infos::in,
    maybe(module_timestamp_map)::in, module_and_imports::out) is det.

make_module_and_imports(SourceFileName, SourceFileModuleName,
        ModuleName, ModuleNameContext, SrcItemBlocks0, Specs,
        PublicChildren, NestedChildren, FactDeps, ForeignIncludeFiles,
        MaybeTimestampMap, Module) :-
    % XXX The reason why make_module_and_imports is here and not in
    % module_imports.m is this call. This should be fixed, preferably
    % by changing the module_and_imports structure.
    % XXX ITEM_LIST oms_interface is a guess. The original code (whose
    % behavior the current code is trying to emulate) simply added
    % the generated items to a raw item list, seemingly without caring
    % about what section those items would end up (it certainly did not
    % look for any section markers).
    add_needed_foreign_import_module_items_to_item_blocks(ModuleName,
        sms_interface, SrcItemBlocks0, SrcItemBlocks),
    set.init(ParentDeps),
    set.init(IntDeps),
    set.init(ImpDeps),
    set.init(IndirectDeps),
    set.init(IncludeDeps),
    ForeignImports = cord.init,
    set.init(Errors),
    Module = module_and_imports(SourceFileName, SourceFileModuleName,
        ModuleName, ModuleNameContext,
        ParentDeps, IntDeps, ImpDeps, IndirectDeps, IncludeDeps,
        PublicChildren, NestedChildren, FactDeps,
        ForeignImports, ForeignIncludeFiles,
        contains_foreign_code_unknown, contains_no_foreign_export,
        SrcItemBlocks, cord.init, cord.init, cord.init, cord.init, map.init,
        Specs, Errors, MaybeTimestampMap, no_main, dir.this_directory).

%---------------------------------------------------------------------------%

:- pred maybe_return_timestamp(maybe(T)::in, maybe_return_timestamp::out)
    is det.

maybe_return_timestamp(yes(_), do_return_timestamp).
maybe_return_timestamp(no, dont_return_timestamp).

:- pred maybe_record_timestamp(module_name::in, int_file_kind::in,
    need_qualifier::in, maybe(timestamp)::in,
    module_and_imports::in, module_and_imports::out) is det.

maybe_record_timestamp(ModuleName, IntFileKind, NeedQual, MaybeTimestamp,
        !ModuleAndImports) :-
    (
        !.ModuleAndImports ^ mai_maybe_timestamp_map = yes(TimestampMap0),
        (
            MaybeTimestamp = yes(Timestamp),
            FileKind = fk_int(IntFileKind),
            TimestampInfo =
                module_timestamp(FileKind, Timestamp, NeedQual),
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
:- pred check_imports_accessibility(aug_compilation_unit::in,
    set(module_name)::in, list(error_spec)::in, list(error_spec)::out) is det.

check_imports_accessibility(AugCompUnit, ImportedModules,
        !Specs) :-
    AugCompUnit = aug_compilation_unit(ModuleName, _ModuleNameContext,
        _ModuleVersionNumbers, SrcItemBlocks,
        DirectIntItemBlocks, IndirectIntItemBlocks,
        OptItemBlocks, IntForOptItemBlocks),
    IntItemBlocks = DirectIntItemBlocks ++ IndirectIntItemBlocks,
    record_includes_imports_uses(SrcItemBlocks, IntItemBlocks, OptItemBlocks,
        IntForOptItemBlocks, InclMap, ImportUseMap),
    % XXX ITEM_LIST We should either record in an updated AugCompUnit
    % the set of imported modules that are inaccessible, or remove their
    % imports from it, so that we don't generate "unused module" warnings
    % for them when --warn-unused-imports is enabled.
    set.foldl(check_module_accessibility(ModuleName, InclMap, ImportUseMap),
        ImportedModules, !Specs).

%---------------------%
%
% The module_inclusion_map and module_inclusion_map are computed by
% record_includes_imports_uses, for use by check_module_accessibility.
% For their documentation, see those predicates below.
%

:- type module_inclusion_map == map(module_name, one_or_more(term.context)).

:- type import_or_use_context
    --->    import_or_use_context(
                import_or_use,
                term.context
            ).

:- type module_import_or_use_map ==
    map(module_name, one_or_more(import_or_use_context)).

    % record_includes_imports_uses(SrcItemBlocks, IntItemBlocks, OptItemBlocks,
    %   InclMap, ImportUseMap):
    %
    % Given all these item blocks, return two maps. The first, InclMap, maps
    % each the name of each included module to the location(s) of its
    % inclusions(s). The second, ImportUseMap, maps each the name of every
    % imported or used module to an import_or_use_context, which records
    % whether the module is being imported or used, and where.
    %
    % XXX ITEM_LIST The result of this should be stored in both raw and
    % augmented compilation units. (The raw version would of course be computed
    % from raw_item_blocks.)
    %
:- pred record_includes_imports_uses(list(src_item_block)::in,
    list(int_item_block)::in, list(opt_item_block)::in,
    list(int_for_opt_item_block)::in,
    module_inclusion_map::out, module_import_or_use_map::out) is det.

record_includes_imports_uses(SrcItemBlocks, IntItemBlocks, OptItemBlocks,
        IntForOptItemBlocks, !:InclMap, !:ImportUseMap) :-
    map.init(!:InclMap),
    map.init(!:ImportUseMap),
    record_includes_imports_uses_in_item_blocks_acc(SrcItemBlocks,
        src_section_visibility, !InclMap, !ImportUseMap),
    record_includes_imports_uses_in_item_blocks_acc(IntItemBlocks,
        int_section_visibility, !InclMap, !ImportUseMap),
    record_includes_imports_uses_in_item_blocks_acc(OptItemBlocks,
        opt_section_visibility, !InclMap, !ImportUseMap),
    record_includes_imports_uses_in_item_blocks_acc(IntForOptItemBlocks,
        int_for_opt_section_visibility, !InclMap, !ImportUseMap).

:- type section_visibility(MS) == (func(MS) = bool).

:- func src_section_visibility(src_module_section) = bool.
:- func int_section_visibility(int_module_section) = bool.
:- func opt_section_visibility(opt_module_section) = bool.
:- func int_for_opt_section_visibility(int_for_opt_module_section) = bool.

src_section_visibility(sms_interface) = yes.
src_section_visibility(sms_implementation) = yes.
src_section_visibility(sms_impl_but_exported_to_submodules) = yes.

int_section_visibility(ims_imported(_, _, _)) = yes.
int_section_visibility(ims_used(_, _, _)) = yes.
int_section_visibility(ims_abstract_imported(_, _)) = no.

opt_section_visibility(oms_opt_imported(_, _)) = no.

int_for_opt_section_visibility(ioms_opt_imported(_, _)) = no.

:- pred record_includes_imports_uses_in_item_blocks_acc(
    list(item_block(MS))::in, section_visibility(MS)::in,
    module_inclusion_map::in, module_inclusion_map::out,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_includes_imports_uses_in_item_blocks_acc([], _,
        !InclMap, !ImportUseMap).
record_includes_imports_uses_in_item_blocks_acc([ItemBlock | ItemBlocks],
        SectionVisibility, !InclMap, !ImportUseMap) :-
    ItemBlock = item_block(Section, _, Incls, Avails, _Items),
    Visible = SectionVisibility(Section),
    (
        Visible = yes,
        record_includes_acc(Incls, !InclMap)
    ;
        Visible = no
    ),
    % XXX Should we be ignoring Visible here?
    record_avails_acc(Avails, !ImportUseMap),
    record_includes_imports_uses_in_item_blocks_acc(ItemBlocks,
        SectionVisibility, !InclMap, !ImportUseMap).

:- pred record_includes_acc(list(item_include)::in,
    module_inclusion_map::in, module_inclusion_map::out) is det.

record_includes_acc([], !InclMap).
record_includes_acc([Include | Includes], !InclMap) :-
    Include = item_include(ModuleName, Context, _SeqNum),
    ( if map.search(!.InclMap, ModuleName, OneOrMore0) then
        OneOrMore0 = one_or_more(HeadContext, TailContexts),
        OneOrMore = one_or_more(Context, [HeadContext | TailContexts]),
        map.det_update(ModuleName, OneOrMore, !InclMap)
    else
        OneOrMore = one_or_more(Context, []),
        map.det_insert(ModuleName, OneOrMore, !InclMap)
    ),
    record_includes_acc(Includes, !InclMap).

:- pred record_avails_acc(list(item_avail)::in,
    module_import_or_use_map::in, module_import_or_use_map::out) is det.

record_avails_acc([], !ImportUseMap).
record_avails_acc([Avail | Avails], !ImportUseMap) :-
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
    record_avails_acc(Avails, !ImportUseMap).

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
:- end_module parse_tree.modules.
%---------------------------------------------------------------------------%
