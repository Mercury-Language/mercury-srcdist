%-----------------------------------------------------------------------------e
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------e
% Copyright (C) 2008-2011 The University of Melbourne.
% Copyright (C) 2013-2015, 2018 The Mercury team.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%---------------------------------------------------------------------------%
%
% File: file_util.m.
%
% Utility predicates for operating on files that do not require any access
% to the parse_tree package or anything above it.
%
%---------------------------------------------------------------------------%

:- module libs.file_util.
:- interface.

:- import_module libs.globals.

:- import_module bool.
:- import_module io.
:- import_module list.
:- import_module maybe.
:- import_module time.

%---------------------------------------------------------------------------%

:- type file_name == string.
:- type dir_name == string.

:- type path_name_and_stream
    --->    path_name_and_stream(string, io.text_input_stream).
            % The string may be a file name or a dir name.

%---------------------%

    % search_for_file(Dirs, FileName, MaybeFilePathName, !IO):
    %
    % Search Dirs for FileName. If found, return the path name of the file.
    %
    % NB. Consider using search_for_file_returning_dir, which does not
    % canonicalise the path, and is therefore more efficient.
    %
:- pred search_for_file(list(dir_name)::in, file_name::in,
    maybe_error(file_name)::out, io::di, io::uo) is det.

    % search_for_file_and_stream(Dirs, FileName, MaybeFilePathNameAndStream,
    %   !IO):
    %
    % Search Dirs for FileName. If found, return the path name of the file
    % and an open input stream reading from that file. Closing that stream
    % is the caller's responsibility.
    %
    % NB. Consider using search_for_file_returning_dir_and_stream,
    % which does not canonicalise the path, and is therefore more efficient.
    %
:- pred search_for_file_and_stream(list(dir_name)::in, file_name::in,
    maybe_error(path_name_and_stream)::out, io::di, io::uo) is det.

%---------------------%

    % search_for_file_returning_dir(Dirs, FileName, MaybeDirName !IO):
    %
    % Search Dirs for FileName. If found, return the name of the directory
    % in which the file was found.
    %
:- pred search_for_file_returning_dir(list(dir_name)::in, file_name::in,
    maybe_error(dir_name)::out, io::di, io::uo) is det.

    % search_for_file_returning_dir_and_stream(Dirs, FileName,
    %   MaybeDirNameAndStream !IO):
    %
    % Search Dirs for FileName. If found, return the name of the directory
    % in which the file was found, and an open input stream reading
    % from that file. Closing that stream is the caller's responsibility.
    %
:- pred search_for_file_returning_dir_and_stream(list(dir_name)::in,
    file_name::in, maybe_error(path_name_and_stream)::out,
    io::di, io::uo) is det.

%---------------------%

    % search_for_file_mod_time(Dirs, FileName, MaybeModTime, !IO)
    %
    % Search Dirs for FileName. If found, return the last modification time
    % of the file that was found. Do NOT open the file for reading.
    %
:- pred search_for_file_mod_time(list(dir_name)::in, file_name::in,
    maybe_error(time_t)::out, io::di, io::uo) is det.

%---------------------------------------------------------------------------%

    % Write to a given filename, giving appropriate status messages
    % and error messages if the file cannot be opened.
    %
:- pred output_to_file(globals::in, string::in,
    pred(list(string), io, io)::in(pred(out, di, uo) is det), bool::out,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

    % Write the contents of the given file to the specified output stream.
    %
:- pred write_include_file_contents(io.text_output_stream::in, string::in,
    maybe_error::out, io::di, io::uo) is det.
:- pred write_include_file_contents_cur_stream(string::in, maybe_error::out,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

    % get_install_name_option(FileName, Option, !IO):
    %
    % Get the option string for setting the install-name of the shared library
    % FileName. This is only used for systems which support the install-name
    % option for shared libraries (such as Darwin).
    %
:- pred get_install_name_option(globals::in, string::in, string::out) is det.

%---------------------------------------------------------------------------%

:- pred maybe_report_stats(bool::in, io::di, io::uo) is det.
:- pred maybe_write_string(bool::in, string::in, io::di, io::uo) is det.
:- pred maybe_flush_output(bool::in, io::di, io::uo) is det.

:- pred report_error(string::in, io::di, io::uo) is det.
:- pred report_error_to_stream(io.output_stream::in, string::in,
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%

    % make_install_file_command(Globals, FileName, InstallDir) = Command:
    % Command is the command required to install file FileName in directory
    % InstallDir.
    %
:- func make_install_file_command(globals, string, string) = string.

    % make_install_dir_command(Globals, SourceDirName, InstallDir) = Command:
    % Command is the command required to install directory SourceDirName
    % in directory InstallDir.
    %
:- func make_install_dir_command(globals, string, string) = string.

%---------------------------------------------------------------------------%

    % open_temp_output(Dir, Prefix, Suffix, Result, !IO):
    %
    % Create a temporary file and open it for writing. If successful, Result
    % returns the file's name and output stream. On error, any temporary
    % file will be removed.
    %
:- pred open_temp_output(string::in, string::in, string::in,
    maybe_error({string, text_output_stream})::out, io::di, io::uo) is det.

:- pred open_temp_output(maybe_error({string, text_output_stream})::out,
    io::di, io::uo) is det.

    % open_temp_input(Result, WritePred, !IO):
    %
    % Create a temporary file and call WritePred which will write data to it.
    % If successful Result returns the file's name and a freshly opened
    % input stream. On error any temporary file will be removed.
    %
:- pred open_temp_input(maybe_error({string, text_input_stream})::out,
    pred(string, maybe_error, io, io)::in(pred(in, out, di, uo) is det),
    io::di, io::uo) is det.

%---------------------------------------------------------------------------%
%---------------------------------------------------------------------------%

:- implementation.

:- import_module libs.compute_grade.
:- import_module libs.options.

:- import_module dir.
:- import_module exception.
:- import_module string.
:- import_module univ.

%---------------------------------------------------------------------------%

search_for_file(Dirs, FileName, MaybeFilePathName, !IO) :-
    search_for_file_and_stream(Dirs, FileName, MaybeFilePathNameAndStream,
        !IO),
    (
        MaybeFilePathNameAndStream =
            ok(path_name_and_stream(FilePathName, Stream)),
        io.close_input(Stream, !IO),
        MaybeFilePathName = ok(FilePathName)
    ;
        MaybeFilePathNameAndStream = error(Msg),
        MaybeFilePathName = error(Msg)
    ).

search_for_file_and_stream(Dirs, FileName, MaybeFilePathNameAndStream, !IO) :-
    search_for_file_and_stream_loop(Dirs, Dirs, FileName,
        MaybeFilePathNameAndStream, !IO).

:- pred search_for_file_and_stream_loop(list(dir_name)::in,
    list(dir_name)::in, file_name::in, maybe_error(path_name_and_stream)::out,
    io::di, io::uo) is det.

search_for_file_and_stream_loop(AllDirs, Dirs, FileName,
        MaybeFilePathNameAndStream, !IO) :-
    (
        Dirs = [],
        Msg = cannot_find_in_dirs_msg(FileName, AllDirs),
        MaybeFilePathNameAndStream = error(Msg)
    ;
        Dirs = [HeadDir | TailDirs],
        make_path_name_noncanon(HeadDir, FileName, HeadFilePathNameNC),
        io.open_input(HeadFilePathNameNC, MaybeHeadStream, !IO),
        (
            MaybeHeadStream = ok(HeadStream),
            % HeadFilePathName should be a canonical version of
            % HeadFilePathNameNC.
            ( if dir.this_directory(HeadDir) then
                HeadFilePathName = FileName
            else
                HeadFilePathName = dir.make_path_name(HeadDir, FileName)
            ),
            MaybeFilePathNameAndStream =
                ok(path_name_and_stream(HeadFilePathName, HeadStream))
        ;
            MaybeHeadStream = error(_),
            search_for_file_and_stream_loop(AllDirs, TailDirs,
                FileName, MaybeFilePathNameAndStream, !IO)
        )
    ).

%---------------------%

search_for_file_returning_dir(Dirs, FileName, MaybeDirPathName, !IO) :-
    search_for_file_returning_dir_and_stream(Dirs, FileName,
        MaybeDirPathNameAndStream, !IO),
    (
        MaybeDirPathNameAndStream =
            ok(path_name_and_stream(DirPathName, Stream)),
        io.close_input(Stream, !IO),
        MaybeDirPathName = ok(DirPathName)
    ;
        MaybeDirPathNameAndStream = error(Msg),
        MaybeDirPathName = error(Msg)
    ).

search_for_file_returning_dir_and_stream(Dirs, FileName,
        MaybeDirPathNameAndStream, !IO) :-
    search_for_file_returning_dir_and_stream_loop(Dirs, Dirs, FileName,
        MaybeDirPathNameAndStream, !IO).

:- pred search_for_file_returning_dir_and_stream_loop(list(dir_name)::in,
    list(dir_name)::in, file_name::in, maybe_error(path_name_and_stream)::out,
    io::di, io::uo) is det.

search_for_file_returning_dir_and_stream_loop(AllDirs, Dirs, FileName,
        MaybeDirNameAndStream, !IO) :-
    (
        Dirs = [],
        Msg = cannot_find_in_dirs_msg(FileName, AllDirs),
        MaybeDirNameAndStream = error(Msg)
    ;
        Dirs = [HeadDir | TailDirs],
        make_path_name_noncanon(HeadDir, FileName, HeadFilePathNameNC),
        io.open_input(HeadFilePathNameNC, MaybeHeadStream, !IO),
        (
            MaybeHeadStream = ok(HeadStream),
            MaybeDirNameAndStream =
                ok(path_name_and_stream(HeadDir, HeadStream))
        ;
            MaybeHeadStream = error(_),
            search_for_file_returning_dir_and_stream_loop(AllDirs, TailDirs,
                FileName, MaybeDirNameAndStream, !IO)
        )
    ).

%---------------------%

search_for_file_mod_time(Dirs, FileName, Result, !IO) :-
    search_for_file_mod_time_loop(Dirs, Dirs, FileName, Result, !IO).

:- pred search_for_file_mod_time_loop(list(dir_name)::in, list(dir_name)::in,
    file_name::in, maybe_error(time_t)::out, io::di, io::uo) is det.

search_for_file_mod_time_loop(AllDirs, Dirs, FileName, MaybeModTime, !IO) :-
    (
        Dirs = [],
        Msg = cannot_find_in_dirs_msg(FileName, AllDirs),
        MaybeModTime = error(Msg)
    ;
        Dirs = [HeadDir | TailDirs],
        make_path_name_noncanon(HeadDir, FileName, HeadFilePathNameNC),
        io.file_modification_time(HeadFilePathNameNC, MaybeHeadModTime, !IO),
        (
            MaybeHeadModTime = ok(HeadModTime),
            MaybeModTime = ok(HeadModTime)
        ;
            MaybeHeadModTime = error(_),
            search_for_file_mod_time_loop(AllDirs, TailDirs, FileName,
                MaybeModTime, !IO)
        )
    ).

%---------------------%

:- func cannot_find_in_dirs_msg(file_name, list(dir_name)) = string.

cannot_find_in_dirs_msg(FileName, Dirs) =
    "cannot find `" ++ FileName ++ "' in directories " ++
        string.join_list(", ", Dirs).

:- pred make_path_name_noncanon(dir_name::in, file_name::in, file_name::out)
    is det.

make_path_name_noncanon(Dir, FileName, PathName) :-
    ( if dir.this_directory(Dir) then
        PathName = FileName
    else
        % dir.make_path_name is slow so we avoid it when path names don't
        % need to be canonicalised.
        Sep = string.from_char(dir.directory_separator),
        PathName = string.append_list([Dir, Sep, FileName])
    ).

%---------------------------------------------------------------------------%

output_to_file(Globals, FileName, Action, Succeeded, !IO) :-
    globals.lookup_bool_option(Globals, verbose, Verbose),
    globals.lookup_bool_option(Globals, statistics, Stats),
    maybe_write_string(Verbose, "% Writing to file `", !IO),
    maybe_write_string(Verbose, FileName, !IO),
    maybe_write_string(Verbose, "'...\n", !IO),
    maybe_flush_output(Verbose, !IO),
    io.open_output(FileName, Res, !IO),
    (
        Res = ok(FileStream),
        io.set_output_stream(FileStream, OrigOutputStream, !IO),
        promise_equivalent_solutions [TryResult, !:IO] (
            try_io(Action, TryResult, !IO)
        ),
        io.set_output_stream(OrigOutputStream, _, !IO),
        io.close_output(FileStream, !IO),
        maybe_write_string(Verbose, "% done.\n", !IO),
        maybe_report_stats(Stats, !IO),
        (
            TryResult = succeeded(Errors),
            (
                Errors = [],
                Succeeded = yes
            ;
                Errors = [_ | _],
                maybe_write_string(Verbose, "\n", !IO),
                foldl(report_error, Errors, !IO),
                Succeeded = no
            )
        ;
            TryResult = exception(_),
            rethrow(TryResult)
        )
    ;
        Res = error(_),
        maybe_write_string(Verbose, "\n", !IO),
        string.append_list(["can't open file `", FileName, "' for output."],
            ErrorMessage),
        report_error(ErrorMessage, !IO),
        Succeeded = no
    ).

%---------------------------------------------------------------------------%

write_include_file_contents(OutputStream, FileName, Res, !IO) :-
    FollowSymLinks = yes,
    io.file_type(FollowSymLinks, FileName, MaybeFileType, !IO),
    (
        MaybeFileType = ok(FileType),
        ( if possibly_regular_file(FileType) then
            copy_file_to_stream(FileName, OutputStream, CopyRes, !IO),
            (
                CopyRes = ok,
                Res = ok
            ;
                CopyRes = error(Error),
                Message = io.error_message(Error),
                Res = error(cannot_open_file_for_input(FileName, Message))
            )
        else
            Message = "Not a regular file",
            Res = error(cannot_open_file_for_input(FileName, Message))
        )
    ;
        MaybeFileType = error(FileTypeError),
        Message = string.remove_prefix_if_present("can't find file type: ",
            io.error_message(FileTypeError)),
        Res = error(cannot_open_file_for_input(FileName, Message))
    ).

write_include_file_contents_cur_stream(FileName, Res, !IO) :-
    io.output_stream(OutputStream, !IO),
    write_include_file_contents(OutputStream, FileName, Res, !IO).

:- pred copy_file_to_stream(string::in, io.output_stream::in, io.res::out,
    io::di, io::uo) is det.

copy_file_to_stream(FileName, OutputStream, Res, !IO) :-
    io.open_input(FileName, OpenRes, !IO),
    (
        OpenRes = ok(InputStream),
        promise_equivalent_solutions [TryResult, !:IO] (
            try_io(copy_stream(InputStream, OutputStream), TryResult, !IO)
        ),
        io.close_input(InputStream, !IO),
        (
            TryResult = succeeded(ok),
            Res = ok
        ;
            TryResult = succeeded(error(Error)),
            Res = error(Error)
        ;
            TryResult = exception(_),
            rethrow(TryResult)
        )
    ;
        OpenRes = error(Error),
        Res = error(Error)
    ).

:- pred copy_stream(io.input_stream::in, io.output_stream::in,
    io.res::out, io::di, io::uo) is det.

copy_stream(InputStream, OutputStream, Res, !IO) :-
    io.read_file_as_string(InputStream, ReadRes, !IO),
    (
        ReadRes = ok(InputContents),
        io.write_string(OutputStream, InputContents, !IO),
        Res = ok
    ;
        ReadRes = error(_Partial, Error),
        Res = error(Error)
    ).

:- pred possibly_regular_file(io.file_type::in) is semidet.

possibly_regular_file(regular_file).
possibly_regular_file(unknown).

:- func cannot_open_file_for_input(string, string) = string.

cannot_open_file_for_input(FileName, Error) =
    string.format("can't open `%s' for input: %s", [s(FileName), s(Error)]).

%---------------------------------------------------------------------------%

% Changes to the following predicate may require similar changes to
% make.program_target.install_library_grade_files/9.

get_install_name_option(Globals, OutputFileName, InstallNameOpt) :-
    globals.lookup_string_option(Globals, shlib_linker_install_name_flag,
        InstallNameFlag),
    globals.lookup_string_option(Globals, shlib_linker_install_name_path,
        InstallNamePath0),
    ( if InstallNamePath0 = "" then
        globals.lookup_string_option(Globals, install_prefix, InstallPrefix),
        grade_directory_component(Globals, GradeDir),
        InstallNamePath = InstallPrefix / "lib" / "mercury" / "lib" / GradeDir
    else
        InstallNamePath = InstallNamePath0
    ),
    InstallNameOpt = InstallNameFlag ++
        quote_arg(InstallNamePath) / OutputFileName.

%---------------------------------------------------------------------------%

maybe_report_stats(yes, !IO) :-
    io.report_stats(!IO).
maybe_report_stats(no, !IO).

maybe_write_string(yes, String, !IO) :-
    io.write_string(String, !IO).
maybe_write_string(no, _, !IO).

maybe_flush_output(yes, !IO) :-
    io.flush_output(!IO).
maybe_flush_output(no, !IO).

report_error(ErrorMessage, !IO) :-
    io.write_string("Error: ", !IO),
    io.write_string(ErrorMessage, !IO),
    io.write_string("\n", !IO),
    io.flush_output(!IO),
    io.set_exit_status(1, !IO).

report_error_to_stream(Stream, ErrorMessage, !IO) :-
    io.set_output_stream(Stream, OldStream, !IO),
    report_error(ErrorMessage, !IO),
    io.set_output_stream(OldStream, _, !IO).

%---------------------------------------------------------------------------%

make_install_file_command(Globals, FileName, InstallDir) = Command :-
    globals.get_file_install_cmd(Globals, FileInstallCmd),
    (
        FileInstallCmd = install_cmd_user(InstallCmd, _InstallCmdDirOpt)
    ;
        FileInstallCmd = install_cmd_cp,
        InstallCmd = "cp"
    ),
    Command = string.join_list("   ", list.map(quote_arg,
        [InstallCmd, FileName, InstallDir])).

make_install_dir_command(Globals, SourceDirName, InstallDir) = Command :-
    globals.get_file_install_cmd(Globals, FileInstallCmd),
    (
        FileInstallCmd = install_cmd_user(InstallCmd, InstallCmdDirOpt)
    ;
        FileInstallCmd = install_cmd_cp,
        InstallCmd = "cp",
        InstallCmdDirOpt = "-R"
    ),
    Command = string.join_list("   ", list.map(quote_arg,
        [InstallCmd, InstallCmdDirOpt, SourceDirName, InstallDir])).

%---------------------------------------------------------------------------%

open_temp_output(Dir, Prefix, Suffix, Result, !IO) :-
    % XXX Both open_temp_output and io.make_temp_file are ambiguous.
    io.make_temp_file(Dir, Prefix, Suffix, TempFileResult, !IO),
    open_temp_output_2(TempFileResult, Result, !IO).

open_temp_output(Result, !IO) :-
    io.make_temp_file(TempFileResult, !IO),
    open_temp_output_2(TempFileResult, Result, !IO).

:- pred open_temp_output_2(io.res(string)::in,
    maybe_error({string, text_output_stream})::out, io::di, io::uo) is det.

open_temp_output_2(TempFileResult, Result, !IO) :-
    (
        TempFileResult = ok(TempFileName),
        io.open_output(TempFileName, OpenResult, !IO),
        (
            OpenResult = ok(Stream),
            Result = ok({TempFileName, Stream})
        ;
            OpenResult = error(Error),
            io.remove_file(TempFileName, _, !IO),
            Result = error(format(
                "could not open temporary file `%s': %s",
                [s(TempFileName), s(error_message(Error))]))
        )
    ;
        TempFileResult = error(Error),
        Result = error(format("could not create temporary file: %s",
            [s(error_message(Error))]))
    ).

open_temp_input(Result, Pred, !IO) :-
    io.make_temp_file(TempFileResult, !IO),
    (
        TempFileResult = ok(TempFileName),
        Pred(TempFileName, PredResult, !IO),
        (
            PredResult = ok,
            io.open_input(TempFileName, OpenResult, !IO),
            (
                OpenResult = ok(Stream),
                Result = ok({TempFileName, Stream})
            ;
                OpenResult = error(Error),
                Result = error(format("could not open `%s': %s",
                    [s(TempFileName), s(error_message(Error))])),
                remove_file(TempFileName, _, !IO)
            )
        ;
            PredResult = error(ErrorMessage),
            io.remove_file(TempFileName, _, !IO),
            Result = error(ErrorMessage)
        )
    ;
        TempFileResult = error(Error),
        Result = error(format("could not create temporary file: %s",
            [s(error_message(Error))]))
    ).

%---------------------------------------------------------------------------%
:- end_module libs.file_util.
%---------------------------------------------------------------------------%
