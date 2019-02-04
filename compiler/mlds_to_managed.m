%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2002-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
% 
% Module: mlds_to_managed.m.
% Main author: trd, petdr.
% 
% Generate code for the foreign language interface to C# and managed C++.
% 
%-----------------------------------------------------------------------------%

:- module ml_backend.mlds_to_managed.
:- interface.

:- import_module libs.globals.
:- import_module ml_backend.mlds.

:- import_module io.

%-----------------------------------------------------------------------------%

:- inst managed_lang == bound(lang_csharp; lang_managed_cplusplus).

    % Convert the MLDS to the specified foreign language and write
    % it to a file.
    %
:- pred output_managed_code(foreign_language::in(managed_lang), mlds::in,
    io::di, io::uo) is det.

    % Print the header comments of the output module.
    %
:- pred output_src_start(mercury_module_name::in, io::di, io::uo) is det.

    % Print the footer commments of the output module.
    %
:- pred output_src_end(mercury_module_name::in, io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.c_util.
:- import_module libs.compiler_util.
:- import_module libs.options.
:- import_module mdbcomp.prim_data.
:- import_module ml_backend.ilds.
:- import_module ml_backend.mlds_to_il.
:- import_module ml_backend.ml_util.
:- import_module parse_tree.modules.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_out.

:- import_module bool.
:- import_module deconstruct.
:- import_module library.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module set.
:- import_module string.
:- import_module term.

%-----------------------------------------------------------------------------%

output_managed_code(Lang, MLDS, !IO) :-
    MLDS = mlds(ModuleName, _ForeignCode, _Imports, _Defns,
        _InitPreds, _FinalPreds),
    output_src_start(ModuleName, !IO),
    io.nl(!IO),
    generate_code(Lang, MLDS, !IO),
    output_src_end(ModuleName, !IO).

%-----------------------------------------------------------------------------%

output_src_start(ModuleName, !IO) :-
    library.version(Version),
    io.write_strings(
        ["//\n// Automatically generated from `",
        sym_name_to_string(ModuleName),
        ".m' by the\n",
        "// Mercury compiler, version ",
        Version,
        ".\n",
        "// Do not edit.\n",
        "\n\n"], !IO).

output_src_end(ModuleName, !IO) :-
    io.write_string("// End of module: ", !IO),
    prog_out.write_sym_name(ModuleName, !IO),
    io.write_string(". \n", !IO).

%-----------------------------------------------------------------------------%

:- pred generate_code(foreign_language::in(managed_lang), mlds::in,
    io::di, io::uo) is det.

generate_code(Lang, MLDS, !IO) :-
    MLDS = mlds(ModuleName, AllForeignCode, Imports, Defns,
        _InitPreds, _FinalPreds),
    ClassName = class_name(mercury_module_name_to_mlds(ModuleName),
        wrapper_class_name),
    io.nl(!IO),

    % Output any generic header code specific to the target language.
    output_language_specific_header_code(Lang, ModuleName, Imports, !IO),

    % Get the foreign code for the required language.
    ForeignCode = map.lookup(AllForeignCode, Lang),
    generate_foreign_header_code(Lang, ModuleName, ForeignCode, !IO),

    % Output the namespace.
    generate_namespace_details(Lang, ClassName, NameSpaceFmtStr, Namespace),
    io.write_list(Namespace, "\n",
        (pred(N::in, !.IO::di, !:IO::uo) is det :-
            io.format(NameSpaceFmtStr, [s(N)], !IO)
    ), !IO),

    (
        Lang = lang_csharp,
        io.write_strings(["\npublic class " ++ wrapper_class_name, "{\n"],
            !IO)
    ;
        Lang = lang_managed_cplusplus,
        io.write_strings(["\n__gc public class " ++ wrapper_class_name,
            "{\n", "public:\n"], !IO)
    ),

    % Output the contents of pragma foreign_code declarations.
    generate_foreign_code(Lang,
        mercury_module_name_to_mlds(ModuleName), ForeignCode, !IO),

    io.nl(!IO),

    % Output the contents of foreign_proc declarations.
    % Put each one inside a method.
    list.foldl(generate_method_code(Lang,
        mercury_module_name_to_mlds(ModuleName)), Defns, !IO),

    io.write_string("};\n", !IO),

    % Close the namespace braces.
    io.write_list(Namespace, "\n",
        (pred(_N::in, !.IO::di, !:IO::uo) is det :-
            io.write_string("}", !IO)
    ), !IO),
    io.nl(!IO).

:- pred output_language_specific_header_code(
    foreign_language::in(managed_lang), mercury_module_name::in,
    mlds_imports::in, io::di, io::uo) is det.

output_language_specific_header_code(lang_csharp, _ModuleName, _Imports,
        !IO) :-
    get_il_data_rep(DataRep, !IO),
    ( DataRep = il_data_rep(yes, _) ->
        io.write_string("#define MR_HIGHLEVEL_DATA\n", !IO)
    ;
        true
    ),

    % XXX We may be able to drop the mercury namespace soon,
    % as there doesn't appear to be any llds generated code
    % in the C# code anymore.
    io.write_string("using mercury;\n\n", !IO),

    globals.io_lookup_bool_option(sign_assembly, SignAssembly, !IO),
    (
        SignAssembly = yes,
        io.write_string("[assembly:System.Reflection." ++
            "AssemblyKeyFileAttribute(\"mercury.sn\")]\n", !IO)
    ;
        SignAssembly = no
    ).
output_language_specific_header_code(lang_managed_cplusplus, ModuleName,
        Imports, !IO) :-
    get_il_data_rep(DataRep, !IO),
    ( DataRep = il_data_rep(yes, _) ->
        io.write_string("#define MR_HIGHLEVEL_DATA\n", !IO)
    ;
        true
    ),

    io.write_string("#using <mscorlib.dll>\n", !IO),

    ( mercury_std_library_module_name(ModuleName) ->
        io.write_strings([
            "#using ""mercury_dotnet.dll""\n",
            "#using ""mercury_il.dll""\n"
            %,
            %"#using ""private_builtin.dll""\n",
            %"#using ""builtin.dll""\n"
            ], !IO)
    ;
        true
    ),

    list.map(
        (pred(Import::in, Result::out) is det :-
            ( Import = mercury_import(_, Name) ->
                ( is_std_lib_module(Name, StdLibName) ->
                    ( mercury_std_library_module_name(StdLibName) ->
                        Str = sym_name_to_string(StdLibName)
                    ;
                        Str = "mercury"
                    )
                ;
                    SymName = mlds_module_name_to_sym_name(Name),
                    Str = sym_name_to_string(SymName)
                ),
                Result = [Str]
            ;
                Result = []
            )
        ), Imports, ImportListList),
    ActualImports = remove_dups(condense(ImportListList)),

    list.foldl((pred(I::in, !.IO::di, !:IO::uo) is det :-
            io.write_string("#using """, !IO),
            io.write_string(I, !IO),
            io.write_string(".dll""\n", !IO)
        ), ActualImports, !IO),

    io.write_strings([
        "#using """, sym_name_to_string(ModuleName), ".dll""\n",
        "#include ""mercury_mcpp.h""\n",

        % XXX We have to use the mercury namespace, as
        % llds_out still generates some of the code used
        % in the MC++ interface, and so it doesn't have
        % "mercury::" namespace qualifiers.
        "using namespace mercury;\n",
        "\n"], !IO),

    globals.io_lookup_bool_option(sign_assembly, SignAssembly, !IO),
    (
        SignAssembly = yes,
        io.write_string("[assembly:System::Reflection::" ++
            "AssemblyKeyFileAttribute(\"mercury.sn\")];\n", !IO)
    ;
        SignAssembly = no
    ).

:- pred generate_foreign_header_code(foreign_language::in(managed_lang),
    module_name::in, mlds_foreign_code::in, io::di, io::uo) is det.

generate_foreign_header_code(Lang, ModuleName, ForeignCode, !IO) :-
    ForeignCode = mlds_foreign_code(RevHeaderCode, RevImports,
        _RevBodyCode, _ExportDefns),
    % Only MC++ can declare which assemblies it refers to in its
    % source file.  C# declares which assemblies it refers to via
    % command line arguments to the C# compiler.
    (
        Lang = lang_managed_cplusplus,
        Imports = list.reverse(RevImports),
        list.foldl(
            (pred(ForeignImport::in, !.IO::di, !:IO::uo) is det :-
                module_name_to_search_file_name(
                    foreign_import_module_name_from_module(ForeignImport,
                        ModuleName),
                    ".dll", FileName, !IO),
                io.write_strings(["#using """, FileName, """\n"], !IO)
            ), Imports, !IO)
    ;
        Lang = lang_csharp
    ),

    HeaderCode = list.reverse(RevHeaderCode),
    io.write_list(HeaderCode, "\n",
        % XXX Ignoring _IsLocal may not be the right thing to do.
        (pred(foreign_decl_code(CodeLang, _IsLocal, Code, Context)::in,
                !.IO::di, !:IO::uo) is det :-
            output_context(Lang, Context, !IO),
            ( CodeLang = Lang ->
                io.write_string(Code, !IO),
                io.nl(!IO)
            ;
                sorry(this_file, "wrong foreign code")
            ),
            output_reset_context(Lang, !IO)
        ), !IO).

:- pred generate_namespace_details(foreign_language::in(managed_lang),
    ilds.class_name::in, string::out, list(string)::out) is det.

generate_namespace_details(Lang, ClassName, NameSpaceFmtStr, Namespace) :-
    % XXX We should consider what happens if we need to mangle
    % the namespace name.
    (
        Lang = lang_csharp,
        NameExt = "__csharp_code",
        NameSpaceFmtStr = "namespace @%s {"
    ;
        Lang = lang_managed_cplusplus,
        NameExt = "__cpp_code",
        NameSpaceFmtStr = "namespace %s {"
    ),

    Namespace0 = get_class_namespace(ClassName),
    ( list.reverse(Namespace0) = [Head | Tail] ->
        Namespace = list.reverse([Head ++ NameExt | Tail])
    ;
        Namespace = Namespace0
    ).

:- pred generate_foreign_code(foreign_language::in(managed_lang),
    mlds_module_name::in, mlds_foreign_code::in, io::di, io::uo) is det.

generate_foreign_code(Lang, _ModuleName, ForeignCode, !IO) :-
    ForeignCode = mlds_foreign_code(_RevHeaderCode, _RevImports,
        RevBodyCode, _ExportDefns),
    BodyCode = list.reverse(RevBodyCode),
    io.write_list(BodyCode, "\n",
        (pred(user_foreign_code(CodeLang, Code, Context)::in,
                !.IO::di, !:IO::uo) is det :-
            output_context(Lang, Context, !IO),
            ( Lang = CodeLang ->
                io.write_string(Code, !IO),
                io.nl(!IO)
            ;
                sorry(this_file, "wrong foreign code")
            ),
            output_reset_context(Lang, !IO)
    ), !IO).

:- pred generate_method_code(foreign_language::in(managed_lang),
    mlds_module_name::in, mlds_defn::in, io::di, io::uo) is det.

generate_method_code(_, _, mlds_defn(entity_export(_), _, _, _), !IO).
generate_method_code(_, _, mlds_defn(entity_data(_), _, _, _), !IO).
generate_method_code(_, _, mlds_defn(entity_type(_, _), _, _, _), !IO).
generate_method_code(Lang, _ModuleName, Defn, !IO) :-
    Defn = mlds_defn(entity_function(PredLabel, ProcId, MaybeSeqNum, _PredId),
        _Context, _DeclFlags, Entity),
    (
        % XXX we ignore the attributes
        Entity = mlds_function(_, Params, body_defined_here(Statement),
            _Attributes, EnvVarNames),
        has_foreign_languages(Statement, Langs),
        list.member(Lang, Langs)
    ->
        expect(set.empty(EnvVarNames), this_file,
            "generate_method_code: EnvVarNames"),
        get_il_data_rep(DataRep, !IO),
        Params = mlds_func_params(Inputs, Outputs),
        (
            Outputs = [],
            ReturnType = void
        ;
            Outputs = [MLDSReturnType],
            mlds_type_to_ilds_type(DataRep, MLDSReturnType) =
                il_type(_, SimpleType),
            ReturnType = simple_type(SimpleType)
        ;
            Outputs = [_, _ | _],
            % C# and MC++ don't support multiple return values
            sorry(this_file, "multiple return values")
        ),

        predlabel_to_id(PredLabel, ProcId, MaybeSeqNum, Id),
        (
            Lang = lang_csharp,
            io.write_string("public static ", !IO)
        ;
            Lang = lang_managed_cplusplus,
            io.write_string("static ", !IO)
        ),
        write_il_ret_type_as_foreign_type(Lang, ReturnType, !IO),

        io.write_string(" ", !IO),

        io.write_string(Id, !IO),
        io.write_string("(", !IO),
        io.write_list(Inputs, ", ",
            write_input_arg_as_foreign_type(Lang), !IO),
        io.write_string(")", !IO),
        io.nl(!IO),

        io.write_string("{\n", !IO),
        write_statement(Lang, Inputs, Statement, !IO),
        io.write_string("}\n", !IO)
    ;
        true
    ).

:- pred write_statement(foreign_language::in(managed_lang),
    mlds_arguments::in, statement::in, io::di, io::uo) is det.

write_statement(Lang, Args, statement(Statement, Context), !IO) :-
    (
        % XXX petdr
        Statement = atomic(outline_foreign_proc(Lang, OutlineArgs,
            _Lvals, Code))
    ->
        list.foldl(write_outline_arg_init(Lang), OutlineArgs, !IO),
        output_context(Lang, mlds_get_prog_context(Context), !IO),
        io.write_string(Code, !IO),
        io.nl(!IO),
        output_reset_context(Lang, !IO),
        list.foldl(write_outline_arg_final(Lang), OutlineArgs, !IO)
    ;
        Statement = block(Defns, Statements)
    ->
        io.write_list(Defns, "", write_defn_decl(Lang), !IO),
        io.write_string("{\n", !IO),
        io.write_list(Statements, "", write_statement(Lang, Args), !IO),
        io.write_string("\n}\n", !IO)
    ;
        Statement = return(Rvals)
    ->
        ( Rvals = [Rval] ->
            io.write_string("return ", !IO),
            write_rval(Lang, Rval, !IO),
            io.write_string(";\n", !IO)
        ;
            sorry(this_file, "multiple return values")
        )
    ;
        Statement = atomic(assign(LVal, RVal))
    ->
        write_lval(Lang, LVal, !IO),
        io.write_string(" = ", !IO),
        write_rval(Lang, RVal, !IO),
        io.write_string(";\n", !IO)
    ;
        functor(Statement, canonicalize, SFunctor, _Arity),
        sorry(this_file, "foreign code output for " ++ SFunctor)
    ).

:- pred write_outline_arg_init(foreign_language::in(managed_lang),
    outline_arg::in, io::di, io::uo) is det.

write_outline_arg_init(Lang, in(Type, VarName, Rval), !IO) :-
    write_parameter_type(Lang, Type, !IO),
    io.write_string(" ", !IO),
    io.write_string(VarName, !IO),
    io.write_string(" = ", !IO),
    write_rval(Lang, Rval, !IO),
    io.write_string(";\n", !IO).
write_outline_arg_init(Lang, out(Type, VarName, _Lval), !IO) :-
    write_parameter_type(Lang, Type, !IO),
    io.write_string(" ", !IO),
    io.write_string(VarName, !IO),
    % In C# give output variables a default value to avoid warnings.
    (
        Lang = lang_csharp,
        io.write_string(" = ", !IO),
        write_parameter_initializer(Lang, Type, !IO)
    ;
        Lang = lang_managed_cplusplus
    ),
    io.write_string(";\n", !IO).
write_outline_arg_init(_Lang, unused, !IO).

:- pred write_outline_arg_final(foreign_language::in(managed_lang),
    outline_arg::in, io::di, io::uo) is det.

write_outline_arg_final(_Lang, in(_, _, _), !IO).
write_outline_arg_final(Lang, out(_Type, VarName, Lval), !IO) :-
    write_lval(Lang, Lval, !IO),
    io.write_string(" = ", !IO),
    io.write_string(VarName, !IO),
    io.write_string(";\n", !IO).
write_outline_arg_final(_Lang, unused, !IO).

:- pred write_declare_and_assign_local(foreign_language::in(managed_lang),
    mlds_argument::in, io::di, io::uo) is det.

write_declare_and_assign_local(Lang, mlds_argument(Name, Type, _GcCode),
        !IO) :-
    ( Name = entity_data(var(VarName0)) ->
        VarName = VarName0
    ;
        unexpected(this_file, "not a variable name")
    ),

    % A pointer type is an output type.
    ( Type = mlds_ptr_type(OutputType) ->
        ( is_anonymous_variable(VarName) ->
            true
        ;
            write_parameter_type(Lang, OutputType, !IO),
            io.write_string(" ", !IO),
            write_mlds_var_name_for_local(VarName, !IO),

            % In C# give output types a default value to avoid warnings.
            (
                Lang = lang_csharp,
                io.write_string(" = ", !IO),
                write_parameter_initializer(Lang, OutputType, !IO)
            ;
                Lang = lang_managed_cplusplus
            ),
            io.write_string(";\n", !IO)
        )
    ;
        write_parameter_type(Lang, Type, !IO),
        io.write_string(" ", !IO),
        write_mlds_var_name_for_local(VarName, !IO),
        io.write_string(" = ", !IO),
        write_mlds_var_name_for_parameter(VarName, !IO),
        io.write_string(";\n", !IO)
    ).

:- pred write_assign_local_to_output(foreign_language::in(managed_lang),
    mlds_argument::in, io::di, io::uo) is det.

write_assign_local_to_output(Lang, mlds_argument(Name, Type, _GcCode), !IO) :-
    ( Name = entity_data(var(VarName0)) ->
        VarName = VarName0
    ;
        unexpected(this_file, "not a variable name")
    ),

    % A pointer type is an output type.
    (
        Type = mlds_ptr_type(_OutputType),
        not is_anonymous_variable(VarName)
    ->
        (
            Lang = lang_csharp
        ;
            Lang = lang_managed_cplusplus,
            io.write_string("*", !IO)
        ),
        write_mlds_var_name_for_parameter(VarName, !IO),
        io.write_string(" = ", !IO),
        write_mlds_var_name_for_local(VarName, !IO),
        io.write_string(";\n", !IO)
    ;
        true
    ).

:- pred is_anonymous_variable(mlds_var_name::in) is semidet.

is_anonymous_variable(mlds_var_name(Name, _)) :-
    string.prefix(Name, "_").

%-----------------------------------------------------------------------------%

:- pred output_context(foreign_language::in(managed_lang), prog_context::in,
    io::di, io::uo) is det.

output_context(_Lang, Context, !IO) :-
    term.context_file(Context, File),
    term.context_line(Context, Line),
    c_util.set_line_num(File, Line, !IO).

:- pred output_reset_context(foreign_language::in(managed_lang),
    io::di, io::uo) is det.

output_reset_context(_i, !IO) :-
    c_util.reset_line_num(!IO).

:- pred write_rval(foreign_language::in(managed_lang), mlds_rval::in,
    io::di, io::uo) is det.

write_rval(Lang, lval(Lval), !IO) :-
    write_lval(Lang, Lval, !IO).
write_rval(_Lang, mkword(_Tag, _Rval), !IO) :-
    sorry(this_file, "mkword rval").
write_rval(Lang, const(RvalConst), !IO) :-
    write_rval_const(Lang, RvalConst, !IO).
write_rval(Lang, unop(Unop, Rval), !IO) :-
    (
        Unop = std_unop(StdUnop),
        c_util.unary_prefix_op(StdUnop, UnopStr)
    ->
        io.write_string(UnopStr, !IO),
        io.write_string("(", !IO),
        write_rval(Lang, Rval, !IO),
        io.write_string(")", !IO)
    ;
        Unop = cast(Type)
    ->
        io.write_string("(", !IO),
        write_parameter_type(Lang, Type, !IO),
        io.write_string(") ", !IO),
        write_rval(Lang, Rval, !IO)
    ;
        sorry(this_file, "box or unbox unop")
    ).
write_rval(Lang, binop(Binop, Rval1, Rval2), !IO) :-
    ( c_util.binary_infix_op(Binop, BinopStr) ->
        io.write_string("(", !IO),
        write_rval(Lang, Rval1, !IO),
        io.write_string(") ", !IO),
        io.write_string(BinopStr, !IO),
        io.write_string(" (", !IO),
        write_rval(Lang, Rval2, !IO),
        io.write_string(")", !IO)
    ;
        sorry(this_file, "binop rval")
    ).
write_rval(_Lang, mem_addr(_), !IO) :-
    sorry(this_file, "mem_addr rval").
write_rval(_Lang, self(_), !IO) :-
    sorry(this_file, "self rval").

:- pred write_rval_const(foreign_language::in(managed_lang),
    mlds_rval_const::in, io::di, io::uo) is det.

write_rval_const(_Lang, mlconst_true, !IO) :-
    io.write_string("1", !IO).
write_rval_const(_Lang, mlconst_false, !IO) :-
    io.write_string("0", !IO).
write_rval_const(_Lang, mlconst_int(I), !IO) :-
    io.write_int(I, !IO).
write_rval_const(_Lang, mlconst_float(F), !IO) :-
    io.write_float(F, !IO).
    % XXX We don't quote this correctly.
write_rval_const(_Lang, mlconst_string(S), !IO) :-
    io.write_string("""", !IO),
    c_util.output_quoted_string(S, !IO),
    io.write_string("""", !IO).
write_rval_const(_Lang, mlconst_multi_string(S), !IO) :-
    io.write_string("""", !IO),
    c_util.output_quoted_multi_string(S, !IO),
    io.write_string("""", !IO).
write_rval_const(Lang, mlconst_code_addr(CodeAddrConst), !IO) :-
    (
        CodeAddrConst = code_addr_proc(ProcLabel, _FuncSignature),
        mangle_mlds_proc_label(ProcLabel, no, ClassName, MangledName),
        write_class_name(Lang, ClassName, !IO),
        write_field_selector(Lang, !IO),
        io.write_string(MangledName, !IO)
    ;
        CodeAddrConst = code_addr_internal(ProcLabel, SeqNum, _FuncSignature),
        mangle_mlds_proc_label(ProcLabel, yes(SeqNum), ClassName, MangledName),
        write_class_name(Lang, ClassName, !IO),
        write_field_selector(Lang, !IO),
        io.write_string(MangledName, !IO)
    ).
write_rval_const(_Lang, mlconst_data_addr(_), !IO) :-
    sorry(this_file, "data_addr_const rval").
write_rval_const(Lang, mlconst_null(_), !IO) :-
    (
        Lang = lang_csharp,
        io.write_string("null", !IO)
    ;
        Lang = lang_managed_cplusplus,
        io.write_string("NULL", !IO)
    ).

:- pred write_lval(foreign_language::in(managed_lang), mlds_lval::in,
    io::di, io::uo) is det.

write_lval(Lang, field(_, Rval, named_field(FieldId, _Type), _, _), !IO) :-
    io.write_string("(", !IO),
    write_rval(Lang, Rval, !IO),
    io.write_string(")", !IO),
    write_field_selector(Lang, !IO),
    FieldId = qual(_, _, FieldName),
    io.write_string(FieldName, !IO).
write_lval(Lang, field(_, Rval, offset(OffSet), _, _), !IO) :-
    io.write_string("(", !IO),
    write_rval(Lang, Rval, !IO),
    io.write_string(")", !IO),
    io.write_string("[", !IO),
    write_rval(Lang, OffSet, !IO),
    io.write_string("]", !IO).
write_lval(Lang, mem_ref(Rval, _), !IO) :-
    (
        Lang = lang_managed_cplusplus,
        io.write_string("*", !IO)
    ;
        Lang = lang_csharp
    ),
    write_rval(Lang, Rval, !IO).
write_lval(_Lang, global_var_ref(_), !IO) :-
    sorry(this_file, "write_lval: global_var_ref NYI").
write_lval(_Lang, var(Var, _VarType), !IO) :-
    Var = qual(_, _, VarName),
    write_mlds_var_name_for_parameter(VarName, !IO).

:- pred write_field_selector(foreign_language::in(managed_lang),
    io::di, io::uo) is det.

write_field_selector(lang_csharp, !IO) :-
    io.write_string(".", !IO).
write_field_selector(lang_managed_cplusplus, !IO) :-
    io.write_string("->", !IO).

:- pred write_defn_decl(foreign_language::in(managed_lang), mlds_defn::in,
    io::di, io::uo) is det.

write_defn_decl(Lang, Defn, !IO) :-
    Defn = mlds_defn(Name, _Context, _Flags, DefnBody),
    (
        DefnBody = mlds_data(Type, _Initializer, _GCStatement),
        Name = entity_data(var(VarName))
    ->
        write_parameter_type(Lang, Type, !IO),
        io.write_string(" ", !IO),
        write_mlds_var_name_for_parameter(VarName, !IO),
        io.write_string(";\n", !IO)
    ;
        % XXX We should implement others.
        sorry(this_file, "data_addr_const rval")
    ).

:- pred write_parameter_type(foreign_language::in(managed_lang),
    mlds_type::in, io::di, io::uo) is det.

write_parameter_type(Lang, Type, !IO) :-
    get_il_data_rep(DataRep, !IO),
    ILType = mlds_type_to_ilds_type(DataRep, Type),
    write_il_type_as_foreign_type(Lang, ILType, !IO).

:- pred write_input_arg_as_foreign_type(foreign_language::in(managed_lang),
    mlds_argument::in, io::di, io::uo) is det.

write_input_arg_as_foreign_type(Lang, Arg, !IO) :-
    Arg = mlds_argument(EntityName, Type, _GCStatement),
    get_il_data_rep(DataRep, !IO),
    write_il_type_as_foreign_type(Lang, mlds_type_to_ilds_type(DataRep, Type),
        !IO),
    io.write_string(" ", !IO),
    ( EntityName = entity_data(var(VarName)) ->
        write_mlds_var_name_for_parameter(VarName, !IO)
    ;
        unexpected(this_file, "found a variable in a list")
    ).

:- pred write_parameter_initializer(foreign_language::in(managed_lang),
    mlds_type::in, io::di, io::uo) is det.

write_parameter_initializer(lang_managed_cplusplus, _Type, !IO) :-
    unexpected(this_file, "initializer for MC++").
write_parameter_initializer(lang_csharp, Type, !IO) :-
    get_il_data_rep(DataRep, !IO),
    ILType = mlds_type_to_ilds_type(DataRep, Type),
    ILType = il_type(_, ILSimpleType),
    write_csharp_initializer(ILSimpleType, !IO).

:- pred write_il_ret_type_as_foreign_type(foreign_language::in(managed_lang),
    ret_type::in, io::di, io::uo) is det.

write_il_ret_type_as_foreign_type(_Lang, void, !IO) :-
    io.write_string("void", !IO).
write_il_ret_type_as_foreign_type(Lang, simple_type(T), !IO) :-
    write_il_simple_type_as_foreign_type(Lang, T, !IO).

:- pred write_il_type_as_foreign_type(foreign_language::in(managed_lang),
    il_type::in, io::di, io::uo) is det.

write_il_type_as_foreign_type(Lang, il_type(Modifiers, SimpleType), !IO) :-
    io.write_list(Modifiers, " ",
        write_il_type_modifier_as_foreign_type(Lang), !IO),
    write_il_simple_type_as_foreign_type(Lang, SimpleType, !IO).

:- pred write_il_type_modifier_as_foreign_type(
    foreign_language::in(managed_lang), ilds.type_modifier::in,
    io::di, io::uo) is det.

write_il_type_modifier_as_foreign_type(_Lang, const, !IO) :-
    io.write_string("const", !IO).
write_il_type_modifier_as_foreign_type(_Lang, readonly, !IO) :-
    io.write_string("readonly", !IO).
write_il_type_modifier_as_foreign_type(_Lang, volatile, !IO) :-
    io.write_string("volatile", !IO).

    % XXX Need to revisit this and choose types appropriately.
    %
:- pred write_il_simple_type_as_foreign_type(
    foreign_language::in(managed_lang),
    simple_type::in, io::di, io::uo) is det.

write_il_simple_type_as_foreign_type(lang_csharp, Type, !IO) :-
    write_il_simple_type_as_foreign_type_cs(Type, !IO).
write_il_simple_type_as_foreign_type(lang_managed_cplusplus, Type, !IO) :-
    write_il_simple_type_as_foreign_type_mcpp(Type, !IO).

:- pred write_il_simple_type_as_foreign_type_cs(
    simple_type::in, io::di, io::uo) is det.

write_il_simple_type_as_foreign_type_cs(int8, !IO) :-
    io.write_string("sbyte", !IO).
write_il_simple_type_as_foreign_type_cs(int16, !IO) :-
    io.write_string("short", !IO).
write_il_simple_type_as_foreign_type_cs(int32, !IO) :-
    io.write_string("int", !IO).
write_il_simple_type_as_foreign_type_cs(int64, !IO) :-
    io.write_string("long", !IO).
write_il_simple_type_as_foreign_type_cs(uint8, !IO) :-
    io.write_string("byte", !IO).
write_il_simple_type_as_foreign_type_cs(uint16, !IO) :-
    io.write_string("ushort", !IO).
write_il_simple_type_as_foreign_type_cs(uint32, !IO) :-
    io.write_string("uint", !IO).
write_il_simple_type_as_foreign_type_cs(uint64, !IO) :-
    io.write_string("ulong", !IO).
write_il_simple_type_as_foreign_type_cs(native_int, !IO) :-
    io.write_string("int", !IO).
write_il_simple_type_as_foreign_type_cs(native_uint, !IO) :-
    io.write_string("uint", !IO).
write_il_simple_type_as_foreign_type_cs(float32, !IO) :-
    io.write_string("float", !IO).
write_il_simple_type_as_foreign_type_cs(float64, !IO) :-
    io.write_string("double", !IO).
write_il_simple_type_as_foreign_type_cs(native_float, !IO) :-
    io.write_string("float", !IO).
write_il_simple_type_as_foreign_type_cs(bool, !IO) :-
    io.write_string("bool", !IO).
write_il_simple_type_as_foreign_type_cs(char, !IO) :-
    io.write_string("char", !IO).
write_il_simple_type_as_foreign_type_cs(string, !IO) :-
    io.write_string("string", !IO).
write_il_simple_type_as_foreign_type_cs(object, !IO) :-
    io.write_string("object", !IO).
write_il_simple_type_as_foreign_type_cs(refany, !IO) :-
    io.write_string("mercury.MR_RefAny", !IO).
write_il_simple_type_as_foreign_type_cs(class(ClassName), !IO) :-
    write_class_name(lang_csharp, ClassName, !IO).
write_il_simple_type_as_foreign_type_cs(valuetype(ClassName), !IO) :-
    write_class_name(lang_csharp, ClassName, !IO).
write_il_simple_type_as_foreign_type_cs(interface(_ClassName), !IO) :-
    sorry(this_file, "interfaces").
write_il_simple_type_as_foreign_type_cs('[]'(Type, Bounds), !IO) :-
    write_il_type_as_foreign_type(lang_csharp, Type, !IO),
    io.write_string("[]", !IO),
    (
        Bounds = []
    ;
        Bounds = [_ | _],
        sorry(this_file, "arrays with bounds")
    ).
write_il_simple_type_as_foreign_type_cs('&'(Type), !IO) :-
    % XXX Is this always right?
    io.write_string("ref ", !IO),
    write_il_type_as_foreign_type(lang_csharp, Type, !IO).
write_il_simple_type_as_foreign_type_cs('*'(Type), !IO) :-
    write_il_type_as_foreign_type(lang_csharp, Type, !IO),
    io.write_string(" *", !IO).

:- pred write_il_simple_type_as_foreign_type_mcpp(
    simple_type::in, io::di, io::uo) is det.

write_il_simple_type_as_foreign_type_mcpp(int8, !IO) :-
    io.write_string("mercury::MR_Integer8", !IO).
write_il_simple_type_as_foreign_type_mcpp(int16, !IO) :-
    io.write_string("mercury::MR_Integer16", !IO).
write_il_simple_type_as_foreign_type_mcpp(int32, !IO) :-
    io.write_string("mercury::MR_Integer", !IO).
write_il_simple_type_as_foreign_type_mcpp(int64, !IO) :-
    io.write_string("mercury::MR_Integer64", !IO).
write_il_simple_type_as_foreign_type_mcpp(uint8, !IO) :-
    io.write_string("unsigned int", !IO).
write_il_simple_type_as_foreign_type_mcpp(uint16, !IO) :-
    io.write_string("unsigned int", !IO).
write_il_simple_type_as_foreign_type_mcpp(uint32, !IO) :-
    io.write_string("unsigned int", !IO).
write_il_simple_type_as_foreign_type_mcpp(uint64, !IO) :-
    io.write_string("unsigned int", !IO).
write_il_simple_type_as_foreign_type_mcpp(native_int, !IO) :-
    io.write_string("mercury::MR_Integer", !IO).
write_il_simple_type_as_foreign_type_mcpp(native_uint, !IO) :-
    io.write_string("unsigned int", !IO).
write_il_simple_type_as_foreign_type_mcpp(float32, !IO) :-
    io.write_string("float", !IO).
write_il_simple_type_as_foreign_type_mcpp(float64, !IO) :-
    io.write_string("mercury::MR_Float", !IO).
write_il_simple_type_as_foreign_type_mcpp(native_float, !IO) :-
    io.write_string("mercury::MR_Float", !IO).
write_il_simple_type_as_foreign_type_mcpp(bool, !IO) :-
    io.write_string("mercury::MR_Bool", !IO).
write_il_simple_type_as_foreign_type_mcpp(char, !IO) :-
    io.write_string("mercury::MR_Char", !IO).
write_il_simple_type_as_foreign_type_mcpp(string, !IO) :-
    io.write_string("mercury::MR_String", !IO).
write_il_simple_type_as_foreign_type_mcpp(object, !IO) :-
    io.write_string("mercury::MR_Box", !IO).
write_il_simple_type_as_foreign_type_mcpp(refany, !IO) :-
    io.write_string("mercury::MR_RefAny", !IO).
write_il_simple_type_as_foreign_type_mcpp(class(ClassName), !IO) :-
    ( ClassName = il_generic_class_name ->
        io.write_string("mercury::MR_Box", !IO)
    ;
        io.write_string("public class ", !IO),
        write_class_name(lang_managed_cplusplus, ClassName, !IO),
        io.write_string(" *", !IO)
    ).
write_il_simple_type_as_foreign_type_mcpp(valuetype(ClassName), !IO) :-
    io.write_string("__value class ", !IO),
    write_class_name(lang_managed_cplusplus, ClassName, !IO).
        % XXX this is not the right syntax
write_il_simple_type_as_foreign_type_mcpp(interface(ClassName), !IO) :-
    io.write_string("interface ", !IO),
    write_class_name(lang_managed_cplusplus, ClassName, !IO),
    io.write_string(" *", !IO).
        % XXX this needs more work
write_il_simple_type_as_foreign_type_mcpp('[]'(_Type, _Bounds), !IO) :-
    io.write_string("mercury::MR_Word", !IO).
write_il_simple_type_as_foreign_type_mcpp('&'(Type), !IO) :-
    io.write_string("MR_Ref(", !IO),
    write_il_type_as_foreign_type(lang_managed_cplusplus, Type, !IO),
    io.write_string(")", !IO).
write_il_simple_type_as_foreign_type_mcpp('*'(Type), !IO) :-
    write_il_type_as_foreign_type(lang_managed_cplusplus, Type, !IO),
    io.write_string(" *", !IO).

:- pred write_csharp_initializer(simple_type::in, io::di, io::uo) is det.

write_csharp_initializer(int8, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(int16, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(int32, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(int64, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(uint8, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(uint16, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(uint32, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(uint64, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(native_int, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(native_uint, !IO) :-
    io.write_string("0", !IO).
write_csharp_initializer(float32, !IO) :-
    io.write_string("0.0", !IO).
write_csharp_initializer(float64, !IO) :-
    io.write_string("0.0", !IO).
write_csharp_initializer(native_float, !IO) :-
    io.write_string("0.0", !IO).
write_csharp_initializer(bool, !IO) :-
    io.write_string("false", !IO).
write_csharp_initializer(char, !IO) :-
    io.write_string("'\\0'", !IO).
write_csharp_initializer(string, !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer(object, !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer(refany, !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer(class(_ClassName), !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer(interface(_ClassName), !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer('[]'(_Type, _Bounds), !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer('&'(_Type), !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer('*'(_Type), !IO) :-
    io.write_string("null", !IO).
write_csharp_initializer(valuetype(ClassName), !IO) :-
    io.write_string("new ", !IO),
    write_class_name(lang_csharp, ClassName, !IO),
    io.write_string("()", !IO).

:- pred write_class_name(foreign_language::in(managed_lang),
    structured_name::in, io::di, io::uo) is det.

write_class_name(Lang, structured_name(_Asm, DottedName, NestedClasses),
        !IO) :-
    (
        Lang = lang_csharp,
        Sep = "."
    ;
        Lang = lang_managed_cplusplus,
        Sep = "::"
    ),
    io.write_list(DottedName ++ NestedClasses, Sep, io.write_string, !IO).

:- pred write_mlds_var_name_for_local(mlds_var_name::in,
    io::di, io::uo) is det.

write_mlds_var_name_for_local(mlds_var_name(Name, _MaybeNum), !IO) :-
    io.write_string(Name, !IO).

:- pred write_mlds_var_name_for_parameter(mlds_var_name::in,
    io::di, io::uo) is det.

write_mlds_var_name_for_parameter(mlds_var_name(Name, MaybeNum), !IO) :-
    io.write_string(Name, !IO),
    (
        MaybeNum = yes(Num),
        io.write_string("_", !IO),
        io.write_int(Num, !IO)
    ;
        MaybeNum = no
    ).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "mlds_to_managed.m".

%-----------------------------------------------------------------------------%
