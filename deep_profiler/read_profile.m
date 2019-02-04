%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001, 2004-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: read_call_graph.m.
% Authors: conway, zs.
%
% This module contains code for reading in a deep profiling data file.
% Such files, named Deep.data, are created by deep profiled executables.
%
%-----------------------------------------------------------------------------%

:- module read_profile.
:- interface.

:- import_module profile.

:- import_module io.
:- import_module maybe.

:- pred read_call_graph(string::in, maybe_error(initial_deep)::out,
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module array_util.
:- import_module exception.
:- import_module io_combinator.
:- import_module measurements.
:- import_module mdbcomp.
:- import_module mdbcomp.prim_data.
:- import_module mdbcomp.program_representation.

:- import_module array.
:- import_module bool.
:- import_module char.
:- import_module int.
:- import_module list.
:- import_module require.
:- import_module string.

%-----------------------------------------------------------------------------%

:- type maybe_error2(T1, T2)
    --->    ok2(T1, T2)
    ;       error2(string).

:- type ptr_kind
    --->    ps
    ;       pd
    ;       css
    ;       csd.

read_call_graph(FileName, MaybeInitDeep, !IO) :-
    io.see_binary(FileName, SeeResult, !IO),
    (
        SeeResult = ok,
        read_deep_id_string(MaybeIdStr, !IO),
        (
            MaybeIdStr = ok(_),
            io_combinator.maybe_error_sequence_12(
                read_string,
                read_fixed_size_int,
                read_fixed_size_int,
                read_fixed_size_int,
                read_fixed_size_int,
                read_num,
                read_num,
                read_num,
                read_num,
                read_deep_byte,
                read_deep_byte,
                read_ptr(pd),
                (pred(ProgName::in,
                        MaxCSD::in, MaxCSS::in,
                        MaxPD::in, MaxPS::in,
                        TicksPerSec::in,
                        InstrumentQuanta::in,
                        UserQuanta::in,
                        NumCallSeqs::in,
                        WordSize::in,
                        CanonicalFlag::in,
                        RootPDI::in,
                        ResInitDeep::out) is det :-
                    InitDeep0 = init_deep(basename(ProgName),
                        MaxCSD, MaxCSS, MaxPD, MaxPS,
                        TicksPerSec, InstrumentQuanta, UserQuanta,
                        NumCallSeqs,
                        WordSize, CanonicalFlag,
                        RootPDI),
                    ResInitDeep = ok(InitDeep0)
                ),
                MaybeInitDeepHeader, !IO),
            (
                MaybeInitDeepHeader = ok(InitDeep),
                read_nodes(InitDeep, MaybeInitDeep, !IO),
                io.seen_binary(!IO)
            ;
                MaybeInitDeepHeader = error(Error),
                MaybeInitDeep = error(Error)
            )
        ;
            MaybeIdStr = error(Msg),
            MaybeInitDeep = error(Msg)
        )
    ;
        SeeResult = error(Error),
        io.error_message(Error, Msg),
        MaybeInitDeep = error(Msg)
    ).

:- pred read_deep_id_string(maybe_error(string)::out,
    io::di, io::uo) is det.

read_deep_id_string(MaybeIdStr, !IO) :-
    read_line(string.length(deep_id_string), MaybeLine, !IO),
    (
        MaybeLine = ok(Line),
        ( Line = deep_id_string ->
            MaybeIdStr = ok(deep_id_string)
        ; string.prefix(Line, deep_id_prefix) ->
            MaybeIdStr = error("version number mismatch")
        ;
            MaybeIdStr = error("not a deep profiling data file")
        )
    ;
        MaybeLine = error(Error),
        MaybeIdStr = error(Error)
    ).

    % Return the string identifying a file as a deep profiling data file.
    % This must the same string as the one written by the function
    % MR_write_out_deep_id_string in runtime/mercury_deep_profiling.c.
    %
:- func deep_id_string = string.

deep_id_string = deep_id_prefix ++ " 6\n".

    % Return the part of deep_id_string that is version independent.
    %
:- func deep_id_prefix = string.

deep_id_prefix = "Mercury deep profiler data version".

    % Strip the directory paths off the given string.
    %
    % basename("/bin/ls") = "ls"
    %
:- func basename(string) = string.

basename(Path) = Base :-
    string.to_char_list(Path, PathChars),
    basename_chars(PathChars, MaybeBaseChars),
    (
        MaybeBaseChars = no,
        BaseChars = PathChars
    ;
        MaybeBaseChars = yes(BaseChars)
    ),
    string.from_char_list(BaseChars, Base).

:- pred basename_chars(list(char)::in, maybe(list(char))::out) is det.

basename_chars([], no).
basename_chars([Char | Chars], MaybeChars) :-
    basename_chars(Chars, MaybeTailChars),
    (
        MaybeTailChars = yes(_),
        MaybeChars = MaybeTailChars
    ;
        MaybeTailChars = no,
        ( path_separator(Char) ->
            MaybeChars = yes(Chars)
        ;
            MaybeChars = no
        )
    ).

:- pred path_separator(char::in) is semidet.

path_separator('/').
path_separator('\\').

:- func init_deep(string, int, int, int, int, int, int, int, int, int, int,
    int) = initial_deep.

init_deep(ProgName, MaxCSD, MaxCSS, MaxPD, MaxPS, TicksPerSec,
        InstrumentQuanta, UserQuanta, NumCallSeqs, WordSize, CanonicalByte,
        RootPDI) = InitDeep :-
    ( CanonicalByte = 0 ->
        CanonicalFlag = no
    ;
        CanonicalFlag = yes
    ),
    InitStats = profile_stats(ProgName, MaxCSD, MaxCSS, MaxPD, MaxPS,
        TicksPerSec, InstrumentQuanta, UserQuanta, NumCallSeqs, WordSize,
        CanonicalFlag),
    InitDeep = initial_deep(
        InitStats,
        make_pdptr(RootPDI),
        array.init(MaxCSD + 1,
            call_site_dynamic(
                make_dummy_pdptr,
                make_dummy_pdptr,
                zero_own_prof_info
            )),
        array.init(MaxPD + 1, proc_dynamic(make_dummy_psptr, array([]))),
        array.init(MaxCSS + 1,
            call_site_static(
                make_dummy_psptr, -1,
                normal_call_and_callee(make_dummy_psptr, ""), -1, ""
            )),
        array.init(MaxPS + 1,
            proc_static(dummy_proc_id, "", "", "", "", "", -1, no,
                array([]), array([]), not_zeroed))
    ).

:- pred read_nodes(initial_deep::in, maybe_error(initial_deep)::out,
    io::di, io::uo) is det.

read_nodes(!.InitDeep, MaybeInitDeep, !IO) :-
    read_byte(MaybeByte, !IO),
    (
        MaybeByte = ok(Byte),
        ( is_next_item_token(Byte, NextItem) ->
            (
                NextItem = deep_item_call_site_dynamic,
                read_call_site_dynamic(MaybeCSD, !IO),
                (
                    MaybeCSD = ok2(CallSiteDynamic, CSDI),
                    CSDs0 = !.InitDeep ^ init_call_site_dynamics,
                    deep_insert(CSDs0, CSDI, CallSiteDynamic, CSDs),
                    !InitDeep ^ init_call_site_dynamics := CSDs,
                    read_nodes(!.InitDeep, MaybeInitDeep, !IO)
                ;
                    MaybeCSD = error2(Error),
                    MaybeInitDeep = error(Error)
                )
            ;
                NextItem = deep_item_proc_dynamic,
                read_proc_dynamic(MaybePD, !IO),
                (
                    MaybePD = ok2(ProcDynamic, PDI),
                    PDs0 = !.InitDeep ^ init_proc_dynamics,
                    deep_insert(PDs0, PDI, ProcDynamic, PDs),
                    !InitDeep ^ init_proc_dynamics := PDs,
                    read_nodes(!.InitDeep, MaybeInitDeep, !IO)
                ;
                    MaybePD = error2(Error),
                    MaybeInitDeep = error(Error)
                )
            ;
                NextItem = deep_item_call_site_static,
                read_call_site_static(MaybeCSS, !IO),
                (
                    MaybeCSS = ok({CallSiteStatic, CSSI}),
                    CSSs0 = !.InitDeep ^ init_call_site_statics,
                    deep_insert(CSSs0, CSSI, CallSiteStatic, CSSs),
                    !InitDeep ^ init_call_site_statics := CSSs,
                    read_nodes(!.InitDeep, MaybeInitDeep, !IO)
                ;
                    MaybeCSS = error(Error),
                    MaybeInitDeep = error(Error)
                )
            ;
                NextItem = deep_item_proc_static,
                read_proc_static(MaybePS, !IO),
                (
                    MaybePS = ok2(ProcStatic, PSI),
                    PSs0 = !.InitDeep ^ init_proc_statics,
                    deep_insert(PSs0, PSI, ProcStatic, PSs),
                    !InitDeep ^ init_proc_statics := PSs,
                    read_nodes(!.InitDeep, MaybeInitDeep, !IO)
                ;
                    MaybePS = error2(Error),
                    MaybeInitDeep = error(Error)
                )
            ;
                NextItem = deep_item_end,
                MaybeInitDeep = ok(!.InitDeep)
            )
        ;
            string.format("unexpected token %d", [i(Byte)], Msg),
            MaybeInitDeep = error(Msg)
        )
    ;
        MaybeByte = eof,
        MaybeInitDeep = ok(!.InitDeep)
    ;
        MaybeByte = error(Error),
        io.error_message(Error, Msg),
        MaybeInitDeep = error(Msg)
    ).

:- pred read_call_site_static(maybe_error({call_site_static, int})::out,
    io::di, io::uo) is det.

read_call_site_static(MaybeCSS, !IO) :-
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("reading call_site_static.\n", !IO)
    ),
    io_combinator.maybe_error_sequence_4(
        read_ptr(css),
        read_call_site_kind_and_callee,
        read_num,
        read_string,
        (pred(CSSI0::in, Kind::in, LineNumber::in, Str::in, CSS::out)
                is det :-
            DummyPSPtr = make_dummy_psptr,
            DummySlotNum = -1,
            CallSiteStatic0 = call_site_static(DummyPSPtr,
                DummySlotNum, Kind, LineNumber, Str),
            CSS = ok({CallSiteStatic0, CSSI0})
        ),
        MaybeCSS, !IO),
    (
        MaybeCSS = ok({CallSiteStatic, CSSI}),
        trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
            io.write_string("read call_site_static ", !IO),
            io.write_int(CSSI, !IO),
            io.write_string(": ", !IO),
            io.write(CallSiteStatic, !IO),
            io.write_string("\n", !IO)
        )
    ;
        MaybeCSS = error(_)
    ).

:- pred read_proc_static(maybe_error2(proc_static, int)::out,
    io::di, io::uo) is det.

read_proc_static(MaybePS, !IO) :-
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("reading proc_static.\n", !IO)
    ),
    io_combinator.maybe_error_sequence_7(
        read_ptr(ps),
        read_proc_id,
        read_string,
        read_num,
        read_deep_byte,
        read_num,
        read_num,
        (pred(PSI0::in, Id0::in, F0::in, L0::in, I0::in,
                NCS0::in, NCP0::in, ProcId::out) is det :-
            ProcId = ok({PSI0, Id0, F0, L0, I0, NCS0, NCP0})
        ),
        MaybeProcId, !IO),
    (
        MaybeProcId = ok({PSI, Id, FileName, LineNumber, Interface, NCS, NCP}),
        read_n_things(NCS, read_ptr(css), MaybeCSSIs, !IO),
        (
            MaybeCSSIs = ok(CSSIs),
            read_n_things(NCP, read_coverage_point, MaybeCoveragePoints, !IO),
            (
                MaybeCoveragePoints = ok(CoveragePoints),
                CSSPtrs = list.map(make_cssptr, CSSIs),
                DeclModule = decl_module(Id),
                create_refined_proc_ids(Id, UnQualRefinedStr, QualRefinedStr),
                RawStr = raw_proc_id_to_string(Id),
                ( Interface = 0 ->
                    IsInInterface = no
                ;
                    IsInInterface = yes
                ),
                % The `not_zeroed' for whether the procedure's proc_static
                % is ever zeroed is the default. The startup phase will set it
                % to `zeroed' in the proc_statics which are ever zeroed.
                ProcStatic = proc_static(Id, DeclModule,
                    UnQualRefinedStr, QualRefinedStr, RawStr,
                    FileName, LineNumber, IsInInterface,
                    array(CSSPtrs), array(CoveragePoints), not_zeroed),
                MaybePS = ok2(ProcStatic, PSI),
                trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
                    io.write_string("read proc_static ", !IO),
                    io.write_int(PSI, !IO),
                    io.write_string(": ", !IO),
                    io.write(ProcStatic, !IO),
                    io.write_string("\n", !IO)
                )
            ;
                MaybeCoveragePoints = error(Error),
                MaybePS = error2(Error)
            )
        ;
            MaybeCSSIs = error(Error),
            MaybePS = error2(Error)
        )
    ;
        MaybeProcId = error(Error),
        MaybePS = error2(Error)
    ).

:- pred read_proc_id(maybe_error(string_proc_label)::out, io::di, io::uo)
    is det.

read_proc_id(MaybeProcId, !IO) :-
    read_deep_byte(MaybeByte, !IO),
    (
        MaybeByte = ok(Byte),
        ( is_proclabel_kind(Byte, ProcLabelKind) ->
            (
                ProcLabelKind = proclabel_special,
                read_proc_id_uci_pred(MaybeProcId, !IO)
            ;
                ProcLabelKind = proclabel_user_predicate,
                read_proc_id_user_defined(pf_predicate, MaybeProcId, !IO)
            ;
                ProcLabelKind = proclabel_user_function,
                read_proc_id_user_defined(pf_function, MaybeProcId, !IO)
            )
        ;
            format("unexpected proclabel_kind %d", [i(Byte)], Msg),
            MaybeProcId = error(Msg)
        )
    ;
        MaybeByte = error(Error),
        MaybeProcId = error(Error)
    ).

:- pred read_proc_id_uci_pred(maybe_error(string_proc_label)::out,
    io::di, io::uo) is det.

read_proc_id_uci_pred(MaybeProcLabel, !IO) :-
    io_combinator.maybe_error_sequence_6(
        read_string,
        read_string,
        read_string,
        read_string,
        read_num,
        read_num,
        (pred(TypeName::in, TypeModule::in, DefModule::in,
                PredName::in, Arity::in, Mode::in, ProcId::out)
                is det :-
            ProcId = ok(str_special_proc_label(TypeName, TypeModule,
                DefModule, PredName, Arity, Mode))
        ),
        MaybeProcLabel, !IO).

:- pred read_proc_id_user_defined(pred_or_func::in,
    maybe_error(string_proc_label)::out, io::di, io::uo) is det.

read_proc_id_user_defined(PredOrFunc, MaybeProcLabel, !IO) :-
    io_combinator.maybe_error_sequence_5(
        read_string,
        read_string,
        read_string,
        read_num,
        read_num,
        (pred(DeclModule::in, DefModule::in, Name::in,
                Arity::in, Mode::in, ProcId::out) is det :-
            ProcId = ok(str_ordinary_proc_label(PredOrFunc, DeclModule,
                DefModule, Name, Arity, Mode))
        ),
        MaybeProcLabel, !IO).

:- pred read_coverage_point(maybe_error(coverage_point)::out, io::di, io::uo)
    is det.

read_coverage_point(MaybeCoveragePoint, !IO) :-
    io_combinator.maybe_error_sequence_3(
        read_string,
        read_cp_type,
        read_num,
        (pred(GoalPathString::in, CPType::in, CPCount::in, CP::out) is det :-
            goal_path_from_string_det(GoalPathString, GoalPath),
            CP = ok(coverage_point(CPCount, GoalPath, CPType))
        ),
        MaybeCoveragePoint, !IO).

:- func raw_proc_id_to_string(string_proc_label) = string.

raw_proc_id_to_string(str_special_proc_label(TypeName, TypeModule, _DefModule,
        PredName, Arity, Mode)) =
    string.append_list(
        [PredName, " for ", TypeModule, ".", TypeName,
        "/", string.int_to_string(Arity),
        " mode ", string.int_to_string(Mode)]).
raw_proc_id_to_string(str_ordinary_proc_label(PredOrFunc, DeclModule,
        _DefModule, Name, Arity, Mode)) =
    string.append_list([DeclModule, ".", Name,
        "/", string.int_to_string(Arity),
        add_plus_one_for_function(PredOrFunc),
        "-", string.int_to_string(Mode)]).

:- pred create_refined_proc_ids(string_proc_label::in,
    string::out, string::out) is det.

create_refined_proc_ids(ProcLabel, UnQualName, QualName) :-
    (
        ProcLabel = str_special_proc_label(TypeName, TypeModule,
            _DefModule, RawPredName, Arity, Mode),
        ( RawPredName = "__Unify__" ->
            PredName = "Unify"
        ; RawPredName = "__Compare__" ->
            PredName = "Compare"
        ; RawPredName = "__CompareRep__" ->
            PredName = "CompareRep"
        ; RawPredName = "__Index__" ->
            PredName = "Index"
        ; RawPredName = "__Initialise__" ->
            PredName = "Initialise"
        ;
            Msg = "unknown special predicate name " ++ RawPredName,
            error(Msg)
        ),
        Prefix = PredName ++ " for ",
        AritySuffix = "/" ++ string.int_to_string(Arity),
        UnQualName0 = Prefix ++ TypeName ++ AritySuffix,
        QualName0 = Prefix ++ TypeModule ++ "." ++ TypeName ++ AritySuffix,
        ( Mode = 0 ->
            UnQualName = UnQualName0,
            QualName = QualName0
        ;
            ModeSuffix = " mode " ++ int_to_string(Mode),
            UnQualName = UnQualName0 ++ ModeSuffix,
            QualName = QualName0 ++ ModeSuffix
        )
    ;
        ProcLabel = str_ordinary_proc_label(PredOrFunc, DeclModule,
            _DefModule, ProcName, Arity, Mode),
        (
            string.append("TypeSpecOf__", ProcName1, ProcName),
            ( string.append("pred__", ProcName2A, ProcName1) ->
                ProcName2 = ProcName2A
            ; string.append("func__", ProcName2B, ProcName1) ->
                ProcName2 = ProcName2B
            ; string.append("pred_or_func__", ProcName2C, ProcName1) ->
                ProcName2 = ProcName2C
            ;
                error("typespec: neither pred nor func")
            ),
            string.to_char_list(ProcName2, ProcName2Chars),
            fix_type_spec_suffix(ProcName2Chars, ProcNameChars, SpecInfo)
        ->
            RefinedProcName = string.from_char_list(ProcNameChars),
            Suffix = "/" ++ string.int_to_string(Arity) ++
                add_plus_one_for_function(PredOrFunc) ++
                "-" ++ string.int_to_string(Mode) ++
                " [" ++ SpecInfo ++ "]",
            UnQualName = RefinedProcName ++ Suffix,
            QualName = DeclModule ++ "." ++ RefinedProcName ++ Suffix
        ;
            string.append("IntroducedFrom__", ProcName1, ProcName),
            ( string.append("pred__", ProcName2A, ProcName1) ->
                ProcName2 = ProcName2A
            ; string.append("func__", ProcName2B, ProcName1) ->
                ProcName2 = ProcName2B
            ;
                error("lambda: neither pred nor func")
            ),
            string.to_char_list(ProcName2, ProcName2Chars),
            split_lambda_name(ProcName2Chars, Segments),
            glue_lambda_name(Segments, ContainingNameChars,
                LineNumberChars)
        ->
            string.from_char_list(ContainingNameChars, ContainingName),
            string.from_char_list(LineNumberChars, LineNumber),
            Suffix =
                " lambda line " ++ LineNumber ++
                "/" ++ string.int_to_string(Arity) ++
                add_plus_one_for_function(PredOrFunc),
            UnQualName = ContainingName ++ Suffix,
            QualName = DeclModule ++ "." ++ ContainingName ++ Suffix
        ;
            Suffix =
                "/" ++ string.int_to_string(Arity) ++
                add_plus_one_for_function(PredOrFunc) ++
                "-" ++ string.int_to_string(Mode),
            UnQualName = ProcName ++ Suffix,
            QualName = DeclModule ++ "." ++ ProcName ++ Suffix
        )
    ).

:- func add_plus_one_for_function(pred_or_func) = string.

add_plus_one_for_function(pf_function) = "+1".
add_plus_one_for_function(pf_predicate) = "".

:- pred fix_type_spec_suffix(list(char)::in, list(char)::out, string::out)
    is semidet.

fix_type_spec_suffix(Chars0, Chars, SpecInfoStr) :-
    ( Chars0 = ['_', '_', '[' | SpecInfo0 ] ->
        Chars = [],
        list.takewhile(non_right_bracket, SpecInfo0, SpecInfo, _),
        string.from_char_list(SpecInfo, SpecInfoStr)
    ; Chars0 = [Char | TailChars0] ->
        fix_type_spec_suffix(TailChars0, TailChars, SpecInfoStr),
        Chars = [Char | TailChars]
    ;
        fail
    ).

:- pred non_right_bracket(char::in) is semidet.

non_right_bracket(C) :-
    C \= ']'.

:- pred split_lambda_name(list(char)::in, list(list(char))::out) is det.

split_lambda_name([], []).
split_lambda_name([Char0 | Chars0], StringList) :-
    ( Chars0 = ['_', '_' | Chars1 ] ->
        split_lambda_name(Chars1, StringList0),
        StringList = [[Char0] | StringList0]
    ;
        split_lambda_name(Chars0, StringList0),
        (
            StringList0 = [],
            StringList = [[Char0]]
        ;
            StringList0 = [String0 | StringList1],
            StringList = [[Char0 | String0] | StringList1]
        )
    ).

:- pred glue_lambda_name(list(list(char))::in, list(char)::out,
    list(char)::out) is semidet.

glue_lambda_name(Segments, PredName, LineNumber) :-
    ( Segments = [LineNumberPrime, _] ->
        PredName = [],
        LineNumber = LineNumberPrime
    ; Segments = [Segment | TailSegments] ->
        glue_lambda_name(TailSegments, PredName1, LineNumber),
        (
            PredName1 = [],
            PredName = Segment
        ;
            PredName1 = [_ | _],
            list.append(Segment, ['_', '_' | PredName1], PredName)
        )
    ;
        fail
    ).

:- pred read_proc_dynamic(maybe_error2(proc_dynamic, int)::out,
    io::di, io::uo) is det.

read_proc_dynamic(MaybePD, !IO) :-
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("reading proc_dynamic.\n", !IO)
    ),
    io_combinator.maybe_error_sequence_3(
        read_ptr(pd),
        read_ptr(ps),
        read_num,
        (pred(PDI0::in, PSI0::in, N0::in, Stuff0::out) is det :-
            Stuff0 = ok({PDI0, PSI0, N0})
        ),
        MaybePDHeader, !IO),
    (
        MaybePDHeader = ok({PDI, PSI, N}),
        read_n_things(N, read_call_site_slot, MaybeSlots, !IO),
        (
            MaybeSlots = ok(Refs),
            PSPtr = make_psptr(PSI),
            ProcDynamic = proc_dynamic(PSPtr, array(Refs)),
            MaybePD = ok2(ProcDynamic, PDI),
            trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
                io.write_string("read proc_dynamic ", !IO),
                io.write_int(PDI, !IO),
                io.write_string(": ", !IO),
                io.write(ProcDynamic, !IO),
                io.write_string("\n", !IO)
            )
        ;
            MaybeSlots = error(Error),
            MaybePD = error2(Error)
        )
    ;
        MaybePDHeader = error(Error),
        MaybePD = error2(Error)
    ).

:- pred read_call_site_dynamic(maybe_error2(call_site_dynamic, int)::out,
    io::di, io::uo) is det.

read_call_site_dynamic(MaybeCSD, !IO) :-
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("reading call_site_dynamic.\n", !IO)
    ),
    read_ptr(csd, MaybeCSDI, !IO),
    (
        MaybeCSDI = ok(CSDI),
        read_ptr(pd, MaybePDI, !IO),
        (
            MaybePDI = ok(PDI),
            read_profile(MaybeProfile, !IO),
            (
                MaybeProfile = ok(Profile),
                PDPtr = make_pdptr(PDI),
                CallerPDPtr = make_dummy_pdptr,
                CallSiteDynamic = call_site_dynamic(CallerPDPtr, PDPtr,
                    Profile),
                MaybeCSD = ok2(CallSiteDynamic, CSDI),
                trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
                    io.write_string("read call_site_dynamic ", !IO),
                    io.write_int(CSDI, !IO),
                    io.write_string(": ", !IO),
                    io.write(CallSiteDynamic, !IO),
                    io.write_string("\n", !IO)
                )
            ;
                MaybeProfile = error(Error),
                MaybeCSD = error2(Error)
            )
        ;
            MaybePDI = error(Error),
            MaybeCSD = error2(Error)
        )
    ;
        MaybeCSDI = error(Error),
        MaybeCSD = error2(Error)
    ).

:- pred read_profile(maybe_error(own_prof_info)::out, io::di, io::uo) is det.

read_profile(MaybeProfile, !IO) :-
    read_num(MaybeMask, !IO),
    (
        MaybeMask = ok(Mask),

        % The masks here must correspond exactly with the masks in
        % MR_write_out_call_site_dynamic in mercury_deep_profiling.c
        % in the runtime.
        some [!MaybeError] (
            !:MaybeError = no,
            % We normally assume that the configuration macro
            % MR_DEEP_PROFILING_EXPLICIT_CALL_COUNTS is not
            % defined, and thus mercury_deep_profiling.m never
            % writes out call counts (instead, call counts are
            % computed from other port counts in measurements.m).
            % maybe_read_num_handle_error(Mask, 0x0001, Calls,
            %   !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0002, Exits,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0004, Fails,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0040, Redos,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0080, Excps,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0100, Quanta,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0008, CallSeqs,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0010, Allocs,
                !MaybeError, !IO),
            maybe_read_num_handle_error(Mask, 0x0020, Words,
                !MaybeError, !IO),
            LastMaybeError = !.MaybeError
        ),
        (
            LastMaybeError = yes(Error),
            MaybeProfile = error(Error)
        ;
            LastMaybeError = no,
            MaybeProfile = ok(compress_profile(Exits, Fails, Redos, Excps,
                Quanta, CallSeqs, Allocs, Words))
        )
    ;
        MaybeMask = error(Error),
        MaybeProfile = error(Error)
    ).

:- pred maybe_read_num_handle_error(int::in, int::in, int::out,
    maybe(string)::in, maybe(string)::out, io::di, io::uo) is det.

maybe_read_num_handle_error(MaskWord, MaskValue, Num, !MaybeError, !IO) :-
    ( MaskWord /\ MaskValue \= 0 ->
        read_num(MaybeNum, !IO),
        (
            MaybeNum = ok(Num)
        ;
            MaybeNum = error(Error),
            Num = 0,
            !:MaybeError = yes(Error)
        )
    ;
        Num = 0
    ).

:- pred read_call_site_slot(maybe_error(call_site_array_slot)::out,
    io::di, io::uo) is det.

read_call_site_slot(MaybeSlot, !IO) :-
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("reading call_site_slot.\n", !IO)
    ),
    read_call_site_kind(MaybeKind, !IO),
    (
        MaybeKind = ok(Kind),
        (
            Kind = normal_call,
            read_ptr(csd, MaybeCSDI, !IO),
            (
                MaybeCSDI = ok(CSDI),
                CSDPtr = make_csdptr(CSDI),
                MaybeSlot = ok(slot_normal(CSDPtr)),
                trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
                    io.write_string("normal call_site slot ", !IO),
                    io.write_int(CSDI, !IO),
                    io.write_string("\n", !IO)
                )
            ;
                MaybeCSDI = error(Error),
                MaybeSlot = error(Error)
            )
        ;
            (
                Kind = higher_order_call,
                Zeroed = zeroed
            ;
                Kind = method_call,
                Zeroed = zeroed
            ;
                Kind = special_call,
                Zeroed = not_zeroed
            ;
                Kind = callback,
                Zeroed = not_zeroed
            ),
            read_multi_call_site_csdis(MaybeCSDIs, !IO),
            (
                MaybeCSDIs = ok(CSDIs),
                CSDPtrs = list.map(make_csdptr, CSDIs),
                MaybeSlot = ok(slot_multi(Zeroed, array(CSDPtrs))),
                trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
                    io.write_string("multi call_site slots ", !IO),
                    io.write(CSDIs, !IO),
                    io.write_string("\n", !IO)
                )
            ;
                MaybeCSDIs = error(Error),
                MaybeSlot = error(Error)
            )
        )
    ;
        MaybeKind = error(Error),
        MaybeSlot = error(Error)
    ).

:- pred read_multi_call_site_csdis(maybe_error(list(int))::out,
    io::di, io::uo) is det.

read_multi_call_site_csdis(MaybeCSDIs, !IO) :-
    read_multi_call_site_csdis_2([], MaybeCSDIs, !IO).

    % We keep reading CSD node numbers until we find a zero byte.
    % The reason why a zero byte works as a sentinel is that a CSD node
    % number in the list of CSD node numbers at a multi call site cannot be
    % zero, and our encoding scheme ensures that non-zero node numbers
    % cannot start with a zero byte.
    %
    % We return the list of CSD node numbers in the reversed order, but
    % this is OK because our caller does not pay attention to the order
    % anyway.

:- pred read_multi_call_site_csdis_2(list(int)::in,
    maybe_error(list(int))::out, io::di, io::uo) is det.

read_multi_call_site_csdis_2(CSDIs0, MaybeCSDIs, !IO) :-
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.format("reading multi_call_site_csdi.\n", [], !IO)
    ),
    read_deep_byte(MaybeByte, !IO),
    (
        MaybeByte = ok(Byte),
        ( Byte = 0 ->
            MaybeCSDIs = ok(CSDIs0)
        ;
            putback_byte(Byte, !IO),
            read_ptr(csd, MaybeCSDI, !IO),
            (
                MaybeCSDI = ok(CSDI),
                read_multi_call_site_csdis_2([CSDI | CSDIs0], MaybeCSDIs, !IO)
            ;
                MaybeCSDI = error(Error),
                MaybeCSDIs = error(Error)
            )
        )
    ;
        MaybeByte = error(Error),
        MaybeCSDIs = error(Error)
    ).

:- pred read_call_site_kind(maybe_error(call_site_kind)::out,
    io::di, io::uo) is det.

read_call_site_kind(MaybeKind, !IO) :-
    read_deep_byte(MaybeByte, !IO),
    (
        MaybeByte = ok(Byte),
        ( is_call_site_kind(Byte, CallSiteKind) ->
            MaybeKind = ok(CallSiteKind)
        ;
            string.format("unexpected call_site_kind %d", [i(Byte)], Msg),
            MaybeKind = error(Msg)
        ),
        trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
             io.write_string("call_site_kind ", !IO),
             io.write(MaybeKind, !IO),
             io.write_string("\n", !IO)
        )
    ;
        MaybeByte = error(Error),
        MaybeKind = error(Error)
    ).

:- pred read_call_site_kind_and_callee(
    maybe_error(call_site_kind_and_callee)::out,
    io::di, io::uo) is det.

read_call_site_kind_and_callee(MaybeKindAndCallee, !IO) :-
    read_deep_byte(MaybeByte, !IO),
    (
        MaybeByte = ok(Byte),
        ( is_call_site_kind(Byte, CallSiteKind) ->
            (
                CallSiteKind = normal_call,
                read_num(MaybeCSS, !IO),
                (
                    MaybeCSS = ok(CalleeProcStatic),
                    read_string(MaybeTypeSubst, !IO),
                    (
                        MaybeTypeSubst = ok(TypeSubst),
                        MaybeKindAndCallee = ok(normal_call_and_callee(
                            proc_static_ptr(CalleeProcStatic), TypeSubst))
                    ;
                        MaybeTypeSubst = error(Error),
                        MaybeKindAndCallee = error(Error)
                    )
                ;
                    MaybeCSS = error(Error),
                    MaybeKindAndCallee = error(Error)
                )
            ;
                CallSiteKind = special_call,
                MaybeKindAndCallee = ok(special_call_and_no_callee)
            ;
                CallSiteKind = higher_order_call,
                MaybeKindAndCallee = ok(higher_order_call_and_no_callee)
            ;
                CallSiteKind = method_call,
                MaybeKindAndCallee = ok(method_call_and_no_callee)
            ;
                CallSiteKind = callback,
                MaybeKindAndCallee = ok(callback_and_no_callee)
            )
        ;
            string.format("unexpected call_site_kind %d", [i(Byte)], Msg),
            MaybeKindAndCallee = error(Msg)
        ),
        trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
            io.write_string("call_site_kind_and_callee ", !IO),
            io.write(MaybeKindAndCallee, !IO),
            io.write_string("\n", !IO)
        )
    ;
        MaybeByte = error(Error),
        MaybeKindAndCallee = error(Error)
    ).

%-----------------------------------------------------------------------------%

:- pred read_n_things(int::in, pred(maybe_error(T), io, io)::
    in(pred(out, di, uo) is det), maybe_error(list(T))::out,
    io::di, io::uo) is det.

read_n_things(N, ItemReader, MaybeItems, !IO) :-
    read_n_things(N, ItemReader, [], MaybeRevItems, !IO),
    (
        MaybeRevItems = ok(RevItems),
        list.reverse(RevItems, Items),
        MaybeItems = ok(Items)
    ;
        MaybeRevItems = error(Error),
        MaybeItems = error(Error)
    ).

:- pred read_n_things(int::in, pred(maybe_error(T), io, io)::
    in(pred(out, di, uo) is det), list(T)::in, maybe_error(list(T))::out,
    io::di, io::uo) is det.

read_n_things(N, ItemReader, RevItems0, MaybeItems, !IO) :-
    ( N =< 0 ->
        MaybeItems = ok(RevItems0)
    ;
        call(ItemReader, MaybeItem, !IO),
        (
            MaybeItem = ok(Item),
            read_n_things(N - 1, ItemReader, [Item | RevItems0], MaybeItems,
                !IO)
        ;
            MaybeItem = error(Error),
            MaybeItems = error(Error)
        )
    ).

%-----------------------------------------------------------------------------%

:- pred read_line(int::in, maybe_error(string)::out, io::di, io::uo) is det.

read_line(Limit, MaybeLine, !IO) :-
    read_line_acc(Limit, [], MaybeLine, !IO).

:- pred read_line_acc(int::in, list(char)::in, maybe_error(string)::out,
    io::di, io::uo) is det.

read_line_acc(Limit, !.RevChars, MaybeLine, !IO) :-
    ( Limit > 0 ->
        read_byte(MaybeByte, !IO),
        (
            MaybeByte = ok(Byte),
            ( char.to_int(Char, Byte) ->
                % Include the newline in the string.
                !:RevChars = [Char | !.RevChars],
                ( Char = '\n' ->
                    list.reverse(!.RevChars, Chars),
                    string.from_char_list(Chars, Str),
                    MaybeLine = ok(Str)
                ;
                    read_line_acc(Limit - 1, !.RevChars, MaybeLine, !IO)
                )
            ;
                MaybeLine = error("unexpected end of file")
            )
        ;
            MaybeByte = eof,
            MaybeLine = error("unexpected end of file")
        ;
            MaybeByte = error(Error),
            io.error_message(Error, Msg),
            MaybeLine = error(Msg)
        )
    ;
        list.reverse(!.RevChars, Chars),
        string.from_char_list(Chars, Str),
        MaybeLine = ok(Str)
    ).

:- pred read_string(maybe_error(string)::out,
    io::di, io::uo) is det.

read_string(MaybeStr, !IO) :-
    read_num(MaybeNum, !IO),
    (
        MaybeNum = ok(Length),
        ( Length = 0 ->
            MaybeStr = ok("")
        ;
            read_n_byte_string(Length, MaybeStr, !IO)
        )
    ;
        MaybeNum = error(Error),
        MaybeStr = error(Error)
    ).

:- pred read_n_byte_string(int::in, maybe_error(string)::out,
    io::di, io::uo) is det.

read_n_byte_string(Length, MaybeStr, !IO) :-
    read_n_bytes(Length, MaybeNBytes, !IO),
    (
        MaybeNBytes = ok(Bytes),
        (
            list.map((pred(I::in, C::out) is semidet :- char.to_int(C, I)),
                Bytes, Chars)
        ->
            string.from_char_list(Chars, Str),
            MaybeStr = ok(Str)
        ;
            MaybeStr = error("string contained bad char")
        )
    ;
        MaybeNBytes = error(Error),
        MaybeStr = error(Error)
    ),
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("string ", !IO),
        io.write(MaybeStr, !IO),
        io.write_string("\n", !IO)
    ).

:- pred read_ptr(ptr_kind::in, maybe_error(int)::out, io::di, io::uo) is det.

read_ptr(_Kind, MaybePtr, !IO) :-
    read_num(MaybePtr, !IO),
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("ptr ", !IO),
        io.write(MaybePtr, !IO),
        io.write_string("\n", !IO)
    ).

:- pred read_cp_type(maybe_error(cp_type)::out, io::di, io::uo) is det.

read_cp_type(MaybeCPType, !IO) :-
    read_num(MaybeNum, !IO),
    (
        MaybeNum = ok(Num),
        num_to_cp_type(Num, CPType),
        MaybeCPType = ok(CPType)
    ;
        MaybeNum = error(Msg),
        MaybeCPType = error(Msg)
    ).

:- pred num_to_cp_type(int::in, cp_type::out) is det.

:- pragma foreign_proc("C",
    num_to_cp_type(Int::in, CPType::out),
    [will_not_call_mercury, thread_safe, promise_pure],
"
    CPType = Int;
").

:- pred read_num(maybe_error(int)::out, io::di, io::uo) is det.

read_num(MaybeNum, !IO) :-
    read_num_acc(0, MaybeNum, !IO),
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("num ", !IO),
        io.write(MaybeNum, !IO),
        io.write_string("\n", !IO)
    ).

:- pred read_num_acc(int::in, maybe_error(int)::out,
    io::di, io::uo) is det.

read_num_acc(Num0, MaybeNum, !IO) :-
    read_byte(MaybeByte, !IO),
    (
        MaybeByte = ok(Byte),
        Num1 = (Num0 << 7) \/ (Byte /\ 0x7F),
        ( Byte /\ 0x80 \= 0 ->
            read_num_acc(Num1, MaybeNum, !IO)
        ;
            MaybeNum = ok(Num1)
        )
    ;
        MaybeByte = eof,
        MaybeNum = error("unexpected end of file")
    ;
        MaybeByte = error(Error),
        io.error_message(Error, Msg),
        MaybeNum = error(Msg)
    ).

:- func fixed_size_int_bytes = int.

% Must correspond to MR_FIXED_SIZE_INT_BYTES
% in runtime/mercury_deep_profiling.c.

fixed_size_int_bytes = 4.

:- pred read_fixed_size_int(maybe_error(int)::out,
    io::di, io::uo) is det.

read_fixed_size_int(MaybeByte, !IO) :-
    read_fixed_size_int_acc(fixed_size_int_bytes, 0, 0, MaybeByte, !IO).

:- pred read_fixed_size_int_acc(int::in, int::in, int::in,
    maybe_error(int)::out, io::di, io::uo) is det.

read_fixed_size_int_acc(BytesLeft, Num0, ShiftBy, MaybeInt, !IO) :-
    ( BytesLeft =< 0 ->
        MaybeInt = ok(Num0)
    ;
        read_deep_byte(MaybeByte, !IO),
        (
            MaybeByte = ok(Byte),
            Num1 = Num0 \/ ( Byte << ShiftBy),
            read_fixed_size_int_acc(BytesLeft - 1, Num1, ShiftBy + 8, MaybeInt,
                !IO)
        ;
            MaybeByte = error(Error),
            MaybeInt = error(Error)
        )
    ).

:- pred read_n_bytes(int::in, maybe_error(list(int))::out,
    io::di, io::uo) is det.

read_n_bytes(N, MaybeNBytes, !IO) :-
    read_n_bytes_acc(N, [], MaybeRevNBytes, !IO),
    (
        MaybeRevNBytes = ok(RevBytes),
        list.reverse(RevBytes, Bytes),
        MaybeNBytes = ok(Bytes)
    ;
        MaybeRevNBytes = error(Error),
        MaybeNBytes = error(Error)
    ).

:- pred read_n_bytes_acc(int::in, list(int)::in, maybe_error(list(int))::out,
    io::di, io::uo) is det.

read_n_bytes_acc(N, RevBytes0, MaybeNBytes, !IO) :-
    ( N =< 0 ->
        MaybeNBytes = ok(RevBytes0)
    ;
        read_deep_byte(MaybeByte, !IO),
        (
            MaybeByte = ok(Byte),
            read_n_bytes_acc(N - 1, [Byte | RevBytes0], MaybeNBytes, !IO)
        ;
            MaybeByte = error(Error),
            MaybeNBytes = error(Error)
        )
    ).

:- pred read_deep_byte(maybe_error(int)::out,
    io::di, io::uo) is det.

read_deep_byte(MaybeByte, !IO) :-
    read_byte(MaybeRawByte, !IO),
    (
        MaybeRawByte = ok(Byte),
        MaybeByte = ok(Byte)
    ;
        MaybeRawByte = eof,
        MaybeByte = error("unexpected end of file")
    ;
        MaybeRawByte = error(Error),
        io.error_message(Error, Msg),
        MaybeByte = error(Msg)
    ),
    trace [compile_time(flag("debug_read_profdeep")), io(!IO)] (
        io.write_string("byte ", !IO),
        io.write(MaybeByte, !IO),
        io.write_string("\n", !IO)
    ).

%------------------------------------------------------------------------------%

:- pred deep_insert(array(T)::in, int::in, T::in, array(T)::out) is det.

deep_insert(A0, Ind, Item, A) :-
    array.max(A0, Max),
    ( Ind > Max ->
        error("deep_insert: array bounds violation")
        % array.lookup(A0, 0, X),
        % array.resize(u(A0), 2 * (Max + 1), X, A1),
        % deep_insert(A1, Ind, Item, A)
    ;
        set(u(A0), Ind, Item, A)
    ).

%------------------------------------------------------------------------------%

:- func make_csdptr(int) = call_site_dynamic_ptr.
:- func make_cssptr(int) = call_site_static_ptr.
:- func make_pdptr(int) = proc_dynamic_ptr.
:- func make_psptr(int) = proc_static_ptr.

make_csdptr(CSDI) = call_site_dynamic_ptr(CSDI).
make_cssptr(CSSI) = call_site_static_ptr(CSSI).
make_pdptr(PDI) = proc_dynamic_ptr(PDI).
make_psptr(PSI) = proc_static_ptr(PSI).

:- func make_dummy_csdptr = call_site_dynamic_ptr.
:- func make_dummy_cssptr = call_site_static_ptr.
:- func make_dummy_pdptr = proc_dynamic_ptr.
:- func make_dummy_psptr = proc_static_ptr.

make_dummy_csdptr = call_site_dynamic_ptr(-1).
make_dummy_cssptr = call_site_static_ptr(-1).
make_dummy_pdptr = proc_dynamic_ptr(-1).
make_dummy_psptr = proc_static_ptr(-1).

%------------------------------------------------------------------------------%

:- pragma foreign_decl("C", "#include ""mercury_deep_profiling.h""").

:- type next_deep_item
    --->    deep_item_end
    ;       deep_item_call_site_static
    ;       deep_item_call_site_dynamic
    ;       deep_item_proc_static
    ;       deep_item_proc_dynamic.

:- pragma foreign_enum("C", next_deep_item/0, [
    deep_item_end                - "MR_deep_item_end",
    deep_item_call_site_static   - "MR_deep_item_call_site_static",
    deep_item_call_site_dynamic  - "MR_deep_item_call_site_dynamic",
    deep_item_proc_static        - "MR_deep_item_proc_static",
    deep_item_proc_dynamic       - "MR_deep_item_proc_dynamic"
]).

:- pred is_next_item_token(int::in, next_deep_item::out) is semidet.

:- pragma foreign_proc("C",
    is_next_item_token(Int::in, NextItem::out),
    [promise_pure, will_not_call_mercury, thread_safe],
"
    NextItem = (MR_DeepProfNextItem) Int;

    switch (NextItem) {
        case MR_deep_item_end:
        case MR_deep_item_call_site_static:
        case MR_deep_item_call_site_dynamic:
        case MR_deep_item_proc_static:
        case MR_deep_item_proc_dynamic:
            SUCCESS_INDICATOR = MR_TRUE;
            break;

        default:
            SUCCESS_INDICATOR = MR_FALSE;
            break;
    }
").

%------------------------------------------------------------------------------%
%------------------------------------------------------------------------------%
