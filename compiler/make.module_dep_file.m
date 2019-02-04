%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 expandtab
%-----------------------------------------------------------------------------%
% Copyright (C) 2002-2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: make.module_dep_file.m.
% Author: stayl.
%
% Code to read and write the `<module>.module_dep' files, which contain
% information about inter-module dependencies.
%
%-----------------------------------------------------------------------------%

:- module make.module_dep_file.
:- interface.

:- import_module parse_tree.module_imports.

:- import_module io.
:- import_module maybe.

%-----------------------------------------------------------------------------%

    % Get the dependencies for a given module.
    % Dependencies are generated on demand, not by a `mmc --make depend'
    % command, so this predicate may need to read the source for
    % the module.
    %
:- pred get_module_dependencies(module_name::in, maybe(module_imports)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

:- pred write_module_dep_file(module_imports::in, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.globals.
:- import_module libs.file_util.
:- import_module libs.process_util.
:- import_module parse_tree.error_util.
:- import_module parse_tree.file_names.
:- import_module parse_tree.mercury_to_mercury.
:- import_module parse_tree.modules.
:- import_module parse_tree.read_modules.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_io.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.prog_out.

:- import_module assoc_list.
:- import_module dir.
:- import_module getopt_io.
:- import_module parser.
:- import_module term.
:- import_module term_io.

%-----------------------------------------------------------------------------%

get_module_dependencies(ModuleName, MaybeImports, !Info, !IO) :-
    RebuildModuleDeps = !.Info ^ rebuild_module_deps,
    (
        ModuleName = unqualified(_),
        maybe_get_module_dependencies(RebuildModuleDeps, ModuleName,
            MaybeImports, !Info, !IO)
    ;
        ModuleName = qualified(_, _),
        (
            map.search(!.Info ^ module_dependencies, ModuleName,
                MaybeImportsPrime)
        ->
            MaybeImports = MaybeImportsPrime
        ;
            % For sub-modules, we need to generate the dependencies
            % for the parent modules first (make_module_dependencies
            % expects to be given the top-level module in a source file).
            % If the module is a nested module, its dependencies will be
            % generated as a side effect of generating the parent's
            % dependencies.

            Ancestors = get_ancestors(ModuleName),
            list.foldl3(generate_ancestor_dependencies(RebuildModuleDeps),
                Ancestors, no, Error, !Info, !IO),
            (
                Error = yes,
                MaybeImports = no,
                !:Info = !.Info ^ module_dependencies
                    ^ elem(ModuleName) := MaybeImports
            ;
                Error = no,
                maybe_get_module_dependencies(RebuildModuleDeps,
                    ModuleName, MaybeImports, !Info, !IO)
            )
        )
    ).

:- pred generate_ancestor_dependencies(rebuild_module_deps::in,
    module_name::in, bool::in, bool::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

generate_ancestor_dependencies(_, ModuleName, yes, yes, Info,
        Info ^ module_dependencies ^ elem(ModuleName) := no, !IO).
generate_ancestor_dependencies(RebuildModuleDeps, ModuleName, no, Error,
        !Info, !IO) :-
    maybe_get_module_dependencies(RebuildModuleDeps, ModuleName, MaybeImports,
        !Info, !IO),
    (
        MaybeImports = yes(_),
        Error = no
    ;
        MaybeImports = no,
        Error = yes
    ).

:- pred maybe_get_module_dependencies(rebuild_module_deps::in,
    module_name::in, maybe(module_imports)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

maybe_get_module_dependencies(RebuildModuleDeps, ModuleName, MaybeImports,
        !Info, !IO) :-
    ( map.search(!.Info ^ module_dependencies, ModuleName, MaybeImports0) ->
        MaybeImports = MaybeImports0
    ;
        do_get_module_dependencies(RebuildModuleDeps, ModuleName,
            MaybeImports, !Info, !IO)
    ).

:- pred do_get_module_dependencies(rebuild_module_deps::in, module_name::in,
    maybe(module_imports)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

do_get_module_dependencies(RebuildModuleDeps, ModuleName, !:MaybeImports,
        !Info, !IO) :-
    % We can't just use
    %   `get_target_timestamp(ModuleName - source, ..)'
    % because that could recursively call get_module_dependencies,
    % leading to an infinite loop. Just using module_name_to_file_name
    % will fail if the module name doesn't match the file name, but
    % that case is handled below.
    module_name_to_file_name(ModuleName, ".m", do_not_create_dirs,
        SourceFileName, !IO),
    get_file_timestamp([dir.this_directory], SourceFileName,
        MaybeSourceFileTimestamp, !Info, !IO),

    module_name_to_file_name(ModuleName, make_module_dep_file_extension,
        do_not_create_dirs, DepFileName, !IO),
    globals.io_lookup_accumulating_option(search_directories, SearchDirs, !IO),
    get_file_timestamp(SearchDirs, DepFileName, MaybeDepFileTimestamp,
        !Info, !IO),
    (
        MaybeSourceFileTimestamp = ok(SourceFileTimestamp),
        MaybeDepFileTimestamp = ok(DepFileTimestamp),
        (
            ( RebuildModuleDeps = do_not_rebuild_module_deps
            ; compare((>), DepFileTimestamp, SourceFileTimestamp)
            )
        ->
            % Since the source file was found in this directory, don't
            % use module_dep files which might be for installed copies
            % of the module.
            read_module_dependencies_no_search(RebuildModuleDeps, ModuleName,
                !Info, !IO)
        ;
            make_module_dependencies(ModuleName, !Info, !IO)
        )
    ;
        MaybeSourceFileTimestamp = error(_),
        MaybeDepFileTimestamp = ok(DepFileTimestamp),
        read_module_dependencies_search(RebuildModuleDeps, ModuleName, !Info,
            !IO),

        %
        % Check for the case where the module name doesn't match the
        % source file name (e.g. parse.m contains module mdb.parse). Get
        % the correct source file name from the module dependency file,
        % then check whether the module dependency file is up to date.
        %
        map.lookup(!.Info ^ module_dependencies, ModuleName, !:MaybeImports),
        (
            !.MaybeImports = yes(Imports0),
            Imports0 ^ module_dir = dir.this_directory
        ->
            SourceFileName1 = Imports0 ^ source_file_name,
            get_file_timestamp([dir.this_directory], SourceFileName1,
                MaybeSourceFileTimestamp1, !Info, !IO),
            (
                MaybeSourceFileTimestamp1 = ok(SourceFileTimestamp1),
                (
                    ( RebuildModuleDeps = do_not_rebuild_module_deps
                    ; compare((>), DepFileTimestamp, SourceFileTimestamp1)
                    )
                ->
                    true
                ;
                    make_module_dependencies(ModuleName, !Info, !IO)
                )
            ;
                MaybeSourceFileTimestamp1 = error(Message),
                io.write_string("** Error reading file `", !IO),
                io.write_string(SourceFileName1, !IO),
                io.write_string("' to generate dependencies: ", !IO),
                io.write_string(Message, !IO),
                io.write_string(".\n", !IO),
                maybe_write_importing_module(ModuleName,
                    !.Info ^ importing_module, !IO)
            )
        ;
            true
        )
    ;
        MaybeDepFileTimestamp = error(_),

        %
        % Try to make the dependencies. This will succeed when the
        % module name doesn't match the file name and the dependencies
        % for this module haven't been built before. It will fail if the
        % source file is in another directory.
        %
        (
            RebuildModuleDeps = do_rebuild_module_deps,
            make_module_dependencies(ModuleName, !Info, !IO)
        ;
            RebuildModuleDeps = do_not_rebuild_module_deps,
            !:Info = !.Info ^ module_dependencies ^ elem(ModuleName) := no
        )
    ),
    ( !:MaybeImports = !.Info ^ module_dependencies ^ elem(ModuleName) ->
        true
    ;
        !:MaybeImports = no,
        !:Info = !.Info ^ module_dependencies ^ elem(ModuleName) := no
    ).

%-----------------------------------------------------------------------------%

:- func module_dependencies_version_number = int.

module_dependencies_version_number = 1.

write_module_dep_file(Imports0, !IO) :-
    % Make sure all the required fields are filled in.
    globals.io_get_globals(Globals, !IO),
    strip_imported_items(Imports0 ^ items, Items),
    init_dependencies(Imports0 ^ source_file_name,
        Imports0 ^ source_file_module_name,
        Imports0 ^ nested_children, no_module_errors, Globals,
        Imports0 ^ module_name - Items, Imports),
    do_write_module_dep_file(Imports, !IO).

:- pred do_write_module_dep_file(module_imports::in, io::di, io::uo) is det.

do_write_module_dep_file(Imports, !IO) :-
    ModuleName = Imports ^ module_name,
    module_name_to_file_name(ModuleName, make_module_dep_file_extension,
        do_create_dirs, ProgDepFile, !IO),
    io.open_output(ProgDepFile, ProgDepResult, !IO),
    (
        ProgDepResult = ok(ProgDepStream),
        io.set_output_stream(ProgDepStream, OldOutputStream, !IO),
        io.write_string("module(", !IO),
        io.write_int(module_dependencies_version_number, !IO),
        io.write_string(", """, !IO),
        io.write_string(Imports ^ source_file_name, !IO),
        io.write_string(""",\n\t", !IO),
        mercury_output_bracketed_sym_name(
            Imports ^ source_file_module_name, !IO),
        io.write_string(",\n\t{", !IO),
        io.write_list(Imports ^ parent_deps,
            ", ", mercury_output_bracketed_sym_name, !IO),
        io.write_string("},\n\t{", !IO),
        io.write_list(Imports ^ int_deps,
            ", ", mercury_output_bracketed_sym_name, !IO),
        io.write_string("},\n\t{", !IO),
        io.write_list(Imports ^ impl_deps,
            ", ", mercury_output_bracketed_sym_name, !IO),
        io.write_string("},\n\t{", !IO),
        io.write_list(Imports ^ children,
            ", ", mercury_output_bracketed_sym_name, !IO),
        io.write_string("},\n\t{", !IO),
        io.write_list(Imports ^ nested_children,
            ", ", mercury_output_bracketed_sym_name, !IO),
        io.write_string("},\n\t{", !IO),
        io.write_list(Imports ^ fact_table_deps,
            ", ", io.write, !IO),
        io.write_string("},\n\t{", !IO),
        (
            Imports ^ has_foreign_code =
                contains_foreign_code(ForeignLanguages0)
        ->
            ForeignLanguages = set.to_sorted_list(ForeignLanguages0)
        ;
            ForeignLanguages = []
        ),
        io.write_list(ForeignLanguages, ", ",
            mercury_output_foreign_language_string, !IO),
        io.write_string("},\n\t{", !IO),
        io.write_list(Imports  ^ foreign_import_modules, ", ",
            (pred(ForeignImportModule::in, !.IO::di, !:IO::uo) is det :-
                ForeignImportModule = foreign_import_module_info(Lang,
                    ForeignImport, _),
                mercury_output_foreign_language_string(Lang, !IO),
                io.write_string(" - ", !IO),
                mercury_output_bracketed_sym_name(ForeignImport, !IO)
            ), !IO),
        io.write_string("},\n\t", !IO),
        contains_foreign_export_to_string(Imports ^ contains_foreign_export,
            ContainsForeignExportStr),
        io.write_string(ContainsForeignExportStr, !IO),
        io.write_string(",\n\t", !IO),
        has_main_to_string(Imports ^ has_main, HasMainStr),
        io.write_string(HasMainStr, !IO),
        io.write_string("\n).\n", !IO),
        io.set_output_stream(OldOutputStream, _, !IO),
        io.close_output(ProgDepStream, !IO)
    ;
        ProgDepResult = error(Error),
        io.error_message(Error, Msg),
        io.write_strings(["Error opening ", ProgDepFile,
            " for output: ", Msg, "\n"], !IO),
        io.set_exit_status(1, !IO)
    ).

:- pred contains_foreign_export_to_string(contains_foreign_export, string).
:- mode contains_foreign_export_to_string(in, out) is det.
:- mode contains_foreign_export_to_string(out, in) is semidet.

contains_foreign_export_to_string(ContainsForeignExport,
        ContainsForeignExportStr) :-
    (
        ContainsForeignExport = contains_foreign_export,
        ContainsForeignExportStr = "contains_foreign_export"
    ;
        ContainsForeignExport = contains_no_foreign_export,
        % Yes, without the "contains_" prefix.  Don't change it unless you mean
        % to break compatibility with older .module_dep files.
        ContainsForeignExportStr = "no_foreign_export"
    ).

:- pred has_main_to_string(has_main, string).
:- mode has_main_to_string(in, out) is det.
:- mode has_main_to_string(out, in) is semidet.

has_main_to_string(HasMain, HasMainStr) :-
    (
        HasMain = has_main,
        HasMainStr = "has_main"
    ;
        HasMain = no_main,
        HasMainStr = "no_main"
    ).

:- pred read_module_dependencies_search(rebuild_module_deps::in,
    module_name::in, make_info::in, make_info::out, io::di, io::uo) is det.

read_module_dependencies_search(RebuildModuleDeps, ModuleName, !Info, !IO) :-
    globals.io_lookup_accumulating_option(search_directories, SearchDirs, !IO),
    read_module_dependencies_2(RebuildModuleDeps, SearchDirs, ModuleName,
        !Info, !IO).

:- pred read_module_dependencies_no_search(rebuild_module_deps::in,
    module_name::in, make_info::in, make_info::out, io::di, io::uo) is det.

read_module_dependencies_no_search(RebuildModuleDeps, ModuleName, !Info,
        !IO) :-
    read_module_dependencies_2(RebuildModuleDeps, [dir.this_directory],
        ModuleName, !Info, !IO).

:- pred read_module_dependencies_2(rebuild_module_deps::in,
    list(dir_name)::in, module_name::in, make_info::in, make_info::out,
    io::di, io::uo) is det.

read_module_dependencies_2(RebuildModuleDeps, SearchDirs, ModuleName, !Info,
        !IO) :-
    module_name_to_search_file_name(ModuleName, make_module_dep_file_extension,
        ModuleDepFile, !IO),
    io.input_stream(OldInputStream, !IO),
    search_for_file_returning_dir(SearchDirs, ModuleDepFile, SearchResult,
        !IO),
    (
        SearchResult = ok(ModuleDir),
        parser.read_term(ImportsTermResult, !IO),
        io.set_input_stream(OldInputStream, ModuleDepStream, !IO),
        io.close_input(ModuleDepStream, !IO),
        (
            ImportsTermResult = term(_, ImportsTerm),
            ImportsTerm = term.functor(term.atom("module"), ModuleArgs, _),
            ModuleArgs = [
                VersionNumberTerm,
                SourceFileTerm,
                SourceFileModuleNameTerm,
                ParentsTerm,
                IntDepsTerm,
                ImplDepsTerm,
                ChildrenTerm,
                NestedChildrenTerm,
                FactDepsTerm,
                ForeignLanguagesTerm,
                ForeignImportsTerm,
                ContainsForeignExportTerm,
                HasMainTerm
            ],
            VersionNumberTerm = term.functor(
                term.integer(module_dependencies_version_number), [], _),
            SourceFileTerm = term.functor(
                term.string(SourceFileName), [], _),
            sym_name_and_args(SourceFileModuleNameTerm, SourceFileModuleName,
                []),
            parse_sym_name_list(ParentsTerm, Parents),
            parse_sym_name_list(IntDepsTerm, IntDeps),
            parse_sym_name_list(ImplDepsTerm, ImplDeps),
            parse_sym_name_list(ChildrenTerm, Children),
            parse_sym_name_list(NestedChildrenTerm, NestedChildren),
            FactDepsTerm = term.functor(term.atom("{}"), FactDepsStrings, _),
            list.map(
                (pred(StringTerm::in, String::out) is semidet :-
                    StringTerm = term.functor(term.string(String), [], _)
                ), FactDepsStrings, FactDeps),
            ForeignLanguagesTerm = term.functor(
                term.atom("{}"), ForeignLanguagesTerms, _),
            list.map(
                (pred(LanguageTerm::in, Language::out) is semidet :-
                    LanguageTerm = term.functor(
                        term.string(LanguageString), [], _),
                    globals.convert_foreign_language(LanguageString, Language)
                ), ForeignLanguagesTerms, ForeignLanguages),
            ForeignImportsTerm = term.functor(term.atom("{}"),
                ForeignImportTerms, _),
            list.map(
                (pred(ForeignImportTerm::in, ForeignImportModule::out)
                        is semidet :-
                    ForeignImportTerm = term.functor(term.atom("-"),
                        [LanguageTerm, ImportedModuleTerm], _),
                    LanguageTerm = term.functor(
                        term.string(LanguageString), [], _),
                    globals.convert_foreign_language(LanguageString,
                        Language),
                    sym_name_and_args(ImportedModuleTerm, ImportedModuleName,
                        []),
                    ForeignImportModule = foreign_import_module_info(Language,
                        ImportedModuleName, term.context_init)
                ), ForeignImportTerms, ForeignImports),

            ContainsForeignExportTerm =
                term.functor(term.atom(ContainsForeignExportStr), [], _),
            contains_foreign_export_to_string(ContainsForeignExport,
                ContainsForeignExportStr),

            HasMainTerm = term.functor(term.atom(HasMainStr), [], _),
            has_main_to_string(HasMain, HasMainStr)
        ->
            (
                ForeignLanguages = [],
                ContainsForeignCode = contains_no_foreign_code
            ;
                ForeignLanguages = [_ | _],
                ContainsForeignCode = contains_foreign_code(
                    set.list_to_set(ForeignLanguages))
            ),

            % Imports = module_imports(^...),
            Imports ^ source_file_name = SourceFileName,
            Imports ^ source_file_module_name = SourceFileModuleName,
            Imports ^ module_name = ModuleName,
            Imports ^ parent_deps = Parents,
            Imports ^ int_deps = IntDeps,
            Imports ^ impl_deps = ImplDeps,
            Imports ^ indirect_deps = [],   % not used.
            Imports ^ children = Children,
            Imports ^ public_children = [], % not used.
            Imports ^ nested_children = NestedChildren,
            Imports ^ fact_table_deps = FactDeps,
            Imports ^ has_foreign_code = ContainsForeignCode,
            Imports ^ foreign_import_modules = ForeignImports,
            Imports ^ contains_foreign_export = ContainsForeignExport,
            Imports ^ items = [],       % not used.
            Imports ^ error = no_module_errors, % not used.
            Imports ^ maybe_timestamps = no,    % not used.
            Imports ^ has_main = HasMain,
            Imports ^ module_dir = ModuleDir,

            !:Info = !.Info ^ module_dependencies ^ elem(ModuleName)
                := yes(Imports),

            %
            % Read the dependencies for the nested children.  If something
            % goes wrong (for example one of the files was removed), the
            % dependencies for all modules in the source file will be remade
            % (make_module_dependencies expects to be given the top-level
            % module in the source file).
            %
            SubRebuildModuleDeps = do_not_rebuild_module_deps,
            list.foldl2(
                read_module_dependencies_2(SubRebuildModuleDeps, SearchDirs),
                NestedChildren, !Info, !IO),
            (
                list.member(NestedChild, NestedChildren),
                (
                    map.search(!.Info ^ module_dependencies,
                        NestedChild, ChildImports)
                ->
                    ChildImports = no
                ;
                    true
                )
            ->
                read_module_dependencies_remake(RebuildModuleDeps, ModuleName,
                    "error in nested sub-modules", !Info, !IO)
            ;
                true
            )
        ;
            read_module_dependencies_remake(RebuildModuleDeps, ModuleName,
                "parse error", !Info, !IO)
        )
    ;
        SearchResult = error(_),
        % XXX should use the error message.
        read_module_dependencies_remake(RebuildModuleDeps, ModuleName,
            "couldn't find `.module_dep' file", !Info, !IO)
    ).

    % Something went wrong reading the dependencies, so just rebuild them.
:- pred read_module_dependencies_remake(rebuild_module_deps::in,
    module_name::in, string::in, make_info::in, make_info::out,
    io::di, io::uo) is det.

read_module_dependencies_remake(RebuildModuleDeps, ModuleName, Msg, !Info,
        !IO) :-
    (
        RebuildModuleDeps = do_rebuild_module_deps,
        debug_msg(read_module_dependencies_remake_msg(ModuleName, Msg), !IO),
        make_module_dependencies(ModuleName, !Info, !IO)
    ;
        RebuildModuleDeps = do_not_rebuild_module_deps
    ).

:- pred read_module_dependencies_remake_msg(module_name::in, string::in,
    io::di, io::uo) is det.

read_module_dependencies_remake_msg(ModuleName, Msg, !IO) :-
    module_name_to_file_name(ModuleName, make_module_dep_file_extension,
        do_not_create_dirs, ModuleDepsFile, !IO),
    io.write_string("Error reading file `", !IO),
    io.write_string(ModuleDepsFile, !IO),
    io.write_string("', rebuilding: ", !IO),
    io.write_string(Msg, !IO),
    io.nl(!IO).

:- pred parse_sym_name_list(term::in, list(sym_name)::out) is semidet.

parse_sym_name_list(term.functor(term.atom("{}"), Args, _), SymNames) :-
    list.map(
        (pred(Arg::in, SymName::out) is semidet :-
            sym_name_and_args(Arg, SymName, [])
        ), Args, SymNames).

    % The module_name given must be the top level module in the source file.
    % get_module_dependencies ensures this by making the dependencies
    % for all parent modules of the requested module first.
    %
:- pred make_module_dependencies(module_name::in,
    make_info::in, make_info::out, io::di, io::uo) is det.

make_module_dependencies(ModuleName, !Info, !IO) :-
    redirect_output(ModuleName, MaybeErrorStream, !Info, !IO),
    (
        MaybeErrorStream = yes(ErrorStream),
        io.set_output_stream(ErrorStream, OldOutputStream, !IO),
        % XXX Why ask for the timestamp if we then ignore it?
        read_module(ModuleName, ".m", "Getting dependencies for module",
            do_not_search, do_return_timestamp, Items, Error, SourceFileName,
            _, !IO),
        ( Error = fatal_module_errors ->
            io.set_output_stream(OldOutputStream, _, !IO),
            io.write_string("** Error: error reading file `", !IO),
            io.write_string(SourceFileName, !IO),
            io.write_string("' to generate dependencies.\n", !IO),
            maybe_write_importing_module(ModuleName, !.Info ^ importing_module,
                !IO),

            % Display the contents of the `.err' file, then remove it
            % so we don't leave `.err' files lying around for nonexistent
            % modules.
            globals.io_lookup_int_option(output_compile_error_lines, Lines,
                !IO),
            globals.io_set_option(output_compile_error_lines, int(10000),
                !IO),
            unredirect_output(ModuleName, ErrorStream, !Info, !IO),
            globals.io_set_option(output_compile_error_lines, int(Lines), !IO),
            module_name_to_file_name(ModuleName, ".err", do_not_create_dirs,
                ErrFileName, !IO),
            io.remove_file(ErrFileName, _, !IO),
            !:Info = !.Info ^ module_dependencies ^ elem(ModuleName) := no
        ;
            io.set_exit_status(0, !IO),
            io.set_output_stream(ErrorStream, _, !IO),
            split_into_submodules(ModuleName, Items, SubModuleList, [], Specs),
            globals.io_get_globals(Globals, !IO),
            write_error_specs(Specs, Globals, 0, _NumWarnings, 0, _NumErrors,
                !IO),
            io.set_output_stream(OldOutputStream, _, !IO),

            assoc_list.keys(SubModuleList, SubModuleNames),
            list.map(init_dependencies(SourceFileName, ModuleName,
                SubModuleNames, Error, Globals),
                SubModuleList, ModuleImportList),
            list.foldl(
                (pred(ModuleImports::in, Info0::in, Info::out) is det :-
                    SubModuleName = ModuleImports ^ module_name,
                    Info = Info0 ^ module_dependencies ^ elem(SubModuleName)
                        := yes(ModuleImports)
                ), ModuleImportList, !Info),

            % If there were no errors, write out the `.int3' file
            % while we have the contents of the module. The `int3'
            % file doesn't depend on anything else.
            (
                Error = no_module_errors,
                Target = target_file(ModuleName,
                    module_target_unqualified_short_interface),
                maybe_make_target_message_to_stream(OldOutputStream, Target,
                    !IO),
                build_with_check_for_interrupt(
                    build_with_module_options(ModuleName,
                        ["--make-short-interface"],
                        make_short_interfaces(ErrorStream,
                            SourceFileName, SubModuleList)
                    ),
                    cleanup_short_interfaces(SubModuleNames),
                    Succeeded, !Info, !IO)
            ;
                ( Error = some_module_errors
                ; Error = fatal_module_errors
                ),
                Succeeded = no
            ),

            build_with_check_for_interrupt(
                (pred(yes::out, MakeInfo::in, MakeInfo::out, di, uo) is det -->
                    list.foldl(do_write_module_dep_file,
                        ModuleImportList)
                ), cleanup_module_dep_files(SubModuleNames), _, !Info, !IO),

            MadeTarget = target_file(ModuleName,
                module_target_unqualified_short_interface),
            record_made_target(MadeTarget,
                process_module(task_make_short_interface), Succeeded,
                !Info, !IO),
            unredirect_output(ModuleName, ErrorStream, !Info, !IO)
        )
    ;
        MaybeErrorStream = no
    ).

:- pred make_short_interfaces(io.output_stream::in, file_name::in,
    assoc_list(module_name, list(item))::in, list(string)::in, bool::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

make_short_interfaces(ErrorStream, SourceFileName, SubModuleList, _, Succeeded,
        !Info, !IO) :-
    io.set_output_stream(ErrorStream, OutputStream, !IO),
    list.foldl(
        (pred(SubModule::in, !.IO::di, !:IO::uo) is det :-
            SubModule = SubModuleName - SubModuleItems,
            modules.make_short_interface(SourceFileName,
                SubModuleName, SubModuleItems, !IO)
        ), SubModuleList, !IO),
    io.set_output_stream(OutputStream, _, !IO),
    io.get_exit_status(ExitStatus, !IO),
    Succeeded = ( ExitStatus = 0 -> yes ; no ).

:- pred cleanup_short_interfaces(list(module_name)::in,
    make_info::in, make_info::out, io::di, io::uo) is det.

cleanup_short_interfaces(SubModuleNames, !Info, !IO) :-
    list.foldl2(
        (pred(SubModuleName::in, !.Info::in, !:Info::out, !.IO::di, !:IO::uo)
                is det :-
            make_remove_target_file(verbose_make, SubModuleName,
                module_target_unqualified_short_interface, !Info, !IO)
        ), SubModuleNames, !Info, !IO).

:- pred cleanup_module_dep_files(list(module_name)::in,
    make_info::in, make_info::out, io::di, io::uo) is det.

cleanup_module_dep_files(SubModuleNames, !Info, !IO) :-
    list.foldl2(
        (pred(SubModuleName::in, !.Info::in, !:Info::out, !.IO::di, !:IO::uo)
                is det :-
            make_remove_file(verbose_make, SubModuleName,
                make_module_dep_file_extension, !Info, !IO)
        ), SubModuleNames, !Info, !IO).

:- pred maybe_write_importing_module(module_name::in, maybe(module_name)::in,
    io::di, io::uo) is det.

maybe_write_importing_module(_, no, !IO).
maybe_write_importing_module(ModuleName, yes(ImportingModuleName), !IO) :-
    io.write_string("** Module `", !IO),
    write_sym_name(ModuleName, !IO),
    io.write_string("' is imported or included by module `", !IO),
    write_sym_name(ImportingModuleName, !IO),
    io.write_string("'.\n", !IO).

%-----------------------------------------------------------------------------%
:- end_module make.module_dep_file.
%-----------------------------------------------------------------------------%
