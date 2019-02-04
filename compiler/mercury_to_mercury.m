%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 1994-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: mercury_to_mercury.m.
% Main author: fjh.
%
% This program converts the parse tree structure provided by prog_io
% back into Mercury source text.
%
% Many (though not all) of the procedures in this module come in
% groups of three, where the three follow the pattern:
%
%   :- pred mercury_output_xyz(..., io::di, io::uo) is det.
%   :- func mercury_xyz_to_string(...) = string.
%   :- pred mercury_format_xyz(..., U::di, U::uo) is det <= output(U).
%
% The first two simply forward all the work to the third. This is possible
% because both io.state and string are members of the required typeclass,
% which is defined at the end of this module.
%
% For the mercury_output_xyz versions, going through a typeclass interface is
% (for now) a slight slowdown, but the time cost is still small compared to
% the cost of I/O itself.
%
% For the mercury_xyz_to_string versions, the cost is acceptable because
% (for now) we only create relatively small strings this way, e.g. strings that
% go into error messages. The typeclass instance for strings has a quadratic
% complexity in the number of strings being appended but a reasonably low
% constant factor. If we ever want to use these functions to create long
% strings (longer than a few lines), then we should use a typeclass
% instance implementation that represents the entity being converted to string
% as a list of strings that must be concatenated together at the end using
% string.append_list (probably after being un-reversed, so that you can
% represent appending to the string by consing onto the front of the list).
% The complexity of an implementation like that can be linear in the size
% of the string being built, although it will have a higher constant factor.
%
%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- module parse_tree.mercury_to_mercury.
:- interface.

:- import_module libs.globals.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_item.

:- import_module bool.
:- import_module char.
:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module term.
:- import_module varset.

:- type needs_brackets
    --->    needs_brackets              % needs brackets, if it is an op
    ;       does_not_need_brackets.     % doesn't need brackets

:- type needs_quotes
    --->    next_to_graphic_token       % needs quotes, if it
                                        % is another graphic token
    ;       not_next_to_graphic_token.  % doesn't need quotes

    % Convert_to_mercury(ModuleName, OutputFileName, Items).
    %
:- pred convert_to_mercury(module_name::in, string::in,
    list(item_and_context)::in, io::di, io::uo) is det.

    % Output the specified item, followed by ".\n".
    %
:- pred mercury_output_item(item::in, prog_context::in, io::di, io::uo) is det.

    % Output a `:- pred' declaration, making sure that the variable
    % number appears in variable names if the boolean argument
    % is set to `yes'.
    %
:- pred mercury_output_pred_type(tvarset::in, existq_tvars::in, sym_name::in,
    list(mer_type)::in, maybe(determinism)::in, purity::in,
    prog_constraints::in, prog_context::in, bool::in, io::di, io::uo) is det.
:- func mercury_pred_type_to_string(tvarset, existq_tvars, sym_name,
    list(mer_type), maybe(determinism), purity, prog_constraints,
    prog_context, bool) = string.

    % Output a `:- func' declaration, making sure that the variable number
    % appears in variable names if the boolean argument is set to `yes'.
    %
:- pred mercury_output_func_type(tvarset::in, existq_tvars::in, sym_name::in,
    list(mer_type)::in, mer_type::in, maybe(determinism)::in, purity::in,
    prog_constraints::in, prog_context::in, bool::in, io::di, io::uo) is det.
:- func mercury_func_type_to_string(tvarset, existq_tvars, sym_name,
    list(mer_type), mer_type, maybe(determinism), purity, prog_constraints,
    prog_context, bool) = string.

:- pred mercury_output_pred_mode_decl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, maybe(determinism)::in, prog_context::in,
    io::di, io::uo) is det.
:- func mercury_pred_mode_decl_to_string(inst_varset, sym_name, list(mer_mode),
    maybe(determinism), prog_context) = string.

:- pred mercury_output_func_mode_decl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, mer_mode::in, maybe(determinism)::in, prog_context::in,
    io::di, io::uo) is det.
:- func mercury_func_mode_decl_to_string(inst_varset, sym_name, list(mer_mode),
    mer_mode, maybe(determinism), prog_context) = string.

:- pred mercury_output_mode_subdecl(pred_or_func::in, inst_varset::in,
    sym_name::in, list(mer_mode)::in, maybe(determinism)::in, prog_context::in,
    io::di, io::uo) is det.
:- func mercury_mode_subdecl_to_string(pred_or_func, inst_varset, sym_name,
    list(mer_mode), maybe(determinism), prog_context) = string.

:- pred mercury_output_pred_mode_subdecl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, maybe(determinism)::in, prog_context::in,
    io::di, io::uo) is det.
:- func mercury_pred_mode_subdecl_to_string(inst_varset, sym_name,
    list(mer_mode), maybe(determinism), prog_context) = string.

:- pred mercury_output_func_mode_subdecl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, mer_mode::in, maybe(determinism)::in, prog_context::in,
    io::di, io::uo) is det.
:- func mercury_func_mode_subdecl_to_string(inst_varset, sym_name,
    list(mer_mode), mer_mode, maybe(determinism), prog_context) = string.

:- pred mercury_output_pragma_decl(sym_name::in, int::in, pred_or_func::in,
    string::in, maybe(string)::in, io::di, io::uo) is det.
:- func mercury_pragma_decl_to_string(sym_name, int, pred_or_func, string,
    maybe(string)) = string.

:- pred mercury_output_foreign_language_string(foreign_language::in,
    io::di, io::uo) is det.
:- func mercury_foreign_language_to_string(foreign_language) = string.

:- pred mercury_output_pragma_foreign_code(pragma_foreign_proc_attributes::in,
    sym_name::in, pred_or_func::in, list(pragma_var)::in, prog_varset::in,
    inst_varset::in, pragma_foreign_code_impl::in, io::di, io::uo)
    is det.
:- func mercury_pragma_foreign_code_to_string(pragma_foreign_proc_attributes,
    sym_name, pred_or_func, list(pragma_var), prog_varset, inst_varset,
    pragma_foreign_code_impl) = string.

    % mercury_output_pragma_type_spec(Pragma, AppendVarnums).
    %
:- pred mercury_output_pragma_type_spec((pragma_type)::in(pragma_type_spec),
    bool::in, io::di, io::uo) is det.

:- pred mercury_output_pragma_unused_args(pred_or_func::in, sym_name::in,
    int::in, mode_num::in, list(int)::in, io::di, io::uo) is det.

:- pred mercury_output_pragma_exceptions(pred_or_func::in, sym_name::in,
    int::in, mode_num::in, exception_status::in, io::di, io::uo) is det.

:- pred mercury_output_pragma_trailing_info(pred_or_func::in, sym_name::in,
    arity::in, mode_num::in, trailing_status::in, io::di, io::uo) is det.

:- pred mercury_output_pragma_mm_tabling_info(pred_or_func::in, sym_name::in,
    arity::in, mode_num::in, mm_tabling_status::in, io::di, io::uo) is det.

    % Output the given foreign_decl declaration.
    %
:- pred mercury_output_pragma_foreign_decl(foreign_language::in,
    foreign_decl_is_local::in, string::in, io::di, io::uo) is det.
:- func mercury_pragma_foreign_decl_to_string(foreign_language,
    foreign_decl_is_local, string) = string.

:- pred mercury_output_pragma_foreign_import_module(foreign_language::in,
    module_name::in, io::di, io::uo) is det.

:- pred mercury_output_ctor(constructor::in, tvarset::in, io::di, io::uo)
    is det.

:- pred mercury_output_remaining_ctor_args(tvarset::in,
    list(constructor_arg)::in, io::di, io::uo) is det.

:- pred mercury_output_inst_list(list(mer_inst)::in, inst_varset::in,
    io::di, io::uo) is det.
:- func mercury_inst_list_to_string(list(mer_inst), inst_varset) = string.

    % Output a list of insts in a format that makes them easy to read
    % but may not be valid Mercury.
    %
:- pred mercury_output_structured_inst_list(list(mer_inst)::in, int::in,
    inst_varset::in, io::di, io::uo) is det.
:- func mercury_structured_inst_list_to_string(list(mer_inst), int,
    inst_varset) = string.

    % Output an inst in a format that makes it easy to read
    % but may not be valid Mercury.
    % The `int' argument specifies the indentation level.
    % (These routines are used with `--debug-modes'.)
    %
:- pred mercury_output_structured_inst(mer_inst::in, int::in, inst_varset::in,
    io::di, io::uo) is det.
:- func mercury_structured_inst_to_string(mer_inst, int, inst_varset) = string.

    % Output an inst in a format that is valid Mercury.
    % (These routines are used to create `.int' files, etc.)
    %
:- pred mercury_output_inst(mer_inst::in, inst_varset::in, io::di, io::uo)
    is det.
:- func mercury_inst_to_string(mer_inst, inst_varset) = string.
:- pred mercury_format_inst(mer_inst::in, InstInfo::in,
    U::di, U::uo) is det <= (output(U), inst_info(InstInfo)).

:- pred mercury_format_inst_name(inst_name::in, InstInfo::in,
    U::di, U::uo) is det <= (output(U), inst_info(InstInfo)).

    % Output a cons_id, parenthesizing it if necessary
    %
:- pred mercury_output_cons_id(cons_id::in, needs_brackets::in,
    io::di, io::uo) is det.

:- func mercury_cons_id_to_string(cons_id, needs_brackets) = string.

    % Output a mode / list of modes / uni_mode,
    % in a format that is valid Mercury.
    % (These routines are used to create `.int' files, etc.)
    %
:- pred mercury_output_mode(mer_mode::in, inst_varset::in, io::di, io::uo)
    is det.
:- func mercury_mode_to_string(mer_mode, inst_varset) = string.

:- pred mercury_format_mode(mer_mode::in, InstInfo::in,
    U::di, U::uo) is det <= (output(U), inst_info(InstInfo)).

:- pred mercury_output_mode_list(list(mer_mode)::in, inst_varset::in,
    io::di, io::uo) is det.
:- func mercury_mode_list_to_string(list(mer_mode), inst_varset) = string.

    % Output a determinism, in a format that is valid Mercury.
    %
:- pred mercury_output_det(determinism::in, io::di, io::uo) is det.
:- func mercury_det_to_string(determinism) = string.

    % Output a comma-separated list of variables, making sure that
    % the variable number appears in the variable name if the boolean
    % argument is set to `yes'.
    %
:- pred mercury_output_vars(varset(T)::in, bool::in, list(var(T))::in,
    io::di, io::uo) is det.
:- func mercury_vars_to_string(varset(T), bool, list(var(T))) = string.

    % Output a variable, making sure that the variable number appears
    % in the variable name if the boolean argument is set to `yes'.
    %
:- pred mercury_output_var(varset(T)::in, bool::in, var(T)::in,
    io::di, io::uo) is det.
:- func mercury_var_to_string(varset(T), bool, var(T)) = string.

    % Output a term, making sure that the variable number appears
    % in variable names if the boolean argument is set to `yes'.
    %
:- pred mercury_output_term(varset(T)::in, bool::in, term(T)::in,
    io::di, io::uo) is det.
:- func mercury_term_to_string(varset(T), bool, term(T)) = string.

:- pred mercury_output_term_nq(varset(T)::in, bool::in, needs_quotes::in,
    term(T)::in, io::di, io::uo) is det.
:- func mercury_term_nq_to_string(varset(T), bool, needs_quotes, term(T))
    = string.

:- pred mercury_output_type(tvarset::in, bool::in, mer_type::in,
    io::di, io::uo) is det.
:- func mercury_type_to_string(tvarset, bool, mer_type) = string.
:- pred mercury_format_type(tvarset::in, bool::in, mer_type::in, U::di, U::uo)
    is det <= output(U).

:- func mercury_type_list_to_string(tvarset, list(mer_type)) = string.

:- pred mercury_output_newline(int::in, io::di, io::uo) is det.

:- pred mercury_output_bracketed_sym_name(sym_name::in,
    io::di, io::uo) is det.
:- func mercury_bracketed_sym_name_to_string(sym_name) = string.

:- pred mercury_output_bracketed_sym_name(sym_name::in, needs_quotes::in,
    io::di, io::uo) is det.
:- func mercury_bracketed_sym_name_to_string(sym_name, needs_quotes) = string.

:- pred mercury_convert_var_name(string::in, string::out) is det.

    % Output a constraint, making sure that the variable number appears
    % in variable names if the boolean argument is set to `yes'.
    %
:- pred mercury_output_constraint(tvarset::in, bool::in, prog_constraint::in,
    io::di, io::uo) is det.
:- func mercury_constraint_to_string(tvarset, prog_constraint) = string.

    % Output an existential quantifier, making sure that the variable
    % number appears in variable names if the boolean argument
    % is set to `yes'.
    %
:- pred mercury_output_quantifier(tvarset::in, bool::in, existq_tvars::in,
    io::di, io::uo) is det.
:- func mercury_quantifier_to_string(tvarset, bool, existq_tvars) = string.

:- pred mercury_output_instance_methods(instance_methods::in,
    io::di, io::uo) is det.

:- pred mercury_output_trace_expr(pred(T, io, io)::in(pred(in, di, uo) is det),
    trace_expr(T)::in, io::di, io::uo) is det.

:- pred mercury_output_trace_compiletime(trace_compiletime::in,
    io::di, io::uo) is det.

:- pred mercury_output_trace_runtime(trace_runtime::in,
    io::di, io::uo) is det.

:- pred mercury_output_trace_mutable_var(trace_mutable_var::in,
    prog_varset::in, bool::in, io::di, io::uo) is det.

    % This predicate outputs termination_info pragmas;
    % such annotations can be part of .opt and .trans_opt files.
    %
:- pred write_pragma_termination_info(pred_or_func::in, sym_name::in,
    list(mer_mode)::in, prog_context::in,
    maybe(generic_arg_size_info(T))::in,
    maybe(generic_termination_info(S, T))::in, io::di, io::uo) is det.

:- pred write_pragma_structure_sharing_info(pred_or_func::in, sym_name::in,
    list(mer_mode)::in, prog_context::in, prog_vars::in,
    maybe(prog_varset)::in, list(mer_type)::in, maybe(tvarset)::in,
    maybe(structure_sharing_domain)::in, io::di, io::uo) is det.

:- pred write_pragma_structure_reuse_info(pred_or_func::in, sym_name::in,
    list(mer_mode)::in, prog_context::in, prog_vars::in,
    maybe(prog_varset)::in, list(mer_type)::in, maybe(tvarset)::in,
    maybe(structure_reuse_domain)::in, io::di, io::uo) is det.

    % Write the given arg size info. Verbose if the second arg is yes.
    %
:- pred write_maybe_arg_size_info(maybe(generic_arg_size_info(T))::in,
    bool::in, io::di, io::uo) is det.

    % Write the given termination info. Verbose if the second arg is yes.
    %
:- pred write_maybe_termination_info(maybe(generic_termination_info(S, T))::in,
    bool::in, io::di, io::uo) is det.

:- pred mercury_output_where_attributes(tvarset::in,
    maybe(solver_type_details)::in, maybe(unify_compare)::in, io::di, io::uo)
    is det.

%-----------------------------------------------------------------------------%

% This is the typeclass mentioned in the long comment at the top of the module.

:- typeclass output(U) where [
    pred add_string(string::in, U::di, U::uo) is det,
    pred add_strings(list(string)::in, U::di, U::uo) is det,
    pred add_char(char::in, U::di, U::uo) is det,
    pred add_int(int::in, U::di, U::uo) is det,
    pred add_float(float::in, U::di, U::uo) is det,
    pred add_purity_prefix(purity::in, U::di, U::uo) is det,
    pred add_quoted_atom(string::in, U::di, U::uo) is det,
    pred add_quoted_string(string::in, U::di, U::uo) is det,
    pred add_constant(const::in, U::di, U::uo) is det,
    pred add_class_id(class_id::in, U::di, U::uo) is det,
    pred add_eval_method(eval_method::in, U::di, U::uo) is det,
    pred add_lambda_eval_method(lambda_eval_method::in, U::di, U::uo) is det,
    pred add_escaped_string(string::in, U::di, U::uo) is det,
    pred add_format(string::in, list(io.poly_type)::in, U::di, U::uo) is det,
    pred add_list(list(T)::in, string::in,
        pred(T, U, U)::in(pred(in, di, uo) is det), U::di, U::uo) is det
].

:- instance output(io.state).
:- instance output(string).

% We use the following type class to share code between mercury_output_inst,
% which outputs inst in Mercury syntax, and mercury_output_expanded_inst,
% which is the same except that it expands any compiler-defined insts
% (except those which have already been encountered).
%
% (XXX Perhaps we should use the same sort of technique to also avoid
% code duplication with mercury_format_structured_inst.)

:- typeclass inst_info(InstInfo) where [
    (func instvarset(InstInfo) = inst_varset),
    (pred format_defined_inst(inst_name::in, InstInfo::in,
        U::di, U::uo) is det <= output(U))
].

:- type simple_inst_info
    --->    simple_inst_info(sii_varset :: inst_varset).

:- instance inst_info(simple_inst_info).

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module libs.rat.
:- import_module parse_tree.prog_ctgc.
:- import_module parse_tree.prog_io_util.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_util.
:- import_module recompilation.version.

:- import_module int.
:- import_module lexer.
:- import_module map.
:- import_module pair.
:- import_module ops.
:- import_module set.
:- import_module string.
:- import_module term.
:- import_module term_io.
:- import_module varset.

%-----------------------------------------------------------------------------%

convert_to_mercury(ModuleName, OutputFileName, Items, !IO) :-
    io.open_output(OutputFileName, Res, !IO),
    (
        Res = ok(FileStream),
        globals.io_lookup_bool_option(verbose, Verbose, !IO),
        (
            Verbose = yes,
            io.write_string("% Writing output to ", !IO),
            io.write_string(OutputFileName, !IO),
            io.write_string("...", !IO),
            io.flush_output(!IO)
        ;
            Verbose = no
        ),

        io.set_output_stream(FileStream, OutputStream, !IO),
        io.write_string(":- module ", !IO),
        mercury_output_bracketed_sym_name(ModuleName, !IO),
        io.write_string(".\n", !IO),

        % Module qualifiers on items are redundant after the
        % declaration above.
        UnqualifiedItemNames = yes,
        mercury_output_item_list(UnqualifiedItemNames, Items, !IO),
        io.set_output_stream(OutputStream, _, !IO),
        io.close_output(FileStream, !IO),
        (
            Verbose = yes,
            io.write_string(" done\n", !IO)
        ;
            Verbose = no
        )
    ;
        Res = error(_),
        io.write_string("Error: couldn't open file `", !IO),
        io.write_string(OutputFileName, !IO),
        io.write_string("' for output.\n", !IO)
    ).

%-----------------------------------------------------------------------------%

    % Output the declarations one by one.
    %
:- pred mercury_output_item_list(bool::in, list(item_and_context)::in,
    io::di, io::uo) is det.

mercury_output_item_list(_, [], !IO).
mercury_output_item_list(UnqualifiedItemNames,
        [ItemAndContext | ItemAndContexts], !IO) :-
    ItemAndContext = item_and_context(Item, Context),
    mercury_output_item(UnqualifiedItemNames, Item, Context, !IO),
    mercury_output_item_list(UnqualifiedItemNames, ItemAndContexts, !IO).

%-----------------------------------------------------------------------------%

mercury_output_item(Item, Context, !IO) :-
    UnqualifiedItemNames = no,
    mercury_output_item(UnqualifiedItemNames, Item, Context, !IO).

:- pred mercury_output_item(bool::in, item::in, prog_context::in,
    io::di, io::uo) is det.

mercury_output_item(UnqualifiedItemNames,
        item_type_defn(VarSet, Name0, Args, TypeDefn, _Cond),
        Context, !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, Name0, Name),
    maybe_output_line_number(Context, !IO),
    mercury_output_type_defn(VarSet, Name, Args, TypeDefn, Context, !IO).
mercury_output_item(UnqualifiedItemNames,
        item_inst_defn(VarSet, Name0, Args, InstDefn, _Cond), Context, !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, Name0, Name1),
    % If the unqualified name is a builtin inst, then output the qualified
    % name.  This prevents the compiler giving an error about redefining
    % builtin insts when an interface file is read back in.
    ( builtin_inst_name(Name1, Args) ->
        Name = Name0
    ;
        Name = Name1
    ),
    maybe_output_line_number(Context, !IO),
    mercury_output_inst_defn(VarSet, Name, Args, InstDefn, Context, !IO).
mercury_output_item(UnqualifiedItemNames,
        item_mode_defn(VarSet, Name0, Args, ModeDefn, _Cond), Context, !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, Name0, Name),
    maybe_output_line_number(Context, !IO),
    mercury_format_mode_defn(VarSet, Name, Args, ModeDefn, Context, !IO).
mercury_output_item(UnqualifiedItemNames,
        item_pred_or_func(_Origin, TypeVarSet, InstVarSet, ExistQVars,
            PredOrFunc, PredName0, TypesAndModes, WithType, WithInst, Det,
            _Cond, Purity, ClassContext),
        Context, !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, PredName0, PredName),
    maybe_output_line_number(Context, !IO),
    (
        % Function declarations using `with_type` have the same
        % format as predicate declarations, but with `func' instead
        % of `pred'.
        PredOrFunc = pf_function,
        WithType = no
    ->
        pred_args_to_func_args(TypesAndModes, FuncTypesAndModes,
            RetTypeAndMode),
        mercury_format_func_decl(TypeVarSet, InstVarSet, ExistQVars, PredName,
            FuncTypesAndModes, RetTypeAndMode, Det, Purity, ClassContext,
            Context, ":- ", ".\n", ".\n", !IO)
    ;
        mercury_format_pred_or_func_decl(PredOrFunc, TypeVarSet, InstVarSet,
            ExistQVars, PredName, TypesAndModes, WithType, WithInst, Det,
            Purity, ClassContext, Context, ":- ", ".\n", ".\n", !IO)
    ).
mercury_output_item(UnqualifiedItemNames,
        item_pred_or_func_mode(VarSet, PredOrFunc, PredName0, Modes, WithInst,
            MaybeDet, _Cond),
        Context, !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, PredName0, PredName),
    maybe_output_line_number(Context, !IO),
    (
        % Function mode declarations using `with_type` have
        % the same format as predicate mode declarations.
        PredOrFunc = yes(pf_function),
        WithInst = no
    ->
        pred_args_to_func_args(Modes, FuncModes, RetMode),
        mercury_output_func_mode_decl(VarSet, PredName, FuncModes, RetMode,
            MaybeDet, Context, !IO)
    ;
        mercury_output_pred_mode_decl(VarSet, PredName, Modes, WithInst,
            MaybeDet, Context, !IO)
    ).
mercury_output_item(_, item_module_defn(VarSet, ModuleDefn), Context, !IO) :-
    maybe_output_line_number(Context, !IO),
    mercury_output_module_defn(VarSet, ModuleDefn, Context, !IO).
mercury_output_item(UnqualifiedItemNames,
        item_clause(_, VarSet, PredOrFunc, PredName0, Args, Body), Context,
        !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, PredName0, PredName),
    maybe_output_line_number(Context, !IO),
    (
        PredOrFunc = pf_predicate,
        mercury_output_pred_clause(VarSet, PredName, Args, Body, Context, !IO)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(Args, FuncArgs, Result),
        mercury_output_func_clause(VarSet, PredName, FuncArgs, Result, Body,
            Context, !IO)
    ),
    io.write_string(".\n", !IO).
mercury_output_item(_UnqualifiedItemNames, item_pragma(_, Pragma), Context,
        !IO) :-
    maybe_output_line_number(Context, !IO),
    (
        Pragma = pragma_source_file(SourceFile),
        mercury_output_pragma_source_file(SourceFile, !IO)
    ;
        Pragma = pragma_foreign_decl(Lang, IsLocal, ForeignHeaderString),
        mercury_output_pragma_foreign_decl(Lang, IsLocal, ForeignHeaderString,
            !IO)
    ;
        Pragma = pragma_foreign_import_module(Lang, ModuleName),
        mercury_output_pragma_foreign_import_module(Lang, ModuleName, !IO)
    ;
        Pragma = pragma_foreign_code(Lang, Code),
        mercury_output_pragma_foreign_body_code(Lang, Code, !IO)
    ;
        Pragma = pragma_foreign_proc(Attributes, Pred, PredOrFunc, Vars,
            ProgVarset, InstVarset, PragmaCode),
        mercury_output_pragma_foreign_code(Attributes, Pred,
            PredOrFunc, Vars, ProgVarset, InstVarset, PragmaCode, !IO)
    ;
        Pragma = pragma_import(Pred, PredOrFunc, ModeList, Attributes,
            C_Function),
        mercury_format_pragma_import(Pred, PredOrFunc, ModeList,
            Attributes, C_Function, !IO)
    ;
        Pragma = pragma_foreign_export(Lang, Pred, PredOrFunc, ModeList,
            ExportName),
        mercury_format_pragma_foreign_export(Lang, Pred, PredOrFunc, ModeList,
            ExportName, !IO)
    ;
        Pragma = pragma_obsolete(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate, "obsolete", no,
            !IO)
    ;
        Pragma = pragma_tabled(Type, Pred, Arity, _PredOrFunc, _Mode,
            MaybeAttributes),
        PragmaName = eval_method_to_pragma_name(Type),
        (
            MaybeAttributes = yes(Attributes),
            Attributes = table_attributes(Strictness, MaybeSizeLimit, Stats,
                AllowReset),
            some [!Strs] (
                !:Strs = [],
                (
                    Strictness = all_strict
                ;
                    Strictness = all_fast_loose,
                    !:Strs = ["fast_loose" | !.Strs]
                ;
                    Strictness = specified(Args),
                    ArgStrs = list.map(maybe_arg_tabling_method_to_string,
                        Args),
                    ArgsStr = string.join_list(", ", ArgStrs),
                    !:Strs = ["specified(" ++ ArgsStr ++ ")" | !.Strs]
                ),
                (
                    MaybeSizeLimit = yes(SizeLimit),
                    LimitStr = "limit(" ++ int_to_string(SizeLimit) ++ ")",
                    !:Strs = [LimitStr | !.Strs]
                ;
                    MaybeSizeLimit = no
                ),
                (
                    Stats = table_gather_statistics,
                    !:Strs = ["statistics" | !.Strs]
                ;
                    Stats = table_dont_gather_statistics
                ),
                (
                    AllowReset = table_allow_reset,
                    !:Strs = ["allow_reset" | !.Strs]
                ;
                    AllowReset = table_dont_allow_reset
                ),
                (
                    !.Strs = [],
                    MaybeAfter = no
                ;
                    !.Strs = [_ | _],
                    MaybeAfter =
                        yes("[" ++ string.join_list(", ", !.Strs) ++ "]")
                )
            )
        ;
            MaybeAttributes = no,
            MaybeAfter = no
        ),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate, PragmaName,
            MaybeAfter, !IO)
    ;
        Pragma = pragma_type_spec(_, _, _, _, _, _, _, _),
        AppendVarnums = no,
        mercury_output_pragma_type_spec(Pragma, AppendVarnums, !IO)
    ;
        Pragma = pragma_inline(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate, "inline", no,
            !IO)
    ;
        Pragma = pragma_no_inline(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate, "no_inline", no,
            !IO)
    ;
        Pragma = pragma_unused_args(PredOrFunc, PredName, Arity, ModeNum,
            UnusedArgs),
        mercury_output_pragma_unused_args(PredOrFunc,
            PredName, Arity, ModeNum, UnusedArgs, !IO)
    ;
        Pragma = pragma_exceptions(PredOrFunc, PredName, Arity, ModeNum,
            ThrowStatus),
        mercury_output_pragma_exceptions(PredOrFunc, PredName, Arity, ModeNum,
            ThrowStatus, !IO)
    ;
        Pragma = pragma_trailing_info(PredOrFunc, PredName, Arity, ModeNum,
            TrailingStatus),
        mercury_output_pragma_trailing_info(PredOrFunc, PredName, Arity,
            ModeNum, TrailingStatus, !IO)
    ;
        Pragma = pragma_mm_tabling_info(PredOrFunc, PredName, Arity, ModeNum,
            MM_TablingStatus),
        mercury_output_pragma_mm_tabling_info(PredOrFunc, PredName, Arity,
            ModeNum, MM_TablingStatus, !IO)
    ;
        Pragma = pragma_fact_table(Pred, Arity, FileName),
        mercury_format_pragma_fact_table(Pred, Arity, FileName, !IO)
    ;
        Pragma = pragma_reserve_tag(TypeName, TypeArity),
        add_string(":- pragma reserve_tag(", !IO),
        mercury_format_bracketed_sym_name(TypeName, next_to_graphic_token,
            !IO),
        add_string("/", !IO),
        add_int(TypeArity, !IO),
        add_string(").\n", !IO)
    ;
        Pragma = pragma_promise_pure(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "promise_pure", no, !IO)
    ;
        Pragma = pragma_promise_semipure(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "promise_semipure", no, !IO)
    ;
        Pragma = pragma_promise_equivalent_clauses(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "promise_equivalent_clauses", no, !IO)
    ;
        Pragma = pragma_termination_info(PredOrFunc, PredName, ModeList,
            MaybePragmaArgSizeInfo, MaybePragmaTerminationInfo),
        write_pragma_termination_info(PredOrFunc, PredName, ModeList,
            Context, MaybePragmaArgSizeInfo, MaybePragmaTerminationInfo, !IO)
    ;
        Pragma = pragma_termination2_info(PredOrFunc, PredName,
            ModeList, SuccessInfo, FailureInfo, MaybeTermination),
        write_pragma_termination2_info(PredOrFunc, PredName,
            ModeList, SuccessInfo, FailureInfo,
            MaybeTermination, Context, !IO)
    ;
        Pragma = pragma_terminates(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "terminates", no, !IO)
    ;
        Pragma = pragma_does_not_terminate(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "does_not_terminate", no, !IO)
    ;
        Pragma = pragma_check_termination(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "check_termination", no, !IO)
    ;
        Pragma = pragma_structure_sharing(PredOrFunc, PredName, ModesList,
            HeadVars, Types, MaybeStructureSharing),
        write_pragma_structure_sharing_info(PredOrFunc, PredName, ModesList,
            Context, HeadVars, no, Types, no, MaybeStructureSharing, !IO)
    ;
        Pragma = pragma_structure_reuse(PredOrFunc, PredName, ModesList,
            HeadVars, Types, MaybeStructureReuseDomain),
        write_pragma_structure_reuse_info(PredOrFunc, PredName, ModesList,
            Context, HeadVars, no, Types, no, MaybeStructureReuseDomain, !IO)
    ;
        Pragma = pragma_mode_check_clauses(Pred, Arity),
        mercury_output_pragma_decl(Pred, Arity, pf_predicate,
            "mode_check_clauses", no, !IO)
    ).

mercury_output_item(_, item_promise(PromiseType, Goal0, VarSet, UnivVars), _,
        !IO) :-
    Indent = 1,
    (
        PromiseType = promise_type_true,
        % For an assertion, we put back any universally quantified variables
        % that were stripped off during parsing so that the clause will
        % output correctly.
        io.write_string(":- promise ", !IO),
        (
            UnivVars = [_ | _],
            Goal0 = _GoalExpr - Context,
            Goal = all_expr(UnivVars, Goal0) - Context
        ;
            UnivVars = [],
            Goal = Goal0
        )
    ;
        ( PromiseType = promise_type_exclusive
        ; PromiseType = promise_type_exhaustive
        ; PromiseType = promise_type_exclusive_exhaustive
        ),
        % A promise ex declaration has a slightly different standard formatting
        % from an assertion; the universal quantification comes before the rest
        % of the declaration
        io.write_string(":- all [", !IO),
        AppendVarNum = no,
        mercury_output_vars(VarSet, AppendVarNum, UnivVars, !IO),
        io.write_string("]", !IO),
        mercury_output_newline(Indent, !IO),
        prog_out.write_promise_type(PromiseType, !IO),
        Goal0 = Goal
    ),
    mercury_output_newline(Indent, !IO),
    mercury_output_goal(Goal, VarSet, Indent, !IO),
    io.write_string(".\n", !IO).
mercury_output_item(_, item_nothing(_), _, !IO).
mercury_output_item(UnqualifiedItemNames, item_typeclass(Constraints,
        FunDeps, ClassName0, Vars, Interface, VarSet), _, !IO) :-
    maybe_unqualify_sym_name(UnqualifiedItemNames, ClassName0, ClassName),
    io.write_string(":- typeclass ", !IO),

        % We put an extra set of brackets around the class name in
        % case the name is an operator
    mercury_output_sym_name(ClassName, !IO),
    io.write_char('(', !IO),
    io.write_list(Vars, ", ",
        (pred(V::in, IO0::di, IO::uo) is det :-
            varset.lookup_name(VarSet, V, VarName),
            io.write_string(VarName, IO0, IO)
        ), !IO),
    io.write_char(')', !IO),
    AppendVarnums = no,
    mercury_format_fundeps_and_prog_constraint_list(FunDeps, Constraints,
        VarSet, AppendVarnums, !IO),
    (
        Interface = class_interface_abstract,
        io.write_string(".\n", !IO)
    ;
        Interface = class_interface_concrete(Methods),
        io.write_string(" where [\n", !IO),
        output_class_methods(Methods, !IO),
        io.write_string("\n].\n", !IO)
    ).
mercury_output_item(_, item_instance(Constraints, ClassName, Types, Body,
        VarSet, _InstanceModuleName), _, !IO) :-
    io.write_string(":- instance ", !IO),
        % We put an extra set of brackets around the class name in
        % case the name is an operator.
    io.write_char('(', !IO),
    mercury_output_sym_name(ClassName, !IO),
    io.write_char('(', !IO),
    io.write_list(Types, ", ", mercury_output_type(VarSet, no), !IO),
    io.write_char(')', !IO),
    io.write_char(')', !IO),
    AppendVarnums = no,
    mercury_format_prog_constraint_list(Constraints, VarSet, "<=",
        AppendVarnums, !IO),
    (
        Body = instance_body_abstract
    ;
        Body = instance_body_concrete(Methods),
        io.write_string(" where [\n", !IO),
        mercury_output_instance_methods(Methods, !IO),
        io.write_string("\n]", !IO)
    ),
    io.write_string(".\n", !IO).
mercury_output_item(_, item_initialise(_, PredSymName, Arity), _, !IO) :-
    io.write_string(":- initialise ", !IO),
    mercury_output_sym_name(PredSymName, !IO),
    io.write_string("/", !IO),
    io.write_int(Arity, !IO),
    io.write_string(".\n", !IO).
mercury_output_item(_, item_finalise(_, PredSymName, Arity), _, !IO) :-
    io.write_string(":- finalise ", !IO),
    mercury_output_sym_name(PredSymName, !IO),
    io.write_string("/", !IO),
    io.write_int(Arity, !IO),
    io.write_string(".\n", !IO).
mercury_output_item(_, Mutable, _, !IO) :-
    Mutable = item_mutable(Name, Type, InitTerm, Inst, Attrs, MutVarset),
    io.write_string(":- mutable(", !IO),
    io.write_string(Name, !IO),
    io.write_string(", ", !IO),
    mercury_output_type(varset.init, no, Type, !IO),
    io.write_string(", ", !IO),
    %
    % See the comments for prog_io.read_mutable_decl for the reason we
    % _must_ use MutVarset here.
    %
    mercury_output_term(MutVarset, no, InitTerm, !IO),
    io.write_string(", ", !IO),
    mercury_output_inst(Inst, varset.init, !IO),
    io.write_string(", ", !IO),
    io.print(Attrs, !IO),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

:- pred output_class_methods(class_methods::in, io::di, io::uo) is det.

output_class_methods(Methods, !IO) :-
    io.write_list(Methods, ",\n", output_class_method, !IO).

:- pred output_class_method(class_method::in, io::di, io::uo) is det.

output_class_method(Method, !IO) :-
    io.write_string("\t", !IO),
    (
        Method = method_pred_or_func(TypeVarSet, InstVarSet, ExistQVars,
            PredOrFunc, SymName, TypesAndModes, WithType, WithInst,
            Detism, _Condition, Purity, ClassContext, Context),

        % The module name is implied by the qualifier of the
        % `:- typeclass declaration'.
        Name = unqualify_name(SymName),
        (
            % Function declarations using `with_type` have the
            % same format as predicate declarations, but with
            % `func' instead of `pred'.
            PredOrFunc = pf_function,
            WithType = no
        ->
            pred_args_to_func_args(TypesAndModes,
                FuncTypesAndModes, RetTypeAndMode),
            mercury_format_func_decl(TypeVarSet, InstVarSet, ExistQVars,
                unqualified(Name), FuncTypesAndModes, RetTypeAndMode,
                Detism, Purity, ClassContext, Context, "", ",\n\t", "", !IO)
        ;
            mercury_format_pred_or_func_decl(PredOrFunc, TypeVarSet,
                InstVarSet, ExistQVars, unqualified(Name), TypesAndModes,
                WithType, WithInst, Detism, Purity,
                ClassContext, Context, "", ",\n\t", "", !IO)
        )
    ;
        Method = method_pred_or_func_mode(VarSet, PredOrFunc, SymName, Modes,
            WithInst, Detism, _Condition, Context),

        % The module name is implied by the qualifier of the
        % `:- typeclass declaration'.
        Name = unqualify_name(SymName),
        (
            % Function mode declarations using `with_type` have
            % the same format as predicate mode declarations.
            PredOrFunc = yes(pf_function),
            WithInst = no
        ->
            pred_args_to_func_args(Modes, FuncModes, RetMode),
            mercury_format_func_mode_decl_2(VarSet, unqualified(Name),
                FuncModes, RetMode, Detism, Context, "", "", !IO)
        ;
            mercury_format_pred_or_func_mode_decl_2(VarSet, unqualified(Name),
                Modes, WithInst, Detism, Context, "", "", !IO)
        )
    ).

mercury_output_instance_methods(Methods, !IO) :-
    io.write_list(Methods, ",\n", output_instance_method, !IO).

:- pred output_instance_method(instance_method::in, io::di, io::uo) is det.

output_instance_method(Method, !IO) :-
    Method = instance_method(PredOrFunc, Name1, Defn, Arity, Context),
    (
        Defn = instance_proc_def_name(Name2),
        io.write_char('\t', !IO),
        (
            PredOrFunc = pf_function,
            io.write_string("func(", !IO)
        ;
            PredOrFunc = pf_predicate,
            io.write_string("pred(", !IO)
        ),
        mercury_output_bracketed_sym_name(Name1, next_to_graphic_token, !IO),
        io.write_string("/", !IO),
        io.write_int(Arity, !IO),
        io.write_string(") is ", !IO),
        mercury_output_bracketed_sym_name(Name2, !IO)
    ;
        Defn = instance_proc_def_clauses(ItemList),
        % XXX should we output the term contexts?
        io.write_string("\t(", !IO),
        io.write_list(ItemList, "),\n\t(",
            output_instance_method_clause(Name1, Context), !IO),
        io.write_string(")", !IO)
    ).

:- pred output_instance_method_clause(sym_name::in, prog_context::in, item::in,
    io::di, io::uo) is det.

output_instance_method_clause(Name1, Context, Item, !IO) :-
    ( Item = item_clause(_, VarSet, PredOrFunc, _PredName, HeadTerms, Body) ->
        (
            PredOrFunc = pf_predicate,
            mercury_output_pred_clause(VarSet, Name1, HeadTerms, Body, Context,
                !IO)
        ;
            PredOrFunc = pf_function,
            pred_args_to_func_args(HeadTerms, ArgTerms, ResultTerm),
            mercury_output_func_clause(VarSet, Name1, ArgTerms, ResultTerm,
                Body, Context, !IO)
        )
    ;
        unexpected(this_file, "invalid instance method item")
    ).

%-----------------------------------------------------------------------------%

:- pred mercury_output_module_defn(prog_varset::in, module_defn::in,
    term.context::in, io::di, io::uo) is det.

mercury_output_module_defn(_VarSet, ModuleDefn, _Context, !IO) :-
    (
        ModuleDefn = md_import(Imported),
        ( Imported = list_module(ImportedModules) ->
            io.write_string(":- import_module ", !IO),
            mercury_write_module_spec_list(ImportedModules, !IO),
            io.write_string(".\n", !IO)
        ;
            unexpected(this_file, "mercury_output_module_defn: import")
        )
    ;
        ModuleDefn = md_use(Used),
        ( Used = list_module(UsedModules) ->
            io.write_string(":- use_module ", !IO),
            mercury_write_module_spec_list(UsedModules, !IO),
            io.write_string(".\n", !IO)
        ;
            unexpected(this_file, "mercury_output_module_defn: use")
        )
    ;
        ModuleDefn = md_interface,
        io.write_string(":- interface.\n", !IO)
    ;
        ModuleDefn = md_implementation,
        io.write_string(":- implementation.\n", !IO)
    ;
        ModuleDefn = md_include_module(IncludedModules),
        io.write_string(":- include_module ", !IO),
        mercury_write_module_spec_list(IncludedModules, !IO),
        io.write_string(".\n", !IO)
    ;
        ModuleDefn = md_module(Module),
        io.write_string(":- module ", !IO),
        mercury_output_bracketed_sym_name(Module, !IO),
        io.write_string(".\n", !IO)
    ;
        ModuleDefn = md_end_module(Module),
        io.write_string(":- end_module ", !IO),
        mercury_output_bracketed_sym_name(Module, !IO),
        io.write_string(".\n", !IO)
    ;
        ModuleDefn = md_version_numbers(Module, VersionNumbers),
        io.write_string(":- version_numbers(", !IO),
        io.write_int(version_numbers_version_number, !IO),
        io.write_string(", ", !IO),
        mercury_output_bracketed_sym_name(Module, !IO),
        io.write_string(",\n", !IO),
        recompilation.version.write_version_numbers(VersionNumbers, !IO),
        io.write_string(").\n", !IO)
    ;
        ( ModuleDefn = md_abstract_imported
        ; ModuleDefn = md_export(_)
        ; ModuleDefn = md_external(_, _)
        ; ModuleDefn = md_imported(_)
        ; ModuleDefn = md_opt_imported
        ; ModuleDefn = md_private_interface
        ; ModuleDefn = md_transitively_imported
        ; ModuleDefn = md_used(_)
        ),
        io.write_string("% unimplemented module declaration ", !IO),
        io.write(ModuleDefn, !IO),
        io.nl(!IO)
    ).

:- pred mercury_write_module_spec_list(list(module_specifier)::in,
    io::di, io::uo) is det.

mercury_write_module_spec_list([], !IO).
mercury_write_module_spec_list([ModuleName | ModuleNames], !IO) :-
    mercury_output_bracketed_sym_name(ModuleName, !IO),
    (
        ModuleNames = []
    ;
        ModuleNames = [_ | _],
        io.write_string(", ", !IO),
        mercury_write_module_spec_list(ModuleNames, !IO)
    ).

:- pred mercury_output_inst_defn(inst_varset::in, sym_name::in,
    list(inst_var)::in, inst_defn::in, prog_context::in,
    io::di, io::uo) is det.

mercury_output_inst_defn(VarSet, Name, Args, abstract_inst, Context, !IO) :-
    io.write_string(":- inst (", !IO),
    ArgTerms = list.map(func(V) = variable(V, Context), Args),
    construct_qualified_term(Name, ArgTerms, Context, InstTerm),
    mercury_output_term(VarSet, no, InstTerm, !IO),
    io.write_string(").\n", !IO).
mercury_output_inst_defn(VarSet, Name, Args, eqv_inst(Body), Context, !IO) :-
    io.write_string(":- inst (", !IO),
    ArgTerms = list.map(func(V) = variable(V, Context), Args),
    construct_qualified_term(Name, ArgTerms, Context, InstTerm),
    mercury_output_term(VarSet, no, InstTerm, !IO),
    io.write_string(") == ", !IO),
    mercury_output_inst(Body, VarSet, !IO),
    io.write_string(".\n", !IO).

mercury_output_structured_inst_list(Insts, Indent, VarSet, !IO) :-
    mercury_format_structured_inst_list(Insts, Indent, VarSet, !IO).

mercury_structured_inst_list_to_string(Insts, Indent, VarSet) = String :-
    mercury_format_structured_inst_list(Insts, Indent, VarSet, "", String).

:- pred mercury_format_structured_inst_list(list(mer_inst)::in, int::in,
    inst_varset::in, U::di, U::uo) is det <= output(U).

mercury_format_structured_inst_list([], _, _, !U).
mercury_format_structured_inst_list([Inst | Insts], Indent0, VarSet, !U) :-
    mercury_format_structured_inst(Inst, Indent0, VarSet, !U),
    mercury_format_structured_inst_list(Insts, Indent0, VarSet, !U).

mercury_output_inst_list(Insts, VarSet, !IO) :-
    mercury_format_inst_list(Insts, simple_inst_info(VarSet), !IO).

mercury_inst_list_to_string(Insts, VarSet) = String :-
    mercury_format_inst_list(Insts, simple_inst_info(VarSet), "", String).

:- pred mercury_format_inst_list(list(mer_inst)::in, InstInfo::in,
    U::di, U::uo) is det <= (output(U), inst_info(InstInfo)).

mercury_format_inst_list([], _, !U).
mercury_format_inst_list([Inst | Insts], VarSet, !U) :-
    mercury_format_inst(Inst, VarSet, !U),
    (
        Insts = []
    ;
        Insts = [_ | _],
        add_string(", ", !U),
        mercury_format_inst_list(Insts, VarSet, !U)
    ).

mercury_output_structured_inst(Inst, Indent, VarSet, !U) :-
    mercury_format_structured_inst(Inst, Indent, VarSet, !U).

mercury_structured_inst_to_string(Inst, Indent, VarSet) = String :-
    mercury_format_structured_inst(Inst, Indent, VarSet, "", String).

:- pred mercury_format_structured_inst(mer_inst::in, int::in, inst_varset::in,
    U::di, U::uo) is det <= output(U).

mercury_format_structured_inst(any(Uniq), Indent, _, !U) :-
    mercury_format_tabs(Indent, !U),
    mercury_format_any_uniqueness(Uniq, !U),
    add_string("\n", !U).
mercury_format_structured_inst(free, Indent, _, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("free\n", !U).
mercury_format_structured_inst(free(_T), Indent, _, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("free(with some type)\n", !U).
mercury_format_structured_inst(bound(Uniq, BoundInsts), Indent, VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    mercury_format_uniqueness(Uniq, "bound", !U),
    add_string("(\n", !U),
    mercury_format_structured_bound_insts(BoundInsts, Indent, VarSet, !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst(ground(Uniq, GroundInstInfo), Indent, VarSet,
        !U) :-
    mercury_format_tabs(Indent, !U),
    (
        GroundInstInfo = higher_order(pred_inst_info(PredOrFunc, Modes, Det)),
        ( Uniq = shared ->
            true
        ;
            add_string("/* ", !U),
            mercury_format_uniqueness(Uniq, "ground", !U),
            add_string(" */", !U)
        ),
        (
            PredOrFunc = pf_predicate,
            (
                Modes = [],
                add_string("((pred) is ", !U),
                mercury_format_det(Det, !U),
                add_string(")\n", !U)
            ;
                Modes = [_ | _],
                add_string("(pred(", !U),
                mercury_format_mode_list(Modes, simple_inst_info(VarSet), !U),
                add_string(") is ", !U),
                mercury_format_det(Det, !U),
                add_string(")\n", !U)
            )
        ;
            PredOrFunc = pf_function,
            pred_args_to_func_args(Modes, ArgModes, RetMode),
            (
                Modes = [],
                add_string("((func) = ", !U)
            ;
                Modes = [_ | _],
                add_string("(func(", !U),
                mercury_format_mode_list(ArgModes, simple_inst_info(VarSet),
                    !U),
                add_string(") = ", !U)
            ),
            mercury_format_mode(RetMode, simple_inst_info(VarSet), !U),
            add_string(" is ", !U),
            mercury_format_det(Det, !U),
            add_string(")\n", !U)
        )
    ;
        GroundInstInfo = none,
        mercury_format_uniqueness(Uniq, "ground", !U),
        add_string("\n", !U)
    ).
mercury_format_structured_inst(inst_var(Var), Indent, VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    mercury_format_var(VarSet, no, Var, !U),
    add_string("\n", !U).
mercury_format_structured_inst(constrained_inst_vars(Vars, Inst), Indent,
        VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    mercury_format_constrained_inst_vars(Vars, Inst,
        simple_inst_info(VarSet), !U),
    add_string("\n", !U).
mercury_format_structured_inst(abstract_inst(Name, Args), Indent, VarSet,
        !U) :-
    mercury_format_structured_inst_name(user_inst(Name, Args), Indent,
        VarSet, !U).
mercury_format_structured_inst(defined_inst(InstName), Indent, VarSet, !U) :-
    mercury_format_structured_inst_name(InstName, Indent, VarSet, !U).
mercury_format_structured_inst(not_reached, Indent, _, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("not_reached\n", !U).

:- instance inst_info(simple_inst_info) where [
    func(instvarset/1) is sii_varset,
    pred(format_defined_inst/4) is mercury_format_inst_name
].

mercury_output_inst(Inst, VarSet, !IO) :-
    mercury_format_inst(Inst, simple_inst_info(VarSet), !IO).

mercury_inst_to_string(Inst, VarSet) = String :-
    mercury_format_inst(Inst, simple_inst_info(VarSet), "", String).

mercury_format_inst(any(Uniq), _, !U) :-
    mercury_format_any_uniqueness(Uniq, !U).
mercury_format_inst(free, _, !U) :-
    add_string("free", !U).
mercury_format_inst(free(_T), _, !U) :-
    add_string("free(with some type)", !U).
mercury_format_inst(bound(Uniq, BoundInsts), InstInfo, !U) :-
    mercury_format_uniqueness(Uniq, "bound", !U),
    add_string("(", !U),
    mercury_format_bound_insts(BoundInsts, InstInfo, !U),
    add_string(")", !U).
mercury_format_inst(ground(Uniq, GroundInstInfo), InstInfo, !U) :-
    (
        GroundInstInfo = higher_order(pred_inst_info(PredOrFunc, Modes, Det)),
        ( Uniq = shared ->
            true
        ;
            add_string("/* ", !U),
            mercury_format_uniqueness(Uniq, "ground", !U),
            add_string(" */", !U)
        ),
        (
            PredOrFunc = pf_predicate,
            (
                Modes = [],
                add_string("((pred) is ", !U),
                mercury_format_det(Det, !U),
                add_string(")", !U)
            ;
                Modes = [_ | _],
                add_string("(pred(", !U),
                mercury_format_mode_list(Modes, InstInfo, !U),
                add_string(") is ", !U),
                mercury_format_det(Det, !U),
                add_string(")", !U)
            )
        ;
            PredOrFunc = pf_function,
            pred_args_to_func_args(Modes, ArgModes, RetMode),
            (
                ArgModes = [],
                add_string("((func)", !U)
            ;
                ArgModes = [_ | _],
                add_string("(func(", !U),
                mercury_format_mode_list(ArgModes, InstInfo, !U),
                add_string(")", !U)
            ),
            add_string(" = ", !U),
            mercury_format_mode(RetMode, InstInfo, !U),
            add_string(" is ", !U),
            mercury_format_det(Det, !U),
            add_string(")", !U)
        )
    ;
        GroundInstInfo = none,
        mercury_format_uniqueness(Uniq, "ground", !U)
    ).
mercury_format_inst(inst_var(Var), InstInfo, !U) :-
    mercury_format_var(InstInfo ^ instvarset, no, Var, !U).
mercury_format_inst(constrained_inst_vars(Vars, Inst), InstInfo, !U) :-
    mercury_format_constrained_inst_vars(Vars, Inst, InstInfo, !U).
mercury_format_inst(abstract_inst(Name, Args), InstInfo, !U) :-
    mercury_format_inst_name(user_inst(Name, Args), InstInfo, !U).
mercury_format_inst(defined_inst(InstName), InstInfo, !U) :-
    format_defined_inst(InstName, InstInfo, !U).
mercury_format_inst(not_reached, _, !U) :-
    add_string("not_reached", !U).

:- pred mercury_format_is_live_comma(is_live::in, U::di, U::uo) is det
    <= output(U).

mercury_format_is_live_comma(IsLive, !U) :-
    (
        IsLive = is_live,
        add_string("live, ", !U)
    ;
        IsLive = is_dead,
        add_string("dead, ", !U)
    ).

:- pred mercury_format_real_comma(unify_is_real::in, U::di, U::uo) is det
    <= output(U).

mercury_format_real_comma(Real, !U) :-
    (
        Real = real_unify,
        add_string("real, ", !U)
    ;
        Real = fake_unify,
        add_string("fake, ", !U)
    ).

:- pred mercury_format_comma_real(unify_is_real::in, U::di, U::uo) is det
    <= output(U).

mercury_format_comma_real(Real, !U) :-
    (
        Real = real_unify,
        add_string(", real", !U)
    ;
        Real = fake_unify,
        add_string(", fake", !U)
    ).

:- pred mercury_format_structured_inst_name(inst_name::in, int::in,
    inst_varset::in, U::di, U::uo) is det <= output(U).

mercury_format_structured_inst_name(user_inst(Name, Args), Indent, VarSet,
        !U) :-
    (
        Args = [],
        mercury_format_tabs(Indent, !U),
        mercury_format_bracketed_sym_name(Name, !U)
    ;
        Args = [_ | _],
        mercury_format_tabs(Indent, !U),
        mercury_format_sym_name(Name, !U),
        add_string("(\n", !U),
        mercury_format_structured_inst_list(Args, Indent + 1, VarSet, !U),
        mercury_format_tabs(Indent, !U),
        add_string(")\n", !U)
    ).
mercury_format_structured_inst_name(merge_inst(InstA, InstB), Indent, VarSet,
        !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$merge_inst(\n", !U),
    mercury_format_structured_inst_list([InstA, InstB], Indent + 1, VarSet,
        !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(shared_inst(InstName), Indent, VarSet,
        !U) :-
    add_string("$shared_inst(\n", !U),
    mercury_format_structured_inst_name(InstName, Indent + 1, VarSet, !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(mostly_uniq_inst(InstName), Indent, VarSet,
        !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$mostly_uniq_inst(\n", !U),
    mercury_format_structured_inst_name(InstName, Indent + 1, VarSet, !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(unify_inst(IsLive, InstA, InstB, Real),
        Indent, VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$unify(", !U),
    mercury_format_is_live_comma(IsLive, !U),
    mercury_format_real_comma(Real, !U),
    add_string("\n", !U),
    mercury_format_structured_inst_list([InstA, InstB], Indent + 1, VarSet,
        !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(ground_inst(InstName, IsLive, Uniq, Real),
        Indent, VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$ground(", !U),
    mercury_format_is_live_comma(IsLive, !U),
    mercury_format_real_comma(Real, !U),
    mercury_format_uniqueness(Uniq, "shared", !U),
    add_string(",\n", !U),
    mercury_format_structured_inst_name(InstName, Indent + 1, VarSet, !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(any_inst(InstName, IsLive, Uniq, Real),
        Indent, VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$any(", !U),
    mercury_format_is_live_comma(IsLive, !U),
    mercury_format_real_comma(Real, !U),
    mercury_format_uniqueness(Uniq, "shared", !U),
    add_string(",\n", !U),
    mercury_format_structured_inst_name(InstName, Indent + 1, VarSet, !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(typed_ground(Uniqueness, Type),
        Indent, _VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$typed_ground(", !U),
    mercury_format_uniqueness(Uniqueness, "shared", !U),
    add_string(", ", !U),
    varset.init(TypeVarSet),
    mercury_format_type(TypeVarSet, no, Type, !U),
    add_string(")\n", !U).
mercury_format_structured_inst_name(typed_inst(Type, InstName),
        Indent, VarSet, !U) :-
    mercury_format_tabs(Indent, !U),
    add_string("$typed_inst(", !U),
    varset.init(TypeVarSet),
    mercury_format_type(TypeVarSet, no, Type, !U),
    add_string(",\n", !U),
    mercury_format_structured_inst_name(InstName, Indent + 1, VarSet, !U),
    mercury_format_tabs(Indent, !U),
    add_string(")\n", !U).

mercury_format_inst_name(user_inst(Name, Args), InstInfo, !U) :-
    (
        Args = [],
        mercury_format_bracketed_sym_name(Name, !U)
    ;
        Args = [_ | _],
        mercury_format_sym_name(Name, !U),
        add_string("(", !U),
        mercury_format_inst_list(Args, InstInfo, !U),
        add_string(")", !U)
    ).
mercury_format_inst_name(merge_inst(InstA, InstB), InstInfo, !U) :-
    add_string("$merge_inst(", !U),
    mercury_format_inst_list([InstA, InstB], InstInfo, !U),
    add_string(")", !U).
mercury_format_inst_name(shared_inst(InstName), InstInfo, !U) :-
    add_string("$shared_inst(", !U),
    mercury_format_inst_name(InstName, InstInfo, !U),
    add_string(")", !U).
mercury_format_inst_name(mostly_uniq_inst(InstName), InstInfo, !U) :-
    add_string("$mostly_uniq_inst(", !U),
    mercury_format_inst_name(InstName, InstInfo, !U),
    add_string(")", !U).
mercury_format_inst_name(unify_inst(IsLive, InstA, InstB, Real), InstInfo,
        !U) :-
    add_string("$unify(", !U),
    mercury_format_is_live_comma(IsLive, !U),
    mercury_format_comma_real(Real, !U),
    mercury_format_inst_list([InstA, InstB], InstInfo, !U),
    add_string(")", !U).
mercury_format_inst_name(ground_inst(InstName, IsLive, Uniq, Real), InstInfo,
        !U) :-
    add_string("$ground(", !U),
    mercury_format_inst_name(InstName, InstInfo, !U),
    add_string(", ", !U),
    mercury_format_is_live_comma(IsLive, !U),
    mercury_format_uniqueness(Uniq, "shared", !U),
    mercury_format_comma_real(Real, !U),
    add_string(")", !U).
mercury_format_inst_name(any_inst(InstName, IsLive, Uniq, Real), InstInfo,
        !U) :-
    add_string("$any(", !U),
    mercury_format_inst_name(InstName, InstInfo, !U),
    add_string(", ", !U),
    mercury_format_is_live_comma(IsLive, !U),
    mercury_format_uniqueness(Uniq, "shared", !U),
    mercury_format_comma_real(Real, !U),
    add_string(")", !U).
mercury_format_inst_name(typed_ground(Uniqueness, Type), _InstInfo, !U) :-
    add_string("$typed_ground(", !U),
    mercury_format_uniqueness(Uniqueness, "shared", !U),
    add_string(", ", !U),
    varset.init(TypeVarSet),
    mercury_format_type(TypeVarSet, no, Type, !U),
    add_string(")", !U).
mercury_format_inst_name(typed_inst(Type, InstName), InstInfo, !U) :-
    add_string("$typed_inst(", !U),
    varset.init(TypeVarSet),
    mercury_format_type(TypeVarSet, no, Type, !U),
    add_string(", ", !U),
    mercury_format_inst_name(InstName, InstInfo, !U),
    add_string(")", !U).

:- pred mercury_format_uniqueness(uniqueness::in, string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_uniqueness(shared, SharedString, !U) :-
    add_string(SharedString, !U).
mercury_format_uniqueness(unique, _, !U) :-
    add_string("unique", !U).
mercury_format_uniqueness(mostly_unique, _, !U) :-
    add_string("mostly_unique", !U).
mercury_format_uniqueness(clobbered, _, !U) :-
    add_string("clobbered", !U).
mercury_format_uniqueness(mostly_clobbered, _, !U) :-
    add_string("mostly_clobbered", !U).

:- pred mercury_format_any_uniqueness(uniqueness::in,
    U::di, U::uo) is det <= output(U).

mercury_format_any_uniqueness(shared, !U) :-
    add_string("any", !U).
mercury_format_any_uniqueness(unique, !U) :-
    add_string("unique_any", !U).
mercury_format_any_uniqueness(mostly_unique, !U) :-
    add_string("mostly_unique_any", !U).
mercury_format_any_uniqueness(clobbered, !U) :-
    add_string("clobbered_any", !U).
mercury_format_any_uniqueness(mostly_clobbered, !U) :-
    add_string("mostly_clobbered_any", !U).

:- pred mercury_format_structured_bound_insts(list(bound_inst)::in, int::in,
    inst_varset::in, U::di, U::uo) is det <= output(U).

mercury_format_structured_bound_insts([], _, _, !U).
mercury_format_structured_bound_insts([BoundInst | BoundInsts],
        Indent0, VarSet, !U) :-
    BoundInst = bound_functor(ConsId, Args),
    Indent1 = Indent0 + 1,
    Indent2 = Indent1 + 1,
    (
        Args = [],
        mercury_format_tabs(Indent1, !U),
        mercury_format_cons_id(ConsId, needs_brackets, !U),
        add_string("\n", !U)
    ;
        Args = [_ | _],
        mercury_format_tabs(Indent1, !U),
        mercury_format_cons_id(ConsId, does_not_need_brackets, !U),
        add_string("(\n", !U),
        mercury_format_structured_inst_list(Args, Indent2, VarSet, !U),
        mercury_format_tabs(Indent1, !U),
        add_string(")\n", !U)
    ),
    (
        BoundInsts = []
    ;
        BoundInsts = [_ | _],
        mercury_format_tabs(Indent0, !U),
        add_string(";\n", !U),
        mercury_format_structured_bound_insts(BoundInsts, Indent0,
            VarSet, !U)
    ).

:- pred mercury_format_bound_insts(list(bound_inst)::in, InstInfo::in,
    U::di, U::uo) is det <= (output(U), inst_info(InstInfo)).

mercury_format_bound_insts([], _, !U).
mercury_format_bound_insts([bound_functor(ConsId, Args) | BoundInsts],
        InstInfo, !U) :-
    (
        Args = [],
        mercury_format_cons_id(ConsId, needs_brackets, !U)
    ;
        Args = [_ | _],
        mercury_format_cons_id(ConsId, does_not_need_brackets, !U),
        add_string("(", !U),
        mercury_format_inst_list(Args, InstInfo, !U),
        add_string(")", !U)
    ),
    (
        BoundInsts = []
    ;
        BoundInsts = [_ | _],
        add_string(" ; ", !U),
        mercury_format_bound_insts(BoundInsts, InstInfo, !U)
    ).

mercury_output_cons_id(ConsId, NeedsBrackets, !IO) :-
    mercury_format_cons_id(ConsId, NeedsBrackets, !IO).

mercury_cons_id_to_string(ConsId, NeedsBrackets) = String :-
    mercury_format_cons_id(ConsId, NeedsBrackets, "", String).

:- pred mercury_format_cons_id(cons_id::in, needs_brackets::in,
    U::di, U::uo) is det <= output(U).

mercury_format_cons_id(cons(Name, _), NeedsBrackets, !U) :-
    (
        NeedsBrackets = needs_brackets,
        mercury_format_bracketed_sym_name(Name, !U)
    ;
        NeedsBrackets = does_not_need_brackets,
        mercury_format_sym_name(Name, !U)
    ).
mercury_format_cons_id(int_const(X), _, !U) :-
    add_int(X, !U).
mercury_format_cons_id(float_const(X), _, !U) :-
    add_float(X, !U).
mercury_format_cons_id(string_const(X), _, !U) :-
    add_quoted_string(X, !U).
mercury_format_cons_id(pred_const(ShroudedPredProcId, EvalMethod), _, !U) :-
    % XXX Sufficient, but probably should print this out in
    %     name/arity form.
    ShroudedPredProcId = shrouded_pred_proc_id(PredInt, ProcInt),
    add_string("<pred_const(", !U),
    add_int(PredInt, !U),
    add_string(", ", !U),
    add_int(ProcInt, !U),
    add_string(", ", !U),
    add_lambda_eval_method(EvalMethod, !U),
    add_string(")>", !U).
mercury_format_cons_id(type_ctor_info_const(Module, Type, Arity), _, !U) :-
    ModuleString = sym_name_to_string(Module),
    string.int_to_string(Arity, ArityString),
    add_strings(["<type_ctor_info for ",
        ModuleString, ".", Type, "/", ArityString, ">"], !U).
mercury_format_cons_id(base_typeclass_info_const(Module, Class, InstanceNum,
        InstanceString), _, !U) :-
    ModuleString = sym_name_to_string(Module),
    add_string("<base_typeclass_info for ", !U),
    add_class_id(Class, !U),
    ( ModuleString \= "some bogus module name" ->
        add_strings([" from module ", ModuleString], !U)
    ;
        true
    ),
    add_format(", instance number %d (%s)>",
        [i(InstanceNum), s(InstanceString)], !U).
mercury_format_cons_id(type_info_cell_constructor(_), _, !U) :-
    add_string("<type_info_cell_constructor>", !U).
mercury_format_cons_id(typeclass_info_cell_constructor, _, !U) :-
    add_string("<typeclass_info_cell_constructor>", !U).
mercury_format_cons_id(tabling_info_const(_), _, !U) :-
    add_string("<tabling info>", !U).
mercury_format_cons_id(deep_profiling_proc_layout(_), _, !U) :-
    add_string("<deep_profiling_proc_layout>", !U).
mercury_format_cons_id(table_io_decl(_), _, !U) :-
    add_string("<table_io_decl>", !U).

:- pred mercury_format_constrained_inst_vars(set(inst_var)::in, mer_inst::in,
        InstInfo::in, U::di, U::uo) is det
        <= (output(U), inst_info(InstInfo)).

mercury_format_constrained_inst_vars(Vars0, Inst, InstInfo, !U) :-
    ( set.remove_least(Vars0, Var, Vars1) ->
        add_string("(", !U),
        mercury_format_var(InstInfo ^ instvarset, no, Var, !U),
        add_string(" =< ", !U),
        mercury_format_constrained_inst_vars(Vars1, Inst, InstInfo, !U),
        add_string(")", !U)
    ;
        mercury_format_inst(Inst, InstInfo, !U)
    ).

:- pred mercury_format_mode_defn(inst_varset::in, sym_name::in,
    list(inst_var)::in, mode_defn::in, prog_context::in,
    U::di, U::uo) is det <= output(U).

mercury_format_mode_defn(VarSet, Name, Args, eqv_mode(Mode), Context, !U) :-
    add_string(":- mode (", !U),
    ArgTerms = list.map(func(V) = variable(V, Context), Args),
    construct_qualified_term(Name, ArgTerms, Context, ModeTerm),
    mercury_format_term(VarSet, no, ModeTerm, !U),
    add_string(") == ", !U),
    mercury_format_mode(Mode, simple_inst_info(VarSet), !U),
    add_string(".\n", !U).

mercury_output_mode_list(Modes, VarSet, !IO) :-
    mercury_format_mode_list(Modes, simple_inst_info(VarSet), !IO).

mercury_mode_list_to_string(Modes, VarSet) = String :-
    mercury_format_mode_list(Modes, simple_inst_info(VarSet), "", String).

:- pred mercury_format_mode_list(list(mer_mode)::in, InstInfo::in,
    U::di, U::uo) is det <= (output(U), inst_info(InstInfo)).

mercury_format_mode_list([], _InstInfo, !U).
mercury_format_mode_list([Mode | Modes], InstInfo, !U) :-
    mercury_format_mode(Mode, InstInfo, !U),
    (
        Modes = []
    ;
        Modes = [_ | _],
        add_string(", ", !U),
        mercury_format_mode_list(Modes, InstInfo, !U)
    ).

mercury_output_mode(Mode, VarSet, !IO) :-
    mercury_format_mode(Mode, simple_inst_info(VarSet), !IO).

mercury_mode_to_string(Mode, VarSet) = String :-
    mercury_format_mode(Mode, simple_inst_info(VarSet), "", String).

mercury_format_mode((InstA -> InstB), InstInfo, !U) :-
    (
        %
        % check for higher-order pred or func modes, and output them
        % in a nice format
        %
        InstA = ground(_Uniq, higher_order(
            pred_inst_info(_PredOrFunc, _Modes, _Det))),
        InstB = InstA
    ->
        mercury_format_inst(InstA, InstInfo, !U)
    ;
        add_string("(", !U),
        mercury_format_inst(InstA, InstInfo, !U),
        add_string(" >> ", !U),
        mercury_format_inst(InstB, InstInfo, !U),
        add_string(")", !U)
    ).
mercury_format_mode(user_defined_mode(Name, Args), InstInfo, !U) :-
    (
        Args = [],
        mercury_format_bracketed_sym_name(Name, !U)
    ;
        Args = [_ | _],
        mercury_format_sym_name(Name, !U),
        add_string("(", !U),
        mercury_format_inst_list(Args, InstInfo, !U),
        add_string(")", !U)
    ).

%-----------------------------------------------------------------------------%

:- pred mercury_output_type_defn(tvarset::in, sym_name::in,
    list(type_param)::in, type_defn::in, prog_context::in, io::di, io::uo)
    is det.

mercury_output_type_defn(TVarSet, Name, TParams,
        parse_tree_abstract_type(IsSolverType), Context, !IO) :-
    mercury_output_begin_type_decl(IsSolverType, !IO),
    Args = list.map((func(V) = term.variable(V, Context)), TParams),
    construct_qualified_term(Name, Args, Context, TypeTerm),
    mercury_output_term_nq(TVarSet, no, next_to_graphic_token, TypeTerm, !IO),
    io.write_string(".\n", !IO).

mercury_output_type_defn(TVarSet, Name, TParams, parse_tree_eqv_type(Body),
        Context, !IO) :-
    mercury_output_begin_type_decl(non_solver_type, !IO),
    Args = list.map((func(V) = term.variable(V, Context)), TParams),
    construct_qualified_term(Name, Args, Context, TypeTerm),
    mercury_output_term(TVarSet, no, TypeTerm, !IO),
    io.write_string(" == ", !IO),
    mercury_output_type(TVarSet, no, Body, !IO),
    io.write_string(".\n", !IO).

mercury_output_type_defn(TVarSet, Name, TParams,
        parse_tree_du_type(Ctors, MaybeUserEqComp), Context, !IO) :-
    mercury_output_begin_type_decl(non_solver_type, !IO),
    Args = list.map((func(V) = term.variable(V, Context)), TParams),
    construct_qualified_term(Name, Args, Context, TypeTerm),
    mercury_output_term(TVarSet, no, TypeTerm, !IO),
    io.write_string("\n\t--->\t", !IO),
    mercury_output_ctors(Ctors, TVarSet, !IO),
    mercury_output_where_attributes(TVarSet, no, MaybeUserEqComp, !IO),
    io.write_string(".\n", !IO).

mercury_output_type_defn(TVarSet, Name, TParams,
        parse_tree_solver_type(SolverTypeDetails, MaybeUserEqComp),
        Context, !IO) :-
    mercury_output_begin_type_decl(solver_type, !IO),
    Args = list.map((func(V) = term.variable(V, Context)), TParams),
    construct_qualified_term(Name, Args, Context, TypeTerm),
    mercury_output_term(TVarSet, no, TypeTerm, !IO),
    mercury_output_where_attributes(TVarSet, yes(SolverTypeDetails),
        MaybeUserEqComp, !IO),
    io.write_string(".\n", !IO).

mercury_output_type_defn(TVarSet, Name, TParams,
        parse_tree_foreign_type(ForeignType, MaybeUserEqComp, Assertions),
        _Context, !IO) :-
    io.write_string(":- pragma foreign_type(", !IO),
    (
        ForeignType = il(_),
        io.write_string("il, ", !IO)
    ;
        ForeignType = c(_),
        io.write_string("c, ", !IO)
    ;
        ForeignType = java(_),
        io.write_string("java, ", !IO)
    ;
        ForeignType = erlang(_),
        io.write_string("erlang, ", !IO)
    ),
    Args = list.map((func(V) = term.variable(V, context_init)), TParams),
    construct_qualified_term(Name, Args, MercuryType),
    mercury_output_term(TVarSet, no, MercuryType, !IO),
    io.write_string(", \"", !IO),
    (
        ForeignType = il(il_type(RefOrVal, ForeignLocStr, ForeignTypeName)),
        (
            RefOrVal = reference,
            RefOrValStr = "class "
        ;
            RefOrVal = value,
            RefOrValStr = "valuetype "
        ),
        NameStr = sym_name_to_string(ForeignTypeName),
        ForeignTypeStr = RefOrValStr ++ "[" ++ ForeignLocStr ++ "]" ++ NameStr
    ;
        ForeignType = c(c_type(ForeignTypeStr))
    ;
        ForeignType = java(java_type(ForeignTypeStr))
    ;
        ForeignType = erlang(erlang_type),
        ForeignTypeStr = ""
    ),
    io.write_string(ForeignTypeStr, !IO),
    io.write_string("\"", !IO),
    (
        Assertions = []
    ;
        Assertions = [_ | _],
        io.write_string(", [", !IO),
        io.write_list(Assertions, ", ", mercury_output_foreign_type_assertion,
            !IO),
        io.write_string("]", !IO)
    ),
    io.write_string(")", !IO),
    mercury_output_where_attributes(TVarSet, no, MaybeUserEqComp, !IO),
    io.write_string(".\n", !IO).

:- pred mercury_output_foreign_type_assertion(foreign_type_assertion::in,
    io::di, io::uo) is det.

mercury_output_foreign_type_assertion(foreign_type_can_pass_as_mercury_type,
        !IO) :-
    io.write_string("can_pass_as_mercury_type", !IO).
mercury_output_foreign_type_assertion(foreign_type_stable, !IO) :-
    io.write_string("stable", !IO).

:- pred mercury_output_begin_type_decl(is_solver_type::in,
    io::di, io::uo) is det.

mercury_output_begin_type_decl(solver_type, !IO) :-
    io.write_string(":- solver type ", !IO).
mercury_output_begin_type_decl(non_solver_type, !IO) :-
    io.write_string(":- type ", !IO).

mercury_output_where_attributes(TVarSet,
        MaybeSolverTypeDetails, MaybeUserEqComp, !IO) :-
    (
        MaybeSolverTypeDetails = no,
        MaybeUserEqComp        = no
    ->
        true
    ;
        (
            MaybeUserEqComp = yes(UserEqComp),
            UserEqComp = unify_compare(MaybeUnifyPred0, MaybeComparePred0)
        ->
            MaybeUnifyPred   = MaybeUnifyPred0,
            MaybeComparePred = MaybeComparePred0
        ;
            MaybeUnifyPred   = no,
            MaybeComparePred = no
        ),
        io.write_string("\n\twhere\t", !IO),
        ( MaybeUserEqComp = yes(abstract_noncanonical_type(_)) ->
            io.write_string("type_is_abstract_noncanonical", !IO)
        ;
            (
                MaybeSolverTypeDetails = yes(SolverTypeDetails),
                mercury_output_solver_type_details(TVarSet, SolverTypeDetails,
                    !IO),
                (
                    (   MaybeUnifyPred = yes(_)
                    ;   MaybeComparePred = yes(_)
                    )
                ->
                    io.write_string(",\n\t\t", !IO)
                ;
                    true
                )
            ;
                MaybeSolverTypeDetails = no
            )
        ),
        (
            MaybeUnifyPred = yes(UnifyPredName),
            io.write_string("equality is ", !IO),
            mercury_output_bracketed_sym_name(UnifyPredName, !IO),
            (
                MaybeComparePred = yes(_),
                io.write_string(",\n\t\t", !IO)
            ;
                MaybeComparePred = no
            )
        ;
            MaybeUnifyPred = no
        ),
        (
            MaybeComparePred = yes(ComparePredName),
            io.write_string("comparison is ", !IO),
            mercury_output_bracketed_sym_name(ComparePredName, !IO)
        ;
            MaybeComparePred = no
        )
    ).

:- pred mercury_output_solver_type_details(tvarset::in,
        solver_type_details::in, io::di, io::uo) is det.

mercury_output_solver_type_details(TVarSet,
        solver_type_details(RepresentationType, InitPred, GroundInst, AnyInst,
        MutableItems), !IO) :-
    io.write_string("representation is ", !IO),
    mercury_output_type(TVarSet, no, RepresentationType, !IO),
    io.write_string(",\n\t\tinitialisation is ", !IO),
    mercury_output_bracketed_sym_name(InitPred, !IO),
    varset.init(EmptyInstVarSet),
    io.write_string(",\n\t\tground is ", !IO),
    mercury_output_inst(GroundInst, EmptyInstVarSet, !IO),
    io.write_string(",\n\t\tany is ", !IO),
    mercury_output_inst(AnyInst, EmptyInstVarSet, !IO),
    (
        MutableItems = []
    ;
        MutableItems = [_ | _],
        io.write_string(",\n\t\tconstraint_store is [\n\t\t\t", !IO),
        io.write_list(MutableItems, ",\n\t\t\t", mercury_output_item_2,
            !IO),
        io.write_string("\n\t\t]", !IO)
    ).

:- pred mercury_output_item_2(item::in, io::di, io::uo) is det.

mercury_output_item_2(Item, !IO) :-
    term.context_init(DummyContext),
    mercury_output_item(Item, DummyContext, !IO).

:- pred mercury_output_ctors(list(constructor)::in, tvarset::in,
    io::di, io::uo) is det.

mercury_output_ctors([], _, !IO).
mercury_output_ctors([Ctor | Ctors], VarSet, !IO) :-
    mercury_output_ctor(Ctor, VarSet, !IO),
    (
        Ctors = []
    ;
        Ctors = [_ | _],
        io.write_string("\n\t;\t", !IO)
    ),
    mercury_output_ctors(Ctors, VarSet, !IO).

mercury_output_ctor(Ctor, VarSet, !IO) :-
    Ctor = ctor(ExistQVars, Constraints, SymName, Args, _Ctxt),

        % We'll have attached the module name to the type definition,
        % so there's no point adding it to the constructor as well.
    Name = unqualify_name(SymName),
    AppendVarnums = no,
    mercury_output_quantifier(VarSet, AppendVarnums, ExistQVars, !IO),
    (
        ExistQVars = [],
        ParenWrap = no
    ;
        ExistQVars = [_ | _],
        ParenWrap = yes,
        io.write_string("(", !IO)
    ),
    % we need to quote ';'/2, '{}'/2, '=>'/2, and 'some'/2
    list.length(Args, Arity),
    (
        Arity = 2,
        ( Name = ";"
        ; Name = "{}"
        ; Name = "some"
        ; Name = "=>"
        )
    ->
        BraceWrap = yes,
        io.write_string("{ ", !IO)
    ;
        BraceWrap = no
    ),
    (
        Args = [Arg | Rest],
        mercury_output_sym_name(unqualified(Name), !IO),
        io.write_string("(", !IO),
        mercury_output_ctor_arg(VarSet, Arg, !IO),
        mercury_output_remaining_ctor_args(VarSet, Rest, !IO),
        io.write_string(")", !IO)
    ;
        Args = [],
        mercury_output_bracketed_sym_name(unqualified(Name), !IO),
            % This space prevents a terminating full stop
            % from being confused as part of the sym_name if
            % the sym_name contains graphical characters.
        io.write_string(" ", !IO)
    ),
    (
        BraceWrap = yes,
        io.write_string(" }", !IO)
    ;
        BraceWrap = no
    ),
    AppendVarnums = no,
    mercury_format_prog_constraint_list(Constraints, VarSet, "=>",
        AppendVarnums, !IO),
    (
        ParenWrap = no
    ;
        ParenWrap = yes,
        io.write_string(")", !IO)
    ).

:- pred mercury_output_ctor_arg(tvarset::in, constructor_arg::in,
    io::di, io::uo) is det.

mercury_output_ctor_arg(Varset, ctor_arg(N, T, _), !IO) :-
    mercury_output_ctor_arg_name_prefix(N, !IO),
    mercury_output_type(Varset, no, T, !IO).

mercury_output_remaining_ctor_args(_Varset, [], !IO).
mercury_output_remaining_ctor_args(Varset, [A | As], !IO) :-
    io.write_string(", ", !IO),
    mercury_output_ctor_arg(Varset, A, !IO),
    mercury_output_remaining_ctor_args(Varset, As, !IO).

:- pred mercury_output_ctor_arg_name_prefix(maybe(ctor_field_name)::in,
    io::di, io::uo) is det.

mercury_output_ctor_arg_name_prefix(no, !IO).
mercury_output_ctor_arg_name_prefix(yes(Name), !IO) :-
    mercury_output_bracketed_sym_name(Name, !IO),
    io.write_string(" :: ", !IO).

%-----------------------------------------------------------------------------%

:- pred mercury_format_pred_or_func_decl(pred_or_func::in, tvarset::in,
    inst_varset::in, existq_tvars::in, sym_name::in,
    list(type_and_mode)::in, maybe(mer_type)::in, maybe(mer_inst)::in,
    maybe(determinism)::in, purity::in, prog_constraints::in,
    prog_context::in, string::in, string::in,
    string::in, U::di, U::uo) is det <= output(U).

mercury_format_pred_or_func_decl(PredOrFunc, TypeVarSet, InstVarSet,
        ExistQVars, PredName, TypesAndModes, WithType, WithInst,
        MaybeDet, Purity, ClassContext, Context, StartString,
        Separator, Terminator, !IO) :-
    split_types_and_modes(TypesAndModes, Types, MaybeModes),
    (
        MaybeModes = yes(Modes),
        ( Modes = [_ | _]
        ; WithInst = yes(_)
        )
    ->
        AppendVarnums = no,
        mercury_format_pred_or_func_type_2(PredOrFunc, TypeVarSet, ExistQVars,
            PredName, Types, WithType, no, Purity, ClassContext, Context,
            AppendVarnums, StartString, Separator, !IO),
        mercury_format_pred_or_func_mode_decl_2(InstVarSet, PredName, Modes,
        WithInst, MaybeDet, Context, StartString, Terminator, !IO)
    ;
        AppendVarnums = no,
        mercury_format_pred_or_func_type_2(PredOrFunc, TypeVarSet, ExistQVars,
            PredName, Types, WithType, MaybeDet, Purity, ClassContext, Context,
            AppendVarnums, StartString, Terminator, !IO)
    ).

mercury_output_pred_type(VarSet, ExistQVars, PredName, Types, MaybeDet, Purity,
        ClassContext, Context, AppendVarnums, !IO) :-
    mercury_format_pred_type(VarSet, ExistQVars, PredName, Types,
        no, MaybeDet, Purity, ClassContext, Context, AppendVarnums, !IO).

mercury_pred_type_to_string(VarSet, ExistQVars, PredName, Types, MaybeDet,
        Purity, ClassContext, Context, AppendVarnums) = String :-
    mercury_format_pred_type(VarSet, ExistQVars, PredName, Types,
        no, MaybeDet, Purity, ClassContext, Context,
        AppendVarnums, "", String).

:- pred mercury_format_pred_type(tvarset::in, existq_tvars::in, sym_name::in,
    list(mer_type)::in, maybe(mer_type)::in, maybe(determinism)::in,
    purity::in, prog_constraints::in, prog_context::in, bool::in, U::di, U::uo)
    is det <= output(U).

mercury_format_pred_type(VarSet, ExistQVars, PredName, Types, WithType,
        MaybeDet, Purity, ClassContext, Context, AppendVarnums, !U) :-
    mercury_format_pred_or_func_type_2(pf_predicate, VarSet, ExistQVars,
        PredName, Types, WithType, MaybeDet, Purity, ClassContext,
        Context, AppendVarnums, ":- ", ".\n", !U).

:- pred mercury_format_pred_or_func_type_2(pred_or_func::in, tvarset::in,
    existq_tvars::in, sym_name::in, list(mer_type)::in, maybe(mer_type)::in,
    maybe(determinism)::in, purity::in, prog_constraints::in,
    prog_context::in, bool::in, string::in, string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_pred_or_func_type_2(PredOrFunc, VarSet, ExistQVars, PredName,
        Types, MaybeWithType, MaybeDet, Purity, ClassContext, _Context,
        AppendVarnums, StartString, Separator, !U) :-
    add_string(StartString, !U),
    mercury_format_quantifier(VarSet, AppendVarnums, ExistQVars, !U),
    (
        ExistQVars = [],
        ClassContext = constraints(_, [])
    ->
        true
    ;
        add_string("(", !U)
    ),
    add_purity_prefix(Purity, !U),
    PredOrFuncStr = pred_or_func_to_str(PredOrFunc),
    add_string(PredOrFuncStr, !U),
    add_string(" ", !U),
    (
        Types = [_ | _],
        mercury_format_sym_name(PredName, !U),
        add_string("(", !U),
        add_list(Types, ", ", mercury_format_type(VarSet, AppendVarnums), !U),
        add_string(")", !U)
    ;
        Types = [],
        mercury_format_bracketed_sym_name(PredName, !U)
    ),
    (
        MaybeWithType = yes(WithType),
        add_string(" `with_type` (", !U),
        mercury_format_type(VarSet, AppendVarnums, WithType, !U),
        add_string(")", !U)
    ;
        MaybeWithType = no
    ),
        % We need to handle is/2 specially, because it's used for
        % determinism annotations (`... is det'), and so the compiler
        % will misinterpret a bare `:- pred is(int, int_expr)' as
        % `:- pred int is int_expr' and then report some very confusing
        % error message.  Thus you _have_ to give a determinism
        % annotation in the pred declaration for is/2, eg.
        % `:- pred is(int, int_expr) is det.'
        % (Yes, this made me puke too.)
        %
        % The alternative is a term traversal in compiler/prog_io.m
        % get_determinism/3.  The alternative is more `nice', but less
        % efficient.
    (
        PredOrFunc = pf_predicate,
        MaybeDet = no,
        unqualify_name(PredName) = "is",
        list.length(Types, 2)
    ->
        % This determinism will be ignored.
        mercury_format_det_annotation(yes(detism_det), !U)
    ;
        mercury_format_det_annotation(MaybeDet, !U)
    ),

    mercury_format_class_context(ClassContext,
        ExistQVars, VarSet, AppendVarnums, !U),
    add_string(Separator, !U).

%-----------------------------------------------------------------------------%

:- pred mercury_format_func_decl(tvarset::in, inst_varset::in,
    existq_tvars::in, sym_name::in, list(type_and_mode)::in,
    type_and_mode::in, maybe(determinism)::in, purity::in,
    prog_constraints::in, prog_context::in, string::in, string::in,
    string::in, U::di, U::uo) is det <= output(U).

mercury_format_func_decl(TypeVarSet, InstVarSet, ExistQVars, FuncName,
        TypesAndModes, RetTypeAndMode, MaybeDet, Purity, ClassContext,
        Context, StartString, Separator, Terminator, !U) :-
    split_types_and_modes(TypesAndModes, Types, MaybeModes),
    split_type_and_mode(RetTypeAndMode, RetType, MaybeRetMode),
    (
        MaybeModes = yes(Modes),
        MaybeRetMode = yes(RetMode)
    ->
        AppendVarnums = no,
        mercury_format_func_type_2(TypeVarSet, ExistQVars, FuncName, Types,
            RetType, no, Purity, ClassContext, Context, AppendVarnums,
            StartString, Separator, !U),
        mercury_format_func_mode_decl_2(InstVarSet, FuncName, Modes, RetMode,
            MaybeDet, Context, StartString, Terminator, !U)
    ;
        AppendVarnums = no,
        mercury_format_func_type_2(TypeVarSet, ExistQVars, FuncName, Types,
            RetType, MaybeDet, Purity, ClassContext, Context, AppendVarnums,
            StartString, Terminator, !U)
    ).

mercury_output_func_type(VarSet, ExistQVars, FuncName, Types, RetType,
        MaybeDet, Purity, ClassContext, Context, AppendVarnums, !IO) :-
    mercury_format_func_type(VarSet, ExistQVars, FuncName, Types, RetType,
        MaybeDet, Purity, ClassContext, Context, AppendVarnums, !IO).

mercury_func_type_to_string(VarSet, ExistQVars, FuncName, Types, RetType,
        MaybeDet, Purity, ClassContext, Context, AppendVarnums)
        = String :-
    mercury_format_func_type(VarSet, ExistQVars, FuncName, Types, RetType,
        MaybeDet, Purity, ClassContext, Context, AppendVarnums,
        "", String).

:- pred mercury_format_func_type(tvarset::in, existq_tvars::in, sym_name::in,
    list(mer_type)::in, mer_type::in, maybe(determinism)::in, purity::in,
    prog_constraints::in, prog_context::in, bool::in, U::di, U::uo)
    is det <= output(U).

mercury_format_func_type(VarSet, ExistQVars, FuncName, Types, RetType,
        MaybeDet, Purity, ClassContext, Context, AppendVarnums, !U) :-
    mercury_format_func_type_2(VarSet, ExistQVars, FuncName, Types,
        RetType, MaybeDet, Purity, ClassContext, Context,
        AppendVarnums, ":- ", ".\n", !U).

:- pred mercury_format_func_type_2(tvarset::in, existq_tvars::in, sym_name::in,
    list(mer_type)::in, mer_type::in, maybe(determinism)::in,
    purity::in, prog_constraints::in, prog_context::in, bool::in,
    string::in, string::in, U::di, U::uo) is det <= output(U).

mercury_format_func_type_2(VarSet, ExistQVars, FuncName, Types, RetType,
        MaybeDet, Purity, ClassContext, _Context, AppendVarnums,
        StartString, Separator, !U) :-
    add_string(StartString, !U),
    mercury_format_quantifier(VarSet, AppendVarnums, ExistQVars, !U),
    (
        ExistQVars = [],
        ClassContext = constraints(_, [])
    ->
        true
    ;
        add_string("(", !U)
    ),
    add_purity_prefix(Purity, !U),
    add_string("func ", !U),
    (
        Types = [_ | _],
        mercury_format_sym_name(FuncName, !U),
        add_string("(", !U),
        add_list(Types, ", ", mercury_format_type(VarSet, AppendVarnums), !U),
        add_string(")", !U)
    ;
        Types = [],
        mercury_format_bracketed_sym_name(FuncName, !U)
    ),
    add_string(" = ", !U),
    mercury_format_type(VarSet, AppendVarnums, RetType, !U),
    mercury_format_det_annotation(MaybeDet, !U),
    mercury_format_class_context(ClassContext, ExistQVars, VarSet,
        AppendVarnums, !U),
    add_string(Separator, !U).

%-----------------------------------------------------------------------------%

mercury_output_quantifier(VarSet, AppendVarNums, ExistQVars, !IO) :-
    mercury_format_quantifier(VarSet, AppendVarNums, ExistQVars, !IO).

mercury_quantifier_to_string(VarSet, AppendVarNums, ExistQVars) = String :-
    mercury_format_quantifier(VarSet, AppendVarNums, ExistQVars,
        "", String).

:- pred mercury_format_quantifier(tvarset::in, bool::in, existq_tvars::in,
    U::di, U::uo) is det <= output(U).

mercury_format_quantifier(VarSet, AppendVarNums, ExistQVars, !U) :-
    (
        ExistQVars = []
    ;
        ExistQVars = [_ | _],
        add_string("some [", !U),
        mercury_format_vars(VarSet, AppendVarNums, ExistQVars, !U),
        add_string("] ", !U)
    ).

%-----------------------------------------------------------------------------%

:- pred mercury_output_class_context(prog_constraints::in, existq_tvars::in,
    tvarset::in, bool::in, io::di, io::uo) is det.

mercury_output_class_context(ClassContext, ExistQVars, VarSet,
        AppendVarnums, !IO) :-
    mercury_format_class_context(ClassContext, ExistQVars, VarSet,
        AppendVarnums, !IO).

:- pred mercury_format_class_context(prog_constraints::in, existq_tvars::in,
    tvarset::in, bool::in, U::di, U::uo) is det <= output(U).

mercury_format_class_context(ClassContext, ExistQVars, VarSet,
        AppendVarnums, !U) :-
    ClassContext = constraints(UnivCs, ExistCs),
    mercury_format_prog_constraint_list(ExistCs, VarSet, "=>", AppendVarnums,
        !U),
    (
        ExistQVars = [],
        ExistCs = []
    ->
        true
    ;
        add_string(")", !U)
    ),
    mercury_format_prog_constraint_list(UnivCs, VarSet, "<=", AppendVarnums,
        !U).

:- pred mercury_format_fundeps_and_prog_constraint_list(list(prog_fundep)::in,
    list(prog_constraint)::in, tvarset::in, bool::in, U::di, U::uo) is det
    <= output(U).

mercury_format_fundeps_and_prog_constraint_list(FunDeps, Constraints, VarSet,
        AppendVarNums, !U) :-
    (
        FunDeps = [],
        Constraints = []
    ->
        true
    ;
        add_string(" <= (", !U),
        add_list(FunDeps, ", ", mercury_format_fundep(VarSet, AppendVarNums),
            !U),
        (
            Constraints = []
        ;
            Constraints = [_ | _],
            (
                FunDeps = []
            ;
                FunDeps = [_ | _],
                add_string(", ", !U)
            ),
            add_list(Constraints, ", ",
                mercury_format_constraint(VarSet, AppendVarNums), !U)
        ),
        add_string(")", !U)
    ).

:- pred mercury_format_fundep(tvarset::in, bool::in, prog_fundep::in,
    U::di, U::uo) is det <= output(U).

mercury_format_fundep(VarSet, AppendVarNums, fundep(Domain, Range), !U) :-
    add_string("(", !U),
    add_list(Domain, ", ", mercury_format_var(VarSet, AppendVarNums), !U),
    add_string(" -> ", !U),
    add_list(Range, ", ", mercury_format_var(VarSet, AppendVarNums), !U),
    add_string(")", !U).

:- pred mercury_format_prog_constraint_list(list(prog_constraint)::in,
    tvarset::in, string::in, bool::in, U::di, U::uo) is det <= output(U).

mercury_format_prog_constraint_list(Constraints, VarSet, Operator,
        AppendVarnums, !U) :-
    (
        Constraints = []
    ;
        Constraints = [_ | _],
        add_strings([" ", Operator, " ("], !U),
        add_list(Constraints, ", ",
            mercury_format_constraint(VarSet, AppendVarnums), !U),
        add_string(")", !U)
    ).

mercury_output_constraint(VarSet, AppendVarnums, Constraint, !IO) :-
    mercury_format_constraint(VarSet, AppendVarnums, Constraint, !IO).

mercury_constraint_to_string(VarSet, Constraint) = String :-
    mercury_format_constraint(VarSet, no, Constraint, "", String).

:- pred mercury_format_constraint(tvarset::in, bool::in, prog_constraint::in,
    U::di, U::uo) is det <= output(U).

mercury_format_constraint(VarSet, AppendVarnums, constraint(Name, Types),
        !U) :-
    mercury_format_sym_name(Name, !U),
    add_string("(", !U),
    add_list(Types, ", ", mercury_format_type(VarSet, AppendVarnums), !U),
    add_string(")", !U).

mercury_type_list_to_string(_, []) = "".
mercury_type_list_to_string(VarSet, [T | Ts]) = String :-
    String0 = mercury_type_to_string(VarSet, no, T),
    String1 = mercury_type_list_to_string_2(VarSet, Ts),
    string.append(String0, String1, String).

:- func mercury_type_list_to_string_2(tvarset, list(mer_type)) = string.

mercury_type_list_to_string_2(_, []) = "".
mercury_type_list_to_string_2(VarSet, [T | Ts]) = String :-
    String0 = mercury_type_to_string(VarSet, no, T),
    String1 = mercury_type_list_to_string_2(VarSet, Ts),
    string.append_list([", ", String0, String1], String).

mercury_output_type(VarSet, AppendVarNums, Type, !IO) :-
    mercury_format_type(VarSet, AppendVarNums, Type, !IO).

mercury_type_to_string(VarSet, AppendVarNums, Type) = String :-
    mercury_format_type(VarSet, AppendVarNums, Type, "", String).

    % We convert to a term and then use mercury_format_term.  The reason
    % for this is that we have to be very careful about handling operators
    % and precedence properly, and it is better to have the code to manage
    % that in one place, rather than duplicated here.
    %
mercury_format_type(TVarSet, AppendVarNums, Type, !U) :-
    unparse_type(Type, Term),
    VarSet = varset.coerce(TVarSet),
    mercury_format_term(VarSet, AppendVarNums, Term, !U).

%-----------------------------------------------------------------------------%

    % Output a mode declaration for a predicate or function.

mercury_output_mode_subdecl(PredOrFunc, InstVarSet, Name, Modes, MaybeDet,
        Context, !IO) :-
    mercury_format_mode_subdecl(PredOrFunc, InstVarSet, Name, Modes,
        MaybeDet, Context, !IO).

mercury_mode_subdecl_to_string(PredOrFunc, InstVarSet, Name, Modes, MaybeDet,
        Context) = String :-
    mercury_format_mode_subdecl(PredOrFunc, InstVarSet, Name, Modes,
        MaybeDet, Context, "", String).

:- pred mercury_format_mode_subdecl(pred_or_func::in, inst_varset::in,
    sym_name::in, list(mer_mode)::in, maybe(determinism)::in, prog_context::in,
    U::di, U::uo) is det <= output(U).

mercury_format_mode_subdecl(PredOrFunc, InstVarSet, Name, Modes,
        MaybeDet, Context, !U) :-
    (
        PredOrFunc = pf_predicate,
        mercury_format_pred_or_func_mode_subdecl(InstVarSet, Name,
            Modes, no, MaybeDet, Context, !U)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(Modes, ArgModes, RetMode),
        mercury_format_func_mode_subdecl(InstVarSet, Name, ArgModes,
            RetMode, MaybeDet, Context, !U)
    ).

    % Output a mode declaration for a predicate.

mercury_output_pred_mode_decl(VarSet, PredName, Modes, MaybeDet, Context,
        !IO) :-
    mercury_output_pred_mode_decl(VarSet, PredName, Modes, no,
        MaybeDet, Context, !IO).

:- pred mercury_output_pred_mode_decl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, maybe(mer_inst)::in, maybe(determinism)::in,
    prog_context::in, io::di, io::uo) is det.

mercury_output_pred_mode_decl(VarSet, PredName, Modes, WithInst,
        MaybeDet, Context, !IO) :-
    mercury_format_pred_or_func_mode_decl_2(VarSet, PredName, Modes,
        WithInst, MaybeDet, Context, ":- ", ".\n", !IO).

mercury_pred_mode_decl_to_string(VarSet, PredName, Modes, MaybeDet, Context)
        = String :-
    mercury_format_pred_or_func_mode_decl_2(VarSet, PredName, Modes, no,
        MaybeDet, Context, ":- ", ".\n", "", String).

:- pred mercury_format_pred_or_func_mode_decl_2(inst_varset::in, sym_name::in,
    list(mer_mode)::in, maybe(mer_inst)::in, maybe(determinism)::in,
    prog_context::in, string::in, string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_pred_or_func_mode_decl_2(VarSet, PredName, Modes, WithInst,
        MaybeDet, Context, StartString, Separator, !U) :-
    add_string(StartString, !U),
    add_string("mode ", !U),
    mercury_format_pred_or_func_mode_subdecl(VarSet, PredName, Modes,
        WithInst, MaybeDet, Context, !U),
    add_string(Separator, !U).

mercury_output_pred_mode_subdecl(VarSet, PredName, Modes, MaybeDet,
        Context, !IO) :-
    mercury_format_pred_or_func_mode_subdecl(VarSet, PredName,
        Modes, no, MaybeDet, Context, !IO).

mercury_pred_mode_subdecl_to_string(VarSet, PredName, Modes, MaybeDet, Context)
        = String :-
    mercury_format_pred_or_func_mode_subdecl(VarSet, PredName, Modes, no,
        MaybeDet, Context, "", String).

:- pred mercury_format_pred_or_func_mode_subdecl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, maybe(mer_inst)::in, maybe(determinism)::in,
    prog_context::in, U::di, U::uo) is det <= output(U).

mercury_format_pred_or_func_mode_subdecl(VarSet, PredName, Modes,
        MaybeWithInst, MaybeDet, _Context, !U) :-
    (
        Modes = [_|_],
        mercury_format_sym_name(PredName, !U),
        add_string("(", !U),
        mercury_format_mode_list(Modes, simple_inst_info(VarSet), !U),
        add_string(")", !U)
    ;
        Modes = [],
        mercury_format_bracketed_sym_name(PredName, !U)
    ),
    (
        MaybeWithInst = yes(WithInst),
        add_string(" `with_inst` (", !U),
        mercury_format_inst(WithInst, simple_inst_info(VarSet), !U),
        add_string(")", !U)
    ;
        MaybeWithInst = no
    ),
    mercury_format_det_annotation(MaybeDet, !U).

    % Output a mode declaration for a function.

mercury_output_func_mode_decl(VarSet, FuncName, Modes, RetMode, MaybeDet,
        Context, !IO) :-
    mercury_format_func_mode_decl_2(VarSet, FuncName, Modes, RetMode,
        MaybeDet, Context, ":- ", ".\n", !IO).

mercury_func_mode_decl_to_string(VarSet, FuncName, Modes, RetMode, MaybeDet,
        Context) = String :-
    mercury_format_func_mode_decl_2(VarSet, FuncName, Modes, RetMode,
        MaybeDet, Context, ":- ", ".\n", "", String).

:- pred mercury_format_func_mode_decl_2(inst_varset::in, sym_name::in,
    list(mer_mode)::in, mer_mode::in, maybe(determinism)::in, prog_context::in,
    string::in, string::in, U::di, U::uo) is det <= output(U).

mercury_format_func_mode_decl_2(VarSet, FuncName, Modes, RetMode, MaybeDet,
        Context, StartString, Separator, !U) :-
    add_string(StartString, !U),
    add_string("mode ", !U),
    mercury_format_func_mode_subdecl(VarSet, FuncName, Modes, RetMode,
        MaybeDet, Context, !U),
    add_string(Separator, !U).

mercury_output_func_mode_subdecl(VarSet, FuncName, Modes, RetMode, MaybeDet,
        Context, !IO) :-
    mercury_format_func_mode_subdecl(VarSet, FuncName, Modes, RetMode,
        MaybeDet, Context, !IO).

mercury_func_mode_subdecl_to_string(VarSet, FuncName, Modes, RetMode, MaybeDet,
        Context) = String :-
    mercury_format_func_mode_subdecl(VarSet, FuncName, Modes, RetMode,
        MaybeDet, Context, "", String).

:- pred mercury_format_func_mode_subdecl(inst_varset::in, sym_name::in,
    list(mer_mode)::in, mer_mode::in, maybe(determinism)::in, prog_context::in,
    U::di, U::uo) is det <= output(U).

mercury_format_func_mode_subdecl(VarSet, FuncName, Modes, RetMode, MaybeDet,
        _Context, !U) :-
    (
        Modes = [_|_],
        mercury_format_sym_name(FuncName, !U),
        add_string("(", !U),
        mercury_format_mode_list(Modes, simple_inst_info(VarSet), !U),
        add_string(")", !U)
    ;
        Modes = [],
        mercury_format_bracketed_sym_name(FuncName, !U)
    ),
    add_string(" = ", !U),
    mercury_format_mode(RetMode, simple_inst_info(VarSet), !U),
    mercury_format_det_annotation(MaybeDet, !U).

:- pred mercury_format_det_annotation(maybe(determinism)::in, U::di, U::uo)
    is det <= output(U).

mercury_format_det_annotation(MaybeDet, !U) :-
    (
        MaybeDet = no
    ;
        MaybeDet = yes(Det),
        add_string(" is ", !U),
        add_string(mercury_det_to_string(Det), !U)
    ).

mercury_output_det(Detism, !UI) :-
    mercury_format_det(Detism, !UI).

mercury_det_to_string(detism_det) = "det".
mercury_det_to_string(detism_semi) = "semidet".
mercury_det_to_string(detism_non) = "nondet".
mercury_det_to_string(detism_multi) = "multi".
mercury_det_to_string(detism_cc_multi) = "cc_multi".
mercury_det_to_string(detism_cc_non) = "cc_nondet".
mercury_det_to_string(detism_failure) = "failure".
mercury_det_to_string(detism_erroneous) = "erroneous".

:- pred mercury_format_det(determinism::in,
    U::di, U::uo) is det <= output(U).

mercury_format_det(Detism, !U) :-
    add_string(mercury_det_to_string(Detism), !U).

%-----------------------------------------------------------------------------%

    % Output a clause.
    %
:- pred mercury_output_pred_clause(prog_varset::in, sym_name::in,
    list(prog_term)::in, goal::in, prog_context::in, io::di, io::uo) is det.

mercury_output_pred_clause(VarSet, PredName, Args, Body, _Context, !IO) :-
    mercury_output_sym_name(PredName, !IO),
    (
        Args = [Arg | Args0],
        io.write_string("(", !IO),
        mercury_format_term(VarSet, no, Arg, !IO),
        mercury_format_remaining_terms(VarSet, no, Args0, !IO),
        io.write_string(")", !IO)
    ;
        Args = []
    ),
    ( Body = true_expr - _Context0 ->
        true
    ;
        io.write_string(" :-\n\t", !IO),
        mercury_output_goal(Body, VarSet, 1, !IO)
    ).

    % Output an equation.
    %
:- pred mercury_output_func_clause(prog_varset::in, sym_name::in,
    list(prog_term)::in, prog_term::in, goal::in, prog_context::in,
    io::di, io::uo) is det.

mercury_output_func_clause(VarSet, PredName, Args, Result, Body, _Context,
        !IO) :-
    mercury_output_sym_name(PredName, !IO),
    (
        Args = [Arg | Args0],
        io.write_string("(", !IO),
        mercury_format_term(VarSet, no, Arg, !IO),
        mercury_format_remaining_terms(VarSet, no, Args0, !IO),
        io.write_string(")", !IO)
    ;
        Args = []
    ),
    io.write_string(" = ", !IO),
    ( Body = true_expr - _Context0 ->
        mercury_format_term_nq(VarSet, no, next_to_graphic_token, Result, !IO)
    ;
        mercury_format_term(VarSet, no, Result, !IO),
        io.write_string(" :-\n\t", !IO),
        mercury_output_goal(Body, VarSet, 1, !IO)
    ).

:- pred mercury_output_goal(goal::in, prog_varset::in, int::in,
    io::di, io::uo) is det.

mercury_output_goal(Goal - _Context, VarSet, Indent, !IO) :-
    mercury_output_goal_2(Goal, VarSet, Indent, !IO).

:- pred mercury_output_goal_2(goal_expr::in, prog_varset::in, int::in,
    io::di, io::uo) is det.

mercury_output_goal_2(fail_expr, _, _, !IO) :-
    io.write_string("fail", !IO).

mercury_output_goal_2(true_expr, _, _, !IO) :-
    io.write_string("true", !IO).

mercury_output_goal_2(implies_expr(G1,G2), VarSet, Indent, !IO) :-
    Indent1 = Indent + 1,
    io.write_string("(", !IO),
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(G1, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string("=>", !IO),
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(G2, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(equivalent_expr(G1,G2), VarSet, Indent, !IO) :-
    Indent1 = Indent + 1,
    io.write_string("(", !IO),
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(G1, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string("<=>", !IO),
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(G2, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(some_expr(Vars, Goal), VarSet, Indent, !IO) :-
    (
        Vars = [],
        mercury_output_goal(Goal, VarSet, Indent, !IO)
    ;
        Vars = [_ | _],
        io.write_string("some [", !IO),
        mercury_output_vars(VarSet, no, Vars, !IO),
        io.write_string("] (", !IO),
        Indent1 = Indent + 1,
        mercury_output_newline(Indent1, !IO),
        mercury_output_goal(Goal, VarSet, Indent1, !IO),
        mercury_output_newline(Indent, !IO),
        io.write_string(")", !IO)
    ).

mercury_output_goal_2(some_state_vars_expr(Vars, Goal), VarSet, Indent, !IO) :-
    (
        Vars = [],
        mercury_output_goal(Goal, VarSet, Indent, !IO)
    ;
        Vars = [_ | _],
        io.write_string("some [", !IO),
        mercury_output_state_vars(VarSet, no, Vars, !IO),
        io.write_string("] (", !IO),
        Indent1 = Indent + 1,
        mercury_output_newline(Indent1, !IO),
        mercury_output_goal(Goal, VarSet, Indent1, !IO),
        mercury_output_newline(Indent, !IO),
        io.write_string(")", !IO)
    ).

mercury_output_goal_2(all_expr(Vars, Goal), VarSet, Indent, !IO) :-
    (
        Vars = [],
        mercury_output_goal(Goal, VarSet, Indent, !IO)
    ;
        Vars = [_ | _],
        io.write_string("all [", !IO),
        mercury_output_vars(VarSet, no, Vars, !IO),
        io.write_string("] (", !IO),
        Indent1 = Indent + 1,
        mercury_output_newline(Indent1, !IO),
        mercury_output_goal(Goal, VarSet, Indent1, !IO),
        mercury_output_newline(Indent, !IO),
        io.write_string(")", !IO)
    ).

mercury_output_goal_2(all_state_vars_expr(Vars, Goal), VarSet, Indent, !IO) :-
    (
        Vars = [],
        mercury_output_goal(Goal, VarSet, Indent, !IO)
    ;
        Vars = [_ | _],
        io.write_string("all [", !IO),
        mercury_output_state_vars(VarSet, no, Vars, !IO),
        io.write_string("] (", !IO),
        Indent1 = Indent + 1,
        mercury_output_newline(Indent1, !IO),
        mercury_output_goal(Goal, VarSet, Indent1, !IO),
        mercury_output_newline(Indent, !IO),
        io.write_string(")", !IO)
    ).

mercury_output_goal_2(
        promise_equivalent_solutions_expr(Vars, DotSVars, ColonSVars, Goal),
        VarSet, Indent, !IO) :-
    mercury_output_promise_eqv_solutions_goal(Vars, DotSVars, ColonSVars,
        Goal, VarSet, Indent, "promise_equivalent_solutions", !IO).

mercury_output_goal_2(
        promise_equivalent_solution_sets_expr(Vars, DotSVars, ColonSVars,
            Goal),
        VarSet, Indent, !IO) :-
    mercury_output_promise_eqv_solutions_goal(Vars, DotSVars, ColonSVars,
        Goal, VarSet, Indent, "promise_equivalent_solution_sets", !IO).

mercury_output_goal_2(
        promise_equivalent_solution_arbitrary_expr(Vars, DotSVars, ColonSVars,
            Goal),
        VarSet, Indent, !IO) :-
    mercury_output_promise_eqv_solutions_goal(Vars, DotSVars, ColonSVars,
        Goal, VarSet, Indent, "arbitrary", !IO).

mercury_output_goal_2(promise_purity_expr(_Implicit, Purity, Goal), VarSet,
        Indent, !IO) :-
    (
        Purity = purity_pure,
        io.write_string("promise_pure (", !IO)
    ;
        Purity = purity_semipure,
        io.write_string("promise_semipure (", !IO)
    ;
        Purity = purity_impure,
        io.write_string("promise_impure (", !IO)
    ),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(Goal, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(Expr, VarSet, Indent, !IO) :-
    Expr = trace_expr(MaybeCompileTime, MaybeRunTime, MaybeIO, MutableVars,
        Goal),
    mercury_output_newline(Indent, !IO),
    io.write_string("trace [", !IO),
    some [!NeedComma] (
        !:NeedComma = no,
        (
            MaybeCompileTime = yes(CompileTime),
            mercury_output_trace_expr(mercury_output_trace_compiletime,
                CompileTime, !IO),
            !:NeedComma = yes
        ;
            MaybeCompileTime = no
        ),
        (
            MaybeRunTime = yes(RunTime),
            mercury_output_comma_if_needed(!.NeedComma, !IO),
            mercury_output_trace_expr(mercury_output_trace_runtime,
                RunTime, !IO),
            !:NeedComma = yes
        ;
            MaybeRunTime = no
        ),
        (
            MaybeIO = yes(IOStateVar),
            mercury_output_comma_if_needed(!.NeedComma, !IO),
            io.write_string("io(!", !IO),
            mercury_output_var(VarSet, no, IOStateVar, !IO),
            io.write_string(")", !IO),
            !:NeedComma = yes
        ;
            MaybeIO = no
        ),
        list.foldl2(mercury_output_trace_mutable_var_and_comma(VarSet, no),
            MutableVars, !.NeedComma, _, !IO)
    ),
    io.write_string("]", !IO),
    mercury_output_newline(Indent + 1, !IO),
    mercury_output_goal(Goal, VarSet, Indent + 1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(if_then_else_expr(Vars, StateVars, Cond, Then, Else),
        VarSet, Indent, !IO) :-
    io.write_string("(if", !IO),
    mercury_output_some(Vars, StateVars, VarSet, !IO),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(Cond, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string("then", !IO),
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(Then, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string("else", !IO),
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(Else, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(not_expr(Goal), VarSet, Indent, !IO) :-
    io.write_string("\\+ (", !IO),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(Goal, VarSet, Indent1, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(conj_expr(A, B), VarSet, Indent, !IO) :-
    mercury_output_goal(A, VarSet, Indent, !IO),
    io.write_string(",", !IO),
    mercury_output_newline(Indent, !IO),
    mercury_output_goal(B, VarSet, Indent, !IO).

mercury_output_goal_2(par_conj_expr(A, B), VarSet, Indent, !IO) :-
    io.write_string("(", !IO),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(A, VarSet, Indent1, !IO),
    mercury_output_par_conj(B, VarSet, Indent, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(disj_expr(A, B), VarSet, Indent, !IO) :-
    io.write_string("(", !IO),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    mercury_output_goal(A, VarSet, Indent1, !IO),
    mercury_output_disj(B, VarSet, Indent, !IO),
    mercury_output_newline(Indent, !IO),
    io.write_string(")", !IO).

mercury_output_goal_2(event_expr(Name, Terms), VarSet, Indent, !IO) :-
    io.write_string("event ", !IO),
    mercury_output_call(unqualified(Name), Terms, VarSet, Indent, !IO).

mercury_output_goal_2(call_expr(Name, Terms, Purity), VarSet, Indent, !IO) :-
    write_purity_prefix(Purity, !IO),
    mercury_output_call(Name, Terms, VarSet, Indent, !IO).

mercury_output_goal_2(unify_expr(A, B, Purity), VarSet, _Indent, !IO) :-
    write_purity_prefix(Purity, !IO),
    mercury_output_term(VarSet, no, A, !IO),
    io.write_string(" = ", !IO),
    mercury_output_term_nq(VarSet, no, next_to_graphic_token, B, !IO).

:- pred mercury_output_promise_eqv_solutions_goal(prog_vars::in,
    prog_vars::in, prog_vars::in, goal::in, prog_varset::in, int::in,
    string::in, io::di, io::uo) is det.

mercury_output_promise_eqv_solutions_goal(Vars, DotSVars, ColonSVars,
        Goal, VarSet, Indent, Keyword, !IO) :-
    (
        Vars = [],
        DotSVars = [],
        ColonSVars = []
    ->
        % This should have been caught be prog_io_goal when reading in
        % the term, but there is no point in aborting here.
        mercury_output_goal(Goal, VarSet, Indent, !IO)
    ;
        io.write_string(Keyword, !IO),
        io.write_string(" [", !IO),
        mercury_output_vars(VarSet, no, Vars, !IO),
        (
            Vars = [_ | _],
            DotSVars = [_ | _]
        ->
            io.write_string(", ", !IO)
        ;
            true
        ),
        mercury_output_state_vars_using_prefix(DotSVars, "!.", VarSet, no,
            !IO),
        (
            ( Vars = [_ | _]
            ; DotSVars = [_ | _]
            ),
            ColonSVars = [_ | _]
        ->
            io.write_string(", ", !IO)
        ;
            true
        ),
        mercury_output_state_vars_using_prefix(ColonSVars, "!:", VarSet, no,
            !IO),
        io.write_string("] (", !IO),
        Indent1 = Indent + 1,
        mercury_output_newline(Indent1, !IO),
        mercury_output_goal(Goal, VarSet, Indent1, !IO),
        mercury_output_newline(Indent, !IO),
        io.write_string(")", !IO)
    ).

:- pred mercury_output_state_vars_using_prefix(prog_vars::in, string::in,
    prog_varset::in, bool::in, io::di, io::uo) is det.

mercury_output_state_vars_using_prefix([], _BangPrefix, _VarSet,
        _AppendVarnums, !IO).
mercury_output_state_vars_using_prefix([SVar | SVars], BangPrefix, VarSet,
        AppendVarnums, !IO) :-
    io.write_string(BangPrefix, !IO),
    mercury_format_var(VarSet, AppendVarnums, SVar, !IO),
    (
        SVars = [_ | _],
        io.write_string(", ", !IO),
        mercury_output_state_vars_using_prefix(SVars, BangPrefix, VarSet,
            AppendVarnums, !IO)
    ;
        SVars = []
    ).

:- pred mercury_output_comma_if_needed(bool::in, io::di, io::uo) is det.

mercury_output_comma_if_needed(no, !IO).
mercury_output_comma_if_needed(yes, !IO) :-
    io.write_string(", ", !IO).

mercury_output_trace_expr(PrintBase, TraceExpr, !IO) :-
    (
        TraceExpr = trace_base(Base),
        PrintBase(Base, !IO)
    ;
        TraceExpr = trace_not(TraceExprA),
        io.write_string("not(", !IO),
        mercury_output_trace_expr(PrintBase, TraceExprA, !IO),
        io.write_string(")", !IO)
    ;
        TraceExpr = trace_op(trace_or, TraceExprA, TraceExprB),
        io.write_string("(", !IO),
        mercury_output_trace_expr(PrintBase, TraceExprA, !IO),
        io.write_string(") or (", !IO),
        mercury_output_trace_expr(PrintBase, TraceExprB, !IO),
        io.write_string(")", !IO)
    ;
        TraceExpr = trace_op(trace_and, TraceExprA, TraceExprB),
        mercury_output_trace_expr(PrintBase, TraceExprA, !IO),
        io.write_string(" and ", !IO),
        mercury_output_trace_expr(PrintBase, TraceExprB, !IO)
    ).

mercury_output_trace_compiletime(trace_flag(FlagName), !IO) :-
    io.write_string("flag(", !IO),
    io.write_string(FlagName, !IO),
    io.write_string(")", !IO).
mercury_output_trace_compiletime(trace_grade(Grade), !IO) :-
    io.write_string("grade(", !IO),
    (
        Grade = trace_grade_debug,
        io.write_string("debug", !IO)
    ),
    io.write_string(")", !IO).
mercury_output_trace_compiletime(trace_trace_level(Level), !IO) :-
    io.write_string("tracelevel(", !IO),
    (
        Level = trace_level_shallow,
        io.write_string("shallow", !IO)
    ;
        Level = trace_level_deep,
        io.write_string("deep", !IO)
    ),
    io.write_string(")", !IO).

mercury_output_trace_runtime(trace_envvar(EnvVarName), !IO) :-
    io.write_string("env(", !IO),
    io.write_string(EnvVarName, !IO),
    io.write_string(")", !IO).

mercury_output_trace_mutable_var(MutableVar, VarSet, AppendVarnums, !IO) :-
    MutableVar = trace_mutable_var(MutableName, StateVar),
    io.write_string("state(", !IO),
    io.write_string(MutableName, !IO),
    io.write_string(", !", !IO),
    mercury_output_var(VarSet, AppendVarnums, StateVar, !IO),
    io.write_string(")", !IO).

:- pred mercury_output_trace_mutable_var_and_comma(prog_varset::in, bool::in,
    trace_mutable_var::in, bool::in, bool::out, io::di, io::uo) is det.

mercury_output_trace_mutable_var_and_comma(VarSet, AppendVarnums,
        MutableVar, !NeedComma, !IO) :-
    mercury_output_comma_if_needed(!.NeedComma, !IO),
    !:NeedComma = yes,
    mercury_output_trace_mutable_var(MutableVar, VarSet, AppendVarnums, !IO).

:- pred mercury_output_call(sym_name::in, list(prog_term)::in, prog_varset::in,
    int::in, io::di, io::uo) is det.

mercury_output_call(Name, Term, VarSet, _Indent, !IO) :-
    (
        Name = qualified(ModuleName, PredName),
        mercury_output_bracketed_sym_name(ModuleName,
            next_to_graphic_token, !IO),
        io.write_string(".", !IO),
        term.context_init(Context0),
        SubTerm = term.functor(term.atom(PredName), Term, Context0),
        mercury_output_term_nq(VarSet, no, next_to_graphic_token, SubTerm, !IO)
    ;
        Name = unqualified(PredName),
        term.context_init(Context0),
        SubTerm = term.functor(term.atom(PredName), Term, Context0),
        mercury_output_term_nq(VarSet, no, next_to_graphic_token, SubTerm, !IO)
    ).

:- pred mercury_output_disj(goal::in, prog_varset::in, int::in,
    io::di, io::uo) is det.

mercury_output_disj(Goal, VarSet, Indent, !IO) :-
    mercury_output_newline(Indent, !IO),
    io.write_string(";", !IO),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    ( Goal = disj_expr(A, B) - _Context ->
        mercury_output_goal(A, VarSet, Indent1, !IO),
        mercury_output_disj(B, VarSet, Indent, !IO)
    ;
        mercury_output_goal(Goal, VarSet, Indent1, !IO)
    ).

:- pred mercury_output_par_conj(goal::in, prog_varset::in, int::in,
    io::di, io::uo) is det.

mercury_output_par_conj(Goal, VarSet, Indent, !IO) :-
    mercury_output_newline(Indent, !IO),
    io.write_string("&", !IO),
    Indent1 = Indent + 1,
    mercury_output_newline(Indent1, !IO),
    ( Goal = par_conj_expr(A, B) - _Context ->
        mercury_output_goal(A, VarSet, Indent1, !IO),
        mercury_output_par_conj(B, VarSet, Indent, !IO)
    ;
        mercury_output_goal(Goal, VarSet, Indent1, !IO)
    ).

:- pred mercury_output_some(list(var(T))::in, list(var(T))::in, varset(T)::in,
    io::di, io::uo) is det.

mercury_output_some(Vars, StateVars, VarSet, !IO) :-
    (
        ( Vars = [_ | _]
        ; StateVars = [_ | _]
        )
    ->
        io.write_string(" some [", !IO),
        mercury_output_vars(VarSet, no, Vars, !IO),
        (
            Vars = [_ | _],
            StateVars = [_ | _]
        ->
            io.write_string(", ", !IO),
            mercury_output_state_vars(VarSet, no, StateVars, !IO)
        ;
            true
        ),
        io.write_string("]", !IO)
    ;
        true
    ).

%-----------------------------------------------------------------------------%

mercury_output_pragma_foreign_decl(Lang, IsLocal, ForeignDeclString, !IO) :-
    mercury_format_pragma_foreign_decl(Lang, IsLocal, ForeignDeclString, !IO).

mercury_pragma_foreign_decl_to_string(Lang, IsLocal, ForeignDeclString)
        = String :-
    mercury_format_pragma_foreign_decl(Lang, IsLocal, ForeignDeclString,
        "", String).

:- pred mercury_format_pragma_foreign_decl(foreign_language::in,
    foreign_decl_is_local::in, string::in, U::di, U::uo) is det
    <= output(U).

mercury_format_pragma_foreign_decl(Lang, IsLocal, ForeignDeclString, !U) :-
    add_string(":- pragma foreign_decl(", !U),
    mercury_format_foreign_language_string(Lang, !U),
    add_string(", ", !U),
    (
        IsLocal = foreign_decl_is_local,
        add_string("local", !U)
    ;
        IsLocal = foreign_decl_is_exported,
        add_string("exported", !U)
    ),
    add_string(", ", !U),
    mercury_format_foreign_code_string(ForeignDeclString, !U),
    add_string(").\n", !U).

mercury_output_foreign_language_string(Lang, !IO) :-
    mercury_format_foreign_language_string(Lang, !IO).

mercury_foreign_language_to_string(Lang) = String :-
    mercury_format_foreign_language_string(Lang, "", String).

:- pred mercury_format_foreign_language_string(foreign_language::in,
    U::di, U::uo) is det <= output(U).

mercury_format_foreign_language_string(Lang, !U) :-
    add_string("""" ++ foreign_language_string(Lang) ++ """", !U).

mercury_output_pragma_foreign_import_module(Lang, ModuleName, !IO) :-
    io.write_string(":- pragma foreign_import_module(", !IO),
    mercury_format_foreign_language_string(Lang, !IO),
    io.write_string(", ", !IO),
    mercury_output_bracketed_sym_name(ModuleName, not_next_to_graphic_token,
        !IO),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

% The code here is similar to the code for term_io.quote_string,
% but \n and \t are output directly, rather than escaped.
% Any changes here may require corresponding changes to term_io and vice versa.

:- pred mercury_format_foreign_code_string(string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_foreign_code_string(S, !U) :-
    add_string("""", !U),
    mercury_format_escaped_string(S, !U),
    add_string("""", !U).

:- pred mercury_format_escaped_string(string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_escaped_string(String, !U) :-
    string.foldl(mercury_format_escaped_char, String, !U).

:- pred mercury_format_escaped_char(char::in,
    U::di, U::uo) is det <= output(U).

mercury_format_escaped_char(Char, !U) :-
    ( escape_special_char(Char, QuoteChar) ->
        add_char('\\', !U),
        add_char(QuoteChar, !U)
    ; mercury_is_source_char(Char) ->
        add_char(Char, !U)
    ;
        add_string(mercury_escape_char(Char), !U)
    ).

    % Succeed if Char is a character which is allowed in
    % Mercury string and character literals.
    %
:- pred mercury_is_source_char(char::in) is semidet.

mercury_is_source_char(Char) :-
    ( char.is_alnum(Char)
    ; is_mercury_punctuation_char(Char)
    ; Char = '\n'
    ; Char = '\t'
    ).

%-----------------------------------------------------------------------------%

    % escape_special_char(Char, EscapeChar)
    % is true iff Char is character for which there is a special
    % backslash-escape character EscapeChar that can be used
    % after a backslash in Mercury foreign_code string literals
    % represent Char.

:- pred escape_special_char(char::in, char::out) is semidet.

escape_special_char('''', '''').
escape_special_char('"', '"').
escape_special_char('\\', '\\').
escape_special_char('\b', 'b').

%-----------------------------------------------------------------------------%

    % Output the given pragma source_file declaration
:- pred mercury_output_pragma_source_file(string::in, io::di, io::uo) is det.

mercury_output_pragma_source_file(SourceFileString, !IO) :-
    io.write_string(":- pragma source_file(", !IO),
    term_io.quote_string(SourceFileString, !IO),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

    % Output the given foreign_body_code declaration
:- pred mercury_output_pragma_foreign_body_code(foreign_language::in,
    string::in, io::di, io::uo) is det.

mercury_output_pragma_foreign_body_code(Lang, ForeignCodeString, !IO) :-
    io.write_string(":- pragma foreign_code(", !IO),
    mercury_format_foreign_language_string(Lang, !IO),
    io.write_string(", ", !IO),
    mercury_format_foreign_code_string(ForeignCodeString, !IO),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

mercury_output_pragma_foreign_code(Attributes, PredName, PredOrFunc, Vars0,
        ProgVarset, InstVarset, PragmaCode, !IO) :-
    mercury_format_pragma_foreign_code(Attributes, PredName, PredOrFunc,
        Vars0, ProgVarset, InstVarset, PragmaCode, !IO).

mercury_pragma_foreign_code_to_string(Attributes, PredName, PredOrFunc, Vars0,
        ProgVarset, InstVarset, PragmaCode) = String :-
    mercury_format_pragma_foreign_code(Attributes, PredName, PredOrFunc,
        Vars0, ProgVarset, InstVarset, PragmaCode, "", String).

    % Output the given pragma foreign_code declaration.
    %
:- pred mercury_format_pragma_foreign_code(pragma_foreign_proc_attributes::in,
    sym_name::in, pred_or_func::in, list(pragma_var)::in, prog_varset::in,
    inst_varset::in, pragma_foreign_code_impl::in,
    U::di, U::uo) is det <= output(U).

mercury_format_pragma_foreign_code(Attributes, PredName, PredOrFunc, Vars0,
        ProgVarset, InstVarset, PragmaCode, !U) :-
    (
        PragmaCode = fc_impl_import(C_Function, _, _, _),
        % The predicate or function arguments in a `:- pragma import'
        % declaration are not named.
        ImportModes = list.map(
            (func(pragma_var(_, _, ImportMode, _)) = ImportMode), Vars0),

        mercury_format_pragma_import(PredName, PredOrFunc, ImportModes,
            Attributes, C_Function, !U)
    ;
        PragmaCode = fc_impl_ordinary(_, _),
        mercury_format_pragma_foreign_code_2(Attributes, PredName,
            PredOrFunc, Vars0, ProgVarset, InstVarset, PragmaCode, !U)
    ;
        PragmaCode = fc_impl_model_non(_, _, _, _, _, _, _, _, _),
        mercury_format_pragma_foreign_code_2(Attributes, PredName,
            PredOrFunc, Vars0, ProgVarset, InstVarset, PragmaCode, !U)
    ).

:- pred mercury_format_pragma_foreign_code_2(
    pragma_foreign_proc_attributes::in, sym_name::in, pred_or_func::in,
    list(pragma_var)::in, prog_varset::in, inst_varset::in,
    pragma_foreign_code_impl::in, U::di, U::uo) is det <= output(U).

mercury_format_pragma_foreign_code_2(Attributes, PredName, PredOrFunc, Vars0,
        ProgVarset, InstVarset, PragmaCode, !U) :-
    add_string(":- pragma foreign_proc(", !U),
    Lang = get_foreign_language(Attributes),
    mercury_format_foreign_language_string(Lang, !U),
    add_string(", ", !U),
    mercury_format_sym_name(PredName, !U),
    (
        PredOrFunc = pf_predicate,
        Vars = Vars0,
        ResultVars = []
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(Vars0, Vars, ResultVar),
        ResultVars = [ResultVar]
    ),
    (
        Vars = []
    ;
        Vars = [_ | _],
        add_string("(", !U),
        mercury_format_pragma_foreign_code_vars(Vars, ProgVarset,
            InstVarset, !U),
        add_string(")", !U)
    ),
    (
        PredOrFunc = pf_predicate
    ;
        PredOrFunc = pf_function,
        add_string(" = (", !U),
        mercury_format_pragma_foreign_code_vars(ResultVars, ProgVarset,
            InstVarset, !U),
        add_string(")", !U)
    ),
    add_string(", ", !U),
    mercury_format_pragma_foreign_attributes(Attributes, !U),
    add_string(", ", !U),
    (
        PragmaCode = fc_impl_ordinary(C_Code, _),
        mercury_format_foreign_code_string(C_Code, !U)
    ;
        PragmaCode = fc_impl_model_non(Fields, _, First, _, Later, _,
            Treat, Shared, _),
        add_string("local_vars(", !U),
        mercury_format_foreign_code_string(Fields, !U),
        add_string("), ", !U),
        add_string("first_code(", !U),
        mercury_format_foreign_code_string(First, !U),
        add_string("), ", !U),
        add_string("retry_code(", !U),
        mercury_format_foreign_code_string(Later, !U),
        add_string("), ", !U),
        (
            Treat = shared_code_share,
            add_string("shared_code(", !U)
        ;
            Treat = shared_code_duplicate,
            add_string("duplicated_code(", !U)
        ;
            Treat = shared_code_automatic,
            add_string("common_code(", !U)
        ),
        mercury_format_foreign_code_string(Shared, !U),
        add_string(")", !U)
    ;
        PragmaCode = fc_impl_import(_, _, _, _),
        % This should be handle in mercury_output_pragma_foreign_code.
        unexpected(this_file, "mercury_output_pragma_foreign_code_2")
    ),
    add_string(").\n", !U).

%-----------------------------------------------------------------------------%

    % Output the varnames of the pragma vars.
    %
:- pred mercury_format_pragma_foreign_code_vars(list(pragma_var)::in,
    prog_varset::in, inst_varset::in, U::di, U::uo)
    is det <= output(U).

mercury_format_pragma_foreign_code_vars(Vars, ProgVarset, InstVarset, !U) :-
    mercury_format_pragma_foreign_code_vars_2(Vars, ProgVarset, InstVarset,
        !U).

:- pred mercury_format_pragma_foreign_code_vars_2(list(pragma_var)::in,
    prog_varset::in, inst_varset::in, U::di, U::uo)
    is det <= output(U).

mercury_format_pragma_foreign_code_vars_2([], _, _, !U).
mercury_format_pragma_foreign_code_vars_2([Var | Vars], ProgVarset,
        InstVarset, !U) :-
    Var = pragma_var(_Var, VarName, Mode, _BoxPolicy),
    add_string(VarName, !U),
    add_string(" :: ", !U),
    mercury_format_mode(Mode, simple_inst_info(InstVarset), !U),
    (
        Vars = []
    ;
        Vars = [_ | _],
        add_string(", ", !U)
    ),
    mercury_format_pragma_foreign_code_vars_2(Vars, ProgVarset, InstVarset,
        !U).

%-----------------------------------------------------------------------------%

mercury_output_pragma_type_spec(Pragma, AppendVarnums, !IO) :-
    Pragma = pragma_type_spec(PredName, SpecName, Arity,
        MaybePredOrFunc, MaybeModes, Subst, VarSet, _),
    io.write_string(":- pragma type_spec(", !IO),
    (
        MaybeModes = yes(Modes),
        (
            MaybePredOrFunc = yes(PredOrFunc0),
            PredOrFunc = PredOrFunc0
        ;
            MaybePredOrFunc = no,
            unexpected(this_file, "pragma type_spec: no pred_or_func")
        ),
        (
            PredOrFunc = pf_function,
            pred_args_to_func_args(Modes, FuncModes, RetMode),
            mercury_output_sym_name(PredName, !IO),
            io.write_string("(", !IO),
            varset.init(InstVarSet),
            mercury_output_mode_list(FuncModes, InstVarSet, !IO),
            io.write_string(") = ", !IO),
            mercury_output_mode(RetMode, InstVarSet, !IO)
        ;
            PredOrFunc = pf_predicate,
            mercury_output_sym_name(PredName, !IO),
            io.write_string("(", !IO),
            varset.init(InstVarSet),
            mercury_output_mode_list(Modes, InstVarSet, !IO),
            io.write_string(")", !IO)
        )
    ;
        MaybeModes = no,
        mercury_output_bracketed_sym_name(PredName, next_to_graphic_token,
            !IO),
        io.write_string("/", !IO),
        io.write_int(Arity, !IO)
    ),
    io.write_string(", (", !IO),
    io.write_list(Subst, ", ",
        mercury_output_type_subst(VarSet, AppendVarnums), !IO),
    io.write_string("), ", !IO),
    mercury_output_bracketed_sym_name(SpecName, not_next_to_graphic_token,
        !IO),
    io.write_string(").\n", !IO).

:- pred mercury_output_type_subst(tvarset::in, bool::in,
    pair(tvar, mer_type)::in, io::di, io::uo) is det.

mercury_output_type_subst(VarSet, AppendVarnums, Var - Type, !IO) :-
    mercury_output_var(VarSet, AppendVarnums, Var, !IO),
    io.write_string(" = ", !IO),
    mercury_output_type(VarSet, AppendVarnums, Type, !IO).

%-----------------------------------------------------------------------------%

mercury_output_pragma_unused_args(PredOrFunc, SymName,
        Arity, ModeNum, UnusedArgs, !IO) :-
    io.write_string(":- pragma unused_args(", !IO),
    write_pred_or_func(PredOrFunc, !IO),
    io.write_string(", ", !IO),
    mercury_output_bracketed_sym_name(SymName, !IO),
    io.write_string(", ", !IO),
    io.write_int(Arity, !IO),
    io.write_string(", ", !IO),
    io.write_int(ModeNum, !IO),
    io.write_string(", [", !IO),
    mercury_format_int_list(UnusedArgs, !IO),
    io.write_string("]).\n", !IO).

:- pred mercury_format_int_list(list(int)::in,
    U::di, U::uo) is det <= output(U).

mercury_format_int_list([], !U).
mercury_format_int_list([First | Rest], !U) :-
    add_int(First, !U),
    mercury_format_int_list_2(Rest, !U).

:- pred mercury_format_int_list_2(list(int)::in,
    U::di, U::uo) is det <= output(U).

mercury_format_int_list_2([], !U).
mercury_format_int_list_2([First | Rest], !U) :-
    add_string(", ", !U),
    add_int(First, !U),
    mercury_format_int_list_2(Rest, !U).

%-----------------------------------------------------------------------------%

mercury_output_pragma_exceptions(PredOrFunc, SymName, Arity, ModeNum,
        ThrowStatus, !IO) :-
    io.write_string(":- pragma exceptions(", !IO),
    write_pred_or_func(PredOrFunc, !IO),
    io.write_string(", ", !IO),
    mercury_output_bracketed_sym_name(SymName, !IO),
    io.write_string(", ", !IO),
    io.write_int(Arity, !IO),
    io.write_string(", ", !IO),
    io.write_int(ModeNum, !IO),
    io.write_string(", ", !IO),
    (
        ThrowStatus = will_not_throw,
        io.write_string("will_not_throw", !IO)
    ;
        ThrowStatus = may_throw(ExceptionType),
        io.write_string("may_throw(", !IO),
        (
            ExceptionType = user_exception,
            io.write_string("user_exception)", !IO)
        ;
            ExceptionType = type_exception,
            io.write_string("type_exception)", !IO)
        )
    ;
        ThrowStatus = throw_conditional,
        io.write_string("conditional", !IO)
    ),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

mercury_output_pragma_trailing_info(PredOrFunc, SymName, Arity, ModeNum,
        TrailingStatus, !IO) :-
    io.write_string(":- pragma trailing_info(", !IO),
    write_pred_or_func(PredOrFunc, !IO),
    io.write_string(", ", !IO),
    mercury_output_bracketed_sym_name(SymName, !IO),
    io.write_string(", ", !IO),
    io.write_int(Arity, !IO),
    io.write_string(", ", !IO),
    io.write_int(ModeNum, !IO),
    io.write_string(", ", !IO),
    (
        TrailingStatus = trail_may_modify,
        io.write_string("may_modify_trail", !IO)
    ;
        TrailingStatus = trail_will_not_modify,
        io.write_string("will_not_modify_trail", !IO)
    ;
        TrailingStatus = trail_conditional,
        io.write_string("conditional", !IO)
    ),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

mercury_output_pragma_mm_tabling_info(PredOrFunc, SymName, Arity, ModeNum,
        MM_TablingStatus, !IO) :-
    io.write_string(":- pragma mm_tabling_info(", !IO),
    write_pred_or_func(PredOrFunc, !IO),
    io.write_string(", ", !IO),
    mercury_output_bracketed_sym_name(SymName, !IO),
    io.write_string(", ", !IO),
    io.write_int(Arity, !IO),
    io.write_string(", ", !IO),
    io.write_int(ModeNum, !IO),
    io.write_string(", ", !IO),
    (
        MM_TablingStatus = mm_tabled_may_call,
        io.write_string("mm_tabled_may_call", !IO)
    ;
        MM_TablingStatus = mm_tabled_will_not_call,
        io.write_string("mm_tabled_will_not_call", !IO)
    ;
        MM_TablingStatus = mm_tabled_conditional,
        io.write_string("mm_tabled_conditional", !IO)
    ),
    io.write_string(").\n", !IO).

%-----------------------------------------------------------------------------%

mercury_output_pragma_decl(PredName, Arity, PredOrFunc, PragmaName, MaybeAfter,
        !IO) :-
    mercury_format_pragma_decl(PredName, Arity, PredOrFunc, PragmaName,
        MaybeAfter, !IO).

mercury_pragma_decl_to_string(PredName, Arity, PredOrFunc, PragmaName,
        MaybeAfter) = String :-
    mercury_format_pragma_decl(PredName, Arity, PredOrFunc, PragmaName,
        MaybeAfter, "", String).

:- pred mercury_format_pragma_decl(sym_name::in, int::in, pred_or_func::in,
    string::in, maybe(string)::in, U::di, U::uo) is det <= output(U).

mercury_format_pragma_decl(PredName, Arity, PredOrFunc, PragmaName, MaybeAfter,
        !U) :-
    (
        PredOrFunc = pf_predicate,
        DeclaredArity = Arity
    ;
        PredOrFunc = pf_function,
        DeclaredArity = Arity - 1
    ),
    add_string(":- pragma ", !U),
    add_string(PragmaName, !U),
    add_string("(", !U),
    mercury_format_bracketed_sym_name(PredName, next_to_graphic_token, !U),
    add_string("/", !U),
    add_int(DeclaredArity, !U),
    (
        MaybeAfter = yes(After),
        add_string(", ", !U),
        add_string(After, !U)
    ;
        MaybeAfter = no
    ),
    add_string(").\n", !U).

%-----------------------------------------------------------------------------%

:- pred mercury_format_pragma_import(sym_name::in, pred_or_func::in,
    list(mer_mode)::in, pragma_foreign_proc_attributes::in, string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_pragma_import(Name, PredOrFunc, ModeList, Attributes,
        C_Function, !U) :-
    varset.init(Varset), % the varset isn't really used.
    InstInfo = simple_inst_info(Varset),
    add_string(":- pragma import(", !U),
    mercury_format_sym_name(Name, !U),
    (
        PredOrFunc = pf_function,
        pred_args_to_func_args(ModeList, ArgModes, RetMode),
        add_string("(", !U),
        mercury_format_mode_list(ArgModes, InstInfo, !U),
        add_string(") = ", !U),
        mercury_format_mode(RetMode, InstInfo, !U)
    ;
        PredOrFunc = pf_predicate,
        add_string("(", !U),
        mercury_format_mode_list(ModeList, InstInfo, !U),
        add_string(")", !U)
    ),
    add_string(", ", !U),
    mercury_format_pragma_foreign_attributes(Attributes, !U),
    add_string(", """, !U),
    add_string(C_Function, !U),
    add_string(""").\n", !U).

:- pred mercury_format_pragma_foreign_export(foreign_language::in,
    sym_name::in, pred_or_func::in, list(mer_mode)::in, string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_pragma_foreign_export(Lang, Name, PredOrFunc, ModeList,
    ExportName, !U) :-
    varset.init(Varset), % The varset isn't really used.
    InstInfo = simple_inst_info(Varset),
    add_string(":- pragma foreign_export(", !U),
    mercury_format_foreign_language_string(Lang, !U),
    add_string(", ", !U),
    mercury_format_sym_name(Name, !U),
    (
        PredOrFunc = pf_function,
        pred_args_to_func_args(ModeList, ArgModes, RetMode),
        add_string("(", !U),
        mercury_format_mode_list(ArgModes, InstInfo, !U),
        add_string(") = ", !U),
        mercury_format_mode(RetMode, InstInfo, !U)
    ;
        PredOrFunc = pf_predicate,
        add_string("(", !U),
        mercury_format_mode_list(ModeList, InstInfo, !U),
        add_string(")", !U)
    ),
    add_string(", ", !U),
    add_string(ExportName, !U),
    add_string(").\n", !U).

%-----------------------------------------------------------------------------%

:- pred mercury_format_pragma_fact_table(sym_name::in, arity::in, string::in,
    U::di, U::uo) is det <= output(U).

mercury_format_pragma_fact_table(Pred, Arity, FileName, !U) :-
    add_string(":- pragma fact_table(", !U),
    mercury_format_bracketed_sym_name(Pred, next_to_graphic_token, !U),
    add_string("/", !U),
    add_int(Arity, !U),
    add_string(", ", !U),
    add_quoted_string(FileName, !U),
    add_string(").\n", !U).

%-----------------------------------------------------------------------------%

mercury_output_newline(Indent, !IO) :-
    io.write_char('\n', !IO),
    mercury_format_tabs(Indent, !IO).

:- pred mercury_format_tabs(int::in,
    U::di, U::uo) is det <= output(U).

mercury_format_tabs(Indent, !U) :-
    ( Indent = 0 ->
        true
    ;
        add_string("\t", !U),
        mercury_format_tabs(Indent - 1, !U)
    ).

%-----------------------------------------------------------------------------%

:- pred mercury_format_pragma_foreign_attributes(
    pragma_foreign_proc_attributes::in, U::di, U::uo) is det <= output(U).

mercury_format_pragma_foreign_attributes(Attributes, !U) :-
    % This is one case where it is a bad idea to use field accessors.
    add_string("[", !U),
    add_list(attributes_to_strings(Attributes), ", ", add_string, !U),
    add_string("]", !U).

%-----------------------------------------------------------------------------%

    % write a term to standard output.

mercury_output_term(VarSet, AppendVarnums, Term, !IO) :-
    mercury_output_term_nq(VarSet, AppendVarnums, not_next_to_graphic_token,
        Term, !IO).

mercury_output_term_nq(VarSet, AppendVarnums, NextToGraphicToken, Term, !IO) :-
    mercury_format_term_nq(VarSet, AppendVarnums, NextToGraphicToken, Term,
        !IO).

mercury_term_to_string(VarSet, AppendVarnums, Term) =
    mercury_term_nq_to_string(VarSet, AppendVarnums, not_next_to_graphic_token,
        Term).

mercury_term_nq_to_string(VarSet, AppendVarnums, NextToGraphicToken, Term)
        = String :-
    mercury_format_term_nq(VarSet, AppendVarnums, NextToGraphicToken, Term,
        "", String).

:- pred mercury_format_term(varset(T)::in, bool::in, term(T)::in,
    U::di, U::uo) is det <= output(U).

mercury_format_term(VarSet, AppendVarnums, Term, !U) :-
    mercury_format_term_nq(VarSet, AppendVarnums, not_next_to_graphic_token,
        Term, !U).

:- pred mercury_format_term_nq(varset(T)::in, bool::in, needs_quotes::in,
    term(T)::in, U::di, U::uo) is det <= output(U).

mercury_format_term_nq(VarSet, AppendVarnums, _, term.variable(Var, _), !U) :-
    mercury_format_var(VarSet, AppendVarnums, Var, !U).
mercury_format_term_nq(VarSet, AppendVarnums, NextToGraphicToken,
        term.functor(Functor, Args, _), !U) :-
    (
        Functor = term.atom(""),
        Args = [F, X | Xs]
    ->
        mercury_format_term_nq(VarSet, AppendVarnums, NextToGraphicToken, F,
            !U),
        add_string("(", !U),
        mercury_format_term(VarSet, AppendVarnums, X, !U),
        mercury_format_remaining_terms(VarSet, AppendVarnums, Xs, !U),
        add_string(")", !U)
    ;
        Functor = term.atom("[|]"),
        Args = [X, Xs]
    ->
        add_string("[", !U),
        mercury_format_term(VarSet, AppendVarnums, X, !U),
        mercury_format_list_args(VarSet, AppendVarnums, Xs, !U),
        add_string("]", !U)
    ;
        Functor = term.atom("{}"),
        Args = [X]
    ->
        % A unary tuple is usually a DCG escape,
        % so add some extra space.
        add_string("{ ", !U),
        mercury_format_term(VarSet, AppendVarnums, X, !U),
        add_string(" }", !U)
    ;
        Functor = term.atom("{}"),
        Args = [X | Xs]
    ->
        add_string("{", !U),
        mercury_format_term(VarSet, AppendVarnums, X, !U),
        mercury_format_remaining_terms(VarSet, AppendVarnums, Xs, !U),
        add_string("}", !U)
    ;
        Args = [BinaryPrefixArg1, BinaryPrefixArg2],
        Functor = term.atom(FunctorName),
        mercury_binary_prefix_op(FunctorName)
    ->
        add_string("(", !U),
        add_string(FunctorName, !U),
        add_string(" ", !U),
        mercury_format_term(VarSet, AppendVarnums, BinaryPrefixArg1, !U),
        add_string(" ", !U),
        mercury_format_term(VarSet, AppendVarnums, BinaryPrefixArg2, !U),
        add_string(")", !U)
    ;
        Args = [PrefixArg],
        Functor = term.atom(FunctorName),
        mercury_unary_prefix_op(FunctorName)
    ->
        add_string("(", !U),
        add_string(FunctorName, !U),
        add_string(" ", !U),
        mercury_format_term(VarSet, AppendVarnums, PrefixArg, !U),
        add_string(")", !U)
    ;
        Args = [PostfixArg],
        Functor = term.atom(FunctorName),
        mercury_unary_postfix_op(FunctorName)
    ->
        add_string("(", !U),
        mercury_format_term(VarSet, AppendVarnums, PostfixArg, !U),
        add_string(" ", !U),
        add_string(FunctorName, !U),
        add_string(")", !U)
    ;
        Args = [Arg1, Arg2],
        Functor = term.atom(FunctorName),
        mercury_infix_op(FunctorName)
    ->
        add_string("(", !U),
        (
            ( FunctorName = ":"
            ; FunctorName = "."
            )
        ->
            mercury_format_term_nq(VarSet, AppendVarnums,
                next_to_graphic_token, Arg1, !U),
            add_string(".", !U),
            mercury_format_term_nq(VarSet, AppendVarnums,
                next_to_graphic_token, Arg2, !U)
        ;
            mercury_format_term_nq(VarSet, AppendVarnums,
                not_next_to_graphic_token, Arg1, !U),
            add_string(" ", !U),
            add_string(FunctorName, !U),
            add_string(" ", !U),
            mercury_format_term_nq(VarSet, AppendVarnums,
                not_next_to_graphic_token, Arg2, !U)
        ),
        add_string(")", !U)
    ;
        Args = [Y | Ys]
    ->
        mercury_format_constant(Functor, NextToGraphicToken, !U),
        add_string("(", !U),
        mercury_format_term(VarSet, AppendVarnums, Y, !U),
        mercury_format_remaining_terms(VarSet, AppendVarnums, Ys, !U),
        add_string(")", !U)
    ;
        mercury_format_bracketed_constant(Functor, NextToGraphicToken, !U)
    ).

:- pred mercury_format_list_args(varset(T)::in, bool::in, term(T)::in,
    U::di, U::uo) is det <= output(U).

mercury_format_list_args(VarSet, AppendVarnums, Term, !U) :-
    (
        Term = term.functor(term.atom("[|]"), Args, _),
        Args = [X, Xs]
    ->
        add_string(", ", !U),
        mercury_format_term(VarSet, AppendVarnums, X, !U),
        mercury_format_list_args(VarSet, AppendVarnums, Xs, !U)
    ;
        Term = term.functor(term.atom("[]"), [], _)
    ->
        true
    ;
        add_string(" | ", !U),
        mercury_format_term(VarSet, AppendVarnums, Term, !U)
    ).

:- pred mercury_format_remaining_terms(varset(T)::in, bool::in,
    list(term(T))::in, U::di, U::uo) is det <= output(U).

mercury_format_remaining_terms(_VarSet, _AppendVarnums, [], !U).
mercury_format_remaining_terms(VarSet, AppendVarnums, [Term | Terms], !U) :-
    add_string(", ", !U),
    mercury_format_term(VarSet, AppendVarnums, Term, !U),
    mercury_format_remaining_terms(VarSet, AppendVarnums, Terms, !U).

    % Similar to mercury_output_vars//3, but prefixes each variable
    % with `!' to indicate that it is a state variable.
    %
:- pred mercury_output_state_vars(varset(T)::in, bool::in, list(var(T))::in,
    io::di, io::uo) is det.

mercury_output_state_vars(VarSet, AppendVarnums, StateVars, !IO) :-
    io.write_list(StateVars, ", ",
        mercury_output_state_var(VarSet, AppendVarnums), !IO).

:- pred mercury_output_state_var(varset(T)::in, bool::in, var(T)::in,
    io::di, io::uo) is det.

mercury_output_state_var(VarSet, AppendVarnum, Var, !IO) :-
    io.write_string("!", !IO),
    mercury_output_var(VarSet, AppendVarnum, Var, !IO).

    % output a comma-separated list of variables

mercury_output_vars(VarSet, AppendVarnum, Vars, !IO) :-
    mercury_format_vars(VarSet, AppendVarnum, Vars, !IO).

mercury_vars_to_string(VarSet, AppendVarnum, Vars) = String :-
    mercury_format_vars(VarSet, AppendVarnum, Vars, "", String).

:- pred mercury_format_vars(varset(T)::in, bool::in, list(var(T))::in,
    U::di, U::uo) is det <= output(U).

mercury_format_vars(VarSet, AppendVarnum, Vars, !U) :-
    add_list(Vars, ", ", mercury_format_var(VarSet, AppendVarnum), !U).

    % Output a single variable.
    % Variables that didn't have names are given the name "V_<n>"
    % where <n> is there variable id.
    % Variables whose name originally started with `V_' have their
    % name changed to start with `V__' to avoid name clashes.

mercury_output_var(VarSet, AppendVarnum, Var, !IO) :-
    mercury_format_var(VarSet, AppendVarnum, Var, !IO).

mercury_var_to_string(VarSet, AppendVarnum, Var) = String :-
    mercury_format_var(VarSet, AppendVarnum, Var, "", String).

:- pred mercury_format_var(varset(T)::in, bool::in, var(T)::in, U::di, U::uo)
    is det <= output(U).

mercury_format_var(VarSet, AppendVarnum, Var, !U) :-
    (
        varset.search_name(VarSet, Var, Name)
    ->
        mercury_convert_var_name(Name, ConvertedName),
        add_string(ConvertedName, !U),
        (
            AppendVarnum = yes,
            term.var_to_int(Var, VarNum),
            add_string("_", !U),
            add_int(VarNum, !U)
        ;
            AppendVarnum = no
        )
    ;
        term.var_to_int(Var, Id),
        string.int_to_string(Id, Num),
        string.append("V_", Num, VarName),
        add_string(VarName, !U)
    ).

:- pred mercury_format_bracketed_constant(const::in, U::di, U::uo) is det
    <= output(U).

mercury_format_bracketed_constant(Const, !U) :-
    mercury_format_bracketed_constant(Const, not_next_to_graphic_token, !U).

:- pred mercury_format_bracketed_constant(const::in, needs_quotes::in,
    U::di, U::uo) is det <= output(U).

mercury_format_bracketed_constant(Const, NextToGraphicToken, !U) :-
    ( Const = term.atom(Op), mercury_op(Op) ->
        add_string("(", !U),
        add_quoted_atom(Op, !U),
        add_string(")", !U)
    ;
        mercury_format_constant(Const, NextToGraphicToken, !U)
    ).

:- pred mercury_format_constant(const::in, needs_quotes::in,
    U::di, U::uo) is det <= output(U).

mercury_format_constant(Const, NextToGraphicToken, !U) :-
    ( Const = term.atom(Atom) ->
        mercury_format_quoted_atom(Atom, NextToGraphicToken, !U)
    ;
        add_constant(Const, !U)
    ).

:- pred mercury_format_bracketed_atom(string::in, needs_quotes::in,
    U::di, U::uo) is det <= output(U).

mercury_format_bracketed_atom(Name, NextToGraphicToken, !U) :-
    ( mercury_op(Name) ->
        add_string("(", !U),
        add_quoted_atom(Name, !U),
        add_string(")", !U)
    ;
        mercury_format_quoted_atom(Name, NextToGraphicToken, !U)
    ).

    %
    % Use mercury_output_bracketed_sym_name when the sym_name has
    % no arguments, otherwise use mercury_output_sym_name.
    %

:- pred mercury_output_sym_name(sym_name::in, io::di, io::uo) is det.

mercury_output_sym_name(SymName, !IO) :-
    mercury_output_sym_name(SymName, not_next_to_graphic_token, !IO).

:- pred mercury_output_sym_name(sym_name::in, needs_quotes::in,
    io::di, io::uo) is det.

mercury_output_sym_name(Name, NextToGraphicToken, !IO) :-
    mercury_format_sym_name(Name, NextToGraphicToken, !IO).

mercury_output_bracketed_sym_name(SymName, !IO) :-
    mercury_output_bracketed_sym_name(SymName, not_next_to_graphic_token, !IO).

mercury_bracketed_sym_name_to_string(Name) =
    mercury_bracketed_sym_name_to_string(Name, not_next_to_graphic_token).

mercury_output_bracketed_sym_name(Name, NextToGraphicToken, !IO) :-
    mercury_format_bracketed_sym_name(Name, NextToGraphicToken, !IO).

mercury_bracketed_sym_name_to_string(Name, NextToGraphicToken) = Str :-
    mercury_format_bracketed_sym_name(Name, NextToGraphicToken, "", Str).

:- pred mercury_format_bracketed_sym_name(sym_name::in,
    U::di, U::uo) is det <= output(U).

mercury_format_bracketed_sym_name(Name, !U) :-
    mercury_format_bracketed_sym_name(Name, not_next_to_graphic_token, !U).

:- pred mercury_format_bracketed_sym_name(sym_name::in, needs_quotes::in,
    U::di, U::uo) is det <= output(U).

mercury_format_bracketed_sym_name(Name, NextToGraphicToken, !U) :-
    (
        Name = qualified(ModuleName, Name2),
        add_string("(", !U),
        mercury_format_bracketed_sym_name(ModuleName,
            next_to_graphic_token, !U),
        add_string(".", !U),
        mercury_format_bracketed_atom(Name2, next_to_graphic_token, !U),
        add_string(")", !U)
    ;
        Name = unqualified(Name2),
        mercury_format_bracketed_atom(Name2, NextToGraphicToken, !U)
    ).

:- pred mercury_format_sym_name(sym_name::in, U::di, U::uo)
    is det <= output(U).

mercury_format_sym_name(SymName, !U) :-
    mercury_format_sym_name(SymName, not_next_to_graphic_token, !U).

:- pred mercury_format_sym_name(sym_name::in, needs_quotes::in, U::di, U::uo)
    is det <= output(U).

mercury_format_sym_name(Name, NextToGraphicToken, !U) :-
    (
        Name = qualified(ModuleName, PredName),
        mercury_format_bracketed_sym_name(ModuleName,
            next_to_graphic_token, !U),
        add_string(".", !U),
        mercury_format_quoted_atom(PredName, next_to_graphic_token, !U)
    ;
        Name = unqualified(PredName),
        mercury_format_quoted_atom(PredName, NextToGraphicToken, !U)
    ).

:- pred mercury_quote_atom(string::in, needs_quotes::in, io::di, io::uo)
    is det.

mercury_quote_atom(Name, NextToGraphicToken, !IO) :-
    mercury_format_quoted_atom(Name, NextToGraphicToken, !IO).

:- func mercury_quoted_atom_to_string(string, needs_quotes) = string.

mercury_quoted_atom_to_string(Name, NextToGraphicToken) = String :-
    mercury_format_quoted_atom(Name, NextToGraphicToken, "", String).

:- pred mercury_format_quoted_atom(string::in, needs_quotes::in, U::di, U::uo)
    is det <= output(U).

mercury_format_quoted_atom(Name, NextToGraphicToken, !U) :-
    %
    % If the symname is composed of only graphic token chars,
    % then term_io.quote_atom will not quote it; but if
    % it is next another graphic token, it needs to be quoted,
    % otherwise the two would be considered part of one
    % symbol name (e.g. In "int:<", the ":<" parses as one token,
    % so when writing out the "<" after the ":" we need to quote it.
    %
    (
        NextToGraphicToken = next_to_graphic_token,
        string.to_char_list(Name, Chars),
        ( list.member(Char, Chars) => lexer.graphic_token_char(Char) )
    ->
        add_string("'", !U),
        add_escaped_string(Name, !U),
        add_string("'", !U)
    ;
        add_quoted_atom(Name, !U)
    ).

%-----------------------------------------------------------------------------%

    % Predicates to test whether a functor is a Mercury operator

:- pred mercury_op(string::in) is semidet.

mercury_op(Op) :-
    ops.lookup_op(ops.init_mercury_op_table, Op).

:- pred mercury_binary_prefix_op(string::in) is semidet.

mercury_binary_prefix_op(Op) :-
    ops.lookup_binary_prefix_op(ops.init_mercury_op_table, Op, _, _, _).

:- pred mercury_infix_op(string::in) is semidet.

mercury_infix_op(Op) :-
    ops.lookup_infix_op(ops.init_mercury_op_table, Op, _, _, _).

:- pred mercury_unary_prefix_op(string::in) is semidet.

mercury_unary_prefix_op(Op) :-
    ops.lookup_prefix_op(ops.init_mercury_op_table, Op, _, _).

:- pred mercury_unary_postfix_op(string::in) is semidet.

mercury_unary_postfix_op(Op) :-
    ops.lookup_postfix_op(ops.init_mercury_op_table, Op, _, _).

%-----------------------------------------------------------------------------%

    % Convert a Mercury variable into a Mercury variable name.
    % This is tricky because the compiler may introduce new variables
    % who either don't have names at all, or whose names end in
    % some sequence of primes (eg. Var''').
    % We have to be careful that every possible variable
    % is mapped to a distinct name.  Variables without names are
    % given names starting with `V_' followed by a sequence of digits
    % corresponding to their variable id.
    % To ensure that this doesn't clash with any existing names,
    % any variables whose name originally started with `V_' get
    % another `V_' inserted at the start of their name.

    % Compiler's internal name  Converted name
    % ------------------------  --------------
    % none              V_[0-9]*
    % .*'+              V_[0-9]*_.*
    % V_.*              V_V_.*
    % anthing else          same as original name

mercury_convert_var_name(Name, ConvertedName) :-
    ( string.remove_suffix(Name, "'", _) ->
        strip_trailing_primes(Name, StrippedName, NumPrimes),
        string.append("V_", StrippedName, Tmp1),
        string.int_to_string(NumPrimes, NumString),
        string.append(Tmp1, "_", Tmp2),
        string.append(Tmp2, NumString, ConvertedName)
    ; string.prefix(Name, "V_") ->
        string.append("V_", Name, ConvertedName)
    ;
        ConvertedName = Name
    ).

:- pred strip_trailing_primes(string::in, string::out, int::out) is det.

    % XXX This implementation is O(N*N), but it ought to be O(N)

strip_trailing_primes(Name0, Name, Num) :-
    ( string.remove_suffix(Name0, "'", Name1) ->
        strip_trailing_primes(Name1, Name, Num0),
        Num = Num0 + 1
    ;
        Num = 0,
        Name = Name0
    ).

%-----------------------------------------------------------------------------%

:- pred maybe_output_line_number(prog_context::in, io::di, io::uo) is det.

maybe_output_line_number(Context, !IO) :-
    globals.io_lookup_bool_option(line_numbers, LineNumbers, !IO),
    (
        LineNumbers = yes,
        io.write_string("\t% ", !IO),
        prog_out.write_context(Context, !IO),
        io.write_string("\n", !IO)
    ;
        LineNumbers = no
    ).

%-----------------------------------------------------------------------------%

:- pred maybe_unqualify_sym_name(bool::in, sym_name::in, sym_name::out) is det.

maybe_unqualify_sym_name(no, SymName, SymName).
maybe_unqualify_sym_name(yes, SymName, unqualified(unqualify_name(SymName))).

%-----------------------------------------------------------------------------%

:- instance output(io.state) where [
    pred(add_string/3) is io.write_string,
    pred(add_strings/3) is io.write_strings,
    pred(add_char/3) is io.write_char,
    pred(add_int/3) is io.write_int,
    pred(add_float/3) is io.write_float,
    pred(add_purity_prefix/3) is write_purity_prefix,
    pred(add_quoted_atom/3) is term_io.quote_atom,
    pred(add_quoted_string/3) is term_io.quote_string,
    pred(add_constant/3) is term_io.write_constant,
    pred(add_class_id/3) is write_class_id,
    pred(add_eval_method/3) is write_eval_method,
    pred(add_lambda_eval_method/3) is write_lambda_eval_method,
    pred(add_escaped_string/3) is term_io.write_escaped_string,
    pred(add_format/4) is io.format,
    pred(add_list/5) is io.write_list
].

:- instance output(string) where [
    pred(add_string/3) is output_string,
    pred(add_strings/3) is output_strings,
    pred(add_char/3) is output_char,
    pred(add_int/3) is output_int,
    pred(add_float/3) is output_float,
    pred(add_purity_prefix/3) is output_purity_prefix,
    pred(add_quoted_atom/3) is output_quoted_atom,
    pred(add_quoted_string/3) is output_quoted_string,
    pred(add_constant/3) is output_constant,
    pred(add_class_id/3) is output_class_id,
    pred(add_eval_method/3) is output_eval_method,
    pred(add_lambda_eval_method/3) is output_lambda_eval_method,
    pred(add_escaped_string/3) is output_escaped_string,
    pred(add_format/4) is output_format,
    pred(add_list/5) is output_list
].

:- pred write_class_id(class_id::in, io::di, io::uo) is det.

write_class_id(ClassId, !IO) :-
    output_class_id(ClassId, "", ClassIdStr),
    io.write_string(ClassIdStr, !IO).

:- pred write_eval_method(eval_method::in, io::di, io::uo) is det.

write_eval_method(EvalMethod, !IO) :-
    output_eval_method(EvalMethod, "", EvalMethodStr),
    io.write_string(EvalMethodStr, !IO).

:- pred write_lambda_eval_method(lambda_eval_method::in, io::di, io::uo)
    is det.

write_lambda_eval_method(LambdaEvalMethod, !IO) :-
    output_lambda_eval_method(LambdaEvalMethod, "", LambdaEvalMethodStr),
    io.write_string(LambdaEvalMethodStr, !IO).

:- pred output_string(string::in, string::di, string::uo) is det.

output_string(S, Str0, Str) :-
    string.append(Str0, S, Str).

:- pred output_strings(list(string)::in, string::di, string::uo) is det.

output_strings(Strs, Str0, Str) :-
    string.append_list([Str0 | Strs], Str).

:- pred output_char(char::in, string::di, string::uo) is det.

output_char(C, Str0, Str) :-
    string.char_to_string(C, S),
    string.append(Str0, S, Str).

:- pred output_int(int::in, string::di, string::uo) is det.

output_int(I, Str0, Str) :-
    string.int_to_string(I, S),
    string.append(Str0, S, Str).

:- pred output_float(float::in, string::di, string::uo) is det.

output_float(F, Str0, Str) :-
    string.float_to_string(F, S),
    string.append(Str0, S, Str).

:- pred output_purity_prefix(purity::in, string::di, string::uo) is det.

output_purity_prefix(P, Str0, Str) :-
    S = purity_prefix_to_string(P),
    string.append(Str0, S, Str).

:- pred output_quoted_atom(string::in, string::di, string::uo) is det.

output_quoted_atom(A, Str0, Str) :-
    QA = term_io.quoted_atom(A),
    string.append(Str0, QA, Str).

:- pred output_quoted_string(string::in, string::di, string::uo) is det.

output_quoted_string(A, Str0, Str) :-
    QA = term_io.quoted_string(A),
    string.append(Str0, QA, Str).

:- pred output_constant(const::in, string::di, string::uo) is det.

output_constant(C, Str0, Str) :-
    CS = term_io.format_constant(C),
    string.append(Str0, CS, Str).

:- pred output_escaped_string(string::in, string::di, string::uo) is det.

output_escaped_string(S, Str0, Str) :-
    ES = term_io.escaped_string(S),
    string.append(Str0, ES, Str).

:- pred output_class_id(class_id::in, string::di, string::uo) is det.

output_class_id(class_id(Name, Arity), !Str) :-
    output_string("class_id(", !Str),
    mercury_format_sym_name(Name, !Str),
    output_string(", ", !Str),
    output_int(Arity, !Str),
    output_string(")", !Str).

:- pred output_eval_method(eval_method::in, string::di, string::uo) is det.

output_eval_method(EvalMethod, !Str) :-
    output_string("eval_", !Str),
    output_string(eval_method_to_string(EvalMethod), !Str).

:- pred output_lambda_eval_method(lambda_eval_method::in,
    string::di, string::uo) is det.

output_lambda_eval_method(lambda_normal, !Str) :-
    output_string("normal", !Str).

:- pred output_format(string::in, list(io.poly_type)::in,
    string::di, string::uo) is det.

output_format(Format, Items, Str0, Str) :-
    S = string.format(Format, Items),
    string.append(Str0, S, Str).

:- pred output_list(list(T)::in, string::in,
    pred(T, string, string)::in(pred(in, di, uo) is det),
    string::di, string::uo) is det.

output_list([], _, _, !Str).
output_list([Item | Items], Sep, Pred, !Str) :-
    Pred(Item, !Str),
    (
        Items = []
    ;
        Items = [_ | _],
        output_string(Sep, !Str),
        output_list(Items, Sep, Pred, !Str)
    ).

%-----------------------------------------------------------------------------%

% Succeed if the sym_name describes a builtin inst.

:- pred builtin_inst_name(sym_name::in, list(inst_var)::in) is semidet.

builtin_inst_name(unqualified(Name), Args0) :-
    Args1 = list.map(func(V) = variable(coerce_var(V), context_init), Args0),
    Term = term.functor(term.atom(Name), Args1, term.context_init),
    convert_inst(no_allow_constrained_inst_var, Term, Inst),
    Inst \= defined_inst(user_inst(_, _)).

%-----------------------------------------------------------------------------%

    % These predicates are used to print out the termination_info pragmas.
    % If they are changed, then prog_io_pragma.m must also be changed
    % so that it can parse the resulting pragma termination_info
    % declarations.

write_pragma_termination_info(PredOrFunc, SymName, ModeList, Context,
        MaybeArgSize, MaybeTermination, !IO) :-
    io.write_string(":- pragma termination_info(", !IO),
    varset.init(InitVarSet),
    (
        PredOrFunc = pf_predicate,
        mercury_output_pred_mode_subdecl(InitVarSet, SymName,
            ModeList, no, Context, !IO)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(ModeList, FuncModeList, RetMode),
        mercury_output_func_mode_subdecl(InitVarSet, SymName,
            FuncModeList, RetMode, no, Context, !IO)
    ),
    io.write_string(", ", !IO),
    write_maybe_arg_size_info(MaybeArgSize, no, !IO),
    io.write_string(", ", !IO),
    write_maybe_termination_info(MaybeTermination, no, !IO),
    io.write_string(").\n", !IO).

write_maybe_arg_size_info(MaybeArgSizeInfo, Verbose, !IO) :-
    (
        MaybeArgSizeInfo = no,
        io.write_string("not_set", !IO)
    ;
        MaybeArgSizeInfo = yes(infinite(Error)),
        io.write_string("infinite", !IO),
        (
            Verbose = yes,
            io.write_string("(", !IO),
            io.write(Error, !IO),
            io.write_string(")", !IO)
        ;
            Verbose = no
        )
    ;
        MaybeArgSizeInfo = yes(finite(Const, UsedArgs)),
        io.write_string("finite(", !IO),
        io.write_int(Const, !IO),
        io.write_string(", ", !IO),
        write_used_args(UsedArgs, !IO),
        io.write_string(")", !IO)
    ).

:- pred write_used_args(list(bool)::in, io::di, io::uo) is det.

write_used_args([], !IO) :-
    io.write_string("[]", !IO).
write_used_args([UsedArg | UsedArgs], !IO) :-
    io.write_string("[", !IO),
    write_bool(UsedArg, !IO),
    write_used_args_2(UsedArgs, !IO),
    io.write_string("]", !IO).

:- pred write_used_args_2(list(bool)::in, io::di, io::uo) is det.

write_used_args_2([], !IO).
write_used_args_2([ UsedArg | UsedArgs ], !IO) :-
    io.write_string(", ", !IO),
    write_bool(UsedArg, !IO),
    write_used_args_2(UsedArgs, !IO).

:- pred write_bool(bool::in, io::di, io::uo) is det.

write_bool(Bool, !IO) :-
    (
        Bool = no,
        io.write_string("no", !IO)
    ;
        Bool = yes,
        io.write_string("yes", !IO)
    ).

write_maybe_termination_info(MaybeTerminationInfo, Verbose, !IO) :-
    (
        MaybeTerminationInfo = no,
        io.write_string("not_set", !IO)
    ;
        MaybeTerminationInfo = yes(cannot_loop(_)),
        io.write_string("cannot_loop", !IO)
    ;
        MaybeTerminationInfo = yes(can_loop(Error)),
        io.write_string("can_loop", !IO),
        ( Verbose = yes ->
            io.write_string("(", !IO),
            io.write(Error, !IO),
            io.write_string(")", !IO)
        ;
            true
        )
    ).

%-----------------------------------------------------------------------------%
%
% Code to output termination2_info pragmas.
%

:- pred write_pragma_termination2_info(pred_or_func::in, sym_name::in,
    list(mer_mode)::in, maybe(pragma_constr_arg_size_info)::in,
    maybe(pragma_constr_arg_size_info)::in,
    maybe(pragma_termination_info)::in, prog_context::in,
    io::di, io::uo) is det.

write_pragma_termination2_info(PredOrFunc, PredName, ModeList,
        MaybeSuccess, MaybeFailure, MaybeTermination, Context,
        !IO) :-
    io.write_string(":- pragma termination2_info(", !IO),
    (
        PredOrFunc = pf_predicate,
        mercury_output_pred_mode_subdecl(varset.init, PredName,
            ModeList, no, Context, !IO)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(ModeList, FuncModeList, RetMode),
        mercury_output_func_mode_subdecl(varset.init, PredName,
            FuncModeList, RetMode, no, Context, !IO)
    ),
    io.write_string(", ", !IO),
    write_maybe_pragma_constr_arg_size_info(MaybeSuccess, !IO),
    io.write_string(", ", !IO),
    write_maybe_pragma_constr_arg_size_info(MaybeFailure, !IO),
    io.write_string(", ", !IO),
    write_maybe_pragma_termination_info(MaybeTermination, !IO),
    io.write_string(").\n", !IO).

:- pred write_maybe_pragma_constr_arg_size_info(
    maybe(pragma_constr_arg_size_info)::in, io::di, io::uo) is det.

write_maybe_pragma_constr_arg_size_info(no, !IO) :-
    io.write_string("not_set", !IO).
write_maybe_pragma_constr_arg_size_info(yes(ArgSizeInfo), !IO) :-
    io.write_string("constaints(", !IO),
    io.write_char('[', !IO),
    io.write_list(ArgSizeInfo, ", ", write_arg_size_constr, !IO),
    io.write_string("])", !IO).

:- pred write_arg_size_constr(arg_size_constr::in, io::di, io::uo) is det.

write_arg_size_constr(Constraint, !IO) :-
    (
        Constraint = le(Terms, Constant),
        OpStr = "le("
    ;
        Constraint = eq(Terms, Constant),
        OpStr = "eq("
    ),
    io.write_string(OpStr, !IO),
    io.write_char('[', !IO),
    io.write_list(Terms, ", ", write_arg_size_term, !IO),
    io.write_string("], ", !IO),
    rat.write_rat(Constant, !IO),
    io.write_char(')', !IO).

:- pred write_arg_size_term(arg_size_term::in, io::di, io::uo) is det.

write_arg_size_term(VarId - Coefficient, !IO) :-
    io.write_string("term(", !IO),
    io.write_int(VarId, !IO),
    io.write_string(", ", !IO),
    rat.write_rat(Coefficient, !IO),
    io.write_char(')', !IO).

:- pred write_maybe_pragma_termination_info(maybe(pragma_termination_info)::in,
    io::di, io::uo) is det.

write_maybe_pragma_termination_info(no, !IO) :-
    io.write_string("not_set", !IO).
write_maybe_pragma_termination_info(yes(Termination), !IO) :-
    (
        Termination = can_loop(_),
        TerminationStr = "can_loop"
    ;
        Termination = cannot_loop(_),
        TerminationStr = "cannot_loop"
    ),
    io.write_string(TerminationStr, !IO).

%-----------------------------------------------------------------------------%

write_pragma_structure_sharing_info(PredOrFunc, SymName, Modes, Context,
        HeadVars, MaybeVarSet, HeadVarTypes, MaybeTypeVarSet,
        MaybeSharingAs, !IO) :-
    io.write_string(":- pragma structure_sharing(", !IO),
    varset.init(InitVarSet),
    (
        MaybeVarSet = yes(VarSet)
    ;
        MaybeVarSet = no,
        varset.init(VarSet)
    ),
    (
        MaybeTypeVarSet = yes(TypeVarSet)
    ;
        MaybeTypeVarSet = no,
        varset.init(TypeVarSet)
    ),

    (
        PredOrFunc = pf_predicate,
        mercury_output_pred_mode_subdecl(InitVarSet, SymName,
            Modes, no, Context, !IO)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(Modes, FuncModeList, RetMode),
        mercury_output_func_mode_subdecl(InitVarSet, SymName,
            FuncModeList, RetMode, no, Context, !IO)
    ),
    % write headvars and types:
    io.write_string(", ", !IO),
    write_vars_and_types(HeadVars, VarSet, HeadVarTypes, TypeVarSet, !IO),
    % write structure sharing information.
    io.write_string(", ", !IO),
    prog_ctgc.print_interface_structure_sharing_domain(VarSet, TypeVarSet,
        MaybeSharingAs, !IO),
    io.write_string(").\n", !IO).

write_pragma_structure_reuse_info(PredOrFunc, SymName, Modes, Context,
        HeadVars, MaybeVarSet, HeadVarTypes, MaybeTypeVarSet,
        MaybeStructureReuseDomain, !IO) :-
    io.write_string(":- pragma structure_reuse(", !IO),
    varset.init(InitVarSet),
    (
        MaybeVarSet = yes(VarSet)
    ;
        MaybeVarSet = no,
        varset.init(VarSet)
    ),
    (
        MaybeTypeVarSet = yes(TypeVarSet)
    ;
        MaybeTypeVarSet = no,
        varset.init(TypeVarSet)
    ),

    (
        PredOrFunc = pf_predicate,
        mercury_output_pred_mode_subdecl(InitVarSet, SymName,
            Modes, no, Context, !IO)
    ;
        PredOrFunc = pf_function,
        pred_args_to_func_args(Modes, FuncModeList, RetMode),
        mercury_output_func_mode_subdecl(InitVarSet, SymName,
            FuncModeList, RetMode, no, Context, !IO)
    ),
    % write headvars and types:
    io.write_string(", ", !IO),
    write_vars_and_types(HeadVars, VarSet, HeadVarTypes, TypeVarSet, !IO),
    % write structure reuse information.
    io.write_string(", ", !IO),
    prog_ctgc.print_interface_maybe_structure_reuse_domain(VarSet, TypeVarSet,
        MaybeStructureReuseDomain, !IO),
    io.write_string(").\n", !IO).

:- pred write_vars_and_types(prog_vars::in, prog_varset::in,
    list(mer_type)::in, tvarset::in, io::di, io::uo) is det.

write_vars_and_types(HeadVars, VarSet, HeadVarTypes, TypeVarSet, !IO) :-
    (
        HeadVars = [],
        io.write_string("vars, types", !IO)
    ;
        HeadVars = [_ | _],
        io.write_string("vars(", !IO),
        mercury_output_vars(VarSet, no, HeadVars, !IO),
        io.write_string("), ", !IO),

        io.write_string("types(", !IO),
        io.write_list(HeadVarTypes, ",", mercury_output_type(TypeVarSet, no),
            !IO),
        io.write_string(")", !IO)
    ).

:- pred write_type_of_var(vartypes::in, tvarset::in, prog_var::in,
    io::di, io::uo) is det.

write_type_of_var(VarTypes, TypeVarSet, Var, !IO):-
    map.lookup(VarTypes, Var, VarType),
    mercury_output_type(TypeVarSet, no, VarType, !IO).

%---------------------------------------------------------------------------%

:- func this_file = string.

this_file = "mercury_to_mercury.m".

%-----------------------------------------------------------------------------%
:- end_module mercury_to_mercury.
%-----------------------------------------------------------------------------%
