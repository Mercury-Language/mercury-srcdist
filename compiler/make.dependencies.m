%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2002-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: make.dependencies.m.
% Author: stayl.
%
% Code to find the dependencies for a particular target,
% e.g. module.c depends on module.m, import.int, etc.
%
%-----------------------------------------------------------------------------%

:- module make.dependencies.
:- interface.

%-----------------------------------------------------------------------------%

    % find_module_deps(ModuleName, Succeeded, Deps, !Info, !IO).
    %
    % The reason we don't return maybe(Deps) is that with `--keep-going'
    % we want to do as much work as possible.
    %
:- type find_module_deps(T) ==
    pred(module_name, bool, set(T), make_info, make_info, io, io).
:- inst find_module_deps ==
    (pred(in, out, out, in, out, di, uo) is det).

:- type dependency_file
    --->    dep_target(target_file)
                        % A target which could be made.
    ;       dep_file(file_name, maybe(option)).
                        % An ordinary file which `mmc --make' does not know
                        % how to rebuild. The option gives a list of
                        % directories in which to search.

    % Return a closure which will find the dependencies for
    % a target type given a module name.
    %
:- func target_dependencies(globals::in, module_target_type::in) =
    (find_module_deps(dependency_file)::out(find_module_deps)) is det.

    % Union the output set of dependencies for a given module
    % with the accumulated set. This is used with
    % foldl3_maybe_stop_at_error to iterate over a list of
    % module_names to find all target files for those modules.
    %
:- pred union_deps(find_module_deps(T)::in(find_module_deps),
    module_name::in, bool::out, set(T)::in, set(T)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

    % Find all modules in the current directory which are reachable
    % (by import or include) from the given module.
    %
:- pred find_reachable_local_modules(module_name::in, bool::out,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

    % Find all modules in the current directory which are reachable (by import)
    % from the given module. Return a list of `--local-module-id' options
    % suitable for the command line.
    %
:- pred make_local_module_id_options(module_name::in, bool::out,
    list(string)::out, make_info::in, make_info::out, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

:- pred dependency_status(dependency_file::in, dependency_status::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

:- type dependencies_result
    --->    deps_up_to_date
    ;       deps_out_of_date
    ;       deps_error.

    % check_dependencies(TargetFileName, TargetFileTimestamp,
    %   BuildDepsSucceeded, Dependencies, Result)
    %
    % Check that all the dependency targets are up-to-date.
    %
:- pred check_dependencies(file_name::in, maybe_error(timestamp)::in, bool::in,
    list(dependency_file)::in, dependencies_result::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

    % check_dependencies(TargetFileName, TargetFileTimestamp,
    %   BuildDepsSucceeded, Dependencies, Result)
    %
    % Check that all the dependency files are up-to-date.
    %
:- pred check_dependency_timestamps(file_name::in, maybe_error(timestamp)::in,
    bool::in, list(File)::in,
    pred(File, io, io)::(pred(in, di, uo) is det),
    list(maybe_error(timestamp))::in, dependencies_result::out,
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

:- type cached_direct_imports.
:- func init_cached_direct_imports = cached_direct_imports.

:- type cached_transitive_dependencies.
:- func init_cached_transitive_dependencies = cached_transitive_dependencies.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module parse_tree.prog_data.
:- import_module transform_hlds.
:- import_module transform_hlds.mmc_analysis.

:- import_module assoc_list.
:- import_module dir.
:- import_module solutions.

%-----------------------------------------------------------------------------%

:- type deps_result(T) == pair(bool, set(T)).
:- type module_deps_result == deps_result(module_name).

union_deps(FindDeps, ModuleName, Success, Deps0, set.union(Deps0, Deps),
        !Info, !IO) :-
    FindDeps(ModuleName, Success, Deps, !Info, !IO).

    % Note that we go to some effort in this module to stop dependency
    % calculation as soon as possible if there are errors.
    % This is important because the calls to get_module_dependencies from
    % the dependency calculation predicates can result in every module in
    % the program being read.
    %
:- func combine_deps(find_module_deps(T)::in(find_module_deps),
    find_module_deps(T)::in(find_module_deps)) =
    (find_module_deps(T)::out(find_module_deps)) is det.

combine_deps(FindDeps1, FindDeps2) =
    combine_deps_2(FindDeps1, FindDeps2).

:- pred combine_deps_2(
    find_module_deps(T)::in(find_module_deps),
    find_module_deps(T)::in(find_module_deps),
    module_name::in, bool::out, set(T)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

combine_deps_2(FindDeps1, FindDeps2, ModuleName, Success, Deps, !Info, !IO) :-
    FindDeps1(ModuleName, Success1, Deps1, !Info, !IO),
    (
        Success1 = no,
        !.Info ^ keep_going = no
    ->
        Success = no,
        Deps = Deps1
    ;
        FindDeps2(ModuleName, Success2, Deps2, !Info, !IO),
        Success = Success1 `and` Success2,
        Deps = set.union(Deps1, Deps2)
    ).

:- func combine_deps_list(list(
    find_module_deps(T))::in(list_skel(find_module_deps))) =
    (find_module_deps(T)::out(find_module_deps)) is det.

combine_deps_list([]) = no_deps.
combine_deps_list([FindDeps | FindDepsList]) =
    ( FindDepsList = [] ->
        FindDeps
    ;
        combine_deps(FindDeps, combine_deps_list(FindDepsList))
    ).

target_dependencies(_, module_target_source) = no_deps.
target_dependencies(Globals, module_target_errors) =
        compiled_code_dependencies(Globals).
target_dependencies(_, module_target_private_interface) =
        interface_file_dependencies.
target_dependencies(_, module_target_long_interface) =
        interface_file_dependencies.
target_dependencies(_, module_target_short_interface) =
        interface_file_dependencies.
target_dependencies(_, module_target_unqualified_short_interface) =
        module_target_source `of` self.
target_dependencies(Globals, module_target_c_header(_)) =
        target_dependencies(Globals, module_target_c_code).
target_dependencies(Globals, module_target_c_code) =
        compiled_code_dependencies(Globals).
target_dependencies(Globals, module_target_il_code) =
        compiled_code_dependencies(Globals).
target_dependencies(_, module_target_il_asm) =
    combine_deps_list([
        module_target_il_code `of` self
    ]).
target_dependencies(Globals, module_target_java_code) =
        compiled_code_dependencies(Globals).
target_dependencies(Globals, module_target_erlang_header) =
        target_dependencies(Globals, module_target_erlang_code).
target_dependencies(Globals, module_target_erlang_code) =
        compiled_code_dependencies(Globals).
target_dependencies(_, module_target_erlang_beam_code) =
    combine_deps_list([
        module_target_erlang_code `of` self
    ]).
target_dependencies(Globals, module_target_asm_code(_)) =
        compiled_code_dependencies(Globals).
target_dependencies(Globals, module_target_object_code(PIC)) = Deps :-
    globals.get_target(Globals, CompilationTarget),
    TargetCode = ( CompilationTarget = target_asm ->
        module_target_asm_code(PIC) ; module_target_c_code ),
    globals.lookup_bool_option(Globals, highlevel_code, HighLevelCode),

    % For --highlevel-code, the `.c' file will #include the header
    % file for all imported modules.
    (
        CompilationTarget = target_c,
        HighLevelCode = yes
    ->
        HeaderDeps = combine_deps_list([
            module_target_c_header(header_mih) `of` direct_imports,
            module_target_c_header(header_mih) `of` indirect_imports,
            module_target_c_header(header_mih) `of` parents,
            module_target_c_header(header_mih) `of` intermod_imports
        ])
    ;
        HeaderDeps = no_deps
    ),
    Deps = combine_deps_list([
        TargetCode `of` self,
        module_target_c_header(header_mh) `of` foreign_imports,
        HeaderDeps
    ]).
target_dependencies(_, module_target_intermodule_interface) =
    combine_deps_list([
        module_target_source `of` self,
        module_target_private_interface `of` parents,
        module_target_long_interface `of` non_intermod_direct_imports,
        module_target_short_interface `of` non_intermod_indirect_imports
    ]).
target_dependencies(_, module_target_analysis_registry) =
    combine_deps_list([
        module_target_source `of` self,
        module_target_private_interface `of` parents,
        module_target_long_interface `of` non_intermod_direct_imports,
        module_target_short_interface `of` non_intermod_indirect_imports
    ]).
target_dependencies(_, module_target_foreign_il_asm(_)) =
    combine_deps_list([
        module_target_il_asm `of` self,
        module_target_il_asm `of` filter_module_names(maybe_keep_std_lib_module,
            direct_imports),
        module_target_il_asm `of` filter_module_names(maybe_keep_std_lib_module,
            foreign_imports_lang(lang_il)),
        module_target_foreign_il_asm(lang_managed_cplusplus) `of`
            filter_module_names(maybe_keep_std_lib_module,
                foreign_imports_lang(lang_managed_cplusplus)),
        module_target_foreign_il_asm(lang_csharp) `of`
            filter_module_names(maybe_keep_std_lib_module,
                foreign_imports_lang(lang_csharp))
    ]).
target_dependencies(Globals, module_target_foreign_object(PIC, _)) =
    get_foreign_deps(Globals, PIC).
target_dependencies(Globals, module_target_fact_table_object(PIC, _)) =
    get_foreign_deps(Globals, PIC).
target_dependencies(_, module_target_xml_doc) = 
    combine_deps_list([
        module_target_source `of` self,
        module_target_private_interface `of` parents,
        module_target_long_interface `of` non_intermod_direct_imports,
        module_target_short_interface `of` non_intermod_indirect_imports
    ]).

:- func get_foreign_deps(globals::in, pic::in) =
    (find_module_deps(dependency_file)::out(find_module_deps)) is det.

get_foreign_deps(Globals, PIC) = Deps :-
    globals.get_target(Globals, CompilationTarget),
    TargetCode = ( CompilationTarget = target_asm ->
        module_target_asm_code(PIC) ; module_target_c_code ),
    Deps = combine_deps_list([
        TargetCode `of` self
    ]).

:- func interface_file_dependencies =
    (find_module_deps(dependency_file)::out(find_module_deps)) is det.

interface_file_dependencies =
    combine_deps_list([
        module_target_source `of` self,
        module_target_private_interface `of` parents,
        module_target_unqualified_short_interface `of` direct_imports,
        module_target_unqualified_short_interface `of` indirect_imports
    ]).

:- func compiled_code_dependencies(globals::in) =
    (find_module_deps(dependency_file)::out(find_module_deps)) is det.

compiled_code_dependencies(Globals) = Deps :-
    globals.lookup_bool_option(Globals, intermodule_optimization, Intermod),
    globals.lookup_bool_option(Globals, intermodule_analysis,
        IntermodAnalysis),
    (
        Intermod = yes,
        Deps0 = combine_deps_list([
            module_target_intermodule_interface `of` self,
            module_target_intermodule_interface `of` intermod_imports,
            map_find_module_deps(imports,
                map_find_module_deps(parents, intermod_imports)),
            base_compiled_code_dependencies
        ])
    ;
        Intermod = no,
        Deps0 = base_compiled_code_dependencies
    ),
    (
        IntermodAnalysis = yes,
        Deps = combine_deps_list([
            module_target_analysis_registry `of` self,
            module_target_analysis_registry `of` direct_imports,
            Deps0
        ])
    ;
        IntermodAnalysis = no,
        Deps = Deps0
    ).

:- func base_compiled_code_dependencies =
    (find_module_deps(dependency_file)::out(find_module_deps)) is det.

base_compiled_code_dependencies =
    combine_deps_list([
        module_target_source `of` self,
        fact_table_files `files_of` self,
        map_find_module_deps(imports, self)
    ]).

:- func imports =
    (find_module_deps(dependency_file)::out(find_module_deps)) is det.

imports = combine_deps_list([
        module_target_private_interface `of` parents,
        module_target_long_interface `of` direct_imports,
        module_target_short_interface `of` indirect_imports
    ]).

:- func of(module_target_type, find_module_deps(module_name)) =
    find_module_deps(dependency_file).
:- mode in `of` in(find_module_deps) = out(find_module_deps) is det.

FileType `of` FindDeps =
    of_2(FileType, FindDeps).

:- pred of_2(module_target_type::in,
    find_module_deps(module_name)::in(find_module_deps),
    module_name::in, bool::out, set(dependency_file)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

of_2(FileType, FindDeps, ModuleName, Success, TargetFiles, !Info, !IO) :-
    FindDeps(ModuleName, Success, ModuleNames, !Info, !IO),
    TargetFiles = set.sorted_list_to_set(
        make_dependency_list(set.to_sorted_list(ModuleNames), FileType)).

:- func find_module_deps(pair(file_name, maybe(option))) `files_of`
    find_module_deps(module_name) = find_module_deps(dependency_file).
:- mode in(find_module_deps) `files_of` in(find_module_deps)
    = out(find_module_deps) is det.

FindFiles `files_of` FindDeps =
    files_of_2(FindFiles, FindDeps).

:- pred files_of_2(
    find_module_deps(pair(file_name, maybe(option)))::in(find_module_deps),
    find_module_deps(module_name)::in(find_module_deps),
    module_name::in, bool::out, set(dependency_file)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

files_of_2(FindFiles, FindDeps, ModuleName, Success, DepFiles, !Info, !IO) :-
    KeepGoing = !.Info ^ keep_going,
    FindDeps(ModuleName, Success0, ModuleNames, !Info, !IO),
    (
        Success0 = no,
        KeepGoing = no
    ->
        Success = no,
        DepFiles = set.init
    ;
        foldl3_maybe_stop_at_error(KeepGoing, union_deps(FindFiles),
            set.to_sorted_list(ModuleNames), Success1, set.init, FileNames,
            !Info, !IO),
        Success = Success0 `and` Success1,
        DepFiles = set.sorted_list_to_set(
            list.map(
                (func(FileName - Option) = dep_file(FileName, Option)),
                set.to_sorted_list(FileNames)))
    ).

:- pred map_find_module_deps(find_module_deps(T)::in(find_module_deps),
    find_module_deps(module_name)::in(find_module_deps),
    module_name::in, bool::out, set(T)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

map_find_module_deps(FindDeps2, FindDeps1, ModuleName, Success, Result,
        !Info, !IO) :-
    KeepGoing = !.Info ^ keep_going,
    FindDeps1(ModuleName, Success0, Modules0, !Info, !IO),
    (
        Success0 = no,
        KeepGoing = no
    ->
        Success = no,
        Result = set.init
    ;
        foldl3_maybe_stop_at_error(KeepGoing, union_deps(FindDeps2),
            set.to_sorted_list(Modules0), Success1, set.init, Result,
            !Info, !IO),
        Success = Success0 `and` Success1
    ).

%-----------------------------------------------------------------------------%

:- pred no_deps(module_name::in, bool::out, set(T)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

no_deps(_, yes, set.init, !Info, !IO).

:- pred self(module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

self(ModuleName, yes, make_singleton_set(ModuleName), !Info, !IO).

:- pred parents(module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

parents(ModuleName, yes, list_to_set(get_ancestors(ModuleName)), !Info, !IO).

%-----------------------------------------------------------------------------%

:- type cached_direct_imports == map(module_name, module_deps_result).

init_cached_direct_imports = map.init.

:- pred direct_imports(module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

direct_imports(ModuleName, Success, Modules, !Info, !IO) :-
    ( Result0 = !.Info ^ cached_direct_imports ^ elem(ModuleName) ->
        Result0 = Success - Modules
    ;
        KeepGoing = !.Info ^ keep_going,

        non_intermod_direct_imports(ModuleName, Success0, Modules0,
            !Info, !IO),
        (
            Success0 = no,
            KeepGoing = no
        ->
            Success = no,
            Modules = set.init
        ;
            % We also read `.int' files for the modules for which we read
            % `.opt' files, and for the modules imported by those modules.
            %
            intermod_imports(ModuleName, Success1, IntermodModules, !Info,
                !IO),
            (
                Success1 = no,
                KeepGoing = no
            ->
                Success = no,
                Modules = set.init
            ;
                foldl3_maybe_stop_at_error(!.Info ^ keep_going,
                    union_deps(non_intermod_direct_imports),
                    set.to_sorted_list(IntermodModules), Success2,
                    set.union(Modules0, IntermodModules), Modules1,
                    !Info, !IO),
                Success = Success0 `and` Success1 `and` Success2,
                Modules = set.delete(Modules1, ModuleName)
            )
        ),
        !:Info = !.Info ^ cached_direct_imports ^ elem(ModuleName)
            := Success - Modules
    ).

    % Return the modules for which `.int' files are read in a compilation
    % which does not use `--intermodule-optimization'.
    %
:- pred non_intermod_direct_imports(module_name::in, bool::out,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

non_intermod_direct_imports(ModuleName, Success, Modules, !Info, !IO) :-
    get_module_dependencies(ModuleName, MaybeImports, !Info, !IO),
    (
        MaybeImports = yes(Imports),

        % Find the direct imports of this module (modules for which we will
        % read the `.int' files).
        %
        % Note that we need to do this both for the imports of
        % this module and for the imports of its ancestors.
        % This is because if this module is a submodule, then it
        % may depend on things imported only by its ancestors.
        %
        Modules0 = set.union(set.list_to_set(Imports ^ impl_deps),
            set.list_to_set(Imports ^ int_deps)),
        (
            ModuleName = qualified(ParentModule, _),
            non_intermod_direct_imports(ParentModule, Success,
                ParentImports, !Info, !IO),
            Modules = set.union(ParentImports, Modules0)
        ;
            ModuleName = unqualified(_),
            Success = yes,
            Modules = Modules0
        )
    ;
        MaybeImports = no,
        Success = no,
        Modules = set.init
    ).

%-----------------------------------------------------------------------------%

    % Return the list of modules for which we should read `.int2' files.
    %
:- pred indirect_imports(module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

indirect_imports(ModuleName, Success, Modules, !Info, !IO) :-
    indirect_imports_2(direct_imports, ModuleName,
        Success, Modules, !Info, !IO).

    % Return the list of modules for which we should read `.int2' files,
    % ignoring those which need to be read as a result of importing modules
    % imported by a `.opt' file.
    %
:- pred non_intermod_indirect_imports(module_name::in, bool::out,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

non_intermod_indirect_imports(ModuleName, Success, Modules, !Info, !IO) :-
    indirect_imports_2(non_intermod_direct_imports, ModuleName,
        Success, Modules, !Info, !IO).

:- pred indirect_imports_2(find_module_deps(module_name)::in(find_module_deps),
    module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

indirect_imports_2(FindDirectImports, ModuleName, Success, IndirectImports,
        !Info, !IO) :-
    FindDirectImports(ModuleName, DirectSuccess, DirectImports, !Info, !IO),
    % XXX The original version of this code by stayl had the line assigning
    % to KeepGoing textually *before* the call to FindDirectImports, but
    % looked up the keep_going in the version of !Info *after* that call.
    KeepGoing = !.Info ^ keep_going,
    (
        DirectSuccess = no,
        KeepGoing = no
    ->
        Success = no,
        IndirectImports = set.init
    ;
        foldl3_maybe_stop_at_error(!.Info ^ keep_going,
            union_deps(find_transitive_implementation_imports),
            set.to_sorted_list(DirectImports), IndirectSuccess,
            set.init, IndirectImports0, !Info, !IO),
        IndirectImports = set.difference(
            set.delete(IndirectImports0, ModuleName),
            DirectImports),
        Success = DirectSuccess `and` IndirectSuccess
    ).

%-----------------------------------------------------------------------------%

    % Return the list of modules for which we should read `.opt' files.
    %
:- pred intermod_imports(module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

intermod_imports(ModuleName, Success, Modules, !Info, !IO) :-
    globals.io_lookup_bool_option(intermodule_optimization, Intermod, !IO),
    (
        Intermod = yes,
        globals.io_lookup_bool_option(read_opt_files_transitively,
            Transitive, !IO),
        (
            Transitive = yes,
            find_transitive_implementation_imports(ModuleName,
                Success, Modules, !Info, !IO)
        ;
            Transitive = no,
            non_intermod_direct_imports(ModuleName, Success,
                Modules, !Info, !IO)
        )
    ;
        Intermod = no,
        Success = yes,
        Modules = set.init
    ).

%-----------------------------------------------------------------------------%

:- pred foreign_imports(module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

foreign_imports(ModuleName, Success, Modules, !Info, !IO) :-
    % The object file depends on the header files for the modules
    % mentioned in `:- pragma foreign_import_module' declarations
    % in the current module and the `.opt' files it imports.

    globals.io_get_globals(Globals, !IO),
    globals.get_backend_foreign_languages(Globals, Languages),
    intermod_imports(ModuleName, IntermodSuccess, IntermodModules, !Info, !IO),
    foldl3_maybe_stop_at_error(!.Info ^ keep_going,
        union_deps(find_module_foreign_imports(set.list_to_set(Languages))),
        [ModuleName | set.to_sorted_list(IntermodModules)],
        ForeignSuccess, set.init, Modules, !Info, !IO),
    Success = IntermodSuccess `and` ForeignSuccess.

:- pred find_module_foreign_imports(set(foreign_language)::in, module_name::in,
    bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

find_module_foreign_imports(Languages, ModuleName, Success, ForeignModules,
        !Info, !IO) :-
    find_transitive_implementation_imports(ModuleName, Success0,
        ImportedModules, !Info, !IO),
    (
        Success0 = yes,
        foldl3_maybe_stop_at_error(!.Info ^ keep_going,
            union_deps(find_module_foreign_imports_2(Languages)),
            [ModuleName | to_sorted_list(ImportedModules)],
            Success, set.init, ForeignModules, !Info, !IO)
    ;
        Success0 = no,
        Success = no,
        ForeignModules = set.init
    ).

:- pred find_module_foreign_imports_2(set(foreign_language)::in,
    module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

find_module_foreign_imports_2(Languages, ModuleName,
        Success, ForeignModules, !Info, !IO) :-
    get_module_dependencies(ModuleName, MaybeImports, !Info, !IO),
    (
        MaybeImports = yes(Imports),
        ForeignModules = set.list_to_set(
            get_foreign_imported_modules_lang(Languages,
            Imports ^ foreign_import_modules)),
        Success = yes
    ;
        MaybeImports = no,
        ForeignModules = set.init,
        Success = no
    ).

:- func get_foreign_imported_modules(foreign_import_module_info_list) =
    list(module_name).

get_foreign_imported_modules(ForeignImportModules) =
    get_foreign_imported_modules_2(no, ForeignImportModules).

:- func get_foreign_imported_modules_lang(set(foreign_language),
    foreign_import_module_info_list) = list(module_name).

get_foreign_imported_modules_lang(Languages, ForeignImportModules) =
    get_foreign_imported_modules_2(yes(Languages), ForeignImportModules).

:- func get_foreign_imported_modules_2(maybe(set(foreign_language)),
    foreign_import_module_info_list) = list(module_name).

get_foreign_imported_modules_2(MaybeLanguages, ForeignImportModules) =
    list.filter_map(get_foreign_imported_modules_3(MaybeLanguages),
        ForeignImportModules).

:- func get_foreign_imported_modules_3(maybe(set(foreign_language)),
    foreign_import_module_info) = module_name is semidet.

get_foreign_imported_modules_3(MaybeLanguages, ForeignImportModule)
        = ForeignModule :-
    ForeignImportModule = foreign_import_module_info(Language, ForeignModule,
        _),
    (
        MaybeLanguages = yes(Languages),
        set.member(Language, Languages)
    ;
        MaybeLanguages = no
    ).

%-----------------------------------------------------------------------------%

    % foreign_imports_lang(Lang, ModuleName, Success, Modules, !Info, !IO)
    %
    % From the module, ModuleName, extract the set of modules, Modules,
    % which are mentioned in foreign_import_module declarations with the
    % specified language, Lang.
    %
:- pred foreign_imports_lang(foreign_language::in,
    module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

foreign_imports_lang(Lang, ModuleName, Success, Modules, !Info, !IO) :-
    get_module_dependencies(ModuleName, MaybeImports, !Info, !IO),
    (
        MaybeImports = yes(Imports),
        list.filter_map(
            (pred(FI::in, M::out) is semidet :-
                FI = foreign_import_module_info(Lang, M, _)
            ), Imports ^ foreign_import_modules, ModulesList),
        set.list_to_set(ModulesList, Modules),
        Success = yes
    ;
        MaybeImports = no,
        Modules = set.init,
        Success = no
    ).

%-----------------------------------------------------------------------------%

    % filter(F, P, MN, S, Ms, !Info, !IO):
    %
    % Filter the set of module_names returned from P called with MN,
    % as its input arguments with F.  The first argument to F will be MN
    % and the second argument be one of the module_names returned from P.
    %
:- pred filter_module_names(
    pred(module_name, module_name)::pred(in, in) is semidet,
    pred(module_name, bool, set(module_name), make_info, make_info,
        io, io)::pred(in, out, out, in, out, di, uo) is det,
    module_name::in, bool::out,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

filter_module_names(Filter, F, ModuleName, Success, Modules, !Info, !IO) :-
    F(ModuleName, Success, Modules0, !Info, !IO),
    Modules = set.filter((pred(M::in) is semidet :- Filter(ModuleName, M)),
        Modules0).

    % If the current module we are compiling is not in the standard library
    % and the module we are importing is then remove it, otherwise keep it.
    % When compiling with `--target il', if the current module is not in the
    % standard library, we link with mercury.dll rather than the DLL file
    % for the imported module.
    %
:- pred maybe_keep_std_lib_module(module_name::in, module_name::in) is semidet.

maybe_keep_std_lib_module(CurrentModule, ImportedModule) :-
    \+ (
        \+ mercury_std_library_module_name(CurrentModule),
        mercury_std_library_module_name(ImportedModule)
    ).

%-----------------------------------------------------------------------------%

:- pred fact_table_files(module_name::in,
    bool::out, set(pair(file_name, maybe(option)))::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

fact_table_files(ModuleName, Success, Files, !Info, !IO) :-
    get_module_dependencies(ModuleName, MaybeImports, !Info, !IO),
    (
        MaybeImports = yes(Imports),
        Success = yes,
        Files = set.list_to_set(
            make_target_list(Imports ^ fact_table_deps, no))
    ;
        MaybeImports = no,
        Success = no,
        Files = set.init
    ).

%-----------------------------------------------------------------------------%

:- type transitive_dependencies_root
    --->    transitive_dependencies_root(
                module_name,
                transitive_dependencies_type,
                module_locn
            ).

:- type transitive_deps_result == pair(bool, set(module_name)).

:- type transitive_dependencies_type
    --->    interface_imports
    ;       all_imports            % every import_module and use_module
    ;       all_dependencies.      % all_imports plus every include_module

:- type module_locn
    --->    local_module    % The source file for the module is in
                            % the current directory.
    ;       any_module.

:- type cached_transitive_dependencies ==
    map(transitive_dependencies_root, transitive_deps_result).

init_cached_transitive_dependencies = map.init.

find_reachable_local_modules(ModuleName, Success, Modules, !Info, !IO) :-
    find_transitive_module_dependencies(all_dependencies, local_module,
        ModuleName, Success, Modules, !Info, !IO).

:- pred find_transitive_implementation_imports(module_name::in, bool::out,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

find_transitive_implementation_imports(ModuleName, Success, Modules,
        !Info, !IO) :-
    find_transitive_module_dependencies(all_imports, any_module,
        ModuleName, Success, Modules0, !Info, !IO),
    Modules = set.insert(Modules0, ModuleName).

:- pred find_transitive_interface_imports(module_name::in, bool::out,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

find_transitive_interface_imports(ModuleName, Success, Modules, !Info, !IO) :-
    find_transitive_module_dependencies(interface_imports, any_module,
        ModuleName, Success, Modules0, !Info, !IO),
    set.delete(Modules0, ModuleName, Modules).

:- pred find_transitive_module_dependencies(transitive_dependencies_type::in,
    module_locn::in, module_name::in, bool::out, set(module_name)::out,
    make_info::in, make_info::out, io::di, io::uo) is det.

find_transitive_module_dependencies(DependenciesType, ModuleLocn,
        ModuleName, Success, Modules, !Info, !IO) :-
    globals.io_lookup_bool_option(keep_going, KeepGoing, !IO),
    find_transitive_module_dependencies_2(KeepGoing,
        DependenciesType, ModuleLocn, ModuleName,
        Success, set.init, Modules, !Info, !IO),
    DepsRoot = transitive_dependencies_root(ModuleName, DependenciesType,
        ModuleLocn),
    !:Info = !.Info ^ cached_transitive_dependencies ^ elem(DepsRoot)
        := Success - Modules.

:- pred find_transitive_module_dependencies_2(bool::in,
    transitive_dependencies_type::in, module_locn::in,
    module_name::in, bool::out, set(module_name)::in,
    set(module_name)::out, make_info::in, make_info::out,
    io::di, io::uo) is det.

find_transitive_module_dependencies_2(KeepGoing, DependenciesType,
        ModuleLocn, ModuleName, Success, Modules0, Modules, !Info, !IO) :-
    (
        set.member(ModuleName, Modules0)
    ->
        Success = yes,
        Modules = Modules0
    ;
        DepsRoot = transitive_dependencies_root(ModuleName,
            DependenciesType, ModuleLocn),
        Result0 = !.Info ^ cached_transitive_dependencies ^ elem(DepsRoot)
    ->
        Result0 = Success - Modules1,
        Modules = set.union(Modules0, Modules1)
    ;
        get_module_dependencies(ModuleName, MaybeImports, !Info, !IO),
        (
            MaybeImports = yes(Imports),
            (
                (
                    ModuleLocn = any_module
                ;
                    ModuleLocn = local_module,
                    Imports ^ module_dir = dir.this_directory
                )
            ->
                (
                    % Parents don't need to be considered here.
                    % Anywhere the interface of the child module is needed,
                    % the parent must also have been imported.
                    DependenciesType = interface_imports,
                    ImportsToCheck = Imports ^ int_deps
                ;
                    DependenciesType = all_dependencies,
                    ImportsToCheck =
                        list.condense([
                        Imports ^ int_deps,
                        Imports ^ impl_deps,
                        Imports ^ parent_deps,
                        Imports ^ children,
                        get_foreign_imported_modules(
                            Imports ^ foreign_import_modules)
                        ])
                ;
                    DependenciesType = all_imports,
                    ImportsToCheck =
                        list.condense([
                        Imports ^ int_deps,
                        Imports ^ impl_deps,
                        Imports ^ parent_deps,
                        get_foreign_imported_modules(
                            Imports ^ foreign_import_modules)
                        ])
                ),
                ImportingModule = !.Info ^ importing_module,
                !:Info = !.Info ^ importing_module := yes(ModuleName),
                foldl3_maybe_stop_at_error(KeepGoing,
                    find_transitive_module_dependencies_2(KeepGoing,
                        DependenciesType, ModuleLocn),
                        ImportsToCheck, Success,
                        set.insert(Modules0, ModuleName), Modules,
                        !Info, !IO),
                !:Info = !.Info ^ importing_module := ImportingModule
            ;
                Success = yes,
                Modules = Modules0
            )
        ;
            MaybeImports = no,
            Success = no,
            Modules = Modules0
        )
    ).

%-----------------------------------------------------------------------------%

make_local_module_id_options(ModuleName, Success, Options, !Info, !IO) :-
    find_reachable_local_modules(ModuleName, Success, LocalModules,
        !Info, !IO),
    set.fold(make_local_module_id_option, LocalModules, [], Options).

:- pred make_local_module_id_option(module_name::in, list(string)::in,
    list(string)::out) is det.

make_local_module_id_option(ModuleName, Opts,
    ["--local-module-id", module_name_to_module_id(ModuleName) | Opts]).

%-----------------------------------------------------------------------------%

:- pred check_dependencies_debug_unbuilt(file_name::in,
    assoc_list(dependency_file, dependency_status)::in,
    io::di, io::uo) is det.

check_dependencies_debug_unbuilt(TargetFileName, UnbuiltDependencies, !IO) :-
    io.write_string(TargetFileName, !IO),
    io.write_string(": dependencies could not be built.\n\t", !IO),
    io.write_list(UnbuiltDependencies, ",\n\t",
        (pred((DepTarget - DepStatus)::in, !.IO::di, !:IO::uo) is det :-
            write_dependency_file(DepTarget, !IO),
            io.write_string(" - ", !IO),
            write_dependency_status(DepStatus, !IO)
        ), !IO),
    io.nl(!IO).

:- pred write_dependency_status(dependency_status::in, io::di, io::uo) is det.

write_dependency_status(deps_status_not_considered, !IO) :-
    io.write_string("deps_status_not_considered", !IO).
write_dependency_status(deps_status_being_built, !IO) :-
    io.write_string("deps_status_being_built", !IO).
write_dependency_status(deps_status_up_to_date, !IO) :-
    io.write_string("deps_status_up_to_date", !IO).
write_dependency_status(deps_status_error, !IO) :-
    io.write_string("deps_status_error", !IO).

check_dependencies(TargetFileName, MaybeTimestamp, BuildDepsSucceeded,
        DepFiles, DepsResult, !Info, !IO) :-
    list.map_foldl2(dependency_status, DepFiles, DepStatusList, !Info, !IO),
    assoc_list.from_corresponding_lists(DepFiles, DepStatusList, DepStatusAL),
    list.filter(
        (pred((_ - DepStatus)::in) is semidet :-
            DepStatus \= deps_status_up_to_date
        ), DepStatusAL, UnbuiltDependencies),
    (
        UnbuiltDependencies = [_ | _],
        debug_msg(check_dependencies_debug_unbuilt(TargetFileName,
            UnbuiltDependencies), !IO),
        DepsResult = deps_error
    ;
        UnbuiltDependencies = [],
        debug_msg(
            io.write_string(TargetFileName ++ ": finished dependencies\n"),
            !IO),
        list.map_foldl2(get_dependency_timestamp, DepFiles,
            DepTimestamps, !Info, !IO),

        check_dependency_timestamps(TargetFileName, MaybeTimestamp,
            BuildDepsSucceeded, DepFiles, write_dependency_file,
            DepTimestamps, DepsResult, !IO)
    ).

:- pred check_dependencies_timestamps_write_missing_deps(file_name::in,
    bool::in, list(File)::in, pred(File, io, io)::(pred(in, di, uo) is det),
    list(maybe_error(timestamp))::in, io::di, io::uo) is det.

check_dependencies_timestamps_write_missing_deps(TargetFileName,
        BuildDepsSucceeded, DepFiles, WriteDepFile, DepTimestamps, !IO) :-
    assoc_list.from_corresponding_lists(DepFiles, DepTimestamps,
        DepTimestampAL),
    solutions(
        (pred(DepFile::out) is nondet :-
            list.member(DepFile - error(_), DepTimestampAL)
        ), ErrorDeps),
    io.write_string("** dependencies for `", !IO),
    io.write_string(TargetFileName, !IO),
    io.write_string("' do not exist: ", !IO),
    io.write_list(ErrorDeps, ", ", WriteDepFile, !IO),
    io.nl(!IO),
    (
        BuildDepsSucceeded = yes,
        io.write_string("** This indicates a bug in `mmc --make'.\n", !IO)
    ;
        BuildDepsSucceeded = no
    ).

check_dependency_timestamps(TargetFileName, MaybeTimestamp, BuildDepsSucceeded,
        DepFiles, WriteDepFile, DepTimestamps, DepsResult, !IO) :-
    (
        MaybeTimestamp = error(_),
        DepsResult = deps_out_of_date,
        debug_msg(io.write_string(TargetFileName ++ " does not exist.\n"), !IO)
    ;
        MaybeTimestamp = ok(Timestamp),
        globals.io_lookup_bool_option(rebuild, Rebuild, !IO),
        (
            list.member(MaybeDepTimestamp1, DepTimestamps),
            MaybeDepTimestamp1 = error(_)
        ->
            DepsResult = deps_error,
            WriteMissingDeps =
                check_dependencies_timestamps_write_missing_deps(
                    TargetFileName, BuildDepsSucceeded, DepFiles,
                    WriteDepFile, DepTimestamps),
            (
                BuildDepsSucceeded = yes,

                % Something has gone wrong -- building the target has
                % succeeded, but there are some files missing.
                % Report an error.

                WriteMissingDeps(!IO)
            ;
                BuildDepsSucceeded = no,
                debug_msg(WriteMissingDeps, !IO)
            )
        ;
            Rebuild = yes
        ->
            % With `--rebuild', a target is always considered to be
            % out-of-date, regardless of the timestamps of its dependencies.

            DepsResult = deps_out_of_date
        ;
            list.member(MaybeDepTimestamp2, DepTimestamps),
            MaybeDepTimestamp2 = ok(DepTimestamp),
            compare((>), DepTimestamp, Timestamp)
        ->
            debug_newer_dependencies(TargetFileName, MaybeTimestamp,
                DepFiles, WriteDepFile, DepTimestamps, !IO),
            DepsResult = deps_out_of_date
        ;
            DepsResult = deps_up_to_date
        )
    ).

:- pred debug_newer_dependencies(string::in, maybe_error(timestamp)::in,
    list(T)::in, pred(T, io, io)::(pred(in, di, uo) is det),
    list(maybe_error(timestamp))::in, io::di, io::uo) is det.

debug_newer_dependencies(TargetFileName, MaybeTimestamp,
        DepFiles, WriteDepFile, DepTimestamps, !IO) :-
    debug_msg(debug_newer_dependencies_2(TargetFileName, MaybeTimestamp,
        DepFiles, WriteDepFile, DepTimestamps), !IO).

:- pred debug_newer_dependencies_2(string::in, maybe_error(timestamp)::in,
    list(T)::in, pred(T, io, io)::(pred(in, di, uo) is det),
    list(maybe_error(timestamp))::in, io::di, io::uo) is det.

debug_newer_dependencies_2(TargetFileName, MaybeTimestamp,
        DepFiles, WriteDepFile, DepTimestamps, !IO) :-
    io.write_string(TargetFileName, !IO),
    io.write_string(": newer dependencies: ", !IO),
    assoc_list.from_corresponding_lists(DepFiles, DepTimestamps,
        DepTimestampAL),
    solutions(
        (pred(DepFile::out) is nondet :-
            list.member(DepFile - MaybeDepTimestamp, DepTimestampAL),
            (
                MaybeDepTimestamp = error(_)
            ;
                MaybeDepTimestamp = ok(DepTimestamp),
                MaybeTimestamp = ok(Timestamp),
                compare((>), DepTimestamp, Timestamp)
            )
        ), NewerDeps),
    io.write_list(NewerDeps, ",\n\t", WriteDepFile, !IO),
    io.nl(!IO).

dependency_status(dep_file(FileName, _) @ Dep, Status, !Info, !IO) :-
    (
        Status0 = !.Info ^ dependency_status ^ elem(Dep)
    ->
        Status = Status0
    ;
        get_dependency_timestamp(Dep, MaybeTimestamp, !Info, !IO),
        (
            MaybeTimestamp = ok(_),
            Status = deps_status_up_to_date
        ;
            MaybeTimestamp = error(Error),
            Status = deps_status_error,
            io.write_string("** Error: file `", !IO),
            io.write_string(FileName, !IO),
            io.write_string("' not found: ", !IO),
            io.write_string(Error, !IO),
            io.nl(!IO)
        ),
        !:Info = !.Info ^ dependency_status ^ elem(Dep) := Status
    ).
dependency_status(dep_target(Target) @ Dep, Status, !Info, !IO) :-
    Target = target_file(ModuleName, FileType),
    ( FileType = module_target_source ->
        % Source files are always up-to-date.
        ModuleTarget = module_target(module_target_source),
        maybe_warn_up_to_date_target(ModuleName - ModuleTarget, !Info, !IO),
        Status = deps_status_up_to_date
    ; Status0 = !.Info ^ dependency_status ^ elem(Dep) ->
        Status = Status0
    ;
        get_module_dependencies(ModuleName, MaybeImports, !Info, !IO),
        (
            MaybeImports = no,
            Status = deps_status_error
        ;
            MaybeImports = yes(Imports),
            ( Imports ^ module_dir \= dir.this_directory ->
                % Targets from libraries are always considered to be
                % up-to-date if they exist.

                get_target_timestamp(yes, Target, MaybeTimestamp, !Info, !IO),
                (
                    MaybeTimestamp = ok(_),
                    Status = deps_status_up_to_date
                ;
                    MaybeTimestamp = error(Error),
                    Status = deps_status_error,
                    io.write_string("** Error: file `", !IO),
                    write_target_file(Target, !IO),
                    io.write_string("' not found: ", !IO),
                    io.write_string(Error, !IO),
                    io.nl(!IO)
                )
            ;
                Status = deps_status_not_considered
            )
        ),
        !:Info = !.Info ^ dependency_status ^ elem(Dep) := Status
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "make.dependencies.m".

%-----------------------------------------------------------------------------%
:- end_module make.dependencies.
%-----------------------------------------------------------------------------%
