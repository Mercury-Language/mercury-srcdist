%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: create_report.m.
% Author: pbone.
%
% This module contains the create_report predicate that creates a report
% from a deep data structure and a query.
%
%-----------------------------------------------------------------------------%

:- module create_report.
:- interface.

:- import_module report.
:- import_module profile.
:- import_module query.

%-----------------------------------------------------------------------------%

:- pred create_report(cmd::in, deep::in, deep_report::out) is det.

%-----------------------------------------------------------------------------%

:- implementation.

:- import_module measurement_units.
:- import_module measurements.
:- import_module top_procs.

:- import_module array.
:- import_module exception.
:- import_module float.
:- import_module int.
:- import_module list.
:- import_module maybe.
:- import_module string.

%-----------------------------------------------------------------------------%

create_report(deep_cmd_quit, Deep, Report) :-
    Report = report_message(string.format(
        "Shutting down deep profile server for %s.",
        [s(Deep ^ data_file_name)])).

create_report(deep_cmd_timeout(Timeout), _Deep, Report) :-
    Report = report_message(string.format(
        "Timeout set to %d minutes.", [i(Timeout)])).

create_report(deep_cmd_restart, _, _) :-
    error("create_report/3", "unexpected restart command").

create_report(deep_cmd_menu, Deep, Report) :-
    Deep ^ profile_stats = profile_stats(NumCSD, NumCSS, NumPD, NumPS,
        QuantaPerSec, InstrumentationQuanta, UserQuanta, NumCallsequs, _, _),
    NumClique = array.max(Deep ^ clique_members),
    Report = report_menu(QuantaPerSec, UserQuanta, InstrumentationQuanta,
        NumCallsequs, NumCSD, NumCSS, NumPD, NumPS, NumClique).

create_report(deep_cmd_top_procs(Limit, CostKind, InclDesc, Scope), Deep,
        Report) :-
    create_top_procs_report(Deep, Limit, CostKind, InclDesc, Scope, Report).

create_report(Cmd, _, _) :-
    ( Cmd = deep_cmd_root(_)
    ; Cmd = deep_cmd_clique(_)
    ; Cmd = deep_cmd_proc(_)
    ; Cmd = deep_cmd_proc_callers(_, _, _)
    ; Cmd = deep_cmd_modules
    ; Cmd = deep_cmd_module(_)
    ; Cmd = deep_cmd_proc_static(_)
    ; Cmd = deep_cmd_proc_dynamic(_)
    ; Cmd = deep_cmd_call_site_static(_)
    ; Cmd = deep_cmd_call_site_dynamic(_)
    ; Cmd = deep_cmd_raw_clique(_)),
    error("create_report/3", "Command not supported: " ++ string(Cmd)).

%-----------------------------------------------------------------------------%
%
% Code to build top_procs report.
%

    % Create a top procs report, from the given data with the specified
    % parameters.
    %
:- pred create_top_procs_report(deep::in, display_limit::in, cost_kind::in,
    include_descendants::in, measurement_scope::in, deep_report::out) is det.

create_top_procs_report(Deep, Limit, CostKind, InclDesc0, Scope0, Report) :-
    (
        CostKind = cost_calls,
        % Counting calls is incompatible both with self_and_desc
        % and per_call.
        InclDesc = self,
        Scope = overall
    ;
        ( CostKind = cost_redos
        ; CostKind = cost_time
        ; CostKind = cost_callseqs
        ; CostKind = cost_allocs
        ; CostKind = cost_words
        ),
        InclDesc = InclDesc0,
        Scope = Scope0
    ),
    MaybeTopPSIs = find_top_procs(CostKind, InclDesc, Scope, Limit, Deep),
    (
        MaybeTopPSIs = error(ErrorMessage),
        Report = report_message("Internal error: " ++ ErrorMessage)
    ;
        MaybeTopPSIs = ok(TopPSIs),
        Ordering = report_ordering(Limit, CostKind, InclDesc, Scope),
        map(psi_to_row_data(Deep), TopPSIs, RowData),
        Report = report_top_procs(Ordering, RowData)
    ).

%-----------------------------------------------------------------------------%

    % For a Proc Static Index query the deep data and retrive the data to
    % include in that row of the report.
    %
:- pred psi_to_row_data(deep::in, int::in, row_data(report_proc)::out) is det.

psi_to_row_data(Deep, PSI, RowData) :-
    % Gather global deep profiling information.
    ProfileStats = Deep ^ profile_stats,
    TicksPerSec = ProfileStats ^ ticks_per_sec,
    WordSize = ProfileStats ^ word_size,
    Root = root_total_info(Deep),

    PSPtr = wrap_proc_static_ptr(PSI),  

    % Retrive data.
    deep_lookup_ps_own(Deep, PSPtr, Own),
    deep_lookup_ps_desc(Deep, PSPtr, Desc),

    % Set Subject.
    psptr_to_report_proc(Deep, PSPtr, ReportProc),
    RowData ^ subject = ReportProc,

    % Set port counts.
    Calls = calls(Own), % Calls is needed below, so create a variable here.
    RowData ^ calls = Calls,
    RowData ^ exits = exits(Own),
    RowData ^ fails = fails(Own),
    RowData ^ redos = redos(Own),
    RowData ^ excps = excps(Own),

    % Set self times.
    TotalQuanta = inherit_quanta(Root),
    SelfTicks = quanta(Own),
    ticks_to_time(SelfTicks, TicksPerSec, SelfTime),
    time_percall(SelfTime, Calls, SelfTimePercall),
    SelfTimePercent = percent_from_ints(SelfTicks, TotalQuanta),
    RowData ^ self_ticks = quanta(Own),
    RowData ^ self_time = SelfTime,
    RowData ^ self_time_percent = SelfTimePercent,
    RowData ^ self_time_percall = SelfTimePercall,
   
    % Set times for self + descendants.
    Ticks = SelfTicks + inherit_quanta(Desc), 
    ticks_to_time(Ticks, TicksPerSec, Time),
    time_percall(Time, Calls, TimePercall),
    TimePercent = percent_from_ints(Ticks, TotalQuanta),
    RowData ^ ticks = Ticks,
    RowData ^ time = Time,
    RowData ^ time_percent = TimePercent,
    RowData ^ time_percall = TimePercall,

    % Call sequence counts.
    TotalCallseqs = inherit_callseqs(Root),
    SelfCallseqs = callseqs(Own),
    RowData ^ self_callseqs = SelfCallseqs,
    RowData ^ self_callseqs_percent = 
        percent_from_ints(SelfCallseqs, TotalCallseqs),
    RowData ^ self_callseqs_percall = divide_ints(SelfCallseqs, Calls),

    Callseqs = callseqs(Own) + inherit_callseqs(Desc),
    RowData ^ callseqs = Callseqs,
    RowData ^ callseqs_percent = percent_from_ints(Callseqs, TotalCallseqs),
    RowData ^ callseqs_percall = divide_ints(Callseqs, Calls),

    % Set memory allocations.
    TotalAllocs = inherit_allocs(Root),
    SelfAllocs = allocs(Own),
    Allocs = SelfAllocs + inherit_allocs(Desc),
    RowData ^ self_allocs = SelfAllocs,
    RowData ^ self_allocs_percent = percent_from_ints(SelfAllocs, TotalAllocs),
    RowData ^ self_allocs_percall = divide_ints(SelfAllocs, Calls),
    RowData ^ allocs = Allocs,
    RowData ^ allocs_percent = percent_from_ints(Allocs, TotalAllocs),
    RowData ^ allocs_percall = divide_ints(Allocs, Calls),
    
    % set memory information.
    TotalWords = inherit_words(Root),
    SelfWords = words(Own),
    SelfMemory = memory_words(SelfWords, WordSize),
    RowData ^ bytes_per_word = WordSize,
    RowData ^ self_mem = SelfMemory,
    RowData ^ self_mem_percent = percent_from_ints(SelfWords, TotalWords),
    RowData ^ self_mem_percall = SelfMemory / Calls,
    Words = SelfWords + inherit_words(Desc),
    Memory = memory_words(Words, WordSize),
    RowData ^ mem = Memory,
    RowData ^ mem_percent = percent_from_ints(Words, TotalWords),
    RowData ^ mem_percall = Memory / Calls.

%-----------------------------------------------------------------------------%

    % divide_ints(Num, Demon) is the quotent of Nom and Denom, after they've
    % both been cast to float.
    %
:- func divide_ints(int, int) = float.

divide_ints(Num, Denom) = float(Num) / float(Denom).

%-----------------------------------------------------------------------------%

    % Give the percentage of two 'counts'.
    %
:- func percent_from_ints(int, int) = percent.

percent_from_ints(Nom, Denom) = percent(divide_ints(Nom, Denom)).

%-----------------------------------------------------------------------------%

    % Create a report_proc structure for a given proc static pointer.
    %
:- pred psptr_to_report_proc(deep::in, proc_static_ptr::in, report_proc::out)
    is det.

psptr_to_report_proc(Deep, PSPtr, report_proc(PSPtr, Filename, Lineno, Name))
        :-
    proc_static_get_proc_info(Deep, PSPtr, Filename, Lineno, Name).

%-----------------------------------------------------------------------------%

    % Get appropriate source location information for a proc static pointer.
    %
:- pred proc_static_get_proc_info(deep::in, proc_static_ptr::in, string::out,
    int::out, string::out) is det. 

proc_static_get_proc_info(Deep, PSPtr, FileName, LineNumber, Name) :-
    ( valid_proc_static_ptr(Deep, PSPtr) ->
        deep_lookup_proc_statics(Deep, PSPtr, PS),
        FileName = PS ^ ps_file_name,
        LineNumber = PS ^ ps_line_number,
        Name = PS ^ ps_refined_id
    ;
        FileName = "",
        LineNumber = 0,
        Name = "mercury_runtime"
    ).

%-----------------------------------------------------------------------------%
%
% Code shared across entire module.
%

:- func this_file = string.

this_file = "create_report.m".

%-----------------------------------------------------------------------------%

:- func error_message(string, string) = string.

error_message(Pred, Message) = Error :-
    Error = this_file ++ ": " ++ Pred ++ ": " ++ Message.

%-----------------------------------------------------------------------------%

:- pred error(string::in, string::in) is erroneous.

error(Pred, Message) :-
    throw(software_error(error_message(Pred, Message))).

%-----------------------------------------------------------------------------%
:- end_module create_report.
%-----------------------------------------------------------------------------%
