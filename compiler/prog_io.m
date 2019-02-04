%-----------------------------------------------------------------------------e
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------e
% Copyright (C) 1993-2007 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: prog_io.m.
% Main authors: fjh, zs.
%
% This module defines predicates for parsing Mercury programs.
%
% In some ways the representation of programs here is considerably
% more complex than is necessary for the compiler.
% The basic reason for this is that it was designed to preserve
% as much information about the source code as possible, so that
% this representation could also be used for other tools such
% as pretty-printers.
% Currently the only information that is lost is that comments and
% whitespace are stripped, any redundant parenthesization
% are lost, distinctions between different spellings of the same
% operator (eg "\+" vs "not") are lost, and DCG clauses get expanded.
% It would be a good idea to preserve all those too (well, maybe not
% the redundant parentheses), but right now it's not worth the effort.
%
% So that means that this phase of compilation is purely parsing.
% No simplifications are done (other than DCG expansion).
% The results of this phase specify
% basically the same information as is contained in the source code,
% but in a parse tree rather than a flat file.
% Simplifications are done only by make_hlds.m, which transforms
% the parse tree which we built here into the HLDS.
%
% Some of this code is a rather bad example of cut-and-paste style reuse.
% It should be cleaned up to eliminate most of the duplication.
% But that task really needs to wait until we implement higher-order
% predicates.  For the moment, just be careful that any changes
% you make are reflected correctly in all similar parts of this file.
%
% Implication and equivalence implemented by squirrel, who would also
% like to get her hands on this file and give it a good clean up and
% put it into good clean "mercury" style!
%
% Wishlist:
%
% 1.  implement importing/exporting operators with a particular fixity
%     eg. :- import_op prefix(+). % only prefix +, not infix
%     (not important, but should be there for reasons of symmetry.)
% 2.  improve the handling of type and inst parameters
% 3.  improve the error reporting (most of the semidet preds should
%     be det and should return a meaningful indication of where an
%     error occurred).

%-----------------------------------------------------------------------------%

:- module parse_tree.prog_io.
:- interface.

:- import_module libs.timestamp.
:- import_module mdbcomp.prim_data.
:- import_module parse_tree.prog_data.
:- import_module parse_tree.prog_item.
:- import_module parse_tree.prog_io_util.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module term.
:- import_module varset.

%-----------------------------------------------------------------------------%

% This module (prog_io) exports the following predicates:

:- type file_name == string.
:- type dir_name == string.

    % Open a source or interface file, returning `ok(FileInfo)' on success
    % (where FileInfo is information about the file such as the file name
    % or the directory in which it was found), or `error(Message)' on failure.
:- type open_file(FileInfo) == pred(maybe_error(FileInfo), io, io).
:- inst open_file == (pred(out, di, uo) is det).

:- type module_error
    --->    no_module_errors        % no errors
    ;       some_module_errors      % some syntax errors
    ;       fatal_module_errors.    % couldn't open the file

    % read_module(OpenFile, FileName, DefaultModuleName, ReturnTimestamp,
    %   Error, MaybeFileInfo, ActualModuleName, Messages, Program,
    %   MaybeModuleTimestamp, !IO):
    %
    % Reads and parses the file opened by OpenFile using the default module
    % name DefaultModuleName. If ReturnTimestamp is `yes', attempt to return
    % the modification timestamp in MaybeModuleTimestamp. Error is
    % `fatal_module_errors' if the file coudn't be opened, `some_module_errors'
    % if a syntax error was detected, and `no_module_errors' otherwise.
    % MaybeFileInfo is the information about the file (usually the file or
    % directory name) returned by OpenFile. ActualModuleName is the module name
    % specified in the `:- module' declaration, if any, or the
    % DefaultModuleName if there is no `:- module' declaration.
    % Messages is a list of warning/error messages. Program is the parse tree.
    %
:- pred read_module(open_file(FileInfo)::in(open_file),
    module_name::in, bool::in, module_error::out, maybe(FileInfo)::out,
    module_name::out, message_list::out, item_list::out,
    maybe(io.res(timestamp))::out, io::di, io::uo) is det.

:- pred read_module_if_changed(open_file(FileInfo)::in(open_file),
    module_name::in, timestamp::in, module_error::out,
    maybe(FileInfo)::out, module_name::out, message_list::out,
    item_list::out, maybe(io.res(timestamp))::out, io::di, io::uo) is det.

    % Same as read_module, but use intermod_directories instead of
    % search_directories when searching for the file.
    % Also report an error if the actual module name doesn't match
    % the expected module name.
    %
:- pred read_opt_file(file_name::in, module_name::in, module_error::out,
    message_list::out, item_list::out, io::di, io::uo) is det.

    % check_module_has_expected_name(FileName, ExpectedName, ActualName):
    %
    % Check that two module names are equal, and report an error if they
    % aren't.
    %
:- pred check_module_has_expected_name(file_name::in, module_name::in,
    module_name::in, io::di, io::uo) is det.

    % search_for_file(Dirs, FileName, FoundFileName, !IO):
    %
    % Search Dirs for FileName, opening the file if it is found,
    % and returning the path name of the file that was found.
    %
:- pred search_for_file(list(dir_name)::in, file_name::in,
    maybe_error(file_name)::out, io::di, io::uo) is det.

    % search_for_file_returning_dir(Dirs, FileName, FoundDirName, !IO):
    %
    % Search Dirs for FileName, opening the file if it is found, and returning
    % the name of the directory in which the file was found.
    %
:- pred search_for_file_returning_dir(list(dir_name)::in, file_name::in,
    maybe_error(dir_name)::out, io::di, io::uo) is det.

    % search_for_module_source(Dirs, InterfaceDirs, ModuleName,
    %   FoundSourceFileName, !IO):
    %
    % Look for the source for ModuleName in Dirs. This will also search for
    % files matching partially qualified versions of ModuleName, but only if
    % a more qualified `.m' or `.int' file doesn't exist in InterfaceDirs.
    % in InterfaceDirs. For example, module foo.bar.baz can be found in
    % foo.bar.m, bar.baz.m or bar.m.
    %
:- pred search_for_module_source(list(dir_name)::in, list(dir_name)::in,
    module_name::in, maybe_error(file_name)::out, io::di, io::uo) is det.

    % Read the first item from the given file to find the module name.
    %
:- pred find_module_name(file_name::in, maybe(module_name)::out,
    io::di, io::uo) is det.

    % parse_item(ModuleName, VarSet, Term, MaybeItem):
    %
    % Parse Term. If successful, MaybeItem is bound to the parsed item,
    % otherwise it is bound to an appropriate error message. Qualify
    % appropriate parts of the item, with ModuleName as the module name.
    %
:- pred parse_item(module_name::in, varset::in, term::in,
    maybe_item_and_context::out) is det.

    % parse_decl(ModuleName, VarSet, Term, Result):
    %
    % Parse Term as a declaration. If successful, Result is bound to the
    % parsed item, otherwise it is bound to an appropriate error message.
    % Qualify appropriate parts of the item, with ModuleName as the module
    % name.
    %
:- pred parse_decl(module_name::in, varset::in, term::in,
    maybe_item_and_context::out) is det.

    % parse_type_defn_head(ModuleName, Head, Body, HeadResult):
    %
    % Check the head of a type definition for errors.
    %
:- pred parse_type_defn_head(module_name::in, term::in, term::in,
    maybe2(sym_name, list(type_param))::out) is det.

    % parse_type_decl_where_part_if_present(TypeSymName, Arity,
    %   IsSolverType, Inst, ModuleName, Term0, Term, Result):
    %
    % Checks if Term0 is a term of the form `<body> where <attributes>'.
    % If so, returns the `<body>' in Term and the parsed `<attributes>'
    % in Result. If not, returns Term = Term0 and Result = no.
    %
:- pred parse_type_decl_where_part_if_present(is_solver_type::in,
    module_name::in, term::in, term::out,
    maybe2(maybe(solver_type_details), maybe(unify_compare))::out) is det.

%-----------------------------------------------------------------------------%

% A QualifiedTerm is one of
%   Name(Args)
%   Module.Name(Args)
% (or if Args is empty, one of
%   Name
%   Module.Name)
% where Module is a SymName. For backwards compatibility, we allow `__'
% as an alternative to `.'.

    % Sym_name_and_args takes a term and returns a sym_name and a list of
    % argument terms. It fails if the input is not valid syntax for a
    % QualifiedTerm.
    %
:- pred sym_name_and_args(term(T)::in, sym_name::out, list(term(T))::out)
    is semidet.

    % parse_qualified_term/4 takes a term (and also the containing term,
    % and a string describing the context from which it was called
    % [e.g. "clause head"]) and returns a sym_name and a list of argument
    % terms. Returns an error on ill-formed input. See also
    % parse_implicitly_qualified_term/5 (below).
    %
:- pred parse_qualified_term(term(T)::in, term(T)::in, string::in,
    maybe_functor(T)::out) is det.

    % parse_implicitly_qualified_term(DefaultModName, Term,
    %   ContainingTerm, Msg, Result):
    %
    % parse_implicitly_qualified_term/5 takes a default module name and a term,
    % (and also the containing term, and a string describing the context from
    % which it was called (e.g. "clause head"), and returns a sym_name and
    % a list of argument terms. Returns an error on ill-formed input or
    % a module qualifier that doesn't match the DefaultModName.
    %
    % Note: parse_qualified_term/4 is used for places where a symbol is _used_,
    % in which case no default module name exists, whereas
    % parse_implicitly_qualified_term/5 is used for places where a symbol
    % is _defined_; in that case, there is a default module name (the name
    % of the current module) -- specifying a module qualifier explicitly
    % is redundant, but it is allowed, so long as the module qualifier
    % specified matches the default.
    %
:- pred parse_implicitly_qualified_term(module_name::in, term(T)::in,
    term(T)::in, string::in, maybe_functor(T)::out) is det.

%-----------------------------------------------------------------------------%

    % Replace all occurrences of inst_var(I) with
    % constrained_inst_var(I, ground(shared, none)).
    %
:- pred constrain_inst_vars_in_mode(mer_mode::in, mer_mode::out) is det.

    % Replace all occurrences of inst_var(I) with
    % constrained_inst_var(I, Inst) where I -> Inst is in the inst_var_sub.
    % If I is not in the inst_var_sub, default to ground(shared, none).
    %
:- pred constrain_inst_vars_in_mode(inst_var_sub::in,
    mer_mode::in, mer_mode::out) is det.

%-----------------------------------------------------------------------------%

    % Check that for each constrained_inst_var all occurrences have the
    % same constraint.
    %
:- pred inst_var_constraints_are_consistent_in_modes(list(mer_mode)::in)
    is semidet.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compiler_util.
:- import_module libs.globals.
:- import_module libs.options.
:- import_module parse_tree.modules.
:- import_module parse_tree.modules.
:- import_module parse_tree.error_util.
:- import_module parse_tree.prog_io_dcg.
:- import_module parse_tree.prog_io_goal.
:- import_module parse_tree.prog_io_pragma.
:- import_module parse_tree.prog_io_typeclass.
:- import_module parse_tree.prog_io_util.
:- import_module parse_tree.prog_mode.
:- import_module parse_tree.prog_out.
:- import_module parse_tree.prog_type.
:- import_module parse_tree.prog_util.
:- import_module recompilation.
:- import_module recompilation.version.

:- import_module assoc_list.
:- import_module dir.
:- import_module int.
:- import_module map.
:- import_module pair.
:- import_module parser.
:- import_module set.
:- import_module string.
:- import_module term_io.
:- import_module unit.

%-----------------------------------------------------------------------------%

read_module(OpenFile, DefaultModuleName, ReturnTimestamp, Error,
        FileData, ModuleName, Messages, Items, MaybeModuleTimestamp, !IO) :-
    read_module_2(OpenFile, DefaultModuleName, no, ReturnTimestamp, Error,
        FileData, ModuleName, Messages, Items, MaybeModuleTimestamp, !IO).

read_module_if_changed(OpenFile, DefaultModuleName, OldTimestamp, Error,
        FileData, ModuleName, Messages, Items, MaybeModuleTimestamp, !IO) :-
    read_module_2(OpenFile, DefaultModuleName, yes(OldTimestamp), yes, Error,
        FileData, ModuleName, Messages, Items, MaybeModuleTimestamp, !IO).

read_opt_file(FileName, DefaultModuleName, Error, Messages, Items, !IO) :-
    globals.io_lookup_accumulating_option(intermod_directories, Dirs, !IO),
    read_module_2(search_for_file(Dirs, FileName), DefaultModuleName, no, no,
        Error, _, ModuleName, Messages, Items, _, !IO),
    check_module_has_expected_name(FileName, DefaultModuleName, ModuleName,
        !IO).

check_module_has_expected_name(FileName, ExpectedName, ActualName, !IO) :-
    ( ActualName \= ExpectedName ->
        Pieces = [words("Error: file"), quote(FileName),
            words("contains the wrong module."), nl,
            words("Expected module"), sym_name(ExpectedName), suffix(","),
            words("found module"), sym_name(ActualName), suffix("."), nl],
        write_error_pieces_plain(Pieces, !IO),
        io.set_exit_status(1, !IO)
    ;
        true
    ).

    % This implementation uses io.read_term to read in the program one term
    % at a time, and then converts those terms into clauses and declarations,
    % checking for errors as it goes. Note that rather than using difference
    % lists, we just build up the lists of items and messages in reverse order
    % and then reverse them afterwards. (Using difference lists would require
    % late-input modes.)
    %
:- pred read_module_2(open_file(T)::in(open_file), module_name::in,
    maybe(timestamp)::in, bool::in, module_error::out, maybe(T)::out,
    module_name::out, message_list::out, item_list::out,
    maybe(io.res(timestamp))::out, io::di, io::uo) is det.

read_module_2(OpenFile, DefaultModuleName, MaybeOldTimestamp, ReturnTimestamp,
        Error, MaybeFileData, ModuleName, Messages, Items,
        MaybeModuleTimestamp, !IO) :-
    io.input_stream(OldInputStream, !IO),
    OpenFile(OpenResult, !IO),
    (
        OpenResult = ok(FileData),
        MaybeFileData = yes(FileData),
        ( ReturnTimestamp = yes ->
            io.input_stream_name(InputStreamName, !IO),
            io.file_modification_time(InputStreamName, TimestampResult, !IO),
            (
                TimestampResult = ok(Timestamp),
                MaybeModuleTimestamp = yes(ok(time_t_to_timestamp(Timestamp)))
            ;
                TimestampResult = error(IOError),
                MaybeModuleTimestamp = yes(error(IOError))
            )
        ;
            MaybeModuleTimestamp = no
        ),
        (
            MaybeOldTimestamp = yes(OldTimestamp),
            MaybeModuleTimestamp = yes(ok(OldTimestamp))
        ->
            % XXX Currently smart recompilation won't work
            % if ModuleName \= DefaultModuleName.
            % In that case, smart recompilation will be disabled
            % and read_module should never be passed an old timestamp.

            ModuleName = DefaultModuleName,
            Items = [],
            Error = no_module_errors,
            Messages = []
        ;
            read_all_items(DefaultModuleName, ModuleName, Messages, Items,
                Error, !IO)
        ),
        io.set_input_stream(OldInputStream, ModuleInputStream, !IO),
        io.close_input(ModuleInputStream, !IO)
    ;
        OpenResult = error(Message0),
        io.progname_base("mercury_compile", Progname, !IO),
        Message = Progname ++ ": " ++ Message0,
        dummy_term(Term),
        Messages = [Message - Term],
        Error = fatal_module_errors,
        Items = [],
        ModuleName = DefaultModuleName,
        MaybeFileData = no,
        MaybeModuleTimestamp = no
    ).

search_for_file(Dirs, FileName, Result, !IO) :-
    search_for_file_returning_dir(Dirs, FileName, Result0, !IO),
    (
        Result0 = ok(Dir),
        ( dir.this_directory(Dir) ->
            PathName = FileName
        ;
            PathName = dir.make_path_name(Dir, FileName)
        ),
        Result = ok(PathName)
    ;
        Result0 = error(Message),
        Result = error(Message)
    ).

search_for_file_returning_dir(Dirs, FileName, R, !IO) :-
    search_for_file_returning_dir(Dirs, Dirs, FileName, R, !IO).

:- pred search_for_file_returning_dir(list(dir_name)::in, list(dir_name)::in,
    file_name::in, maybe_error(dir_name)::out, io::di, io::uo) is det.

search_for_file_returning_dir([], AllDirs, FileName, error(Msg), !IO) :-
    Msg = "cannot find `" ++ FileName ++ "' in directories " ++
        string.join_list(", ", AllDirs).
search_for_file_returning_dir([Dir | Dirs], AllDirs, FileName, R, !IO) :-
    ( dir.this_directory(Dir) ->
        ThisFileName = FileName
    ;
        ThisFileName = dir.make_path_name(Dir, FileName)
    ),
    io.see(ThisFileName, R0, !IO),
    ( R0 = ok ->
        R = ok(Dir)
    ;
        search_for_file_returning_dir(Dirs, AllDirs, FileName, R, !IO)
    ).

search_for_module_source(Dirs, InterfaceDirs,
        ModuleName, MaybeFileName, !IO) :-
    search_for_module_source_2(Dirs, ModuleName, ModuleName,
        MaybeFileName0, !IO),
    (
        MaybeFileName0 = ok(SourceFileName),
        ( 
            string.remove_suffix(dir.basename(SourceFileName),
                ".m", SourceFileBaseName),
            file_name_to_module_name(SourceFileBaseName, SourceFileModuleName),
            ModuleName \= SourceFileModuleName
        ->
            % The module name doesn't match the file name. Return an error
            % if there is a more qualified matching `.m' or `.int' file in
            % the interface search path. This avoids having a file `read.m'
            % in the current directory prevent the compiler from finding
            % `bit_buffer.read.int' in the standard library.
            %
            io.input_stream(SourceStream, !IO),
            search_for_module_source_2(InterfaceDirs, ModuleName,
                ModuleName, MaybeFileName2, !IO),
            ( MaybeFileName2 = ok(_) ->
                io.seen(!IO)
            ;
                true
            ),
            (
                MaybeFileName2 = ok(SourceFileName2),
                SourceFileName2 \= SourceFileName,
                string.remove_suffix(dir.basename(SourceFileName2), ".m",
                    SourceFileBaseName2),
                file_name_to_module_name(SourceFileBaseName2,
                    SourceFileModuleName2),
                match_sym_name(SourceFileModuleName, SourceFileModuleName2)
            ->
                io.close_input(SourceStream, !IO),
                MaybeFileName = error(find_source_error(ModuleName,
                                    Dirs, yes(SourceFileName2)))
            ;
                module_name_to_file_name(ModuleName, ".int", no, IntFile, !IO),
                search_for_file_returning_dir(InterfaceDirs, IntFile,
                    MaybeIntDir, !IO),
                ( MaybeIntDir = ok(_) ->
                    io.seen(!IO)
                ;
                    true
                ),
                (
                    MaybeIntDir = ok(IntDir),
                    IntDir \= dir.this_directory
                ->
                    io.close_input(SourceStream, !IO),
                    MaybeFileName = error(find_source_error(ModuleName,
                                        Dirs, yes(IntDir/IntFile)))
                ;
                    io.set_input_stream(SourceStream, _, !IO),
                    MaybeFileName = MaybeFileName0
                )
            )
        ;
            MaybeFileName = MaybeFileName0
        )
    ;
        MaybeFileName0 = error(_),
        MaybeFileName = MaybeFileName0
    ).

:- func find_source_error(module_name, list(dir_name),
            maybe(file_name)) = string.

find_source_error(ModuleName, Dirs, MaybeBetterMatch) = Msg :-
    ModuleNameStr = sym_name_to_string(ModuleName),
    Msg0 = "cannot find source for module `" ++ ModuleNameStr ++
            "' in directories " ++ string.join_list(", ", Dirs),
    (
        MaybeBetterMatch = no, Msg = Msg0
    ;
        MaybeBetterMatch = yes(BetterMatchFile),
        Msg = Msg0 ++ ", but found " ++ BetterMatchFile
                    ++ " in interface search path"
    ).

:- pred search_for_module_source_2(list(dir_name)::in, module_name::in,
    module_name::in, maybe_error(file_name)::out, io::di, io::uo) is det.

search_for_module_source_2(Dirs, ModuleName, PartialModuleName, Result, !IO) :-
    module_name_to_file_name(PartialModuleName, ".m", no, FileName, !IO),
    search_for_file(Dirs, FileName, Result0, !IO),
    (
        Result0 = ok(_),
        Result = Result0
    ;
        Result0 = error(_),
        (
            PartialModuleName1 = drop_one_qualifier(PartialModuleName)
        ->
            search_for_module_source_2(Dirs, ModuleName, PartialModuleName1,
                Result, !IO)
        ;
            Result = error(find_source_error(ModuleName, Dirs, no))
        )
    ).

:- func drop_one_qualifier(module_name) = module_name is semidet.

drop_one_qualifier(qualified(ParentQual, ChildName)) =
    drop_one_qualifier_2(ParentQual, ChildName).

:- func drop_one_qualifier_2(module_name, string) = module_name.

drop_one_qualifier_2(ParentQual, ChildName) =  PartialQual :-
    (
        ParentQual = unqualified(_ParentName),
        PartialQual = unqualified(ChildName)
    ;
        ParentQual = qualified(GrandParentQual, ParentName),
        PartialGrandParentQual = drop_one_qualifier_2(GrandParentQual,
            ParentName),
        PartialQual = qualified(PartialGrandParentQual, ChildName)
    ).

%-----------------------------------------------------------------------------%

:- type module_end
    --->    module_end_no
    ;       module_end_yes(module_name, prog_context).

    % Extract the final `:- end_module' declaration if any.
    %
:- pred get_end_module(module_name::in, item_list::in, item_list::out,
    module_end::out) is det.

get_end_module(ModuleName, RevItemAndContexts0, RevItemAndContexts,
        EndModule) :-
    (
        % Note: if the module name in the end_module declaration does not match
        % what we expect, given the source file name, then we assume that it is
        % for a nested module, and so we leave it alone. If it is not for a
        % nested module, the error will be caught by make_hlds.

        RevItemAndContexts0 = [item_and_context(Item, Context) |
            RevItemAndContextsPrime],
        Item = item_module_defn(_VarSet, md_end_module(ModuleName))
    ->
        RevItemAndContexts = RevItemAndContextsPrime,
        EndModule = module_end_yes(ModuleName, Context)
    ;
        RevItemAndContexts = RevItemAndContexts0,
        EndModule = module_end_no
    ).

%-----------------------------------------------------------------------------%

    % Check that the module starts with a :- module declaration,
    % and that the end_module declaration (if any) is correct,
    % and construct the final parsing result.
    %
:- pred check_end_module(module_end::in, message_list::in, message_list::out,
    item_list::in, item_list::out, module_error::in, module_error::out) is det.

check_end_module(EndModule, !Messages, !ItemAndContexts, !Error) :-
    % Double-check that the first item is a `:- module ModuleName' declaration,
    % and remove it from the front of the item list.
    (
        !.ItemAndContexts = [ItemAndContext | !:ItemAndContexts],
        ItemAndContext = item_and_context(Item, _Context1),
        Item = item_module_defn(_VarSet, md_module(ModuleName1))
    ->
        % Check that the end module declaration (if any) matches
        % the begin module declaration.
        (
            EndModule = module_end_yes(ModuleName2, Context2),
            ModuleName1 \= ModuleName2
        ->
            dummy_term_with_context(Context2, Term),
            Msg = "`:- end_module' declaration doesn't match " ++
                "`:- module' declaration",
            add_error(Msg - Term, !Messages),
            !:Error = some_module_errors
        ;
            true
        )
    ;
        % If there's no `:- module' declaration at this point, it is
        % an internal error -- read_first_item should have inserted one.
        unexpected(this_file,
            "check_end_module: no `:- module' declaration")
    ).

%-----------------------------------------------------------------------------%

    % Create a dummy term. Used for error messages that are not associated
    % with any particular term or context.
    %
:- pred dummy_term(term::out) is det.

dummy_term(Term) :-
    term.context_init(Context),
    dummy_term_with_context(Context, Term).

    % Create a dummy term with the specified context.
    % Used for error messages that are associated with some specific
    % context, but for which we don't want to print out the term
    % (or for which the term isn't available to be printed out).
    %
:- pred dummy_term_with_context(term.context::in, term::out) is det.

dummy_term_with_context(Context, Term) :-
    Term = term.functor(term.atom(""), [], Context).

%-----------------------------------------------------------------------------%

find_module_name(FileName, MaybeModuleName, !IO) :-
    io.open_input(FileName, OpenRes, !IO),
    (
        OpenRes = ok(InputStream),
        io.set_input_stream(InputStream, OldInputStream, !IO),
        ( string.remove_suffix(FileName, ".m", PartialFileName0) ->
            PartialFileName = PartialFileName0
        ;
            PartialFileName = FileName
        ),
        ( dir.basename(PartialFileName, BaseName0) ->
            BaseName = BaseName0
        ;
            BaseName = ""
        ),
        file_name_to_module_name(BaseName, DefaultModuleName),
        read_first_item(DefaultModuleName, FileName, _,
            ModuleName, RevMessages, _, _, _, !IO),
        MaybeModuleName = yes(ModuleName),
        prog_out.write_messages(list.reverse(RevMessages), !IO),
        io.set_input_stream(OldInputStream, _, !IO),
        io.close_input(InputStream, !IO)
    ;
        OpenRes = error(Error),
        io.progname_base("mercury_compile", Progname, !IO),
        io.write_string(Progname, !IO),
        io.write_string(": error opening `", !IO),
        io.write_string(FileName, !IO),
        io.write_string("': ", !IO),
        io.write_string(io.error_message(Error), !IO),
        io.write_string(".\n", !IO),
        MaybeModuleName = no
    ).

    % Read a source file from standard in, first reading in
    % the input term by term and then parsing those terms and producing
    % a high-level representation.
    % Parsing is actually a 3-stage process instead of the
    % normal two-stage process:
    %   lexical analysis (chars -> tokens),
    %   parsing stage 1 (tokens -> terms),
    %   parsing stage 2 (terms -> items).
    % The final stage produces a list of program items, each of which
    % may be a declaration or a clause.
    %
    % We use a continuation-passing style here.
    %
:- pred read_all_items(module_name::in, module_name::out, message_list::out,
    item_list::out, module_error::out, io::di, io::uo) is det.

read_all_items(DefaultModuleName, ModuleName, Messages, Items, Error, !IO) :-
    % Read all the items (the first one is handled specially).
    io.input_stream(Stream, !IO),
    io.input_stream_name(Stream, SourceFileName0, !IO),
    read_first_item(DefaultModuleName, SourceFileName0, SourceFileName,
        ModuleName, RevMessages0, RevItems0, MaybeSecondTerm, Error0, !IO),
    (
        MaybeSecondTerm = yes(SecondTerm),
        process_read_term(ModuleName, SecondTerm, MaybeSecondItem),

        read_items_loop_2(MaybeSecondItem, ModuleName, SourceFileName,
            RevMessages0, RevMessages1, RevItems0, RevItems1,
            Error0, Error1, !IO)
    ;
        MaybeSecondTerm = no,
        read_items_loop(ModuleName, SourceFileName,
            RevMessages0, RevMessages1, RevItems0, RevItems1,
            Error0, Error1, !IO)
    ),

    % Get the end_module declaration (if any), check that it matches
    % the initial module declaration (if any), and remove both of them
    % from the final item list.
    get_end_module(ModuleName, RevItems1, RevItems, EndModule),
    check_end_module(EndModule, RevMessages1, RevMessages, Items0, Items,
        Error1, Error),
    list.reverse(RevMessages, Messages),
    list.reverse(RevItems, Items0).

    % We need to jump through a few hoops when reading the first item,
    % to allow the initial `:- module' declaration to be optional.
    % The reason is that in order to parse an item, we need to know
    % which module it is defined in (because we do some module
    % qualification and checking of module qualifiers at parse time),
    % but the initial `:- module' declaration and the declaration
    % that follows it occur in different scopes, so we need to know
    % what it is that we're parsing before we can parse it!
    % We solve this dilemma by first parsing it in the root scope,
    % and then if it turns out to not be a `:- module' declaration
    % we reparse it in the default module scope. Blecchh.
    %
:- pred read_first_item(module_name::in, file_name::in, file_name::out,
    module_name::out, message_list::out, item_list::out, maybe(read_term)::out,
    module_error::out, io.state::di, io.state::uo) is det.

read_first_item(DefaultModuleName, !SourceFileName, ModuleName,
        Messages, Items, MaybeSecondTerm, Error, !IO) :-
    globals.io_lookup_bool_option(warn_missing_module_name, WarnMissing, !IO),
    globals.io_lookup_bool_option(warn_wrong_module_name, WarnWrong, !IO),

    % Parse the first term, treating it as occurring within the scope
    % of the special "root" module (so that any `:- module' declaration
    % is taken to be a non-nested module unless explicitly qualified).
    parser.read_term_filename(!.SourceFileName, MaybeFirstTerm, !IO),
    root_module_name(RootModuleName),
    process_read_term(RootModuleName, MaybeFirstTerm, MaybeFirstItem),
    (
        % Apply and then skip `pragma source_file' decls, by calling ourselves
        % recursively with the new source file name.
        MaybeFirstItem = read_item_ok(FirstItem, _),
        FirstItem = item_pragma(_, pragma_source_file(!:SourceFileName))
    ->
        read_first_item(DefaultModuleName, !SourceFileName,
            ModuleName, Messages, Items, MaybeSecondTerm, Error, !IO)
    ;
        % Check if the first term was a `:- module' decl.
        MaybeFirstItem = read_item_ok(FirstItem, FirstContext),
        FirstItem = item_module_defn(_VarSet, ModuleDefn),
        ModuleDefn = md_module(StartModuleName)
    ->
        % If so, then check that it matches the expected module name,
        % and if not, report a warning.
        ( match_sym_name(StartModuleName, DefaultModuleName) ->
            ModuleName = DefaultModuleName,
            Messages = []
        ; match_sym_name(DefaultModuleName, StartModuleName) ->
            ModuleName = StartModuleName,
            Messages = []
        ;
            StartModuleNameString = sym_name_to_string(StartModuleName),
            WrongModuleWarning = "source file `" ++ !.SourceFileName ++
                "' contains module named `" ++ StartModuleNameString ++ "'",
            maybe_add_warning(WarnWrong, MaybeFirstTerm, FirstContext,
            WrongModuleWarning, [], Messages),

            % Which one should we use here? We used to use the default module
            % name (computed from the filename) but now we use the declared
            % one.
            ModuleName = StartModuleName
        ),
        make_module_decl(ModuleName, FirstContext, FixedFirstItem),
        Items = [FixedFirstItem],
        Error = no_module_errors,
        MaybeSecondTerm = no
    ;
        % If the first term was not a `:- module' decl, then issue a warning
        % (if warning enabled), and insert an implicit `:- module ModuleName'
        % decl.
        ( MaybeFirstItem = read_item_ok(_FirstItem, FirstContext0) ->
            FirstContext = FirstContext0
        ;
            term.context_init(!.SourceFileName, 1, FirstContext)
        ),
        (
            WarnMissing = yes,
            dummy_term_with_context(FirstContext, FirstTerm),
            add_warning("module should start with a `:- module' declaration",
                FirstTerm, [], Messages)
        ;
            WarnMissing = no,
            Messages = []
        ),
        ModuleName = DefaultModuleName,
        make_module_decl(ModuleName, FirstContext, FixedFirstItem),

        % Reparse the first term, this time treating it as occuring within
        % the scope of the implicit `:- module' decl rather than in the
        % root module.
        MaybeSecondTerm = yes(MaybeFirstTerm),
        Items = [FixedFirstItem],
        Error = no_module_errors
    ).

:- pred make_module_decl(module_name::in, term.context::in,
    item_and_context::out) is det.

make_module_decl(ModuleName, Context, item_and_context(Item, Context)) :-
    varset.init(EmptyVarSet),
    ModuleDefn = md_module(ModuleName),
    Item = item_module_defn(EmptyVarSet, ModuleDefn).

:- pred maybe_add_warning(bool::in, read_term::in, term.context::in,
    string::in, message_list::in, message_list::out) is det.

maybe_add_warning(DoWarn, MaybeTerm, Context, Warning, !Messages) :-
    (
        DoWarn = yes,
        ( MaybeTerm = term(_VarSet, Term) ->
            WarningTerm = Term
        ;
            dummy_term_with_context(Context, WarningTerm)
        ),
        add_warning(Warning, WarningTerm, !Messages)
    ;
        DoWarn = no
    ).

%-----------------------------------------------------------------------------%

    % The code below was carefully optimized to run efficiently in NU-Prolog.
    % We used to call read_item(MaybeItem) - which does all the work for
    % a single item - via io.gc_call/1, which called the goal with
    % garbage collection. But optimizing for NU-Prolog is no longer a concern.

:- pred read_items_loop(module_name::in, file_name::in,
    message_list::in, message_list::out, item_list::in, item_list::out,
    module_error::in, module_error::out, io.state::di, io.state::uo) is det.

read_items_loop(ModuleName, SourceFileName, !Msgs, !Items, !Error, !IO) :-
    read_item(ModuleName, SourceFileName, MaybeItem, !IO),
    read_items_loop_2(MaybeItem, ModuleName, SourceFileName, !Msgs,
        !Items, !Error, !IO).

%-----------------------------------------------------------------------------%

:- pred read_items_loop_2(read_item_result::in, module_name::in,
    file_name::in, message_list::in, message_list::out,
    item_list::in, item_list::out, module_error::in, module_error::out,
    io.state::di, io.state::uo) is det.

read_items_loop_2(MaybeItemOrEOF, !.ModuleName, !.SourceFileName, !Msgs,
        !ItemAndContexts, !Error, !IO) :-
    (
        MaybeItemOrEOF = read_item_eof
        % If the next item was end-of-file, then we're done.
    ;
        MaybeItemOrEOF = read_item_syntax_error(ErrorMsg, LineNumber),
        % If the next item was a syntax error, then insert it in the list
        % of messages and continue looping.
        term.context_init(!.SourceFileName, LineNumber, Context),
        dummy_term_with_context(Context, Term),
        ThisError = ErrorMsg - Term,
        !:Msgs = [ThisError | !.Msgs],
        !:Error = some_module_errors,
        read_items_loop(!.ModuleName, !.SourceFileName, !Msgs,
            !ItemAndContexts, !Error, !IO)
    ;
        MaybeItemOrEOF = read_item_errors(Errors),
        % If the next item was a semantic error, then insert it in the list
        % of messages and continue looping.
        list.foldl(add_error, Errors, !Msgs),
        !:Error = some_module_errors,
        read_items_loop(!.ModuleName, !.SourceFileName, !Msgs,
            !ItemAndContexts, !Error, !IO)
    ;
        MaybeItemOrEOF = read_item_ok(Item, Context),
        read_items_loop_ok(Item, Context, !ModuleName, !SourceFileName,
            !Msgs, !ItemAndContexts, !Error, !IO),
        read_items_loop(!.ModuleName, !.SourceFileName, !Msgs,
            !ItemAndContexts, !Error, !IO)
    ).

:- pred read_items_loop_ok(item::in, term.context::in,
    module_name::in, module_name::out, file_name::in, file_name::out,
    message_list::in, message_list::out,
    item_list::in, item_list::out, module_error::in, module_error::out,
    io.state::di, io.state::uo) is det.

read_items_loop_ok(Item0, Context, !ModuleName, !SourceFileName, !Msgs,
        !ItemAndContexts, !Error, !IO) :-
    ( Item0 = item_nothing(yes(Warning)) ->
        Warning = item_warning(MaybeOption, Msg, Term),
        (
            MaybeOption = yes(Option),
            globals.io_lookup_bool_option(Option, Warn, !IO)
        ;
            MaybeOption = no,
            Warn = yes
        ),
        (
            Warn = yes,
            add_warning(Msg, Term, !Msgs),

            globals.io_lookup_bool_option(halt_at_warn, Halt, !IO),
            (
                Halt = yes,
                !:Error = some_module_errors
            ;
                Halt = no
            )
        ;
            Warn = no
        ),
        Item = item_nothing(no)
    ;
        Item = Item0
    ),

    % If the next item was a valid item, check whether it was
    % a declaration that affects the current parsing context --
    % i.e. either a `module'/`end_module' declaration or a
    % `pragma source_file' declaration.  If so, set the new
    % parsing context according.  Next, unless the item is a
    % `pragma source_file' declaration, insert it into the item list.
    % Then continue looping.
    ( Item = item_pragma(_, pragma_source_file(NewSourceFileName)) ->
        !:SourceFileName = NewSourceFileName
    ; Item = item_module_defn(_VarSet, md_module(NestedModuleName)) ->
        !:ModuleName = NestedModuleName,
        !:ItemAndContexts = [item_and_context(Item, Context) |
            !.ItemAndContexts]
    ; Item = item_module_defn(_VarSet, md_end_module(NestedModuleName)) ->
        root_module_name(RootModuleName),
        sym_name_get_module_name(NestedModuleName, RootModuleName,
            ParentModuleName),
        !:ModuleName = ParentModuleName,
        !:ItemAndContexts = [item_and_context(Item, Context) |
            !.ItemAndContexts]
    ; Item = item_module_defn(VarSet, md_import(list_module(Modules))) ->
        ImportItems = list.map(make_pseudo_import_module_decl(VarSet, Context),
            Modules),
        list.append(ImportItems, !ItemAndContexts)
    ; Item = item_module_defn(VarSet, md_use(list_module(Modules))) ->
        UseItems = list.map(make_pseudo_use_module_decl(VarSet, Context),
            Modules),
        list.append(UseItems, !ItemAndContexts)
    ; Item = item_module_defn(VarSet, md_include_module(Modules)) ->
        IncludeItems = list.map(
            make_pseudo_include_module_decl(VarSet, Context),
            Modules),
        list.append(IncludeItems, !ItemAndContexts)
    ;
        !:ItemAndContexts = [item_and_context(Item, Context) |
            !.ItemAndContexts]
    ).

:- func make_pseudo_import_module_decl(prog_varset, prog_context,
    module_specifier) = item_and_context.

make_pseudo_import_module_decl(Varset, Context, ModuleSpecifier) =
    item_and_context(
        item_module_defn(Varset, md_import(list_module([ModuleSpecifier]))),
        Context).

:- func make_pseudo_use_module_decl(prog_varset, prog_context,
    module_specifier) = item_and_context.

make_pseudo_use_module_decl(Varset, Context, ModuleSpecifier) =
    item_and_context(
        item_module_defn(Varset, md_use(list_module([ModuleSpecifier]))),
        Context).

:- func make_pseudo_include_module_decl(prog_varset, prog_context, module_name)
    = item_and_context.

make_pseudo_include_module_decl(Varset, Context, ModuleSpecifier) =
    item_and_context(
        item_module_defn(Varset, md_include_module([ModuleSpecifier])),
        Context).

%-----------------------------------------------------------------------------%

:- type read_item_result
    --->    read_item_eof
    ;       read_item_syntax_error(file_name, int)
    ;       read_item_errors(assoc_list(string, term))
    ;       read_item_ok(item, term.context).

    % Read_item/1 reads a single item, and if it is a valid term parses it.
    %
:- pred read_item(module_name::in, file_name::in, read_item_result::out,
    io::di, io::uo) is det.

read_item(ModuleName, SourceFileName, MaybeItem, !IO) :-
    parser.read_term_filename(SourceFileName, MaybeTerm, !IO),
    process_read_term(ModuleName, MaybeTerm, MaybeItem).

:- pred process_read_term(module_name::in, read_term::in,
    read_item_result::out) is det.

process_read_term(_ModuleName, eof, read_item_eof).
process_read_term(_ModuleName, error(ErrorMsg, LineNumber),
        read_item_syntax_error(ErrorMsg, LineNumber)).
process_read_term(ModuleName, term(VarSet, Term), MaybeItemOrEof) :-
    parse_item(ModuleName, VarSet, Term, MaybeItem),
    convert_item(MaybeItem, MaybeItemOrEof).

:- pred convert_item(maybe_item_and_context::in, read_item_result::out) is det.

convert_item(ok2(Item, Context), read_item_ok(Item, Context)).
convert_item(error2(Errors), read_item_errors(Errors)).

parse_item(ModuleName, VarSet, Term, Result) :-
    ( Term = term.functor(term.atom(":-"), [Decl], _DeclContext) ->
        % It's a declaration.
        parse_decl(ModuleName, VarSet, Decl, Result)
    ; Term = term.functor(term.atom("-->"), [DCG_H, DCG_B], DCG_Context) ->
        % It's a DCG clause.
        parse_dcg_clause(ModuleName, VarSet, DCG_H, DCG_B, DCG_Context, Result)
    ;
        % It's either a fact or a rule.
        ( Term = term.functor(term.atom(":-"), [H, B], TermContext) ->
            % It's a rule.
            Head = H,
            Body = B,
            TheContext = TermContext
        ;
            % It's a fact.
            Head = Term,
            ( Head = term.functor(_Functor, _Args, HeadContext) ->
                TheContext = HeadContext
            ;
                % Term consists of just a single variable - the context
                % has been lost.
                term.context_init(TheContext)
            ),
            Body = term.functor(term.atom("true"), [], TheContext)
        ),
        varset.coerce(VarSet, ProgVarSet),
        process_clause(ModuleName, Term, Head, Body, TheContext, ProgVarSet,
            Result)
    ).

:- pred process_clause(module_name::in, term::in, term::in, term::in,
    term.context::in, prog_varset::in, maybe_item_and_context::out) is det.

process_clause(ModuleName, Term, Head, Body0, TheContext, ProgVarSet0,
        Result) :-
    parse_goal(Body0, MaybeBody, ProgVarSet0, ProgVarSet),
    (
        MaybeBody = ok1(Body),
        (
            Head = term.functor(term.atom("="), [FuncHead0, FuncResult], _),
            FuncHead = desugar_field_access(FuncHead0)
        ->
            parse_implicitly_qualified_term(ModuleName, FuncHead, Head,
                "equation head", MaybeFunctor),
            process_func_clause(MaybeFunctor, FuncResult, ProgVarSet, Body,
                MaybeItem)
        ;
            parse_implicitly_qualified_term(ModuleName, Head, Term,
                "clause head", MaybeFunctor),
            process_pred_clause(MaybeFunctor, ProgVarSet, Body, MaybeItem)
        ),
        add_context(MaybeItem, TheContext, Result)
    ;
        MaybeBody = error1(Errors),
        Result = error2(Errors)
    ).

:- pred process_pred_clause(maybe_functor::in, prog_varset::in, goal::in,
    maybe1(item)::out) is det.

process_pred_clause(ok2(Name, Args0), VarSet, Body,
        ok1(item_clause(user, VarSet, pf_predicate, Name, Args, Body))) :-
    list.map(term.coerce, Args0, Args).
process_pred_clause(error2(Errors0), _, _, error1(Errors)) :-
    Errors = assoc_list.map_values_only(term.coerce, Errors0).

:- pred process_func_clause(maybe_functor::in, term::in, prog_varset::in,
    goal::in, maybe1(item)::out) is det.

process_func_clause(ok2(Name, Args0), Result0, VarSet, Body,
        ok1(item_clause(user, VarSet, pf_function, Name, Args, Body))) :-
    list.append(Args0, [Result0], Args1),
    list.map(term.coerce, Args1, Args).
process_func_clause(error2(Errors0), _, _, _, error1(Errors)) :-
    Errors = assoc_list.map_values_only(term.coerce, Errors0).

%-----------------------------------------------------------------------------%

:- type decl_attribute
    --->    decl_attr_purity(purity)
    ;       decl_attr_quantifier(quantifier_type, list(var))
    ;       decl_attr_constraints(quantifier_type, term)
            % the term here is the (not yet parsed) list of constraints
    ;       decl_attr_solver_type.

:- type quantifier_type
    --->    quant_type_exist
    ;       quant_type_univ.

    % The term associated with each decl_attribute is the term containing
    % both the attribute and the declaration that that attribute modifies;
    % this term is used when printing out error messages for cases when
    % attributes are used on declarations where they are not allowed.
:- type decl_attrs == assoc_list(decl_attribute, term).

parse_decl(ModuleName, VarSet, F, Result) :-
    parse_decl_2(ModuleName, VarSet, F, [], Result).

    % parse_decl_2(ModuleName, VarSet, Term, Attributes, Result):
    %
    % Succeeds if Term is a declaration and binds Result to a representation
    % of that declaration. Attributes is a list of enclosing declaration
    % attributes, in the order innermost to outermost.
    %
:- pred parse_decl_2(module_name::in, varset::in, term::in, decl_attrs::in,
    maybe_item_and_context::out) is det.

parse_decl_2(ModuleName, VarSet, F, Attributes, Result) :-
    ( F = term.functor(term.atom(Atom), Args, Context) ->
        ( parse_decl_attribute(Atom, Args, Attribute, SubTerm) ->
            NewAttributes = [Attribute - F | Attributes],
            parse_decl_2(ModuleName, VarSet, SubTerm, NewAttributes, Result)
        ; process_decl(ModuleName, VarSet, Atom, Args, Attributes, R) ->
            add_context(R, Context, Result)
        ;
            Result = error2(["unrecognized declaration" - F])
        )
    ;
        Result = error2(["atom expected after `:-'" - F])
    ).

    % process_decl(ModuleName, VarSet, Attributes, Atom, Args, Result):
    %
    % Succeeds if Atom(Args) is a declaration and binds Result to a
    % representation of that declaration. Attributes is a list of
    % enclosing declaration attributes, in the order outermost to innermost.
    %
:- pred process_decl(module_name::in, varset::in, string::in, list(term)::in,
    decl_attrs::in, maybe1(item)::out) is semidet.

process_decl(ModuleName, VarSet, "type", [TypeDecl], Attributes, Result) :-
    parse_type_decl(ModuleName, VarSet, TypeDecl, Attributes, Result).

process_decl(ModuleName, VarSet, "pred", [PredDecl], Attributes, Result) :-
    parse_type_decl_pred(ModuleName, VarSet, PredDecl, Attributes, Result).

process_decl(ModuleName, VarSet, "func", [FuncDecl], Attributes, Result) :-
    parse_type_decl_func(ModuleName, VarSet, FuncDecl, Attributes, Result).

process_decl(ModuleName, VarSet, "mode", [ModeDecl], Attributes, Result) :-
    parse_mode_decl(ModuleName, VarSet, ModeDecl, Attributes, Result).

process_decl(ModuleName, VarSet, "inst", [InstDecl], Attributes, Result) :-
    parse_inst_decl(ModuleName, VarSet, InstDecl, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(_ModuleName, VarSet, "import_module", [ModuleSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_module_specifier, make_module, make_import,
        ModuleSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_module", [ModuleSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_module_specifier, make_module, make_use,
        ModuleSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_module", [ModuleSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_module_specifier, make_module, make_export,
        ModuleSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_sym", [SymSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_symbol_specifier, make_sym, make_import,
        SymSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_sym", [SymSpec], Attributes, Result) :-
    parse_symlist_decl(parse_symbol_specifier, make_sym, make_use,
        SymSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_sym", [SymSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_symbol_specifier, make_sym, make_export,
        SymSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_pred", [PredSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_predicate_specifier, make_pred, make_import,
        PredSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_pred", [PredSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_predicate_specifier, make_pred, make_use,
        PredSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_pred", [PredSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_predicate_specifier, make_pred, make_export,
        PredSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_func", [FuncSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_function_specifier, make_func, make_import,
        FuncSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_func", [FuncSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_function_specifier, make_func, make_use,
        FuncSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_func", [FuncSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_function_specifier, make_func, make_export,
        FuncSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_cons", [ConsSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_constructor_specifier, make_cons, make_import,
        ConsSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_cons", [ConsSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_constructor_specifier, make_cons, make_use,
        ConsSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_cons", [ConsSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_constructor_specifier, make_cons, make_export,
        ConsSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_type", [TypeSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_type_specifier, make_type, make_import,
        TypeSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_type", [TypeSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_type_specifier, make_type, make_use,
        TypeSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_type", [TypeSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_type_specifier, make_type, make_export,
        TypeSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_adt", [ADT_Spec], Attributes,
        Result) :-
    parse_symlist_decl(parse_adt_specifier, make_adt, make_import,
        ADT_Spec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_adt", [ADT_Spec], Attributes, Result) :-
    parse_symlist_decl(parse_adt_specifier, make_adt, make_use,
        ADT_Spec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_adt", [ADT_Spec], Attributes,
        Result) :-
    parse_symlist_decl(parse_adt_specifier, make_adt, make_export,
        ADT_Spec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "import_op", [OpSpec], Attributes,
        Result) :-
    parse_symlist_decl(parse_op_specifier, make_op, make_import,
        OpSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "use_op", [OpSpec], Attributes, Result) :-
    parse_symlist_decl(parse_op_specifier, make_op, make_use,
        OpSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet, "export_op", [OpSpec], Attributes, Result) :-
    parse_symlist_decl(parse_op_specifier, make_op, make_export,
        OpSpec, Attributes, VarSet, Result).

process_decl(_ModuleName, VarSet0, "interface", [], Attributes, Result) :-
    varset.coerce(VarSet0, VarSet),
    Result0 = ok1(item_module_defn(VarSet, md_interface)),
    check_no_attributes(Result0, Attributes, Result).

process_decl(_ModuleName, VarSet0, "implementation", [], Attributes, Result) :-
    varset.coerce(VarSet0, VarSet),
    Result0 = ok1(item_module_defn(VarSet, md_implementation)),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet, "external", Args, Attributes, Result) :-
    (
        Args = [PredSpec],
        MaybeBackend = no
    ;
        Args = [BackendArg, PredSpec],
        BackendArg = term.functor(term.atom(Functor), [], _),
        (
            Functor = "high_level_backend",
            Backend = high_level_backend
        ;
            Functor = "low_level_backend",
            Backend = low_level_backend
        ),
        MaybeBackend = yes(Backend)
    ),
    parse_implicitly_qualified_symbol_name_specifier(ModuleName,
        PredSpec, Result0),
    process_maybe1(make_external(VarSet, MaybeBackend), Result0, Result1),
    check_no_attributes(Result1, Attributes, Result).

process_decl(DefaultModuleName, VarSet0, "module", [ModuleName], Attributes,
        Result) :-
    parse_module_name(DefaultModuleName, ModuleName, Result0),
    (
        Result0 = ok1(ModuleNameSym),
        varset.coerce(VarSet0, VarSet),
        Result1 = ok1(item_module_defn(VarSet, md_module(ModuleNameSym)))
    ;
        Result0 = error1(Errors),
        Result1 = error1(Errors)
    ),
    check_no_attributes(Result1, Attributes, Result).

process_decl(DefaultModuleName, VarSet0, "include_module", [ModuleNames],
        Attributes, Result) :-
    parse_list(parse_module_name(DefaultModuleName), ModuleNames, Result0),
    (
        Result0 = ok1(ModuleNameSyms),
        varset.coerce(VarSet0, VarSet),
        Result1 = ok1(item_module_defn(VarSet,
            md_include_module(ModuleNameSyms)))
    ;
        Result0 = error1(Errors),
        Result1 = error1(Errors)
    ),
    check_no_attributes(Result1, Attributes, Result).

process_decl(DefaultModuleName, VarSet0, "end_module", [ModuleName],
        Attributes, Result) :-
    % The name in an `end_module' declaration not inside the scope of the
    % module being ended, so the default module name here is the parent
    % of the previous default module name.

    root_module_name(RootModuleName),
    sym_name_get_module_name(DefaultModuleName, RootModuleName,
        ParentOfDefaultModuleName),
    parse_module_name(ParentOfDefaultModuleName, ModuleName, Result0),
    (
        Result0 = ok1(ModuleNameSym),
        varset.coerce(VarSet0, VarSet),
        Result1 = ok1(item_module_defn(VarSet, md_end_module(ModuleNameSym)))
    ;
        Result0 = error1(Errors),
        Result1 = error1(Errors)
    ),
    check_no_attributes(Result1, Attributes, Result).

process_decl(ModuleName, VarSet, "pragma", Pragma, Attributes, Result):-
    parse_pragma(ModuleName, VarSet, Pragma, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet, "promise", Assertion, Attributes, Result):-
    parse_promise(ModuleName, promise_type_true, VarSet,
        Assertion, Attributes, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet, "promise_exclusive", PromiseGoal, Attributes,
        Result):-
    parse_promise(ModuleName, promise_type_exclusive, VarSet,
        PromiseGoal, Attributes, Result).

process_decl(ModuleName, VarSet, "promise_exhaustive", PromiseGoal, Attributes,
        Result):-
    parse_promise(ModuleName, promise_type_exhaustive, VarSet,
        PromiseGoal, Attributes, Result).

process_decl(ModuleName, VarSet, "promise_exclusive_exhaustive", PromiseGoal,
        Attributes, Result):-
    parse_promise(ModuleName, promise_type_exclusive_exhaustive, VarSet,
        PromiseGoal, Attributes, Result).

process_decl(ModuleName, VarSet, "typeclass", Args, Attributes, Result):-
    parse_typeclass(ModuleName, VarSet, Args, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet, "instance", Args, Attributes, Result):-
    parse_instance(ModuleName, VarSet, Args, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet0, "version_numbers",
        [VersionNumberTerm, ModuleNameTerm, VersionNumbersTerm],
        Attributes, Result) :-
    parse_module_specifier(ModuleNameTerm, ModuleNameResult),
    (
        VersionNumberTerm = term.functor(term.integer(VersionNumber), [], _),
        VersionNumber = version_numbers_version_number
    ->
        (
            ModuleNameResult = ok1(ModuleName)
        ->
            recompilation.version.parse_version_numbers(VersionNumbersTerm,
                Result0),
            (
                Result0 = ok1(VersionNumbers),
                varset.coerce(VarSet0, VarSet),
                Result1 = ok1(item_module_defn(VarSet,
                    md_version_numbers(ModuleName, VersionNumbers))),
                check_no_attributes(Result1, Attributes, Result)
            ;
                Result0 = error1(Errors),
                Result = error1(Errors)
            )
        ;
            Msg = "invalid module name in `:- version_numbers'",
            Result = error1([Msg - ModuleNameTerm])
        )
    ;
        ( VersionNumberTerm = term.functor(_, _, Context) ->
            Msg = "interface file needs to be recreated, " ++
                "the version numbers are out of date",
            dummy_term_with_context(Context, DummyTerm),
            Warning = item_warning(yes(warn_smart_recompilation),
                Msg, DummyTerm),
            Result = ok1(item_nothing(yes(Warning)))
        ;
            Msg = "invalid version number in `:- version_numbers'",
            Result = error1([Msg - VersionNumberTerm])
        )
    ).

process_decl(ModuleName, VarSet, InitDecl, Args, Attributes, Result) :-
    ( InitDecl = "initialise" ; InitDecl = "initialize" ),
    parse_initialise_decl(ModuleName, VarSet, Args, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet, FinalDecl, Args, Attributes, Result) :-
    ( FinalDecl = "finalise" ; FinalDecl = "finalize" ),
    parse_finalise_decl(ModuleName, VarSet, Args, Result0),
    check_no_attributes(Result0, Attributes, Result).

process_decl(ModuleName, VarSet, "mutable", Args, Attributes, Result) :-
    parse_mutable_decl(ModuleName, VarSet, Args, Result0),
    check_no_attributes(Result0, Attributes, Result).

:- pred parse_decl_attribute(string::in, list(term)::in, decl_attribute::out,
    term::out) is semidet.

parse_decl_attribute("impure", [Decl],
        decl_attr_purity(purity_impure), Decl).
parse_decl_attribute("semipure", [Decl],
        decl_attr_purity(purity_semipure), Decl).
parse_decl_attribute("<=", [Decl, Constraints],
        decl_attr_constraints(quant_type_univ, Constraints), Decl).
parse_decl_attribute("=>", [Decl, Constraints],
        decl_attr_constraints(quant_type_exist, Constraints), Decl).
parse_decl_attribute("some", [TVars, Decl],
        decl_attr_quantifier(quant_type_exist, TVarsList), Decl) :-
    parse_list_of_vars(TVars, TVarsList).
parse_decl_attribute("all", [TVars, Decl],
        decl_attr_quantifier(quant_type_univ, TVarsList), Decl) :-
    parse_list_of_vars(TVars, TVarsList).
parse_decl_attribute("solver", [Decl], decl_attr_solver_type, Decl).

:- pred check_no_attributes(maybe1(T)::in, decl_attrs::in, maybe1(T)::out)
    is det.

check_no_attributes(Result0, Attributes, Result) :-
    (
        Result0 = ok1(_),
        Attributes = [Attr - Term | _]
    ->
        Message = attribute_description(Attr) ++ " not allowed here",
        Result = error1([Message - Term])
    ;
        Result = Result0
    ).

:- func attribute_description(decl_attribute) = string.

attribute_description(decl_attr_purity(_)) = "purity specifier".
attribute_description(decl_attr_quantifier(quant_type_univ, _)) =
    "universal quantifier (`all')".
attribute_description(decl_attr_quantifier(quant_type_exist, _)) =
    "existential quantifier (`some')".
attribute_description(decl_attr_constraints(quant_type_univ, _)) =
    "type class constraint (`<=')".
attribute_description(decl_attr_constraints(quant_type_exist, _)) =
    "existentially quantified type class constraint (`=>')".
attribute_description(decl_attr_solver_type) = "solver type specifier".

%-----------------------------------------------------------------------------%

:- pred parse_promise(module_name::in, promise_type::in, varset::in,
    list(term)::in, decl_attrs::in, maybe1(item)::out) is semidet.

parse_promise(ModuleName, PromiseType, VarSet, [Term], Attributes, Result) :-
    varset.coerce(VarSet, ProgVarSet0),
    parse_goal(Term, MaybeGoal0, ProgVarSet0, ProgVarSet),
    (
        MaybeGoal0 = ok1(Goal0),
        % Get universally quantified variables.
        (
            PromiseType = promise_type_true,
            ( Goal0 = all_expr(UnivVars0, AllGoal) - _Context ->
                UnivVars0 = UnivVars,
                Goal = AllGoal
            ;
                UnivVars = [],
                Goal = Goal0
            )
        ;
            ( PromiseType = promise_type_exclusive
            ; PromiseType = promise_type_exhaustive
            ; PromiseType = promise_type_exclusive_exhaustive
            ),
            get_quant_vars(quant_type_univ, ModuleName, Attributes, _,
                [], UnivVars0),
            list.map(term.coerce_var, UnivVars0, UnivVars),
            Goal0 = Goal
        ),
        Result = ok1(item_promise(PromiseType, Goal, ProgVarSet, UnivVars))
    ;
        MaybeGoal0 = error1(Errors),
        Result = error1(Errors)
    ).

%-----------------------------------------------------------------------------%

:- pred parse_type_decl(module_name::in, varset::in, term::in, decl_attrs::in,
    maybe1(item)::out) is det.

parse_type_decl(ModuleName, VarSet, TypeDecl, Attributes, Result) :-
    (
        TypeDecl = term.functor(term.atom(Name), Args, _),
        parse_type_decl_type(ModuleName, Name, Args, Attributes, Cond, R)
    ->
        R1 = R,
        Cond1 = Cond
    ;
        process_abstract_type(ModuleName, TypeDecl, Attributes, R1),
        Cond1 = cond_true
    ),
    % We should check the condition for errors (don't bother at the moment,
    % since we ignore conditions anyhow :-).
    process_maybe1(make_type_defn(VarSet, Cond1), R1, Result).

:- pred make_type_defn(varset::in, condition::in, processed_type_body::in,
    item::out) is det.

make_type_defn(VarSet0, Cond, processed_type_body(Name, Args, TypeDefn),
        item_type_defn(VarSet, Name, Args, TypeDefn, Cond)) :-
    varset.coerce(VarSet0, VarSet).

:- pred make_external(varset::in, maybe(backend)::in, sym_name_specifier::in,
    item::out) is det.

make_external(VarSet0, MaybeBackend, SymSpec,
        item_module_defn(VarSet, md_external(MaybeBackend, SymSpec))) :-
    varset.coerce(VarSet0, VarSet).

:- pred get_is_solver_type(is_solver_type::out,
    decl_attrs::in, decl_attrs::out) is det.

get_is_solver_type(IsSolverType, !Attributes) :-
    ( !.Attributes = [decl_attr_solver_type - _ | !:Attributes] ->
        IsSolverType = solver_type
    ;
        IsSolverType = non_solver_type
    ).

%-----------------------------------------------------------------------------%

    % Add a warning message to the list of messages.
    %
:- pred add_warning(string::in, term::in, message_list::in, message_list::out)
    is det.

add_warning(Warning, Term, Msgs, [Msg - Term | Msgs]) :-
    string.append("Warning: ", Warning, Msg).

    % Add an error message to the list of messages.
    %
:- pred add_error(pair(string, term)::in, message_list::in, message_list::out)
    is det.

add_error(BaseMsg - Term, Msgs, [Msg - Term | Msgs]) :-
    string.append("Error: ",  BaseMsg, Msg).

%-----------------------------------------------------------------------------%

    % parse_type_decl_type(Term, Condition, Result) succeeds if Term is
    % a "type" type declaration, and binds Condition to the condition for
    % that declaration (if any), and Result to a representation of the
    % declaration.
    %
:- pred parse_type_decl_type(module_name::in, string::in, list(term)::in,
    decl_attrs::in, condition::out, maybe1(processed_type_body)::out)
    is semidet.

parse_type_decl_type(ModuleName, "--->", [HeadTerm, BodyTerm], Attributes0,
        Condition, Result) :-
    get_condition(BodyTerm, Body, Condition),
    get_is_solver_type(IsSolverType, Attributes0, Attributes),
    (
        IsSolverType = solver_type,
        Msg = "a solver type cannot have data constructors",
        Result = error1([Msg - HeadTerm])
    ;
        IsSolverType = non_solver_type,
        du_type_rhs_ctors_and_where_terms(Body, CtorsTerm, MaybeWhereTerm),
        CtorsResult = convert_constructors(ModuleName, CtorsTerm),
        (
            CtorsResult = error1(Errors),
            Result = error1(Errors)
        ;
            CtorsResult = ok1(Ctors),
            WhereResult = parse_type_decl_where_term(non_solver_type,
                ModuleName, MaybeWhereTerm),
            (
                WhereResult = error2(Errors),
                Result = error1(Errors)
            ;
                % The code to process `where' attributes will return an error
                % result if solver attributes are given for a non-solver type.
                % Because this is a du type, if the unification with
                % WhereResult succeeds then _NoSolverTypeDetails is
                % guaranteed to be `no'.
                WhereResult = ok2(_NoSolverTypeDetails, MaybeUserEqComp),
                process_du_type(ModuleName, HeadTerm, Body, Ctors,
                    MaybeUserEqComp, Result0),
                check_no_attributes(Result0, Attributes, Result)
            )
        )
    ).

parse_type_decl_type(ModuleName, "==", [HeadTerm, BodyTerm], Attributes,
        Condition, Result) :-
    get_condition(BodyTerm, Body, Condition),
    process_eqv_type(ModuleName, HeadTerm, Body, Result0),
    check_no_attributes(Result0, Attributes, Result).

parse_type_decl_type(ModuleName, "where", [HeadTerm, BodyTerm], Attributes0,
        Condition, Result) :-
    get_condition(BodyTerm, Body, Condition),
    get_is_solver_type(IsSolverType, Attributes0, Attributes),
    (
        IsSolverType = non_solver_type,
        Msg = "only solver types can be defined by a `where' block alone",
        Result = error1([Msg - HeadTerm])
    ;
        IsSolverType = solver_type,
        Result0 = parse_type_decl_where_term(solver_type, ModuleName,
            yes(Body)),
        (
            Result0 = error2(Errors),
            Result = error1(Errors)
        ;
            Result0 = ok2(MaybeSolverTypeDetails, MaybeUserEqComp),
            process_solver_type(ModuleName, HeadTerm,
                MaybeSolverTypeDetails, MaybeUserEqComp, Result1),
            check_no_attributes(Result1, Attributes, Result)
        )
    ).

:- pred du_type_rhs_ctors_and_where_terms(term::in,
    term::out, maybe(term)::out) is det.

du_type_rhs_ctors_and_where_terms(Term, CtorsTerm, MaybeWhereTerm) :-
    (
        Term = term.functor(term.atom("where"), [CtorsTerm0, WhereTerm],
            _Context)
    ->
        CtorsTerm      = CtorsTerm0,
        MaybeWhereTerm = yes(WhereTerm)
    ;
        CtorsTerm      = Term,
        MaybeWhereTerm = no
    ).

%-----------------------------------------------------------------------------%

    % parse_type_decl_pred(ModuleName, VarSet, Pred, Attributes, Result)
    % succeeds if Pred is a predicate type declaration, and binds Result
    % to a representation of the declaration.
    %
:- pred parse_type_decl_pred(module_name::in, varset::in, term::in,
    decl_attrs::in, maybe1(item)::out) is det.

parse_type_decl_pred(ModuleName, VarSet, Pred, Attributes, Result) :-
    get_condition(Pred, Body, Condition),
    get_determinism(Body, Body2, MaybeDeterminism),
    get_with_inst(Body2, Body3, WithInst),
    get_with_type(Body3, Body4, WithTypeResult),
    ( WithTypeResult = ok1(WithType),
        process_type_decl_pred_or_func(pf_predicate, ModuleName, WithType,
            WithInst, MaybeDeterminism, VarSet, Body4, Condition, Attributes,
            Result)
    ;
        WithTypeResult = error1(Errors),
        Result = error1(Errors)
    ).

:- pred process_type_decl_pred_or_func(pred_or_func::in, module_name::in,
    maybe(mer_type)::in, maybe1(maybe(mer_inst))::in,
    maybe1(maybe(determinism))::in, varset::in, term::in, condition::in,
    decl_attrs::in, maybe1(item)::out) is det.

process_type_decl_pred_or_func(PredOrFunc, ModuleName, WithType, WithInst0,
        MaybeDeterminism0, VarSet, Body, Condition, Attributes, Result) :-
    (
        MaybeDeterminism0 = ok1(MaybeDeterminism),
        (
            WithInst0 = ok1(WithInst),
            ( MaybeDeterminism = yes(_), WithInst = yes(_) ->
                Msg = "`with_inst` and determinism both specified",
                Result = error1([Msg - Body])
            ; WithInst = yes(_), WithType = no ->
                Msg = "`with_inst` specified without `with_type`",
                Result = error1([Msg - Body])
            ;
                (
                    % Function declarations with `with_type` annotations
                    % have the same form as predicate declarations.
                    PredOrFunc = pf_function,
                    WithType = no
                ->
                    process_func(ModuleName, VarSet, Body, Condition,
                        MaybeDeterminism, Attributes, Result)
                ;
                    process_pred_or_func(PredOrFunc, ModuleName, VarSet, Body,
                        Condition, WithType, WithInst, MaybeDeterminism,
                        Attributes, Result)
                )
            )
        ;
            WithInst0 = error1(Errors),
            Result = error1(Errors)
        )
    ;
        MaybeDeterminism0 = error1(Errors),
        Result = error1(Errors)
    ).

%-----------------------------------------------------------------------------%

    % parse_type_decl_func(ModuleName, Varset, Func, Attributes, Result)
    % succeeds if Func is a function type declaration, and binds Result to
    % a representation of the declaration.
    %
:- pred parse_type_decl_func(module_name::in, varset::in, term::in,
    decl_attrs::in, maybe1(item)::out) is det.

parse_type_decl_func(ModuleName, VarSet, Func, Attributes, Result) :-
    get_condition(Func, Body, Condition),
    get_determinism(Body, Body2, MaybeDeterminism),
    get_with_inst(Body2, Body3, WithInst),
    get_with_type(Body3, Body4, WithTypeResult),
    (
        WithTypeResult = ok1(WithType),
        process_type_decl_pred_or_func(pf_function, ModuleName,
            WithType, WithInst, MaybeDeterminism, VarSet, Body4,
            Condition, Attributes, Result)
    ;
        WithTypeResult = error1(Errors),
        Result = error1(Errors)
    ).

%-----------------------------------------------------------------------------%

    % parse_mode_decl_pred(ModuleName, Pred, Condition, Result) succeeds
    % if Pred is a predicate mode declaration, and binds Condition to the
    % condition for that declaration (if any), and Result to a
    % representation of the declaration.
    %
:- pred parse_mode_decl_pred(module_name::in, varset::in, term::in,
    decl_attrs::in, maybe1(item)::out) is det.

parse_mode_decl_pred(ModuleName, VarSet, Pred, Attributes, Result) :-
    get_condition(Pred, Body, Condition),
    get_determinism(Body, Body2, MaybeDeterminism0),
    get_with_inst(Body2, Body3, WithInst0),
    (
        MaybeDeterminism0 = ok1(MaybeDeterminism),
        (
            WithInst0 = ok1(WithInst),
            (
                MaybeDeterminism = yes(_),
                WithInst = yes(_)
            ->
                Msg = "`with_inst` and determinism both specified",
                Result = error1([Msg - Body])
            ;
                process_mode(ModuleName, VarSet, Body3, Condition, Attributes,
                    WithInst, MaybeDeterminism, Result)
            )
        ;
            WithInst0 = error1(Errors),
            Result = error1(Errors)
        )
    ;
        MaybeDeterminism0 = error1(Errors),
        Result = error1(Errors)
    ).

%-----------------------------------------------------------------------------%

:- pred parse_initialise_decl(module_name::in, varset::in, list(term)::in,
    maybe1(item)::out) is semidet.

parse_initialise_decl(_ModuleName, _VarSet, [Term], Result) :-
    parse_symbol_name_specifier(Term, MaybeSymNameSpecifier),
    (
        MaybeSymNameSpecifier = error1(Errors),
        Result = error1(Errors)
    ;
        MaybeSymNameSpecifier = ok1(SymNameSpecifier),
        (
            SymNameSpecifier = name(_),
            Result = error1(["`initialise' declaration requires arity" - Term])
        ;
            SymNameSpecifier = name_arity(SymName, Arity),
            (
                ( Arity = 0 ; Arity = 2 )
            ->
                Result = ok1(item_initialise(user, SymName, Arity))
            ;
                Msg = "`initialise' declaration specifies a predicate " ++
                    "whose arity is not zero or two",
                Result = error1([Msg - Term])
            )
        )
    ).

%-----------------------------------------------------------------------------%

:- pred parse_finalise_decl(module_name::in, varset::in, list(term)::in,
    maybe1(item)::out) is semidet.

parse_finalise_decl(_ModuleName, _VarSet, [Term], Result) :-
    parse_symbol_name_specifier(Term, MaybeSymNameSpecifier),
    (
        MaybeSymNameSpecifier = error1(Errors),
        Result = error1(Errors)
    ;
        MaybeSymNameSpecifier = ok1(SymNameSpecifier),
        (
            SymNameSpecifier = name(_),
            Result = error1(["`finalise' declaration requires arity" - Term])
        ;
            SymNameSpecifier = name_arity(SymName, Arity),
            (
                ( Arity = 0 ; Arity = 2 )
            ->
                Result = ok1(item_finalise(user, SymName, Arity))
            ;
                Msg = "`finalise' declaration specifies a predicate " ++
                    "whose arity is not zero or two",
                Result = error1([Msg - Term])
            )
        )
    ).

%-----------------------------------------------------------------------------%
%
% Mutable declarations
%
% See prog_mutable.m for implementation details.
%

:- pred parse_mutable_decl(module_name::in, varset::in, list(term)::in,
    maybe1(item)::out) is semidet.

parse_mutable_decl(_ModuleName, Varset, Terms, Result) :-
    Terms = [NameTerm, TypeTerm, ValueTerm, InstTerm | OptMutAttrsTerm],
    parse_mutable_name(NameTerm, NameResult),
    parse_mutable_type(TypeTerm, TypeResult),
    term.coerce(ValueTerm, Value),
    varset.coerce(Varset, ProgVarset),
    parse_mutable_inst(InstTerm, InstResult),
    %
    % The list of attributes is optional.
    %
    (
        OptMutAttrsTerm = [],
        MutAttrsResult = ok1(default_mutable_attributes)
    ;
        OptMutAttrsTerm = [MutAttrsTerm],
        parse_mutable_attrs(MutAttrsTerm, MutAttrsResult)
    ),
    (
        NameResult = ok1(Name),
        TypeResult = ok1(Type),
        InstResult = ok1(Inst),
        MutAttrsResult = ok1(MutAttrs)
    ->
        % We *must* attach the varset to the mutable item because if the
        % initial value is non-ground, then the initial value will be a
        % variable and the mutable initialisation predicate will contain
        % references to it.  Ignoring the varset may lead to later compiler
        % passes attempting to reuse this variable when fresh variables are
        % allocated.
        Result = ok1(item_mutable(Name, Type, Value, Inst, MutAttrs,
            ProgVarset))
    ;
        Errors = get_any_errors1(NameResult) ++ get_any_errors1(TypeResult) ++
            get_any_errors1(InstResult) ++ get_any_errors1(MutAttrsResult),
        Result = error1(Errors)
    ).

:- pred parse_mutable_name(term::in, maybe1(string)::out) is det.

parse_mutable_name(NameTerm, NameResult) :-
    ( NameTerm = term.functor(atom(Name), [], _) ->
        NameResult = ok1(Name)
    ;
        NameResult = error1(["invalid mutable name" - NameTerm])
    ).

:- pred parse_mutable_type(term::in, maybe1(mer_type)::out) is det.

parse_mutable_type(TypeTerm, TypeResult) :-
    ( term.contains_var(TypeTerm, _) ->
        Msg = "the type in a mutable declaration cannot contain variables",
        TypeResult = error1([Msg - TypeTerm])
    ;
        parse_type(TypeTerm, TypeResult)
    ).

:- pred parse_mutable_inst(term::in, maybe1(mer_inst)::out) is det.

parse_mutable_inst(InstTerm, InstResult) :-
    ( term.contains_var(InstTerm, _) ->
        Msg = "the inst in a mutable declaration cannot contain variables",
        InstResult = error1([Msg - InstTerm])
    ; convert_inst(no_allow_constrained_inst_var, InstTerm, Inst) ->
        InstResult = ok1(Inst)
    ;
        InstResult = error1(["invalid inst in mutable declaration" - InstTerm])
    ).

:- type collected_mutable_attribute
    --->    mutable_attr_trailed(mutable_trailed)
    ;       mutable_attr_foreign_name(foreign_name)
    ;       mutable_attr_attach_to_io_state(bool)
    ;       mutable_attr_constant(bool)
    ;       mutable_attr_thread_local(mutable_thread_local).

:- pred parse_mutable_attrs(term::in,
    maybe1(mutable_var_attributes)::out) is det.

parse_mutable_attrs(MutAttrsTerm, MutAttrsResult) :-
    Attributes0 = default_mutable_attributes,
    ConflictingAttributes = [
        mutable_attr_trailed(mutable_trailed) -
            mutable_attr_trailed(mutable_untrailed),
        mutable_attr_trailed(mutable_trailed) -
            mutable_attr_thread_local(mutable_thread_local),
        mutable_attr_constant(yes) - mutable_attr_trailed(mutable_trailed),
        mutable_attr_constant(yes) - mutable_attr_attach_to_io_state(yes),
        mutable_attr_constant(yes) -
            mutable_attr_thread_local(mutable_thread_local)
    ],
    (
        list_term_to_term_list(MutAttrsTerm, MutAttrTerms),
        map_parser(parse_mutable_attr, MutAttrTerms, MaybeAttrList),
        MaybeAttrList = ok1(CollectedMutAttrs)
    ->
        % We check for trailed/untrailed, constant/trailed,
        % trailed/thread_local, constant/attach_to_io_state,
        % constant/thread_local conflicts here and deal with conflicting
        % foreign_name attributes in make_hlds_passes.m.
        %
        (
            list.member(Conflict1 - Conflict2, ConflictingAttributes),
            list.member(Conflict1, CollectedMutAttrs),
            list.member(Conflict2, CollectedMutAttrs)
        ->
            Msg = "conflicting attributes in attribute list",
            MutAttrsResult = error1([Msg - MutAttrsTerm])
        ;
            list.foldl(process_mutable_attribute, CollectedMutAttrs,
                Attributes0, Attributes),
            MutAttrsResult = ok1(Attributes)
        )
    ;
        Msg = "malformed attribute list in mutable declaration",
        MutAttrsResult = error1([Msg - MutAttrsTerm])
    ).

:- pred process_mutable_attribute(collected_mutable_attribute::in,
    mutable_var_attributes::in, mutable_var_attributes::out) is det.

process_mutable_attribute(mutable_attr_trailed(Trailed), !Attributes) :-
    set_mutable_var_trailed(Trailed, !Attributes).
process_mutable_attribute(mutable_attr_foreign_name(ForeignName),
        !Attributes) :-
    set_mutable_add_foreign_name(ForeignName, !Attributes).
process_mutable_attribute(mutable_attr_attach_to_io_state(AttachToIOState),
        !Attributes) :-
    set_mutable_var_attach_to_io_state(AttachToIOState, !Attributes).
process_mutable_attribute(mutable_attr_constant(Constant), !Attributes) :-
    set_mutable_var_constant(Constant, !Attributes),
    (
        Constant = yes,
        set_mutable_var_trailed(mutable_untrailed, !Attributes),
        set_mutable_var_attach_to_io_state(no, !Attributes)
    ;
        Constant = no
    ).
process_mutable_attribute(mutable_attr_thread_local(ThrLocal), !Attributes) :-
    set_mutable_var_thread_local(ThrLocal, !Attributes).

:- pred parse_mutable_attr(term::in,
    maybe1(collected_mutable_attribute)::out) is det.

parse_mutable_attr(MutAttrTerm, MutAttrResult) :-
    (
        MutAttrTerm = term.functor(term.atom(String), [], _),
        (
            String  = "untrailed",
            MutAttr = mutable_attr_trailed(mutable_untrailed)
        ;
            String = "trailed",
            MutAttr = mutable_attr_trailed(mutable_trailed)
        ;
            String  = "attach_to_io_state",
            MutAttr = mutable_attr_attach_to_io_state(yes)
        ;
            String = "constant",
            MutAttr = mutable_attr_constant(yes)
        ;
            String = "thread_local",
            MutAttr = mutable_attr_thread_local(mutable_thread_local)
        )
    ->
        MutAttrResult = ok1(MutAttr)
    ;
        MutAttrTerm = term.functor(term.atom("foreign_name"), Args, _),
        Args = [LangTerm, ForeignNameTerm],
        parse_foreign_language(LangTerm, Lang),
        ForeignNameTerm = term.functor(term.string(ForeignName), [], _)
    ->
        MutAttr = mutable_attr_foreign_name(foreign_name(Lang, ForeignName)),
        MutAttrResult = ok1(MutAttr)
    ;
        Msg = "unrecognised attribute in mutable declaration",
        MutAttrResult = error1([Msg - MutAttrTerm])
    ).

%-----------------------------------------------------------------------------%

    % The optional `where ...' part of the type definition syntax
    % is a comma separated list of special type `attributes'.
    %
    % The possible attributes (in this order) are either
    % - `type_is_abstract_noncanonical' on its own appears only in .int2
    %   files and indicates that the type has user-defined equality and/or
    %   comparison, but that what these predicates are is not known at
    %   this point
    % or
    % - `representation is <<type name>>' (required for solver types)
    % - `initialisation is <<pred name>>' (required for solver types)
    % - `ground is <<inst>>' (required for solver types)
    % - `any is <<inst>>' (required for solver types)
    % - `equality is <<pred name>>' (optional)
    % - `comparison is <<pred name>>' (optional).
    %
parse_type_decl_where_part_if_present(IsSolverType, ModuleName, Term0, Term,
        Result) :-
    (
        Term0 = term.functor(term.atom("where"), [Term1, WhereTerm],
            _Context)
    ->
        Term = Term1,
        Result = parse_type_decl_where_term(IsSolverType, ModuleName,
            yes(WhereTerm))
    ;
        Term = Term0,
        Result = ok2(no, no)
    ).

    % The maybe2 wrapper allows us to return an error code or a pair
    % of results.  Either result half may be empty, hence the maybe
    % wrapper around each of those.
    %
:- func parse_type_decl_where_term(is_solver_type, module_name, maybe(term)) =
    maybe2(maybe(solver_type_details), maybe(unify_compare)).

parse_type_decl_where_term(_IsSolverType, _ModuleName, no) =
    ok2(no, no).

parse_type_decl_where_term(IsSolverType, ModuleName, MaybeTerm0 @ yes(Term)) =
        MaybeWhereDetails :-
    some [!MaybeTerm] (
        !:MaybeTerm = MaybeTerm0,
        parse_where_attribute(parse_where_type_is_abstract_noncanonical,
            TypeIsAbstractNoncanonicalResult, !MaybeTerm),
        parse_where_attribute(parse_where_is("representation",
                parse_where_type_is(ModuleName)),
            RepresentationIsResult, !MaybeTerm),
        parse_where_attribute(parse_where_initialisation_is(ModuleName),
            InitialisationIsResult, !MaybeTerm),
        parse_where_attribute(parse_where_is("ground",
                parse_where_inst_is(ModuleName)),
            GroundIsResult, !MaybeTerm),
        parse_where_attribute(parse_where_is("any",
                parse_where_inst_is(ModuleName)),
            AnyIsResult, !MaybeTerm),
        parse_where_attribute(parse_where_is("constraint_store",
                parse_where_mutable_is(ModuleName)),
            CStoreIsResult, !MaybeTerm),
        parse_where_attribute(parse_where_is("equality",
                parse_where_pred_is(ModuleName)),
            EqualityIsResult, !MaybeTerm),
        parse_where_attribute(parse_where_is("comparison",
                parse_where_pred_is(ModuleName)),
            ComparisonIsResult, !MaybeTerm),
        parse_where_end(!.MaybeTerm, WhereEndResult)
    ),
    MaybeWhereDetails =
        make_maybe_where_details(
            IsSolverType,
            TypeIsAbstractNoncanonicalResult,
            RepresentationIsResult,
            InitialisationIsResult,
            GroundIsResult,
            AnyIsResult,
            CStoreIsResult,
            EqualityIsResult,
            ComparisonIsResult,
            WhereEndResult,
            Term
        ).

    % parse_where_attribute(Parser, Result, MaybeTerm0, MaybeTerm)
    % handles
    % - where MaybeTerm0 may contain nothing
    % - where MaybeTerm0 may be a comma-separated pair
    % - applies Parser to the appropriate (sub)term to obtain Result
    % - sets MaybeTerm depending upon whether the Result is an error
    % or not and whether there is more to parse because MaybeTerm0
    % was a comma-separated pair.
    %
:- pred parse_where_attribute((func(term) = maybe1(maybe(T)))::in,
    maybe1(maybe(T))::out, maybe(term)::in, maybe(term)::out) is det.

parse_where_attribute(_Parser, ok1(no), no, no).
parse_where_attribute( Parser, Result, yes(Term0), MaybeRest) :-
    (
        Term0 = term.functor(term.atom(","), [Term1, Term], _Context)
    ->
        Result         = Parser(Term1),
        MaybeRestIfYes = yes(Term)
    ;
        Result         = Parser(Term0),
        MaybeRestIfYes = no
    ),
    (
        Result = error1(_),
        MaybeRest = no
    ;
        Result = ok1(no),
        MaybeRest = yes(Term0)
    ;
        Result = ok1(yes(_)),
        MaybeRest = MaybeRestIfYes
    ).

    % Parser for `where ...' attributes of the form
    % `attributename is attributevalue'.
    %
:- func parse_where_is(string, func(term) = maybe1(T), term) =
    maybe1(maybe(T)).

parse_where_is(Name, Parser, Term) = Result :-
    ( Term = term.functor(term.atom("is"), [LHS, RHS], _Context1) ->
        ( LHS = term.functor(term.atom(Name), [], _Context2) ->
            RHSResult = Parser(RHS),
            (
                RHSResult = ok1(ParsedRHS),
                Result    = ok1(yes(ParsedRHS))
            ;
                RHSResult = error1(Errors),
                Result    = error1(Errors)
            )
        ;
            Result = ok1(no)
        )
    ;
        Result = error1(["expected is/2" - Term])
    ).

:- func parse_where_type_is_abstract_noncanonical(term) = maybe1(maybe(unit)).

parse_where_type_is_abstract_noncanonical(Term) =
    (
        Term = term.functor(term.atom("type_is_abstract_noncanonical"), [],
            _Context)
    ->
        ok1(yes(unit))
    ;
        ok1(no)
    ).

:- func parse_where_initialisation_is(module_name, term) =
    maybe1(maybe(sym_name)).

parse_where_initialisation_is(ModuleName, Term) = Result :-
    Result0 = parse_where_is("initialisation", parse_where_pred_is(ModuleName),
        Term),
    (
        Result0 = ok1(no)
    ->
        Result = parse_where_is("initialization",
            parse_where_pred_is(ModuleName), Term)
    ;
        Result = Result0
    ).

:- func parse_where_pred_is(module_name, term) = maybe1(sym_name).

parse_where_pred_is(ModuleName, Term) = Result :-
    parse_implicitly_qualified_symbol_name(ModuleName, Term, Result).

:- func parse_where_inst_is(module_name, term) = maybe1(mer_inst).

parse_where_inst_is(_ModuleName, Term) =
    (
        prog_io_util.convert_inst(no_allow_constrained_inst_var, Term, Inst),
        not prog_mode.inst_contains_unconstrained_var(Inst)
    ->
        ok1(Inst)
    ;
        error1(["expected a ground, unconstrained inst" - Term])
    ).

:- func parse_where_type_is(module_name, term) = maybe1(mer_type).

parse_where_type_is(_ModuleName, Term) = Result :-
    prog_io_util.parse_type(Term, Result).

:- func parse_where_mutable_is(module_name, term) = maybe1(list(item)).

parse_where_mutable_is(ModuleName, Term) = Result :-
    ( Term = term.functor(term.atom("mutable"), _Args, _Ctxt) ->
        parse_mutable_decl_term(ModuleName, Term, Result0),
        (
            Result0 = ok1(Mutable),
            Result  = ok1([Mutable])
        ;
            Result0 = error1(Errors),
            Result  = error1(Errors)
        )
    ; list_term_to_term_list(Term, Terms) ->
        map_parser(parse_mutable_decl_term(ModuleName), Terms, Result)
    ;
        Msg = "expected a mutable declaration or a list of " ++
            "mutable declarations",
        Result = error1([Msg - Term])
    ).

:- pred parse_mutable_decl_term(module_name::in, term::in, maybe1(item)::out)
    is det.

parse_mutable_decl_term(ModuleName, Term, Result) :-
    (
        Term = term.functor(term.atom("mutable"), Args, _Ctxt),
        varset.init(VarSet),
        parse_mutable_decl(ModuleName, VarSet, Args, Result0)
    ->
        Result = Result0
    ;
        Result = error1(["expected a mutable declaration" - Term])
    ).

:- pred parse_where_end(maybe(term)::in, maybe1(maybe(unit))::out) is det.

parse_where_end(no, ok1(yes(unit))).
parse_where_end(yes(Term), error1([Msg - Term])) :-
    Msg = "attributes are either badly ordered or " ++
        "contain an unrecognised attribute".

:- func make_maybe_where_details(is_solver_type, maybe1(maybe(unit)),
    maybe1(maybe(mer_type)), maybe1(maybe(init_pred)),
    maybe1(maybe(mer_inst)), maybe1(maybe(mer_inst)),
    maybe1(maybe(list(item))),
    maybe1(maybe(equality_pred)), maybe1(maybe(comparison_pred)),
    maybe1(maybe(unit)), term)
    = maybe2(maybe(solver_type_details), maybe(unify_compare)).

make_maybe_where_details(IsSolverType, TypeIsAbstractNoncanonicalResult,
        RepresentationIsResult, InitialisationIsResult,
        GroundIsResult, AnyIsResult, CStoreIsResult,
        EqualityIsResult, ComparisonIsResult, WhereEndResult, WhereTerm)
        = Result :-
    (
        TypeIsAbstractNoncanonicalResult = ok1(TypeIsAbstractNoncanonical),
        RepresentationIsResult = ok1(RepresentationIs),
        InitialisationIsResult = ok1(InitialisationIs),
        GroundIsResult = ok1(GroundIs),
        AnyIsResult = ok1(AnyIs),
        CStoreIsResult = ok1(CStoreIs),
        EqualityIsResult = ok1(EqualityIs),
        ComparisonIsResult = ok1(ComparisonIs),
        WhereEndResult = ok1(WhereEnd)
    ->
        Result = make_maybe_where_details_2(IsSolverType,
            TypeIsAbstractNoncanonical, RepresentationIs, InitialisationIs,
            GroundIs, AnyIs, CStoreIs, EqualityIs, ComparisonIs,
            WhereEnd, WhereTerm)
    ;
        TypeIsAbstractNoncanonicalErrors =
            get_any_errors1(TypeIsAbstractNoncanonicalResult),
        RepresentationIsErrors = get_any_errors1(RepresentationIsResult),
        InitialisationIsErrors = get_any_errors1(InitialisationIsResult),
        GroundIsErrors = get_any_errors1(GroundIsResult),
        AnyIsErrors = get_any_errors1(AnyIsResult),
        CStoreIsErrors = get_any_errors1(CStoreIsResult),
        EqualityIsErrors = get_any_errors1(EqualityIsResult),
        ComparisonIsErrors = get_any_errors1(ComparisonIsResult),
        WhereEndErrors = get_any_errors1(WhereEndResult),
        Errors = TypeIsAbstractNoncanonicalErrors ++ RepresentationIsErrors ++
            InitialisationIsErrors ++ GroundIsErrors ++ AnyIsErrors ++
            CStoreIsErrors ++ EqualityIsErrors ++ ComparisonIsErrors ++
            WhereEndErrors,
        Result = error2(Errors)
    ).

:- func make_maybe_where_details_2(is_solver_type, maybe(unit),
    maybe(mer_type), maybe(init_pred), maybe(mer_inst), maybe(mer_inst),
    maybe(list(item)), maybe(equality_pred), maybe(comparison_pred),
    maybe(unit), term)
    = maybe2(maybe(solver_type_details), maybe(unify_compare)).

make_maybe_where_details_2(IsSolverType, TypeIsAbstractNoncanonical,
        RepresentationIs, InitialisationIs, GroundIs, AnyIs, CStoreIs,
        EqualityIs, ComparisonIs, _WhereEnd, WhereTerm) = Result :-
    (
        TypeIsAbstractNoncanonical = yes(_),
        % rafe: XXX I think this is wrong. There isn't a problem with having
        % the solver_type_details and type_is_abstract_noncanonical.
        (
            RepresentationIs = maybe.no,
            InitialisationIs = maybe.no,
            GroundIs         = maybe.no,
            AnyIs            = maybe.no,
            EqualityIs       = maybe.no,
            ComparisonIs     = maybe.no,
            CStoreIs         = maybe.no
        ->
            Result = ok2(no, yes(abstract_noncanonical_type(IsSolverType)))
        ;
            Msg = "`where type_is_abstract_noncanonical' "
                ++ " excludes other `where ...' attributes",
            Result = error2([Msg - WhereTerm])
        )
    ;
        TypeIsAbstractNoncanonical = maybe.no,
        (
            IsSolverType = solver_type,
            (
                RepresentationIs = yes(RepnType),
                InitialisationIs = yes(InitPred),
                GroundIs         = MaybeGroundInst,
                AnyIs            = MaybeAnyInst,
                EqualityIs       = MaybeEqPred,
                ComparisonIs     = MaybeCmpPred,
                CStoreIs         = MaybeMutableItems
            ->
                (
                    MaybeGroundInst = yes(GroundInst)
                ;
                    MaybeGroundInst = no,
                    GroundInst = ground_inst
                ),
                (
                    MaybeAnyInst = yes(AnyInst)
                ;
                    MaybeAnyInst = no,
                    AnyInst = ground_inst
                ),
                (
                    MaybeMutableItems = yes(MutableItems)
                ;
                    MaybeMutableItems = no,
                    MutableItems = []
                ),
                MaybeSolverTypeDetails = yes(solver_type_details(
                    RepnType, InitPred, GroundInst, AnyInst, MutableItems)),
                (
                    MaybeEqPred = no,
                    MaybeCmpPred = no
                ->
                    MaybeUnifyCompare = no
                ;
                    MaybeUnifyCompare = yes(unify_compare(
                        MaybeEqPred, MaybeCmpPred))
                ),
                Result = ok2(MaybeSolverTypeDetails, MaybeUnifyCompare)
            ;
                RepresentationIs = no
            ->
                Msg = "solver type definitions must have a" ++
                    "`representation' attribute",
                Result = error2([Msg - WhereTerm])
            ;
                InitialisationIs = no
            ->
                Msg = "solver type definitions must have an" ++
                    "`initialisation' attribute",
                Result = error2([Msg - WhereTerm])
            ;
               unexpected(this_file, "make_maybe_where_details_2: " ++
                    "shouldn't have reached this point! (1)")
            )
        ;
            IsSolverType = non_solver_type,
            (
                ( RepresentationIs = yes(_)
                ; InitialisationIs = yes(_)
                ; GroundIs         = yes(_)
                ; AnyIs            = yes(_)
                ; CStoreIs         = yes(_)
                )
            ->
                Msg = "solver type attribute given for non-solver type",
                Result = error2([Msg - WhereTerm])
            ;
                EqualityIs = MaybeEqPred,
                ComparisonIs = MaybeCmpPred,
                Result = ok2(no, yes(unify_compare(MaybeEqPred, MaybeCmpPred)))
            )
        )
    ).

    % get_determinism(Term0, Term, Determinism) binds Determinism
    % to a representation of the determinism condition of Term0, if any,
    % and binds Term to the other part of Term0. If Term0 does not
    % contain a determinism, then Determinism is bound to `unspecified'.
    %
:- pred get_determinism(term::in, term::out, maybe1(maybe(determinism))::out)
    is det.

get_determinism(Body0, Body, Determinism) :-
    (
        Body0 = term.functor(term.atom("is"), Args, _Context1),
        Args = [Body1, Determinism1]
    ->
        Body = Body1,
        (
            Determinism1 = term.functor(term.atom(Determinism2), [],
                _Context2),
            standard_det(Determinism2, Determinism3)
        ->
            Determinism = ok1(yes(Determinism3))
        ;
            Determinism = error1(["invalid category" - Determinism1])
        )
    ;
        Body = Body0,
        Determinism = ok1(no)
    ).

    % Process the `with_inst` part of a declaration of the form:
    % :- mode p(int) `with_inst` (pred(in, out) is det).
    %
:- pred get_with_inst(term::in, term::out, maybe1(maybe(mer_inst))::out)
    is det.

get_with_inst(Body0, Body, WithInst) :-
    (
        Body0 = term.functor(term.atom("with_inst"), [Body1, Inst1], _)
    ->
        ( convert_inst(allow_constrained_inst_var, Inst1, Inst) ->
            WithInst = ok1(yes(Inst))
        ;
            WithInst = error1(["invalid inst in `with_inst`" - Body0])
        ),
        Body = Body1
    ;
        Body = Body0,
        WithInst = ok1(no)
    ).

:- pred get_with_type(term::in, term::out, maybe1(maybe(mer_type))::out)
    is det.

get_with_type(Body0, Body, Result) :-
    (
        Body0 = term.functor(TypeQualifier, [Body1, Type1], _),
        (
            TypeQualifier = term.atom("with_type")
        ;
            TypeQualifier = term.atom(":")
        )
    ->
        Body = Body1,
        parse_type(Type1, Result0),
        (
            Result0 = ok1(Type),
            Result = ok1(yes(Type))
        ;
            Result0 = error1(Errors),
            Result = error1(Errors)
        )
    ;
        Body = Body0,
        Result = ok1(no)
    ).

%-----------------------------------------------------------------------------%

    % get_condition(Term0, Term, Condition) binds Condition
    % to a representation of the 'where' condition of Term0, if any,
    % and binds Term to the other part of Term0. If Term0 does not
    % contain a condition, then Condition is bound to true.
    %
:- pred get_condition(term::in, term::out, condition::out) is det.

get_condition(Body, Body, cond_true).

% % NU-Prolog supported type declarations of the form
% %   :- pred p(T) where p(X) : sorted(X).
% % or
% %   :- type sorted_list(T) = list(T) where X : sorted(X).
% %   :- pred p(sorted_list(T).
% % There is some code here to support that sort of thing, but
% % probably we would now need to use a different syntax, since
% % Mercury now uses `where' for different purposes (e.g. specifying
% % user-defined equality predicates, and also for type classes ...)
%
% get_condition(B, Body, Condition) :-
%   (
%       B = term.functor(term.atom("where"), [Body1, Condition1],
%           _Context)
%   ->
%       Body = Body1,
%       Condition = where(Condition1)
%   ;
%       Body = B,
%       Condition = true
%   ).

%-----------------------------------------------------------------------------%

:- type processed_type_body
    --->    processed_type_body(
                sym_name,
                list(type_param),
                type_defn
            ).

%-----------------------------------------------------------------------------%

:- pred process_solver_type(module_name::in, term::in,
    maybe(solver_type_details)::in, maybe(unify_compare)::in,
    maybe1(processed_type_body)::out) is det.

process_solver_type(ModuleName, Head, MaybeSolverTypeDetails, MaybeUserEqComp,
        Result) :-
    (
        MaybeSolverTypeDetails = yes(SolverTypeDetails),
        dummy_term(Body),
        parse_type_defn_head(ModuleName, Head, Body, Result0),
        (
            Result0 = error2(Errors),
            Result  = error1(Errors)
        ;
            Result0 = ok2(Name, Params),
            (
                RepnType = SolverTypeDetails ^ representation_type,
                type_contains_var(RepnType, Var),
                not list.member(Var, Params)
            ->
                Msg = "free type variable in representation type",
                Result = error1([Msg - Head])
            ;
                Result = ok1(processed_type_body(Name, Params,
                    parse_tree_solver_type(SolverTypeDetails,
                        MaybeUserEqComp)))
            )
        )
    ;
        MaybeSolverTypeDetails = no,
        Result = error1(["solver type with no solver_type_details" - Head])
    ).

%-----------------------------------------------------------------------------%

    % This is for "Head == Body" (equivalence) definitions.
    %
:- pred process_eqv_type(module_name::in, term::in, term::in,
    maybe1(processed_type_body)::out) is det.

process_eqv_type(ModuleName, Head, Body, Result) :-
    parse_type_defn_head(ModuleName, Head, Body, Result0),
    process_eqv_type_2(Result0, Body, Result).

:- pred process_eqv_type_2(maybe2(sym_name, list(type_param))::in, term::in,
    maybe1(processed_type_body)::out) is det.

process_eqv_type_2(error2(Errors), _, error1(Errors)).
process_eqv_type_2(ok2(Name, Params), Body0, Result) :-
    % Check that all the variables in the body occur in the head.
    (
        term.contains_var(Body0, Var),
        term.coerce_var(Var, TVar),
        \+ list.member(TVar, Params)
    ->
        Msg = "free type parameter in RHS of type definition",
        Result = error1([Msg - Body0])
    ;
        parse_type(Body0, BodyResult),
        (
            BodyResult = ok1(Body),
            Result = ok1(processed_type_body(Name, Params,
                parse_tree_eqv_type(Body)))
        ;
            BodyResult = error1(Errors),
            Result = error1(Errors)
        )
    ).

%-----------------------------------------------------------------------------%

    % process_du_type(ModuleName, TypeHead, TypeBody,
    %   MaybeUserEqComp, Result):
    %
    % Checks that its arguments are well formed, and if they are,
    % binds Result to a representation of the type information about the
    % TypeHead.
    % This is for "Head ---> Body [where ...]" (constructor) definitions.
    %
:- pred process_du_type(module_name::in, term::in, term::in,
    list(constructor)::in, maybe(unify_compare)::in,
    maybe1(processed_type_body)::out) is det.

process_du_type(ModuleName, Head, Body, Ctors, MaybeUserEqComp, Result) :-
    parse_type_defn_head(ModuleName, Head, Body, Result0),
    (
        Result0 = error2(Errors),
        Result  = error1(Errors)
    ;
        Result0 = ok2(Functor, Params),
        process_du_type_2(Functor, Params, Body, Ctors, MaybeUserEqComp,
            Result)
    ).

:- pred process_du_type_2(sym_name::in, list(type_param)::in, term::in,
    list(constructor)::in, maybe(unify_compare)::in,
    maybe1(processed_type_body)::out) is det.

process_du_type_2(Functor, Params, Body, Ctors, MaybeUserEqComp, Result) :-
    (
        % Check that all type variables in the body are either explicitly
        % existentially quantified or occur in the head.

        list.member(Ctor, Ctors),
        Ctor = ctor(ExistQVars, _Constraints, _CtorName, CtorArgs, _Ctxt),
        CtorArgTypes = list.map(func(C) = C ^ arg_type, CtorArgs),
        type_list_contains_var(CtorArgTypes, Var),
        \+ list.member(Var, ExistQVars),
        \+ list.member(Var, Params)
    ->
        Msg = "free type parameter in RHS of type definition",
        Result = error1([Msg - Body])
    ;
        % Check that all type variables in existential quantifiers do not
        % occur in the head (maybe this should just be a warning, not an error?
        % If we were to allow it, we would need to rename them apart.)

        list.member(Ctor, Ctors),
        Ctor = ctor(ExistQVars, _Constraints, _CtorName, _CtorArgs, _Ctxt),
        list.member(Var, ExistQVars),
        list.member(Var, Params)
    ->
        Msg = "type variable has overlapping scopes " ++
            "(explicit type quantifier shadows argument type)",
        Result = error1([Msg - Body])
    ;
        % Check that all type variables in existential quantifiers occur
        % somewhere in the constructor argument types or constraints.

        list.member(Ctor, Ctors),
        Ctor = ctor(ExistQVars, Constraints, _CtorName, CtorArgs, _Ctxt),
        list.member(Var, ExistQVars),
        CtorArgTypes = list.map(func(C) = C ^ arg_type, CtorArgs),
        \+ type_list_contains_var(CtorArgTypes, Var),
        constraint_list_get_tvars(Constraints, ConstraintTVars),
        \+ list.member(Var, ConstraintTVars)
    ->
        Msg = "type variable in existential quantifier " ++
            "does not occur in arguments or constraints of constructor",
        Result = error1([Msg - Body])
    ;
        % Check that all type variables in existential constraints occur in
        % the existential quantifiers.

        list.member(Ctor, Ctors),
        Ctor = ctor(ExistQVars, Constraints, _CtorName, _CtorArgs, _Ctxt),
        list.member(Constraint, Constraints),
        Constraint = constraint(_Name, ConstraintArgs),
        type_list_contains_var(ConstraintArgs, Var),
        \+ list.member(Var, ExistQVars)
    ->
        Msg = "type variables in class constraints introduced with `=>' " ++
            "must be explicitly existentially quantified using `some'",
        Result = error1([Msg - Body])
    ;
        Result = ok1(processed_type_body(Functor, Params,
            parse_tree_du_type(Ctors, MaybeUserEqComp)))
    ).

%-----------------------------------------------------------------------------%

    % process_abstract_type(ModuleName, TypeHead, Result):
    %
    % Checks that its argument is well formed, and if it is, binds Result
    % to a representation of the type information about the TypeHead.
    %
:- pred process_abstract_type(module_name::in, term::in, decl_attrs::in,
    maybe1(processed_type_body)::out) is det.

process_abstract_type(ModuleName, Head, Attributes0, Result) :-
    dummy_term(Body),
    parse_type_defn_head(ModuleName, Head, Body, Result0),
    get_is_solver_type(IsSolverType, Attributes0, Attributes),
    process_abstract_type_2(Result0, IsSolverType, Result1),
    check_no_attributes(Result1, Attributes, Result).

:- pred process_abstract_type_2(maybe2(sym_name, list(type_param))::in,
    is_solver_type::in, maybe1(processed_type_body)::out) is det.

process_abstract_type_2(error2(Errors), _, error1(Errors)).
process_abstract_type_2(ok2(Functor, Params), IsSolverType, Result) :-
    Result = ok1(processed_type_body(Functor, Params,
        parse_tree_abstract_type(IsSolverType))).

%-----------------------------------------------------------------------------%

parse_type_defn_head(ModuleName, Head, Body, Result) :-
    ( Head = term.variable(_, _) ->
        % `Head' has no term.context, so we need to get the
        % context from `Body'.
        ( Body = term.functor(_, _, Context) ->
            dummy_term_with_context(Context, ErrorTerm)
        ;
            dummy_term(ErrorTerm)
        ),
        Result = error2(["variable on LHS of type definition" - ErrorTerm])
    ;
        parse_implicitly_qualified_term(ModuleName, Head, Head,
            "type definition", Headresult),
        parse_type_defn_head_2(Headresult, Head, Result)
    ).

:- pred parse_type_defn_head_2(maybe_functor::in, term::in,
    maybe2(sym_name, list(tvar))::out) is det.

parse_type_defn_head_2(error2(Errors), _, error2(Errors)).
parse_type_defn_head_2(ok2(Name, Args), Head, Result) :-
    parse_type_defn_head_3(Name, Args, Head, Result).

:- pred parse_type_defn_head_3(sym_name::in, list(term)::in, term::in,
    maybe2(sym_name, list(tvar))::out) is det.

parse_type_defn_head_3(Name, Args, Head, Result) :-
    % Check that all the head args are variables.
    ( term_list_to_var_list(Args, Params0) ->
        % Check that all the head arg variables are distinct.
        (
            list.member(_, Params0, [Param | OtherParams]),
            list.member(Param, OtherParams)
        ->
            Msg = "repeated type parameters in LHS of type defn",
            Result = error2([Msg - Head])
        ;
            list.map(term.coerce_var, Params0, Params),
            Result = ok2(Name, Params)
        )
    ;
        Result = error2(["type parameters must be variables" - Head])
    ).

%-----------------------------------------------------------------------------%

    % Convert a list of terms separated by semi-colons (known as a
    % "disjunction", even thought the terms aren't goals in this case)
    % into a list of constructors.
    %
:- func convert_constructors(module_name, term) = maybe1(list(constructor)).

convert_constructors(ModuleName, Body) = Result :-
    disjunction_to_list(Body, List),
    Result = convert_constructors_2(ModuleName, List).

    % True if input argument is a valid list of constructors.
    %
:- func convert_constructors_2(module_name, list(term)) =
    maybe1(list(constructor)).

convert_constructors_2(_ModuleName, []) = ok1([]).
convert_constructors_2( ModuleName, [Term | Terms]) = Result :-
    Result0 = convert_constructor(ModuleName, Term),
    (
        Result0 = error1(Errors),
        Result  = error1(Errors)
    ;
        Result0 = ok1(Constructor),
        Result1 = convert_constructors_2(ModuleName, Terms),
        (
            Result1 = error1(Errors),
            Result  = error1(Errors)
        ;
            Result1 = ok1(Constructors),
            Result  = ok1([Constructor | Constructors])
        )
    ).

:- func convert_constructor(module_name, term) = maybe1(constructor).

convert_constructor(ModuleName, Term0) = Result :-
    ( Term0 = term.functor(term.atom("some"), [Vars, Term1], _Context) ->
        ( parse_list_of_vars(Vars, ExistQVars0) ->
            list.map(term.coerce_var, ExistQVars0, ExistQVars),
            Result = convert_constructor_2(ModuleName, ExistQVars,
                Term0, Term1)
        ;
            Result = error1(["syntax error in variable list" - Term0])
        )
    ;
        ExistQVars = [],
        Result = convert_constructor_2(ModuleName, ExistQVars, Term0, Term0)
    ).

:- func convert_constructor_2(module_name, list(tvar), term, term) =
    maybe1(constructor).

convert_constructor_2(ModuleName, ExistQVars, Term0, Term1) = Result :-
    get_existential_constraints_from_term(ModuleName, Term1, Term2, Result0),
    (
        Result0 = error1(Errors),
        Result  = error1(Errors)
    ;
        Result0 = ok1(Constraints),
        (
            % Note that as a special case, one level of curly braces around
            % the constructor are ignored. This is to allow you to define
            % ';'/2 and 'some'/2 constructors.
            Term2 = term.functor(term.atom("{}"), [Term3], _Context)
        ->
            Term4 = Term3
        ;
            Term4 = Term2
        ),
        Result = convert_constructor_3(ModuleName, ExistQVars, Constraints,
            Term0, Term4)
    ).

:- func convert_constructor_3(module_name, list(tvar), list(prog_constraint),
    term, term) = maybe1(constructor).

convert_constructor_3(ModuleName, ExistQVars, Constraints, Term0, Term1) =
        Result :-
    parse_implicitly_qualified_term(ModuleName, Term1, Term0,
        "constructor definition", Result0),
    (
        Result0 = error2(Errors),
        Result  = error1(Errors)
    ;
        Result0 = ok2(F, As),
        Result1 = convert_constructor_arg_list(ModuleName, As),
        (
            Result1 = error1(Errors),
            Result  = error1(Errors)
        ;
            Result1 = ok1(Args),
            Ctxt = term_context(Term1),
            Result  = ok1(ctor(ExistQVars, Constraints, F, Args, Ctxt))
        )
    ).

:- func term_context(term(T)) = prog_context.

term_context(functor(_, _, C)) = C.
term_context(variable(_, C)) = C.

%-----------------------------------------------------------------------------%

    % parse a `:- pred p(...)' declaration or a
    % `:- func f(...) `with_type` t' declaration
    %
:- pred process_pred_or_func(pred_or_func::in, module_name::in, varset::in,
    term::in, condition::in, maybe(mer_type)::in, maybe(mer_inst)::in,
    maybe(determinism)::in, decl_attrs::in, maybe1(item)::out) is det.

process_pred_or_func(PredOrFunc, ModuleName, VarSet, PredType, Cond, WithType,
        WithInst, MaybeDet, Attributes0, Result) :-
    get_class_context_and_inst_constraints(ModuleName, Attributes0,
        Attributes, MaybeContext),
    (
        MaybeContext = ok3(ExistQVars, Constraints, InstConstraints),
        parse_implicitly_qualified_term(ModuleName, PredType, PredType,
            pred_or_func_decl_string(PredOrFunc), R),
        process_pred_or_func_2(PredOrFunc, R, PredType, VarSet,
            WithType, WithInst, MaybeDet, Cond, ExistQVars,
            Constraints, InstConstraints, Attributes, Result)
    ;
        MaybeContext = error3(Errors),
        Result = error1(Errors)
    ).

:- pred process_pred_or_func_2(pred_or_func::in, maybe_functor::in, term::in,
    varset::in, maybe(mer_type)::in, maybe(mer_inst)::in,
    maybe(determinism)::in, condition::in, existq_tvars::in,
    prog_constraints::in, inst_var_sub::in, decl_attrs::in, maybe1(item)::out)
    is det.

process_pred_or_func_2(_, error2(Errors), _, _, _, _, _, _, _, _, _, _,
        error1(Errors)).
process_pred_or_func_2(PredOrFunc, ok2(F, As0), PredType, VarSet0,
        WithType, WithInst, MaybeDet, Cond, ExistQVars,
        ClassContext, InstConstraints, Attributes0, Result) :-
    ( convert_type_and_mode_list(InstConstraints, As0, As) ->
        ( verify_type_and_mode_list(As) ->
            (
                WithInst = yes(_),
                As = [type_only(_) | _]
            ->
                Msg = "`with_inst` specified without argument modes",
                Result = error1([Msg - PredType])
            ;
                WithInst = no,
                WithType = yes(_),
                As = [type_and_mode(_, _) | _]
            ->
                Msg = "arguments have modes but `with_inst` not specified",
                Result = error1([Msg - PredType])
            ;
                \+ inst_var_constraints_are_consistent_in_type_and_modes(As)
            ->
                Msg = "inconsistent constraints on inst variables in " ++
                    pred_or_func_decl_string(PredOrFunc),
                Result = error1([Msg - PredType])
            ;
                get_purity(Purity, Attributes0, Attributes),
                varset.coerce(VarSet0, TVarSet),
                varset.coerce(VarSet0, IVarSet),
                Origin = user,
                Result0 = ok1(item_pred_or_func(Origin, TVarSet, IVarSet,
                    ExistQVars, PredOrFunc, F, As, WithType, WithInst,
                    MaybeDet, Cond, Purity, ClassContext)),
                check_no_attributes(Result0, Attributes, Result)
            )
        ;
            Msg = "some but not all arguments have modes",
            Result = error1([Msg - PredType])
        )
    ;
        Msg = "syntax error in " ++ pred_or_func_decl_string(PredOrFunc),
        Result = error1([Msg - PredType])
    ).

:- pred get_purity(purity::out, decl_attrs::in, decl_attrs::out) is det.

get_purity(Purity, !Attributes) :-
    ( !.Attributes = [decl_attr_purity(Purity0) - _ | !:Attributes] ->
        Purity = Purity0
    ;
        Purity = purity_pure
    ).

:- func pred_or_func_decl_string(pred_or_func) = string.

pred_or_func_decl_string(pf_function) = "`:- func' declaration".
pred_or_func_decl_string(pf_predicate) = "`:- pred' declaration".

%-----------------------------------------------------------------------------%

    % We could perhaps get rid of some code duplication between here and
    % prog_io_typeclass.m?

    % get_class_context_and_inst_constraints(ModuleName, Attributes0,
    %   Attributes, MaybeContext, MaybeInstConstraints):
    %
    % Parse type quantifiers, type class constraints and inst constraints
    % from the declaration attributes in Attributes0.
    % MaybeContext is either bound to the correctly parsed context, or
    % an appropriate error message (if there was a syntax error).
    % MaybeInstConstraints is either bound to a map containing the inst
    % constraints or an appropriate error message (if there was a syntax
    % error).
    % Attributes is bound to the remaining attributes.
    %
:- pred get_class_context_and_inst_constraints(module_name::in,
    decl_attrs::in, decl_attrs::out,
    maybe3(existq_tvars, prog_constraints, inst_var_sub)::out) is det.

get_class_context_and_inst_constraints(ModuleName, RevAttributes0,
        RevAttributes, MaybeContext) :-
    % Constraints and quantifiers should occur in the following order
    % (outermost to innermost):
    %
    %                               operator        precedence
    %                               --------        ----------
    %   1. universal quantifiers    all             950
    %   2. existential quantifiers  some            950
    %   3. universal constraints    <=              920
    %   4. existential constraints  =>              920 [*]
    %   5. the decl itself          pred or func    800
    %
    % When we reach here, Attributes0 contains declaration attributes
    % in the opposite order -- innermost to outermost -- so we reverse
    % them before we start.
    %
    % [*] Note that the semantic meaning of `=>' is not quite the same
    % as implication; logically speaking it's more like conjunction.
    % Oh well, at least it has the right precedence.
    %
    % In theory it could make sense to allow the order of 2 & 3 to be
    % swapped, or (in the case of multiple constraints & multiple
    % quantifiers) to allow arbitrary interleaving of 2 & 3, but in
    % practice it seems there would be little benefit in allowing that
    % flexibility, so we don't.
    %
    % Universal quantification is the default, so we just ignore
    % universal quantifiers.  (XXX It might be a good idea to check
    % that any universally quantified type variables do actually
    % occur somewhere in the type declaration, and are not also
    % existentially quantified, and if not, issue a warning or
    % error message.)

    list.reverse(RevAttributes0, Attributes0),
    get_quant_vars(quant_type_univ, ModuleName, Attributes0, Attributes1,
        [], _UnivQVars),
    get_quant_vars(quant_type_exist, ModuleName, Attributes1, Attributes2,
        [], ExistQVars0),
    list.map(term.coerce_var, ExistQVars0, ExistQVars),
    get_constraints(quant_type_univ, ModuleName, Attributes2,
        Attributes3, MaybeUnivConstraints),
    get_constraints(quant_type_exist, ModuleName, Attributes3,
        Attributes, MaybeExistConstraints),
    list.reverse(Attributes, RevAttributes),

    combine_quantifier_results(MaybeUnivConstraints, MaybeExistConstraints,
        ExistQVars, MaybeContext).

:- pred combine_quantifier_results(maybe_class_and_inst_constraints::in,
    maybe_class_and_inst_constraints::in, existq_tvars::in,
    maybe3(existq_tvars, prog_constraints, inst_var_sub)::out) is det.

combine_quantifier_results(error2(Errors1), error2(Errors2), _,
        error3(Errors1 ++ Errors2)).
combine_quantifier_results(error2(Errors), ok2(_, _), _, error3(Errors)).
combine_quantifier_results(ok2(_, _), error2(Errors), _, error3(Errors)).
combine_quantifier_results(ok2(UnivConstraints, InstConstraints0),
    ok2(ExistConstraints, InstConstraints1), ExistQVars,
    ok3(ExistQVars, constraints(UnivConstraints, ExistConstraints),
        InstConstraints0 `map.old_merge` InstConstraints1)).

:- pred get_quant_vars(quantifier_type::in, module_name::in,
    decl_attrs::in, decl_attrs::out, list(var)::in, list(var)::out) is det.

get_quant_vars(QuantType, ModuleName, !Attributes, !Vars) :-
    (
        !.Attributes = [decl_attr_quantifier(QuantType, QuantVars) - _
            | !:Attributes]
    ->
        list.append(!.Vars, QuantVars, !:Vars),
        get_quant_vars(QuantType, ModuleName, !Attributes, !Vars)
    ;
        true
    ).

:- pred get_constraints(quantifier_type::in, module_name::in, decl_attrs::in,
    decl_attrs::out, maybe_class_and_inst_constraints::out) is det.

get_constraints(QuantType, ModuleName, !Attributes, MaybeConstraints) :-
    (
        !.Attributes = [
            decl_attr_constraints(QuantType, ConstraintsTerm) - _Term
            | !:Attributes]
    ->
        parse_class_and_inst_constraints(ModuleName, ConstraintsTerm,
            MaybeConstraints0),
        % there may be more constraints of the same type --
        % collect them all and combine them
        get_constraints(QuantType, ModuleName, !Attributes, MaybeConstraints1),
        combine_constraint_list_results(MaybeConstraints1,
            MaybeConstraints0, MaybeConstraints)
    ;
        MaybeConstraints = ok2([], map.init)
    ).

:- pred combine_constraint_list_results(maybe_class_and_inst_constraints::in,
    maybe_class_and_inst_constraints::in,
    maybe_class_and_inst_constraints::out) is det.

combine_constraint_list_results(error2(Errors1), error2(Errors2),
        error2(Errors1 ++ Errors2)).
combine_constraint_list_results(error2(Errors), ok2(_, _), error2(Errors)).
combine_constraint_list_results(ok2(_, _), error2(Errors), error2(Errors)).
combine_constraint_list_results(ok2(CC0, IC0), ok2(CC1, IC1),
        ok2(CC0 ++ CC1, IC0 `map.old_merge` IC1)).

:- pred get_existential_constraints_from_term(module_name::in,
    term::in, term::out, maybe1(list(prog_constraint))::out) is det.

get_existential_constraints_from_term(ModuleName, !PredType,
        MaybeExistentialConstraints) :-
    (
        !.PredType = term.functor(term.atom("=>"),
            [!:PredType, ExistentialConstraints], _)
    ->
        parse_class_constraints(ModuleName, ExistentialConstraints,
            MaybeExistentialConstraints)
    ;
        MaybeExistentialConstraints = ok1([])
    ).

%-----------------------------------------------------------------------------%

    % Verify that among the arguments of a :- pred declaration,
    % either all arguments specify a mode or none of them do.
    %
:- pred verify_type_and_mode_list(list(type_and_mode)::in) is semidet.

verify_type_and_mode_list([]).
verify_type_and_mode_list([First | Rest]) :-
    verify_type_and_mode_list_2(Rest, First).

:- pred verify_type_and_mode_list_2(list(type_and_mode)::in, type_and_mode::in)
    is semidet.

verify_type_and_mode_list_2([], _).
verify_type_and_mode_list_2([Head | Tail], First) :-
    (
        Head = type_only(_),
        First = type_only(_)
    ;
        Head = type_and_mode(_, _),
        First = type_and_mode(_, _)
    ),
    verify_type_and_mode_list_2(Tail, First).

%-----------------------------------------------------------------------------%

    % Parse a `:- func p(...)' declaration.
    %
:- pred process_func(module_name::in, varset::in, term::in, condition::in,
    maybe(determinism)::in, decl_attrs::in, maybe1(item)::out) is det.

process_func(ModuleName, VarSet, Term, Cond, MaybeDet, Attributes0, Result) :-
    get_class_context_and_inst_constraints(ModuleName, Attributes0,
        Attributes, MaybeContext),
    (
        MaybeContext = ok3(ExistQVars, Constraints, InstConstraints),
        process_func_2(ModuleName, VarSet, Term, Cond, MaybeDet, ExistQVars,
            Constraints, InstConstraints, Attributes, Result)
    ;
        MaybeContext = error3(Errors),
        Result = error1(Errors)
    ).

:- pred process_func_2(module_name::in, varset::in, term::in, condition::in,
    maybe(determinism)::in, existq_tvars::in, prog_constraints::in,
    inst_var_sub::in, decl_attrs::in, maybe1(item)::out) is det.

process_func_2(ModuleName, VarSet, Term, Cond, MaybeDet, ExistQVars,
        Constraints, InstConstraints, Attributes, Result) :-
    (
        Term = term.functor(term.atom("="),
            [FuncTerm0, ReturnTypeTerm], _Context),
        FuncTerm = desugar_field_access(FuncTerm0)
    ->
        parse_implicitly_qualified_term(ModuleName, FuncTerm, Term,
            "`:- func' declaration", R),
        process_func_3(R, FuncTerm, ReturnTypeTerm, Term, VarSet, MaybeDet,
            Cond, ExistQVars, Constraints, InstConstraints, Attributes, Result)
    ;
        Result = error1(["`=' expected in `:- func' declaration" - Term])
    ).

:- pred process_func_3(maybe_functor::in, term::in, term::in, term::in,
    varset::in, maybe(determinism)::in, condition::in, existq_tvars::in,
    prog_constraints::in, inst_var_sub::in, decl_attrs::in,
    maybe1(item)::out) is det.

process_func_3(error2(Errors), _, _, _, _, _, _, _, _, _, _, error1(Errors)).
process_func_3(ok2(F, As0), FuncTerm, ReturnTypeTerm, FullTerm, VarSet0,
        MaybeDet, Cond, ExistQVars, ClassContext, InstConstraints,
        Attributes0, Result) :-
    ( convert_type_and_mode_list(InstConstraints, As0, As) ->
        (
            \+ verify_type_and_mode_list(As)
        ->
            Msg = "some but not all arguments have modes",
            Result = error1([Msg - FuncTerm])
        ;
            convert_type_and_mode(InstConstraints, ReturnTypeTerm, ReturnType)
        ->
            (
                As = [type_and_mode(_, _) | _],
                ReturnType = type_only(_)
            ->
                Msg = "function arguments have modes, " ++
                    "but function result doesn't",
                Result = error1([Msg - FuncTerm])
            ;
                As = [type_only(_) | _],
                ReturnType = type_and_mode(_, _)
            ->
                Msg = "function result has mode, but function arguments don't",
                Result = error1([Msg - FuncTerm])
            ;
                get_purity(Purity, Attributes0, Attributes),
                varset.coerce(VarSet0, TVarSet),
                varset.coerce(VarSet0, IVarSet),
                list.append(As, [ReturnType], Args),
                (
                    inst_var_constraints_are_consistent_in_type_and_modes(Args)
                ->
                    Origin = user,
                    Result0 = ok1(item_pred_or_func(Origin, TVarSet, IVarSet,
                        ExistQVars, pf_function, F, Args, no, no, MaybeDet,
                        Cond, Purity, ClassContext)),
                    check_no_attributes(Result0, Attributes, Result)
                ;
                    Msg = "inconsistent constraints on inst variables " ++
                        "in function declaration",
                    Result = error1([Msg - FullTerm])
                )
            )
        ;
            Msg = "syntax error in return type of `:- func' declaration",
            Result = error1([Msg - ReturnTypeTerm])
        )
    ;
        Msg = "syntax error in arguments of `:- func' declaration",
        Result = error1([Msg - FuncTerm])
    ).

%-----------------------------------------------------------------------------%

    % Perform one of the following field-access syntax rewrites if possible:
    %
    %   A ^ f(B, ...)       --->    f(B, ..., A)
    %   (A ^ f(B, ...) := X)    --->    'f :='(B, ..., A, X)
    %
:- func desugar_field_access(term) = term.

desugar_field_access(Term) =
    (
        Term = functor(atom("^"), [A, RHS], _),
        RHS  = functor(atom(FieldName), Bs, Context)
    ->
        functor(atom(FieldName), Bs ++ [A], Context)
    ;
        Term = functor(atom(":="), [LHS, X], _),
        LHS  = functor(atom("^"), [A, RHS], Context),
        RHS  = functor(atom(FieldName), Bs, Context)
    ->
        functor(atom(FieldName ++ " :="), Bs ++ [A, X], Context)
    ;
        Term
    ).

%-----------------------------------------------------------------------------%

    % Parse a `:- mode p(...)' declaration.
    %
:- pred process_mode(module_name::in, varset::in, term::in, condition::in,
    decl_attrs::in, maybe(mer_inst)::in, maybe(determinism)::in,
    maybe1(item)::out) is det.

process_mode(ModuleName, VarSet, Term, Cond, Attributes, WithInst, MaybeDet,
        Result) :-
    (
        WithInst = no,
        Term = term.functor(term.atom("="), [FuncTerm0, ReturnTypeTerm],
            _Context),
        FuncTerm = desugar_field_access(FuncTerm0)
    ->
        parse_implicitly_qualified_term(ModuleName, FuncTerm, Term,
            "function `:- mode' declaration", R),
        process_func_mode(R, ModuleName, FuncTerm, ReturnTypeTerm,
            Term, VarSet, MaybeDet, Cond, Attributes, Result)
    ;
        parse_implicitly_qualified_term(ModuleName, Term, Term,
            "`:- mode' declaration", R),
        process_pred_or_func_mode(R, ModuleName, Term, VarSet,
            WithInst, MaybeDet, Cond, Attributes, Result)
    ).

:- pred process_pred_or_func_mode(maybe_functor::in, module_name::in, term::in,
    varset::in, maybe(mer_inst)::in, maybe(determinism)::in, condition::in,
    decl_attrs::in, maybe1(item)::out) is det.

process_pred_or_func_mode(error2(Errors), _, _, _, _, _, _, _, error1(Errors)).
process_pred_or_func_mode(ok2(F, As0), ModuleName, PredMode, VarSet0, WithInst,
        MaybeDet, Cond, Attributes0, Result) :-
    ( convert_mode_list(allow_constrained_inst_var, As0, As1) ->
        get_class_context_and_inst_constraints(ModuleName, Attributes0,
            Attributes, MaybeConstraints),
        (
            MaybeConstraints = ok3(_, _, InstConstraints),
            list.map(constrain_inst_vars_in_mode(InstConstraints), As1, As),
            varset.coerce(VarSet0, VarSet),
            ( inst_var_constraints_are_consistent_in_modes(As) ->
                (
                    WithInst = no,
                    PredOrFunc = yes(pf_predicate)
                ;
                    WithInst = yes(_),
                    % We don't know whether it's a predicate or a function
                    % until we expand out the inst.
                    PredOrFunc = no
                ),
                Result0 = ok1(item_pred_or_func_mode(VarSet, PredOrFunc, F, As,
                    WithInst, MaybeDet, Cond))
            ;
                Msg = "inconsistent constraints on inst variables " ++
                    "in predicate mode declaration",
                Result0 = error1([Msg - PredMode])
            )
        ;
            MaybeConstraints = error3(Errors),
            Result0 = error1(Errors)
        ),
        check_no_attributes(Result0, Attributes, Result)
    ;
        Result = error1(["syntax error in mode declaration" - PredMode])
    ).

:- pred process_func_mode(maybe_functor::in, module_name::in, term::in,
    term::in, term::in, varset::in, maybe(determinism)::in, condition::in,
    decl_attrs::in, maybe1(item)::out) is det.

process_func_mode(error2(Errors), _, _, _, _, _, _, _, _, error1(Errors)).
process_func_mode(ok2(F, As0), ModuleName, FuncMode, RetMode0, FullTerm,
        VarSet0, MaybeDet, Cond, Attributes0, Result) :-
    (
        convert_mode_list(allow_constrained_inst_var, As0, As1)
    ->
        get_class_context_and_inst_constraints(ModuleName, Attributes0,
            Attributes, MaybeConstraints),
        (
            MaybeConstraints = ok3(_, _, InstConstraints),
            list.map(constrain_inst_vars_in_mode(InstConstraints), As1, As),
            (
                convert_mode(allow_constrained_inst_var, RetMode0, RetMode1)
            ->
                constrain_inst_vars_in_mode(InstConstraints,
                    RetMode1, RetMode),
                varset.coerce(VarSet0, VarSet),
                list.append(As, [RetMode], ArgModes),
                ( inst_var_constraints_are_consistent_in_modes(ArgModes) ->
                    Result0 = ok1(item_pred_or_func_mode(VarSet,
                        yes(pf_function), F, ArgModes, no, MaybeDet, Cond))
                ;
                    Msg = "inconsistent constraints on inst variables " ++
                        "in function mode declaration",
                    Result0 = error1([Msg - FullTerm])
                )
            ;
                Msg = "syntax error in return mode " ++
                    "of function mode declaration",
                Result0 = error1([Msg - RetMode0])
            )
        ;
            MaybeConstraints = error3(Errors),
            Result0 = error1(Errors)
        ),
        check_no_attributes(Result0, Attributes, Result)
    ;
        Msg = "syntax error in arguments of function mode declaration",
        Result = error1([Msg - FuncMode])
    ).

%-----------------------------------------------------------------------------%

constrain_inst_vars_in_mode(Mode0, Mode) :-
    constrain_inst_vars_in_mode(map.init, Mode0, Mode).

constrain_inst_vars_in_mode(InstConstraints, I0 -> F0, I -> F) :-
    constrain_inst_vars_in_inst(InstConstraints, I0, I),
    constrain_inst_vars_in_inst(InstConstraints, F0, F).
constrain_inst_vars_in_mode(InstConstraints, user_defined_mode(Name, Args0),
        user_defined_mode(Name, Args)) :-
    list.map(constrain_inst_vars_in_inst(InstConstraints), Args0, Args).

:- pred constrain_inst_vars_in_inst(inst_var_sub::in,
    mer_inst::in, mer_inst::out) is det.

constrain_inst_vars_in_inst(_, any(U), any(U)).
constrain_inst_vars_in_inst(_, free, free).
constrain_inst_vars_in_inst(_, free(T), free(T)).
constrain_inst_vars_in_inst(InstConstraints, bound(U, BIs0), bound(U, BIs)) :-
    list.map(
        (pred(bound_functor(C, Is0)::in, bound_functor(C, Is)::out) is det :-
            list.map(constrain_inst_vars_in_inst(InstConstraints), Is0, Is)),
        BIs0, BIs).
constrain_inst_vars_in_inst(_, ground(U, none), ground(U, none)).
constrain_inst_vars_in_inst(InstConstraints,
        ground(U, higher_order(PredInstInfo0)),
        ground(U, higher_order(PredInstInfo))) :-
    constrain_inst_vars_in_pred_inst_info(InstConstraints, PredInstInfo0,
        PredInstInfo).
constrain_inst_vars_in_inst(InstConstraints,
        constrained_inst_vars(Vars0, Inst0),
        constrained_inst_vars(Vars, Inst)) :-
    constrain_inst_vars_in_inst(InstConstraints, Inst0, Inst1),
    ( Inst1 = constrained_inst_vars(Vars2, Inst2) ->
        Vars = Vars0 `set.union` Vars2,
        Inst = Inst2
    ;
        Vars = Vars0,
        Inst = Inst1
    ).
constrain_inst_vars_in_inst(_, not_reached, not_reached).
constrain_inst_vars_in_inst(InstConstraints, inst_var(Var),
        constrained_inst_vars(set.make_singleton_set(Var), Inst)) :-
    ( map.search(InstConstraints, Var, Inst0) ->
        Inst = Inst0
    ;
        Inst = ground(shared, none)
    ).
constrain_inst_vars_in_inst(InstConstraints, defined_inst(Name0),
        defined_inst(Name)) :-
    constrain_inst_vars_in_inst_name(InstConstraints, Name0, Name).
constrain_inst_vars_in_inst(InstConstraints, abstract_inst(N, Is0),
        abstract_inst(N, Is)) :-
    list.map(constrain_inst_vars_in_inst(InstConstraints), Is0, Is).

:- pred constrain_inst_vars_in_pred_inst_info(inst_var_sub::in,
    pred_inst_info::in, pred_inst_info::out) is det.

constrain_inst_vars_in_pred_inst_info(InstConstraints, PII0, PII) :-
    PII0 = pred_inst_info(PredOrFunc, Modes0, Det),
    list.map(constrain_inst_vars_in_mode(InstConstraints), Modes0, Modes),
    PII = pred_inst_info(PredOrFunc, Modes, Det).

:- pred constrain_inst_vars_in_inst_name(inst_var_sub::in,
    inst_name::in, inst_name::out) is det.

constrain_inst_vars_in_inst_name(InstConstraints, Name0, Name) :-
    ( Name0 = user_inst(SymName, Args0) ->
        list.map(constrain_inst_vars_in_inst(InstConstraints), Args0, Args),
        Name = user_inst(SymName, Args)
    ;
        Name = Name0
    ).

%-----------------------------------------------------------------------------%

inst_var_constraints_are_consistent_in_modes(Modes) :-
    inst_var_constraints_are_consistent_in_modes(Modes, map.init, _).

:- pred inst_var_constraints_are_consistent_in_modes(list(mer_mode)::in,
    inst_var_sub::in, inst_var_sub::out) is semidet.

inst_var_constraints_are_consistent_in_modes(Modes, !Sub) :-
    list.foldl(inst_var_constraints_are_consistent_in_mode, Modes, !Sub).

:- pred inst_var_constraints_are_consistent_in_type_and_modes(
    list(type_and_mode)::in) is semidet.

inst_var_constraints_are_consistent_in_type_and_modes(TypeAndModes) :-
    list.foldl((pred(TypeAndMode::in, in, out) is semidet -->
        ( { TypeAndMode = type_only(_) }
        ; { TypeAndMode = type_and_mode(_, Mode) },
            inst_var_constraints_are_consistent_in_mode(Mode)
        )), TypeAndModes, map.init, _).

:- pred inst_var_constraints_are_consistent_in_mode(mer_mode::in,
    inst_var_sub::in, inst_var_sub::out) is semidet.

inst_var_constraints_are_consistent_in_mode(InitialInst -> FinalInst, !Sub) :-
    inst_var_constraints_are_consistent_in_inst(InitialInst, !Sub),
    inst_var_constraints_are_consistent_in_inst(FinalInst, !Sub).
inst_var_constraints_are_consistent_in_mode(user_defined_mode(_, ArgInsts),
        !Sub) :-
    inst_var_constraints_are_consistent_in_insts(ArgInsts, !Sub).

:- pred inst_var_constraints_are_consistent_in_insts(list(mer_inst)::in,
    inst_var_sub::in, inst_var_sub::out) is semidet.

inst_var_constraints_are_consistent_in_insts(Insts, !Sub) :-
    list.foldl(inst_var_constraints_are_consistent_in_inst, Insts, !Sub).

:- pred inst_var_constraints_are_consistent_in_inst(mer_inst::in,
    inst_var_sub::in, inst_var_sub::out) is semidet.

inst_var_constraints_are_consistent_in_inst(any(_), !Sub).
inst_var_constraints_are_consistent_in_inst(free, !Sub).
inst_var_constraints_are_consistent_in_inst(free(_), !Sub).
inst_var_constraints_are_consistent_in_inst(bound(_, BoundInsts), !Sub) :-
    list.foldl(
        (pred(bound_functor(_, Insts)::in, in, out) is semidet -->
            inst_var_constraints_are_consistent_in_insts(Insts)),
        BoundInsts, !Sub).
inst_var_constraints_are_consistent_in_inst(ground(_, GroundInstInfo), !Sub) :-
    (
        GroundInstInfo = none
    ;
        GroundInstInfo = higher_order(pred_inst_info(_, Modes, _)),
        inst_var_constraints_are_consistent_in_modes(Modes, !Sub)
    ).
inst_var_constraints_are_consistent_in_inst(not_reached, !Sub).
inst_var_constraints_are_consistent_in_inst(inst_var(_), !Sub) :-
    unexpected(this_file, "inst_var_constraints_are_consistent_in_inst: " ++
        "unconstrained inst_var").
inst_var_constraints_are_consistent_in_inst(defined_inst(InstName), !Sub) :-
    ( InstName = user_inst(_, Insts) ->
        inst_var_constraints_are_consistent_in_insts(Insts, !Sub)
    ;
        true
    ).
inst_var_constraints_are_consistent_in_inst(abstract_inst(_, Insts), !Sub) :-
    inst_var_constraints_are_consistent_in_insts(Insts, !Sub).
inst_var_constraints_are_consistent_in_inst(
        constrained_inst_vars(InstVars, Inst), !Sub) :-
    set.fold((pred(InstVar::in, in, out) is semidet -->
        ( Inst0 =^ map.elem(InstVar) ->
            % Check that the inst_var constraint is consistent with
            % the previous constraint on this inst_var.
            { Inst = Inst0 }
        ;
            ^ map.elem(InstVar) := Inst
        )), InstVars, !Sub),
    inst_var_constraints_are_consistent_in_inst(Inst, !Sub).

%-----------------------------------------------------------------------------%

    % Parse a `:- inst <InstDefn>.' declaration.
    %
:- pred parse_inst_decl(module_name::in, varset::in, term::in,
    maybe1(item)::out) is det.

parse_inst_decl(ModuleName, VarSet, InstDefn, Result) :-
    (
        InstDefn = term.functor(term.atom(Op), [H, B], _Context),
        Op = "=="
    ->
        get_condition(B, Body, Condition),
        convert_inst_defn(ModuleName, H, Body, R),
        process_maybe1(make_inst_defn(VarSet, Condition), R, Result)
    ;
        % XXX This is for `abstract inst' declarations,
        % which are not really supported.
        InstDefn = term.functor(term.atom("is"),
            [Head, term.functor(term.atom("private"), [], _)], _)
    ->
        Condition = cond_true,
        convert_abstract_inst_defn(ModuleName, Head, R),
        process_maybe1(make_inst_defn(VarSet, Condition), R, Result)
    ;
        InstDefn = term.functor(term.atom("--->"), [H, B], Context)
    ->
        get_condition(B, Body, Condition),
        Body1 = term.functor(term.atom("bound"), [Body], Context),
        convert_inst_defn(ModuleName, H, Body1, R),
        % We should check the condition for errs (don't bother at the moment,
        % since we ignore conditions anyhow :-)
        process_maybe1(make_inst_defn(VarSet, Condition), R, Result)
    ;
        Result = error1(["`==' expected in `:- inst' definition" - InstDefn])
    ).

    % Parse a `:- inst <Head> ---> <Body>.' definition.
    %
:- pred convert_inst_defn(module_name::in, term::in, term::in,
    maybe1(processed_inst_body)::out) is det.

convert_inst_defn(ModuleName, Head, Body, Result) :-
    parse_implicitly_qualified_term(ModuleName, Head, Body,
        "inst definition", R),
    convert_inst_defn_2(R, Head, Body, Result).

:- pred convert_inst_defn_2(maybe_functor::in, term::in, term::in,
    maybe1(processed_inst_body)::out) is det.

convert_inst_defn_2(error2(Errors), _, _, error1(Errors)).
convert_inst_defn_2(ok2(Name, ArgTerms), Head, Body, Result) :-
    (
        % Check that all the head args are variables.
        term.term_list_to_var_list(ArgTerms, Args)
    ->
        (
            % Check that all the head arg variables are distinct.
            list.member(Arg2, Args, [Arg2 | OtherArgs]),
            list.member(Arg2, OtherArgs)
        ->
            Msg = "repeated inst parameters in LHS of inst defn",
            Result = error1([Msg - Head])
        ;
            % Check that all the variables in the body occur in the head.
            term.contains_var(Body, Var2),
            \+ list.member(Var2, Args)
        ->
            Msg = "free inst parameter in RHS of inst definition",
            Result = error1([Msg - Body])
        ;
            % Check that the inst is a valid user-defined inst, i.e. that it
            % does not have the form of one of the builtin insts.
            \+ (
                convert_inst(no_allow_constrained_inst_var, Head, UserInst),
                UserInst = defined_inst(user_inst(_, _))
            )
        ->
            Result = error1(["attempt to redefine builtin inst" - Head])
        ;
            % Should improve the error message here.
            (
                convert_inst(no_allow_constrained_inst_var, Body,
                    ConvertedBody)
            ->
                list.map(term.coerce_var, Args, InstArgs),
                Result = ok1(processed_inst_body(Name, InstArgs,
                        eqv_inst(ConvertedBody)))
            ;
                Result = error1(["syntax error in inst body" - Body])
            )
        )
    ;
        Result = error1(["inst parameters must be variables" - Head])
    ).

:- type processed_inst_body
    --->    processed_inst_body(
                sym_name,
                list(inst_var),
                inst_defn
            ).

:- pred convert_abstract_inst_defn(module_name::in, term::in,
    maybe1(processed_inst_body)::out) is det.

convert_abstract_inst_defn(ModuleName, Head, Result) :-
    parse_implicitly_qualified_term(ModuleName, Head, Head,
        "inst definition", R),
    convert_abstract_inst_defn_2(R, Head, Result).

:- pred convert_abstract_inst_defn_2(maybe_functor::in, term::in,
    maybe1(processed_inst_body)::out) is det.

convert_abstract_inst_defn_2(error2(Errors), _, error1(Errors)).
convert_abstract_inst_defn_2(ok2(Name, ArgTerms), Head, Result) :-
    (
        % Check that all the head args are variables.
        term.term_list_to_var_list(ArgTerms, Args)
    ->
        (
            % Check that all the head arg variables are distinct.
            list.member(Arg2, Args, [Arg2 | OtherArgs]),
            list.member(Arg2, OtherArgs)
        ->
            Msg = "repeated inst parameters in abstract inst definition",
            Result = error1([Msg -  Head])
        ;
            list.map(term.coerce_var, Args, InstArgs),
            Result = ok1(processed_inst_body(Name, InstArgs, abstract_inst))
        )
    ;
        Result = error1(["inst parameters must be variables" - Head])
    ).

:- pred make_inst_defn(varset::in, condition::in, processed_inst_body::in,
    item::out) is det.

make_inst_defn(VarSet0, Cond, processed_inst_body(Name, Params, InstDefn),
        item_inst_defn(VarSet, Name, Params, InstDefn, Cond)) :-
    varset.coerce(VarSet0, VarSet).

%-----------------------------------------------------------------------------%

    % Parse a `:- mode foo == ...' definition.
    %
:- pred parse_mode_decl(module_name::in, varset::in, term::in, decl_attrs::in,
    maybe1(item)::out) is det.

parse_mode_decl(ModuleName, VarSet, ModeDefn, Attributes, Result) :-
    ( mode_op(ModeDefn, H, B) ->
        get_condition(B, Body, Condition),
        convert_mode_defn(ModuleName, H, Body, R),
        process_maybe1(make_mode_defn(VarSet, Condition), R, Result)
    ;
        parse_mode_decl_pred(ModuleName, VarSet, ModeDefn, Attributes, Result)
    ).

:- pred mode_op(term::in, term::out, term::out) is semidet.

mode_op(term.functor(term.atom(Op), [H, B], _), H, B) :-
    Op = "==".

:- type processed_mode_body
    --->    processed_mode_body(
                sym_name,
                list(inst_var),
                mode_defn
            ).

:- pred convert_mode_defn(module_name::in, term::in, term::in,
    maybe1(processed_mode_body)::out) is det.

convert_mode_defn(ModuleName, Head, Body, Result) :-
    parse_implicitly_qualified_term(ModuleName, Head, Head,
        "mode definition", R),
    convert_mode_defn_2(R, Head, Body, Result).

:- pred convert_mode_defn_2(maybe_functor::in, term::in, term::in,
    maybe1(processed_mode_body)::out) is det.

convert_mode_defn_2(error2(Errors), _, _, error1(Errors)).
convert_mode_defn_2(ok2(Name, ArgTerms), Head, Body, Result) :-
    (
        % Check that all the head args are variables.
        term.term_list_to_var_list(ArgTerms, Args)
    ->
        (
            % Check that all the head arg variables are distinct.
            list.member(Arg2, Args, [Arg2 | OtherArgs]),
            list.member(Arg2, OtherArgs)
        ->
            Msg = "repeated parameters in LHS of mode defn",
            Result = error1([Msg - Head])
        ;
            % Check that all the variables in the body occur in the head.
            term.contains_var(Body, Var2),
            \+ list.member(Var2, Args)
        ->
            Msg = "free inst parameter in RHS of mode definition",
            Result = error1([Msg - Head])
        ;
            % Should improve the error message here.
            (
                convert_mode(no_allow_constrained_inst_var, Body,
                    ConvertedBody)
            ->
                list.map(term.coerce_var, Args, InstArgs),
                Result = ok1(processed_mode_body(Name, InstArgs,
                    eqv_mode(ConvertedBody)))
            ;
                % Catch-all error message - we should do better than this.
                Msg = "syntax error in mode definition body",
                Result = error1([Msg - Body])
            )
        )
    ;
        Result = error1(["mode parameters must be variables" - Head])
    ).

:- pred convert_type_and_mode_list(inst_var_sub::in, list(term)::in,
    list(type_and_mode)::out) is semidet.

convert_type_and_mode_list(_, [], []).
convert_type_and_mode_list(InstConstraints, [H0 | T0], [H | T]) :-
    convert_type_and_mode(InstConstraints, H0, H),
    convert_type_and_mode_list(InstConstraints, T0, T).

:- pred convert_type_and_mode(inst_var_sub::in, term::in, type_and_mode::out)
    is semidet.

convert_type_and_mode(InstConstraints, Term, Result) :-
    ( Term = term.functor(term.atom("::"), [TypeTerm, ModeTerm], _Context) ->
        parse_type(TypeTerm, ok1(Type)),
        convert_mode(allow_constrained_inst_var, ModeTerm, Mode0),
        constrain_inst_vars_in_mode(InstConstraints, Mode0, Mode),
        Result = type_and_mode(Type, Mode)
    ;
        parse_type(Term, ok1(Type)),
        Result = type_only(Type)
    ).

:- pred make_mode_defn(varset::in, condition::in, processed_mode_body::in,
    item::out) is det.

make_mode_defn(VarSet0, Cond, processed_mode_body(Name, Params, ModeDefn),
        item_mode_defn(VarSet, Name, Params, ModeDefn, Cond)) :-
    varset.coerce(VarSet0, VarSet).

%-----------------------------------------------------------------------------%

:- type maker(T1, T2) == pred(T1, T2).
:- mode maker == (pred(in, out) is det).

:- pred parse_symlist_decl(parser(T)::parser, maker(list(T), sym_list)::maker,
    maker(sym_list, module_defn)::maker,
    term::in, decl_attrs::in, varset::in, maybe1(item)::out) is det.

parse_symlist_decl(ParserPred, MakeSymListPred, MakeModuleDefnPred,
        Term, Attributes, VarSet, Result) :-
    parse_list(ParserPred, Term, Result0),
    process_maybe1(make_module_defn(MakeSymListPred, MakeModuleDefnPred,
        VarSet), Result0, Result1),
    check_no_attributes(Result1, Attributes, Result).

:- pred make_module_defn(maker(T, sym_list)::maker,
    maker(sym_list, module_defn)::maker, varset::in, T::in, item::out)
    is det.

make_module_defn(MakeSymListPred, MakeModuleDefnPred, VarSet0, T,
        item_module_defn(VarSet, ModuleDefn)) :-
    varset.coerce(VarSet0, VarSet),
    call(MakeSymListPred, T, SymList),
    call(MakeModuleDefnPred, SymList, ModuleDefn).

%-----------------------------------------------------------------------------%

:- pred process_maybe1(maker(T1, T2)::maker, maybe1(T1)::in, maybe1(T2)::out)
    is det.

process_maybe1(Maker, ok1(X), ok1(Y)) :-
    call(Maker, X, Y).
process_maybe1(_, error1(Errors), error1(Errors)).

:- pred process_maybe1_to_t(maker(T1, maybe1(T2))::maker,
    maybe1(T1)::in, maybe1(T2)::out) is det.

process_maybe1_to_t(Maker, ok1(X), Y) :-
    call(Maker, X, Y).
process_maybe1_to_t(_, error1(Errors), error1(Errors)).

%-----------------------------------------------------------------------------%

:- pred make_module(list(module_specifier)::in, sym_list::out) is det.
make_module(X, list_module(X)).

:- pred make_sym(list(sym_specifier)::in, sym_list::out) is det.
make_sym(X, list_sym(X)).

:- pred make_pred(list(pred_specifier)::in, sym_list::out) is det.
make_pred(X, list_pred(X)).

:- pred make_func(list(func_specifier)::in, sym_list::out) is det.
make_func(X, list_func(X)).

:- pred make_cons(list(cons_specifier)::in, sym_list::out) is det.
make_cons(X, list_cons(X)).

:- pred make_type(list(type_specifier)::in, sym_list::out) is det.
make_type(X, list_type(X)).

:- pred make_adt(list(adt_specifier)::in, sym_list::out) is det.
make_adt(X, list_adt(X)).

:- pred make_op(list(op_specifier)::in, sym_list::out) is det.
make_op(X, list_op(X)).

%-----------------------------------------------------------------------------%
%
% A symbol specifier is one of
%
%   SymbolNameSpecifier
%       Matches any symbol matched by the SymbolNameSpecifier.
%   TypedConstructorSpecifier
%       Matches any constructors matched by the
%       TypedConstructorSpecifier.
%   cons(ConstructorSpecifier)
%       Matches only constructors.
%   pred(PredSpecifier)
%       Matches only predicates, ie. constructors of type `pred'.
%   adt(SymbolNameSpecifier)
%       Matches only type names.
%   type(SymbolNameSpecifier)
%       Matches type names matched by the SymbolNameSpecifier,
%       and also matches any constructors for the matched type names.
%   op(SymbolNameSpecifier)
%       Matches only operators.
%   module(ModuleSpecifier)
%       Matches all symbols in the specified module.

:- pred parse_symbol_specifier(term::in, maybe1(sym_specifier)::out) is det.

parse_symbol_specifier(MainTerm, Result) :-
    ( MainTerm = term.functor(term.atom(Functor), [Term], _Context) ->
        ( Functor = "cons" ->
            parse_constructor_specifier(Term, Result0),
            process_maybe1(make_cons_symbol_specifier, Result0, Result)
        ; Functor = "pred" ->
            parse_predicate_specifier(Term, Result0),
            process_maybe1(make_pred_symbol_specifier, Result0, Result)
        ; Functor = "func" ->
            parse_function_specifier(Term, Result0),
            process_maybe1(make_func_symbol_specifier, Result0, Result)
        ; Functor = "type" ->
            parse_type_specifier(Term, Result0),
            process_maybe1(make_type_symbol_specifier, Result0, Result)
        ; Functor = "adt" ->
            parse_adt_specifier(Term, Result0),
            process_maybe1(make_adt_symbol_specifier, Result0, Result)
        ; Functor = "op" ->
            parse_op_specifier(Term, Result0),
            process_maybe1(make_op_symbol_specifier, Result0, Result)
        ; Functor = "module" ->
            parse_module_specifier(Term, Result0),
            process_maybe1(make_module_symbol_specifier, Result0, Result)
        ;
            parse_constructor_specifier(MainTerm, Result0),
            process_maybe1(make_cons_symbol_specifier, Result0, Result)
        )
    ;
        parse_constructor_specifier(MainTerm, Result0),
        process_maybe1(make_cons_symbol_specifier, Result0, Result)
    ).

    % Once we've parsed the appropriate type of symbol specifier, we need to
    % convert it to a sym_specifier.
    %
:- pred make_pred_symbol_specifier(pred_specifier::in, sym_specifier::out)
    is det.

make_pred_symbol_specifier(PredSpec, spec_pred(PredSpec)).

:- pred make_func_symbol_specifier(func_specifier::in, sym_specifier::out)
    is det.

make_func_symbol_specifier(FuncSpec, spec_func(FuncSpec)).

:- pred make_cons_symbol_specifier(cons_specifier::in, sym_specifier::out)
    is det.

make_cons_symbol_specifier(ConsSpec, spec_cons(ConsSpec)).

:- pred make_type_symbol_specifier(type_specifier::in, sym_specifier::out)
    is det.

make_type_symbol_specifier(TypeSpec, spec_type(TypeSpec)).

:- pred make_adt_symbol_specifier(adt_specifier::in, sym_specifier::out)
    is det.

make_adt_symbol_specifier(ADT_Spec, spec_adt(ADT_Spec)).

:- pred make_op_symbol_specifier(op_specifier::in, sym_specifier::out) is det.

make_op_symbol_specifier(OpSpec, spec_op(OpSpec)).

:- pred make_module_symbol_specifier(module_specifier::in, sym_specifier::out)
    is det.

make_module_symbol_specifier(ModuleSpec, spec_module(ModuleSpec)).

:- pred cons_specifier_to_sym_specifier(cons_specifier::in,
    sym_specifier::out) is det.

cons_specifier_to_sym_specifier(consspec_sym(SymSpec), spec_sym(SymSpec)).
cons_specifier_to_sym_specifier(consspec_typed(SymSpec),
    spec_typed_sym(SymSpec)).

%-----------------------------------------------------------------------------%

    % A ModuleSpecifier is just an sym_name.
    %
:- pred parse_module_specifier(term::in, maybe1(module_specifier)::out) is det.

parse_module_specifier(Term, Result) :-
    parse_symbol_name(Term, Result).

    % A ModuleName is an implicitly-quantified sym_name.
    %
    % We check for module names starting with capital letters as a special
    % case, so that we can report a better error message for that case.
    %
:- pred parse_module_name(module_name::in, term::in,
    maybe1(module_name)::out) is det.

parse_module_name(DefaultModuleName, Term, Result) :-
    ( Term = term.variable(_, _) ->
        dummy_term(ErrorContext),
        Msg = "module names starting with capital letters " ++
            "must be quoted using single quotes (e.g. "":- module 'Foo'."")",
        Result = error1([Msg - ErrorContext])
    ;
        parse_implicitly_qualified_symbol_name(DefaultModuleName, Term, Result)
    ).

%-----------------------------------------------------------------------------%

    % A ConstructorSpecifier is one of
    %   SymbolNameSpecifier
    %   TypedConstructorSpecifier
    %
    % A TypedConstructorSpecifier is one of
    %   SymbolNameSpecifier::Type
    %       Matches only constructors with the specified result type.
    %   SymbolName(ArgType1, ..., ArgTypeN)
    %       Matches only constructors with the specified argument types.
    %   SymbolName(ArgType1, ..., ArgTypeN)::Type
    %       Matches only constructors with the specified argument
    %       and result types.
    %
:- pred parse_constructor_specifier(term::in, maybe1(cons_specifier)::out)
    is det.

parse_constructor_specifier(Term, Result) :-
    (
        Term = term.functor(term.atom("::"), [NameArgsTerm, TypeTerm],
            _Context)
    ->
        parse_arg_types_specifier(NameArgsTerm, NameArgsResult),
        parse_type(TypeTerm, TypeResult),
        process_typed_constructor_specifier(NameArgsResult, TypeResult, Result)
    ;
        parse_arg_types_specifier(Term, TermResult),
        process_maybe1(make_untyped_cons_spec, TermResult, Result)
    ).

%-----------------------------------------------------------------------------%

    % A PredicateSpecifier is one of
    %   SymbolName(ArgType1, ..., ArgTypeN)
    %       Matches only predicates with the specified argument types.
    %   SymbolNameSpecifier
    %
:- pred parse_predicate_specifier(term::in, maybe1(pred_specifier)::out)
    is det.

parse_predicate_specifier(Term, Result) :-
    ( Term = term.functor(term.atom("/"), [_, _], _Context) ->
        parse_symbol_name_specifier(Term, NameResult),
            process_maybe1(make_arity_predicate_specifier, NameResult, Result)
    ;
        parse_qualified_term(Term, Term, "predicate specifier", TermResult),
        process_typed_predicate_specifier(TermResult, Result)
    ).

:- pred process_typed_predicate_specifier(maybe_functor::in,
    maybe1(pred_specifier)::out) is det.

process_typed_predicate_specifier(ok2(Name, Args0), Result) :-
    (
        Args0 = [],
        Result = ok1(predspec_sym(name(Name)))
    ;
        Args0 = [_ | _],
        parse_types(Args0, ArgsResult),
        (
            ArgsResult = ok1(Args),
            Result = ok1(predspec_name_args(Name, Args))
        ;
            ArgsResult = error1(Errors),
            Result = error1(Errors)
        )
    ).
process_typed_predicate_specifier(error2(Errors), error1(Errors)).

:- pred make_arity_predicate_specifier(sym_name_specifier::in,
    pred_specifier::out) is det.

make_arity_predicate_specifier(Result, predspec_sym(Result)).

%-----------------------------------------------------------------------------%

    % Parsing the name & argument types of a constructor specifier is exactly
    % the same as parsing a predicate specifier...
    %
:- pred parse_arg_types_specifier(term::in, maybe1(pred_specifier)::out)
    is det.

parse_arg_types_specifier(Term, Result) :-
    ( Term = term.functor(term.atom("/"), [_, _], _Context) ->
        parse_symbol_name_specifier(Term, NameResult),
            process_maybe1(make_arity_predicate_specifier, NameResult, Result)
    ;
        parse_qualified_term(Term, Term, "constructor specifier", TermResult),
        process_typed_predicate_specifier(TermResult, Result)
    ).

    % ... but we have to convert the result back into the appropriate format.
    %
:- pred process_typed_constructor_specifier(maybe1(pred_specifier)::in,
    maybe1(mer_type)::in, maybe1(cons_specifier)::out) is det.

process_typed_constructor_specifier(error1(Errors1), error1(Errors2),
        error1(Errors1 ++ Errors2)).
process_typed_constructor_specifier(error1(Errors), ok1(_), error1(Errors)).
process_typed_constructor_specifier(ok1(_), error1(Errors), error1(Errors)).
process_typed_constructor_specifier(ok1(NameArgs), ok1(ResType),
        ok1(Result)) :-
    process_typed_cons_spec_2(NameArgs, ResType, Result).

:- pred process_typed_cons_spec_2(pred_specifier::in, mer_type::in,
    cons_specifier::out) is det.

process_typed_cons_spec_2(predspec_sym(Name), Res,
    consspec_typed(name_res(Name, Res))).
process_typed_cons_spec_2(predspec_name_args(Name, Args), Res,
    consspec_typed(name_args_res(Name, Args, Res))).

:- pred make_untyped_cons_spec(pred_specifier::in, cons_specifier::out) is det.

make_untyped_cons_spec(predspec_sym(Name),
    consspec_sym(Name)).
make_untyped_cons_spec(predspec_name_args(Name, Args),
    consspec_typed(name_args(Name, Args))).

%-----------------------------------------------------------------------------%

    % A SymbolNameSpecifier is one of
    %   SymbolName
    %   SymbolName/Arity
    %       Matches only symbols of the specified arity.
    %
:- pred parse_symbol_name_specifier(term::in, maybe1(sym_name_specifier)::out)
    is det.

parse_symbol_name_specifier(Term, Result) :-
    root_module_name(DefaultModule),
    parse_implicitly_qualified_symbol_name_specifier(DefaultModule, Term,
        Result).

:- pred parse_implicitly_qualified_symbol_name_specifier(module_name::in,
    term::in, maybe1(sym_name_specifier)::out) is det.

parse_implicitly_qualified_symbol_name_specifier(DefaultModule, Term,
        Result) :-
    ( Term = term.functor(term.atom("/"), [NameTerm, ArityTerm], _Context) ->
        ( ArityTerm = term.functor(term.integer(Arity), [], _Context2) ->
            ( Arity >= 0 ->
                parse_implicitly_qualified_symbol_name(DefaultModule, NameTerm,
                    NameResult),
                process_maybe1(make_name_arity_specifier(Arity),
                    NameResult, Result)
            ;
                Msg = "arity in symbol name specifier " ++
                    "must be a non-negative integer",
                Result = error1([Msg - Term])
            )
        ;
            Msg = "arity in symbol name specifier must be an integer",
            Result = error1([Msg - Term])
        )
    ;
        parse_implicitly_qualified_symbol_name(DefaultModule, Term,
            SymbolNameResult),
        process_maybe1(make_name_specifier, SymbolNameResult, Result)
    ).

:- pred make_name_arity_specifier(arity::in, sym_name::in,
    sym_name_specifier::out) is det.

make_name_arity_specifier(Arity, Name, name_arity(Name, Arity)).

:- pred make_name_specifier(sym_name::in, sym_name_specifier::out) is det.

make_name_specifier(Name, name(Name)).

%-----------------------------------------------------------------------------%

    % A SymbolName is one of
    %   Name
    %       Matches symbols with the specified name in the
    %       current namespace.
    %   Module.Name
    %       Matches symbols with the specified name exported
    %       by the specified module (where Module is itself a SymbolName).
    %
    % We also allow the syntax `Module__Name' as an alternative
    % for `Module.Name'.
    %
:- pred parse_symbol_name(term(T)::in, maybe1(sym_name)::out) is det.

parse_symbol_name(Term, Result) :-
    (
        Term = term.functor(term.atom(FunctorName), [ModuleTerm, NameTerm],
            _Context),
        ( FunctorName = ":"
        ; FunctorName = "."
        )
    ->
        ( NameTerm = term.functor(term.atom(Name), [], _Context1) ->
            parse_symbol_name(ModuleTerm, ModuleResult),
            (
                ModuleResult = ok1(Module),
                Result = ok1(qualified(Module, Name))
            ;
                ModuleResult = error1(_),
                term.coerce(Term, ErrorTerm),
                Msg = "module name identifier expected before" ++
                    "'" ++ FunctorName ++ "' " ++ "in qualified symbol name",
                Result = error1([Msg - ErrorTerm])
            )
        ;
            term.coerce(Term, ErrorTerm),
            Msg = "identifier expected after '" ++ FunctorName ++ "' " ++
                "in qualified symbol name",
            Result = error1([Msg - ErrorTerm])
        )
    ;
        ( Term = term.functor(term.atom(Name), [], _Context3) ->
            SymName = string_to_sym_name_sep(Name, "__"),
            Result = ok1(SymName)
        ;
            term.coerce(Term, ErrorTerm),
            Result = error1(["symbol name expected" - ErrorTerm])
        )
    ).

:- pred parse_implicitly_qualified_symbol_name(module_name::in, term::in,
    maybe1(sym_name)::out) is det.

parse_implicitly_qualified_symbol_name(DefaultModName, Term, Result) :-
    parse_symbol_name(Term, Result0),
    (
        Result0 = ok1(SymName),
        (
            root_module_name(DefaultModName)
        ->
            Result = Result0
        ;
            SymName = qualified(ModName, _),
            \+ match_sym_name(ModName, DefaultModName)
        ->
            Msg = "module qualifier in definition " ++
                "does not match preceding `:- module' declaration",
            Result = error1([Msg - Term])
        ;
            UnqualName = unqualify_name(SymName),
            Result = ok1(qualified(DefaultModName, UnqualName))
        )
    ;
        Result0 = error1(_),
        Result = Result0
    ).

%-----------------------------------------------------------------------------%

sym_name_and_args(Term, SymName, Args) :-
    parse_qualified_term(Term, Term, "", ok2(SymName, Args)).

parse_implicitly_qualified_term(DefaultModName, Term, ContainingTerm, Msg,
        Result) :-
    parse_qualified_term(Term, ContainingTerm, Msg, Result0),
    ( Result0 = ok2(SymName, Args) ->
        (
            root_module_name(DefaultModName)
        ->
            Result = Result0
        ;
            SymName = qualified(ModName, _),
            \+ match_sym_name(ModName, DefaultModName)
        ->
            term.coerce(Term, ErrorTerm),
            ErrorMsg = "module qualifier in definition does not match " ++
                "preceding `:- module' declaration",
            Result = error2([ErrorMsg - ErrorTerm])
        ;
            UnqualName = unqualify_name(SymName),
            Result = ok2(qualified(DefaultModName, UnqualName), Args)
        )
    ;
        Result = Result0
    ).

parse_qualified_term(Term, ContainingTerm, Msg, Result) :-
    (
        Term = term.functor(term.atom(FunctorName),
            [ModuleTerm, NameArgsTerm], _),
        FunctorName = "."
    ->
        ( NameArgsTerm = term.functor(term.atom(Name), Args, _) ->
            parse_symbol_name(ModuleTerm, ModuleResult),
            (
                ModuleResult = ok1(Module),
                Result = ok2(qualified(Module, Name), Args)
            ;
                ModuleResult = error1(_),
                term.coerce(Term, ErrorTerm),
                ErrorMsg = "module name identifier expected before '.' " ++
                    "in qualified symbol name",
                Result = error2([ErrorMsg - ErrorTerm])
            )
        ;
            term.coerce(Term, ErrorTerm),
            ErrorMsg = "identifier expected after '.' " ++
                "in qualified symbol name",
            Result = error2([ErrorMsg - ErrorTerm])
        )
    ;
        ( Term = term.functor(term.atom(Name), Args, _) ->
            SymName = string_to_sym_name_sep(Name, "__"),
            Result = ok2(SymName, Args)
        ;
            string.append("atom expected in ", Msg, ErrorMsg),
            % Since variables don't have any term.context, if Term is
            % a variable, we use ContainingTerm instead (hopefully that
            % _will_ have a term.context).
            ( Term = term.variable(_, _) ->
                ErrorTerm0 = ContainingTerm
            ;
                ErrorTerm0 = Term
            ),
            term.coerce(ErrorTerm0, ErrorTerm),
            Result = error2([ErrorMsg - ErrorTerm])
        )
    ).

%-----------------------------------------------------------------------------%
%
% Predicates used to convert a sym_list to a program item.

:- pred make_use(sym_list::in, module_defn::out) is det.

make_use(Syms, md_use(Syms)).

:- pred make_import(sym_list::in, module_defn::out) is det.

make_import(Syms, md_import(Syms)).

:- pred make_export(sym_list::in, module_defn::out) is det.

make_export(Syms, md_export(Syms)).

%-----------------------------------------------------------------------------%

    % A FuncSpecifier is just a constructur name specifier.
    %
:- pred parse_function_specifier(term::in, maybe1(func_specifier)::out) is det.

parse_function_specifier(Term, Result) :-
    parse_constructor_specifier(Term, Result).

    % A TypeSpecifier is just a symbol name specifier.
    %
:- pred parse_type_specifier(term::in, maybe1(sym_name_specifier)::out) is det.

parse_type_specifier(Term, Result) :-
    parse_symbol_name_specifier(Term, Result).

    % An ADT_Specifier is just a symbol name specifier.
    %
:- pred parse_adt_specifier(term::in, maybe1(sym_name_specifier)::out) is det.

parse_adt_specifier(Term, Result) :-
    parse_symbol_name_specifier(Term, Result).

%-----------------------------------------------------------------------------%

    % For the moment, an OpSpecifier is just a symbol name specifier.
    % XXX We should allow specifying the fixity of an operator
    %
:- pred parse_op_specifier(term::in, maybe1(op_specifier)::out) is det.

parse_op_specifier(Term, Result) :-
    parse_symbol_name_specifier(Term, R),
    process_maybe1(make_op_specifier, R, Result).

:- pred make_op_specifier(sym_name_specifier::in, op_specifier::out) is det.

make_op_specifier(X, opspec_sym(X)).

%-----------------------------------------------------------------------------%

:- func convert_constructor_arg_list(module_name, list(term)) =
    maybe1(list(constructor_arg)).

convert_constructor_arg_list(_ModuleName, []) = ok1([]).
convert_constructor_arg_list( ModuleName, [Term | Terms]) = Result :-
    ( Term = term.functor(term.atom("::"), [NameTerm, TypeTerm], _) ->
        parse_implicitly_qualified_term(ModuleName, NameTerm, Term,
            "field name", NameResult),
        (
            NameResult = error2(Errors),
            Result = error1(Errors)
        ;
            NameResult = ok2(SymName, SymNameArgs),
            (
                SymNameArgs = [_ | _],
                Result = error1(["syntax error in constructor name" - Term])
            ;
                SymNameArgs = [],
                MaybeFieldName = yes(SymName),
                Result = convert_constructor_arg_list_2(ModuleName,
                    MaybeFieldName, TypeTerm, Terms)
            )
        )
    ;
        MaybeFieldName = no,
        TypeTerm = Term,
        Result = convert_constructor_arg_list_2(ModuleName, MaybeFieldName,
            TypeTerm, Terms)
    ).

:- func convert_constructor_arg_list_2(module_name, maybe(sym_name), term,
    list(term)) = maybe1(list(constructor_arg)).

convert_constructor_arg_list_2(ModuleName, MaybeFieldName, TypeTerm, Terms) =
        Result :-
    parse_type(TypeTerm, TypeResult),
    (
        TypeResult = ok1(Type),
        Context = term_context(TypeTerm),
        Arg = ctor_arg(MaybeFieldName, Type, Context),
        Result0 = convert_constructor_arg_list(ModuleName, Terms),
        (
            Result0 = error1(Errors),
            Result  = error1(Errors)
        ;
            Result0 = ok1(Args),
            Result  = ok1([Arg | Args])
        )
    ;
        TypeResult = error1(Errors),
        Result = error1(Errors)
    ).

%-----------------------------------------------------------------------------%

    % We use the empty module name ('') as the "root" module name; when adding
    % default module qualifiers in parse_implicitly_qualified_{term,symbol},
    % if the default module is the root module then we don't add any qualifier.
    %
:- pred root_module_name(module_name::out) is det.

root_module_name(unqualified("")).

%-----------------------------------------------------------------------------%

:- func this_file = string.

this_file = "prog_io.m".

%-----------------------------------------------------------------------------%
