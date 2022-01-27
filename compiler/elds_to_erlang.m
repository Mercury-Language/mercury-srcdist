%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2007-2011 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: elds_to_erlang.m.
% Main authors: wangp.
%
% Convert ELDS to Erlang code.
%
%-----------------------------------------------------------------------------%

:- module erl_backend.elds_to_erlang.
:- interface.

:- import_module erl_backend.elds.
:- import_module hlds.hlds_module.

:- import_module bool.
:- import_module io.

%-----------------------------------------------------------------------------%

    % output_elds(ELDS, !IO):
    %
    % Output Erlang code to the appropriate .erl file
    % and exported foreign_decls to the corresponding .hrl file.
    % The file names are determined by the module name.
    %
:- pred output_elds(module_info::in, elds::in, bool::out, io::di, io::uo)
    is det.

    % Output a Erlang function definition to the current output stream.
    % This is exported for debugging purposes.
    %
:- pred output_defn(module_info::in, elds_defn::in, io::di, io::uo)
    is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module backend_libs.rtti.
:- import_module hlds.hlds_pred.
:- import_module hlds.hlds_rtti.
:- import_module hlds.pred_table.
:- import_module hlds.special_pred.
:- import_module libs.file_util.
:- import_module libs.globals.
:- import_module mdbcomp.builtin_modules.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.sym_name.
:- import_module parse_tree.file_names.
:- import_module parse_tree.module_cmds.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_foreign.
:- import_module parse_tree.prog_type.

:- import_module char.
:- import_module int.
:- import_module library.
:- import_module list.
:- import_module maybe.
:- import_module pair.
:- import_module require.
:- import_module set.
:- import_module string.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

output_elds(ModuleInfo, ELDS, Succeeded, !IO) :-
    Name = ELDS ^ elds_name,
    module_info_get_globals(ModuleInfo, Globals),
    module_source_filename(Globals, Name, SourceFileName, !IO),
    module_name_to_file_name(Globals, Name, ".erl", do_create_dirs,
        TargetFileName, !IO),
    module_name_to_file_name(Globals, Name, ".hrl", do_create_dirs,
        HeaderFileName, !IO),
    output_to_file(Globals, TargetFileName,
        output_erl_file(ModuleInfo, ELDS, SourceFileName),
        TargetCodeSucceeded, !IO),
    (
        TargetCodeSucceeded = yes,
        % Avoid updating the timestamp on the `.hrl' file if it hasn't changed.
        TmpHeaderFileName = HeaderFileName ++ ".tmp",
        output_to_file(Globals, TmpHeaderFileName,
            output_hrl_file(Name, ELDS, SourceFileName),
            Succeeded, !IO),
        (
            Succeeded = yes,
            update_interface(Globals, HeaderFileName, !IO)
        ;
            Succeeded = no
        )
    ;
        TargetCodeSucceeded = no,
        Succeeded = no
    ).

:- pred output_erl_file(module_info::in, elds::in, string::in,
    io::di, io::uo) is det.

output_erl_file(ModuleInfo, ELDS, SourceFileName, !IO) :-
    ELDS = elds(ModuleName, Imports, ForeignDecls, ForeignBodies, ProcDefns,
        ForeignExportDefns, RttiDefns, InitPreds, FinalPreds),
    AddMainWrapper = should_add_main_wrapper(ModuleInfo),

    % Output intro.
    output_do_no_edit_comment(SourceFileName, !IO),

    % Write module annotations.
    io.write_string("-module(", !IO),
    output_atom(erlang_module_name_to_str(ModuleName), !IO),
    io.write_string(").\n", !IO),

    io.write_string("-export([", !IO),
    list.foldl2(output_export_ann(ModuleInfo), ProcDefns, no, NeedComma0, !IO),
    list.foldl2(output_foreign_export_ann, ForeignExportDefns,
        NeedComma0, NeedComma1, !IO),
    list.foldl2(output_rtti_export_ann(ModuleInfo), RttiDefns,
        NeedComma1, _NeedComma, !IO),
    output_wrapper_init_fn_export_ann(AddMainWrapper, InitPreds, FinalPreds,
        !IO),
    io.write_string("]).\n", !IO),

    % Useful for debugging.
    io.write_string("% -compile(export_all).\n", !IO),

    module_info_get_globals(ModuleInfo, Globals),
    set.fold(output_include_header_ann(Globals), Imports, !IO),

    % Output foreign declarations.
    list.foldl(output_foreign_decl_code(SourceFileName), ForeignDecls, !IO),

    % Write directives for mkinit_erl.
    ErlangModuleNameStr = erlang_module_name_to_str(ModuleName),
    (
        InitPreds = []
    ;
        InitPreds = [_ | _],
        io.write_string("% REQUIRED_INIT ", !IO),
        output_atom(ErlangModuleNameStr, !IO),
        io.write_string(":mercury__required_init\n", !IO)
    ),
    (
        FinalPreds = []
    ;
        FinalPreds = [_ | _],
        io.write_string("% REQUIRED_FINAL ", !IO),
        output_atom(ErlangModuleNameStr, !IO),
        io.write_string(":mercury__required_final\n", !IO)
    ),
    EnvVarNames = elds_get_env_var_names(ProcDefns),
    set.fold(output_env_var_directive, EnvVarNames, !IO),
    % We always write out ENDINIT so that mkinit_erl doesn't scan the whole
    % file.
    io.write_string("% ENDINIT\n", !IO),

    % Output foreign code written in Erlang.
    list.foldl(output_foreign_body_code(SourceFileName), ForeignBodies, !IO),

    % Output the main wrapper, if any.
    (
        AddMainWrapper = yes,
        io.write_string(main_wrapper_code, !IO)
    ;
        AddMainWrapper = no
    ),
    % XXX there are also user_init_preds generated which aren't used.
    maybe_output_required_init_or_final(ModuleInfo, "mercury__required_init",
        InitPreds, !IO),
    maybe_output_required_init_or_final(ModuleInfo, "mercury__required_final",
        FinalPreds, !IO),

    % Output function definitions.
    list.foldl(output_defn(ModuleInfo), ProcDefns, !IO),
    list.foldl(output_foreign_export_defn(ModuleInfo), ForeignExportDefns,
        !IO),
    list.foldl(output_rtti_defn(ModuleInfo), RttiDefns, !IO).

:- pred output_do_no_edit_comment(string::in, io::di, io::uo) is det.

output_do_no_edit_comment(SourceFileName, !IO) :-
    library.version(Version, Fullarch),
    io.write_strings([
        "%\n",
        "% Automatically generated from `", SourceFileName, "'\n",
        "% by the Mercury compiler,\n",
        "% version ", Version, "\n",
        "% configured for ", Fullarch, ".\n",
        "% Do not edit.\n",
        "%\n",
        "\n"
    ], !IO).

%-----------------------------------------------------------------------------%

:- pred output_export_ann(module_info::in, elds_defn::in,
    bool::in, bool::out, io::di, io::uo) is det.

output_export_ann(ModuleInfo, Defn, !NeedComma, !IO) :-
    Defn = elds_defn(PredProcId, _, Body, _),
    PredProcId = proc(PredId, ProcId),
    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    ( procedure_is_exported(ModuleInfo, PredInfo, ProcId) ->
        maybe_write_comma(!.NeedComma, !IO),
        nl_indent_line(1, !IO),
        output_pred_proc_id(ModuleInfo, PredProcId, !IO),
        io.write_char('/', !IO),
        io.write_int(elds_body_arity(Body), !IO),
        !:NeedComma = yes
    ;
        true
    ).

:- pred output_foreign_export_ann(elds_foreign_export_defn::in,
    bool::in, bool::out, io::di, io::uo) is det.

output_foreign_export_ann(ForeignExportDefn, NeedComma, yes, !IO) :-
    ForeignExportDefn = elds_foreign_export_defn(ExportedName, _, Clause),
    maybe_write_comma(NeedComma, !IO),
    nl_indent_line(1, !IO),
    output_atom(ExportedName, !IO),
    io.write_char('/', !IO),
    io.write_int(elds_clause_arity(Clause), !IO).

:- pred output_rtti_export_ann(module_info::in, elds_rtti_defn::in,
    bool::in, bool::out, io::di, io::uo) is det.

output_rtti_export_ann(ModuleInfo, ForeignExportDefn, !NeedComma, !IO) :-
    ForeignExportDefn = elds_rtti_defn(RttiId, IsExported, _VarSet, _Clause),
    (
        IsExported = yes,
        maybe_write_comma(!.NeedComma, !IO),
        nl_indent_line(1, !IO),
        output_rtti_id(ModuleInfo, RttiId, !IO),
        io.write_char('/', !IO),
        io.write_int(0, !IO),
        !:NeedComma = yes
    ;
        IsExported = no
    ).

:- pred output_wrapper_init_fn_export_ann(bool::in, list(pred_proc_id)::in,
    list(pred_proc_id)::in, io::di, io::uo) is det.

output_wrapper_init_fn_export_ann(AddMainWrapper, InitPreds, FinalPreds,
        !IO) :-
    (
        AddMainWrapper = yes,
        comma(!IO),
        nl_indent_line(1, !IO),
        output_atom("mercury__main_wrapper", !IO),
        io.write_string("/0", !IO)
    ;
        AddMainWrapper = no
    ),
    (
        InitPreds = []
    ;
        InitPreds = [_ | _],
        comma(!IO),
        nl_indent_line(1, !IO),
        output_atom("mercury__required_init", !IO),
        io.write_string("/0", !IO)
    ),
    (
        FinalPreds = []
    ;
        FinalPreds = [_ | _],
        comma(!IO),
        nl_indent_line(1, !IO),
        output_atom("mercury__required_final", !IO),
        io.write_string("/0", !IO)
    ).

%-----------------------------------------------------------------------------%

:- func should_add_main_wrapper(module_info) = bool.

should_add_main_wrapper(ModuleInfo) = AddMainWrapper :-
    module_info_get_predicate_table(ModuleInfo, PredTable),
    predicate_table_lookup_pred_name_arity(PredTable, "main", 2, PredIds),
    (
        list.member(PredId, PredIds),
        module_info_pred_info(ModuleInfo, PredId, PredInfo),
        pred_info_get_import_status(PredInfo, ImportStatus),
        status_is_exported_to_non_submodules(ImportStatus) = yes
    ->
        AddMainWrapper = yes
    ;
        AddMainWrapper = no
    ).

:- func main_wrapper_code = string.

main_wrapper_code = "

    % This function is called in place of main_2_p_0 by the shell script that
    % we generate for this program, if linking against the standard library.
    % Otherwise main_2_p_0 will be called.

    mercury__main_wrapper() ->
        mercury__startup(),
        InitModule = list_to_atom(atom_to_list(?MODULE) ++ ""_init""),
        try
            InitModule:init_env_vars(),
            InitModule:init_modules(),
            InitModule:init_modules_required(),
            main_2_p_0(),
            InitModule:final_modules_required()
        catch
            {'ML_exception', Excp} ->
                StackTrace = erlang:get_stacktrace(),
                mercury__exception:'ML_report_uncaught_exception'(Excp),
                mercury__maybe_dump_stacktrace(StackTrace),
                mercury__shutdown(true)
        end,
        mercury__shutdown(false).

    mercury__startup() ->
        mercury__erlang_builtin:'ML_start_global_server'(),
        mercury__library:'ML_std_library_init'().

    mercury__shutdown(ForceBadExit) ->
        mercury__library:'ML_std_library_finalize'(),
        'ML_erlang_global_server' ! {get_exit_status, self()},
        receive
            {get_exit_status_ack, ExitStatus0} ->
                void
        end,
        if
            ExitStatus0 =:= 0 andalso ForceBadExit ->
                ExitStatus = 1;
            true ->
                ExitStatus = ExitStatus0
        end,
        mercury__erlang_builtin:'ML_stop_global_server'(),
        % init:stop is preferred to calling halt but there seems
        % to be no way to choose the exit code otherwise.
        case ExitStatus of
            0 -> void;
            _ -> halt(ExitStatus)
        end.

    mercury__maybe_dump_stacktrace(StackTrace) ->
        case os:getenv(""MERCURY_SUPPRESS_STACK_TRACE"") of
            false ->
                io:put_chars(""Stack dump follows:\\n""),
                mercury__dump_stacktrace(StackTrace);
            _ ->
                void
        end.

    mercury__dump_stacktrace([]) -> void;
    mercury__dump_stacktrace([St | Sts]) ->
        {Module, Function, ArityOrArgs} = St,
        io:format(""\\t~s:~s"", [Module, Function]),
        if
            is_integer(ArityOrArgs) ->
                io:format(""/~B~n"", [ArityOrArgs]);
            true ->
                io:format(""~p~n"", [ArityOrArgs])
        end,
        % Don't show stack frames below main.
        case St of
            {?MODULE, mercury__main_wrapper, _} ->
                void;
            _ ->
                mercury__dump_stacktrace(Sts)
        end.
".

%-----------------------------------------------------------------------------%

:- func elds_get_env_var_names(list(elds_defn)) = set(string).

elds_get_env_var_names(ProcDefns) =
    set.union_list(list.map(elds_get_env_var_names_from_defn, ProcDefns)).

:- func elds_get_env_var_names_from_defn(elds_defn) = set(string).

elds_get_env_var_names_from_defn(ProcDefn) = ProcDefn ^ defn_env_vars.

:- pred output_env_var_directive(string::in, io::di, io::uo) is det.

output_env_var_directive(EnvVarName, !IO) :-
    io.write_string("% ENVVAR ", !IO),
    write_with_escaping(in_string, EnvVarName, !IO),
    io.nl(!IO).

%-----------------------------------------------------------------------------%

:- pred output_include_header_ann(globals::in, module_name::in,
    io::di, io::uo) is det.

output_include_header_ann(Globals, Import, !IO) :-
    module_name_to_search_file_name(Globals, Import, ".hrl", HeaderFile, !IO),
    io.write_string("-include(""", !IO),
    write_with_escaping(in_string, HeaderFile, !IO),
    io.write_string(""").\n", !IO).

%-----------------------------------------------------------------------------%

:- pred output_foreign_decl_code(string::in, foreign_decl_code::in,
    io::di, io::uo) is det.

output_foreign_decl_code(SourceFileName, ForeignDecl, !IO) :-
    ForeignDecl = foreign_decl_code(_Lang, _IsLocal, LiteralOrInclude,
        Context),
    output_foreign_literal_or_include(SourceFileName, LiteralOrInclude,
        Context, !IO).

:- pred output_foreign_body_code(string::in, foreign_body_code::in,
    io::di, io::uo) is det.

output_foreign_body_code(SourceFileName, ForeignBody, !IO) :-
    ForeignBody = foreign_body_code(_Lang, LiteralOrInclude, Context),
    output_foreign_literal_or_include(SourceFileName, LiteralOrInclude,
        Context, !IO).

:- pred output_foreign_literal_or_include(string::in,
    foreign_literal_or_include::in, context::in, io::di, io::uo) is det.

output_foreign_literal_or_include(SourceFileName, LiteralOrInclude, Context,
        !IO) :-
    (
        LiteralOrInclude = literal(Code),
        output_file_directive(Context, !IO),
        io.write_string(Code, !IO)
    ;
        LiteralOrInclude = include_file(IncludeFileName),
        make_include_file_path(SourceFileName, IncludeFileName, IncludePath),
        output_file_directive(context(IncludePath, 1), !IO),
        write_include_file_contents(IncludePath, !IO)
    ),
    io.nl(!IO),
    reset_file_directive(!IO).

:- pred output_file_directive(context::in, io::di, io::uo) is det.

output_file_directive(context(FileName, LineNr), !IO) :-
    io.write_string("-file(""", !IO),
    write_with_escaping(in_string, FileName, !IO),
    io.write_string(""", ", !IO),
    io.write_int(LineNr, !IO),
    io.write_string(").\n", !IO).

:- pred reset_file_directive(io::di, io::uo) is det.

reset_file_directive(!IO) :-
    io.output_stream_name(FileName, !IO),
    io.get_output_line_number(LineNr, !IO),
    output_file_directive(context(FileName, LineNr), !IO).

%-----------------------------------------------------------------------------%

:- pred maybe_output_required_init_or_final(module_info::in, string::in,
    list(pred_proc_id)::in, io::di, io::uo) is det.

maybe_output_required_init_or_final(ModuleInfo, Name, PredProcIds, !IO) :-
    (
        PredProcIds = []
    ;
        PredProcIds = [_ | _],
        nl_indent_line(0, !IO),
        io.write_string(Name, !IO),
        io.write_string("() ->", !IO),
        list.foldl(output_init_fn_call(ModuleInfo), PredProcIds, !IO),
        nl_indent_line(1, !IO),
        io.write_string("void.\n", !IO)
    ).

:- pred output_init_fn_call(module_info::in, pred_proc_id::in,
    io::di, io::uo) is det.

output_init_fn_call(ModuleInfo, PredProcId, !IO) :-
    nl_indent_line(1, !IO),
    output_pred_proc_id(ModuleInfo, PredProcId, !IO),
    io.write_string("(),", !IO).

%-----------------------------------------------------------------------------%

output_defn(ModuleInfo, Defn, !IO) :-
    Defn = elds_defn(PredProcId, VarSet, Body, _EnvVarNames),
    (
        Body = body_defined_here(Clause),
        io.nl(!IO),
        (
            % If the function definition is for a pragma foreign_proc then
            % output ``-file(File, Line).'' before and after the function
            % definition.
            Clause = elds_clause(_HeadVars, ClauseBody),
            ClauseBody = elds_call(elds_call_ho(Fun), _CallArgs),
            Fun = elds_fun(elds_clause(_FunVars, FunBody)),
            FunBody = elds_block([
                elds_foreign_code(_Code, Context),
                _PlaceOutputs
            ])
        ->
            % We need to subtract 3 lines so that the line numbers in the
            % foreign code block will match up with the line numbers in the
            % source file.
            Context = context(FileName, LineNr),
            output_file_directive(context(FileName, LineNr - 3), !IO),
            output_pred_proc_id(ModuleInfo, PredProcId, !IO),
            output_toplevel_clause(ModuleInfo, VarSet, Clause, !IO),
            reset_file_directive(!IO)
        ;
            output_pred_proc_id(ModuleInfo, PredProcId, !IO),
            output_toplevel_clause(ModuleInfo, VarSet, Clause, !IO)
        )
    ;
        Body = body_external(_Arity)
    ).

:- pred output_foreign_export_defn(module_info::in,
    elds_foreign_export_defn::in, io::di, io::uo) is det.

output_foreign_export_defn(ModuleInfo, ForeignExportDefn, !IO) :-
    ForeignExportDefn = elds_foreign_export_defn(Name, VarSet, Clause),
    io.nl(!IO),
    output_atom(Name, !IO),
    output_toplevel_clause(ModuleInfo, VarSet, Clause, !IO).

:- pred output_rtti_defn(module_info::in, elds_rtti_defn::in, io::di, io::uo)
    is det.

output_rtti_defn(ModuleInfo, RttiDefn, !IO) :-
    RttiDefn = elds_rtti_defn(RttiId, _IsExported, VarSet, Clause),
    io.nl(!IO),
    output_rtti_id(ModuleInfo, RttiId, !IO),
    output_toplevel_clause(ModuleInfo, VarSet, Clause, !IO).

:- pred output_toplevel_clause(module_info::in, prog_varset::in,
    elds_clause::in, io::di, io::uo) is det.

output_toplevel_clause(ModuleInfo, VarSet, Clause, !IO) :-
    Indent = 0,
    output_clause(ModuleInfo, VarSet, Indent, Clause, !IO),
    io.write_string(".\n", !IO).

:- pred output_clause(module_info::in, prog_varset::in, indent::in,
    elds_clause::in, io::di, io::uo) is det.

output_clause(ModuleInfo, VarSet, Indent, Clause, !IO) :-
    Clause = elds_clause(Pattern, Expr),
    io.write_string("(", !IO),
    io.write_list(Pattern, ", ",
        output_term(ModuleInfo, VarSet, Indent), !IO),
    io.write_string(") -> ", !IO),
    nl_indent_line(Indent + 1, !IO),
    output_block_expr(ModuleInfo, VarSet, Indent + 1, Expr, !IO).

%-----------------------------------------------------------------------------%
%
% Code to output expressions
%

:- pred output_exprs_with_nl(module_info::in, prog_varset::in,
    indent::in, list(elds_expr)::in, io::di, io::uo) is det.

output_exprs_with_nl(_ModuleInfo, _VarSet, _Indent, [], !IO).
output_exprs_with_nl(ModuleInfo, VarSet, Indent, [Expr | Exprs], !IO) :-
    output_expr(ModuleInfo, VarSet, Indent, Expr, !IO),
    (
        Exprs = []
    ;
        Exprs = [_ | _],
        io.write_char(',', !IO),
        nl_indent_line(Indent, !IO),
        output_exprs_with_nl(ModuleInfo, VarSet, Indent, Exprs, !IO)
    ).

:- pred output_exprs(module_info::in, prog_varset::in, indent::in,
    list(elds_expr)::in, io::di, io::uo) is det.

output_exprs(ModuleInfo, VarSet, Indent, Exprs, !IO) :-
    io.write_list(Exprs, ", ",
        output_expr(ModuleInfo, VarSet, Indent), !IO).

:- pred output_block_expr(module_info::in, prog_varset::in, indent::in,
    elds_expr::in, io::di, io::uo) is det.

output_block_expr(ModuleInfo, VarSet, Indent, Expr, !IO) :-
    ( Expr = elds_block(Exprs) ->
        output_exprs_with_nl(ModuleInfo, VarSet, Indent, Exprs, !IO)
    ;
        output_expr(ModuleInfo, VarSet, Indent, Expr, !IO)
    ).

:- pred output_expr(module_info::in, prog_varset::in, indent::in,
    elds_expr::in, io::di, io::uo) is det.

output_expr(ModuleInfo, VarSet, Indent, Expr, !IO) :-
    (
        Expr = elds_block([]),
        unexpected($module, $pred, "empty elds_block")
    ;
        Expr = elds_block(Exprs @ [_ | _]),
        io.write_string("(begin", !IO),
        nl_indent_line(Indent + 1, !IO),
        output_exprs_with_nl(ModuleInfo, VarSet, Indent + 1, Exprs, !IO),
        nl_indent_line(Indent, !IO),
        io.write_string("end)", !IO)
    ;
        Expr = elds_term(Term),
        output_term(ModuleInfo, VarSet, Indent, Term, !IO)
    ;
        Expr = elds_eq(ExprA, ExprB),
        output_expr(ModuleInfo, VarSet, Indent, ExprA, !IO),
        io.write_string("= ", !IO),
        output_expr(ModuleInfo, VarSet, Indent, ExprB, !IO)
    ;
        Expr = elds_unop(Unop, ExprA),
        io.write_string(elds_unop_to_string(Unop), !IO),
        output_expr(ModuleInfo, VarSet, Indent, ExprA, !IO)
    ;
        Expr = elds_binop(Binop, ExprA, ExprB),
        output_expr(ModuleInfo, VarSet, Indent, ExprA, !IO),
        output_elds_binop(Binop, !IO),
        output_expr(ModuleInfo, VarSet, Indent, ExprB, !IO)
    ;
        Expr = elds_call(CallTarget, Args),
        (
            CallTarget = elds_call_plain(PredProcId),
            output_pred_proc_id(ModuleInfo, PredProcId, !IO)
        ;
            CallTarget = elds_call_ho(Closure),
            output_expr(ModuleInfo, VarSet, Indent, Closure, !IO)
        ;
            CallTarget = elds_call_builtin(FunName),
            output_atom(FunName, !IO)
        ),
        io.write_string("(", !IO),
        output_exprs(ModuleInfo, VarSet, Indent, Args, !IO),
        io.write_string(")", !IO)
    ;
        Expr = elds_fun(Clause),
        io.write_string("(fun", !IO),
        output_clause(ModuleInfo, VarSet, Indent, Clause, !IO),
        nl_indent_line(Indent, !IO),
        io.write_string("end)", !IO)
    ;
        Expr = elds_case_expr(ExprA, Cases),
        io.write_string("(case", !IO),
        nl_indent_line(Indent + 1, !IO),
        output_expr(ModuleInfo, VarSet, Indent + 1, ExprA, !IO),
        nl_indent_line(Indent, !IO),
        io.write_string("of", !IO),
        io.write_list(Cases, ";",
            output_case(ModuleInfo, VarSet, Indent + 1), !IO),
        nl_indent_line(Indent, !IO),
        io.write_string("end)", !IO)
    ;
        Expr = elds_try(ExprA, Cases, MaybeCatch, MaybeAfter),
        io.write_string("(try", !IO),
        nl_indent_line(Indent + 1, !IO),
        output_block_expr(ModuleInfo, VarSet, Indent + 1, ExprA, !IO),
        (
            Cases = []
        ;
            Cases = [_ | _],
            nl_indent_line(Indent, !IO),
            io.write_string("of", !IO),
            io.write_list(Cases, ";",
                output_case(ModuleInfo, VarSet, Indent + 1), !IO)
        ),
        (
            MaybeCatch = yes(Catch),
            nl_indent_line(Indent, !IO),
            io.write_string("catch", !IO),
            nl_indent_line(Indent + 1, !IO),
            output_catch(ModuleInfo, VarSet, Indent + 1, Catch, !IO)
        ;
            MaybeCatch = no
        ),
        (
            MaybeAfter = yes(After),
            nl_indent_line(Indent, !IO),
            io.write_string("after", !IO),
            nl_indent_line(Indent + 1, !IO),
            output_expr(ModuleInfo, VarSet, Indent + 1, After, !IO)
        ;
            MaybeAfter = no
        ),
        nl_indent_line(Indent, !IO),
        io.write_string("end)", !IO)
    ;
        Expr = elds_throw(ExprA),
        io.write_string("throw(", !IO),
        output_expr(ModuleInfo, VarSet, Indent, ExprA, !IO),
        io.write_string(")", !IO)
    ;
        Expr = elds_rtti_ref(RttiId),
        (
            RttiId = elds_rtti_type_ctor_id(_),
            %
            % We don't immediately call the function to get the type_ctor_info,
            % but only reference the function to be called if the
            % type_ctor_info is actually needed.  This is a significant saving
            % as most of the time we won't need the type_ctor_info anyway.  It
            % does mean that we have to be careful in the places where we could
            % be passed a function instead of a type_ctor_info.  Since zero-
            % arity type_ctor_infos are also type_infos, it also affects
            % type_infos.
            %
            io.write_string("fun ", !IO),
            output_rtti_id(ModuleInfo, RttiId, !IO),
            io.write_string("/0 ", !IO)
        ;
            ( RttiId = elds_rtti_type_info_id(_)
            ; RttiId = elds_rtti_pseudo_type_info_id(_)
            ; RttiId = elds_rtti_base_typeclass_id(_, _, _)
            ),
            output_rtti_id(ModuleInfo, RttiId, !IO),
            io.write_string("()", !IO)
        )
    ;
        Expr = elds_foreign_code(Code, _Context),
        io.write_string(Code, !IO),
        nl_indent_line(Indent, !IO)
    ;
        Expr = elds_send(ExprA, ExprB),
        output_expr(ModuleInfo, VarSet, Indent, ExprA, !IO),
        io.write_string(" ! ", !IO),
        output_expr(ModuleInfo, VarSet, Indent, ExprB, !IO)
    ;
        Expr = elds_receive(Cases),
        io.write_string("(receive", !IO),
            io.write_list(Cases, ";",
                output_case(ModuleInfo, VarSet, Indent + 1), !IO),
        nl_indent_line(Indent, !IO),
        io.write_string("end)", !IO)
    ).

:- pred output_case(module_info::in, prog_varset::in, indent::in,
    elds_case::in, io::di, io::uo) is det.

output_case(ModuleInfo, VarSet, Indent, elds_case(Pattern, Expr), !IO) :-
    nl_indent_line(Indent, !IO),
    output_term(ModuleInfo, VarSet, Indent, Pattern, !IO),
    io.write_string("->", !IO),
    nl_indent_line(Indent + 1, !IO),
    output_block_expr(ModuleInfo, VarSet, Indent + 1, Expr, !IO).

:- pred output_catch(module_info::in, prog_varset::in, indent::in,
    elds_catch::in, io::di, io::uo) is det.

output_catch(ModuleInfo, VarSet, Indent, Catch, !IO) :-
    Catch = elds_catch(PatternA, PatternB, CatchExpr),
    output_term(ModuleInfo, VarSet, Indent, PatternA, !IO),
    io.write_char(':', !IO),
    output_term(ModuleInfo, VarSet, Indent, PatternB, !IO),
    io.write_string("->", !IO),
    nl_indent_line(Indent + 1, !IO),
    output_block_expr(ModuleInfo, VarSet, Indent + 1, CatchExpr, !IO).

%-----------------------------------------------------------------------------%

:- pred output_term(module_info::in, prog_varset::in, indent::in,
    elds_term::in, io::di, io::uo) is det.

output_term(ModuleInfo, VarSet, Indent, Term, !IO) :-
    (
        Term = elds_int(Int),
        io.write_int(Int, !IO),
        space(!IO)
    ;
        Term = elds_float(Float),
        output_float(Float, !IO),
        space(!IO)
    ;
        Term = elds_binary(String),
        io.write_string("<<""", !IO),
        write_with_escaping(in_string, String, !IO),
        io.write_string(""">>", !IO),
        space(!IO)
    ;
        Term = elds_list_of_ints(String),
        io.write_string("""", !IO),
        write_with_escaping(in_string, String, !IO),
        io.write_string("""", !IO),
        space(!IO)
    ;
        Term = elds_char(Char),
        Int = char.to_int(Char),
        ( if char.is_alnum(Char) then
            io.write_char('$', !IO),
            io.write_char(Char, !IO)
        else if escape(Esc, Int) then
            io.write_char('$', !IO),
            io.write_string(Esc, !IO)
        else
            io.write_int(Int, !IO)
        ),
        space(!IO)
    ;
        Term = elds_atom_raw(Atom),
        output_atom(Atom, !IO),
        space(!IO)
    ;
        Term = elds_atom(SymName),
        output_atom(unqualify_name(SymName), !IO),
        space(!IO)
    ;
        Term = elds_tuple(Args),
        output_tuple(ModuleInfo, VarSet, Indent, Args, !IO)
    ;
        Term = elds_var(Var),
        output_var(VarSet, Var, !IO)
    ;
        Term = elds_anon_var,
        io.write_string("_ ", !IO)
    ;
        Term = elds_fixed_name_var(Name),
        output_var_string(Name, !IO)
    ).

:- pred output_float(float::in, io::di, io::uo) is det.

output_float(Float, !IO) :-
    S = string.from_float(Float),
    ( digit_then_e(S, no, 0, Pos) ->
        io.write_string(string.between(S, 0, Pos), !IO),
        io.write_string(".0", !IO),
        io.write_string(string.between(S, Pos, length(S)), !IO)
    ;
        io.write_string(S, !IO)
    ).

:- pred digit_then_e(string::in, bool::in, int::in, int::out) is semidet.

digit_then_e(String, PrevDigit, Pos0, Pos) :-
    string.unsafe_index_next(String, Pos0, Pos1, Char),
    Char \= ('.'),
    ( is_e(Char) ->
        PrevDigit = yes,
        Pos = Pos0
    ; is_digit(Char) ->
        digit_then_e(String, yes, Pos1, Pos)
    ;
        digit_then_e(String, no, Pos1, Pos)
    ).

:- pred is_e(char::in) is semidet.

is_e('e').
is_e('E').

:- pred output_tuple(module_info::in, prog_varset::in, indent::in,
    list(elds_expr)::in, io::di, io::uo) is det.

output_tuple(ModuleInfo, VarSet, Indent, Args, !IO) :-
    % Treat lists and tuples specially.
    (
        Args = [elds_term(elds_atom(SymName))],
        unqualify_name(SymName) = "[]"
    ->
        io.write_string("[] ", !IO)
    ;
        Args = [elds_term(elds_atom(SymName)), A, B],
        unqualify_name(SymName) = "[|]"
    ->
        io.write_char('[', !IO),
        output_expr(ModuleInfo, VarSet, Indent, A, !IO),
        io.write_string("| ", !IO),
        output_expr(ModuleInfo, VarSet, Indent, B, !IO),
        io.write_string("] ", !IO)
    ;
        Args = [elds_tuple | Args1]
    ->
        io.write_char('{', !IO),
        output_exprs(ModuleInfo, VarSet, Indent, Args1, !IO),
        io.write_string("} ", !IO)
    ;
        io.write_char('{', !IO),
        output_exprs(ModuleInfo, VarSet, Indent, Args, !IO),
        io.write_string("} ", !IO)
    ).

:- func elds_tuple = elds_expr.
elds_tuple = elds_term(elds_atom(unqualified("{}"))).

:- pred output_var(prog_varset::in, prog_var::in, io::di, io::uo) is det.

output_var(VarSet, Var, !IO) :-
    varset.lookup_name(VarSet, Var, VarName),
    term.var_to_int(Var, VarNumber),
    output_var_string(VarName ++ "_" ++ string.from_int(VarNumber), !IO).

:- pred output_var_string(string::in, io::di, io::uo) is det.

output_var_string(String, !IO) :-
    % The compiler can produce some illegal variable names e.g.
    % 'TypeClassInfo_for_+_8' so we need to mangle.  We assume the first
    % character is okay for Erlang (uppercase or underscore).
    string.foldl(output_var_string_2, String, !IO),
    space(!IO).

:- pred output_var_string_2(char::in, io::di, io::uo) is det.

output_var_string_2(C, !IO) :-
    ( if char.is_alnum_or_underscore(C) then
        io.write_char(C, !IO)
    else
        io.write_int(char.to_int(C), !IO)
    ).

:- pred output_pred_proc_id(module_info::in, pred_proc_id::in,
    io::di, io::uo) is det.

output_pred_proc_id(ModuleInfo, PredProcId, !IO) :-
    erlang_proc_name(ModuleInfo, PredProcId, MaybeExtModule, Name),
    (
        MaybeExtModule = yes(ExtModule),
        output_atom(ExtModule, !IO),
        io.write_char(':', !IO)
    ;
        MaybeExtModule = no
    ),
    ShortName = shorten_long_atom_name(Name),
    output_atom(ShortName, !IO).

:- pred output_rtti_id(module_info::in, elds_rtti_id::in, io::di, io::uo)
    is det.

output_rtti_id(ModuleInfo, RttiId, !IO) :-
    module_info_get_name(ModuleInfo, CurModuleName),
    (
        RttiId = elds_rtti_type_ctor_id(RttiTypeCtor),
        RttiTypeCtor = rtti_type_ctor(ModuleName, _, _),

        % The only things with an empty module name should be the builtins.
        ( ModuleName = unqualified("") ->
            InstanceModule = mercury_public_builtin_module
        ;
            InstanceModule = ModuleName
        ),

        CRttiId = rtti.ctor_rtti_id(RttiTypeCtor, type_ctor_type_ctor_info),
        rtti.id_to_c_identifier(CRttiId, Atom1)
    ;
        RttiId = elds_rtti_type_info_id(TypeInfo),

            % TypeInfos are always local to the current module.
        InstanceModule = CurModuleName,
        Atom0 = "ti_" ++ type_info_to_string(TypeInfo),

            % Erlang atoms have a maximum length, so shorten names
        Atom1 = string.replace_all(Atom0, "type_ctor_info", "tci")
    ;
        RttiId = elds_rtti_pseudo_type_info_id(PseudoTypeInfo),
        ( PseudoTypeInfo = type_var(_) ->
            Prefix = "type_var_"
        ;
            Prefix = "pti_"
        ),

            % PseudoTypeInfos are always local to the current module.
        InstanceModule = CurModuleName,
        Atom0 = Prefix ++ pseudo_type_info_to_string(PseudoTypeInfo),

            % Erlang atoms have a maximum length, so shorten names
        Atom1 = string.replace_all(Atom0, "type_ctor_info", "tci")
    ;
        RttiId = elds_rtti_base_typeclass_id(TCName, InstanceModule,
            InstanceStr),
        TCName = tc_name(ClassModuleName, ClassName, ClassArity),
        QClassName = qualified(ClassModuleName, ClassName),
        QClassNameStr = sym_name_to_string_sep(QClassName, "__"),
        Atom1 = string.append_list(["BaseTypeclassInfo_", QClassNameStr,
            "__arity", string.from_int(ClassArity), "__", InstanceStr])
    ),
    Atom = shorten_long_atom_name(Atom1),
    ( if CurModuleName \= InstanceModule then
        output_atom(erlang_module_name_to_str(InstanceModule), !IO),
        io.write_char(':', !IO)
    else
        true
    ),
    output_atom(Atom, !IO).

    % Some function names can be longer than the character limit on
    % atom names.  To shorten long names, we take the left and right parts
    % of the string and stick the hash of the string in the middle.
    %
:- func shorten_long_atom_name(string) = string.

shorten_long_atom_name(Name0) = Name :-
    % Erlang atom names can be up to 255 characters (bytes) long, but the
    % Erlang compiler may mangle it (e.g. to derive the names of anonymous
    % functions) which would then exceed the limit.
    % This assumes the atom name consists of only ASCII characters.
    ( if string.length(Name0) =< 200 then
        Name = Name0
    else
        % Use only lower 32 bits of the hash value so that the result is the
        % same on 64-bit machines as 32-bit machines.
        %
        % XXX we assume that `int' is at least 32 bits wide
        %
        % XXX it would be better to use a cryptographic hash function
        %
        Hash = string.hash(Name0) /\ 0xffffffff,
        Left = string.left(Name0, 64),
        Right = string.right(Name0, 64),
        Middle = string.int_to_base_string(Hash, 16),
        Name = string.append_list([Left, "...", Middle, "...", Right])
    ).

%-----------------------------------------------------------------------------%

:- pred erlang_proc_name(module_info::in, pred_proc_id::in,
    maybe(string)::out, string::out) is det.

erlang_proc_name(ModuleInfo, PredProcId, MaybeExtModule, ProcNameStr) :-
    PredProcId = proc(PredId, ProcId),
    RttiProcName = make_rtti_proc_label(ModuleInfo, PredId, ProcId),
    RttiProcName = rtti_proc_label(PredOrFunc, ThisModule, PredModule,
        PredName, PredArity, _ArgTypes, _PredId, _ProcId,
        _HeadVarsWithNames, _ArgModes, _Detism,
        PredIsImported0, _PredIsPseudoImported,
        Origin, _ProcIsExported, _ProcIsImported),

    module_info_pred_info(ModuleInfo, PredId, PredInfo),
    pred_info_get_import_status(PredInfo, ImportStatus),
    ( ImportStatus = status_external(_) ->
        % pred_info_is_imported returns `yes' for :- external predicates.
        PredIsImported = no
    ;
        PredIsImported = PredIsImported0
    ),

    ( Origin = origin_special_pred(SpecialPred) ->
        erlang_special_proc_name(ThisModule, PredName, ProcId, SpecialPred,
            MaybeExtModule, ProcNameStr)
    ;
        erlang_nonspecial_proc_name(ThisModule, PredModule, PredName,
            PredOrFunc, PredArity, ProcId, PredIsImported,
            MaybeExtModule, ProcNameStr)
    ).

:- pred erlang_nonspecial_proc_name(sym_name::in, sym_name::in, string::in,
    pred_or_func::in, arity::in, proc_id::in, bool::in,
    maybe(string)::out, string::out) is det.

erlang_nonspecial_proc_name(ThisModule, PredModule, PredName, PredOrFunc,
        PredArity, ProcId, PredIsImported, MaybeExtModule, ProcNameStr) :-
    (
        % XXX not completely sure this is right
        PredIsImported = yes,
        MaybeExtModule = yes(erlang_module_name_to_str(PredModule))
    ;
        PredIsImported = no,
        MaybeExtModule = no
    ),

    (
        PredOrFunc = pf_predicate,
        Suffix = "p",
        OrigArity = PredArity
    ;
        PredOrFunc = pf_function,
        Suffix = "f",
        OrigArity = PredArity - 1
    ),

    PredLabelStr0 = PredName ++ "_" ++ string.from_int(OrigArity) ++
        "_" ++ Suffix,
    (
        % Work out which module supplies the code for the predicate.
        ThisModule \= PredModule,
        PredIsImported = no
    ->
        % This predicate is a specialized version of a pred from a `.opt' file.
        PredLabelStr = PredLabelStr0 ++ "_in__" ++
            erlang_module_name_to_str(PredModule)
    ;
        % The predicate was declared in the same module that it is defined in.
        PredLabelStr = PredLabelStr0
    ),

    proc_id_to_int(ProcId, ModeNum),
    ProcNameStr = PredLabelStr ++ "_" ++ string.from_int(ModeNum).

:- pred erlang_special_proc_name(sym_name::in, string::in, proc_id::in,
    special_pred::in, maybe(string)::out, string::out) is det.

erlang_special_proc_name(ThisModule, PredName, ProcId, SpecialPred - TypeCtor,
        MaybeExtModule, ProcNameStr) :-
    (
        % All type_ctors other than tuples here should be module qualified,
        % since builtin types are handled separately in polymorphism.m.
        TypeCtor = type_ctor(TypeCtorSymName, TypeArity),
        (
            TypeCtorSymName = unqualified(TypeName),
            type_ctor_is_tuple(TypeCtor),
            TypeModule = mercury_public_builtin_module
        ;
            TypeCtorSymName = qualified(TypeModule, TypeName)
        )
    ->
        ProcNameStr0 = PredName ++ "__",
        TypeModuleStr = erlang_module_name_to_str(TypeModule),
        (
            ThisModule \= TypeModule,
            SpecialPred = spec_pred_unify,
            \+ hlds_pred.in_in_unification_proc_id(ProcId)
        ->
            % This is a locally-defined instance of a unification procedure
            % for a type defined in some other module.
            ProcNameStr1 = ProcNameStr0 ++ TypeModuleStr,
            MaybeExtModule = no
        ;
            % The module declaring the type is the same as the module
            % defining this special pred.
            ProcNameStr1 = ProcNameStr0,
            ( TypeModule \= ThisModule ->
                MaybeExtModule = yes(TypeModuleStr)
            ;
                MaybeExtModule = no
            )
        ),
        proc_id_to_int(ProcId, ModeNum),
        ProcNameStr = ProcNameStr1 ++ TypeName ++ "_" ++
            string.from_int(TypeArity) ++ "_" ++ string.from_int(ModeNum)
    ;
        unexpected($module, $pred,
            "cannot make label for special pred " ++ PredName)
    ).

:- func erlang_module_name_to_str(module_name) = string.

erlang_module_name_to_str(ModuleName) = String :-
    ErlangModuleName = qualify_mercury_std_library_module_name(ModuleName),
    String = sym_name_to_string_sep(ErlangModuleName, "__").

%-----------------------------------------------------------------------------%

:- pred output_atom(string::in, io::di, io::uo) is det.

output_atom(String, !IO) :-
    ( if
        string.index(String, 0, FirstChar),
        char.is_lower(FirstChar),
        string.is_all_alnum_or_underscore(String),
        not requires_atom_quoting(String)
    then
        io.write_string(String, !IO)
    else
        io.write_char('\'', !IO),
        write_with_escaping(in_atom, String, !IO),
        io.write_char('\'', !IO)
    ).

:- pred requires_atom_quoting(string::in) is semidet.

requires_atom_quoting("after").
requires_atom_quoting("and").
requires_atom_quoting("andalso").
requires_atom_quoting("band").
requires_atom_quoting("begin").
requires_atom_quoting("bnot").
requires_atom_quoting("bor").
requires_atom_quoting("bsl").
requires_atom_quoting("bsr").
requires_atom_quoting("bxor").
requires_atom_quoting("case").
requires_atom_quoting("catch").
requires_atom_quoting("cond").
requires_atom_quoting("div").
requires_atom_quoting("end").
requires_atom_quoting("fun").
requires_atom_quoting("if").
requires_atom_quoting("let").
requires_atom_quoting("not").
requires_atom_quoting("of").
requires_atom_quoting("or").
requires_atom_quoting("orelse").
requires_atom_quoting("query").
requires_atom_quoting("receive").
requires_atom_quoting("rem").
requires_atom_quoting("try").
requires_atom_quoting("when").
requires_atom_quoting("xor").

%-----------------------------------------------------------------------------%

:- func elds_unop_to_string(elds_unop) = string.

elds_unop_to_string(plus)        = "+".
elds_unop_to_string(minus)       = "-".
elds_unop_to_string(bnot)        = "bnot ".
elds_unop_to_string(logical_not) = "not ".

:- pred output_elds_binop(elds_binop::in, io::di, io::uo) is det.

output_elds_binop(Binop, !IO) :-
    io.write_string(elds_binop_to_string(Binop), !IO),
    space(!IO).

:- func elds_binop_to_string(elds_binop) = string.

elds_binop_to_string(mul)       = "*".
elds_binop_to_string(float_div) = "/".
elds_binop_to_string(int_div)   = "div".
elds_binop_to_string(rem)       = "rem".
elds_binop_to_string(band)      = "band".
elds_binop_to_string(add)       = "+".
elds_binop_to_string(sub)       = "-".
elds_binop_to_string(bor)       = "bor".
elds_binop_to_string(bxor)      = "bxor".
elds_binop_to_string(bsl)       = "bsl".
elds_binop_to_string(bsr)       = "bsr".
elds_binop_to_string(=<)        = "=<".
elds_binop_to_string(<)         = "<".
elds_binop_to_string(>=)        = ">=".
elds_binop_to_string(>)         = ">".
elds_binop_to_string(=:=)       = "=:=".
elds_binop_to_string(=/=)       = "=/=".
elds_binop_to_string(andalso)   = "andalso".
elds_binop_to_string(orelse)    = "orelse".

%-----------------------------------------------------------------------------%

:- type string_or_atom
    --->    in_string
    ;       in_atom.

:- pred write_with_escaping(string_or_atom::in, string::in, io::di, io::uo)
    is det.

write_with_escaping(StringOrAtom, String, !IO) :-
    string.foldl(write_with_escaping_2(StringOrAtom), String, !IO).

:- pred write_with_escaping_2(string_or_atom::in, char::in, io::di, io::uo)
    is det.

write_with_escaping_2(StringOrAtom, Char, !IO) :-
    char.to_int(Char, Int),
    (
        32 =< Int,
        Char \= ('\\'),
        (
            StringOrAtom = in_string,
            Char \= '"'
        ;
            StringOrAtom = in_atom,
            Char \= '\''
        )
    ->
        io.write_char(Char, !IO)
    ;
        escape(Esc, Int)
    ->
        io.write_string(Esc, !IO)
    ;
        string.int_to_base_string(Int, 8, OctalString),
        io.write_char('\\', !IO),
        io.write_string(OctalString, !IO)
    ).

:- pred escape(string, int).
:- mode escape(out, in) is semidet.

escape("\\b", 8).
escape("\\d", 127).
escape("\\e", 27).
escape("\\f", 12).
escape("\\n", 10).
escape("\\r", 13).
escape("\\s", 32).
escape("\\t", 9).
escape("\\v", 11).
escape("\\^a", 1).
escape("\\^b", 2).
escape("\\^c", 3).
escape("\\^d", 4).
escape("\\^e", 5).
escape("\\^f", 6).
escape("\\^g", 7).
% escape("\\^h", 8).    % alternative exists
% escape("\\^i", 9).
% escape("\\^j", 10).
% escape("\\^k", 11).
% escape("\\^l", 12).
% escape("\\^m", 13).
escape("\\^n", 14).
escape("\\^o", 15).
escape("\\^p", 16).
escape("\\^q", 17).
escape("\\^r", 18).
escape("\\^s", 19).
escape("\\^t", 20).
escape("\\^u", 21).
escape("\\^v", 22).
escape("\\^w", 23).
escape("\\^x", 24).
escape("\\^y", 25).
escape("\\^z", 26).
escape("\\'", 39).
escape("\\\"", 34).
escape("\\\\", 92).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- pred output_hrl_file(module_name::in, elds::in, string::in,
    io::di, io::uo) is det.

output_hrl_file(ModuleName, ELDS, SourceFileName, !IO) :-
    output_do_no_edit_comment(SourceFileName, !IO),

    MangledModuleName = sym_name_mangle(ModuleName),
    string.to_upper(MangledModuleName, UppercaseModuleName),
    string.append(UppercaseModuleName, "_HRL", GuardMacroName),
    io.write_strings([
        "-ifndef(", GuardMacroName, ").\n",
        "-define(", GuardMacroName, ", 1).\n"
    ], !IO),

    ForeignDecls = ELDS ^ elds_foreign_decls,
    list.foldl(output_exported_foreign_decl_code(SourceFileName), ForeignDecls,
        !IO),

    io.write_string("-endif.\n", !IO).

:- pred output_exported_foreign_decl_code(string::in, foreign_decl_code::in,
    io::di, io::uo) is det.

output_exported_foreign_decl_code(SourceFileName, ForeignDecl, !IO) :-
    IsLocal = ForeignDecl ^ fdecl_is_local,
    (
        IsLocal = foreign_decl_is_local
    ;
        IsLocal = foreign_decl_is_exported,
        output_foreign_decl_code(SourceFileName, ForeignDecl, !IO)
    ).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- type indent == int.

:- pred nl_indent_line(indent::in, io::di, io::uo) is det.

nl_indent_line(N, !IO) :-
    io.nl(!IO),
    indent_line(N, !IO).

:- pred indent_line(indent::in, io::di, io::uo) is det.

indent_line(N, !IO) :-
    ( N =< 0 ->
        true
    ;
        io.write_string("  ", !IO),
        indent_line(N - 1, !IO)
    ).

%-----------------------------------------------------------------------------%

:- pred space(io::di, io::uo) is det.

space(!IO) :-
    io.write_char(' ', !IO).

:- pred comma(io::di, io::uo) is det.

comma(!IO) :-
    io.write_char(',', !IO).

:- pred maybe_write_comma(bool::in, io::di, io::uo) is det.

maybe_write_comma(no, !IO).
maybe_write_comma(yes, !IO) :-
    comma(!IO).

%-----------------------------------------------------------------------------%
:- end_module erl_backend.elds_to_erlang.
%-----------------------------------------------------------------------------%
