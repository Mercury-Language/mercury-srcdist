%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1999-2012 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: mlds_to_c.m.
% Main author: fjh.
%
% Convert MLDS to C/C++ code.
%
% TODO:
%   - RTTI for debugging (module_layout, proc_layout, internal_layout)
%   - trail ops
%   - foreign language interfacing for languages other than C
%     (handle `user_foreign_code' and `foreign_code_decl' --
%     actually perhaps this should be done in an earlier pass,
%     in which case the only thing that would need to be done here
%     is to change some calls to sorry/2 to unexpected/2).
%   - packages, classes and inheritance
%     (currently we just generate all classes as structs)
%
%-----------------------------------------------------------------------------%

:- module ml_backend.mlds_to_c.
:- interface.

:- import_module backend_libs.rtti.
:- import_module libs.globals.
:- import_module ml_backend.mlds.

:- import_module bool.
:- import_module io.

%-----------------------------------------------------------------------------%

    % output_c_mlds(MLDS, Globals, Suffix, Succeeded):
    %
    % Output C code the the appropriate C file and C declarations to the
    % appropriate header file. The file names are determined by the module
    % name, with the specified Suffix appended at the end. (The suffix is used
    % for debugging dumps. For normal output, the suffix should be the empty
    % string.)
    %
:- pred output_c_mlds(mlds::in, globals::in, string::in, bool::out,
    io::di, io::uo) is det.

    % output_c_header_file(MLDS, Globals, Suffix, Succeeded):
    %
    % Output C declarations for the procedures (etc.) in the specified MLDS
    % module to the appropriate .mih header file. See output_mlds for the
    % meaning of Suffix.
    %
:- pred output_c_header_file(mlds::in, globals::in, string::in, bool::out,
    io::di, io::uo) is det.

:- func mlds_tabling_data_name(mlds_proc_label, proc_tabling_struct_id)
    = string.

    % output_c_file(MLDS, Globals, Suffix, Succeeded):
    %
    % Output C code for the specified MLDS module to the appropriate C file.
    % See output_mlds for the meaning of Suffix.
    %
:- pred output_c_file(mlds::in, globals::in, string::in, bool::out,
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.builtin_ops.
:- import_module backend_libs.c_util.
:- import_module backend_libs.foreign.
:- import_module backend_libs.name_mangle.
:- import_module hlds.code_model.
:- import_module hlds.hlds_data.
:- import_module hlds.hlds_pred.         % for pred_proc_id.
:- import_module libs.file_util.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module ml_backend.ml_code_util.
                                         % for ml_gen_public_field_decl_flags,
                                         % which is used by the code that
                                         % handles derived classes
:- import_module ml_backend.ml_global_data.
:- import_module ml_backend.ml_type_gen. % for ml_gen_type_name
:- import_module ml_backend.ml_util.
:- import_module parse_tree.file_names.
:- import_module parse_tree.module_cmds.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_type.

:- import_module assoc_list.
:- import_module bool.
:- import_module cord.
:- import_module float.
:- import_module int.
:- import_module library.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module solutions.
:- import_module string.
:- import_module term.

%-----------------------------------------------------------------------------%

:- type output_type == pred(mlds_to_c_opts, mlds_type, io, io).
:- inst output_type == (pred(in, in, di, uo) is det).

%-----------------------------------------------------------------------------%

    % This type concentrates the values of all the options that this module
    % needs, in a form that can be looked up much more quickly than by calling
    % lookup_bool_option.
    %
    % Each field in the first batch of fields is named after the option
    % whose value it holds.
    %
    % m2co_need_to_init is set to `yes' if any of the profile_calls,
    % profile_memory and profile_time fields is `yes'. This is because
    % we need to output calls to MR_init_entry if any form of profiling
    % is enabled. (It would be OK to output the calls regardless,
    % since they will macro-expand to nothing if profiling is not enabled,
    % but for readability of the generated code we prefer not to.)
    %
    % m2co_std_func_decl is `yes' if want to use standard argument names
    % in function declarations.
    %
:- type mlds_to_c_opts
    --->    mlds_to_c_opts(
                m2co_source_filename        :: string,

                m2co_line_numbers           :: bool,
                m2co_auto_comments          :: bool,
                m2co_gcc_local_labels       :: bool,
                m2co_gcc_nested_functions   :: bool,
                m2co_highlevel_data         :: bool,
                m2co_profile_calls          :: bool,
                m2co_profile_memory         :: bool,
                m2co_profile_time           :: bool,

                m2co_need_to_init           :: bool,

                m2co_target                 :: compilation_target,
                m2co_gc_method              :: gc_method,

                m2co_std_func_decl          :: bool,

                m2co_all_globals            :: globals
            ).

:- func init_mlds_to_c_opts(globals, string) = mlds_to_c_opts.

init_mlds_to_c_opts(Globals, SourceFileName) = Opts :-
    globals.lookup_bool_option(Globals, line_numbers, LineNumbers),
    globals.lookup_bool_option(Globals, auto_comments, Comments),
    globals.lookup_bool_option(Globals, gcc_local_labels, GccLabels),
    globals.lookup_bool_option(Globals, gcc_nested_functions, GccNested),
    globals.lookup_bool_option(Globals, highlevel_data, HighLevelData),
    globals.lookup_bool_option(Globals, profile_calls, ProfileCalls),
    globals.lookup_bool_option(Globals, profile_memory, ProfileMemory),
    globals.lookup_bool_option(Globals, profile_time, ProfileTime),
    (
        ( ProfileCalls = yes
        ; ProfileMemory = yes
        ; ProfileTime = yes
        )
    ->
        ProfileAny = yes
    ;
        ProfileAny = no
    ),
    globals.get_target(Globals, Target),
    globals.get_gc_method(Globals, GCMethod),
    StdFuncDecls = no,
    Opts = mlds_to_c_opts(SourceFileName,
        LineNumbers, Comments, GccLabels, GccNested,
        HighLevelData, ProfileCalls, ProfileMemory, ProfileTime, ProfileAny,
        Target, GCMethod, StdFuncDecls, Globals).

output_c_mlds(MLDS, Globals, Suffix, Succeeded, !IO) :-
    % We output the source file before outputting the header, since the Mmake
    % dependencies say the header file depends on the source file, and so if
    % we wrote them out in the other order, this might lead to unnecessary
    % recompilation next time Mmake is run.
    %
    % XXX At some point we should also handle output of any non-C
    % foreign code (Ada, Fortran, etc.) to appropriate files.
    %
    ModuleName = mlds_get_module_name(MLDS),
    module_source_filename(Globals, ModuleName, SourceFileName, !IO),
    Opts = init_mlds_to_c_opts(Globals, SourceFileName),
    output_c_file_opts(MLDS, Opts, Suffix, Succeeded0, !IO),
    (
        Succeeded0 = yes,
        output_c_header_file_opts(MLDS, Opts, Suffix, Succeeded, !IO)
    ;
        Succeeded0 = no,
        Succeeded = no
    ).

output_c_file(MLDS, Globals, Suffix, Succeeded, !IO) :-
    ModuleName = mlds_get_module_name(MLDS),
    module_source_filename(Globals, ModuleName, SourceFileName, !IO),
    Opts = init_mlds_to_c_opts(Globals, SourceFileName),
    output_c_file_opts(MLDS, Opts, Suffix, Succeeded, !IO).

:- pred output_c_file_opts(mlds::in, mlds_to_c_opts::in, string::in,
    bool::out, io::di, io::uo) is det.

output_c_file_opts(MLDS, Opts, Suffix, Succeeded, !IO) :-
    ModuleName = mlds_get_module_name(MLDS),
    Globals = Opts ^ m2co_all_globals,
    module_name_to_file_name(Globals, ModuleName, ".c" ++ Suffix,
        do_create_dirs, SourceFile, !IO),
    Indent = 0,
    output_to_file(Globals, SourceFile,
        mlds_output_src_file(Opts, Indent, MLDS), Succeeded, !IO).

output_c_header_file(MLDS, Globals, Suffix, Succeeded, !IO) :-
    ModuleName = mlds_get_module_name(MLDS),
    module_source_filename(Globals, ModuleName, SourceFileName, !IO),
    Opts = init_mlds_to_c_opts(Globals, SourceFileName),
    output_c_header_file_opts(MLDS, Opts, Suffix, Succeeded, !IO).

:- pred output_c_header_file_opts(mlds::in, mlds_to_c_opts::in, string::in,
    bool::out, io::di, io::uo) is det.

output_c_header_file_opts(MLDS, Opts, Suffix, Succeeded, !IO) :-
    % We write the header file out to <module>.mih.tmp and then call
    % `update_interface' to move the <module>.mih.tmp file to <module>.mih;
    % this avoids updating the timestamp on the `.mih' file if it hasn't
    % changed.

    ModuleName = mlds_get_module_name(MLDS),
    Globals = Opts ^ m2co_all_globals,
    module_name_to_file_name(Globals, ModuleName, ".mih" ++ Suffix ++ ".tmp",
        do_create_dirs, TmpHeaderFile, !IO),
    module_name_to_file_name(Globals, ModuleName, ".mih" ++ Suffix,
        do_create_dirs, HeaderFile, !IO),
    Indent = 0,
    output_to_file(Globals, TmpHeaderFile,
        mlds_output_hdr_file(Opts, Indent, MLDS), Succeeded, !IO),
    (
        Succeeded = yes,
        update_interface(Globals, HeaderFile, !IO)
    ;
        Succeeded = no
    ).

:- pred mlds_output_hdr_file(mlds_to_c_opts::in, indent::in, mlds::in,
    io::di, io::uo) is det.

mlds_output_hdr_file(Opts, Indent, MLDS, !IO) :-
    MLDS = mlds(ModuleName, AllForeignCode, Imports, GlobalData, PlainDefns,
        InitPreds, FinalPreds, ExportEnums),
    ml_global_data_get_all_global_defns(GlobalData,
        _ScalarCellGroupMap, _VectorCellGroupMap, _AllocSites, GlobalDefns),
    Defns = GlobalDefns ++ PlainDefns,

    mlds_output_hdr_start(Opts, Indent, ModuleName, !IO),
    io.nl(!IO),
    mlds_output_hdr_imports(Indent, Imports, !IO),
    io.nl(!IO),

    % Get the foreign code for C
    ForeignCode = mlds_get_c_foreign_code(AllForeignCode),
    mlds_output_c_hdr_decls(Opts, Indent, MLDS_ModuleName, ForeignCode, !IO),
    io.nl(!IO),
    mlds_output_export_enums(Opts, Indent, ExportEnums, !IO),
    io.nl(!IO),

    % The header file must contain _definitions_ of all public types, but only
    % _declarations_ of all public variables, constants, and functions.
    %
    % Note that we don't forward-declare the types here; the forward
    % declarations that we need for types used in function prototypes
    % are generated by mlds_output_type_forward_decls. See the comment
    % in mlds_output_decl.

    list.filter(defn_is_public, Defns, PublicDefns),
    list.filter(defn_is_type, PublicDefns, PublicTypeDefns,
        PublicNonTypeDefns),
    MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
    mlds_output_defns(Opts, Indent, yes, MLDS_ModuleName, PublicTypeDefns,
        !IO),
    io.nl(!IO),
    StdOpts = Opts ^ m2co_std_func_decl := yes,
    mlds_output_decls(StdOpts, Indent, MLDS_ModuleName, PublicNonTypeDefns,
        !IO),
    io.nl(!IO),
    mlds_output_init_fn_decls(MLDS_ModuleName, InitPreds, FinalPreds, !IO),
    io.nl(!IO),
    mlds_output_hdr_end(Opts, Indent, ModuleName, !IO).

:- pred mlds_output_hdr_imports(indent::in, mlds_imports::in,
    io::di, io::uo) is det.

% XXX currently we assume all imports are source imports, i.e. that the header
% file does not depend on any types defined in other header files.
mlds_output_hdr_imports(_Indent, _Imports, !IO).

:- pred mlds_output_src_imports(mlds_to_c_opts::in, indent::in,
    mlds_imports::in, io::di, io::uo) is det.

mlds_output_src_imports(Opts, Indent, Imports, !IO) :-
    Target = Opts ^ m2co_target,
    (
        Target = target_c,
        list.foldl(mlds_output_src_import(Opts, Indent), Imports, !IO)
    ;
        ( Target = target_java
        ; Target = target_csharp
        ; Target = target_il
        ; Target = target_erlang
        ),
        unexpected($module, $pred, "expected target c")
    ).

:- pred mlds_output_src_import(mlds_to_c_opts::in, indent::in, mlds_import::in,
    io::di, io::uo) is det.

mlds_output_src_import(Opts, _Indent, Import, !IO) :-
    (
        Import = mercury_import(ImportType, ImportName),
        ModuleName0 = mlds_module_name_to_sym_name(ImportName),
        ( ImportType = user_visible_interface, HeaderExt = ".mh"
        ; ImportType = compiler_visible_interface, HeaderExt = ".mih"
        ),

        % Strip off the "mercury" qualifier for standard library modules.
        (
            strip_outermost_qualifier(ModuleName0, "mercury", ModuleName1),
            mercury_std_library_module_name(ModuleName1)
        ->
            ModuleName = ModuleName1
        ;
            ModuleName = ModuleName0
        )
    ;
        Import = foreign_import(ForeignImport),
        % This case shouldn't happen when compiling to C, but we need to handle
        % it for MLDS dumps when compiling to IL.
        ForeignImport = il_assembly_name(ImportName),
        ModuleName = mlds_module_name_to_sym_name(ImportName),
        HeaderExt = ".dll"
    ),

    Globals = Opts ^ m2co_all_globals,
    module_name_to_search_file_name(Globals, ModuleName, HeaderExt, HeaderFile,
        !IO),
    io.write_strings(["#include """, HeaderFile, """\n"], !IO).

    % Generate the `.c' file.
    %
    % (Calling it the "source" file is a bit of a misnomer, since in our case
    % it is actually the target file, but there's no obvious alternative term
    % to use which also has a clear and concise abbreviation, so never mind...)
    %
:- pred mlds_output_src_file(mlds_to_c_opts::in, indent::in, mlds::in,
    io::di, io::uo) is det.

mlds_output_src_file(Opts, Indent, MLDS, !IO) :-
    MLDS = mlds(ModuleName, AllForeignCode, Imports, GlobalData, PlainDefns,
        InitPreds, FinalPreds, _ExportEnums),
    ml_global_data_get_all_global_defns(GlobalData,
        ScalarCellGroupMap, VectorCellGroupMap, AllocSites, GlobalDefns),
    Defns = GlobalDefns ++ PlainDefns,
    map.to_assoc_list(ScalarCellGroupMap, ScalarCellGroups),
    map.to_assoc_list(VectorCellGroupMap, VectorCellGroups),

    ForeignCode = mlds_get_c_foreign_code(AllForeignCode),
    EnvVarNameSet = mlds_get_env_var_names(PlainDefns),
    set.to_sorted_list(EnvVarNameSet, EnvVarNames),
    mlds_output_src_start(Opts, Indent, ModuleName, ForeignCode,
        InitPreds, FinalPreds, EnvVarNames, !IO),
    io.nl(!IO),
    mlds_output_src_imports(Opts, Indent, Imports, !IO),
    io.nl(!IO),

    mlds_output_c_decls(Opts, Indent, ForeignCode, !IO),
    io.nl(!IO),

    list.foldl(mlds_output_env_var_decl, EnvVarNames, !IO),

    % The public types have already been defined in the header file, and the
    % public vars, consts, and functions have already been declared in the
    % header file. In the source file, we need to have
    %   #1. definitions of the private types,
    %   #2. forward-declarations of the private non-types
    %   #3. definitions of all the non-types
    %   #4. initialization functions
    % in that order.
    % #2 is needed to allow #3 to contain forward references, which can arise
    % for e.g. mutually recursive procedures. #1 is needed since #2 may refer
    % to the types.
    %
    % Note that we don't forward-declare the types here; the forward
    % declarations that we need for types used in function prototypes
    % are generated by mlds_output_type_forward_decls. See the comment in
    % mlds_output_decl.

    % XXX could do the following better
    list.filter(defn_is_public, Defns, _PublicDefns, PrivateDefns),
    list.filter(defn_is_type, PrivateDefns, PrivateTypeDefns,
        PrivateNonTypeDefns),
    list.filter(defn_is_type, Defns, _TypeDefns, NonTypeDefns),
    list.filter(defn_is_function, NonTypeDefns, FuncDefns),
    list.filter(defn_is_type_ctor_info, GlobalDefns, TypeCtorInfoDefns),

    MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
    mlds_output_defns(Opts, Indent, yes, MLDS_ModuleName, PrivateTypeDefns,
        !IO),
    io.nl(!IO),
    mlds_output_decls(Opts, Indent, MLDS_ModuleName, PrivateNonTypeDefns, !IO),
    io.nl(!IO),

    ModuleSymName = mlds_module_name_to_sym_name(MLDS_ModuleName),
    MangledModuleName = sym_name_mangle(ModuleSymName),

    mlds_output_scalar_cell_group_decls(Opts, Indent, MangledModuleName,
        ScalarCellGroups, !IO),
    io.nl(!IO),
    mlds_output_vector_cell_group_decls(Opts, Indent, MLDS_ModuleName,
        MangledModuleName, VectorCellGroups, !IO),
    io.nl(!IO),
    mlds_output_alloc_site_decls(Indent, AllocSites, !IO),
    io.nl(!IO),

    mlds_output_scalar_cell_group_defns(Opts, Indent, MangledModuleName,
        ScalarCellGroups, !IO),
    io.nl(!IO),
    mlds_output_vector_cell_group_defns(Opts, Indent, MangledModuleName,
        VectorCellGroups, !IO),
    io.nl(!IO),
    mlds_output_alloc_site_defns(Opts, Indent, MLDS_ModuleName, AllocSites,
        !IO),
    io.nl(!IO),

    mlds_output_c_defns(Opts, MLDS_ModuleName, Indent, ForeignCode, !IO),
    io.nl(!IO),
    mlds_output_defns(Opts, Indent, yes, MLDS_ModuleName, NonTypeDefns, !IO),
    io.nl(!IO),
    mlds_output_init_fn_defns(Opts, MLDS_ModuleName, FuncDefns,
        TypeCtorInfoDefns, AllocSites, InitPreds, FinalPreds, !IO),
    io.nl(!IO),
    mlds_output_grade_var(!IO),
    io.nl(!IO),
    mlds_output_src_end(Indent, ModuleName, !IO).

:- func mlds_get_env_var_names(list(mlds_defn)) = set(string).

mlds_get_env_var_names(Defns) = EnvVarNameSet :-
    list.filter_map(mlds_get_env_var_names_from_defn, Defns, EnvVarNameSets),
    EnvVarNameSet = set.union_list(EnvVarNameSets).

:- pred mlds_get_env_var_names_from_defn(mlds_defn::in, set(string)::out)
    is semidet.

mlds_get_env_var_names_from_defn(Defn, EnvVarNameSet) :-
    Defn = mlds_defn(_, _, _, mlds_function(_, _, _, _, EnvVarNameSet)).

:- pred mlds_output_env_var_decl(string::in, io::di, io::uo) is det.

mlds_output_env_var_decl(EnvVarName, !IO) :-
    io.write_string("extern MR_Word ", !IO),
    io.write_string(global_var_name(env_var_ref(EnvVarName)), !IO),
    io.write_string(";\n", !IO).

:- pred mlds_output_hdr_start(mlds_to_c_opts::in, indent::in,
    mercury_module_name::in, io::di, io::uo) is det.

mlds_output_hdr_start(Opts, Indent, ModuleName, !IO) :-
    mlds_output_auto_gen_comment(Opts, ModuleName, !IO),
    mlds_indent(Indent, !IO),
    io.write_string("/* :- module ", !IO),
    prog_out.write_sym_name(ModuleName, !IO),
    io.write_string(". */\n", !IO),
    mlds_indent(Indent, !IO),
    io.write_string("/* :- interface. */\n", !IO),
    io.nl(!IO),
    mlds_indent(Indent, !IO),
    io.write_string("#ifndef MR_HEADER_GUARD_", !IO),
    MangledModuleName = sym_name_mangle(ModuleName),
    io.write_string(MangledModuleName, !IO),
    io.nl(!IO),
    mlds_indent(Indent, !IO),
    io.write_string("#define MR_HEADER_GUARD_", !IO),
    io.write_string(MangledModuleName, !IO),
    io.nl(!IO),
    io.nl(!IO),

    % If we're outputting C (rather than C++), then add a conditional
    % `extern "C"' wrapper around the header file, so that the header file
    % can be #included by C++ programs.

    Target = Opts ^ m2co_target,
    (
        Target = target_c,
        mlds_indent(Indent, !IO),
        io.write_string("#ifdef __cplusplus\n", !IO),
        mlds_indent(Indent, !IO),
        io.write_string("extern ""C"" {\n", !IO),
        mlds_indent(Indent, !IO),
        io.write_string("#endif\n", !IO),
        io.nl(!IO)
    ;
        ( Target = target_il
        ; Target = target_java
        ; Target = target_csharp
        ; Target = target_erlang
        )
    ),
    mlds_indent(Indent, !IO),
    io.write_string("#include ""mercury.h""\n", !IO).

:- pred mlds_output_src_start(mlds_to_c_opts::in, indent::in,
    mercury_module_name::in, mlds_foreign_code::in,
    list(string)::in, list(string)::in, list(string)::in,
    io::di, io::uo) is det.

mlds_output_src_start(Opts, Indent, ModuleName, ForeignCode,
        InitPreds, FinalPreds, EnvVarNames, !IO) :-
    mlds_output_auto_gen_comment(Opts, ModuleName, !IO),
    mlds_indent(Indent, !IO),
    io.write_string("/* :- module ", !IO),
    prog_out.write_sym_name(ModuleName, !IO),
    io.write_string(". */\n", !IO),
    mlds_indent(Indent, !IO),
    io.write_string("/* :- implementation. */\n", !IO),
    mlds_output_src_bootstrap_defines(!IO),
    io.nl(!IO),
    mlds_output_init_and_final_comments(ModuleName, InitPreds, FinalPreds,
        EnvVarNames, !IO),

    mlds_output_src_import(Opts, Indent,
        mercury_import(compiler_visible_interface,
            mercury_module_name_to_mlds(ModuleName)), !IO),

    % If there are `:- pragma foreign_export' declarations,
    % #include the `.mh' file.
    ( ForeignCode = mlds_foreign_code(_, _, _, []) ->
        true
    ;
        mlds_output_src_import(Opts, Indent,
            mercury_import(user_visible_interface,
                mercury_module_name_to_mlds(ModuleName)), !IO)
    ),
    io.nl(!IO).

    % Output a comment to tell mkinit what module initialisation
    % predicates to call from <module>_init.c.
    %
:- pred mlds_output_init_and_final_comments(mercury_module_name::in,
    list(string)::in, list(string)::in, list(string)::in, io::di, io::uo)
    is det.

mlds_output_init_and_final_comments(ModuleName,
        UserInitPredCNames, UserFinalPredCNames, EnvVarNames, !IO) :-
    io.write_string("/*\n", !IO),
    % In profiling grades the module mercury__<modulename>__init predicate
    % is responsible for calling MR_init_entry, so the INIT comment must be
    % present.
    % XXX we could probably omit it in non-profiling grades.
    io.write_string("INIT ", !IO),
    output_init_name(ModuleName, !IO),
    io.write_string("init\n", !IO),
    (
        UserInitPredCNames = []
    ;
        UserInitPredCNames = [_ | _],
        io.write_string("REQUIRED_INIT ", !IO),
        output_init_name(ModuleName, !IO),
        io.write_string("required_init\n", !IO)
    ),
    (
        UserFinalPredCNames = []
    ;
        UserFinalPredCNames = [_ | _],
        io.write_string("REQUIRED_FINAL ", !IO),
        output_init_name(ModuleName, !IO),
        io.write_string("required_final\n", !IO)
    ),
    list.foldl(mlds_output_env_var_init, EnvVarNames, !IO),
    % We always write out ENDINIT so that mkinit doesn't scan the whole file.
    io.write_string("ENDINIT\n", !IO),
    io.write_string("*/\n\n", !IO).

:- pred mlds_output_env_var_init(string::in, io::di, io::uo) is det.

mlds_output_env_var_init(EnvVarName, !IO) :-
    io.write_string("ENVVAR ", !IO),
    io.write_string(EnvVarName, !IO),
    io.nl(!IO).

    % Output any #defines which are required to bootstrap in the hlc
    % grade.
    %
:- pred mlds_output_src_bootstrap_defines(io::di, io::uo) is det.

mlds_output_src_bootstrap_defines(!IO).

:- pred mlds_output_hdr_end(mlds_to_c_opts::in, indent::in,
    mercury_module_name::in, io::di, io::uo) is det.

mlds_output_hdr_end(Opts, Indent, ModuleName, !IO) :-
    Target = Opts ^ m2co_target,
    (
        Target = target_c,
        % Terminate the `extern "C"' wrapper.
        mlds_indent(Indent, !IO),
        io.write_string("#ifdef __cplusplus\n", !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO),
        mlds_indent(Indent, !IO),
        io.write_string("#endif\n", !IO),
        io.nl(!IO)
    ;
        ( Target = target_il
        ; Target = target_csharp
        ; Target = target_java
        ; Target = target_erlang
        )
    ),
    mlds_indent(Indent, !IO),
    io.write_string("#endif /* MR_HEADER_GUARD_", !IO),
    prog_out.write_sym_name(ModuleName, !IO),
    io.write_string(" */\n", !IO),
    io.nl(!IO),
    mlds_indent(Indent, !IO),
    io.write_string("/* :- end_interface ", !IO),
    prog_out.write_sym_name(ModuleName, !IO),
    io.write_string(". */\n", !IO).

:- pred mlds_output_src_end(indent::in, mercury_module_name::in,
    io::di, io::uo) is det.

mlds_output_src_end(Indent, ModuleName, !IO) :-
    mlds_indent(Indent, !IO),
    io.write_string("/* :- end_module ", !IO),
    prog_out.write_sym_name(ModuleName, !IO),
    io.write_string(". */\n", !IO).

    % Output a C comment saying that the file was automatically generated
    % (and giving details such as the compiler version).
    %
:- pred mlds_output_auto_gen_comment(mlds_to_c_opts::in, module_name::in,
    io::di, io::uo) is det.

mlds_output_auto_gen_comment(Opts, ModuleName, !IO) :-
    library.version(Version, Fullarch),
    Globals = Opts ^ m2co_all_globals,
    module_name_to_file_name(Globals, ModuleName, ".m", do_not_create_dirs,
        SourceFileName, !IO),
    output_c_file_intro_and_grade(Globals, SourceFileName, Version,
        Fullarch, !IO),
    io.nl(!IO).

    % Output a reference to the mangled grade name for the grade that the C
    % file gets compiled with. This ensures that we don't try to link objects
    % files compiled in different grades.
    %
:- pred mlds_output_grade_var(io::di, io::uo) is det.

mlds_output_grade_var(!IO) :-
    io.write_string(
        "/* ensure everything is compiled with the same grade */\n",
        !IO),
    io.write_string(
        "static const void *const MR_grade = &MR_GRADE_VAR;\n",
        !IO).

    % Get the foreign code for C.
    %
:- func mlds_get_c_foreign_code(map(foreign_language, mlds_foreign_code))
    = mlds_foreign_code.

mlds_get_c_foreign_code(AllForeignCode) = ForeignCode :-
    ( map.search(AllForeignCode, lang_c, ForeignCode0) ->
        ForeignCode = ForeignCode0
    ;
        % This can occur when compiling to a non-C target using
        % "--mlds-dump all".
        ForeignCode = mlds_foreign_code([], [], [], [])
    ).

%-----------------------------------------------------------------------------%

    % Maybe output the function `mercury__<modulename>__init()'.
    % The body of the function consists of calls MR_init_entry(<function>)
    % for each function defined in the module.
    %
    % If there are any user-defined intialisation or finalisation predicates
    % then output the functions: `mercury__<modulename>__required_init()' and
    % `mercury__<modulename>__required_final()' as necessary.
    %
:- pred mlds_output_init_fn_decls(mlds_module_name::in, list(string)::in,
    list(string)::in, io::di, io::uo) is det.

mlds_output_init_fn_decls(ModuleName, InitPreds, FinalPreds, !IO) :-
    output_init_fn_name(ModuleName, "", !IO),
    io.write_string(";\n", !IO),
    output_init_fn_name(ModuleName, "_type_tables", !IO),
    io.write_string(";\n", !IO),
    output_init_fn_name(ModuleName, "_debugger", !IO),
    io.write_string(";\n", !IO),
    (
        InitPreds = []
    ;
        InitPreds = [_ | _],
        output_required_fn_name(ModuleName, "required_init", !IO),
        io.write_string(";\n", !IO)
    ),
    (
        FinalPreds = []
    ;
        FinalPreds = [_ | _],
        output_required_fn_name(ModuleName, "required_final", !IO),
        io.write_string(";\n", !IO)
    ).

:- pred mlds_output_init_fn_defns(mlds_to_c_opts::in, mlds_module_name::in,
    list(mlds_defn)::in, list(mlds_defn)::in,
    assoc_list(mlds_alloc_id, ml_alloc_site_data)::in,
    list(string)::in, list(string)::in, io::di, io::uo) is det.

mlds_output_init_fn_defns(Opts, ModuleName, FuncDefns, TypeCtorInfoDefns,
        AllocSites, InitPreds, FinalPreds, !IO) :-
    output_init_fn_name(ModuleName, "", !IO),
    io.write_string("\n{\n", !IO),
    NeedToInit = Opts ^ m2co_need_to_init,
    (
        NeedToInit = yes,
        FuncDefns = [_ | _]
    ->
        io.write_strings(["\tstatic MR_bool initialised = MR_FALSE;\n",
            "\tif (initialised) return;\n",
            "\tinitialised = MR_TRUE;\n\n"], !IO),
        mlds_output_calls_to_init_entry(ModuleName, FuncDefns, !IO),
        mlds_output_call_to_register_alloc_sites(AllocSites, !IO)
    ;
        true
    ),
    io.write_string("}\n\n", !IO),

    output_init_fn_name(ModuleName, "_type_tables", !IO),
    io.write_string("\n{\n", !IO),
    (
        TypeCtorInfoDefns = [_ | _],
        io.write_strings(["\tstatic MR_bool initialised = MR_FALSE;\n",
            "\tif (initialised) return;\n",
            "\tinitialised = MR_TRUE;\n\n"], !IO),
        mlds_output_calls_to_register_tci(ModuleName, TypeCtorInfoDefns, !IO)
    ;
        TypeCtorInfoDefns = []
    ),
    io.write_string("}\n\n", !IO),

    output_init_fn_name(ModuleName, "_debugger", !IO),
    io.write_string("\n{\n", !IO),
    io.write_string("\tMR_fatal_error(""debugger initialization " ++
        "in MLDS grade"");\n", !IO),
    io.write_string("}\n", !IO),
    %
    % Maybe write out wrapper functions that call user-defined intialisation
    % and finalisation predicates.
    %
    (
        InitPreds = []
    ;
        InitPreds = [_ | _],
        io.nl(!IO),
        output_required_fn_name(ModuleName, "required_init", !IO),
        io.write_string("\n{\n", !IO),
        output_required_calls(InitPreds, !IO),
        io.write_string("}\n", !IO)
    ),
    (
        FinalPreds = []
    ;
        FinalPreds = [_ | _],
        io.nl(!IO),
        output_required_fn_name(ModuleName, "required_final", !IO),
        io.write_string("\n{\n", !IO),
        output_required_calls(FinalPreds, !IO),
        io.write_string("}\n", !IO)
    ).

:- pred output_required_calls(list(string)::in, io::di, io::uo) is det.

output_required_calls([], !IO).
output_required_calls([Call | Calls], !IO) :-
    io.write_string("\t" ++ Call ++ "();\n", !IO),
    output_required_calls(Calls, !IO).

:- pred output_init_fn_name(mlds_module_name::in, string::in,
    io::di, io::uo) is det.

output_init_fn_name(ModuleName, Suffix, !IO) :-
    % Here we ensure that we only get one "mercury__" at the start
    % of the function name.
    ModuleNameString0 = sym_name_mangle(
        mlds_module_name_to_sym_name(ModuleName)),
    ( string.prefix(ModuleNameString0, "mercury__") ->
        ModuleNameString = ModuleNameString0
    ;
        ModuleNameString = "mercury__" ++ ModuleNameString0
    ),
    io.write_string("void ", !IO),
    io.write_string(ModuleNameString, !IO),
    io.write_string("__init", !IO),
    io.write_string(Suffix, !IO),
    io.write_string("(void)", !IO).

    % Output a function name of the form:
    %
    %   mercury__<modulename>__<suffix>
    %
:- pred output_required_fn_name(mlds_module_name::in, string::in,
    io::di, io::uo) is det.

output_required_fn_name(ModuleName, Suffix, !IO) :-
    % Here we ensure that we only get one "mercury__" at the start
    % of the function name.
    ModuleNameString0 = sym_name_mangle(
        mlds_module_name_to_sym_name(ModuleName)),
    ( string.prefix(ModuleNameString0, "mercury__") ->
        ModuleNameString = ModuleNameString0
    ;
        ModuleNameString = "mercury__" ++ ModuleNameString0
    ),
    io.write_string("void ", !IO),
    io.write_string(ModuleNameString, !IO),
    io.write_string("__", !IO),
    io.write_string(Suffix, !IO),
    io.write_string("(void)", !IO).

    % Generate calls to MR_init_entry() for the specified functions.
    %
:- pred mlds_output_calls_to_init_entry(mlds_module_name::in,
    list(mlds_defn)::in, io::di, io::uo) is det.

mlds_output_calls_to_init_entry(_ModuleName, [], !IO).
mlds_output_calls_to_init_entry(ModuleName, [FuncDefn | FuncDefns], !IO) :-
    FuncDefn = mlds_defn(EntityName, _, _, _),
    io.write_string("\tMR_init_entry(", !IO),
    mlds_output_fully_qualified_name(qual(ModuleName, module_qual, EntityName),
        !IO),
    io.write_string(");\n", !IO),
    mlds_output_calls_to_init_entry(ModuleName, FuncDefns, !IO).

    % Generate calls to MR_register_type_ctor_info() for the specified
    % type_ctor_infos.
    %
:- pred mlds_output_calls_to_register_tci(mlds_module_name::in,
    list(mlds_defn)::in, io::di, io::uo) is det.

mlds_output_calls_to_register_tci(_ModuleName, [], !IO).
mlds_output_calls_to_register_tci(ModuleName,
        [TypeCtorInfoDefn | TypeCtorInfoDefns], !IO) :-
    TypeCtorInfoDefn = mlds_defn(EntityName, _, _, _),
    io.write_string("\tMR_register_type_ctor_info(&", !IO),
    mlds_output_fully_qualified_name(qual(ModuleName, module_qual, EntityName),
        !IO),
    io.write_string(");\n", !IO),
    mlds_output_calls_to_register_tci(ModuleName, TypeCtorInfoDefns, !IO).

    % Generate call to MR_register_alloc_sites.
    %
:- pred mlds_output_call_to_register_alloc_sites(
    assoc_list(mlds_alloc_id, ml_alloc_site_data)::in, io::di, io::uo) is det.

mlds_output_call_to_register_alloc_sites(AllocSites, !IO) :-
    (
        AllocSites = []
    ;
        AllocSites = [_ | _],
        list.length(AllocSites, Length),
        io.write_string("\tMR_register_alloc_sites(MR_alloc_sites, ", !IO),
        io.write_int(Length, !IO),
        io.write_string(");\n", !IO)
    ).

%-----------------------------------------------------------------------------%
%
% Foreign language interface stuff.
%

:- pred mlds_output_c_hdr_decls(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, mlds_foreign_code::in, io::di, io::uo) is det.

mlds_output_c_hdr_decls(Opts, Indent, ModuleName, ForeignCode, !IO) :-
    ForeignCode = mlds_foreign_code(RevHeaderCode, _RevImports,
        _RevBodyCode, _ExportDefns),
    HeaderCode = list.reverse(RevHeaderCode),
    ( is_std_lib_module(ModuleName, StdlibModuleName) ->
        SymName = StdlibModuleName
    ;
        SymName = mlds_module_name_to_sym_name(ModuleName)
    ),

    DeclGuard = decl_guard(SymName),
    io.write_strings(["#ifndef ", DeclGuard, "\n#define ", DeclGuard, "\n"],
        !IO),
    %
    % We need to make sure we #include the .mih files for any ancestor modules
    % in cases any foreign_types defined in them are referenced by the extern
    % declarations required by mutables.
    %
    AncestorModuleNames = get_ancestors(SymName),
    list.map(module_name_to_file_name_stem,
        AncestorModuleNames, AncestorFileNames),
    WriteAncestorInclude = (pred(Ancestor::in, !.IO::di, !:IO::uo) is det :-
        io.write_strings(["#include \"", Ancestor, ".mih", "\"\n"], !IO)
    ),
    list.foldl(WriteAncestorInclude, AncestorFileNames, !IO),
    io.write_list(HeaderCode, "\n",
        mlds_output_c_hdr_decl(Opts, Indent, yes(foreign_decl_is_exported)),
        !IO),
    io.write_string("\n#endif\n", !IO).

:- pred mlds_output_c_hdr_decl(mlds_to_c_opts::in, indent::in,
    maybe(foreign_decl_is_local)::in, foreign_decl_code::in,
    io::di, io::uo) is det.

mlds_output_c_hdr_decl(Opts, _Indent, MaybeDesiredIsLocal, DeclCode, !IO) :-
    DeclCode = foreign_decl_code(Lang, IsLocal, LiteralOrInclude, Context),
    % Only output C code in the C header file.
    (
        Lang = lang_c,
        (
            (
                MaybeDesiredIsLocal = no
            ;
                MaybeDesiredIsLocal = yes(DesiredIsLocal),
                IsLocal = DesiredIsLocal
            )
        ->
            mlds_output_foreign_literal_or_include(Opts, LiteralOrInclude,
                Context, !IO)
        ;
            true
        )
    ;
        ( Lang = lang_java
        ; Lang = lang_csharp
        ; Lang = lang_il
        ; Lang = lang_erlang
        ),
        sorry($module, $pred, "foreign code other than C")
    ).

:- pred mlds_output_c_decls(mlds_to_c_opts::in, indent::in,
    mlds_foreign_code::in, io::di, io::uo) is det.

mlds_output_c_decls(Opts, Indent, ForeignCode, !IO) :-
    ForeignCode = mlds_foreign_code(RevHeaderCode, _RevImports,
        _RevBodyCode, _ExportDefns),
    HeaderCode = list.reverse(RevHeaderCode),
    io.write_list(HeaderCode, "\n",
        mlds_output_c_hdr_decl(Opts, Indent, yes(foreign_decl_is_local)), !IO).

:- pred mlds_output_c_defns(mlds_to_c_opts::in, mlds_module_name::in,
    indent::in, mlds_foreign_code::in, io::di, io::uo) is det.

mlds_output_c_defns(Opts, ModuleName, Indent, ForeignCode, !IO) :-
    ForeignCode = mlds_foreign_code(_RevHeaderCode, RevImports,
        RevBodyCode, ExportDefns),
    Imports = list.reverse(RevImports),
    list.foldl(mlds_output_c_foreign_import_module(Opts, Indent),
        Imports, !IO),
    BodyCode = list.reverse(RevBodyCode),
    io.write_list(BodyCode, "\n", mlds_output_c_defn(Opts, Indent), !IO),
    io.write_string("\n", !IO),
    io.write_list(ExportDefns, "\n",
        mlds_output_pragma_export_defn(Opts, ModuleName, Indent), !IO).

:- pred mlds_output_c_foreign_import_module(mlds_to_c_opts::in, int::in,
    foreign_import_module_info::in, io::di, io::uo) is det.

mlds_output_c_foreign_import_module(Opts, Indent, ForeignImport, !IO) :-
    ForeignImport = foreign_import_module_info(Lang, Import, _),
    (
        Lang = lang_c,
        mlds_output_src_import(Opts, Indent,
            mercury_import(user_visible_interface,
                mercury_module_name_to_mlds(Import)), !IO)
    ;
        ( Lang = lang_il
        ; Lang = lang_csharp
        ; Lang = lang_java
        ; Lang = lang_erlang
        ),
        sorry($module, $pred, "foreign code other than C")
    ).

:- pred mlds_output_c_defn(mlds_to_c_opts::in, indent::in,
    user_foreign_code::in, io::di, io::uo) is det.

mlds_output_c_defn(Opts, _Indent, UserForeignCode, !IO) :-
    UserForeignCode = user_foreign_code(Lang, LiteralOrInclude, Context),
    (
        Lang = lang_c,
        mlds_output_foreign_literal_or_include(Opts, LiteralOrInclude, Context,
            !IO)
    ;
        ( Lang = lang_csharp
        ; Lang = lang_il
        ; Lang = lang_java
        ; Lang = lang_erlang
        ),
        sorry($module, $pred, "foreign code other than C")
    ).

:- pred mlds_output_foreign_literal_or_include(mlds_to_c_opts::in,
    foreign_literal_or_include::in, prog_context::in, io::di, io::uo) is det.

mlds_output_foreign_literal_or_include(Opts, LiteralOrInclude, Context, !IO) :-
    (
        LiteralOrInclude = literal(Code),
        output_context_opts(Opts, mlds_make_context(Context), !IO),
        io.write_string(Code, !IO)
    ;
        LiteralOrInclude = include_file(IncludeFileName),
        SourceFileName = Opts ^ m2co_source_filename,
        make_include_file_path(SourceFileName, IncludeFileName, IncludePath),
        output_context_opts(Opts, IncludePath, 1, !IO),
        write_include_file_contents(IncludePath, !IO)
    ).

:- pred mlds_output_pragma_export_defn(mlds_to_c_opts::in,
    mlds_module_name::in, indent::in, mlds_pragma_export::in, io::di, io::uo)
    is det.

mlds_output_pragma_export_defn(Opts, ModuleName, Indent, PragmaExport, !IO) :-
    PragmaExport = ml_pragma_export(Lang, _ExportName, MLDS_Name,
        MLDS_Signature, _UnivQTVars, Context),
    expect(unify(Lang, lang_c), $module, $pred,
        "foreign_export to language other than C."),
    mlds_output_pragma_export_func_name(Opts, ModuleName, Indent,
        PragmaExport, !IO),
    io.write_string("\n", !IO),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    io.write_string("{\n", !IO),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    mlds_output_pragma_export_defn_body(Opts, ModuleName,
        MLDS_Name, MLDS_Signature, !IO),
    io.write_string("}\n", !IO).

:- pred mlds_output_pragma_export_func_name(mlds_to_c_opts::in,
    mlds_module_name::in, indent::in, mlds_pragma_export::in,
    io::di, io::uo) is det.

mlds_output_pragma_export_func_name(Opts, ModuleName, Indent, Export, !IO) :-
    Export = ml_pragma_export(Lang, ExportName, _MLDSName, Signature,
        _UnivQTVars, Context),
    expect(unify(Lang, lang_c), $module, $pred,
        "export to language other than C."),
    Name = qual(ModuleName, module_qual, entity_export(ExportName)),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    % For functions exported using `pragma foreign_export',
    % we use the default C calling convention.
    CallingConvention = "",
    mlds_output_func_decl_ho(Opts, Indent, Name, Context,
        CallingConvention, Signature,
        mlds_output_pragma_export_type_ignore_opts(prefix),
        mlds_output_pragma_export_type_ignore_opts(suffix), !IO).

:- pred mlds_output_pragma_export_type_prefix_suffix(mlds_type::in,
    io::di, io::uo) is det.

mlds_output_pragma_export_type_prefix_suffix(Type, !IO) :-
    mlds_output_pragma_export_type(prefix, Type, !IO),
    mlds_output_pragma_export_type(suffix, Type, !IO).

:- type locn
    --->    prefix
    ;       suffix.

:- pred mlds_output_pragma_export_type_ignore_opts(locn::in,
    mlds_to_c_opts::in, mlds_type::in, io::di, io::uo) is det.

mlds_output_pragma_export_type_ignore_opts(PrefixSuffix, _Opts, MLDS_Type,
        !IO) :-
    mlds_output_pragma_export_type(PrefixSuffix, MLDS_Type, !IO).

:- pred mlds_output_pragma_export_type(locn::in,
    mlds_type::in, io::di, io::uo) is det.

mlds_output_pragma_export_type(PrefixSuffix, MLDS_Type, !IO) :-
    (
        PrefixSuffix = suffix
    ;
        PrefixSuffix = prefix,
        (
            MLDS_Type = mlds_mercury_array_type(_ElemType),
            io.write_string("MR_ArrayPtr", !IO)
        ;
            MLDS_Type = mercury_type(_, _, ExportedType),
            io.write_string(exported_type_to_string(lang_c, ExportedType), !IO)
        ;
            ( MLDS_Type = mlds_cont_type(_)
            ; MLDS_Type = mlds_commit_type
            ; MLDS_Type = mlds_class_type(_, _, _)
            ; MLDS_Type = mlds_array_type(_)
            ; MLDS_Type = mlds_mostly_generic_array_type(_)
            ; MLDS_Type = mlds_func_type(_)
            ; MLDS_Type = mlds_generic_type
            ; MLDS_Type = mlds_generic_env_ptr_type
            ; MLDS_Type = mlds_type_info_type
            ; MLDS_Type = mlds_pseudo_type_info_type
            ; MLDS_Type = mlds_rtti_type(_)
            ),
            io.write_string("MR_Word", !IO)
        ;
            MLDS_Type = mlds_native_bool_type,
            io.write_string("MR_bool", !IO)
        ;
            MLDS_Type = mlds_native_int_type,
            io.write_string("MR_Integer", !IO)
        ;
            MLDS_Type = mlds_native_float_type,
            io.write_string("MR_Float", !IO)
        ;
            MLDS_Type = mlds_native_char_type,
            io.write_string("MR_Char", !IO)
        ;
            MLDS_Type = mlds_foreign_type(ForeignType),
            (
                ForeignType = c(c_type(Name)),
                io.write_string(Name, !IO)
            ;
                ForeignType = il(_),
                unexpected($module, $pred, "il foreign_type")
            ;
                ForeignType = java(_),
                unexpected($module, $pred, "java foreign_type")
            ;
                ForeignType = csharp(_),
                unexpected($module, $pred, "csharp foreign_type")
            ;
                ForeignType = erlang(_),
                unexpected($module, $pred, "erlang foreign_type")
            )
        ;
            MLDS_Type = mlds_ptr_type(Type),
            mlds_output_pragma_export_type(prefix, Type, !IO),
            io.write_string(" *", !IO)
        ;
            MLDS_Type = mlds_tabling_type(_),
            % These types should never occur in procedures exported to C,
            % so the fact that we could generate a more accurate type
            % shouldn't matter.
            io.write_string("MR_Word", !IO)
        ;
            MLDS_Type = mlds_unknown_type,
            unexpected($module, $pred, "unknown_type")
        )
    ).

    % Output the definition body for a pragma foreign_export.
    %
:- pred mlds_output_pragma_export_defn_body(mlds_to_c_opts::in,
    mlds_module_name::in, mlds_qualified_entity_name::in, mlds_func_params::in,
    io::di, io::uo) is det.

mlds_output_pragma_export_defn_body(Opts, ModuleName, FuncName, Signature,
        !IO) :-
    Signature = mlds_func_params(Parameters, RetTypes),

    % Declare local variables corresponding to any foreign_type parameters.
    IsCForeignType = (pred(Arg::in) is semidet :-
        Arg = mlds_argument(_Name, Type, _GCStatement),
        Type = mlds_foreign_type(c(_))
    ),
    IsCForeignTypePtr = (pred(Arg::in) is semidet :-
        Arg = mlds_argument(_Name, Type, _GCStatement),
        Type = mlds_ptr_type(mlds_foreign_type(c(_)))
    ),
    CForeignTypeInputs = list.filter(IsCForeignType, Parameters),
    CForeignTypeOutputs = list.filter(IsCForeignTypePtr, Parameters),
    io.write_list(CForeignTypeInputs, "",
        mlds_output_pragma_export_input_defns(Opts, ModuleName), !IO),
    io.write_list(CForeignTypeOutputs, "",
        mlds_output_pragma_export_output_defns(Opts, ModuleName), !IO),

    % Declare a local variable or two for the return value, if needed.
    (
        RetTypes = [RetType1],
        ( RetType1 = mlds_foreign_type(c(_)) ->
            io.write_string("\t", !IO),
            mlds_output_pragma_export_type_prefix_suffix(RetType1, !IO),
            io.write_string(" ret_value;\n", !IO),
            io.write_string("\t", !IO),
            mlds_output_type(Opts, RetType1, !IO),
            io.write_string(" boxed_ret_value;\n", !IO)
        ;
            io.write_string("\t", !IO),
            mlds_output_pragma_export_type_prefix_suffix(RetType1, !IO),
            io.write_string(" ret_value;\n", !IO)
        )
    ;
        RetTypes = []
    ;
        RetTypes = [_, _ | _]
    ),

    % Generate code to box any non-word-sized foreign_type input parameters;
    % these need to be converted to a uniform size before passing them
    % to Mercury code.
    io.write_list(CForeignTypeInputs, "",
        mlds_output_pragma_input_arg(ModuleName), !IO),

    % Generate code to actually call the Mercury procedure which
    % is being exported
    (
        RetTypes = [],
        io.write_string("\t", !IO),
        mlds_output_pragma_export_call(Opts, ModuleName, FuncName, Parameters,
            !IO)
    ;
        RetTypes = [RetType2],
        ( RetType2 = mlds_foreign_type(c(_)) ->
            io.write_string("\tboxed_ret_value = ", !IO)
        ;
            io.write_string("\tret_value = (", !IO),
            mlds_output_pragma_export_type_prefix_suffix(RetType2, !IO),
            io.write_string(")", !IO)
        ),
        mlds_output_pragma_export_call(Opts, ModuleName, FuncName, Parameters,
            !IO)
    ;
        RetTypes = [_, _ | _],
        % This is just for MLDS dumps when compiling to non-C targets.
        % So we don't need to worry about boxing/unboxing foreign types here.
        io.write_string("\treturn (", !IO),
        mlds_output_return_list(RetTypes,
            mlds_output_pragma_export_type_prefix_suffix, !IO),
        io.write_string(") ", !IO)
    ),

    % Generate code to unbox any foreign_type output parameters,
    % since we are returning those parameters to C code.
    io.write_list(CForeignTypeOutputs, "",
        mlds_output_pragma_output_arg(ModuleName), !IO),

    % Generate the final statement to unbox and return the return value,
    % if needed.
    (
        RetTypes = [RetType3],
        ( RetType3 = mlds_foreign_type(c(_)) ->
            io.write_string("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", !IO),
            mlds_output_pragma_export_type_prefix_suffix(RetType3, !IO),
            io.write_string(", boxed_ret_value, ret_value);\n", !IO)
        ;
            true
        ),
        io.write_string("\treturn ret_value;\n", !IO)
    ;
        RetTypes = []
    ;
        RetTypes = [_, _ | _]
    ).

:- pred mlds_output_pragma_input_arg(mlds_module_name::in, mlds_argument::in,
    io::di, io::uo) is det.

mlds_output_pragma_input_arg(ModuleName, Arg, !IO) :-
    Arg = mlds_argument(Name, Type, _GCStatement),
    QualName = qual(ModuleName, module_qual, Name),
    BoxedQualName = qual(ModuleName, module_qual, boxed_name(Name)),
    io.write_string("\tMR_MAYBE_BOX_FOREIGN_TYPE(", !IO),
    mlds_output_pragma_export_type_prefix_suffix(Type, !IO),
    io.write_string(", ", !IO),
    mlds_output_fully_qualified_name(QualName, !IO),
    io.write_string(", ", !IO),
    mlds_output_fully_qualified_name(BoxedQualName, !IO),
    io.write_string(");\n", !IO).

:- pred mlds_output_pragma_output_arg(mlds_module_name::in, mlds_argument::in,
    io::di, io::uo) is det.

mlds_output_pragma_output_arg(ModuleName, Arg, !IO) :-
    Arg = mlds_argument(Name, Type, _GCStatement),
    QualName = qual(ModuleName, module_qual, Name),
    BoxedQualName = qual(ModuleName, module_qual, boxed_name(Name)),
    io.write_string("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", !IO),
    mlds_output_pragma_export_type_prefix_suffix(pointed_to_type(Type), !IO),
    io.write_string(", ", !IO),
    mlds_output_fully_qualified_name(BoxedQualName, !IO),
    io.write_string(", *", !IO),
    mlds_output_fully_qualified_name(QualName, !IO),
    io.write_string(");\n", !IO).

:- pred mlds_output_pragma_export_input_defns(mlds_to_c_opts::in,
    mlds_module_name::in, mlds_argument::in, io::di, io::uo) is det.

mlds_output_pragma_export_input_defns(Opts, ModuleName, Arg, !IO) :-
    Arg = mlds_argument(Name, Type, _GCStatement),
    io.write_string("\t", !IO),
    mlds_output_data_decl_ho(Opts,
        mlds_output_type_prefix, mlds_output_type_suffix_no_size,
        qual(ModuleName, module_qual, boxed_name(Name)), Type, !IO),
    io.write_string(";\n", !IO).

:- pred mlds_output_pragma_export_output_defns(mlds_to_c_opts::in,
    mlds_module_name::in, mlds_argument::in, io::di, io::uo) is det.

mlds_output_pragma_export_output_defns(Opts, ModuleName, Arg, !IO) :-
    Arg = mlds_argument(Name, Type, _GCStatement),
    io.write_string("\t", !IO),
    mlds_output_data_decl_ho(Opts,
        mlds_output_type_prefix, mlds_output_type_suffix_no_size,
        qual(ModuleName, module_qual, boxed_name(Name)), pointed_to_type(Type),
        !IO),
    io.write_string(";\n", !IO).

:- func pointed_to_type(mlds_type) = mlds_type.

pointed_to_type(PtrType) =
    ( PtrType = mlds_ptr_type(Type) ->
        Type
    ;
        unexpected($module, $pred, "not pointer")
    ).

:- func boxed_name(mlds_entity_name) = mlds_entity_name.

boxed_name(Name) = BoxedName :-
    ( Name = entity_data(mlds_data_var(mlds_var_name(VarName, Seq))) ->
        BoxedName = entity_data(mlds_data_var(
            mlds_var_name("boxed_" ++ VarName, Seq)))
    ;
        unexpected($module, $pred, "boxed_name called for non-var argument")
    ).

:- pred mlds_output_pragma_export_call(mlds_to_c_opts::in,
    mlds_module_name::in, mlds_qualified_entity_name::in, mlds_arguments::in,
    io::di, io::uo) is det.

mlds_output_pragma_export_call(Opts, ModuleName, FuncName, Parameters, !IO) :-
    mlds_output_fully_qualified_name(FuncName, !IO),
    io.write_string("(", !IO),
    io.write_list(Parameters, ", ",
        mlds_output_pragma_export_arg(Opts, ModuleName), !IO),
    io.write_string(");\n", !IO).

    % Output a fully qualified name preceded by a cast.
    %
:- pred mlds_output_pragma_export_arg(mlds_to_c_opts::in, mlds_module_name::in,
    mlds_argument::in, io::di, io::uo) is det.

mlds_output_pragma_export_arg(Opts, ModuleName, Arg, !IO) :-
    Arg = mlds_argument(Name, Type, _GCStatement),
    ( Type = mlds_foreign_type(c(_)) ->
        % This is a foreign_type input. Pass in the already-boxed value.
        BoxedName = boxed_name(Name),
        mlds_output_fully_qualified_name(
            qual(ModuleName, module_qual, BoxedName), !IO)
    ; Type = mlds_ptr_type(mlds_foreign_type(c(_))) ->
        % This is a foreign_type output.  Pass in the address of the
        % local variable which will hold the boxed value.
        io.write_string("&", !IO),
        BoxedName = boxed_name(Name),
        mlds_output_fully_qualified_name(
            qual(ModuleName, module_qual, BoxedName), !IO)
    ;
        % Otherwise, no boxing or unboxing is needed.
        % Just cast the argument to the right type.
        mlds_output_cast(Opts, Type, !IO),
        mlds_output_fully_qualified_name(qual(ModuleName, module_qual, Name),
            !IO)
    ).

    % Generates the signature for det functions in the forward mode.
    %
:- func det_func_signature(mlds_func_params) = mlds_func_params.

det_func_signature(mlds_func_params(Args, _RetTypes)) = Params :-
    list.length(Args, NumArgs),
    NumFuncArgs = NumArgs - 1,
    ( list.split_list(NumFuncArgs, Args, InputArgs0, [ReturnArg0]) ->
        InputArgs = InputArgs0,
        ReturnArg = ReturnArg0
    ;
        unexpected($module, $pred, "function missing return value?")
    ),
    (
        ReturnArg = mlds_argument(_ReturnArgName,
            mlds_ptr_type(ReturnArgType0), _GCStatement)
    ->
        ReturnArgType = ReturnArgType0
    ;
        unexpected($module, $pred, "function return type!")
    ),
    Params = mlds_func_params(InputArgs, [ReturnArgType]).

:- pred mlds_output_export_enums(mlds_to_c_opts::in, indent::in,
    list(mlds_exported_enum)::in, io::di, io::uo) is det.

mlds_output_export_enums(Opts, Indent, ExportedEnums, !IO) :-
    list.foldl(mlds_output_export_enum(Opts, Indent), ExportedEnums, !IO).

:- pred mlds_output_export_enum(mlds_to_c_opts::in, indent::in,
    mlds_exported_enum::in, io::di, io::uo) is det.

mlds_output_export_enum(Opts, _Indent, ExportedEnum, !IO) :-
    ExportedEnum = mlds_exported_enum(Lang, Context, _TypeCtor,
        ExportConstants0),
    (
        Lang = lang_c,
        output_context_opts(Opts, mlds_make_context(Context), !IO),
        % We reverse the list so the constants are printed out in order.
        list.reverse(ExportConstants0, ExportConstants),
        list.foldl(mlds_output_exported_enum_constant, ExportConstants, !IO)
    ;
        ( Lang = lang_csharp
        ; Lang = lang_java
        ; Lang = lang_il
        ; Lang = lang_erlang
        )
    ).

:- pred mlds_output_exported_enum_constant(mlds_exported_enum_constant::in,
    io::di, io::uo) is det.

mlds_output_exported_enum_constant(ExportedConstant, !IO) :-
    ExportedConstant = mlds_exported_enum_constant(Name, Initializer),
    io.write_string("#define ", !IO),
    io.write_string(Name, !IO),
    io.write_string(" ", !IO),
    (
        Initializer = init_obj(ml_const(mlconst_enum(Value, _)))
    ->
        io.write_int(Value, !IO)
    ;
        Initializer = init_obj(ml_const(mlconst_foreign(Lang, Value, _)))
    ->
        expect(unify(Lang, lang_c), $module, $pred,
            "mlconst_foreign for language other than C."),
        io.write_string(Value, !IO)
    ;
        unexpected($module, $pred,
            "tag for export enumeration is not enum or foreign")
    ),
    io.nl(!IO).

%-----------------------------------------------------------------------------%
%
% Code to output declarations and definitions.
%

:- pred mlds_output_defns(mlds_to_c_opts::in, indent::in, bool::in,
    mlds_module_name::in, list(mlds_defn)::in, io::di, io::uo) is det.

mlds_output_defns(Opts, Indent, Separate, ModuleName, Defns, !IO) :-
    GCC_LocalLabels = Opts ^ m2co_gcc_local_labels,
    (
        GCC_LocalLabels = yes,
        % GNU C __label__ declarations must precede ordinary variable
        % declarations.

        list.filter(defn_is_commit_type_var, Defns, LabelDecls, OtherDefns),
        mlds_output_defn_list(Opts, Indent, Separate, ModuleName,
            LabelDecls, !IO),
        mlds_output_defn_list(Opts, Indent, Separate, ModuleName,
            OtherDefns, !IO)
    ;
        GCC_LocalLabels = no,
        mlds_output_defn_list(Opts, Indent, Separate, ModuleName,
            Defns, !IO)
    ).

:- pred mlds_output_defn_list(mlds_to_c_opts::in, indent::in, bool::in,
    mlds_module_name::in, list(mlds_defn)::in, io::di, io::uo) is det.

mlds_output_defn_list(_Opts, _Indent, _Separate, _ModuleName, [], !IO).
mlds_output_defn_list(Opts, Indent, Separate, ModuleName,
        [Defn | Defns], !IO) :-
    mlds_output_defn(Opts, Indent, Separate, ModuleName, Defn, !IO),
    mlds_output_defn_list(Opts, Indent, Separate, ModuleName, Defns, !IO).

:- pred mlds_output_decls(mlds_to_c_opts::in, indent::in, mlds_module_name::in,
    list(mlds_defn)::in, io::di, io::uo) is det.

mlds_output_decls(_Opts, _Indent, _ModuleName, [], !IO).
mlds_output_decls(Opts, Indent, ModuleName, [Defn | Defns], !IO) :-
    io.nl(!IO),
    mlds_output_decl(Opts, Indent, ModuleName, Defn, !IO),
    mlds_output_decls(Opts, Indent, ModuleName, Defns, !IO).

:- pred mlds_output_decl(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, mlds_defn::in, io::di, io::uo) is det.

mlds_output_decl(Opts, Indent, ModuleName, Defn, !IO) :-
    Defn = mlds_defn(Name, Context, Flags, DefnBody),
    (
        % ANSI C does not permit forward declarations of enumeration types.
        % So we just skip those. Currently they're not needed since we don't
        % actually use the enum types.

        DefnBody = mlds_class(ClassDefn),
        ClassDefn ^ mcd_kind = mlds_enum
    ->
        true
    ;
        % If we're using --high-level-data, then for function declarations,
        % we need to ensure that we forward-declare any types used in the
        % function parameters. This is because otherwise, for any struct names
        % whose first occurence is in the function parameters, the scope of
        % such struct names is just that function declaration, which is never
        % right.
        %
        % We generate such forward declarations here, rather than generating
        % type declarations in a header file and #including that header file,
        % because doing the latter would significantly complicate the
        % dependencies (to avoid cyclic #includes, you'd need to generate
        % the type declarations in a different header file than the function
        % declarations).

        HighLevelData = Opts ^ m2co_highlevel_data,
        (
            HighLevelData = yes,
            DefnBody = mlds_function(_, Params, _, _, _)
        ->
            Params = mlds_func_params(Arguments, _RetTypes),
            ParamTypes = mlds_get_arg_types(Arguments),
            mlds_output_type_forward_decls(Opts, Indent, ParamTypes, !IO)
        ;
            true
        ),

        % Now output the declaration for this mlds_defn.
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        mlds_output_decl_flags(Opts, Flags, forward_decl, Name, DefnBody, !IO),
        QualName = qual(ModuleName, module_qual, Name),
        mlds_output_decl_body(Opts, Indent, QualName, Context, DefnBody, !IO)
    ).

:- pred mlds_output_scalar_cell_group_decls(mlds_to_c_opts::in, indent::in,
    string::in,
    assoc_list(ml_scalar_common_type_num, ml_scalar_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_scalar_cell_group_decls(_Opts, _Indent, _MangledModuleName,
        [], !IO).
mlds_output_scalar_cell_group_decls(Opts, Indent, MangledModuleName,
        [CellGroup | CellGroups], !IO) :-
    mlds_output_scalar_cell_group_decl(Opts, Indent, MangledModuleName,
        CellGroup, !IO),
    mlds_output_scalar_cell_group_decls(Opts, Indent, MangledModuleName,
        CellGroups, !IO).

:- pred mlds_output_scalar_cell_group_decl(mlds_to_c_opts::in, indent::in,
    string::in, pair(ml_scalar_common_type_num, ml_scalar_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_scalar_cell_group_decl(Opts, Indent, MangledModuleName,
        TypeNum - CellGroup, !IO) :-
    TypeNum = ml_scalar_common_type_num(TypeRawNum),
    CellGroup = ml_scalar_cell_group(Type, InitArraySize,
        _Counter, _Members, Rows),

    ( Type = mlds_mostly_generic_array_type(ElemTypes) ->
        mlds_output_scalar_cell_group_struct_defn(Opts, Indent,
            MangledModuleName, TypeRawNum, ElemTypes, !IO)
    ;
        true
    ),

    mlds_indent(Indent, !IO),
    io.write_string("\nstatic /* final */ const ", !IO),
    NumRows = cord.length(Rows),
    mlds_output_scalar_cell_group_type_and_name(Opts, MangledModuleName,
        TypeRawNum, Type, InitArraySize, NumRows, !IO),
    io.write_string(";\n", !IO).

:- pred mlds_output_scalar_cell_group_struct_defn(mlds_to_c_opts::in, int::in,
    string::in, int::in, list(mlds_type)::in, io::di, io::uo) is det.

mlds_output_scalar_cell_group_struct_defn(Opts, Indent, MangledModuleName,
        TypeRawNum, ElemTypes, !IO) :-
    output_pragma_pack_push(!IO),
    io.format("struct %s_scalar_cell_group_%d {\n",
        [s(MangledModuleName), i(TypeRawNum)], !IO),
    list.foldl2(mlds_output_scalar_cell_group_struct_field(Opts, Indent + 1),
        ElemTypes, 1, _, !IO),
    mlds_indent(Indent, !IO),
    io.write_string("};\n", !IO),
    output_pragma_pack_pop(!IO).

:- pred mlds_output_scalar_cell_group_struct_field(mlds_to_c_opts::in,
    indent::in, mlds_type::in, int::in, int::out, io::di, io::uo) is det.

mlds_output_scalar_cell_group_struct_field(Opts, Indent, FieldType,
        Num, Num + 1, !IO) :-
    mlds_indent(Indent, !IO),
    ( FieldType = mlds_native_float_type ->
        % Ensure float structure members are word-aligned (not double-aligned).
        io.write_string("MR_Float_Aligned", !IO)
    ;
        mlds_output_type_prefix(Opts, FieldType, !IO)
    ),
    io.format(" f%d;\n", [i(Num)], !IO).

:- pred mlds_output_scalar_cell_group_type_and_name(mlds_to_c_opts::in,
    string::in, int::in, mlds_type::in, initializer_array_size::in, int::in,
    io::di, io::uo) is det.

mlds_output_scalar_cell_group_type_and_name(Opts, MangledModuleName,
        TypeRawNum, Type, InitArraySize, NumRows, !IO) :-
    ( Type = mlds_mostly_generic_array_type(_) ->
        io.format("struct %s_scalar_cell_group_%d",
            [s(MangledModuleName), i(TypeRawNum)], !IO)
    ;
        mlds_output_type_prefix(Opts, Type, !IO)
    ),
    io.format(" %s_scalar_common_%d[%d]",
        [s(MangledModuleName), i(TypeRawNum), i(NumRows)], !IO),
    ( Type = mlds_mostly_generic_array_type(_) ->
        true
    ;
        mlds_output_type_suffix(Opts, Type, InitArraySize, !IO)
    ).

:- pred mlds_output_vector_cell_group_decls(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, string::in,
    assoc_list(ml_vector_common_type_num, ml_vector_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_vector_cell_group_decls(_Opts, _Indent,
        _ModuleName, _MangledModuleName, [], !IO).
mlds_output_vector_cell_group_decls(Opts, Indent,
        ModuleName, MangledModuleName, [CellGroup | CellGroups], !IO) :-
    mlds_output_vector_cell_group_decl(Opts, Indent,
        ModuleName, MangledModuleName, CellGroup, !IO),
    mlds_output_vector_cell_group_decls(Opts, Indent,
        ModuleName, MangledModuleName, CellGroups, !IO).

:- pred mlds_output_vector_cell_group_decl(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, string::in,
    pair(ml_vector_common_type_num, ml_vector_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_vector_cell_group_decl(Opts, Indent, ModuleName, MangledModuleName,
        TypeNum - CellGroup, !IO) :-
    TypeNum = ml_vector_common_type_num(TypeRawNum),
    CellGroup = ml_vector_cell_group(Type, ClassDefn, _FieldNames,
        _NextRow, Rows),
    mlds_output_defn(Opts, Indent, yes, ModuleName, ClassDefn, !IO),

    mlds_indent(Indent, !IO),
    io.write_string("\nstatic /* final */ const ", !IO),
    mlds_output_type_prefix(Opts, Type, !IO),
    NumRows = cord.length(Rows),
    io.format(" %s_vector_common_%d[%d]",
        [s(MangledModuleName), i(TypeRawNum), i(NumRows)], !IO),
    mlds_output_type_suffix(Opts, Type, no_size, !IO),
    io.write_string(";\n", !IO).

:- pred mlds_output_scalar_cell_group_defns(mlds_to_c_opts::in, indent::in,
    string::in,
    assoc_list(ml_scalar_common_type_num, ml_scalar_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_scalar_cell_group_defns(_Opts, _Indent, _MangledModuleName,
        [], !IO).
mlds_output_scalar_cell_group_defns(Opts, Indent, MangledModuleName,
        [CellGroup | CellGroups], !IO) :-
    mlds_output_scalar_cell_group_defn(Opts, Indent, MangledModuleName,
        CellGroup, !IO),
    mlds_output_scalar_cell_group_defns(Opts, Indent, MangledModuleName,
        CellGroups, !IO).

:- pred mlds_output_scalar_cell_group_defn(mlds_to_c_opts::in, indent::in,
    string::in, pair(ml_scalar_common_type_num, ml_scalar_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_scalar_cell_group_defn(Opts, Indent, MangledModuleName,
        TypeNum - CellGroup, !IO) :-
    TypeNum = ml_scalar_common_type_num(TypeRawNum),
    CellGroup = ml_scalar_cell_group(Type, InitArraySize,
        _Counter, _Members, RowCords),
    Rows = cord.list(RowCords),
    list.length(Rows, NumRows),
    mlds_indent(Indent, !IO),
    io.write_string("\nstatic /* final */ const ", !IO),
    mlds_output_scalar_cell_group_type_and_name(Opts, MangledModuleName,
        TypeRawNum, Type, InitArraySize, NumRows, !IO),
    io.write_string(" = {\n", !IO),
    list.foldl2(mlds_output_cell(Opts, Indent + 1), Rows, 0, _, !IO),
    io.write_string("};\n", !IO).

:- pred mlds_output_vector_cell_group_defns(mlds_to_c_opts::in, indent::in,
    string::in,
    assoc_list(ml_vector_common_type_num, ml_vector_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_vector_cell_group_defns(_Opts, _Indent, _MangledModuleName,
        [], !IO).
mlds_output_vector_cell_group_defns(Opts, Indent, MangledModuleName,
        [CellGroup | CellGroups], !IO) :-
    mlds_output_vector_cell_group_defn(Opts, Indent, MangledModuleName,
        CellGroup, !IO),
    mlds_output_vector_cell_group_defns(Opts, Indent, MangledModuleName,
        CellGroups, !IO).

:- pred mlds_output_vector_cell_group_defn(mlds_to_c_opts::in, indent::in,
    string::in, pair(ml_vector_common_type_num, ml_vector_cell_group)::in,
    io::di, io::uo) is det.

mlds_output_vector_cell_group_defn(Opts, Indent, MangledModuleName,
        TypeNum - CellGroup, !IO) :-
    TypeNum = ml_vector_common_type_num(TypeRawNum),
    CellGroup = ml_vector_cell_group(Type, _ClassDefn, _FieldNames,
        _NextRow, RowCords),
    Rows = cord.list(RowCords),
    list.length(Rows, NumRows),
    mlds_indent(Indent, !IO),
    io.write_string("\nstatic /* final */ const ", !IO),
    mlds_output_type_prefix(Opts, Type, !IO),
    io.format(" %s_vector_common_%d[%d]",
        [s(MangledModuleName), i(TypeRawNum), i(NumRows)], !IO),
    mlds_output_type_suffix(Opts, Type, no_size, !IO),
    io.write_string(" = {\n", !IO),
    list.foldl2(mlds_output_cell(Opts, Indent + 1), Rows, 0, _, !IO),
    io.write_string("};\n", !IO).

:- pred mlds_output_cell(mlds_to_c_opts::in, indent::in, mlds_initializer::in,
    int::in, int::out, io::di, io::uo) is det.

mlds_output_cell(Opts, Indent, Initializer, !RowNum, !IO) :-
    mlds_indent(Indent, !IO),
    io.write_string("/* row ", !IO),
    io.write_int(!.RowNum, !IO),
    io.write_string(" */\n", !IO),
    !:RowNum = !.RowNum + 1,
    mlds_output_initializer_body(Opts, Indent, Initializer, !IO),
    io.write_string(",\n", !IO).

:- pred mlds_output_alloc_site_decls(indent::in,
    assoc_list(mlds_alloc_id, ml_alloc_site_data)::in, io::di, io::uo) is det.

mlds_output_alloc_site_decls(Indent, AllocSites, !IO) :-
    (
        AllocSites = []
    ;
        AllocSites = [_ | _],
        list.length(AllocSites, NumAllocSites),
        mlds_indent(Indent, !IO),
        io.format("static MR_AllocSiteInfo MR_alloc_sites[%d];\n",
            [i(NumAllocSites)], !IO)
    ).

:- pred mlds_output_alloc_site_defns(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, assoc_list(mlds_alloc_id, ml_alloc_site_data)::in,
    io::di, io::uo) is det.

mlds_output_alloc_site_defns(Opts, Indent, MLDS_ModuleName, AllocSites, !IO) :-
    (
        AllocSites = []
    ;
        AllocSites = [_ | _],
        mlds_indent(Indent, !IO),
        list.length(AllocSites, NumAllocSites),
        io.format("static MR_AllocSiteInfo MR_alloc_sites[%d] = {\n",
            [i(NumAllocSites)], !IO),
        list.foldl(
            mlds_output_alloc_site_defn(Opts, Indent + 1, MLDS_ModuleName),
            AllocSites, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("};\n", !IO)
    ).

:- pred mlds_output_alloc_site_defn(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, pair(mlds_alloc_id, ml_alloc_site_data)::in,
    io::di, io::uo) is det.

mlds_output_alloc_site_defn(_Opts, Indent, MLDS_ModuleName,
        _AllocId - AllocData, !IO) :-
    AllocData = ml_alloc_site_data(ProcLabel, Context, Type, Size),
    QualProcLabel = qual(MLDS_ModuleName, module_qual, ProcLabel),
    term.context_file(Context, FileName),
    term.context_line(Context, LineNumber),
    mlds_indent(Indent, !IO),
    io.write_string("{ ", !IO),
    mlds_output_fully_qualified_name(QualProcLabel, !IO),
    io.write_string(", """, !IO),
    c_util.output_quoted_string(FileName, !IO),
    io.write_string(""", ", !IO),
    io.write_int(LineNumber, !IO),
    io.write_string(", """, !IO),
    c_util.output_quoted_string(Type, !IO),
    io.write_string(""", ", !IO),
    io.write_int(Size, !IO),
    io.write_string("},\n", !IO).

:- pred mlds_output_type_forward_decls(mlds_to_c_opts::in, indent::in,
    list(mlds_type)::in, io::di, io::uo) is det.

mlds_output_type_forward_decls(Opts, Indent, ParamTypes, !IO) :-
    % Output forward declarations for all struct types
    % that are contained in the parameter types.

    solutions.aggregate(mlds_type_list_contains_type(ParamTypes),
        mlds_output_type_forward_decl(Opts, Indent), !IO).

    % mlds_type_list_contains_type(Types, SubType):
    %
    % True iff the type SubType occurs (directly or indirectly) in the
    % specified list of Types.
    %
:- pred mlds_type_list_contains_type(list(mlds_type)::in, mlds_type::out)
    is nondet.

mlds_type_list_contains_type(Types, SubType) :-
    list.member(Type, Types),
    mlds_type_contains_type(Type, SubType).

    % mlds_type_contains_type(Type, SubType):
    %
    % True iff the type Type contains the type SubType.
    %
:- pred mlds_type_contains_type(mlds_type::in, mlds_type::out) is multi.

mlds_type_contains_type(Type, Type).
mlds_type_contains_type(mlds_mercury_array_type(Type), Type).
mlds_type_contains_type(mlds_array_type(Type), Type).
mlds_type_contains_type(mlds_ptr_type(Type), Type).
mlds_type_contains_type(mlds_func_type(Parameters), Type) :-
    Parameters = mlds_func_params(Arguments, RetTypes),
    ( list.member(mlds_argument(_Name, Type, _GCStatement), Arguments)
    ; list.member(Type, RetTypes)
    ).

:- pred mlds_output_type_forward_decl(mlds_to_c_opts::in, indent::in,
    mlds_type::in, io::di, io::uo) is det.

mlds_output_type_forward_decl(Opts, Indent, Type, !IO) :-
    (
        (
            Type = mlds_class_type(_Name, _Arity, Kind),
            Kind \= mlds_enum,
            ClassType = Type
        ;
            Type = mercury_type(MercuryType, ctor_cat_user(_), _),
            type_to_ctor(MercuryType, TypeCtor),
            ml_gen_type_name(TypeCtor, ClassName, ClassArity),
            ClassType = mlds_class_type(ClassName, ClassArity, mlds_class)
        )
    ->
        mlds_indent(Indent, !IO),
        mlds_output_type(Opts, ClassType, !IO),
        io.write_string(";\n", !IO)
    ;
        true
    ).

:- pred mlds_output_defn(mlds_to_c_opts::in, indent::in, bool::in,
    mlds_module_name::in, mlds_defn::in, io::di, io::uo) is det.

mlds_output_defn(Opts, Indent, Separate, ModuleName, Defn, !IO) :-
    Defn = mlds_defn(Name, Context, Flags, DefnBody),
    (
        ( DefnBody = mlds_function(_, _, _, _, _)
        ; DefnBody = mlds_class(_)
        ),
        io.nl(!IO)
    ;
        DefnBody = mlds_data(_, _, _),
        (
            Separate = yes,
            io.nl(!IO)
        ;
            Separate = no
        )
    ),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    mlds_output_decl_flags(Opts, Flags, definition, Name, DefnBody, !IO),
    mlds_output_defn_body(Opts, Indent, qual(ModuleName, module_qual, Name),
        Context, DefnBody, !IO).

:- pred mlds_output_decl_body(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_context::in, mlds_entity_defn::in,
    io::di, io::uo) is det.

mlds_output_decl_body(Opts, Indent, Name, Context, DefnBody, !IO) :-
    (
        DefnBody = mlds_data(Type, Initializer, _GCStatement),
        mlds_output_data_decl(Opts, Name, Type,
            get_initializer_array_size(Initializer), !IO)
    ;
        DefnBody = mlds_function(MaybePredProcId, Signature,
            _MaybeBody, _Attrs, _EnvVarNames),
        mlds_output_maybe(MaybePredProcId, mlds_output_pred_proc_id(Opts),
            !IO),
        mlds_output_func_decl(Opts, Indent, Name, Context, Signature, !IO)
    ;
        DefnBody = mlds_class(ClassDefn),
        mlds_output_class_decl(Indent, Name, ClassDefn, !IO)
    ),
    io.write_string(";\n", !IO).

:- pred mlds_output_defn_body(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_context::in, mlds_entity_defn::in,
    io::di, io::uo) is det.

mlds_output_defn_body(Opts, Indent, Name, Context, DefnBody, !IO) :-
    (
        DefnBody = mlds_data(Type, Initializer, GCStatement),
        mlds_output_data_defn(Opts, Name, Type, Initializer, !IO),
        mlds_output_gc_statement(Opts, Indent, Name, GCStatement, "", !IO)
    ;
        DefnBody = mlds_function(MaybePredProcId, Signature,
            MaybeBody, _Attributes, _EnvVarNames),
        mlds_output_maybe(MaybePredProcId, mlds_output_pred_proc_id(Opts),
            !IO),
        mlds_output_func(Opts, Indent, Name, Context, Signature, MaybeBody,
            !IO)
    ;
        DefnBody = mlds_class(ClassDefn),
        mlds_output_class(Opts, Indent, Name, Context, ClassDefn, !IO)
    ).

:- pred mlds_output_gc_statement(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_gc_statement::in,
    string::in, io::di, io::uo) is det.

mlds_output_gc_statement(Opts, Indent, Name, GCStatement, MaybeNewLine, !IO) :-
    (
        GCStatement = gc_no_stmt
    ;
        (
            GCStatement = gc_trace_code(Statement),
            Label = "#if 0 /* GC trace code */\n"
        ;
            GCStatement = gc_initialiser(Statement),
            Label = "#if 0 /* GC initialiser */\n"
        ),
        io.write_string(MaybeNewLine, !IO),
        io.write_string(Label, !IO),
        % XXX This value for FuncInfo is bogus. However, this output is only
        % for debugging anyway, so it doesn't really matter.
        FuncInfo = func_info(Name, mlds_func_signature([], [])),
        mlds_output_statement(Opts, Indent, FuncInfo, Statement, !IO),
        io.write_string("#endif\n", !IO)
    ).

%-----------------------------------------------------------------------------%
%
% Code to output type declarations/definitions
%

:- pred mlds_output_class_decl(indent::in, mlds_qualified_entity_name::in,
    mlds_class_defn::in, io::di, io::uo) is det.

mlds_output_class_decl(_Indent, Name, ClassDefn, !IO) :-
    ClassKind = ClassDefn ^ mcd_kind,
    (
        ClassKind = mlds_enum,
        io.write_string("enum ", !IO),
        mlds_output_fully_qualified_name(Name, !IO),
        io.write_string("_e", !IO)
    ;
        ( ClassKind = mlds_class
        ; ClassKind = mlds_package
        ; ClassKind = mlds_interface
        ; ClassKind = mlds_struct
        ),
        io.write_string("struct ", !IO),
        mlds_output_fully_qualified_name(Name, !IO),
        io.write_string("_s", !IO)
    ).

:- pred mlds_output_class(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_context::in, mlds_class_defn::in,
    io::di, io::uo) is det.

mlds_output_class(Opts, Indent, Name, Context, ClassDefn, !IO) :-
    % To avoid name clashes, we need to qualify the names of the member
    % constants with the class name. (In particular, this is needed for
    % enumeration constants and for the nested classes that we generate for
    % constructors of discriminated union types.) Here we compute the
    % appropriate qualifier.
    Name = qual(ModuleName, QualKind, UnqualName),
    (
        UnqualName = entity_type(ClassName, ClassArity),
        Target = Opts ^ m2co_target,
        ClassModuleName = mlds_append_class_qualifier(Target, ModuleName,
            QualKind, ClassName, ClassArity)
    ;
        ( UnqualName = entity_data(_)
        ; UnqualName = entity_function(_, _, _, _)
        ; UnqualName = entity_export(_)
        ),
        unexpected($module, $pred, "unexpected entity")
    ),

    % Hoist out static members, since plain old C doesn't support
    % static members in structs (except for enumeration constants).
    %
    % XXX this should be conditional: only when compiling to C,
    % not when compiling to C++

    ClassDefn = mlds_class_defn(Kind, _Imports, BaseClasses, _Implements,
        _TypeParams, Ctors, Members),

    AllMembers = Ctors ++ Members,

    (
        Kind = mlds_enum,
        StaticMembers = [],
        StructMembers = AllMembers
    ;
        ( Kind = mlds_class
        ; Kind = mlds_package
        ; Kind = mlds_interface
        ; Kind = mlds_struct
        ),
        list.filter(is_static_member, AllMembers,
            StaticMembers, NonStaticMembers),
        StructMembers = NonStaticMembers
    ),

    % Convert the base classes into member variables,
    % since plain old C doesn't support base classes.
    %
    % XXX this should be conditional: only when compiling to C,
    % not when compiling to C++

    list.map_foldl(mlds_make_base_class(Context), BaseClasses, BaseDefns,
        1, _),
    BasesAndMembers = BaseDefns ++ StructMembers,

    % Output the class declaration and the class members.
    % We treat enumerations specially.
    %
    % Note that standard ANSI/ISO C does not allow empty structs. We could
    % handle empty structs here, by adding a dummy member, but that would
    % waste a lot of space, and would also cause incompatibilities between
    % the data layout for --high-level-data and --no-high-level-data.
    % So instead, we make it is the responsibility of the MLDS code generator
    % to not generate any. (E.g. ml_type_gen.m checks whether
    % `target_uses_empty_base_classes' before generating empty structs.)
    % Hence we don't need to check for empty structs here.

    mlds_output_class_decl(Indent, Name, ClassDefn, !IO),
    io.write_string(" {\n", !IO),
    (
        Kind = mlds_enum,
        mlds_output_enum_constants(Opts, Indent + 1, ClassModuleName,
            BasesAndMembers, !IO)
    ;
        ( Kind = mlds_class
        ; Kind = mlds_package
        ; Kind = mlds_interface
        ; Kind = mlds_struct
        ),
        mlds_output_defns(Opts, Indent + 1, no, ClassModuleName,
            BasesAndMembers, !IO)
    ),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    io.write_string("};\n", !IO),
    mlds_output_defns(Opts, Indent, yes, ClassModuleName, StaticMembers, !IO).

:- pred is_static_member(mlds_defn::in) is semidet.

is_static_member(Defn) :-
    Defn = mlds_defn(Name, _, Flags, _),
    ( Name = entity_type(_, _)
    ; per_instance(Flags) = one_copy
    ).

    % Convert a base class class_id into a member variable
    % that holds the value of the base class.
    %
:- pred mlds_make_base_class(mlds_context::in, mlds_class_id::in,
    mlds_defn::out, int::in, int::out) is det.

mlds_make_base_class(Context, ClassId, MLDS_Defn, BaseNum0, BaseNum) :-
    BaseName = "base_" ++ string.int_to_string(BaseNum0),
    BaseVarName = mlds_var_name(BaseName, no),
    Type = ClassId,
    % We only need GC tracing code for top-level variables,
    % not for base classes.
    GCStatement = gc_no_stmt,
    MLDS_Defn = mlds_defn(entity_data(mlds_data_var(BaseVarName)), Context,
        ml_gen_public_field_decl_flags,
        mlds_data(Type, no_initializer, GCStatement)),
    BaseNum = BaseNum0 + 1.

    % Output the definitions of the enumeration constants
    % for an enumeration type.
    %
:- pred mlds_output_enum_constants(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, list(mlds_defn)::in, io::di, io::uo) is det.

mlds_output_enum_constants(Opts, Indent, EnumModuleName, Members, !IO) :-
    % Select the enumeration constants from the list of members
    % for this enumeration type, and output them.
    EnumConsts = list.filter(is_enum_const, Members),
    io.write_list(EnumConsts, ",\n",
        mlds_output_enum_constant(Opts, Indent, EnumModuleName), !IO),
    io.nl(!IO).

    % Test whether one of the members of an mlds_enum class
    % is an enumeration constant.
    %
:- pred is_enum_const(mlds_defn::in) is semidet.

is_enum_const(Defn) :-
    Defn = mlds_defn(_Name, _Context, Flags, _DefnBody),
    constness(Flags) = const.

    % Output the definition of a single enumeration constant.
    %
:- pred mlds_output_enum_constant(mlds_to_c_opts::in, indent::in,
    mlds_module_name::in, mlds_defn::in, io::di, io::uo) is det.

mlds_output_enum_constant(Opts, Indent, EnumModuleName, Defn, !IO) :-
    Defn = mlds_defn(Name, Context, _Flags, DefnBody),
    (
        DefnBody = mlds_data(Type, Initializer, _GCStatement),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        mlds_output_fully_qualified_name(
            qual(EnumModuleName, type_qual, Name), !IO),
        mlds_output_initializer(Opts, Type, Initializer, !IO)
    ;
        ( DefnBody = mlds_function(_, _, _, _, _)
        ; DefnBody = mlds_class(_)
        ),
        unexpected($module, $pred, "constant is not data")
    ).

%-----------------------------------------------------------------------------%
%
% Code to output data declarations/definitions.
%

:- pred mlds_output_data_decl(mlds_to_c_opts::in,
    mlds_qualified_entity_name::in, mlds_type::in, initializer_array_size::in,
    io::di, io::uo) is det.

mlds_output_data_decl(Opts, Name, Type, InitializerSize, !IO) :-
    mlds_output_data_decl_ho(Opts, mlds_output_type_prefix,
        mlds_output_data_decl_2(InitializerSize), Name, Type, !IO).

:- pred mlds_output_data_decl_2(initializer_array_size::in, mlds_to_c_opts::in,
    mlds_type::in, io::di, io::uo) is det.

mlds_output_data_decl_2(InitializerSize, Opts, Type, !IO) :-
    mlds_output_type_suffix(Opts, Type, InitializerSize, !IO).

:- pred mlds_output_data_decl_ho(mlds_to_c_opts::in,
    output_type::in(output_type), output_type::in(output_type),
    mlds_qualified_entity_name::in, mlds_type::in, io::di, io::uo) is det.

mlds_output_data_decl_ho(Opts, OutputPrefix, OutputSuffix, Name, Type, !IO) :-
    OutputPrefix(Opts, Type, !IO),
    io.write_char(' ', !IO),
    mlds_output_fully_qualified_name(Name, !IO),
    OutputSuffix(Opts, Type, !IO).

:- pred mlds_output_data_defn(mlds_to_c_opts::in,
    mlds_qualified_entity_name::in, mlds_type::in, mlds_initializer::in,
    io::di, io::uo) is det.

mlds_output_data_defn(Opts, Name, Type, Initializer, !IO) :-
    mlds_output_data_decl(Opts, Name, Type,
        get_initializer_array_size(Initializer), !IO),
    mlds_output_initializer(Opts, Type, Initializer, !IO),
    io.write_string(";\n", !IO).

:- pred mlds_output_maybe(maybe(T)::in,
    pred(T, io, io)::in(pred(in, di, uo) is det), io::di, io::uo) is det.

mlds_output_maybe(MaybeValue, OutputAction, !IO) :-
    (
        MaybeValue = yes(Value),
        OutputAction(Value, !IO)
    ;
        MaybeValue = no
    ).

:- pred mlds_output_initializer(mlds_to_c_opts::in, mlds_type::in,
    mlds_initializer::in, io::di, io::uo) is det.

mlds_output_initializer(Opts, _Type, Initializer, !IO) :-
    NeedsInit = mlds_needs_initialization(Initializer),
    (
        NeedsInit = yes,
        io.write_string(" = ", !IO),
        mlds_output_initializer_body(Opts, 0, Initializer, !IO)
    ;
        NeedsInit = no
    ).

:- func mlds_needs_initialization(mlds_initializer) = bool.

mlds_needs_initialization(no_initializer) = no.
mlds_needs_initialization(init_obj(_)) = yes.
mlds_needs_initialization(init_struct(_Type, [])) = no.
mlds_needs_initialization(init_struct(_Type, [_|_])) = yes.
mlds_needs_initialization(init_array(_)) = yes.

:- pred mlds_output_initializer_body(mlds_to_c_opts::in, int::in,
    mlds_initializer::in, io::di, io::uo) is det.

mlds_output_initializer_body(Opts, Indent, Initializer, !IO) :-
    (
        Initializer = no_initializer
    ;
        Initializer = init_obj(Rval),
        mlds_indent(Indent, !IO),
        mlds_output_rval(Opts, Rval, !IO)
    ;
        Initializer = init_struct(_Type, FieldInitializers),
        % Note that standard ANSI/ISO C does not allow empty structs. But it is
        % the responsibility of the MLDS code generator to not generate any.
        % So we don't need to handle empty initializers specially here.
        mlds_indent(Indent, !IO),
        io.write_string("{\n", !IO),
        io.write_list(FieldInitializers, ",\n",
            mlds_output_initializer_body(Opts, Indent + 1), !IO),
        io.write_string("\n", !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}", !IO)
    ;
        Initializer = init_array(ElementInitializers),
        % Standard ANSI/ISO C does not allow empty arrays. But the MLDS does.
        % To keep the C compiler happy, we therefore convert zero-element MLDS
        % arrays into one-element C arrays. (The extra element is a minor waste
        % of space, but it will otherwise be ignored.) So if the initializer
        % list here is empty, we need to output a single initializer.
        % We can initialize the extra element with any value. We use "0",
        % since that is a valid initializer for any type.
        (
            ElementInitializers = [],
            mlds_indent(Indent, !IO),
            io.write_string("{ 0 }\n", !IO)
        ;
            ElementInitializers = [_ | _],
            mlds_indent(Indent, !IO),
            io.write_string("{\n", !IO),
            io.write_list(ElementInitializers, ",\n",
                mlds_output_initializer_body(Opts, Indent + 1), !IO),
            io.write_string("\n", !IO),
            mlds_indent(Indent, !IO),
            io.write_string("}", !IO)
        )
    ).

%-----------------------------------------------------------------------------%
%
% Code to output function declarations/definitions
%

:- pred mlds_output_pred_proc_id(mlds_to_c_opts::in, pred_proc_id::in,
    io::di, io::uo) is det.

mlds_output_pred_proc_id(Opts, proc(PredId, ProcId), !IO) :-
    Comments = Opts ^ m2co_auto_comments,
    (
        Comments = yes,
        io.write_string("/* pred_id: ", !IO),
        pred_id_to_int(PredId, PredIdNum),
        io.write_int(PredIdNum, !IO),
        io.write_string(", proc_id: ", !IO),
        proc_id_to_int(ProcId, ProcIdNum),
        io.write_int(ProcIdNum, !IO),
        io.write_string(" */\n", !IO)
    ;
        Comments = no
    ).

:- pred mlds_output_func(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_context::in,
    mlds_func_params::in, mlds_function_body::in, io::di, io::uo) is det.

mlds_output_func(Opts, Indent, Name, Context, Params, FunctionBody, !IO) :-
    mlds_output_func_decl(Opts, Indent, Name, Context, Params, !IO),
    (
        FunctionBody = body_external,
        io.write_string(";\n", !IO)
    ;
        FunctionBody = body_defined_here(Body),
        io.write_string("\n", !IO),

        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("{\n", !IO),

        mlds_maybe_output_time_profile_instr(Opts, Context, Indent + 1, Name,
            !IO),

        Signature = mlds_get_func_signature(Params),
        FuncInfo = func_info(Name, Signature),
        mlds_output_statement(Opts, Indent + 1, FuncInfo, Body, !IO),

        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO)    % end the function
    ).

:- pred mlds_output_func_decl(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_context::in, mlds_func_params::in,
    io::di, io::uo) is det.

mlds_output_func_decl(Opts, Indent, QualifiedName, Context, Signature, !IO) :-
    CallingConvention = "MR_CALL ",
    mlds_output_func_decl_ho(Opts, Indent, QualifiedName, Context,
        CallingConvention, Signature,
        mlds_output_type_prefix, mlds_output_type_suffix_no_size, !IO).

:- pred mlds_output_func_decl_ho(mlds_to_c_opts::in, indent::in,
    mlds_qualified_entity_name::in, mlds_context::in, string::in,
    mlds_func_params::in,
    output_type::in(output_type), output_type::in(output_type),
    io::di, io::uo) is det.

mlds_output_func_decl_ho(Opts, Indent, QualifiedName, Context,
        CallingConvention, Signature, OutputPrefix, OutputSuffix, !IO) :-
    Signature = mlds_func_params(Parameters0, RetTypes),
    (
        RetTypes = [],
        io.write_string("void", !IO)
    ;
        RetTypes = [RetType],
        OutputPrefix(Opts, RetType, !IO)
    ;
        RetTypes = [_, _ | _],
        mlds_output_return_list(RetTypes,
            mlds_output_prefix_suffix(Opts, OutputPrefix, OutputSuffix), !IO)
    ),
    io.write_char(' ', !IO),
    io.write_string(CallingConvention, !IO),
    io.nl(!IO),
    mlds_output_fully_qualified_name(QualifiedName, !IO),
    QualifiedName = qual(ModuleName, _, _),
    StdDecl = Opts ^ m2co_std_func_decl,
    (
        StdDecl = no,
        Parameters = Parameters0
    ;
        StdDecl = yes,
        list.map_foldl(standardize_param_names, Parameters0, Parameters, 1, _)
    ),
    mlds_output_params(Opts, OutputPrefix, OutputSuffix, Indent,
        ModuleName, Context, Parameters, !IO),
    (
        RetTypes = [RetType2],
        OutputSuffix(Opts, RetType2, !IO)
    ;
        RetTypes = []
    ;
        RetTypes = [_, _ | _]
    ).

:- pred standardize_param_names(mlds_argument::in, mlds_argument::out,
    int::in, int::out) is det.

standardize_param_names(!Argument, !ArgNum) :-
    !.Argument = mlds_argument(EntityName0, Type, GCStmt),
    (
        EntityName0 = entity_data(DataName0),
        (
            DataName0 = mlds_data_var(VarName0),
            VarName0 = mlds_var_name(_Name, _MaybeNum),
            Name = "param",
            MaybeNum = yes(!.ArgNum),
            VarName = mlds_var_name(Name, MaybeNum),
            DataName = mlds_data_var(VarName)
        ;
            ( DataName0 = mlds_scalar_common_ref(_)
            ; DataName0 = mlds_rtti(_)
            ; DataName0 = mlds_module_layout
            ; DataName0 = mlds_proc_layout(_)
            ; DataName0 = mlds_internal_layout(_, _)
            ; DataName0 = mlds_tabling_ref(_, _)
            ),
            unexpected($module, $pred, "unexpected data name")
        ),
        EntityName = entity_data(DataName)
    ;
        ( EntityName0 = entity_type(_, _)
        ; EntityName0 = entity_function(_, _, _, _)
        ; EntityName0 = entity_export(_)
        ),
        unexpected($module, $pred, "unexpected entity name")
    ),
    !:Argument = mlds_argument(EntityName, Type, GCStmt),
    !:ArgNum = !.ArgNum + 1.

:- pred mlds_output_prefix_suffix(mlds_to_c_opts::in,
    output_type::in(output_type), output_type::in(output_type), mlds_type::in,
    io::di, io::uo) is det.

mlds_output_prefix_suffix(Opts, OutputPrefix, OutputSuffix, Value, !IO) :-
    OutputPrefix(Opts, Value, !IO),
    OutputSuffix(Opts, Value, !IO).

:- pred mlds_output_params(mlds_to_c_opts::in, output_type::in(output_type),
    output_type::in(output_type), indent::in, mlds_module_name::in,
    mlds_context::in, mlds_arguments::in, io::di, io::uo) is det.

mlds_output_params(Opts, OutputPrefix, OutputSuffix, Indent, ModuleName,
        Context, Parameters, !IO) :-
    io.write_char('(', !IO),
    (
        Parameters = [],
        io.write_string("void", !IO)
    ;
        Parameters = [_ | _],
        io.nl(!IO),
        io.write_list(Parameters, ",\n",
            mlds_output_param(Opts, OutputPrefix, OutputSuffix,
                Indent + 1, ModuleName, Context),
            !IO)
    ),
    io.write_char(')', !IO).

:- pred mlds_output_param(mlds_to_c_opts::in, output_type::in(output_type),
    output_type::in(output_type), indent::in, mlds_module_name::in,
    mlds_context::in, mlds_argument::in, io::di, io::uo) is det.

mlds_output_param(Opts, OutputPrefix, OutputSuffix, Indent, ModuleName,
        Context, Arg, !IO) :-
    Arg = mlds_argument(Name, Type, GCStatement),
    QualName = qual(ModuleName, module_qual, Name),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    mlds_output_data_decl_ho(Opts, OutputPrefix, OutputSuffix, QualName, Type,
        !IO),
    mlds_output_gc_statement(Opts, Indent, QualName, GCStatement, "\n", !IO).

:- pred mlds_output_func_type_prefix(mlds_to_c_opts::in, mlds_func_params::in,
    io::di, io::uo) is det.

mlds_output_func_type_prefix(Opts, Params, !IO) :-
    Params = mlds_func_params(_Parameters, RetTypes),
    (
        RetTypes = [],
        io.write_string("void", !IO)
    ;
        RetTypes = [RetType],
        mlds_output_type(Opts, RetType, !IO)
    ;
        RetTypes = [_, _ | _],
        mlds_output_return_list(RetTypes, mlds_output_type(Opts), !IO)
    ),
    % Note that mlds_func_type actually corresponds to a function _pointer_
    % type in C. This is necessary because function types in C are not first
    % class.
    io.write_string(" MR_CALL (*", !IO).

:- pred mlds_output_func_type_suffix(mlds_to_c_opts::in, mlds_func_params::in,
    io::di, io::uo) is det.

mlds_output_func_type_suffix(Opts, Params, !IO) :-
    Params = mlds_func_params(Parameters, _RetTypes),
    io.write_string(")", !IO),
    mlds_output_param_types(Opts, Parameters, !IO).

:- pred mlds_output_param_types(mlds_to_c_opts::in, mlds_arguments::in,
    io::di, io::uo) is det.

mlds_output_param_types(Opts, Parameters, !IO) :-
    io.write_char('(', !IO),
    (
        Parameters = [],
        io.write_string("void", !IO)
    ;
        Parameters = [_ | _],
        io.write_list(Parameters, ", ", mlds_output_param_type(Opts), !IO)
    ),
    io.write_char(')', !IO).

:- pred mlds_output_param_type(mlds_to_c_opts::in, mlds_argument::in,
    io::di, io::uo) is det.

mlds_output_param_type(Opts, Arg, !IO) :-
    Arg = mlds_argument(_Name, Type, _GCStatement),
    mlds_output_type(Opts, Type, !IO).

%-----------------------------------------------------------------------------%
%
% Code to output names of various entities.
%

:- pred mlds_output_fully_qualified_name(mlds_qualified_entity_name::in,
    io::di, io::uo) is det.

mlds_output_fully_qualified_name(QualifiedName, !IO) :-
    QualifiedName = qual(_ModuleName, _QualKind, Name),
    (
        (
            % Don't module-qualify main/2.
            Name = entity_function(PredLabel, _, _, _),
            PredLabel = mlds_user_pred_label(pf_predicate, no, "main", 2,
                model_det, no)
        ;
            Name = entity_data(mlds_rtti(RttiId)),
            module_qualify_name_of_rtti_id(RttiId) = no
        ;
            % We don't module qualify pragma foreign_export names.
            Name = entity_export(_)
        )
    ->
        mlds_output_name(Name, !IO)
    ;
        mlds_output_fully_qualified(QualifiedName, mlds_output_name, !IO)
    ).

:- pred mlds_output_fully_qualified_proc_label(mlds_qualified_proc_label::in,
    io::di, io::uo) is det.

mlds_output_fully_qualified_proc_label(QualifiedName, !IO) :-
    (
        % Don't module-qualify main/2.
        QualifiedName = qual(_ModuleName, _QualKind, Name),
        Name = mlds_proc_label(PredLabel, _ProcId),
        PredLabel = mlds_user_pred_label(pf_predicate, no, "main", 2,
            model_det, no)
    ->
        mlds_output_proc_label(Name, !IO)
    ;
        mlds_output_fully_qualified(QualifiedName, mlds_output_proc_label, !IO)
    ).

:- pred mlds_output_fully_qualified(mlds_fully_qualified_name(T)::in,
    pred(T, io, io)::in(pred(in, di, uo) is det), io::di, io::uo) is det.

mlds_output_fully_qualified(QualName, OutputFunc, !IO) :-
    QualName = qual(ModuleName, _QualKind, Name),
    SymName = mlds_module_name_to_sym_name(ModuleName),
    MangledModuleName = sym_name_mangle(SymName),
    io.write_string(MangledModuleName, !IO),
    io.write_string("__", !IO),
    OutputFunc(Name, !IO).

:- pred mlds_output_module_name(mercury_module_name::in, io::di, io::uo)
    is det.

mlds_output_module_name(ModuleName, !IO) :-
    MangledModuleName = sym_name_mangle(ModuleName),
    io.write_string(MangledModuleName, !IO).

:- pred mlds_output_name(mlds_entity_name::in, io::di, io::uo) is det.

    % XXX We should avoid appending the arity, modenum, and seqnum
    % if they are not needed.
mlds_output_name(EntityName, !IO) :-
    (
        EntityName = entity_type(Name, Arity),
        MangledName = name_mangle(Name),
        io.write_string(MangledName, !IO),
        io.write_char('_', !IO),
        io.write_int(Arity, !IO)
    ;
        EntityName = entity_data(DataName),
        mlds_output_data_name(DataName, !IO)
    ;
        EntityName = entity_function(PredLabel, ProcId, MaybeSeqNum, _PredId),
        mlds_output_pred_label(PredLabel, !IO),
        proc_id_to_int(ProcId, ModeNum),
        io.write_char('_', !IO),
        io.write_int(ModeNum, !IO),
        (
            MaybeSeqNum = yes(SeqNum),
            io.write_char('_', !IO),
            io.write_int(SeqNum, !IO)
        ;
            MaybeSeqNum = no
        )
    ;
        EntityName = entity_export(Name),
        io.write_string(Name, !IO)
    ).

    % mlds_output_pred_label should be kept in sync with
    % mlds_pred_label_to_string.
    %
:- pred mlds_output_pred_label(mlds_pred_label::in, io::di, io::uo) is det.

mlds_output_pred_label(PredLabel, !IO) :-
    (
        PredLabel = mlds_user_pred_label(PredOrFunc, MaybeDefiningModule,
            Name, PredArity, _CodeModel, _NonOutputFunc),
        (
            PredOrFunc = pf_predicate,
            Suffix = "p",
            OrigArity = PredArity
        ;
            PredOrFunc = pf_function,
            Suffix = "f",
            OrigArity = PredArity - 1
        ),
        MangledName = name_mangle(Name),
        io.write_string(MangledName, !IO),
        io.write_char('_', !IO),
        io.write_int(OrigArity, !IO),
        io.write_char('_', !IO),
        io.write_string(Suffix, !IO),
        (
            MaybeDefiningModule = yes(DefiningModule),
            io.write_string("_in__", !IO),
            mlds_output_module_name(DefiningModule, !IO)
        ;
            MaybeDefiningModule = no
        )
    ;
        PredLabel = mlds_special_pred_label(PredName, MaybeTypeModule,
            TypeName, TypeArity),
        MangledPredName = name_mangle(PredName),
        MangledTypeName = name_mangle(TypeName),
        io.write_string(MangledPredName, !IO),
        io.write_string("__", !IO),
        (
            MaybeTypeModule = yes(TypeModule),
            mlds_output_module_name(TypeModule, !IO),
            io.write_string("__", !IO)
        ;
            MaybeTypeModule = no
        ),
        io.write_string(MangledTypeName, !IO),
        io.write_string("_", !IO),
        io.write_int(TypeArity, !IO)
    ).

    % mlds_pred_label_to_string should be kept in sync with
    % mlds_output_pred_label.
    %
:- func mlds_pred_label_to_string(mlds_pred_label) = string.

mlds_pred_label_to_string(PredLabel) = Str :-
    (
        PredLabel = mlds_user_pred_label(PredOrFunc, MaybeDefiningModule,
            Name, PredArity, _CodeModel, _NonOutputFunc),
        (
            PredOrFunc = pf_predicate,
            Suffix = "p",
            OrigArity = PredArity
        ;
            PredOrFunc = pf_function,
            Suffix = "f",
            OrigArity = PredArity - 1
        ),
        MangledName = name_mangle(Name),
        MainStr = MangledName ++ "_" ++ string.int_to_string(OrigArity)
            ++ "_" ++ Suffix,
        (
            MaybeDefiningModule = yes(DefiningModule),
            Str = MainStr ++ "_in__" ++ sym_name_mangle(DefiningModule)
        ;
            MaybeDefiningModule = no,
            Str = MainStr
        )
    ;
        PredLabel = mlds_special_pred_label(PredName, MaybeTypeModule,
            TypeName, TypeArity),
        MangledPredName = name_mangle(PredName),
        MangledTypeName = name_mangle(TypeName),
        PrefixStr = MangledPredName ++ "__",
        (
            MaybeTypeModule = yes(TypeModule),
            MidStr = sym_name_mangle(TypeModule) ++ "__"
        ;
            MaybeTypeModule = no,
            MidStr = ""
        ),
        Str = PrefixStr ++ MidStr ++ MangledTypeName ++ "_" ++
            int_to_string(TypeArity)
    ).

:- pred mlds_output_data_name(mlds_data_name::in, io::di, io::uo) is det.

mlds_output_data_name(DataName, !IO) :-
    (
        DataName = mlds_data_var(Name),
        mlds_output_mangled_name(ml_var_name_to_string(Name), !IO)
    ;
        DataName = mlds_scalar_common_ref(Common),
        Common = ml_scalar_common(ModuleName, _Type,
            ml_scalar_common_type_num(TypeNum), RowNum),
        ModuleSymName = mlds_module_name_to_sym_name(ModuleName),
        MangledModuleName = sym_name_mangle(ModuleSymName),
        io.write_string(MangledModuleName, !IO),
        io.write_string("_scalar_common_", !IO),
        io.write_int(TypeNum, !IO),
        io.write_string("[", !IO),
        io.write_int(RowNum, !IO),
        io.write_string("]", !IO)
    ;
        DataName = mlds_rtti(RttiId),
        rtti.id_to_c_identifier(RttiId, RttiAddrName),
        io.write_string(RttiAddrName, !IO)
    ;
        DataName = mlds_module_layout,
        sorry($module, $pred, "NYI: module_layout")
    ;
        DataName = mlds_proc_layout(_ProcLabel),
        sorry($module, $pred, "NYI: proc_layout")
    ;
        DataName = mlds_internal_layout(_ProcLabel, _FuncSeqNum),
        sorry($module, $pred, "NYI: internal_layout")
    ;
        DataName = mlds_tabling_ref(ProcLabel, Id),
        io.write_string(mlds_tabling_data_name(ProcLabel, Id), !IO)
    ).

mlds_tabling_data_name(ProcLabel, Id) =
    tabling_info_id_str(Id) ++ "_for_" ++
        mlds_proc_label_to_string(mlds_std_tabling_proc_label(ProcLabel)).

%-----------------------------------------------------------------------------%
%
% Code to output types.
%

:- pred mlds_output_type(mlds_to_c_opts::in, mlds_type::in, io::di, io::uo)
    is det.

mlds_output_type(Opts, Type, !IO) :-
    % Because of the joys of C syntax, the code for outputting types
    % needs to be split into two parts; first the prefix, i.e. the part
    % of the type name that goes before the variable name in a variable
    % declaration, and then the suffix, i.e. the part which goes after
    % the variable name, e.g. the "[]" for array types.
    %
    % In the declaration of a type, as opposed to the declaration of a
    % variable, the variable name is not there, so we have just the prefix and
    % the suffix.

    mlds_output_type_prefix(Opts, Type, !IO),
    mlds_output_type_suffix(Opts, Type, no_size, !IO).

:- pred mlds_output_type_prefix(mlds_to_c_opts::in, mlds_type::in,
    io::di, io::uo) is det.

mlds_output_type_prefix(Opts, MLDS_Type, !IO) :-
    (
        MLDS_Type = mercury_type(Type, TypeCategory, _),
        mlds_output_mercury_type_prefix(Opts, Type, TypeCategory, !IO)
    ;
        MLDS_Type = mlds_mercury_array_type(_ElemType),
        HighLevelData = Opts ^ m2co_highlevel_data,
        (
            HighLevelData = yes,
            mlds_output_mercury_user_type_name(Opts,
                type_ctor(qualified(unqualified("array"), "array"), 1),
                ctor_cat_user(cat_user_general), !IO)
        ;
            HighLevelData = no,
            io.write_string("MR_ArrayPtr", !IO)
        )
    ;
        MLDS_Type = mlds_native_int_type,
        io.write_string("MR_Integer", !IO)
    ;
        MLDS_Type = mlds_native_float_type,
        io.write_string("MR_Float", !IO)
    ;
        MLDS_Type = mlds_native_bool_type,
        io.write_string("MR_bool", !IO)
    ;
        MLDS_Type = mlds_native_char_type,
        io.write_string("MR_Char", !IO)
    ;
        MLDS_Type = mlds_foreign_type(_ForeignType),
        % For binary compatibility with the --target asm back-end,
        % we need to output these as a generic type, rather than making
        % use of the C type name
        % XXX target asm no longer exists, so no longer need to do this.
        io.write_string("MR_Box", !IO)
    ;
        MLDS_Type = mlds_class_type(Name, Arity, ClassKind),
        (
            ClassKind = mlds_enum,
            % We can't just use the enumeration type, since the enumeration
            % type's definition is not guaranteed to be in scope at this point.
            % (Fixing that would be somewhat complicated; it would require
            % writing enum definitions to a separate header file.) Also
            % the enumeration might not be word-sized, which would cause
            % problems for e.g. `std_util.arg/2'. So we just use `MR_Integer',
            % and output the actual enumeration type as a comment.
            io.write_string("MR_Integer /* actually `enum ", !IO),
            mlds_output_fully_qualified(Name, mlds_output_mangled_name, !IO),
            io.write_char('_', !IO),
            io.write_int(Arity, !IO),
            io.write_string("_e' */", !IO)
        ;
            ( ClassKind = mlds_class
            ; ClassKind = mlds_package
            ; ClassKind = mlds_interface
            ; ClassKind = mlds_struct
            ),
            % For struct types it's OK to output an incomplete type, since
            % don't use these types directly, we only use pointers to them.
            io.write_string("struct ", !IO),
            mlds_output_fully_qualified(Name, mlds_output_mangled_name, !IO),
            io.write_char('_', !IO),
            io.write_int(Arity, !IO),
            io.write_string("_s", !IO)
        )
    ;
        MLDS_Type = mlds_ptr_type(Type),
        mlds_output_type(Opts, Type, !IO),
        io.write_string(" *", !IO)
    ;
        MLDS_Type = mlds_array_type(Type),
        % Here we just output the element type. The "[]" goes in the type
        % suffix.
        mlds_output_type(Opts, Type, !IO)
    ;
        MLDS_Type = mlds_mostly_generic_array_type(_),
        Type = mlds_generic_type,
        mlds_output_type(Opts, Type, !IO)
    ;
        MLDS_Type = mlds_func_type(FuncParams),
        mlds_output_func_type_prefix(Opts, FuncParams, !IO)
    ;
        MLDS_Type = mlds_generic_type,
        io.write_string("MR_Box", !IO)
    ;
        MLDS_Type = mlds_generic_env_ptr_type,
        io.write_string("void *", !IO)
    ;
        MLDS_Type = mlds_type_info_type,
        io.write_string("MR_TypeInfo", !IO)
    ;
        MLDS_Type = mlds_pseudo_type_info_type,
        io.write_string("MR_PseudoTypeInfo", !IO)
    ;
        MLDS_Type = mlds_cont_type(ArgTypes),
        (
            ArgTypes = [],
            GCC_NestedFuncs = Opts ^ m2co_gcc_nested_functions,
            (
                GCC_NestedFuncs = yes,
                io.write_string("MR_NestedCont", !IO)
            ;
                GCC_NestedFuncs = no,
                io.write_string("MR_Cont", !IO)
            )
        ;
            ArgTypes = [_ | _],
            % This case only happens for --nondet-copy-out
            io.write_string("void MR_CALL (*", !IO)
        )
    ;
        MLDS_Type = mlds_commit_type,
        GCC_LocalLabels = Opts ^ m2co_gcc_local_labels,
        (
            GCC_LocalLabels = yes,
            io.write_string("__label__", !IO)
        ;
            GCC_LocalLabels = no,
            io.write_string("jmp_buf", !IO)
        )
    ;
        MLDS_Type = mlds_rtti_type(RttiIdMaybeElement),
        rtti_id_maybe_element_c_type(RttiIdMaybeElement, CType, _IsArray),
        io.write_string(CType, !IO)
    ;
        MLDS_Type = mlds_tabling_type(TablingId),
        tabling_id_c_type(TablingId, CType, _IsArray),
        io.write_string(CType, !IO)
    ;
        MLDS_Type = mlds_unknown_type,
        unexpected($module, $pred, "prefix has unknown type")
    ).

:- pred mlds_output_mercury_type_prefix(mlds_to_c_opts::in, mer_type::in,
    type_ctor_category::in, io::di, io::uo) is det.

mlds_output_mercury_type_prefix(Opts, Type, CtorCat, !IO) :-
    (
        CtorCat = ctor_cat_builtin(cat_builtin_char),
        io.write_string("MR_Char", !IO)
    ;
        CtorCat = ctor_cat_builtin(cat_builtin_int),
        io.write_string("MR_Integer", !IO)
    ;
        CtorCat = ctor_cat_builtin(cat_builtin_string),
        io.write_string("MR_String", !IO)
    ;
        CtorCat = ctor_cat_builtin(cat_builtin_float),
        io.write_string("MR_Float", !IO)
    ;
        CtorCat = ctor_cat_void,
        io.write_string("MR_Word", !IO)
    ;
        CtorCat = ctor_cat_variable,
        io.write_string("MR_Box", !IO)
    ;
        CtorCat = ctor_cat_tuple,
        io.write_string("MR_Tuple", !IO)
    ;
        CtorCat = ctor_cat_higher_order,
        HighLevelData = Opts ^ m2co_highlevel_data,
        (
            HighLevelData = yes,
            io.write_string("MR_ClosurePtr", !IO)
        ;
            HighLevelData = no,
            io.write_string("MR_Word", !IO)
        )
    ;
        % runtime/mercury_hlc_types requires typeinfos, typeclass_infos etc
        % to be treated as user defined types.
        ( CtorCat = ctor_cat_builtin_dummy
        ; CtorCat = ctor_cat_enum(_)
        ; CtorCat = ctor_cat_user(_)
        ; CtorCat = ctor_cat_system(_)
        ),
        mlds_output_mercury_user_type_prefix(Opts, Type, CtorCat, !IO)
    ).

:- pred mlds_output_mercury_user_type_prefix(mlds_to_c_opts::in, mer_type::in,
    type_ctor_category::in, io::di, io::uo) is det.

mlds_output_mercury_user_type_prefix(Opts, Type, CtorCat, !IO) :-
    HighLevelData = Opts ^ m2co_highlevel_data,
    (
        HighLevelData = yes,
        type_to_ctor_det(Type, TypeCtor),
        mlds_output_mercury_user_type_name(Opts, TypeCtor, CtorCat, !IO)
    ;
        HighLevelData = no,
        % In this case, we just treat everything as `MR_Word'.
        io.write_string("MR_Word", !IO)
    ).

:- pred mlds_output_mercury_user_type_name(mlds_to_c_opts::in, type_ctor::in,
    type_ctor_category::in, io::di, io::uo) is det.

mlds_output_mercury_user_type_name(Opts, TypeCtor, CtorCat, !IO) :-
    ml_gen_type_name(TypeCtor, ClassName, ClassArity),
    (
        CtorCat = ctor_cat_enum(_),
        MLDS_Type = mlds_class_type(ClassName, ClassArity, mlds_enum)
    ;
        ( CtorCat = ctor_cat_builtin(_)
        ; CtorCat = ctor_cat_higher_order
        ; CtorCat = ctor_cat_tuple
        ; CtorCat = ctor_cat_builtin_dummy
        ; CtorCat = ctor_cat_variable
        ; CtorCat = ctor_cat_void
        ; CtorCat = ctor_cat_system(_)
        ; CtorCat = ctor_cat_user(_)
        ),
        ClassType = mlds_class_type(ClassName, ClassArity, mlds_class),
        MLDS_Type = mlds_ptr_type(ClassType)
    ),
    mlds_output_type_prefix(Opts, MLDS_Type, !IO).

:- pred mlds_output_type_suffix_no_size(mlds_to_c_opts::in, mlds_type::in,
    io::di, io::uo) is det.

mlds_output_type_suffix_no_size(Opts, Type, !IO) :-
    mlds_output_type_suffix(Opts, Type, no_size, !IO).

:- pred mlds_output_type_suffix(mlds_to_c_opts::in, mlds_type::in,
    initializer_array_size::in, io::di, io::uo) is det.

mlds_output_type_suffix(Opts, MLDS_Type, ArraySize, !IO) :-
    (
        MLDS_Type = mlds_array_type(_),
        mlds_output_array_type_suffix(ArraySize, !IO)
    ;
        MLDS_Type = mlds_mostly_generic_array_type(_)
    ;
        MLDS_Type = mlds_func_type(FuncParams),
        mlds_output_func_type_suffix(Opts, FuncParams, !IO)
    ;
        MLDS_Type = mlds_cont_type(ArgTypes),
        (
            ArgTypes = []
        ;
            ArgTypes = [_ | _],
            % This case only happens for --nondet-copy-out.
            io.write_string(")(", !IO),
            io.write_list(ArgTypes, ", ", mlds_output_type(Opts), !IO),
            % add the type for the environment parameter, if needed
            GCC_NestedFuncs = Opts ^ m2co_gcc_nested_functions,
            (
                GCC_NestedFuncs = no,
                io.write_string(", void *", !IO)
            ;
                GCC_NestedFuncs = yes
            ),
            io.write_string(")", !IO)
        )
    ;
        MLDS_Type = mlds_rtti_type(RttiIdMaybeElement),
        IsArrayType = rtti_id_maybe_element_has_array_type(RttiIdMaybeElement),
        (
            IsArrayType = is_array,
            mlds_output_array_type_suffix(ArraySize, !IO)
        ;
            IsArrayType = not_array
        )
    ;
        MLDS_Type = mlds_tabling_type(TablingId),
        IsArrayType = tabling_id_has_array_type(TablingId),
        (
            IsArrayType = is_array,
            mlds_output_array_type_suffix(ArraySize, !IO)
        ;
            IsArrayType = not_array
        )
    ;
        MLDS_Type = mlds_unknown_type,
        unexpected($module, $pred, "unknown_type")
    ;
        ( MLDS_Type = mercury_type(_, _, _)
        ; MLDS_Type = mlds_mercury_array_type(_)
        ; MLDS_Type = mlds_native_int_type
        ; MLDS_Type = mlds_native_float_type
        ; MLDS_Type = mlds_native_bool_type
        ; MLDS_Type = mlds_native_char_type
        % XXX Currently we can't output a type suffix.
        ; MLDS_Type = mlds_foreign_type(_)
        ; MLDS_Type = mlds_class_type(_, _, _)
        ; MLDS_Type = mlds_ptr_type(_)
        ; MLDS_Type = mlds_generic_type
        ; MLDS_Type = mlds_generic_env_ptr_type
        ; MLDS_Type = mlds_type_info_type
        ; MLDS_Type = mlds_pseudo_type_info_type
        ; MLDS_Type = mlds_commit_type
        )
    ).

:- pred mlds_output_array_type_suffix(initializer_array_size::in,
    io::di, io::uo) is det.

mlds_output_array_type_suffix(no_size, !IO) :-
    io.write_string("[]", !IO).
mlds_output_array_type_suffix(array_size(Size0), !IO) :-
    % Standard ANSI/ISO C does not allow arrays of size 0. But the MLDS does.
    % To keep the C compiler happy, we therefore convert zero-element MLDS
    % arrays into one-element C arrays.
    int.max(Size0, 1, Size),
    io.write_char('[', !IO),
    io.write_int(Size, !IO),
    io.write_char(']', !IO).

%-----------------------------------------------------------------------------%
%
% Code to output declaration specifiers.
%

:- type decl_or_defn
    --->    forward_decl
    ;       definition.

:- pred mlds_output_decl_flags(mlds_to_c_opts::in, mlds_decl_flags::in,
    decl_or_defn::in, mlds_entity_name::in, mlds_entity_defn::in,
    io::di, io::uo) is det.

mlds_output_decl_flags(Opts, Flags, DeclOrDefn, Name, DefnBody, !IO) :-
    % mlds_output_extern_or_static handles both the `access' and the
    % `per_instance' fields of the mlds_decl_flags. We have to handle them
    % together because C overloads `static' to mean both `private' and
    % `one_copy', rather than having separate keywords for each. To make it
    % clear which MLDS construct each `static' keyword means, we precede the
    % `static' without (optionally-enabled) comments saying whether it is
    % `private', `one_copy', or both.

    Comments = Opts ^ m2co_auto_comments,
    (
        Comments = yes,
        mlds_output_access_comment(access(Flags), !IO),
        mlds_output_per_instance_comment(per_instance(Flags), !IO)
    ;
        Comments = no
    ),
    mlds_output_extern_or_static(access(Flags), per_instance(Flags),
        DeclOrDefn, Name, DefnBody, !IO),
    mlds_output_virtuality(virtuality(Flags), !IO),
    mlds_output_overridability(overridability(Flags), !IO),
    mlds_output_constness(constness(Flags), !IO),
    mlds_output_abstractness(abstractness(Flags), !IO).

:- pred mlds_output_access_comment(access::in, io::di, io::uo) is det.

mlds_output_access_comment(acc_public, !IO) :-
    io.write_string("/* public: */ ", !IO).
mlds_output_access_comment(acc_private, !IO) :-
    io.write_string("/* private: */ ", !IO).
mlds_output_access_comment(acc_protected, !IO) :-
    io.write_string("/* protected: */ ", !IO).
mlds_output_access_comment(acc_default, !IO) :-
    io.write_string("/* default access */ ", !IO).
mlds_output_access_comment(acc_local, !IO) :-
    io.write_string("/* local: */ ", !IO).

:- pred mlds_output_per_instance_comment(per_instance::in, io::di, io::uo)
    is det.

mlds_output_per_instance_comment(per_instance, !IO).
mlds_output_per_instance_comment(one_copy, !IO) :-
    io.write_string("/* one_copy */ ", !IO).

:- pred mlds_output_extern_or_static(access::in, per_instance::in,
    decl_or_defn::in, mlds_entity_name::in, mlds_entity_defn::in,
    io::di, io::uo) is det.

mlds_output_extern_or_static(Access, PerInstance, DeclOrDefn, Name, DefnBody,
        !IO) :-
    (
        (
            Access = acc_private
        ;
            Access = acc_local,
            PerInstance = one_copy
        ),
        Name \= entity_type(_, _),
        % Don't output "static" for functions that don't have a body.
        % This can happen for Mercury procedures declared `:- external'
        DefnBody \= mlds_function(_, _, body_external, _, _)
    ->
        io.write_string("static ", !IO)
    ;
        DeclOrDefn = forward_decl,
        Name = entity_data(_)
    ->
        io.write_string("extern ", !IO)
    ;
        % Forward declarations for GNU C nested functions need to be prefixed
        % with "auto".
        DeclOrDefn = forward_decl,
        Name = entity_function(_, _, _, _),
        Access = acc_local
    ->
        io.write_string("auto ", !IO)
    ;
        true
    ).

:- pred mlds_output_virtuality(virtuality::in, io::di, io::uo) is det.

mlds_output_virtuality(virtual, !IO) :-
    io.write_string("virtual ", !IO).
mlds_output_virtuality(non_virtual, !IO).

:- pred mlds_output_overridability(overridability::in, io::di, io::uo) is det.

mlds_output_overridability(sealed, !IO) :-
    io.write_string("/* sealed */ ", !IO).
mlds_output_overridability(overridable, !IO).

:- pred mlds_output_constness(constness::in, io::di, io::uo) is det.

mlds_output_constness(const, !IO) :-
    io.write_string("const ", !IO).
mlds_output_constness(modifiable, !IO).

:- pred mlds_output_abstractness(abstractness::in, io::di, io::uo) is det.

mlds_output_abstractness(abstract, !IO) :-
    io.write_string("/* abstract */ ", !IO).
mlds_output_abstractness(concrete, !IO).

%-----------------------------------------------------------------------------%
%
% Code to output statements.
%

:- type func_info
    --->    func_info(mlds_qualified_entity_name, mlds_func_signature).

:- pred mlds_output_statements(mlds_to_c_opts::in, indent::in, func_info::in,
    list(statement)::in, io::di, io::uo) is det.

mlds_output_statements(_Opts, _Indent, _FuncInfo, [], !IO).
mlds_output_statements(Opts, Indent, FuncInfo, [Statement | Statements],
        !IO) :-
    mlds_output_statement(Opts, Indent, FuncInfo, Statement, !IO),
    mlds_output_statements(Opts, Indent, FuncInfo, Statements, !IO).

:- pred mlds_output_statement(mlds_to_c_opts::in, indent::in, func_info::in,
    statement::in, io::di, io::uo) is det.

mlds_output_statement(Opts, Indent, FuncInfo, Statement, !IO) :-
    Statement = statement(Stmt, Context),
    output_context_opts(Opts, Context, !IO),
    (
        Stmt = ml_stmt_atomic(AtomicStatement),
        mlds_output_atomic_stmt(Opts, Indent, FuncInfo, AtomicStatement,
            Context, !IO)
    ;
        Stmt = ml_stmt_block(Defns, Statements),
        mlds_indent(Indent, !IO),
        io.write_string("{\n", !IO),
        (
            Defns = [_ | _],
            FuncInfo = func_info(FuncName, _),
            FuncName = qual(ModuleName, _, _),

            % Output forward declarations for any nested functions defined in
            % this block, in case they are referenced before they are defined.
            list.filter(defn_is_function, Defns, NestedFuncDefns),
            (
                NestedFuncDefns = [_ | _],
                mlds_output_decls(Opts, Indent + 1, ModuleName,
                    NestedFuncDefns, !IO),
                io.write_string("\n", !IO)
            ;
                NestedFuncDefns = []
            ),

            mlds_output_defns(Opts, Indent + 1, no, ModuleName, Defns, !IO),
            io.write_string("\n", !IO)
        ;
            Defns = []
        ),
        mlds_output_statements(Opts, Indent + 1, FuncInfo, Statements, !IO),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO)
    ;
        Stmt = ml_stmt_while(Kind, Cond, LoopStatement),
        (
            Kind = may_loop_zero_times,
            mlds_indent(Indent, !IO),
            io.write_string("while (", !IO),
            mlds_output_rval(Opts, Cond, !IO),
            io.write_string(")\n", !IO),
            mlds_output_statement(Opts, Indent + 1, FuncInfo, LoopStatement,
                !IO)
        ;
            Kind = loop_at_least_once,
            mlds_indent(Indent, !IO),
            io.write_string("do\n", !IO),
            mlds_output_statement(Opts, Indent + 1, FuncInfo, LoopStatement,
                !IO),
            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent, !IO),
            io.write_string("while (", !IO),
            mlds_output_rval(Opts, Cond, !IO),
            io.write_string(");\n", !IO)
        )
    ;
        Stmt = ml_stmt_if_then_else(Cond, Then0, MaybeElse),
        % We need to take care to avoid problems caused by the dangling else
        % ambiguity.
        (
            % For examples of the form
            %
            %   if (...)
            %       if (...)
            %           ...
            %   else
            %       ...
            %
            % we need braces around the inner `if', otherwise they wouldn't
            % parse they way we want them to: C would match the `else'
            % with the inner `if' rather than the outer `if'.

            MaybeElse = yes(_),
            Then0 = statement(ml_stmt_if_then_else(_, _, no), ThenContext)
        ->
            Then = statement(ml_stmt_block([], [Then0]), ThenContext)
        ;
            % For examples of the form
            %
            %   if (...)
            %       if (...)
            %           ...
            %       else
            %           ...
            %
            % we don't _need_ braces around the inner `if', since C will match
            % the else with the inner `if', but we add braces anyway, to avoid
            % a warning from gcc.

            MaybeElse = no,
            Then0 = statement(ml_stmt_if_then_else(_, _, yes(_)), ThenContext)
        ->
            Then = statement(ml_stmt_block([], [Then0]), ThenContext)
        ;
            Then = Then0
        ),

        mlds_indent(Indent, !IO),
        io.write_string("if (", !IO),
        mlds_output_rval(Opts, Cond, !IO),
        io.write_string(")\n", !IO),
        mlds_output_statement(Opts, Indent + 1, FuncInfo, Then, !IO),
        (
            MaybeElse = yes(Else),
            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent, !IO),
            io.write_string("else\n", !IO),
            mlds_output_statement(Opts, Indent + 1, FuncInfo, Else, !IO)
        ;
            MaybeElse = no
        )
    ;
        Stmt = ml_stmt_switch(_Type, Val, _Range, Cases, Default),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("switch (", !IO),
        mlds_output_rval(Opts, Val, !IO),
        io.write_string(") {\n", !IO),
        % We put the default case first, so that if it is unreachable,
        % it will get merged in with the first case.
        mlds_output_switch_default(Opts, Indent + 1, FuncInfo, Context,
            Default, !IO),
        list.foldl(
            mlds_output_switch_case(Opts, Indent + 1, FuncInfo, Context),
            Cases, !IO),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO)
    ;
        Stmt = ml_stmt_label(LabelName),
        % Note: MLDS allows labels at the end of blocks. C doesn't.
        % Hence we need to insert a semi-colon after the colon to ensure that
        % there is a statement to attach the label to.

        mlds_indent(Indent - 1, !IO),
        mlds_output_label_name(LabelName, !IO),
        io.write_string(":;\n", !IO)
    ;
        Stmt = ml_stmt_goto(Target),
        (
            Target = goto_label(LabelName),
            mlds_indent(Indent, !IO),
            io.write_string("goto ", !IO),
            mlds_output_label_name(LabelName, !IO),
            io.write_string(";\n", !IO)
        ;
            Target = goto_break,
            mlds_indent(Indent, !IO),
            io.write_string("break;\n", !IO)
        ;
            Target = goto_continue,
            mlds_indent(Indent, !IO),
            io.write_string("continue;\n", !IO)
        )
    ;
        Stmt = ml_stmt_computed_goto(Expr, Labels),
        % XXX For GNU C, we could output potentially more efficient code
        % by using an array of labels; this would tell the compiler that
        % it didn't need to do any range check.
        mlds_indent(Indent, !IO),
        io.write_string("switch (", !IO),
        mlds_output_rval(Opts, Expr, !IO),
        io.write_string(") {\n", !IO),
        list.foldl2(mlds_output_computed_goto_label(Opts, Context, Indent),
            Labels, 0, _FinalCount, !IO),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent + 1, !IO),
        io.write_string("default: /*NOTREACHED*/ MR_assert(0);\n", !IO),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO)
    ;
        Stmt = ml_stmt_call(Signature, FuncRval, MaybeObject, CallArgs,
            Results, IsTailCall),
        FuncInfo = func_info(CallerName, CallerSignature),

        % We need to enclose the generated code inside an extra pair of curly
        % braces, in case we generate more than one statement (e.g. because we
        % generate extra statements for profiling or for tail call
        % optimization) and the generated code is e.g. inside an if-then-else.

        mlds_indent(Indent, !IO),
        io.write_string("{\n", !IO),

        mlds_maybe_output_call_profile_instr(Opts, Context, Indent + 1,
            FuncRval, CallerName, !IO),

        % Optimize general tail calls. We can't really do much here except to
        % insert `return' as an extra hint to the C compiler.
        % XXX These optimizations should be disable-able.
        %
        % If Results = [], i.e. the function has `void' return type, then this
        % would result in code that is not legal ANSI C (although it _is_ legal
        % in GNU C and in C++), so for that case, we put the return statement
        % after the call -- see below.
        %
        % Note that it's only safe to add such a return statement if the
        % calling procedure has the same return types as the callee, or if
        % the calling procedure has no return value. (Calls where the types
        % are different can be marked as tail calls if they are known
        % to never return.)

        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent + 1, !IO),
        Signature = mlds_func_signature(_, RetTypes),
        CallerSignature = mlds_func_signature(_, CallerRetTypes),
        (
            ( IsTailCall = tail_call
            ; IsTailCall = no_return_call
            ),
            Results = [_ | _],
            RetTypes = CallerRetTypes
        ->
            io.write_string("return ", !IO)
        ;
            true
        ),
        (
            MaybeObject = yes(Object),
            mlds_output_bracketed_rval(Opts, Object, !IO),
            io.write_string(".", !IO) % XXX should this be "->"?
        ;
            MaybeObject = no
        ),
        (
            Results = []
        ;
            Results = [Lval],
            mlds_output_lval(Opts, Lval, !IO),
            io.write_string(" = ", !IO)
        ;
            Results = [_, _ | _],
            mlds_output_return_list(Results, mlds_output_lval(Opts), !IO),
            io.write_string(" = ", !IO)
        ),
        mlds_output_bracketed_rval(Opts, FuncRval, !IO),
        io.write_string("(", !IO),
        io.write_list(CallArgs, ", ", mlds_output_rval(Opts), !IO),
        io.write_string(");\n", !IO),

        (
            ( IsTailCall = tail_call
            ; IsTailCall = no_return_call
            ),
            CallerRetTypes = []
        ->
            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent + 1, !IO),
            io.write_string("return;\n", !IO)
        ;
            mlds_maybe_output_time_profile_instr(Opts, Context, Indent + 1,
                CallerName, !IO)
        ),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO)
    ;
        Stmt = ml_stmt_return(Results),
        mlds_indent(Indent, !IO),
        io.write_string("return", !IO),
        (
            Results = []
        ;
            Results = [Rval],
            io.write_char(' ', !IO),
            mlds_output_rval(Opts, Rval, !IO)
        ;
            Results = [_, _ | _],
            mlds_output_return_list(Results, mlds_output_rval(Opts), !IO)
        ),
        io.write_string(";\n", !IO)
    ;
        Stmt = ml_stmt_do_commit(Ref),
        mlds_indent(Indent, !IO),
        GCC_LocalLabels = Opts ^ m2co_gcc_local_labels,
        (
            GCC_LocalLabels = yes,
            % Output "goto <Ref>".
            io.write_string("goto ", !IO),
            mlds_output_rval(Opts, Ref, !IO)
        ;
            GCC_LocalLabels = no,
            % Output "MR_builtin_longjmp(<Ref>, 1)". This is a macro that
            % expands to either the standard longjmp() or the GNU C's
            % __builtin_longjmp(). Note that the second argument to GNU
            % C's __builtin_longjmp() *must* be `1'.
            io.write_string("MR_builtin_longjmp(", !IO),
            mlds_output_rval(Opts, Ref, !IO),
            io.write_string(", 1)", !IO)
        ),
        io.write_string(";\n", !IO)
    ;
        Stmt = ml_stmt_try_commit(Ref, SubStatement0, Handler),
        GCC_LocalLabels = Opts ^ m2co_gcc_local_labels,
        (
            GCC_LocalLabels = yes,

            % Output the following:
            %
            %       <Stmt>
            %       goto <Ref>_done;
            %   <Ref>:
            %       <Handler>
            %   <Ref>_done:
            %       ;

            % Note that <Ref> should be just variable name, not a complicated
            % expression. If not, the C compiler will catch it.

            mlds_output_statement(Opts, Indent, FuncInfo, SubStatement0, !IO),

            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent, !IO),
            io.write_string("goto ", !IO),
            mlds_output_lval(Opts, Ref, !IO),
            io.write_string("_done;\n", !IO),

            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent - 1, !IO),
            mlds_output_lval(Opts, Ref, !IO),
            io.write_string(":\n", !IO),

            mlds_output_statement(Opts, Indent, FuncInfo, Handler, !IO),

            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent - 1, !IO),
            mlds_output_lval(Opts, Ref, !IO),
            io.write_string("_done:\t;\n", !IO)

        ;
            GCC_LocalLabels = no,

            % Output the following:
            %
            %   if (MR_builtin_setjmp(<Ref>) == 0)
            %       <Stmt>
            %   else
            %       <Handler>
            %
            % MR_builtin_setjmp() expands to either the standard setjmp()
            % or GNU C's __builtin_setjmp().
            %
            % Note that ISO C says that any non-volatile variables that are
            % local to the function containing the setjmp() and which are
            % modified between the setjmp() and the longjmp() become
            % indeterminate after the longjmp(). The MLDS code generator
            % handles that by generating each commit in its own nested
            % function, with the local variables remaining in the containing
            % function. This ensures that none of the variables which get
            % modified between the setjmp() and the longjmp() and which get
            % referenced after the longjmp() are local variables in the
            % function containing the setjmp(), so we don't need to mark them
            % as volatile.

            % We need to take care to avoid problems caused by the
            % dangling else ambiguity.
            (
                SubStatement0 = statement(SubStmt0, Context),
                SubStmt0 = ml_stmt_if_then_else(_, _, no)
            ->
                SubStmt = ml_stmt_block([], [SubStatement0]),
                SubStatement = statement(SubStmt, Context)
            ;
                SubStatement = SubStatement0
            ),

            mlds_indent(Indent, !IO),
            io.write_string("if (MR_builtin_setjmp(", !IO),
            mlds_output_lval(Opts, Ref, !IO),
            io.write_string(") == 0)\n", !IO),

            mlds_output_statement(Opts, Indent + 1, FuncInfo, SubStatement,
                !IO),

            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent, !IO),
            io.write_string("else\n", !IO),

            mlds_output_statement(Opts, Indent + 1, FuncInfo, Handler, !IO)
        )
    ).

:- pred mlds_output_computed_goto_label(mlds_to_c_opts::in, mlds_context::in,
    int::in, mlds_label::in, int::in, int::out, io::di, io::uo) is det.

mlds_output_computed_goto_label(Opts, Context, Indent, Label, Count0, Count,
        !IO) :-
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent + 1, !IO),
    io.write_string("case ", !IO),
    io.write_int(Count0, !IO),
    io.write_string(": goto ", !IO),
    mlds_output_label_name(Label, !IO),
    io.write_string(";\n", !IO),
    Count = Count0 + 1.

%-----------------------------------------------------------------------------%
%
% Extra code for outputting switch statements.
%

:- pred mlds_output_switch_case(mlds_to_c_opts::in, indent::in, func_info::in,
    mlds_context::in, mlds_switch_case::in, io::di, io::uo) is det.

mlds_output_switch_case(Opts, Indent, FuncInfo, Context, Case, !IO) :-
    Case = mlds_switch_case(FirstCond, LaterConds, Statement),
    mlds_output_case_cond(Opts, Indent, Context, FirstCond, !IO),
    list.foldl(mlds_output_case_cond(Opts, Indent, Context), LaterConds, !IO),
    mlds_output_statement(Opts, Indent + 1, FuncInfo, Statement, !IO),
    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent + 1, !IO),
    io.write_string("break;\n", !IO).

:- pred mlds_output_case_cond(mlds_to_c_opts::in, indent::in, mlds_context::in,
    mlds_case_match_cond::in, io::di, io::uo) is det.

mlds_output_case_cond(Opts, Indent, Context, Match, !IO) :-
    (
        Match = match_value(Val),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("case ", !IO),
        mlds_output_rval(Opts, Val, !IO),
        io.write_string(":\n", !IO)
    ;
        Match = match_range(Low, High),
        % This uses the GNU C extension `case <Low> ... <High>:'.
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("case ", !IO),
        mlds_output_rval(Opts, Low, !IO),
        io.write_string(" ... ", !IO),
        mlds_output_rval(Opts, High, !IO),
        io.write_string(":\n", !IO)
    ).

:- pred mlds_output_switch_default(mlds_to_c_opts::in, indent::in,
    func_info::in, mlds_context::in, mlds_switch_default::in, io::di, io::uo)
    is det.

mlds_output_switch_default(Opts, Indent, FuncInfo, Context, Default, !IO) :-
    (
        Default = default_is_unreachable,
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("default: /*NOTREACHED*/ MR_assert(0);\n", !IO)
    ;
        Default = default_do_nothing
    ;
        Default = default_case(Statement),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("default:\n", !IO),
        mlds_output_statement(Opts, Indent + 1, FuncInfo, Statement, !IO),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent + 1, !IO),
        io.write_string("break;\n", !IO)
    ).

%-----------------------------------------------------------------------------%

    % If call profiling is turned on output an instruction to record
    % an arc in the call profile between the callee and caller.
    %
:- pred mlds_maybe_output_call_profile_instr(mlds_to_c_opts::in,
    mlds_context::in, indent::in, mlds_rval::in,
    mlds_qualified_entity_name::in, io::di, io::uo) is det.

mlds_maybe_output_call_profile_instr(Opts, Context, Indent,
        CalleeFuncRval, CallerName, !IO) :-
    ProfileCalls = Opts ^ m2co_profile_calls,
    (
        ProfileCalls = yes,
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("MR_prof_call_profile(", !IO),
        mlds_output_bracketed_rval(Opts, CalleeFuncRval, !IO),
        io.write_string(", ", !IO),
        mlds_output_fully_qualified_name(CallerName, !IO),
        io.write_string(");\n", !IO)
    ;
        ProfileCalls = no
    ).

    % If time profiling is turned on output an instruction which informs
    % the runtime which procedure we are currently located in.
    %
:- pred mlds_maybe_output_time_profile_instr(mlds_to_c_opts::in,
    mlds_context::in, indent::in, mlds_qualified_entity_name::in,
    io::di, io::uo) is det.

mlds_maybe_output_time_profile_instr(Opts, Context, Indent, Name, !IO) :-
    ProfileTime = Opts ^ m2co_profile_time,
    (
        ProfileTime = yes,
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("MR_set_prof_current_proc(", !IO),
        mlds_output_fully_qualified_name(Name, !IO),
        io.write_string(");\n", !IO)
    ;
        ProfileTime = no
    ).

%-----------------------------------------------------------------------------%

:- pred mlds_output_label_name(mlds_label::in, io::di, io::uo) is det.

mlds_output_label_name(LabelName, !IO) :-
    mlds_output_mangled_name(LabelName, !IO).

:- pred mlds_output_atomic_stmt(mlds_to_c_opts::in, indent::in, func_info::in,
    mlds_atomic_statement::in, mlds_context::in, io::di, io::uo) is det.

mlds_output_atomic_stmt(Opts, Indent, _FuncInfo, Statement, Context, !IO) :-
    (
        Statement = comment(Comment),
        % XXX We should escape any "*/"'s in the Comment. We should also split
        % the comment into lines and indent each line appropriately.
        mlds_indent(Indent, !IO),
        io.write_string("/* ", !IO),
        io.write_string(Comment, !IO),
        io.write_string(" */\n", !IO)
    ;
        Statement = assign(Lval, Rval),
        mlds_indent(Indent, !IO),
        mlds_output_lval(Opts, Lval, !IO),
        io.write_string(" = ", !IO),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_string(";\n", !IO)
    ;
        Statement = assign_if_in_heap(Lval, Rval),
        mlds_indent(Indent, !IO),
        io.write_string("MR_assign_if_in_heap(", !IO),
        mlds_output_lval(Opts, Lval, !IO),
        io.write_string(", ", !IO),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_string(");\n", !IO)
    ;
        Statement = delete_object(Rval),
        mlds_indent(Indent, !IO),
        io.write_string("MR_free_heap(", !IO),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_string(");\n", !IO)
    ;
        Statement = new_object(Target, MaybeTag, _ExplicitSecTag, Type,
            MaybeSize, _MaybeCtorName, Args, ArgTypes, MayUseAtomic,
            MaybeAllocId),
        mlds_indent(Indent, !IO),
        io.write_string("{\n", !IO),

        % When filling in the fields of a newly allocated cell, use a fresh
        % local variable as the base address for the field references in
        % preference to an lval that is more expensive to access. This yields
        % a speedup of about 0.3%.

        ( Target = ml_var(_, _) ->
            Base = ls_lval(Target)
        ;
            % It doesn't matter what string we pick for BaseVarName,
            % as long as its declaration doesn't hide any of the variables
            % inside Args. This is not hard to ensure, since the printed
            % forms of the variables inside Args all include "__".
            BaseVarName = "base",
            Base = ls_string(BaseVarName),
            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent + 1, !IO),
            mlds_output_type_prefix(Opts, Type, !IO),
            io.write_string(" ", !IO),
            io.write_string(BaseVarName, !IO),
            mlds_output_type_suffix(Opts, Type, no_size, !IO),
            io.write_string(";\n", !IO)
        ),

        % For --gc accurate, we need to insert a call to GC_check()
        % before every allocation.
        GC_Method = Opts ^ m2co_gc_method,
        (
            GC_Method = gc_accurate,
            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent + 1, !IO),
            io.write_string("MR_GC_check();\n", !IO),
            % For types which hold RTTI that will be traversed by the collector
            % at GC-time, we need to allocate an extra word at the start,
            % to hold the forwarding pointer. Normally we would just overwrite
            % the first word of the object in the "from" space, but this
            % can't be done for objects which will be referenced during
            % the garbage collection process.
            NeedsForwardingSpace = type_needs_forwarding_pointer_space(Type),
            (
                NeedsForwardingSpace = yes,
                output_context_opts(Opts, Context, !IO),
                mlds_indent(Indent + 1, !IO),
                io.write_string("/* reserve space for " ++
                    "GC forwarding pointer*/\n", !IO),
                output_context_opts(Opts, Context, !IO),
                mlds_indent(Indent + 1, !IO),
                io.write_string("MR_hp_alloc(1);\n", !IO)
            ;
                NeedsForwardingSpace = no
            )
        ;
            ( GC_Method = gc_none
            ; GC_Method = gc_boehm
            ; GC_Method = gc_boehm_debug
            ; GC_Method = gc_hgc
            ; GC_Method = gc_automatic
            )
        ),

        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent + 1, !IO),
        write_lval_or_string(Opts, Base, !IO),
        io.write_string(" = ", !IO),
        (
            MaybeTag = yes(Tag0),
            Tag = Tag0,
            mlds_output_cast(Opts, Type, !IO),
            io.write_string("MR_mkword(", !IO),
            mlds_output_tag(Tag, !IO),
            io.write_string(", ", !IO),
            EndMkword = ")"
        ;
            MaybeTag = no,
            Tag = 0,
            % XXX We shouldn't need the cast here, but currently the type
            % that we include in the call to MR_new_object() is not always
            % correct.
            mlds_output_cast(Opts, Type, !IO),
            EndMkword = ""
        ),
        (
            MayUseAtomic = may_not_use_atomic_alloc,
            io.write_string("MR_new_object(", !IO)
        ;
            MayUseAtomic = may_use_atomic_alloc,
            io.write_string("MR_new_object_atomic(", !IO)
        ),
        mlds_output_type(Opts, Type, !IO),
        io.write_string(", ", !IO),
        (
            MaybeSize = yes(Size),
            io.write_string("(", !IO),
            mlds_output_rval(Opts, Size, !IO),
            io.write_string(" * sizeof(MR_Word))", !IO)
        ;
            MaybeSize = no,
            % XXX what should we do here?
            io.write_int(-1, !IO)
        ),
        io.write_string(", ", !IO),
        mlds_output_maybe_alloc_id(MaybeAllocId, !IO),
        io.write_string(", NULL)", !IO),
        io.write_string(EndMkword, !IO),
        io.write_string(";\n", !IO),
        (
            Base = ls_lval(_)
        ;
            Base = ls_string(BaseVarName1),
            output_context_opts(Opts, Context, !IO),
            mlds_indent(Indent + 1, !IO),
            mlds_output_lval(Opts, Target, !IO),
            io.write_string(" = ", !IO),
            io.write_string(BaseVarName1, !IO),
            io.write_string(";\n", !IO)
        ),
        mlds_output_init_args(Args, ArgTypes, Context, 0, Base, Tag,
            Opts, Indent + 1, !IO),
        output_context_opts(Opts, Context, !IO),
        mlds_indent(Indent, !IO),
        io.write_string("}\n", !IO)
    ;
        Statement = gc_check,
        mlds_indent(Indent, !IO),
        io.write_string("MR_GC_check();\n", !IO)
    ;
        Statement = mark_hp(Lval),
        mlds_indent(Indent, !IO),
        io.write_string("MR_mark_hp(", !IO),
        mlds_output_lval(Opts, Lval, !IO),
        io.write_string(");\n", !IO)
    ;
        Statement = restore_hp(Rval),
        mlds_indent(Indent, !IO),
        io.write_string("MR_restore_hp(", !IO),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_string(");\n", !IO)
    ;
        Statement = trail_op(_TrailOp),
        sorry($module, $pred, "trail_ops not implemented")
    ;
        Statement = inline_target_code(TargetLang, Components),
        (
            TargetLang = ml_target_c,
            list.foldl(mlds_output_target_code_component(Opts, Context),
                Components, !IO)
        ;
            ( TargetLang = ml_target_gnu_c
            ; TargetLang = ml_target_il
            ; TargetLang = ml_target_csharp
            ; TargetLang = ml_target_java
            ),
            sorry($module, $pred,
                "inline_target_code only works for language C")
        )
    ;
        Statement = outline_foreign_proc(_Lang, _Vs, _Lvals, _Code),
        unexpected($module, $pred,
            "outline_foreign_proc is not used in C backend")
    ).

:- pred mlds_output_maybe_alloc_id(maybe(mlds_alloc_id)::in, io::di, io::uo)
    is det.

mlds_output_maybe_alloc_id(MaybeAllocId, !IO) :-
    (
        MaybeAllocId = yes(mlds_alloc_id(Num)),
        io.format("&MR_alloc_sites[%d]", [i(Num)], !IO)
    ;
        MaybeAllocId = no,
        io.write_string("NULL", !IO)
    ).

:- pred mlds_output_target_code_component(mlds_to_c_opts::in, mlds_context::in,
    target_code_component::in, io::di, io::uo) is det.

mlds_output_target_code_component(Opts, Context, TargetCode, !IO) :-
    (
        TargetCode = user_target_code(CodeString, MaybeUserContext, _Attrs),
        (
            MaybeUserContext = yes(UserContext),
            output_context_opts(Opts, mlds_make_context(UserContext), !IO)
        ;
            MaybeUserContext = no,
            output_context_opts(Opts, Context, !IO)
        ),
        io.write_string(CodeString, !IO),
        io.write_string("\n", !IO),
        reset_context_opts(Opts, !IO)
    ;
        TargetCode = raw_target_code(CodeString, _Attrs),
        io.write_string(CodeString, !IO)
    ;
        TargetCode = target_code_input(Rval),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_string(" ", !IO)
    ;
        TargetCode = target_code_output(Lval),
        mlds_output_lval(Opts, Lval, !IO),
        io.write_string(" ", !IO)
    ;
        TargetCode = target_code_type(Type),
        mlds_output_type(Opts, Type, !IO),
        io.write_string(" ", !IO)
    ;
        % Note: `target_code_name(Name)' target_code_components are used to
        % generate the #define for `MR_PROC_LABEL'.
        % The fact that they're used in a #define means that we can't do
        % an output_context(Context) here, since #line directives
        % aren't allowed inside #defines.
        % Similarly, all the target_code_components except user_target_code
        % can get emitted inside calls to the MR_BOX_FOREIGN_TYPE
        % or MR_UNBOX_FOREIGN_TYPE macros, which means that we can't output
        % the contexts for those either, since #line directives aren't
        % allowed inside macro invocations in standard C
        % (although some compilers, e.g. gcc 3.2, do allow it).

        TargetCode = target_code_name(Name),
        mlds_output_fully_qualified_name(Name, !IO),
        io.write_string("\n", !IO)
    ;
        TargetCode = target_code_alloc_id(AllocId),
        mlds_output_maybe_alloc_id(yes(AllocId), !IO)
    ).

:- func type_needs_forwarding_pointer_space(mlds_type) = bool.

type_needs_forwarding_pointer_space(mlds_type_info_type) = yes.
type_needs_forwarding_pointer_space(mlds_pseudo_type_info_type) = yes.
type_needs_forwarding_pointer_space(mercury_type(_, TypeCategory, _)) =
    is_introduced_type_info_type_category(TypeCategory).
type_needs_forwarding_pointer_space(mlds_mercury_array_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_cont_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_commit_type) = no.
type_needs_forwarding_pointer_space(mlds_native_bool_type) = no.
type_needs_forwarding_pointer_space(mlds_native_int_type) = no.
type_needs_forwarding_pointer_space(mlds_native_float_type) = no.
type_needs_forwarding_pointer_space(mlds_native_char_type) = no.
type_needs_forwarding_pointer_space(mlds_foreign_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_class_type(_, _, _)) = no.
type_needs_forwarding_pointer_space(mlds_array_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_mostly_generic_array_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_ptr_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_func_type(_)) = no.
type_needs_forwarding_pointer_space(mlds_generic_type) = no.
type_needs_forwarding_pointer_space(mlds_generic_env_ptr_type) = no.
type_needs_forwarding_pointer_space(mlds_rtti_type(_)) = _ :-
    % These should all be statically allocated, not dynamically allocated,
    % so we should never get here.
    unexpected($module, $pred, "rtti_type").
type_needs_forwarding_pointer_space(mlds_tabling_type(_)) = _ :-
    % These should all be statically allocated, not dynamically allocated,
    % so we should never get here.
    unexpected($module, $pred, "tabling_type").
type_needs_forwarding_pointer_space(mlds_unknown_type) = _ :-
    unexpected($module, $pred, "unknown_type").

:- type lval_or_string
    --->    ls_lval(mlds_lval)
    ;       ls_string(string).

:- pred mlds_output_init_args(list(mlds_rval)::in, list(mlds_type)::in,
    mlds_context::in, int::in, lval_or_string::in, mlds_tag::in,
    mlds_to_c_opts::in, indent::in, io::di, io::uo) is det.

mlds_output_init_args([_ | _], [], _, _, _, _, _, _, !IO) :-
    unexpected($module, $pred, "length mismatch").
mlds_output_init_args([], [_ | _], _, _, _, _, _, _, !IO) :-
    unexpected($module, $pred, "length mismatch").
mlds_output_init_args([], [], _, _, _, _, _, _, !IO).
mlds_output_init_args([Arg | Args], [ArgType | ArgTypes], Context,
        ArgNum, Base, Tag, Opts, Indent, !IO) :-
    % The MR_hl_field() macro expects its argument to have type MR_Box,
    % so we need to box the arguments if they aren't already boxed.
    % Hence the use of mlds_output_boxed_rval below.

    % XXX For --high-level-data, we ought to generate assignments to the fields
    % (or perhaps a call to a constructor function) rather than using the
    % MR_hl_field() macro.

    output_context_opts(Opts, Context, !IO),
    mlds_indent(Indent, !IO),
    io.write_string("MR_hl_field(", !IO),
    mlds_output_tag(Tag, !IO),
    io.write_string(", ", !IO),
    write_lval_or_string(Opts, Base, !IO),
    io.write_string(", ", !IO),
    io.write_int(ArgNum, !IO),
    io.write_string(") = ", !IO),
    mlds_output_boxed_rval(Opts, ArgType, Arg, !IO),
    io.write_string(";\n", !IO),
    mlds_output_init_args(Args, ArgTypes, Context,
        ArgNum + 1, Base, Tag, Opts, Indent, !IO).

:- pred write_lval_or_string(mlds_to_c_opts::in, lval_or_string::in,
    io::di, io::uo) is det.

write_lval_or_string(Opts, Base, !IO) :-
    (
        Base = ls_lval(Target),
        mlds_output_lval(Opts, Target, !IO)
    ;
        Base = ls_string(BaseVarName),
        io.write_string(BaseVarName, !IO)
    ).

%-----------------------------------------------------------------------------%
%
% Code to output expressions.
%

:- pred mlds_output_lval(mlds_to_c_opts::in, mlds_lval::in, io::di, io::uo)
    is det.

mlds_output_lval(Opts, Lval, !IO) :-
    (
        Lval = ml_field(MaybeTag, PtrRval, FieldId, FieldType, PtrType),
        (
            FieldId = ml_field_offset(OffsetRval),
            (
                (
                    FieldType = mlds_generic_type
                ;
                    FieldType = mercury_type(MercuryType, _, _),
                    MercuryType = type_variable(_, _)
                    % We could also accept other types that are the same size
                    % as MR_Box, such as builtin_type(builtin_type_int) and
                    % builtin_type(builtin_type_string).
                )
            ->
                io.write_string("(", !IO),
                (
                    MaybeTag = yes(Tag),
                    io.write_string("MR_hl_field(", !IO),
                    mlds_output_tag(Tag, !IO),
                    io.write_string(", ", !IO)
                ;
                    MaybeTag = no,
                    io.write_string("MR_hl_mask_field(", !IO),
                    io.write_string("(MR_Word) ", !IO)
                ),
                mlds_output_rval(Opts, PtrRval, !IO),
                io.write_string(", ", !IO),
                mlds_output_rval(Opts, OffsetRval, !IO),
                io.write_string("))", !IO)
            ;
                % The field type for ml_lval_field(_, _, ml_field_offset(_),
                % _, _) lvals must be something that maps to MR_Box.
                unexpected($module, $pred, "unexpected field type")
            )
        ;
            FieldId = ml_field_named(FieldName, CtorType),
            io.write_string("(", !IO),
            ( MaybeTag = yes(0) ->
                ( PtrType \= CtorType ->
                    mlds_output_cast(Opts, CtorType, !IO)
                ;
                    true
                ),
                ( PtrRval = ml_mem_addr(PtrAddrLval) ->
                    mlds_output_lval(Opts, PtrAddrLval, !IO),
                    io.write_string(").", !IO)
                ;
                    mlds_output_bracketed_rval(Opts, PtrRval, !IO),
                    io.write_string(")->", !IO)
                )
            ;
                mlds_output_cast(Opts, CtorType, !IO),
                (
                    MaybeTag = yes(Tag),
                    io.write_string("MR_body(", !IO),
                    mlds_output_rval(Opts, PtrRval, !IO),
                    io.write_string(", ", !IO),
                    mlds_output_tag(Tag, !IO)
                ;
                    MaybeTag = no,
                    io.write_string("MR_strip_tag(", !IO),
                    mlds_output_rval(Opts, PtrRval, !IO)
                ),
                io.write_string("))->", !IO)
            ),
            mlds_output_fully_qualified(FieldName, mlds_output_mangled_name,
                !IO)
        )
    ;
        Lval = ml_mem_ref(Rval, _Type),
        io.write_string("*", !IO),
        mlds_output_bracketed_rval(Opts, Rval, !IO)
    ;
        Lval = ml_global_var_ref(GobalVar),
        io.write_string(global_var_name(GobalVar), !IO)
    ;
        Lval = ml_var(VarName, _VarType),
        mlds_output_var(VarName, !IO)
    ).

:- func global_var_name(global_var_ref) = string.

% The calls to env_var_is_acceptable_char in prog_io_goal.m  ensure that
% EnvVarName is acceptable as part of a C identifier.
% The prefix must be identical to envvar_prefix in util/mkinit.c
% and c_global_var_name in llds_out.m.
global_var_name(env_var_ref(EnvVarName)) = "mercury_envvar_" ++ EnvVarName.

:- pred mlds_output_var(mlds_var::in, io::di, io::uo) is det.

mlds_output_var(VarName, !IO) :-
    mlds_output_fully_qualified(VarName, mlds_output_var_name, !IO).

:- pred mlds_output_var_name(mlds_var_name::in, io::di, io::uo) is det.

mlds_output_var_name(VarName, !IO) :-
    mlds_output_mangled_name(ml_var_name_to_string(VarName), !IO).

:- pred mlds_output_mangled_name(string::in, io::di, io::uo) is det.

mlds_output_mangled_name(Name, !IO) :-
    io.write_string(name_mangle(Name), !IO).

:- pred mlds_output_bracketed_lval(mlds_to_c_opts::in, mlds_lval::in,
    io::di, io::uo) is det.

mlds_output_bracketed_lval(Opts, Lval, !IO) :-
    (
        % If it's just a variable name, then we don't need parentheses.
        Lval = ml_var(_, _)
    ->
        mlds_output_lval(Opts, Lval, !IO)
    ;
        io.write_char('(', !IO),
        mlds_output_lval(Opts, Lval, !IO),
        io.write_char(')', !IO)
    ).

:- pred mlds_output_bracketed_rval(mlds_to_c_opts::in, mlds_rval::in,
    io::di, io::uo) is det.

mlds_output_bracketed_rval(Opts, Rval, !IO) :-
    (
        % If it's just a variable name, then we don't need parentheses.
        ( Rval = ml_lval(ml_var(_,_))
        ; Rval = ml_const(mlconst_code_addr(_))
        )
    ->
        mlds_output_rval(Opts, Rval, !IO)
    ;
        io.write_char('(', !IO),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_char(')', !IO)
    ).

    % mlds_output_return_list(List, OutputPred, IO0, IO) outputs a List
    % of return types/values using OutputPred.
    %
:- pred mlds_output_return_list(list(T)::in,
    pred(T, io, io)::in(pred(in, di, uo) is det),
    io::di, io::uo) is det.

mlds_output_return_list(List, OutputPred, !IO) :-
    % Even though C doesn't support multiple return types, this case needs
    % to be handled for e.g. MLDS dumps when compiling to Java. We generate
    % an "#error" directive to make the error message clearer, but then we go
    % ahead and generate C-like pseudo-code for the purposes of MLDS dumps.
    io.write_string("\n#error multiple return values\n", !IO),
    io.write_string("\t{", !IO),
    io.write_list(List, ", ", OutputPred, !IO),
    io.write_string("}", !IO).

:- pred mlds_output_rval_as_op_arg(mlds_to_c_opts::in, mlds_rval::in,
    io::di, io::uo) is det.

mlds_output_rval_as_op_arg(Opts, Rval, !IO) :-
    (
        ( Rval = ml_unop(_, _)
        ; Rval = ml_binop(_, _, _)
        )
    ->
        io.write_string("(", !IO),
        mlds_output_rval(Opts, Rval, !IO),
        io.write_string(")", !IO)
    ;
        mlds_output_rval(Opts, Rval, !IO)
    ).

:- pred mlds_output_rval(mlds_to_c_opts::in, mlds_rval::in, io::di, io::uo)
    is det.

mlds_output_rval(Opts, Rval, !IO) :-
    (
        Rval = ml_lval(Lval),
        mlds_output_lval(Opts, Lval, !IO)
        % XXX Do we need the commented out code below?
        % if a field is used as an rval, then we need to use
        % the MR_hl_const_field() macro, not the MR_hl_field() macro,
        % to avoid warnings about discarding const,
        % and similarly for MR_mask_field.
        %   ( Lval = ml_lval_field(MaybeTag, Rval, FieldNum, _, _) ->
        %       (
        %           MaybeTag = yes(Tag),
        %           io.write_string("MR_hl_const_field(", !IO),
        %           mlds_output_tag(Tag, !IO),
        %           io.write_string(", ", !IO)
        %       ;
        %           MaybeTag = no,
        %           io.write_string("MR_hl_const_mask_field(", !IO)
        %       ),
        %       mlds_output_rval(Rval, !IO),
        %       io.write_string(", ", !IO),
        %       mlds_output_rval(FieldNum, !IO),
        %       io.write_string(")", !IO)
        %   ;
        %       mlds_output_lval(Lval, !IO)
        %   ).
    ;
        Rval = ml_mkword(Tag, BaseRval),
        io.write_string("MR_mkword(", !IO),
        mlds_output_tag(Tag, !IO),
        io.write_string(", ", !IO),
        mlds_output_rval(Opts, BaseRval, !IO),
        io.write_string(")", !IO)
    ;
        Rval = ml_const(Const),
        mlds_output_rval_const(Opts, Const, !IO)
    ;
        Rval = ml_unop(UnOp, RvalA),
        mlds_output_unop(Opts, UnOp, RvalA, !IO)
    ;
        Rval = ml_binop(BinOp, RvalA, RvalB),
        mlds_output_binop(Opts, BinOp, RvalA, RvalB, !IO)
    ;
        Rval = ml_mem_addr(Lval),
        % XXX Are parentheses needed?
        io.write_string("&", !IO),
        mlds_output_lval(Opts, Lval, !IO)
    ;
        Rval = ml_scalar_common(ScalarCommon),
        ScalarCommon = ml_scalar_common(ModuleName, _Type,
            ml_scalar_common_type_num(TypeNum), RowNum),
        ModuleSymName = mlds_module_name_to_sym_name(ModuleName),
        MangledModuleName = sym_name_mangle(ModuleSymName),
        io.write_string(MangledModuleName, !IO),
        io.write_string("_scalar_common_", !IO),
        io.write_int(TypeNum, !IO),
        io.write_string("[", !IO),
        io.write_int(RowNum, !IO),
        io.write_string("]", !IO)
    ;
        Rval = ml_vector_common_row(VectorCommon, RowRval),
        VectorCommon = ml_vector_common(ModuleName, _Type,
            ml_vector_common_type_num(TypeNum), StartRowNum, _NumRows),
        ModuleSymName = mlds_module_name_to_sym_name(ModuleName),
        MangledModuleName = sym_name_mangle(ModuleSymName),
        io.write_string("&", !IO),
        io.write_string(MangledModuleName, !IO),
        io.write_string("_vector_common_", !IO),
        io.write_int(TypeNum, !IO),
        io.write_string("[", !IO),
        io.write_int(StartRowNum, !IO),
        io.write_string(" + ", !IO),
        mlds_output_rval(Opts, RowRval, !IO),
        io.write_string("]", !IO)
    ;
        Rval = ml_self(_),
        io.write_string("this", !IO)
    ).

:- pred mlds_output_unop(mlds_to_c_opts::in, mlds_unary_op::in, mlds_rval::in,
    io::di, io::uo) is det.

mlds_output_unop(Opts, Unop, Expr, !IO) :-
    (
        Unop = cast(Type),
        mlds_output_cast_rval(Opts, Type, Expr, !IO)
    ;
        Unop = box(Type),
        mlds_output_boxed_rval(Opts, Type, Expr, !IO)
    ;
        Unop = unbox(Type),
        mlds_output_unboxed_rval(Opts, Type, Expr, !IO)
    ;
        Unop = std_unop(StdUnop),
        mlds_output_std_unop(Opts, StdUnop, Expr, !IO)
    ).

:- pred mlds_output_cast_rval(mlds_to_c_opts::in, mlds_type::in, mlds_rval::in,
    io::di, io::uo) is det.

mlds_output_cast_rval(Opts, Type, Expr, !IO) :-
    mlds_output_cast(Opts, Type, !IO),
    (
        Opts ^ m2co_highlevel_data = yes,
        Expr = ml_const(mlconst_float(Float))
    ->
        mlds_output_float_bits(Opts, Float, !IO)
    ;
        mlds_output_rval(Opts, Expr, !IO)
    ).

:- pred mlds_output_cast(mlds_to_c_opts::in, mlds_type::in, io::di, io::uo)
    is det.

mlds_output_cast(Opts, Type, !IO) :-
    io.write_string("(", !IO),
    mlds_output_type(Opts, Type, !IO),
    io.write_string(") ", !IO).

:- pred mlds_output_boxed_rval(mlds_to_c_opts::in,
    mlds_type::in, mlds_rval::in, io::di, io::uo) is det.

mlds_output_boxed_rval(Opts, Type, Expr, !IO) :-
    (
        ( Type = mlds_generic_type
        ; Type = mercury_type(_, ctor_cat_variable, _)
        )
    ->
        % It already has type MR_Box, so no cast is needed.
        mlds_output_rval(Opts, Expr, !IO)
    ;
        Expr = ml_unop(cast(OtherType), InnerExpr),
        ( Type = OtherType
        ; is_an_address(InnerExpr)
        )
    ->
        % Avoid unnecessary double-casting -- strip away the inner cast.
        % This is necessary for ANSI/ISO C conformance, to avoid casts
        % from pointers to integers in static initializers.
        mlds_output_boxed_rval(Opts, Type, InnerExpr, !IO)
    ;
        ( Type = mercury_type(builtin_type(builtin_type_float), _, _)
        ; Type = mlds_native_float_type
        )
    ->
        (
            Opts ^ m2co_highlevel_data = yes,
            Expr = ml_const(mlconst_float(Float))
        ->
            mlds_output_float_bits(Opts, Float, !IO)
        ;
            io.write_string("MR_box_float(", !IO),
            mlds_output_rval(Opts, Expr, !IO),
            io.write_string(")", !IO)
        )
    ;
        ( Type = mercury_type(builtin_type(builtin_type_char), _, _)
        ; Type = mlds_native_char_type
        ; Type = mlds_native_bool_type
        ; Type = mlds_native_int_type
        )
    ->
        % We cast first to MR_Word, and then to MR_Box.
        % This is done to avoid spurious warnings about "cast from
        % integer to pointer of different size" from gcc.
        io.write_string("((MR_Box) (MR_Word) (", !IO),
        mlds_output_rval(Opts, Expr, !IO),
        io.write_string("))", !IO)
    ;
        io.write_string("((MR_Box) (", !IO),
        mlds_output_rval(Opts, Expr, !IO),
        io.write_string("))", !IO)
    ).

    % Succeed if the specified rval is an address (possibly tagged and/or
    % cast to a different type).
    %
:- pred is_an_address(mlds_rval::in) is semidet.

is_an_address(ml_mkword(_Tag, Expr)) :-
    is_an_address(Expr).
is_an_address(ml_unop(cast(_), Expr)) :-
    is_an_address(Expr).
is_an_address(ml_mem_addr(_)).
is_an_address(ml_const(mlconst_null(_))).
is_an_address(ml_const(mlconst_code_addr(_))).
is_an_address(ml_const(mlconst_data_addr(_))).

:- pred mlds_output_unboxed_rval(mlds_to_c_opts::in,
    mlds_type::in, mlds_rval::in, io::di, io::uo) is det.

mlds_output_unboxed_rval(Opts, Type, Expr, !IO) :-
    (
        ( Type = mercury_type(builtin_type(builtin_type_float), _, _)
        ; Type = mlds_native_float_type
        )
    ->
        io.write_string("MR_unbox_float(", !IO),
        mlds_output_rval(Opts, Expr, !IO),
        io.write_string(")", !IO)
    ;
        ( Type = mercury_type(builtin_type(builtin_type_char), _, _)
        ; Type = mlds_native_char_type
        ; Type = mlds_native_bool_type
        ; Type = mlds_native_int_type
        )
    ->
        % We cast first to MR_Word, and then to the desired type.
        % This is done to avoid spurious warnings about "cast from
        % pointer to integer of different size" from gcc.
        io.write_string("(", !IO),
        mlds_output_cast(Opts, Type, !IO),
        io.write_string("(MR_Word) ", !IO),
        mlds_output_rval(Opts, Expr, !IO),
        io.write_string(")", !IO)
    ;
        io.write_string("(", !IO),
        mlds_output_cast(Opts, Type, !IO),
        mlds_output_rval(Opts, Expr, !IO),
        io.write_string(")", !IO)
    ).

:- pred mlds_output_std_unop(mlds_to_c_opts::in, builtin_ops.unary_op::in,
    mlds_rval::in, io::di, io::uo) is det.

mlds_output_std_unop(Opts, UnaryOp, Expr, !IO) :-
    c_util.unary_prefix_op(UnaryOp, UnaryOpString),
    io.write_string(UnaryOpString, !IO),
    io.write_string("(", !IO),
    ( UnaryOp = tag ->
        % The MR_tag macro requires its argument to be of type `MR_Word'.
        % XXX Should we put this cast inside the definition of MR_tag?
        io.write_string("(MR_Word) ", !IO)
    ;
        true
    ),
    mlds_output_rval(Opts, Expr, !IO),
    io.write_string(")", !IO).

:- pred mlds_output_binop(mlds_to_c_opts::in, binary_op::in,
    mlds_rval::in, mlds_rval::in, io::di, io::uo) is det.

mlds_output_binop(Opts, Op, X, Y, !IO) :-
    binop_category_string(Op, Category, OpStr),
    (
        Category = array_index_binop,
        mlds_output_bracketed_rval(Opts, X, !IO),
        io.write_string("[", !IO),
        mlds_output_rval(Opts, Y, !IO),
        io.write_string("]", !IO)
    ;
        Category = compound_compare_binop,
        % These operators are intended to be generated only when using
        % the Erlang backend.
        unexpected($module, $pred, "compound_compare_binop")
    ;
        Category = string_compare_binop,
        io.write_string("(strcmp(", !IO),
        mlds_output_rval(Opts, X, !IO),
        io.write_string(", ", !IO),
        mlds_output_rval(Opts, Y, !IO),
        io.write_string(")", !IO),
        io.write_string(" ", !IO),
        io.write_string(OpStr, !IO),
        io.write_string(" ", !IO),
        io.write_string("0)", !IO)
    ;
        ( Category = float_compare_binop
        ; Category = float_arith_binop
        ),
        io.write_string("(", !IO),
        mlds_output_bracketed_rval(Opts, X, !IO),
        io.write_string(" ", !IO),
        io.write_string(OpStr, !IO),
        io.write_string(" ", !IO),
        mlds_output_bracketed_rval(Opts, Y, !IO),
        io.write_string(")", !IO)
    ;
        Category = unsigned_compare_binop,
        io.write_string("(((MR_Unsigned) ", !IO),
        mlds_output_rval(Opts, X, !IO),
        io.write_string(") ", !IO),
        io.write_string(OpStr, !IO),
        io.write_string(" ((MR_Unsigned) ", !IO),
        mlds_output_rval(Opts, Y, !IO),
        io.write_string("))", !IO)
    ;
        Category = int_or_bool_binary_infix_binop,
        % We could treat X + (-const) specially, but we don't.
        % The reason is documented in the equivalent code in llds_out.m.
        io.write_string("(", !IO),
        mlds_output_rval_as_op_arg(Opts, X, !IO),
        io.write_string(" ", !IO),
        io.write_string(OpStr, !IO),
        io.write_string(" ", !IO),
        mlds_output_rval_as_op_arg(Opts, Y, !IO),
        io.write_string(")", !IO)
    ;
        ( Category = macro_binop
        ; Category = float_macro_binop
        ),
        (
            Op = float_from_dword,
            is_aligned_dword_field(X, Y, PtrRval)
        ->
            % gcc produces faster code in this case.
            io.write_string("MR_float_from_dword_ptr(MR_dword_ptr(", !IO),
            mlds_output_rval(Opts, PtrRval, !IO),
            io.write_string("))", !IO)
        ;
            io.write_string(OpStr, !IO),
            io.write_string("(", !IO),
            mlds_output_rval_as_op_arg(Opts, X, !IO),
            io.write_string(", ", !IO),
            mlds_output_rval_as_op_arg(Opts, Y, !IO),
            io.write_string(")", !IO)
        )
    ).

:- pred mlds_output_rval_const(mlds_to_c_opts::in, mlds_rval_const::in,
    io::di, io::uo) is det.

mlds_output_rval_const(_Opts, Const, !IO) :-
    (
        Const = mlconst_true,
        io.write_string("MR_TRUE", !IO)
    ;
        Const = mlconst_false,
        io.write_string("MR_FALSE", !IO)
    ;
        ( Const = mlconst_int(N)
        ; Const = mlconst_enum(N, _)
        ),
        % We need to cast to (MR_Integer) to ensure things like 1 << 32 work
        % when `Integer' is 64 bits but `int' is 32 bits.
        io.write_string("(MR_Integer) ", !IO),
        io.write_int(N, !IO)
    ;
        Const = mlconst_char(C),
        io.write_string("(MR_Char) ", !IO),
        io.write_int(C, !IO)
    ;
        Const = mlconst_foreign(Lang, Value, _Type),
        expect(unify(Lang, lang_c), $module, $pred,
            "mlconst_foreign for language other than C"),
        io.write_string("((int) ", !IO),
        io.write_string(Value, !IO),
        io.write_string(")", !IO)
    ;
        Const = mlconst_float(FloatVal),
        % The cast to (MR_Float) here lets the C compiler do arithmetic in
        % `float' rather than `double' if `MR_Float' is `float' not `double'.
        io.write_string("(MR_Float) ", !IO),
        c_util.output_float_literal(FloatVal, !IO)
    ;
        Const = mlconst_string(String),
        % The cast avoids the following gcc warning
        % "assignment discards qualifiers from pointer target type".
        io.write_string("(MR_String) ", !IO),
        io.write_string("""", !IO),
        c_util.output_quoted_string(String, !IO),
        io.write_string("""", !IO)
    ;
        Const = mlconst_multi_string(String),
        io.write_string("""", !IO),
        c_util.output_quoted_multi_string(String, !IO),
        io.write_string("""", !IO)
    ;
        Const = mlconst_named_const(NamedConst),
        io.write_string(NamedConst, !IO)
    ;
        Const = mlconst_code_addr(CodeAddr),
        mlds_output_code_addr(CodeAddr, !IO)
    ;
        Const = mlconst_data_addr(DataAddr),
        mlds_output_data_addr(DataAddr, !IO)
    ;
        Const = mlconst_null(_),
        io.write_string("NULL", !IO)
    ).

    % Output the bit layout of a floating point literal as an integer, so that
    % it can be cast to a pointer type. We manage to avoid this in all but one
    % situation: in high-level data grades, when the program contains a ground
    % term, of which a sub-term is a no-tag wrapper around float.
    %
    % Technically we should avoid doing this when --cross-compiling is
    % enabled.
    %
    % XXX the problem is the field type in the C struct which is generated for
    % the type which has the no-tag argument. The generated field type is a
    % pointer to the struct for the no-tag type, yet the no-tag optimisation is
    % used, so the field type should either be the struct for the no-tag type
    % (not a pointer) or the type which the no-tag type wraps (which itself may
    % be a no-tag type, etc.)
    %
:- pred mlds_output_float_bits(mlds_to_c_opts::in, float::in, io::di, io::uo)
    is det.

mlds_output_float_bits(Opts, Float, !IO) :-
    expect(unify(Opts ^ m2co_highlevel_data, yes), $module, $pred,
        "should only be required with --high-level-data"),
    Globals = Opts ^ m2co_all_globals,
    globals.lookup_bool_option(Globals, single_prec_float, SinglePrecFloat),
    (
        SinglePrecFloat = yes,
        String = float32_bits_string(Float)
    ;
        SinglePrecFloat = no,
        String = float64_bits_string(Float)
    ),
    io.format("%s /* float-bits: %g */", [s(String), f(Float)], !IO).

:- pred is_aligned_dword_field(mlds_rval::in, mlds_rval::in, mlds_rval::out)
    is semidet.

is_aligned_dword_field(X, Y, ml_mem_addr(Lval)) :-
    X = ml_lval(ml_field(Tag, Addr, FieldIdX, Type, PtrType) @ Lval),
    Y = ml_lval(ml_field(Tag, Addr, FieldIdY, Type, PtrType)),
    FieldIdX = ml_field_offset(ml_const(mlconst_int(Offset))),
    FieldIdY = ml_field_offset(ml_const(mlconst_int(Offset + 1))),
    int.even(Offset).

%-----------------------------------------------------------------------------%

:- pred mlds_output_tag(mlds_tag::in, io::di, io::uo) is det.

mlds_output_tag(Tag, !IO) :-
    io.write_string("MR_mktag(", !IO),
    io.write_int(Tag, !IO),
    io.write_string(")", !IO).

%-----------------------------------------------------------------------------%

:- pred mlds_output_code_addr(mlds_code_addr::in, io::di, io::uo) is det.

mlds_output_code_addr(code_addr_proc(Label, _Sig), !IO) :-
    mlds_output_fully_qualified_proc_label(Label, !IO).
mlds_output_code_addr(code_addr_internal(Label, SeqNum, _Sig), !IO) :-
    mlds_output_fully_qualified_proc_label(Label, !IO),
    io.write_string("_", !IO),
    io.write_int(SeqNum, !IO).

:- pred mlds_output_proc_label(mlds_proc_label::in, io::di, io::uo) is det.

mlds_output_proc_label(mlds_proc_label(PredLabel, ProcId), !IO) :-
    mlds_output_pred_label(PredLabel, !IO),
    proc_id_to_int(ProcId, ModeNum),
    io.write_char('_', !IO),
    io.write_int(ModeNum, !IO).

:- func mlds_proc_label_to_string(mlds_proc_label) = string.

mlds_proc_label_to_string(mlds_proc_label(PredLabel, ProcId)) =
    mlds_pred_label_to_string(PredLabel) ++ "_"
        ++ string.int_to_string(proc_id_to_int(ProcId)).

:- pred mlds_output_data_addr(mlds_data_addr::in, io::di, io::uo) is det.

mlds_output_data_addr(data_addr(ModuleName, DataName), !IO) :-
    % If it is an array type, then we just use the name, otherwise we must
    % prefix the name with `&'.
    (
        (
            DataName = mlds_rtti(RttiId),
            rtti_id_has_array_type(RttiId) = is_array
        ;
            DataName = mlds_tabling_ref(_, TablingId),
            tabling_id_has_array_type(TablingId) = is_array
        )
    ->
        mlds_output_data_var_name(ModuleName, DataName, !IO)
    ;
        io.write_string("&", !IO),
        mlds_output_data_var_name(ModuleName, DataName, !IO)
    ).

:- pred mlds_output_data_var_name(mlds_module_name::in, mlds_data_name::in,
    io::di, io::uo) is det.

mlds_output_data_var_name(ModuleName, DataName, !IO) :-
    (
        DataName = mlds_rtti(RttiId),
        module_qualify_name_of_rtti_id(RttiId) = no
    ->
        true
    ;
        DataName = mlds_scalar_common_ref(_)
    ->
        true
    ;
        mlds_output_module_name(mlds_module_name_to_sym_name(ModuleName), !IO),
        io.write_string("__", !IO)
    ),
    mlds_output_data_name(DataName, !IO).

%-----------------------------------------------------------------------------%
%
% Miscellaneous stuff to handle indentation and generation of
% source context annotations (#line directives).
%

:- pred output_context_opts(mlds_to_c_opts::in, mlds_context::in,
    io::di, io::uo) is det.

output_context_opts(Opts, Context, !IO) :-
    LineNumbers = Opts ^ m2co_line_numbers,
    (
        LineNumbers = yes,
        ProgContext = mlds_get_prog_context(Context),
        term.context_file(ProgContext, FileName),
        term.context_line(ProgContext, LineNumber),
        c_util.always_set_line_num(FileName, LineNumber, !IO)
    ;
        LineNumbers = no
    ).

:- pred output_context_opts(mlds_to_c_opts::in, string::in, int::in,
    io::di, io::uo) is det.

output_context_opts(Opts, FileName, LineNumber, !IO) :-
    LineNumbers = Opts ^ m2co_line_numbers,
    (
        LineNumbers = yes,
        c_util.always_set_line_num(FileName, LineNumber, !IO)
    ;
        LineNumbers = no
    ).

:- pred reset_context_opts(mlds_to_c_opts::in, io::di, io::uo) is det.

reset_context_opts(Opts, !IO) :-
    LineNumbers = Opts ^ m2co_line_numbers,
    (
        LineNumbers = yes,
        c_util.always_reset_line_num(!IO)
    ;
        LineNumbers = no
    ).

    % A value of type `indent' records the number of levels
    % of indentation to indent the next piece of code.
    % Currently we output two spaces for each level of indentation.
:- type indent == int.

:- pred mlds_indent(indent::in, io::di, io::uo) is det.

mlds_indent(N, !IO) :-
    ( N =< 0 ->
        true
    ;
        io.write_string("  ", !IO),
        mlds_indent(N - 1, !IO)
    ).

%-----------------------------------------------------------------------------%
:- end_module ml_backend.mlds_to_c.
%-----------------------------------------------------------------------------%
