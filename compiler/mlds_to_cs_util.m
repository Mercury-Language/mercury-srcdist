%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 2010-2012 The University of Melbourne.
% Copyright (C) 2013-2018 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% Utility services required by the other mlds_to_cs_*.m modules.
%
%---------------------------------------------------------------------------%

:- module ml_backend.mlds_to_cs_util.
:- interface.

:- import_module hlds.
:- import_module hlds.hlds_module.
:- import_module ml_backend.mlds.
:- import_module ml_backend.mlds_to_target_util.
:- import_module parse_tree.
:- import_module parse_tree.prog_data.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module map.

%---------------------------------------------------------------------------%

    % Keep the enum fields together, so they can be packed into one word.
:- type csharp_out_info
    --->    csharp_out_info(
                % These are static.
                csoi_module_info            :: module_info,
                csoi_auto_comments          :: bool,
                csoi_line_numbers           :: bool,
                csoi_foreign_line_numbers   :: bool,
                csoi_module_name            :: mlds_module_name,
                csoi_source_filename        :: string,
                csoi_code_addrs             :: map(mlds_code_addr, string),

                % These are dynamic.
                csoi_output_generics        :: output_generics,
                csoi_break_context          :: break_context,
                csoi_univ_tvars             :: list(tvar)
            ).

:- func init_csharp_out_info(module_info, string, map(mlds_code_addr, string))
    = csharp_out_info.

%---------------------------------------------------------------------------%

:- pred cs_output_context(bool::in, prog_context::in,
    io::di, io::uo) is det.

:- pred indent_line_after_context(bool::in, prog_context::in,
    indent::in, io::di, io::uo) is det.

:- pred cs_output_default_context(bool::in, io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- pred maybe_output_comment_for_csharp(csharp_out_info::in, string::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

:- pred output_pragma_warning_disable(io::di, io::uo) is det.

:- pred output_pragma_warning_restore(io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module mdbcomp.
:- import_module mdbcomp.sym_name.

:- import_module int.
:- import_module string.
:- import_module term.

%---------------------------------------------------------------------------%

init_csharp_out_info(ModuleInfo, SourceFileName, CodeAddrs) = Info :-
    module_info_get_globals(ModuleInfo, Globals),
    globals.lookup_bool_option(Globals, auto_comments, AutoComments),
    globals.lookup_bool_option(Globals, line_numbers, LineNumbers),
    globals.lookup_bool_option(Globals, line_numbers_around_foreign_code,
        ForeignLineNumbers),
    module_info_get_name(ModuleInfo, ModuleName),
    MLDS_ModuleName = mercury_module_name_to_mlds(ModuleName),
    Info = csharp_out_info(ModuleInfo, AutoComments,
        LineNumbers, ForeignLineNumbers, MLDS_ModuleName, SourceFileName,
        CodeAddrs, do_not_output_generics,  bc_none, []).

%---------------------------------------------------------------------------%

cs_output_context(OutputLineNumbers, Context, !IO) :-
    (
        OutputLineNumbers = yes,
        Context = term.context(File, Line),
        ( if
            Line > 0,
            File \= ""
        then
            io.format("#line %d ""%s""\n", [i(Line), s(File)], !IO)
        else
            true
        )
    ;
        OutputLineNumbers = no
    ).

indent_line_after_context(OutputLineNumbers, Context, N, !IO) :-
    cs_output_context(OutputLineNumbers, Context, !IO),
    output_n_indents(N, !IO).

cs_output_default_context(OutputLineNumbers, !IO) :-
    (
        OutputLineNumbers = yes,
        io.write_string("#line default\n", !IO)
    ;
        OutputLineNumbers = no
    ).

%---------------------------------------------------------------------------%

maybe_output_comment_for_csharp(Info, Comment, !IO) :-
    AutoComments = Info ^ csoi_auto_comments,
    (
        AutoComments = yes,
        io.write_string("/* ", !IO),
        io.write_string(Comment, !IO),
        io.write_string(" */", !IO)
    ;
        AutoComments = no
    ).

%---------------------------------------------------------------------------%

output_pragma_warning_disable(!IO) :-
    % CS0162: Unreachable code detected.
    % CS0168: The variable `foo' is declared but never used.
    % CS0169: The private method `foo' is never used.
    % CS0219: The variable `foo' is assigned but its value is never used.
    % CS1717: Assignment made to same variable.
    io.write_string("#pragma warning disable 162, 168, 169, 219, 1717\n", !IO).

output_pragma_warning_restore(!IO) :-
    io.write_string("#pragma warning restore\n", !IO).

%---------------------------------------------------------------------------%
:- end_module ml_backend.mlds_to_cs_util.
%---------------------------------------------------------------------------%
