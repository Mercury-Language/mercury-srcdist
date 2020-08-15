%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2008-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: file_name.m.
%
% This module deals with the connections between module names and files.
%
%---------------------------------------------------------------------------%

:- module parse_tree.file_names.
:- interface.

:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.
:- import_module libs.
:- import_module libs.file_util.
:- import_module libs.globals.

:- import_module io.

%---------------------------------------------------------------------------%

    % Succeeds iff the module referred to by the module name is one
    % of the modules in the standard library.
    %
:- pred mercury_std_library_module_name(module_name::in) is semidet.

    % qualify_mercury_std_library_module_name(ModuleName) = QualModuleName:
    %
    % If ModuleName is a standard library module then return the module with an
    % extra `mercury' prefix. Otherwise, return the module name unchanged.
    %
:- func qualify_mercury_std_library_module_name(module_name) = module_name.

%---------------------------------------------------------------------------%
%
% XXX This interface should be improved in two ways.
%
% - First, the implementation of this predicate effectively divides
%   the set of possible values of Extension into classes of extensions,
%   treating every extension in a given class the same way.
%
%   We should replace the simple string Extension argument with a more
%   structured specification of the extension, one that puts a wrapper
%   around the actual suffix indicating what class the extension falls in,
%   as in e.g. ec_library(".dylib"). For some classes, maybe the majority,
%   the list of member extensions may be fixed; for these, it would
%   make sense to specify each member of the class by a value in an
%   extension-class-specific enum type, not by string.
%
%   While the code handling some of classes accesses the filesystem,
%   the code handling some other classes does not. If we put the wrappers
%   for these two kinds of classes into two separate types, we could
%   have a version of this predicate for each type, one with and one
%   without an I/O state pair.
%
% - Second, calls which search for a source file for reading (that may not
%   exist) should be separated from calls that construct a file name
%   to write the file.
%
% XXX Given the wide variety of uses cases that choose_file_name has
% to handle for its callers, the only way to ensure that a diff implementing
% the above ideas handles *all* of those uses cases correctly is probably to
%
% - Gather a list of all the extensions choose_file_name is called with.
%
% - Set up a test environment with distinctively named directories in
%   all the relevant directory search options.
%
% - Invoke choose_file_name and module_name_to_file_name_general
%   with all possible combinations of 
%
%       --use-grade-subdirs, --use-subdirs or neither
%       empty and distinctive nonempty base parent dirs
%       unqualified and qualified module names
%       extension
%       maybe_search
%       maybe_create_dirs
%
%   and record the results as the baseline.
%
% - Repeat the exercise with the proposed replacement code, and
%   compare the results to the baseline.

:- type maybe_create_dirs
    --->    do_create_dirs
    ;       do_not_create_dirs.

:- type maybe_search
    --->    do_search
    ;       do_not_search.

    % This type is intended to represent an extension at the end of a filename.
    % However, we currently also use it to represent an extension at the end
    % of the name of an mmake target. Some of those uses include references
    % to the values of mmake variables.
    %
    % We can partition the set of extensions we handle, along the lines
    % described above, by adding more function symbols to this type,
    % and specifying what suffixes correspond to each function symbol.
:- type ext
    --->    ext(string).

:- func extension_to_string(ext) = string.

    % Return the file name of the Mercury source for the given module.
    %
:- pred module_source_filename(globals::in, module_name::in, file_name::out,
    io::di, io::uo) is det.

    % module_name_to_file_name(Globals, Mkdir, Extension, Module, FileName,
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
:- pred module_name_to_file_name(globals::in, maybe_create_dirs::in, ext::in,
    module_name::in, file_name::out, io::di, io::uo) is det.

    % module_name_to_search_file_name(Globals, Extension, Module, FileName,
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
:- pred module_name_to_search_file_name(globals::in, ext::in,
    module_name::in, file_name::out, io::di, io::uo) is det.

    % module_name_to_lib_file_name(Globals, MkDir, Prefix, Extension, Module,
    %   FileName, !IO):
    %
    % Like module_name_to_file_name, but also allows a prefix.
    % Used for creating library names, e.g. `lib<foo>.$A' and `lib<foo>.so'.
    %
:- pred module_name_to_lib_file_name(globals::in, maybe_create_dirs::in,
    string::in, ext::in, module_name::in, file_name::out,
    io::di, io::uo) is det.

    % fact_table_file_name(Globals, MkDir, Ext, Module, FactTableFileName,
    %   FileName, !IO):
    %
    % Returns the filename to use when compiling fact table files.
    % If `MkDir' is do_create_dirs, then create any directories needed.
    %
:- pred fact_table_file_name(globals::in, maybe_create_dirs::in, ext::in,
    file_name::in, file_name::out, io::di, io::uo) is det.

    % extra_link_obj_file_name(Globals, MkDir, Ext, ExtraLinkObjName,
    %   FileName, !IO):
    %
    % Returns the filename to use when compiling extra objects that must be
    % linked into the executable (currently used only for fact tables).
    % If `MkDir' is do_create_dirs, make any directories necessary.
    %
:- pred extra_link_obj_file_name(globals::in, maybe_create_dirs::in, ext::in,
    file_name::in, file_name::out, io::di, io::uo) is det.

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

%---------------------------------------------------------------------------%

    % Return the name of the directory containing Java `.class' files.
    %
:- pred get_class_dir_name(globals::in, string::out) is det.

%---------------------------------------------------------------------------%

    % Convert an include_file reference to a filesystem path.
    %
:- pred make_include_file_path(string::in, string::in, string::out) is det.

%---------------------------------------------------------------------------%

    % This predicate is intended to output profiling data that can later
    % be used to improve the operation of this module. It appends to
    % /tmp/TRANSLATIONS_RECORD information about the frequency with which
    % this module is asked to translate file names with various suffixes,
    % provided that the gathering of this information has been enabled by
    % both the right trace flag at compile time and the right environment
    % variable at runtime.
    %
:- pred write_translations_record_if_any(io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compute_grade.
:- import_module libs.options.
:- import_module parse_tree.java_names.
:- import_module parse_tree.source_file_map.

:- import_module bool.
:- import_module dir.
:- import_module int.
:- import_module library.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module require.
:- import_module string.

%---------------------------------------------------------------------------%

mercury_std_library_module_name(ModuleName) :-
    (
        ModuleName = unqualified(Name),
        mercury_std_library_module(Name)
    ;
        ModuleName = qualified(_ParentModule, _Name),
        (
            module_name_to_file_name_stem(ModuleName, ModuleNameStr),
            mercury_std_library_module(ModuleNameStr)
        ;
            strip_outermost_qualifier(ModuleName, "mercury",
                StrippedModuleName),
            module_name_to_file_name_stem(StrippedModuleName,
                StrippedModuleNameStr),
            mercury_std_library_module(StrippedModuleNameStr)
        )
    ).

qualify_mercury_std_library_module_name(ModuleName) = QualModuleName :-
    ( if mercury_std_library_module_name(ModuleName) then
        QualModuleName = add_outermost_qualifier("mercury", ModuleName)
    else
        QualModuleName = ModuleName
    ).

%---------------------------------------------------------------------------%

extension_to_string(ext(ExtStr)) = ExtStr.

%---------------------------------------------------------------------------%

module_source_filename(Globals, ModuleName, SourceFileName, !IO) :-
    module_name_to_file_name(Globals, do_not_create_dirs,
        ext(".m"), ModuleName, SourceFileName, !IO).

%---------------------%

module_name_to_file_name(Globals, MkDir, Ext, ModuleName, FileName, !IO) :-
    module_name_to_file_name_general(Globals, do_not_search, MkDir,
        Ext, ModuleName, FileName, !IO).

%---------------------%

module_name_to_search_file_name(Globals, Ext, ModuleName, FileName, !IO) :-
    module_name_to_file_name_general(Globals, do_search, do_not_create_dirs,
        Ext, ModuleName, FileName, !IO).

%---------------------------------------------------------------------------%

% XXX The implementations of the following predicates, namely
% module_name_to_file_name_general and its subcontractors choose_file_name
% and make_file_name, effectively divide the set of possible values
% of Extension into classes of extensions, treating every extension
% in a given class the same way.
%
% We should replace the simple Ext argument, which currently represents
% all extensions using the same function symbol, with a more structured
% specification of the extension, one which has several function symbols,
% each indicating which class the extension falls in. For example, ext_src
% would indicate source files (without need for storing the suffix), while
% ext_obj(...) would indicate an object file, with its string argument could
% be e.g. .o, .pic_o, .lpic_o etc to indicate what *kind* of object file.
% Such function symbols could have other arguments to indicate e.g. the
% presence or absence of "_init" between the base name of the file
% and the extension itself. For some classes, maybe the majority, the list of
% member extensions may be fixed. For these, it would make sense to specify
% each member of the class by a value in an extension-class-specific enum type,
% not by a string. And for a class containing only one extension, such as
% source files, even that should not be needed. A possible difficulty is that
% the strings of some extensions are not fixed, but are taken from compiler
% options. However, for most, if not all of these options, the class that
% the extension they represent falls into should be clear.
%
% The extension class should specify whether
%
% - the extensions in the class are (architecture or) grade dependent,
% - if yes, what the name of the grade and non-grade directories are,
% - if not, what the name of the non-grade directory is, and
% - whether it is worth caching the translation (a translation that is
%   either trivially cheap or usually only done once per compiler invocation
%   is not worth caching).
%
% While the code handling some of classes accesses the filesystem,
% the code handling some other classes does not. If we put the wrappers
% for these two kinds of classes into two separate types, we could
% have two versions of these predicates for each type, one with and one
% without an I/O state pair.
%
% It may also be a good idea to also separate the representations of extensions
% of filenames (which can also be mmake targets) vs strings whose *only* use
% is as mmake targets (since they are not also filenames). This is because
% it makes sense to search in the filesystem for filenames, but not for
% mmake targets, and because mmake targets (should) never need directories
% created for them.
%
% The classification should not need to include .tmp suffixes on extensions,
% since (due to the behavior of the mercury_update_interface script, which
% the .tmp suffixes are for) the .tmp suffix *always* goes directly after
% the end of the corresponding non-.tmp filename, and can never be e.g.
% found in a different directory in a search. Calls to the exported predicates
% of this module should never specify .tmp as part of the extension; instead,
% they should add the .tmp suffix to the filename they get back from those
% predicates instead. XXX We have not yet changed over to this system.

:- pred module_name_to_file_name_general(globals::in,
    maybe_search::in, maybe_create_dirs::in, ext::in,
    module_name::in, file_name::out, io::di, io::uo) is det.

module_name_to_file_name_general(Globals, Search, MkDir, Ext,
        ModuleName, FileName, !IO) :-
    Ext = ext(ExtStr),
    ( if
        ExtStr = ".m"
    then
        % Look up the module in the module->file mapping.
        source_file_map.lookup_module_source_file(ModuleName, MaybeFileName,
            !IO),
        (
            MaybeFileName = yes(FileName)
        ;
            MaybeFileName = no,
            % XXX We should propagate the fact that no source file is available
            % for the given module back to the caller. That can be left for a
            % more comprehensive improvement of the module_to_*file_name
            % interface.
            FileName = "Mercury/.missing." ++ default_source_file(ModuleName)
        )
    else
        ( if
            % Java files need to be placed into a package subdirectory
            % and may need mangling.
            ( string.suffix(ExtStr, ".java")
            ; string.suffix(ExtStr, ".class")
            )
        then
            BaseParentDirs = ["jmercury"],
            mangle_sym_name_for_java(ModuleName, module_qual, "__",
                BaseNameNoExt)
        else if
            % Erlang uses `.' as a package separator and expects a module
            % `a.b.c' to be in a file `a/b/c.erl'. Rather than that, we use
            % a flat namespace with `__' as module separators.
            ( string.suffix(ExtStr, ".erl")
            ; string.suffix(ExtStr, ".hrl")
            ; string.suffix(ExtStr, ".beam")
            )
        then
            EffectiveModuleName =
                qualify_mercury_std_library_module_name(ModuleName),
            BaseParentDirs = [],
            BaseNameNoExt = sym_name_to_string_sep(EffectiveModuleName, "__")
        else
            BaseParentDirs = [],
            BaseNameNoExt = sym_name_to_string_sep(ModuleName, ".")
        ),
        choose_file_name(Globals, Search, MkDir, Ext,
            BaseParentDirs, BaseNameNoExt, FileName, !IO)
    ),
    trace [compile_time(flag("file_name_translations")),
        runtime(env("FILE_NAME_TRANSLATIONS")), io(!TIO)]
    (
        record_translation(Search, MkDir, Ext, ModuleName, FileName, !TIO)
    ).

%---------------------%

module_name_to_lib_file_name(Globals, MkDir, Prefix, Ext,
        ModuleName, FileName, !IO) :-
    BaseFileName = sym_name_to_string(ModuleName),
    BaseNameNoExt = Prefix ++ BaseFileName,
    choose_file_name(Globals, do_not_search, MkDir, Ext,
        [], BaseNameNoExt, FileName, !IO).

fact_table_file_name(Globals, MkDir, Ext, FactTableFileName, FileName, !IO) :-
    % XXX This is identical to extra_link_obj_file_name.
    choose_file_name(Globals, do_not_search, MkDir, Ext,
        [], FactTableFileName, FileName, !IO).

extra_link_obj_file_name(Globals, MkDir, Ext, ExtraLinkObjName,
        FileName, !IO) :-
    % XXX This is identical to fact_table_file_name.
    choose_file_name(Globals, do_not_search, MkDir, Ext,
        [], ExtraLinkObjName, FileName, !IO).

%---------------------%

    % choose_file_name(Globals, Search, MkDir, Ext, BaseParentDirs, BaseName,
    %   FileName, !IO)
    %
    % BaseParentDirs is usually empty. For Java files, BaseParentDirs are the
    % package directories that the file needs to be placed in.
    %
:- pred choose_file_name(globals::in, maybe_search::in, maybe_create_dirs::in,
    ext::in, list(string)::in, string::in,
    file_name::out, io::di, io::uo) is det.

choose_file_name(Globals, Search, MkDir, Ext,
        BaseParentDirs, BaseNameNoExt, FileName, !IO) :-
    globals.lookup_bool_option(Globals, use_subdirs, UseSubdirs),
    globals.lookup_bool_option(Globals, use_grade_subdirs, UseGradeSubdirs),
    globals.lookup_string_option(Globals, library_extension, LibExt),
    globals.lookup_string_option(Globals, shared_library_extension,
        SharedLibExt),
    Ext = ext(ExtStr),
    ( if
        % If we are searching for (rather than writing) a `.mih' file,
        % use the plain file name. This is so that searches for files
        % in installed libraries will work. `--c-include-directory' is
        % set so that searches for files in the current directory will work.
        % Similarly for `.hrl' files. We set `--erlang-include-directory'
        % for those.

        Search = do_search,
        ( ExtStr = ".mih"
        ; ExtStr = ".mih.tmp"
        ; ExtStr = ".hrl"
        ; ExtStr = ".hrl.tmp"
        )
    then
        FileName = BaseNameNoExt ++ ExtStr
    else if
        UseSubdirs = no
    then
        % Even if not putting files in a `Mercury' directory, Java files will
        % have non-empty BaseParentDirs (the package) which may need to be
        % created.
        % XXX Most of the code of make_file_name handles UseSubdirs = yes.
        make_file_name(Globals, BaseParentDirs, Search, MkDir,
            BaseNameNoExt, Ext, FileName, !IO)
    else if
        % The source files, the final executables, library files (including
        % .init files) output files intended for use by the user, and phony
        % Mmake targets names go in the current directory.

        not (
            UseGradeSubdirs = yes,
            file_is_arch_or_grade_dependent(Globals, Ext)
        ),
        (
            % Executable files.
            % XXX The Ext = "" here is wrong. While an empty extension
            % *can* mean we are building the name of an executable,
            % it can also mean we are building the name of a phony Mmakefile
            % target for a library, such as libmer_std in the library
            % directory.
            ( ExtStr = ""
            ; ExtStr = ".bat"
            ; ExtStr = ".exe"

            % Library files.
            ; ExtStr = ".a"
            ; ExtStr = ".$A"
            ; ExtStr = ".lib"
            ; ExtStr = ".so"
            ; ExtStr = ".dll"
            ; ExtStr = ".dylib"
            ; ExtStr = ".$(EXT_FOR_SHARED_LIB)"
            ; ExtStr = ".jar"
            ; ExtStr = ".beams"
            ; ExtStr = ".init"

            % mercury_update_interface requires the `.init.tmp' files to be
            % in the same directory as the `.init' files.
            ; ExtStr = ".init.tmp"

            % output files intended for use by the user (the .h_dump* and
            % .c_dump* MLDS dumps also fit into this category, but for
            % efficiency, to keep this as a switch, we deal with them below).
            ; ExtStr = ".mh"

            % mercury_update_interface requires the `.mh.tmp' files to be
            % in the same directory as the `.mh' files.
            ; ExtStr = ".mh.tmp"
            ; ExtStr = ".err"
            ; ExtStr = ".ugly"
            ; ExtStr = ".hlds_dump"
            ; ExtStr = ".mlds_dump"
            ; ExtStr = ".dependency_graph"
            ; ExtStr = ".order"
            % Mmake targets
            ; ExtStr = ".clean"
            ; ExtStr = ".realclean"
            ; ExtStr = ".depend"
            ; ExtStr = ".install_ints"
            ; ExtStr = ".install_opts"
            ; ExtStr = ".install_hdrs"
            ; ExtStr = ".install_grade_hdrs"
            ; ExtStr = ".check"
            ; ExtStr = ".ints"
            ; ExtStr = ".int3s"
            ; ExtStr = ".ils"
            ; ExtStr = ".javas"
            ; ExtStr = ".classes"
            ; ExtStr = ".erls"
            ; ExtStr = ".beams"
            ; ExtStr = ".opts"
            ; ExtStr = ".trans_opts"
            ; ExtStr = ".all_ints"
            ; ExtStr = ".all_int3s"
            ; ExtStr = ".all_opts"
            ; ExtStr = ".all_trans_opts"
            )
        ;
            % Output files intended for use by the user.

            ( string.prefix(ExtStr, ".c_dump")
            ; string.prefix(ExtStr, ".mih_dump")
            )
        )
    then
        FileName = BaseNameNoExt ++ ExtStr
    else
        % We need to handle a few cases specially.

        ( if
            ( ExtStr = ".dir/*.o"
            ; ExtStr = ".dir/*.$O"
            )
        then
            SubDirName = "dirs"
        else if
            % .$O, .pic_o and .lpic_o files need to go in the same directory,
            % so that using .$(EXT_FOR_PIC_OBJECTS) will work.
            ( ExtStr = ".o"
            ; ExtStr = ".$O"
            ; ExtStr = ".lpic_o"
            ; ExtStr = ".pic_o"
            ; ExtStr = "$(EXT_FOR_PIC_OBJECTS)"
            ; ExtStr = "_init.o"
            ; ExtStr = "_init.$O"
            ; ExtStr = "_init.lpic_o"
            ; ExtStr = "_init.pic_o"
            ; ExtStr = "_init.$(EXT_FOR_PIC_OBJECTS)"
            )
        then
            SubDirName = "os"
        else if
            % _init.c, _init.s, _init.o etc. files go in the cs, ss, os etc
            % subdirectories.
            string.append("_init.", ExtName, ExtStr)
        then
            string.append(ExtName, "s", SubDirName)
        else if
            % .int.tmp, .opt.tmp, etc. files need to go in the ints, opts, etc
            % subdirectories.
            string.append(".", ExtName0, ExtStr),
            string.remove_suffix(ExtName0, ".tmp", ExtName)
        then
            string.append(ExtName, "s", SubDirName)
        else if
            % `.dv' files go in the `deps' subdirectory,
            % along with the `.dep' files
            ExtStr = ".dv"
        then
            SubDirName = "deps"
        else if
            % Static and shared libraries go in the `lib' subdirectory.
            ( ExtStr = LibExt
            ; ExtStr = SharedLibExt
            )
        then
            SubDirName = "lib"
        else if
            % The usual case: `*.foo' files go in the `foos' subdirectory.
            string.append(".", ExtName, ExtStr)
        then
            string.append(ExtName, "s", SubDirName)
        else if
            % Launcher scripts go in the `bin' subdirectory.
            ExtStr = ""
        then
            SubDirName = "bin"
        else
            unexpected($pred, "unknown extension `" ++ ExtStr ++ "'")
        ),

        make_file_name(Globals, [SubDirName | BaseParentDirs], Search, MkDir,
            BaseNameNoExt, Ext, FileName, !IO)
    ).

file_name_to_module_name(FileName, ModuleName) :-
    ModuleName = string_to_sym_name(FileName).

module_name_to_file_name_stem(ModuleName, FileName) :-
    FileName = sym_name_to_string(ModuleName).

module_name_to_make_var_name(ModuleName, MakeVarName) :-
    MakeVarName = sym_name_to_string(ModuleName).

:- pred make_file_name(globals::in, list(dir_name)::in, maybe_search::in,
    maybe_create_dirs::in, file_name::in, ext::in, file_name::out,
    io::di, io::uo) is det.

make_file_name(Globals, SubDirNames, Search, MkDir, BaseNameNoExt, Ext,
        FileName, !IO) :-
    globals.lookup_bool_option(Globals, use_grade_subdirs, UseGradeSubdirs),
    globals.lookup_bool_option(Globals, use_subdirs, UseSubdirs),
    Ext = ext(ExtStr),
    ( if
        UseGradeSubdirs = yes,
        file_is_arch_or_grade_dependent(Globals, Ext),

        % If we are searching for (rather than writing) the file, just search
        % in Mercury/<ext>s. This is so that searches for files in installed
        % libraries work. `--intermod-directories' is set so this will work.

        not (
            Search = do_search,
            ( ExtStr= ".opt"
            ; ExtStr= ".trans_opt"
            ; ExtStr= ".analysis"
            ; ExtStr= ".imdg"
            ; ExtStr= ".request"
            )
        )
    then
        grade_directory_component(Globals, Grade),
        globals.lookup_string_option(Globals, target_arch, TargetArch),

        % The extra "Mercury" is needed so we can use `--intermod-directory
        % Mercury/<grade>/<target_arch>' and `--c-include
        % Mercury/<grade>/<target_arch>' to find the local `.opt' and `.mih'
        % files without messing up the search for the files for installed
        % libraries.
        DirComponents = ["Mercury", Grade, TargetArch, "Mercury" | SubDirNames]
    else if
        UseSubdirs = yes
    then
        DirComponents = ["Mercury" | SubDirNames]
    else
        DirComponents = SubDirNames
    ),
    (
        DirComponents = [],
        FileName = BaseNameNoExt ++ ExtStr
    ;
        DirComponents = [_ | _],
        (
            MkDir = do_create_dirs,
            DirName = dir.relative_path_name_from_components(DirComponents),
            make_directory(DirName, _, !IO),
            % XXX We should avoid trying to create a directory
            % if we have created it before, since a map lookup here
            % should be *much* cheaper than a system call.
            %
            % This goes not just for DirName, but for all the directories
            % between it and the current directory (i.e. for any initial
            % subsequence of DirComponents).
            trace [compile_time(flag("file_name_translations")),
                runtime(env("FILE_NAME_TRANSLATIONS")), io(!TIO)]
            (
                record_mkdir(DirName, !TIO)
            )
        ;
            MkDir = do_not_create_dirs
        ),
        Components = DirComponents ++ [BaseNameNoExt ++ ExtStr],
        FileName = dir.relative_path_name_from_components(Components)
    ).

:- pred file_is_arch_or_grade_dependent(globals::in, ext::in) is semidet.

file_is_arch_or_grade_dependent(Globals, Ext0) :-
    % The .tmp suffixes are needed for use by mercury_update_interface.
    Ext0 = ext(ExtStr0),
    ( if string.remove_suffix(ExtStr0, ".tmp", BaseExt) then
        ExtStr = BaseExt
    else
        ExtStr = ExtStr0
    ),
    (
        file_is_arch_or_grade_dependent_2(ExtStr)
    ;
        globals.lookup_string_option(Globals, executable_file_extension,
            ExtStr)
    ;
        globals.lookup_string_option(Globals, library_extension, ExtStr)
    ;
        globals.lookup_string_option(Globals, shared_library_extension, ExtStr)
    ;
        some [ObjExt] (
            (
                globals.lookup_string_option(Globals,
                    object_file_extension, ObjExt)
            ;
                globals.lookup_string_option(Globals,
                    pic_object_file_extension, ObjExt)
            ),
            (
                ExtStr = ObjExt
            ;
                ExtStr = "_init" ++ ObjExt
            )
        )
    ).

:- pred file_is_arch_or_grade_dependent_2(string::in) is semidet.

    % The `.used' file isn't grade dependent itself, but it contains
    % information collected while compiling a grade-dependent `.c', `il',
    % etc file.
file_is_arch_or_grade_dependent_2("").
file_is_arch_or_grade_dependent_2(".bat").
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
file_is_arch_or_grade_dependent_2(".jar").
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

%---------------------------------------------------------------------------%

get_class_dir_name(Globals, ClassDirName) :-
    globals.lookup_bool_option(Globals, use_grade_subdirs, UseGradeSubdirs),
    globals.lookup_bool_option(Globals, use_subdirs, UseSubdirs),
    (
        UseGradeSubdirs = yes,
        grade_directory_component(Globals, Grade),
        globals.lookup_string_option(Globals, target_arch, TargetArch),
        ClassDirName = "Mercury" / Grade / TargetArch / "Mercury" / "classs"
    ;
        UseGradeSubdirs = no,
        (
            UseSubdirs = yes,
            ClassDirName = "Mercury" / "classs"
        ;
            UseSubdirs = no,
            ClassDirName = "."
        )
    ).

%---------------------------------------------------------------------------%

make_include_file_path(ModuleSourceFileName, OrigFileName, Path) :-
    ( if path_name_is_absolute(OrigFileName) then
        Path = OrigFileName
    else
        % XXX This will throw an exception on Windows if OrigFileName is a path
        % "X:foo", i.e. relative to the current directory on the X: drive.
        % That seems a silly thing to write in a source file.
        Path = dirname(ModuleSourceFileName) / OrigFileName
    ).

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%
%
% The rest of this file is concerned with gathering and writing out
% statistical information for profiling.
%
% The profile we are building is a map from keys to values. Each key records
% the parameters of each call to module_name_to_file_name_general: which
% extension of which module are we trying to look up, and whether the process
% of looking up involves searching or making directories. The values record
% the file that results from the lookup, and the number of times, we have done
% the exact same lookup.
%
% After the profile is dumped into a file, the information in it can then be
% subject to different kinds of postprocessing.

:- type record_key
    --->    record_key(module_name, ext, maybe_search, maybe_create_dirs).

:- type record_value
    --->    record_value(string, int).

:- mutable(translations, map(record_key, record_value), map.init, ground,
    [untrailed, attach_to_io_state]).

:- pred record_translation(maybe_search::in, maybe_create_dirs::in, ext::in,
    module_name::in, string::in, io::di, io::uo) is det.

record_translation(Search, MkDir, Ext, ModuleName, FileName, !IO) :-
    get_translations(Translations0, !IO),
    Key = record_key(ModuleName, Ext, Search, MkDir),
    ( if map.search(Translations0, Key, Value0) then
        Value0 = record_value(ValueFileName, Count0),
        expect(unify(FileName, ValueFileName), $module,
            "FileName != ValueFileName"),
        Value = record_value(ValueFileName, Count0 + 1),
        map.det_update(Key, Value, Translations0, Translations)
    else
        Value = record_value(FileName, 1),
        map.det_insert(Key, Value, Translations0, Translations)
    ),
    set_translations(Translations, !IO).

%---------------------%

:- mutable(mkdirs, map(string, int), map.init, ground,
    [untrailed, attach_to_io_state]).

:- pred record_mkdir(string::in, io::di, io::uo) is det.

record_mkdir(DirName, !IO) :-
    get_mkdirs(MkDirs0, !IO),
    ( if map.search(MkDirs0, DirName, Count0) then
        map.det_update(DirName, Count0 + 1, MkDirs0, MkDirs)
    else
        map.det_insert(DirName, 1, MkDirs0, MkDirs)
    ),
    set_mkdirs(MkDirs, !IO).

%---------------------%

write_translations_record_if_any(!IO) :-
    get_translations(Translations, !IO),
    get_mkdirs(MkDirs, !IO),
    ( if
        map.is_empty(Translations),
        map.is_empty(MkDirs)
    then
        true
    else
        map.foldl4(gather_translation_stats, Translations,
            0, NumKeys, 0, NumLookups,
            map.init, ExtMap, map.init, ExtSchDirMap),
        io.open_append("/tmp/TRANSLATIONS_RECORD", Result, !IO),
        (
            Result = ok(Stream),
            io.format(Stream, "overall_stats %d %d\n",
                [i(NumKeys), i(NumLookups)], !IO),
            map.foldl(write_out_ext_entry(Stream), ExtMap, !IO),
            map.foldl(write_out_ext_sch_dir_entry(Stream), ExtSchDirMap, !IO),
            map.foldl(write_out_mkdirs_entry(Stream), MkDirs, !IO),
            io.close_output(Stream, !IO)
        ;
            Result = error(_)
        )
    ).

%---------------------%

:- type count_sum
    --->    count_sum(int, int).

:- pred gather_translation_stats(record_key::in, record_value::in,
    int::in, int::out, int::in, int::out,
    map(string, count_sum)::in, map(string, count_sum)::out,
    map(string, count_sum)::in, map(string, count_sum)::out) is det.

gather_translation_stats(Key, Value, !NumKeys, !NumLookups,
        !ExtMap, !ExtSchDirMap) :-
    !:NumKeys = !.NumKeys + 1,
    Value = record_value(_FileName, Count),
    !:NumLookups = !.NumLookups + Count,
    Key = record_key(_ModuleName, Ext0, Search, MkDir),
    Ext0 = ext(ExtStr0),
    ( if ExtStr0 = "" then
        ExtStr = "no_suffix"
    else
        ExtStr = ExtStr0
    ),
    (
        Search = do_search,
        SearchStr = "_search"
    ;
        Search = do_not_search,
        SearchStr = "_nosearch"
    ),
    (
        MkDir = do_create_dirs,
        MkDirStr = "_mkdir"
    ;
        MkDir = do_not_create_dirs,
        MkDirStr = "_nomkdir"
    ),
    ExtSchDir = ExtStr ++ SearchStr ++ MkDirStr,
    update_count_sum_map(ExtStr, Count, !ExtMap),
    update_count_sum_map(ExtSchDir, Count, !ExtSchDirMap).

:- pred update_count_sum_map(T::in, int::in,
    map(T, count_sum)::in, map(T, count_sum)::out) is det.

update_count_sum_map(Key, Count, !Map) :-
    ( if map.search(!.Map, Key, Entry0) then
        Entry0 = count_sum(Cnt0, Sum0),
        Entry = count_sum(Cnt0 + 1, Sum0 + Count),
        map.det_update(Key, Entry, !Map)
    else
        Entry = count_sum(1, Count),
        map.det_insert(Key, Entry, !Map)
    ).

:- pred write_out_ext_entry(io.text_output_stream::in,
    string::in, count_sum::in, io::di, io::uo) is det.

write_out_ext_entry(Stream, Ext, count_sum(Cnt, Sum), !IO) :-
    io.format(Stream, "ext %d %d %s\n", [i(Cnt), i(Sum), s(Ext)], !IO).

:- pred write_out_ext_sch_dir_entry(io.text_output_stream::in,
    string::in, count_sum::in, io::di, io::uo) is det.

write_out_ext_sch_dir_entry(Stream, ExtSchDir, count_sum(Cnt, Sum), !IO) :-
    io.format(Stream, "ext_sch_dir %d %d %s\n",
        [i(Cnt), i(Sum), s(ExtSchDir)], !IO).

%---------------------%

:- pred write_out_mkdirs_entry(io.text_output_stream::in,
    string::in, int::in, io::di, io::uo) is det.

write_out_mkdirs_entry(Stream, DirName, Cnt, !IO) :-
    io.format(Stream, "dir_name %d %s\n", [i(Cnt), s(DirName)], !IO).

%---------------------------------------------------------------------------%
:- end_module parse_tree.file_names.
%---------------------------------------------------------------------------%
