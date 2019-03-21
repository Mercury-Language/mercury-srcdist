%---------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%---------------------------------------------------------------------------%
% Copyright (C) 1999-2007, 2011 The University of Melbourne.
% Copyright (C) 2015-2018 The Mercury team.
% This file is distributed under the terms specified in COPYING.LIB.
%---------------------------------------------------------------------------%
%
% File: interactive_query.m.
% Author: fjh.
%
% A module to invoke interactive queries using dynamic linking.
%
% This module reads in a query, writes out Mercury code for it to the file
% `mdb_query.m', invokes the Mercury compiler mmc to compile that file to
% `libmdb_query.{so,dylib}', dynamically loads in the object code for the
% module `mdb_query' from the file `libmdb_query.{so,dylib}', looks up the
% address of the procedure query/2 in that module, calls that procedure, and
% then cleans up the generated files.
%
%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- module mdb.interactive_query.
:- interface.

:- import_module io.
:- import_module list.
:- import_module univ.

%---------------------------------------------------------------------------%

    % query(QueryType, Imports, Options, Names, Values, MdbStdin, MdbStdout)
    %
    % Start the query loop for the given query type. Imports is the list of
    % modules to import, Options is the string of additional options to pass
    % to mmc for compiling the generated code, Names and Values are the
    % corresponding lists of variable names and values in the current
    % environment, and MdbStdin and MdbStdout are the input and output
    % streams to use.
    %
:- pred query(query_type::in, imports::in, options_string::in,
    list(string)::in, list(univ)::in,
    io.input_stream::in, io.output_stream::in, io::di, io::uo) is cc_multi.

    % query_external/9 is the same as query/9 but for the use
    % of the external debugger.
    %
:- pred query_external(query_type::in, imports::in, options_string::in,
    list(string)::in, list(univ)::in,
    io.input_stream::in, io.output_stream::in, io::di, io::uo) is cc_multi.

:- type query_type
    --->    normal_query
    ;       cc_query
    ;       io_query.

:- type imports == list(string).
:- type options_string == string.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module mdb.dl.
:- import_module mdb.name_mangle.
:- import_module mdb.util.

:- import_module bool.
:- import_module exception.
:- import_module map.
:- import_module maybe.
:- import_module parser.
:- import_module string.
:- import_module term.
:- import_module term_io.
:- import_module type_desc.
:- import_module varset.

%---------------------------------------------------------------------------%

:- type query_env
    --->    query_env(
                qe_query_type       :: query_type,
                qe_imports          :: imports,
                qe_options          :: options_string,
                qe_bindings         :: bindings,
                qe_in               :: io.input_stream,
                qe_out              :: io.output_stream
            ).

:- type bindings == map(string, univ).

:- pragma foreign_export("C", query(in, in, in, in, in, in, in, di, uo),
    "ML_query").

query(QueryType, Imports, Options, Names, Values, MdbStdin, MdbStdout, !IO) :-
    % write_import_list(Imports),
    map.from_corresponding_lists(Names, Values, Bindings),
    Env = query_env(QueryType, Imports, Options, Bindings,
        MdbStdin, MdbStdout),
    query_2(Env, !IO).

:- pred query_2(query_env::in, io::di, io::uo) is cc_multi.

query_2(Env, !IO) :-
    Prompt = query_prompt(Env ^ qe_query_type),
    util.trace_getline(Prompt, Result, Env ^ qe_in, Env ^ qe_out, !IO),
    (
        Result = eof,
        io.nl(Env ^ qe_out, !IO)
    ;
        Result = error(Error),
        io.error_message(Error, Msg),
        io.write_string(Env ^ qe_out, Msg, !IO),
        io.nl(Env ^ qe_out, !IO),
        query_2(Env, !IO)
    ;
        Result = ok(Line),
        parser.read_term_from_string("", Line, _, ReadTerm),
        query_3(Env, ReadTerm, !IO)
    ).

:- pred query_3(query_env::in, read_term(generic)::in, io::di, io::uo)
    is cc_multi.

query_3(Env, ReadTerm, !IO) :-
    (
        ReadTerm = eof,
        io.nl(Env ^ qe_out, !IO)
    ;
        ReadTerm = error(Msg, _Line),
        io.write_string(Env ^ qe_out, Msg, !IO),
        io.nl(Env ^ qe_out, !IO),
        query_2(Env, !IO)
    ;
        ReadTerm = term(Varset, Term),
        % io.write_string("Read term: "),
        % term_io.write_term(Term, Varset),
        % io.write_string("\n"),
        parse_query_command(Term, Cmd),
        (
            Cmd = qc_quit,
            io.nl(Env ^ qe_out, !IO)
        ;
            Cmd = qc_options(NewOptions),
            print(Env ^ qe_out, "Compilation options: ", !IO),
            print(Env ^ qe_out, NewOptions, !IO),
            io.nl(Env ^ qe_out, !IO),
            Env1 = Env ^ qe_options := NewOptions,
            query_2(Env1, !IO)
        ;
            Cmd = qc_imports(AddedImports),
            Imports = (Env ^ qe_imports) ++ AddedImports,
            Env1 = Env ^ qe_imports := Imports,
            write_import_list(Env ^ qe_out, Imports, !IO),
            query_2(Env1, !IO)
        ;
            Cmd = qc_goal,
            % The flush ensures that all output generated by the debugger
            % up to this point appears in the output stream before any messages
            % generated by the compilation of the query, which is done
            % by another process.
            io.flush_output(Env ^ qe_out, !IO),
            run_query(Env, Term, Varset, !IO),
            query_2(Env, !IO)
        )
    ).

    % interactive_query_response is type of the terms sent to the socket
    % during an interactive query session under the control of the
    % external debugger.

:- type interactive_query_response
    --->    iq_ok
    ;       iq_imported(imports)
    ;       iq_quit
    ;       iq_eof
    ;       iq_error(string).

:- pragma foreign_export("C",
    query_external(in, in, in, in, in, in, in, di, uo),
    "ML_query_external").

query_external(QueryType, Imports, Options, Names, Values, SocketIn, SocketOut,
        !IO) :-
    map.from_corresponding_lists(Names, Values, Bindings),
    Env = query_env(QueryType, Imports, Options, Bindings,
        SocketIn, SocketOut),
    query_external_2(Env, !IO).

:- pred query_external_2(query_env::in, io::di, io::uo) is cc_multi.

query_external_2(Env, !IO) :-
    io.set_input_stream(Env ^ qe_in, OldInputStream, !IO),
    term_io.read_term(Result, !IO),
    io.set_input_stream(OldInputStream, _, !IO),
    (
        Result = eof,
        send_term_to_socket(iq_eof, Env ^ qe_out, !IO)
    ;
        Result = error(ErrorMsg, _Line),
        send_term_to_socket(iq_error(ErrorMsg), Env ^ qe_out, !IO),
        query_external_2(Env, !IO)
    ;
        Result = term(Varset, Term),
        parse_query_command(Term, Cmd),
        (
            Cmd = qc_quit,
            send_term_to_socket(iq_quit, Env ^ qe_out, !IO)
        ;
            Cmd = qc_options(NewOptions),
            send_term_to_socket(iq_ok, Env ^ qe_out, !IO),
            Env1 = Env ^ qe_options := NewOptions,
            query_external_2(Env1, !IO)
        ;
            Cmd = qc_imports(AddedImports),
            Imports = (Env ^ qe_imports) ++ AddedImports,
            Env1 = Env ^ qe_imports := Imports,
            send_term_to_socket(iq_imported(Imports), Env ^ qe_out, !IO),
            query_external_2(Env1, !IO)
        ;
            Cmd = qc_goal,
            run_query(Env, Term, Varset, !IO),
            send_term_to_socket(iq_ok, Env ^ qe_out, !IO),
            query_external_2(Env, !IO)
        )
    ).

:- pred send_term_to_socket(interactive_query_response::in,
    io.output_stream::in, io::di, io::uo) is det.

send_term_to_socket(Term, SocketStream, !IO) :-
    io.write(SocketStream, Term, !IO),
    io.write_string(SocketStream, ".\n", !IO),
    flush_output(SocketStream, !IO).

:- func query_prompt(query_type) = string.

query_prompt(normal_query) = "?- ".
query_prompt(cc_query) = "?- ".
query_prompt(io_query) = "run <-- ".

:- type query_command
    --->    qc_quit
    ;       qc_options(string)
    ;       qc_imports(imports)
    ;       qc_goal.

:- pred parse_query_command(term::in, query_command::out) is det.

parse_query_command(Term, Cmd) :-
    ( if
        Term = term.functor(term.atom("quit"), [], _)
    then
        Cmd = qc_quit
    else if
        Term = term.functor(term.atom("options"), [Subterm], _),
        Subterm = term.functor(term.string(Options), [], _)
    then
        Cmd = qc_options(Options)
    else if
        term_to_list(Term, Imports)
    then
        Cmd = qc_imports(Imports)
    else
        Cmd = qc_goal
    ).

:- pred term_to_list(term::in, list(string)::out) is semidet.

term_to_list(term.functor(term.atom("[]"), [], _), []).
term_to_list(term.functor(term.atom("[|]"),
        [term.functor(term.atom(Module), [], _C1), Rest], _C2),
        [Module | Modules]) :-
    term_to_list(Rest, Modules).

:- pred run_query(query_env::in, term::in, varset::in, io::di, io::uo)
    is cc_multi.

run_query(Env, Goal, Varset, !IO) :-
    SourceFile = query_module_name ++ ".m",
    io.get_environment_var("MERCURY_OPTIONS", MaybeMercuryOptions, !IO),
    (
        MaybeMercuryOptions = yes(MercuryOptions),
        io.set_environment_var("MERCURY_OPTIONS", "", !IO),
        make_program(Env, Goal, Varset, Program),
        write_prog_to_file(Program, SourceFile, !IO),
        compile_file(Env ^ qe_options, Succeeded, !IO),
        (
            Succeeded = yes,
            dynamically_load_and_run(Program, !IO)
        ;
            Succeeded = no
        ),
        cleanup_query(Env ^ qe_options, !IO),
        io.set_environment_var("MERCURY_OPTIONS", MercuryOptions, !IO)
    ;
        MaybeMercuryOptions = no,
        io.write_string("Unable to unset MERCURY_OPTIONS environment variable",
            !IO)
    ).

%---------------------------------------------------------------------------%
%
% Print the program to a file.
%
% For normal queries we generate programs as follows, assuming input variables
% A:int and B:float and output variables X, Y and Z. (The types of the latter
% will be inferred.)
%
%   :- module mdb_query.
%   :- interface.
%
%   :- import_module bool.
%   :- import_module map.
%   :- import_module univ.
%
%   :- pred run(map(string, univ)::in, map(string, univ)::out, bool::out)
%       is nondet.
%
%   :- implementation.
%
%   run(!Bindings, Loaded) :-
%       ( if
%           univ.univ_to_type(!.Bindings ^ elem("A"), A),
%           univ.univ_to_type(!.Bindings ^ elem("B"), B),
%           true
%       then
%           mdb_query.query(inputs(A, B), X, Y, Z),
%           map.set("X", univ.univ(X), !Bindings),
%           map.set("Y", univ.univ(Y), !Bindings),
%           map.set("Z", univ.univ(Z), !Bindings),
%           Loaded = yes
%       else
%           Loaded = no
%       ).
%
%   :- type inputs ---> inputs(int, float).
%
%   :- pragma source_file("<<stdin>>").
%   #1
%   ... user imports ...
%   #1
%   :- mode query(in, out, out, out) is nondet.
%   #1
%   query(inputs(A, B), X, Y, Z) :-
%   #1
%       ( ... user query term ... ).
%
% For cc queries we do the same, except that run and query have determinism
% cc_nondet instead of nondet.
%
% For io queries, the io state is threaded through run and query, and the
% latter is defined using a DCG-rule. The determinism is cc_multi.
%

:- type prog
    --->    prog(
                prog_query_type     :: query_type,
                prog_imports        :: imports,
                prog_bindings       :: bindings,
                prog_inputs         :: list(string),
                prog_outputs        :: list(string),
                prog_goal           :: term,
                prog_varset         :: varset
            ).

:- pred make_program(query_env::in, term::in, varset::in, prog::out) is det.

make_program(Env, Goal, Varset, Program) :-
    QueryType = Env ^ qe_query_type,
    term.vars(Goal, Vars0),
    list.remove_dups(Vars0, Vars1),
    list.filter_map(varset.search_name(Varset), Vars1, Vars),
    list.filter(map.contains(Env ^ qe_bindings), Vars, Inputs, Outputs0),
    (
        ( QueryType = normal_query
        ; QueryType = cc_query
        ),
        list.filter((pred(S::in) is semidet :- not string.index(S, 0, '_')),
            Outputs0, Outputs)
    ;
        QueryType = io_query,
        Outputs = []
    ),
    Program = prog(QueryType, Env ^ qe_imports, Env ^ qe_bindings,
        Inputs, Outputs, Goal, Varset).

:- pred write_prog_to_file(prog::in, string::in, io::di, io::uo) is det.

write_prog_to_file(Program, FileName, !IO) :-
    open_output_file(FileName, Stream, !IO),
    io.set_output_stream(Stream, OldStream, !IO),
    write_prog_to_stream(Program, !IO),
    io.set_output_stream(OldStream, _, !IO),
    io.close_output(Stream, !IO).

:- pred open_output_file(string::in, io.output_stream::out,
    io::di, io::uo) is det.

open_output_file(File, Stream, !IO) :-
    io.open_output(File, Result, !IO),
    (
        Result = ok(Stream0),
        Stream = Stream0
    ;
        Result = error(Error),
        io.progname("interactive", Progname, !IO),
        io.error_message(Error, ErrorMessage),
        string.append_list([
            Progname, ": ",
            "error opening file `", File, "' for output:\n\t",
            ErrorMessage, "\n"],
            Message),
        io.write_string(Message, !IO),
        % XXX we really ought to throw an exception here;
        %     instead, we just return a bogus stream (stdout)
        io.stdout_stream(Stream, !IO)
    ).

:- pred write_prog_to_stream(prog::in, io::di, io::uo) is det.

write_prog_to_stream(Prog, !IO) :-
    Prog = prog(QueryType, Imports, Bindings, Inputs, Outputs, Goal, Varset),
    io.write_strings([
        ":- module mdb_query.\n",
        ":- interface.\n",
        "\n",
        ":- import_module bool.\n",
        query_type_extra_imports(QueryType),
        ":- import_module map.\n",
        ":- import_module univ.\n",
        "\n",
        ":- pred run(map(string, univ)::in, map(string, univ)::out,\n",
        "   bool::out", query_type_extra_decls(QueryType),
        ") is ", query_type_detism(QueryType), ".\n",
        "\n",
        ":- implementation.\n",
        "\n",
        "run(!Bindings, Loaded", query_type_extra_args(QueryType), ") :-\n",
        "   ( if\n"
    ], !IO),
    list.foldl(write_cast_goal, Inputs, !IO),
    io.write_strings([
        "       true\n",
        "   then\n",
        "       ", query_module_name, ".query(inputs"
    ], !IO),
    write_args(Inputs, !IO),
    list.foldl(write_comma_var, Outputs, !IO),
    io.write_strings([query_type_extra_args(QueryType), "),\n"], !IO),
    list.foldl(write_set_goal, Outputs, !IO),
    io.write_strings([
        "       Loaded = yes\n",
        "   else\n",
        "       Loaded = no\n",
        "   ).\n",
        "\n",
        ":- type inputs ---> inputs"
    ], !IO),
    write_arg_types(Bindings, Inputs, !IO),
    io.write_strings([".\n",
        "\n",
        ":- pragma source_file(""<stdin>"").\n",
        "#1\n"
    ], !IO),
    io.output_stream(Out, !IO),
    write_import_list(Out, Imports, !IO),
    io.write_strings([
        "#1\n",
        ":- mode query(in"
    ], !IO),
    list.foldl((pred(_::in, di, uo) is det --> io.write_string(", out")),
        Outputs, !IO),
    io.write_strings([
        query_type_extra_modes(QueryType),
        ") is ", query_type_detism(QueryType), ".\n",
        "#1\n",
        "query(inputs"
    ], !IO),
    write_args(Inputs, !IO),
    list.foldl(write_comma_var, Outputs, !IO),
    io.write_strings([") ", query_type_rule(QueryType)], !IO),
    write_line_directive(!IO),
    io.write_string("   ( ", !IO),
    term_io.write_term(Varset, Goal, !IO),
    io.write_string(" ).\n", !IO).

:- func query_type_detism(query_type) = string.

query_type_detism(normal_query)         = "nondet".
query_type_detism(cc_query)             = "cc_nondet".
query_type_detism(io_query)             = "cc_multi".

:- func query_type_extra_imports(query_type) = string.

query_type_extra_imports(normal_query)  = "".
query_type_extra_imports(cc_query)      = "".
query_type_extra_imports(io_query)      = ":- import_module io.\n".

:- func query_type_extra_decls(query_type) = string.

query_type_extra_decls(normal_query)    = "".
query_type_extra_decls(cc_query)        = "".
query_type_extra_decls(io_query)        = ", io::di, io::uo".

:- func query_type_extra_modes(query_type) = string.

query_type_extra_modes(normal_query)    = "".
query_type_extra_modes(cc_query)        = "".
query_type_extra_modes(io_query)        = ", di, uo".

:- func query_type_extra_args(query_type) = string.

query_type_extra_args(normal_query)     = "".
query_type_extra_args(cc_query)         = "".
query_type_extra_args(io_query)         = ", !IO".

:- func query_type_rule(query_type) = string.

query_type_rule(normal_query)           = ":-".
query_type_rule(cc_query)               = ":-".
query_type_rule(io_query)               = "-->".

:- pred write_cast_goal(string::in, io::di, io::uo) is det.

write_cast_goal(Var, !IO) :-
    io.write_strings([
        "       univ.univ_to_type(!.Bindings ^ elem(""", Var, """), ",
        Var, "),\n"
    ], !IO).

:- pred write_set_goal(string::in, io::di, io::uo) is det.

write_set_goal(Var, !IO) :-
    io.write_strings([
        "       map.set(""", Var, """, univ.univ(", Var, "), !Bindings),\n"
    ], !IO).

:- pred write_line_directive(io::di, io::uo) is det.

write_line_directive(!IO) :-
    io.write_string("\n#", !IO),
    io.get_line_number(LineNum, !IO),
    io.write_int(LineNum, !IO),
    io.nl(!IO).

:- pred write_arg_types(bindings::in, list(string)::in, io::di, io::uo) is det.

write_arg_types(Bindings, Vars, !IO) :-
    (
        Vars = [_ | _],
        io.write_string("(", !IO),
        io.write_list(Vars, ", ", write_var_type(Bindings), !IO),
        io.write_string(")", !IO)
    ;
        Vars = []
    ).

:- pred write_var_type(bindings::in, string::in, io::di, io::uo)
    is det.

write_var_type(Bindings, Var, !IO) :-
    map.lookup(Bindings, Var, Univ),
    io.write_string(type_name(type_of(univ_value(Univ))), !IO).

:- pred write_args(list(string)::in, io::di, io::uo) is det.

write_args(Vars, !IO) :-
    (
        Vars = [_ | _],
        io.write_string("(", !IO),
        io.write_list(Vars, ", ", io.write_string, !IO),
        io.write_string(")", !IO)
    ;
        Vars = []
    ).

:- pred write_comma_var(string::in, io::di, io::uo) is det.

write_comma_var(Var, !IO) :-
    io.write_string(", ", !IO),
    io.write_string(Var, !IO).

:- pred write_import_list(io.output_stream::in, imports::in,
    io::di, io::uo) is det.

write_import_list(Out, Imports, !IO) :-
    (
        Imports = []
    ;
        Imports = [_ | _],
        io.write_string(Out, ":- import_module ", !IO),
        io.write_list(Out, Imports, ", ", term_io.quote_atom, !IO),
        io.write_string(Out, ".\n", !IO)
    ).

%---------------------------------------------------------------------------%

    % Invoke the Mercury compile to compile the file to a shared object.
    %
:- pred compile_file(options_string::in, bool::out, io::di, io::uo) is det.

compile_file(Options, Succeeded, !IO) :-
    % We use the following options:
    %   --grade
    %       make sure the grade of libmdb_query.so matches the
    %       grade of the executable it will be linked against
    %   --infer-all
    %       for inferring the type etc. of query/N
    %   -O0 --no-c-optimize
    %       to improve compilation speed
    %   --no-verbose-make
    %       don't show which files are being made
    %   --output-compile-error-lines 10000
    %       output all errors
    %   --no-warn-det-decls-too-lax
    %   --no-warn-simple-code
    %       to avoid spurious warnings in the automatically
    %       generated parts of the query predicate
    %   --allow-undefined
    %       needed to allow the query to reference
    %       symbols defined in the program
    %
    string.append_list([
        "mmc --infer-all --no-verbose-make -O0 --no-c-optimize ",
        "--no-warn-simple-code --no-warn-det-decls-too-lax ",
        "--output-compile-error-lines 10000 ",
        "--allow-undefined ", Options,
        " --grade ", grade_option,
        " --compile-to-shared-lib ",
        query_module_name],
        Command),
    invoke_system_command(Command, Succeeded, !IO).

:- pred cleanup_query(string::in, io::di, io::uo) is det.

cleanup_query(_Options) -->
    cleanup_file("", ".m"),
    cleanup_file("", ".mh"),
    cleanup_file("", ".d"),
    cleanup_file("Mercury/ds/", ".d"),
    cleanup_file("", ".c"),
    cleanup_file("Mercury/cs/", ".c"),
    cleanup_file("", ".c_date"),
    cleanup_file("Mercury/c_dates/", ".c_date"),
    cleanup_file("", ".o"),
    cleanup_file("Mercury/os/", ".o"),
    cleanup_file("", ".pic_o"),
    cleanup_file("Mercury/os/", ".pic_o"),
    cleanup_file("lib", ".so").

:- pred cleanup_file(string::in, string::in, io::di, io::uo) is det.

cleanup_file(Prefix, Suffix, !IO) :-
    io.remove_file(Prefix ++ query_module_name ++ Suffix, _, !IO).

    % `grade_option' returns MR_GRADE_OPT, which is defined in
    % runtime/mercury_grade.h. This is a string containing the grade
    % that the current executable was compiled in, in a form suitable for
    % passing as a `--grade' option to mmc or ml.
    %
:- func grade_option = string.

:- pragma foreign_decl("C", "
    #include ""mercury_grade.h""
    #include ""mercury_string.h""
").
:- pragma foreign_proc("C",
    grade_option = (GradeOpt::out),
    [promise_pure, thread_safe, will_not_call_mercury],
"
    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);
").

grade_option = _ :-
    private_builtin.sorry("grade_option").

:- func verbose = bool.

verbose = no.

:- pred invoke_system_command(string::in, bool::out, io::di, io::uo) is det.

invoke_system_command(Command, Succeeded, !IO) :-
    ( if verbose = yes then
        io.format("%% Invoking system command `%s'...\n", [s(Command)], !IO),
        io.flush_output(!IO)
    else
        true
    ),
    io.call_system(Command, Result, !IO),
    (
        Result = ok(Status),
        ( if Status = 0 then
            ( if verbose = yes then
                io.write_string("% done.\n", !IO)
            else
                true
            ),
            Succeeded = yes
        else
            io.write_string("Compilation error(s) occurred.\n", !IO),
            Succeeded = no
        )
    ;
        Result = error(_),
        io.write_string("Error: unable to invoke the compiler.\n", !IO),
        Succeeded = no
    ).

%---------------------------------------------------------------------------%

:- func query_module_name = string.

query_module_name = "mdb_query".

    % Dynamically load the shared object and execute the query.
    %
:- pred dynamically_load_and_run(prog::in, io::di, io::uo) is cc_multi.

dynamically_load_and_run(Program, !IO) :-
    % Load in the object code for the module `query' from
    % the file `libmdb_query.{so,dylib}'.
    Filename = "./lib" ++ query_module_name ++ shlib_extension,
    dl.open(Filename, lazy, scope_local, MaybeHandle, !IO),
    (
        MaybeHandle = dl_error(Msg),
        io.format("dlopen failed: %s\n", [s(Msg)], !IO)
    ;
        MaybeHandle = dl_ok(Handle),
        QueryType = Program ^ prog_query_type,
        Bindings = Program ^ prog_bindings,
        Outputs = Program ^ prog_outputs,
        (
            QueryType = normal_query,
            link_and_run_normal(Bindings, Outputs, Handle, !IO)
        ;
            QueryType = cc_query,
            link_and_run_cc(Bindings, Outputs, Handle, !IO)
        ;
            QueryType = io_query,
            link_and_run_io(Bindings, Outputs, Handle, !IO)
        ),
        % Unload the object code in the libmdb_query.{so,dylib} file.
        dl.close(Handle, Result, !IO),
        (
            Result = dl_error(CloseMsg),
            io.format("dlclose failed: %s\n", [s(CloseMsg)], !IO)
        ;
            Result = dl_ok
        )
    ).

:- pred link_and_run_normal(bindings::in, list(string)::in, handle::in,
    io::di, io::uo) is cc_multi.

link_and_run_normal(Bindings, Outputs, Handle, !IO) :-
    get_query_closure(3, Handle, MaybeQuery, !IO),
    (
        MaybeQuery = dl_error(Msg),
        io.write_strings(["dlsym failed: ", Msg, "\n"], !IO)
    ;
        MaybeQuery = dl_ok(QueryPred),
        exception.try_all(call_run_normal(QueryPred, Bindings),
            MaybeExcp, Solutions),
        list.foldl(write_solution(Outputs, "true ;"), Solutions, !IO),
        (
            MaybeExcp = yes(Excp),
            report_exception(univ_value(Excp), !IO)
        ;
            MaybeExcp = no,
            io.write_string("fail.\n", !IO)
        ),
        io.write_string("No (more) solutions.\n", !IO)
    ).

:- type run_normal_pred == pred(bindings, bindings, bool).
:- inst run_normal_pred == (pred(in, out, out) is nondet).

:- pred call_run_normal(run_normal_pred::in, bindings::in, solution::out)
    is nondet.

call_run_normal(QueryPred0, Bindings0, Solution) :-
    QueryPred = inst_cast_normal(QueryPred0),
    QueryPred(Bindings0, Bindings, Loaded),
    (
        Loaded = no,
        Solution = load_failure
    ;
        Loaded = yes,
        Solution = solution(Bindings)
    ).

:- pred link_and_run_cc(bindings::in, list(string)::in, handle::in,
    io::di, io::uo) is cc_multi.

link_and_run_cc(Bindings, Outputs, Handle, !IO) :-
    get_query_closure(3, Handle, MaybeQuery, !IO),
    (
        MaybeQuery = dl_error(Msg),
        io.write_strings(["dlsym failed: ", Msg, "\n"], !IO)
    ;
        MaybeQuery = dl_ok(QueryPred),
        exception.try(call_run_cc(QueryPred, Bindings), Result),
        (
            Result = succeeded(Solution),
            write_solution(Outputs, "true.", Solution, !IO)
        ;
            Result = failed,
            io.write_string("No solution.\n", !IO)
        ;
            Result = exception(Excp),
            report_exception(univ_value(Excp), !IO)
        )
    ).

:- type run_cc_pred == pred(bindings, bindings, bool).
:- inst run_cc_pred == (pred(in, out, out) is cc_nondet).

:- pred call_run_cc(run_cc_pred::in, bindings::in, solution::out) is cc_nondet.

call_run_cc(QueryPred0, Bindings0, Solution) :-
    QueryPred = inst_cast_cc(QueryPred0),
    QueryPred(Bindings0, Bindings, Loaded),
    (
        Loaded = no,
        Solution = load_failure
    ;
        Loaded = yes,
        Solution = solution(Bindings)
    ).

:- pred link_and_run_io(bindings::in, list(string)::in, handle::in,
    io::di, io::uo) is cc_multi.

link_and_run_io(Bindings, _Outputs, Handle, !IO) :-
    get_query_closure(5, Handle, MaybeQuery, !IO),
    (
        MaybeQuery = dl_error(Msg),
        io.write_strings(["dlsym failed: ", Msg, "\n"], !IO)
    ;
        MaybeQuery = dl_ok(QueryPred),
        exception.try_io(call_run_io(QueryPred, Bindings), Result, !IO),
        (
            Result = succeeded(_)
        ;
            Result = exception(Excp),
            report_exception(univ_value(Excp), !IO)
        )
    ).

:- type run_io_pred == pred(bindings, bindings, bool, io, io).
:- inst run_io_pred == (pred(in, out, out, di, uo) is cc_multi).

:- pred call_run_io(run_io_pred::in, bindings::in, solution::out,
    io::di, io::uo) is cc_multi.

call_run_io(QueryPred0, Bindings0, Solution, !IO) :-
    QueryPred = inst_cast_io(QueryPred0),
    QueryPred(Bindings0, Bindings, Loaded, !IO),
    (
        Loaded = no,
        Solution = load_failure
    ;
        Loaded = yes,
        Solution = solution(Bindings)
    ).

:- pred get_query_closure(int::in, handle::in, dl_result(T)::out,
    io::di, io::uo) is det.

get_query_closure(Arity, Handle, Result, !IO) :-
    %
    % Look up the address of the first mode (mode number 0)
    % of the predicate run with the given arity in the mdb_query module.
    %
    QueryProc = mercury_proc(predicate, unqualified(query_module_name),
        "run", Arity, 0),
    dl.mercury_sym(Handle, QueryProc, Result, !IO).

:- type solution
    --->    load_failure
    ;       solution(bindings).

:- pred write_solution(list(string)::in, string::in, solution::in,
    io::di, io::uo) is cc_multi.

write_solution(Outputs, End, Solution, !IO) :-
    (
        Solution = load_failure,
        io.write_string("Error loading some variables.\n", !IO)
    ;
        Solution = solution(Bindings),
        list.foldl(write_binding(Bindings), Outputs, !IO),
        io.write_string(End, !IO),
        io.write_string("\n", !IO)
    ).

:- pred write_binding(bindings::in, string::in, io::di, io::uo) is cc_multi.

write_binding(Bindings, Output, !IO) :-
    map.lookup(Bindings, Output, Univ),
    io.write_string(Output, !IO),
    io.write_string(" = ", !IO),
    io.write_cc(univ_value(Univ), !IO),
    io.write_string(", ", !IO).

:- pred report_exception(T::in, io::di, io::uo) is cc_multi.

report_exception(Excp, !IO) :-
    io.write_string("*** caught exception: ", !IO),
    io.write_cc(Excp, !IO),
    io.nl(!IO).

%---------------------------------------------------------------------------%
%
% dl.mercury_sym returns a higher-order term with inst `ground'.  We need to
% cast it to the right higher-order inst before we can actually call it.  The
% functions inst_cast_*/1 defined below do that.
%

:- func inst_cast_normal(run_normal_pred) = run_normal_pred.
:- mode inst_cast_normal(in) = out(run_normal_pred) is det.

:- pragma foreign_proc("C",
    inst_cast_normal(X::in) = (Y::out(run_normal_pred)),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    Y = X
").

inst_cast_normal(_) = _ :-
    private_builtin.sorry("inst_cast_normal").

:- func inst_cast_cc(run_cc_pred) = run_cc_pred.
:- mode inst_cast_cc(in) = out(run_cc_pred) is det.

:- pragma foreign_proc("C",
    inst_cast_cc(X::in) = (Y::out(run_cc_pred)),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    Y = X
").

inst_cast_cc(_) = _ :-
    private_builtin.sorry("inst_cast_cc").

:- func inst_cast_io(run_io_pred) = run_io_pred.
:- mode inst_cast_io(in) = out(run_io_pred) is det.

:- pragma foreign_proc("C",
    inst_cast_io(X::in) = (Y::out(run_io_pred)),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    Y = X
").

inst_cast_io(_) = _ :-
    private_builtin.sorry("inst_cast_io").

%---------------------------------------------------------------------------%

:- func shlib_extension = string.

shlib_extension =
   ( if system_is_darwin then ".dylib" else ".so" ).

:- pred system_is_darwin is semidet.
:- pragma foreign_proc("C",
    system_is_darwin,
    [promise_pure, will_not_call_mercury, thread_safe],
"
#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
").

%---------------------------------------------------------------------------%
