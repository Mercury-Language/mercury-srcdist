%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2008-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: file_name.m.
%
% This module deals with the connections between module names and files.
%
%-----------------------------------------------------------------------------%

:- module parse_tree.file_names.
:- interface.

:- import_module mdbcomp.sym_name.
:- import_module libs.file_util.
:- import_module libs.globals.

:- import_module io.

%-----------------------------------------------------------------------------%

    % Succeeds iff the module referred to by the module name is one
    % of the modules in the standard library.
    %
:- pred mercury_std_library_module_name(module_name::in) is semidet.

    % qualify_mercury_std_library_module_name(ModuleName) = QualModuleName:
    %
    % If ModuleName is a standard library module then return the module with an
    % extra `mercury' prefix.  Otherwise, return the module name unchanged.
    %
:- func qualify_mercury_std_library_module_name(module_name) = module_name.

%-----------------------------------------------------------------------------%

:- type maybe_create_dirs
    --->    do_create_dirs
    ;       do_not_create_dirs.

    % Return the file name of the Mercury source for the given module.
    %
:- pred module_source_filename(globals::in, module_name::in, file_name::out,
    io::di, io::uo) is det.

    % module_name_to_file_name(Globals, Module, Extension, Mkdir, FileName,
    %   !IO):
    %
    % Convert a module name and file extension to the corresponding file name.
    % If `MkDir' is do_create_dirs, then create any directories needed.
    %
    % Currently we use the convention that the module `foo.bar.baz' should be
    % named `foo.bar.baz.m', and allow other naming conventions with the
    % `-f' option.
    %
    % Note that this predicate is also used to create some "phony" Makefile
    % targets that do not have corresponding files, e.g. `<foo>.clean'.
    %
:- pred module_name_to_file_name(globals::in, module_name::in, string::in,
    maybe_create_dirs::in, file_name::out, io::di, io::uo) is det.

    % module_name_to_search_file_name(Globals, Module, Extension, FileName,
    %   !IO):
    %
    % As above, but for a file which might be in an installed library,
    % not the current directory.
    %
    % With `--use-grade-subdirs', the current directory's `.mih' files are in
    % `Mercury/<grade>/<arch>/Mercury/mihs', and those for installed libraries
    % are in `<prefix>/lib/mercury/lib/<grade>/<arch>/inc/Mercury/mihs'.
    %
    % handle_options.m sets up the `--c-include-directory' options so that
    % the name `<module>.mih' should be used in a context which requires
    % searching for the `.mih files, for example in a C file.
    %
    % module_name_to_file_name would return
    % `Mercury/<grade>/<arch>/Mercury/mihs/<module>.mihs',
    % which would be used when writing or removing the `.mih' file.
    %
:- pred module_name_to_search_file_name(globals::in, module_name::in,
    string::in, file_name::out, io::di, io::uo) is det.

:- type maybe_search
    --->    do_search
    ;       do_not_search.

    % module_name_to_lib_file_name(Globals, Prefix, Module, Extension, MkDir,
    %   FileName, !IO):
    %
    % Like module_name_to_file_name, but also allows a prefix.
    % Used for creating library names, e.g. `lib<foo>.$A' and `lib<foo>.so'.
    %
:- pred module_name_to_lib_file_name(globals::in, string::in, module_name::in,
    string::in, maybe_create_dirs::in, file_name::out, io::di, io::uo) is det.

    % fact_table_file_name(Globals, Module, FactTableFileName, Ext, MkDir,
    %   FileName, !IO):
    %
    % Returns the filename to use when compiling fact table files.
    % If 'MkDir' is do_create_dirs, then create any directories needed.
    %
:- pred fact_table_file_name(globals::in, module_name::in, file_name::in,
    string::in, maybe_create_dirs::in, file_name::out, io::di, io::uo) is det.

    % extra_link_obj_file_name(Globals, Module, ExtraLinkObjName, Ext,
    %   MkDir, FileName, !IO):
    %
    % Returns the filename to use when compiling extra objects that must be
    % linked into the executable (currently used only for fact tables).
    % If `MkDir' is do_create_dirs, make any directories necessary.
    %
:- pred extra_link_obj_file_name(globals::in,module_name::in, file_name::in,
    string::in, maybe_create_dirs::in, file_name::out, io::di, io::uo) is det.

    % Convert a file name (excluding the trailing `.m') to the corresponding
    % module name.
    %
:- pred file_name_to_module_name(file_name::in, module_name::out) is det.

    % Convert a module name to a file name stem (e.g. foo.bar.baz).
    %
:- pred module_name_to_file_name_stem(module_name::in, file_name::out) is det.

    % Convert a module name to something that is suitable
    % for use as a variable name in makefiles.
    %
:- pred module_name_to_make_var_name(module_name::in, string::out) is det.

%-----------------------------------------------------------------------------%

    % Return the name of the directory containing Java `.class' files.
    %
:- pred get_class_dir_name(globals::in, string::out) is det.

%-----------------------------------------------------------------------------%

    % Convert an include_file reference to a filesystem path.
    %
:- pred make_include_file_path(string::in, string::in, string::out) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.globals.
:- import_module libs.handle_options.
:- import_module libs.options.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.java_names.
:- import_module parse_tree.source_file_map.

:- import_module bool.
:- import_module dir.
:- import_module library.
:- import_module list.
:- import_module require.
:- import_module string.

%-----------------------------------------------------------------------------%

mercury_std_library_module_name(unqualified(Name)) :-
    mercury_std_library_module(Name).
mercury_std_library_module_name(qualified(Module, Name)) :-
    module_name_to_file_name_stem(qualified(Module, Name), ModuleNameStr),
    mercury_std_library_module(ModuleNameStr).
mercury_std_library_module_name(qualified(Module, Name)) :-
    strip_outermost_qualifier(qualified(Module, Name), "mercury", ModuleName),
    module_name_to_file_name_stem(ModuleName, ModuleNameStr),
    mercury_std_library_module(ModuleNameStr).

qualify_mercury_std_library_module_name(ModuleName) = QualModuleName :-
    ( mercury_std_library_module_name(ModuleName) ->
        QualModuleName = add_outermost_qualifier("mercury", ModuleName)
    ;
        QualModuleName = ModuleName
    ).

%-----------------------------------------------------------------------------%

module_source_filename(Globals, ModuleName, SourceFileName, !IO) :-
    module_name_to_file_name(Globals, ModuleName, ".m", do_not_create_dirs,
        SourceFileName, !IO).

module_name_to_file_name(Globals, ModuleName, Ext, MkDir, FileName, !IO) :-
    module_name_to_file_name_general(Globals, ModuleName, Ext,
        do_not_search, MkDir, FileName, !IO).

module_name_to_search_file_name(Globals, ModuleName, Ext, FileName, !IO) :-
    module_name_to_file_name_general(Globals, ModuleName, Ext,
        do_search, do_not_create_dirs, FileName, !IO).

:- pred module_name_to_file_name_general(globals::in, module_name::in,
    string::in, maybe_search::in, maybe_create_dirs::in, file_name::out,
    io::di, io::uo) is det.

module_name_to_file_name_general(Globals, ModuleName, Ext, Search, MkDir,
        FileName, !IO) :-
    ( Ext = ".m" ->
        % Look up the module in the module->file mapping.
        source_file_map.lookup_module_source_file(ModuleName, FileName, !IO)
    ;
        % Java files need to be placed into a package subdirectory and may need
        % mangling.
        ( string.suffix(Ext, ".java")
        ; string.suffix(Ext, ".class")
        )
    ->
        BaseParentDirs = ["jmercury"],
        mangle_sym_name_for_java(ModuleName, module_qual, "__",
            MangledModuleName),
        BaseName = MangledModuleName ++ Ext,
        choose_file_name(Globals, ModuleName, BaseParentDirs, BaseName, Ext,
            Search, MkDir, FileName, !IO)
    ;
        % Erlang uses `.' as a package separator and expects a module
        % `a.b.c' to be in a file `a/b/c.erl'.  Rather than that, we use
        % a flat namespace with `__' as module separators.
        ( string.suffix(Ext, ".erl")
        ; string.suffix(Ext, ".hrl")
        ; string.suffix(Ext, ".beam")
        )
    ->
        ErlangModuleName = qualify_mercury_std_library_module_name(ModuleName),
        BaseName = sym_name_to_string_sep(ErlangModuleName, "__") ++ Ext,
        choose_file_name(Globals, ErlangModuleName, [], BaseName, Ext, Search,
            MkDir, FileName, !IO)
    ;
        BaseName = sym_name_to_string_sep(ModuleName, ".") ++ Ext,
        choose_file_name(Globals, ModuleName, [], BaseName, Ext, Search, MkDir,
            FileName, !IO)
    ).

module_name_to_lib_file_name(Globals, Prefix, ModuleName, Ext, MkDir,
        FileName, !IO) :-
    BaseFileName = sym_name_to_string(ModuleName),
    BaseName = Prefix ++ BaseFileName ++ Ext,
    choose_file_name(Globals, ModuleName, [], BaseName, Ext, do_not_search,
        MkDir, FileName, !IO).

fact_table_file_name(Globals, ModuleName, FactTableFileName, Ext, MkDir,
        FileName, !IO) :-
    extra_link_obj_file_name(Globals, ModuleName, FactTableFileName, Ext,
        MkDir, FileName, !IO).

extra_link_obj_file_name(Globals, ModuleName, ExtraLinkObjName, Ext, MkDir,
        FileName, !IO) :-
    BaseName = ExtraLinkObjName ++ Ext,
    choose_file_name(Globals, ModuleName, [], BaseName, Ext, do_not_search,
        MkDir, FileName, !IO).

    % choose_file_name(ModuleName, BaseParentDirs, BaseName, Ext, Search,
    %   MkDir, FileName, !IO)
    %
    % BaseParentDirs is usually empty.  For Java files, BaseParentDirs are the
    % package directories that the file needs to be placed in.
    %
:- pred choose_file_name(globals::in, module_name::in, list(string)::in,
    string::in, string::in, maybe_search::in, maybe_create_dirs::in,
    file_name::out, io::di, io::uo) is det.

choose_file_name(Globals, _ModuleName, BaseParentDirs, BaseName, Ext,
        Search, MkDir, FileName, !IO) :-
    globals.lookup_bool_option(Globals, use_subdirs, UseSubdirs),
    globals.lookup_bool_option(Globals, use_grade_subdirs, UseGradeSubdirs),
    globals.lookup_string_option(Globals, library_extension, LibExt),
    globals.lookup_string_option(Globals, shared_library_extension,
        SharedLibExt),
    (
        % If we're searching for (rather than writing) a `.mih' file,
        % use the plain file name.  This is so that searches for files
        % in installed libraries will work.  `--c-include-directory' is
        % set so that searches for files in the current directory will
        % work.
        % Similarly for `.hrl' files.  We set `--erlang-include-directory'
        % for those.

        Search = do_search,
        ( Ext = ".mih"
        ; Ext = ".mih.tmp"
        ; Ext = ".hrl"
        ; Ext = ".hrl.tmp"
        )
    ->
        FileName = BaseName
    ;
        UseSubdirs = no
    ->
        % Even if not putting files in a `Mercury' directory, Java files will
        % have non-empty BaseParentDirs (the package) which may need to be
        % created.
        make_file_name(Globals, BaseParentDirs, Search, MkDir, BaseName, Ext,
            FileName, !IO)
    ;
        % The source files, the final executables, library files (including
        % .init files) output files intended for use by the user, and phony
        % Mmake targets names go in the current directory

        \+ (
            UseGradeSubdirs = yes,
            file_is_arch_or_grade_dependent(Globals, Ext)
        ),
        (
            % Executable files.
            ( Ext = ""
            ; Ext = ".bat"
            ; Ext = ".exe"
            ; Ext = ".dll"

            % Library files.
            ; Ext = ".a"
            ; Ext = ".$A"
            ; Ext = ".so"
            ; Ext = ".dylib"
            ; Ext = ".$(EXT_FOR_SHARED_LIB)"
            ; Ext = ".jar"
            ; Ext = ".beams"
            ; Ext = ".init"

            % mercury_update_interface requires the `.init.tmp' files to be
            % in the same directory as the `.init' files.
            ; Ext = ".init.tmp"

            % output files intended for use by the user (the .h_dump* and
            % .c_dump* MLDS dumps also fit into this category, but for
            % efficiency, to keep this as a switch, we deal with them below).
            ; Ext = ".mh"

            % mercury_update_interface requires the `.mh.tmp' files to be
            % in the same directory as the `.mh' files.
            ; Ext = ".mh.tmp"
            ; Ext = ".err"
            ; Ext = ".ugly"
            ; Ext = ".hlds_dump"
            ; Ext = ".mlds_dump"
            ; Ext = ".dependency_graph"
            ; Ext = ".order"
            % Mmake targets
            ; Ext = ".clean"
            ; Ext = ".realclean"
            ; Ext = ".depend"
            ; Ext = ".install_ints"
            ; Ext = ".install_opts"
            ; Ext = ".install_hdrs"
            ; Ext = ".install_grade_hdrs"
            ; Ext = ".check"
            ; Ext = ".ints"
            ; Ext = ".int3s"
            ; Ext = ".ils"
            ; Ext = ".javas"
            ; Ext = ".classes"
            ; Ext = ".erls"
            ; Ext = ".beams"
            ; Ext = ".opts"
            ; Ext = ".trans_opts"
            ; Ext = ".all_ints"
            ; Ext = ".all_int3s"
            ; Ext = ".all_opts"
            ; Ext = ".all_trans_opts"
            )
        ;
            % Output files intended for use by the user.

            ( string.prefix(Ext, ".c_dump")
            ; string.prefix(Ext, ".mih_dump")
            )
        )
    ->
        FileName = BaseName
    ;
        % We need to handle a few cases specially.

        (
            ( Ext = ".dir/*.o"
            ; Ext = ".dir/*.$O"
            )
        ->
            SubDirName = "dirs"
        ;
            % .$O, .pic_o and .lpic_o files need to go in the same directory,
            % so that using .$(EXT_FOR_PIC_OBJECTS) will work.
            ( Ext = ".o"
            ; Ext = ".$O"
            ; Ext = ".lpic_o"
            ; Ext = ".pic_o"
            ; Ext = "$(EXT_FOR_PIC_OBJECTS)"
            ; Ext = "_init.o"
            ; Ext = "_init.$O"
            ; Ext = "_init.lpic_o"
            ; Ext = "_init.pic_o"
            ; Ext = "_init.$(EXT_FOR_PIC_OBJECTS)"
            )
        ->
            SubDirName = "os"
        ;
            % _init.c, _init.s, _init.o etc. files go in the cs, ss, os etc
            % subdirectories.
            string.append("_init.", ExtName, Ext)
        ->
            string.append(ExtName, "s", SubDirName)
        ;
            % .int.tmp, .opt.tmp, etc. files need to go in the ints, opts, etc
            % subdirectories.
            string.append(".", ExtName0, Ext),
            string.remove_suffix(ExtName0, ".tmp", ExtName)
        ->
            string.append(ExtName, "s", SubDirName)
        ;
            % `.dv' files go in the `deps' subdirectory,
            % along with the `.dep' files
            Ext = ".dv"
        ->
            SubDirName = "deps"
        ;
            % Static and shared libraries go in the `lib' subdirectory.
            ( Ext = LibExt
            ; Ext = SharedLibExt
            )
        ->
            SubDirName = "lib"
        ;
            % The usual case: `*.foo' files go in the `foos' subdirectory.
            string.append(".", ExtName, Ext)
        ->
            string.append(ExtName, "s", SubDirName)
        ;
            % Launcher scripts go in the `bin' subdirectory.
            Ext = ""
        ->
            SubDirName = "bin"
        ;
            unexpected($module, $pred, "unknown extension `" ++ Ext ++ "'")
        ),

        make_file_name(Globals, [SubDirName | BaseParentDirs], Search, MkDir,
            BaseName, Ext, FileName, !IO)
    ).

file_name_to_module_name(FileName, ModuleName) :-
    ModuleName = string_to_sym_name(FileName).

module_name_to_file_name_stem(ModuleName, FileName) :-
    FileName = sym_name_to_string(ModuleName).

module_name_to_make_var_name(ModuleName, MakeVarName) :-
    MakeVarName = sym_name_to_string(ModuleName).

:- pred make_file_name(globals::in, list(dir_name)::in, maybe_search::in,
    maybe_create_dirs::in, file_name::in, string::in, file_name::out,
    io::di, io::uo) is det.

make_file_name(Globals, SubDirNames, Search, MkDir, BaseName, Ext, FileName,
        !IO) :-
    globals.lookup_bool_option(Globals, use_grade_subdirs, UseGradeSubdirs),
    globals.lookup_bool_option(Globals, use_subdirs, UseSubdirs),
    (
        UseGradeSubdirs = yes,
        file_is_arch_or_grade_dependent(Globals, Ext),

        % If we're searching for (rather than writing) the file, just search
        % in Mercury/<ext>s. This is so that searches for files in installed
        % libraries work.  `--intermod-directories' is set so this will work.

        \+ (
            Search = do_search,
            ( Ext = ".opt"
            ; Ext = ".trans_opt"
            ; Ext = ".analysis"
            ; Ext = ".imdg"
            ; Ext = ".request"
            )
        )
    ->
        grade_directory_component(Globals, Grade),
        globals.lookup_string_option(Globals, target_arch, TargetArch),

        % The extra "Mercury" is needed so we can use `--intermod-directory
        % Mercury/<grade>/<target_arch>' and `--c-include
        % Mercury/<grade>/<target_arch>' to find the local `.opt' and `.mih'
        % files without messing up the search for the files for installed
        % libraries.
        DirComponents = ["Mercury", Grade, TargetArch, "Mercury" | SubDirNames]
    ;
        UseSubdirs = yes
    ->
        DirComponents = ["Mercury" | SubDirNames]
    ;
        DirComponents = SubDirNames
    ),
    (
        DirComponents = [],
        FileName = BaseName
    ;
        DirComponents = [_ | _],
        (
            MkDir = do_create_dirs,
            DirName = dir.relative_path_name_from_components(DirComponents),
            make_directory(DirName, _, !IO)
        ;
            MkDir = do_not_create_dirs
        ),
        Components = DirComponents ++ [BaseName],
        FileName = dir.relative_path_name_from_components(Components)
    ).

:- pred file_is_arch_or_grade_dependent(globals::in, string::in) is semidet.

file_is_arch_or_grade_dependent(_, Ext) :-
    file_is_arch_or_grade_dependent_2(Ext).
file_is_arch_or_grade_dependent(Globals, Ext0) :-
    % for mercury_update_interface
    ( string.remove_suffix(Ext0, ".tmp", Ext) ->
        file_is_arch_or_grade_dependent(Globals, Ext)
    ;
        file_is_arch_or_grade_dependent_3(Globals, Ext0)
    ).

:- pred file_is_arch_or_grade_dependent_2(string::in) is semidet.

    % The `.used' file isn't grade dependent itself, but it contains
    % information collected while compiling a grade-dependent `.c', `il',
    % etc file.
file_is_arch_or_grade_dependent_2(".used").
file_is_arch_or_grade_dependent_2(".opt").
file_is_arch_or_grade_dependent_2(".optdate").
file_is_arch_or_grade_dependent_2(".trans_opt").
file_is_arch_or_grade_dependent_2(".trans_opt_date").
file_is_arch_or_grade_dependent_2(".analysis").
file_is_arch_or_grade_dependent_2(".analysis_date").
file_is_arch_or_grade_dependent_2(".analysis_status").
file_is_arch_or_grade_dependent_2(".imdg").
file_is_arch_or_grade_dependent_2(".track_flags").
file_is_arch_or_grade_dependent_2(".init").
file_is_arch_or_grade_dependent_2(".request").
file_is_arch_or_grade_dependent_2(".mih").
file_is_arch_or_grade_dependent_2(".c").
file_is_arch_or_grade_dependent_2(".c_date").
file_is_arch_or_grade_dependent_2(".s").
file_is_arch_or_grade_dependent_2(".s_date").
file_is_arch_or_grade_dependent_2(".pic_s").
file_is_arch_or_grade_dependent_2(".pic_s_date").
file_is_arch_or_grade_dependent_2(".il").
file_is_arch_or_grade_dependent_2(".il_date").
file_is_arch_or_grade_dependent_2(".cs").
file_is_arch_or_grade_dependent_2(".cs_date").
file_is_arch_or_grade_dependent_2(".java").
file_is_arch_or_grade_dependent_2(".java_date").
file_is_arch_or_grade_dependent_2(".class").
file_is_arch_or_grade_dependent_2(".erl").
file_is_arch_or_grade_dependent_2(".erl_date").
file_is_arch_or_grade_dependent_2(".beam").
file_is_arch_or_grade_dependent_2(".beams").
file_is_arch_or_grade_dependent_2(".hrl").
file_is_arch_or_grade_dependent_2(".dir").
file_is_arch_or_grade_dependent_2(".dll").
file_is_arch_or_grade_dependent_2(".$A").
file_is_arch_or_grade_dependent_2(".a").
file_is_arch_or_grade_dependent_2("_init.c").
file_is_arch_or_grade_dependent_2("_init.$O").
file_is_arch_or_grade_dependent_2("_init.erl").
file_is_arch_or_grade_dependent_2("_init.beam").

:- pred file_is_arch_or_grade_dependent_3(globals::in, string::in) is semidet.

file_is_arch_or_grade_dependent_3(Globals, Ext) :-
    (
        globals.lookup_string_option(Globals, executable_file_extension, Ext)
    ;
        globals.lookup_string_option(Globals, library_extension, Ext)
    ;
        globals.lookup_string_option(Globals, shared_library_extension, Ext)
    ).
file_is_arch_or_grade_dependent_3(Globals, Ext) :-
    (
        globals.lookup_string_option(Globals,
            object_file_extension, ObjExt)
    ;
        globals.lookup_string_option(Globals,
            pic_object_file_extension, ObjExt)
    ;
        globals.lookup_string_option(Globals,
            link_with_pic_object_file_extension, ObjExt)
    ),
    (
        Ext = ObjExt
    ;
        Ext = "_init" ++ ObjExt
    ).

%-----------------------------------------------------------------------------%

get_class_dir_name(Globals, ClassDirName) :-
    globals.lookup_bool_option(Globals, use_grade_subdirs, UseGradeSubdirs),
    globals.lookup_bool_option(Globals, use_subdirs, UseSubdirs),
    (
        UseGradeSubdirs = yes
    ->
        grade_directory_component(Globals, Grade),
        globals.lookup_string_option(Globals, target_arch, TargetArch),
        ClassDirName = "Mercury" / Grade / TargetArch / "Mercury" / "classs"
    ;
        UseSubdirs = yes
    ->
        ClassDirName = "Mercury" / "classs"
    ;
        ClassDirName = "."
    ).

%-----------------------------------------------------------------------------%

make_include_file_path(ModuleSourceFileName, OrigFileName, Path) :-
    ( path_name_is_absolute(OrigFileName) ->
        Path = OrigFileName
    ;
        % XXX This will throw an exception on Windows if OrigFileName is a path
        % "X:foo", i.e. relative to the current directory on the X: drive.
        % That seems a silly thing to write in a source file.
        Path = dirname(ModuleSourceFileName) / OrigFileName
    ).

%-----------------------------------------------------------------------------%
:- end_module parse_tree.file_names.
%-----------------------------------------------------------------------------%
