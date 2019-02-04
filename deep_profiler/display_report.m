%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2008 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: display_report.m.
% Author: pbone.
%
% This module contains code to create a display data structure from a deep
% profiling report.
%
%-----------------------------------------------------------------------------%

:- module display_report.
:- interface.

:- import_module display.
:- import_module profile.
:- import_module report.

% XXX: This include should be removed or replaced.  Some datastructes such as
% preferences are currenty defined in query, the should be moved into a
% different module so that this module doesn't need to include the whole of
% query.
:- import_module query.

%-----------------------------------------------------------------------------%

:- pred display_report(deep::in, preferences::in, deep_report::in,
    display::out) is det.
    
%-----------------------------------------------------------------------------%

:- implementation.

:- import_module measurement_units.

:- import_module bool.
:- import_module float.
:- import_module int.
:- import_module list.
:- import_module maybe.
:- import_module pair.
:- import_module string.

%-----------------------------------------------------------------------------%

display_report(_, _, report_message(Msg), Display) :-
    Display = display(no, [display_message(Msg)]).

display_report(Deep, _, Report, Display) :-
    Report = report_menu(QuantaPerSec, UserQuanta, InstQuanta, NumCallsequs,
        NumCSD, NumCSS, NumPD, NumPS, NumClique),
    display_report_menu(Deep, QuantaPerSec, UserQuanta, InstQuanta,
        NumCallsequs, NumCSD, NumCSS, NumPD, NumPS, NumClique, Display).

display_report(_, Prefs, report_top_procs(Ordering, TopProcs), Display) :-
    display_report_top_procs(Prefs, Ordering, TopProcs, Display).

%-----------------------------------------------------------------------------%
%
% Code to display menu report..
%

:- pred display_report_menu(deep::in, int::in, int::in, int::in, int::in,
    int::in, int::in, int::in, int::in, int::in, display::out)
    is det.

display_report_menu(Deep, QuantaPerSec, UserQuanta, InstQuanta, NumCallsequs,
        NumCSD, NumCSS, NumPD, NumPS, NumClique, Display) :-
    ShouldDisplayTimes = should_display_times(Deep),
    
    % Display the links section of the report.
    LinksExploration = 
        [(deep_cmd_root(no) - 
            "Exploring the call graph, starting at the root."),
         (deep_cmd_root(yes(90)) - 
            "Exploring the call graph, starting at the action."),
         (deep_cmd_modules -
            "Exploring the program module by module.")],
    
    (
        ShouldDisplayTimes = yes,
        LinksTopProcsByLimitTime =
            [(deep_cmd_top_procs(rank_range(1, 100), cost_time, self, overall)
                - "Top 100 most expensive procedures: time, self."),
             (deep_cmd_top_procs(rank_range(1, 100), cost_time, self_and_desc,
                    overall) -
                "Top 100 most expensive procedures: time, self+descendants.")]
    ;
        ShouldDisplayTimes = no,
        LinksTopProcsByLimitTime = []
    ),
    
    LinksTopProcsByLimit =  
        [(deep_cmd_top_procs(rank_range(1, 100), cost_callseqs, self,
                overall) -
            "Top 100 most expensive procedures: callseqs, self."),
         (deep_cmd_top_procs(rank_range(1, 100), cost_callseqs, self_and_desc,
                overall) -
            "Top 100 most expensive procedures: callseqs, self+descendants."),
         (deep_cmd_top_procs(rank_range(1, 100), cost_words, self, overall) -
            "Top 100 most expensive procedures: words, self."),
         (deep_cmd_top_procs(rank_range(1, 100), cost_words, self_and_desc,
                overall) -
            "Top 100 most expensive procedures: words, self+descendants.")],
    
    (
        ShouldDisplayTimes = yes,
        LinksTopProcsByPercentTime = 
            [(deep_cmd_top_procs(threshold_percent(0.1), cost_time, self,
                    overall) -
                "Procedures above 0.1% threshold: time, self."),
             (deep_cmd_top_procs(threshold_percent(1.0), cost_time,
                    self_and_desc, overall) -
                "Procedures above 1% threshold: time, self+descendants."),
             (deep_cmd_top_procs(threshold_value(100.0), cost_time,
                    self_and_desc, overall) -
                "Procedures above 1 second threshold: time, self+descendants."
             )]
    ;
        ShouldDisplayTimes = no,
        LinksTopProcsByPercentTime = []
    ),
    
    LinksTopProcsByPercent = 
        [(deep_cmd_top_procs(threshold_percent(0.1), cost_callseqs, self, 
                overall) -
            "Procedures above 0.1% threshold: callseqs, self."),
         (deep_cmd_top_procs(threshold_percent(1.0), cost_callseqs, 
                self_and_desc, overall) - 
            "Procedures above 1% threshold: callseqs, self+descendants."),
         (deep_cmd_top_procs(threshold_value(1000000.0), cost_callseqs, 
                self_and_desc, overall) -
            ("Procedures above 1,000,000 callseqs threshold: callseqs, " ++
                "self+descendants.")),
         (deep_cmd_top_procs(threshold_percent(0.1), cost_words, self, 
                overall) -
            "Procedures above 0.1% threshold: words, self."),
         % 2M words is chosen arbitrary because it is 8MB on ia32
         (deep_cmd_top_procs(threshold_percent(1.0), cost_words, 
                self_and_desc, overall) -
            "Procedures above 1% threshold: words, self+descendants."),
         (deep_cmd_top_procs(threshold_value(float(1024 * 1024 * 2)), 
                cost_words, self_and_desc, overall) -
            "Procedures above 2M words threshold: words, self+descendants.")],
    
    LinkCmds = LinksExploration ++ 
        LinksTopProcsByLimitTime ++ LinksTopProcsByLimit ++ 
        LinksTopProcsByPercentTime ++ LinksTopProcsByPercent,
    map(make_command_link, LinkCmds, LinksList),
    Links = display_list(list_class_vertical_bullets, 
        yes("You can start exploring the deep profile at the following" ++ 
            " points."), LinksList),

    % Display the table section of the report.
    ProfilingStatistics = [("Quanta per second:"           - QuantaPerSec),
                           ("Quanta in user code:"         - UserQuanta),
                           ("Quanta in instrumentation:"   - InstQuanta),
                           ("Call sequence numbers:"       - NumCallsequs),
                           ("CallSiteDyanic structures:"   - NumCSD),
                           ("ProcDynamic structures:"      - NumPD),
                           ("CallSiteStatic structures:"   - NumCSS),
                           ("ProcStatic structures:"       - NumPS),
                           ("Cliques:"                     - NumClique)],
    map(make_menu_table_row, ProfilingStatistics, Rows),
    Table = table(table_class_menu, 2, no, Rows),

    % Display the Controls section of the report.
    Controls = display_list(list_class_horizontal, no, cmds_menu_restart_quit),

    % Construct the complete representation of what to display.
    Display = display(yes("Deep profiler menu"), 
        [Links, display_table(Table), Controls]).

%-----------------------------------------------------------------------------%

    % Make a table row as used in the menu report.
    %
:- pred make_menu_table_row(pair(string, int)::in, table_row::out) is det.

make_menu_table_row((Label - Value), Row) :-
    Row = table_row([table_cell(s(Label)), table_cell(i(Value))]).

%-----------------------------------------------------------------------------%

    % Make a link for use in the menu report.
    %
:- pred make_command_link(pair(cmd, string)::in, display_item::out) is det.

make_command_link((Cmd - Label), Item) :-
    Item = display_command_link(deep_link(Cmd, no, Label, link_class_link)).

%-----------------------------------------------------------------------------%
%
% Code to display a top procedures report.
%

    % Create a display_report structure for a top_procedures report.
    %
:- pred display_report_top_procs(preferences::in, report_ordering::in,
    list(row_data(report_proc))::in, display::out) is det.

display_report_top_procs(Prefs, Ordering, TopProcs, Display) :-
    Ordering = report_ordering(DisplayLimit, CostKind, InclDesc, Scope), 
    Desc = cost_criteria_to_description(CostKind, InclDesc, Scope),
    Title = "Top procedures " ++ Desc, 

    %
    % Build table
    %
    top_procs_table(Prefs, Ordering, TopProcs, Table),
    DisplayTable = display_table(Table), 
    TableAndLabel = display_list(list_class_vertical_no_bullets,
        yes(Title), [DisplayTable]),

    %
    % Build controls at bottom of page
    %
    Cmd = deep_cmd_top_procs(DisplayLimit, CostKind, InclDesc, Scope),
    sort_controls(Prefs, Ordering, SortControls),
    incldesc_and_scope_controls(Prefs, Ordering, InclDescScope),
    Controls1 = display_list(list_class_vertical_no_bullets, no,
        [SortControls, InclDescScope]),
    
    field_controls(Prefs, Cmd, Controls2),
    
    display_controls(Prefs, Cmd, Controls3),

    Controls4 =  
        display_list(list_class_horizontal, no, cmds_menu_restart_quit),

    Display = display(yes(Title), 
        [TableAndLabel, Controls1, Controls2, Controls3, Controls4]).

%-----------------------------------------------------------------------------%

    % Create a phrase describing how the top procedures may be sorted.
    %
:- func cost_criteria_to_description(cost_kind, include_descendants,
    measurement_scope) = string.

cost_criteria_to_description(CostKind, InclDesc, Scope) = Desc :-
    Desc =
        "ordered by " ++
        incl_desc_to_description(InclDesc) ++ " " ++
        cost_kind_to_description(CostKind) ++ " " ++
        scope_to_description(Scope).

    % Give the short name for what profiling data a field may be measuring.
    %
:- func incl_desc_to_description(include_descendants) = string.

incl_desc_to_description(self) = "self".
incl_desc_to_description(self_and_desc) = "total".

    % Describe the a measurement used by the deep profiler.
    %
:- func cost_kind_to_description(cost_kind) = string.

cost_kind_to_description(cost_calls)    = "number of calls".
cost_kind_to_description(cost_redos)    = "number of redos".
cost_kind_to_description(cost_time)     = "time".
cost_kind_to_description(cost_callseqs) = "call sequence numbers".
cost_kind_to_description(cost_allocs)   = "memory allocations".
cost_kind_to_description(cost_words)    = "words allocated".

    % Describe a scope of profiling data.
    %
:- func scope_to_description(measurement_scope) = string.

scope_to_description(per_call) = "per call".
scope_to_description(overall) = "overall".

%-----------------------------------------------------------------------------%

    % TODO: Generalize this type so it can be used for most tables shown by the
    % deep profiler.
:- type table_info
    --->    table_info(
                table_class     :: table_class,
                table_ranked    :: ranked,
                prefs           :: preferences,
                table_ordering  :: report_ordering
            ).

:- pred top_procs_table(preferences::in, report_ordering::in,
    list(row_data(report_proc))::in, table::out) is det.

top_procs_table(Prefs, Ordering, TopProcs, Table) :-
    TableInfo = table_info(table_class_top_procs, ranked, Prefs, Ordering),
    proc_table(TableInfo, TopProcs, Table).

%-----------------------------------------------------------------------------%
%
% Code for creating procedure tables.
%

%
% TODO: The code in this section should be generalised as new reports are added
% which may have simliar tables.
%

    % Describes whether a table should be ranked or not,  This means that each
    % item has an ordinal number associated with it in an initial column
    % labeled "Rank".
    %
:- type ranked
    --->    ranked
    ;       non_ranked.

    % Produce a table for all these procedures.
    %
:- pred proc_table(table_info::in, list(row_data(report_proc))::in, table::out)
    is det. 

proc_table(TableInfo, TopProcs, Table) :-
    % Later add support for non-ranked tables.
    proc_table_header(TableInfo, NumCols, Header),
    map_foldl(proc_table_row(TableInfo), TopProcs, Rows, 1, _),
    Table = table(TableInfo ^ table_class, NumCols, yes(Header), Rows).

    % Common column header strings.
    %
:- func percall = table_data.
percall = s("/call").
:- func percent_label = table_data.
percent_label = s("%").
:- func self = table_data.
self = s("Self").

:- func make_link(report_ordering, preferences, string, cost_kind,
    include_descendants, measurement_scope) = deep_link.

make_link(Ordering, Prefs, Label, CostKind, InclDesc, Scope) = 
    make_link(Ordering, Prefs, Label, CostKind, InclDesc, Scope, 
        link_class_link).

:- func make_link(report_ordering, preferences, string, cost_kind,
    include_descendants, measurement_scope, link_class) = deep_link.

    % It might be nice to improve this so that if a user is looking up a
    % different cost kind compared to the current run it resets the display
    % limit.  This requires more thought, as different values may not make
    % sense for different limits.  So perhaps it's best to only reset the limit
    % if it was a range that didn't start at one.
    %
make_link(Ordering, Prefs, Label, CostKind, InclDesc, Scope, Class) = Link :-
    DisplayLimit = Ordering ^ display_limit,
    Link = deep_link(
        deep_cmd_top_procs(DisplayLimit, CostKind, InclDesc, Scope),
        yes(Prefs), Label, Class).

:- func make_table_link(table_info, string, cost_kind, include_descendants,
    measurement_scope) = table_data.

make_table_link(TableInfo, Label, CostKind, InclDesc, Scope) = 
        l(make_link(Ordering, Prefs, Label, CostKind, InclDesc, Scope)) :-
    Ordering = TableInfo ^ table_ordering,
    Prefs = TableInfo ^ prefs.

:- func self_link(table_info, cost_kind) = table_data.
self_link(TableInfo, CostKind) = Link :-
    make_table_link(TableInfo, "Self", CostKind, self, overall) = Link.

:- func self_percall_link(table_info, cost_kind) = table_data.
self_percall_link(TableInfo, CostKind) = Link :-
    make_table_link(TableInfo, "/call", CostKind, self, per_call) = Link.

:- func total_link(table_info, cost_kind) = table_data.
total_link(TableInfo, CostKind) =
    make_table_link(TableInfo, "Total", CostKind, self_and_desc, overall).

:- func total_percall_link(table_info, cost_kind) = table_data.
total_percall_link(TableInfo, CostKind) = 
    make_table_link(TableInfo, "/call", CostKind, self_and_desc, per_call).

:- func time_link(table_info) = table_data.
time_link(TableInfo) =
    make_table_link(TableInfo, "Time", cost_time, self, overall).

:- func total_time_link(table_info) = table_data.
total_time_link(TableInfo) =
    make_table_link(TableInfo, "Time", cost_time, self_and_desc, overall).


:- func time = table_data.
time = s("Time").
:- func total = table_data.
total = s("Total").

    % Convert row data of procedures from the deep profiler into a table row
    % accoding to the preferences.
    %
:- pred proc_table_row(table_info::in, 
    row_data(report_proc)::in, table_row::out, int::in, int::out) is det.

proc_table_row(TableInfo, RowData, table_row(Cells), Rank, Rank+1) :-
    Ranked = TableInfo ^ table_ranked,
    Prefs = TableInfo ^ prefs,
    Fields = Prefs ^ pref_fields,

    % An optional rank number.
    (
        Ranked = ranked,
        RankCells = [table_cell(i(Rank))]
    ;
        Ranked = non_ranked,
        RankCells = []
    ),

    % The name of the procedure,
    proc_to_cell(TableInfo, RowData ^ subject, ProcCell),

    % Build the port counts cells.
    PortFields = Fields ^ port_fields,
    (
        PortFields = port,
        Calls = RowData ^ calls,
        Exits = RowData ^ exits,
        Fails = RowData ^ fails,
        Redos = RowData ^ redos,
        Excps = RowData ^ excps,
        PortCells = [table_cell(i(Calls)), table_cell(i(Exits)),
            table_cell(i(Fails)), table_cell(i(Redos)),
            table_cell(i(Excps))]
    ;
        PortFields = no_port,
        PortCells = []
    ),

    % Build the time and ticks cells.
    TimeFields = Fields ^ time_fields,
    (
        TimeFields = no_time,
        TimeCells = []
    ;
        SelfTicksCell = table_cell(i(RowData ^ self_ticks)),
        SelfTimeCell = table_cell(t(RowData ^ self_time)),
        SelfTimePercentCell = table_cell(p(RowData ^ self_time_percent)),
        SelfTimePercallCell = table_cell(t(RowData ^ self_time_percall)),
        TicksCell = table_cell(i(RowData ^ ticks)),
        TimeCell = table_cell(t(RowData ^ time)),
        TimePercentCell = table_cell(p(RowData ^ time_percent)),
        TimePercallCell = table_cell(t(RowData ^ time_percall)),
        (
            TimeFields = ticks,
            TimeCells = [SelfTicksCell, SelfTimePercentCell, 
                TicksCell, TimePercentCell]
        ;
            TimeFields = time,
            TimeCells = [SelfTimeCell, SelfTimePercentCell, 
                TimeCell, TimePercentCell]
        ;
            TimeFields = ticks_and_time,
            TimeCells = [SelfTicksCell, SelfTimeCell, SelfTimePercentCell,
                TicksCell, TimeCell, TimePercentCell]
        ;
            TimeFields = time_and_percall,
            TimeCells = [SelfTimeCell, SelfTimePercentCell,
                    SelfTimePercallCell,
                TimeCell, TimePercentCell, TimePercallCell]
        ;
            TimeFields = ticks_and_time_and_percall,
            TimeCells = [SelfTicksCell, SelfTimeCell, SelfTimePercentCell, 
                    SelfTimePercallCell,
                TicksCell, TimeCell, TimePercentCell, TimePercallCell]
        )
    ),

    % Build call sequence numbers cells.
    CallSeqsFields = Fields ^ callseqs_fields,
    (
        CallSeqsFields = no_callseqs,
        CallSeqsCells = []
    ;
        SelfCallseqsCell = table_cell(i(RowData ^ self_callseqs)),
        SelfCallseqsPercentCell = 
            table_cell(p(RowData ^ self_callseqs_percent)),
        CallseqsCell = table_cell(i(RowData ^ callseqs)),
        CallseqsPercentCell = table_cell(p(RowData ^ callseqs_percent)),
        (
            CallSeqsFields = callseqs,
            CallSeqsCells = [SelfCallseqsCell, SelfCallseqsPercentCell,
                CallseqsCell, CallseqsPercentCell]
        ;
            CallSeqsFields = callseqs_and_percall,
            SelfCallseqsPercallCell = 
                table_cell(f(RowData ^ self_callseqs_percall)),
            CallseqsPercallCell = table_cell(f(RowData ^ callseqs_percall)),
            CallSeqsCells = [SelfCallseqsCell, SelfCallseqsPercentCell, 
                    SelfCallseqsPercallCell,
                CallseqsCell, CallseqsPercentCell, CallseqsPercallCell]
        )
    ),
    
    % Build allocation info.
    AllocFields = Fields ^ alloc_fields,
    (
        AllocFields = no_alloc,
        AllocCells = []
    ;
        SelfAllocsCell = table_cell(i(RowData ^ self_allocs)),
        SelfAllocsPercentCell = table_cell(p(RowData ^ self_allocs_percent)),
        AllocsCell = table_cell(i(RowData ^ allocs)),
        AllocsPercentCell = table_cell(p(RowData ^ allocs_percent)),
        (
            AllocFields = alloc,
            AllocCells = [SelfAllocsCell, SelfAllocsPercentCell,
                AllocsCell, AllocsPercentCell]
        ;
            AllocFields = alloc_and_percall,
            SelfAllocsPercallCell = 
                table_cell(f(RowData ^ self_allocs_percall)),
            AllocsPercallCell = table_cell(f(RowData ^ allocs_percall)),
            AllocCells = [SelfAllocsCell, SelfAllocsPercentCell, 
                    SelfAllocsPercallCell,
                AllocsCell, AllocsPercentCell, AllocsPercallCell]
        )
    ),

    MemoryFields = Fields ^ memory_fields,
    (
        MemoryFields = no_memory,
        MemoryCells = []
    ;
        ( MemoryFields = memory(Units)
        ; MemoryFields = memory_and_percall(Units) ),
        SelfMemCell = table_cell(m(RowData ^ self_mem, Units, 0)),
        SelfMemPercallCell = 
            table_cell(m(RowData ^ self_mem_percall, Units, 2)),
        MemCell = table_cell(m(RowData ^ mem, Units, 0)),
        MemPercallCell = table_cell(m(RowData ^ mem_percall, Units, 2)),
        SelfMemPercentCell = table_cell(p(RowData ^ self_mem_percent)),
        MemPercentCell = table_cell(p(RowData ^ mem_percent)),
        (
            MemoryFields = memory(_),
            MemoryCells = [SelfMemCell, SelfMemPercentCell, 
                MemCell, MemPercentCell]
        ;
            MemoryFields = memory_and_percall(_),
            MemoryCells = [SelfMemCell, SelfMemPercentCell, SelfMemPercallCell,
                MemCell, MemPercentCell, MemPercallCell]
        )
    ),

    Cells = RankCells ++ cons(ProcCell, PortCells ++ TimeCells ++ 
        CallSeqsCells ++ AllocCells ++ MemoryCells). 


:- pred proc_to_cell(table_info::in, report_proc::in, table_cell::out) is det.

proc_to_cell(TableInfo, ReportProc, table_cell(Data)) :-
    Prefs = TableInfo ^ prefs,
    ReportProc = report_proc(PSPtr, _, _, Name),
    PSPtr = proc_static_ptr(PSIndex),
    Cmd = deep_cmd_proc(PSIndex),
    Data = l(deep_link(Cmd, yes(Prefs), Name, link_class_link)). 


    % Create the table header cell for the timing fields.
    %
:- pred proc_table_time_header(table_info::in, fields::in,
    maybe(table_header_cell)::out) is det.

proc_table_time_header(TableInfo, Fields, MaybeHeaderCell) :-
    TimeFields = Fields ^ time_fields,
    Self = self_link(TableInfo, cost_time),
    Time = time_link(TableInfo),
    SelfPercall = self_percall_link(TableInfo, cost_time),
    Total = total_link(TableInfo, cost_time),
    TotalTime = total_time_link(TableInfo),
    TotalPercall = total_percall_link(TableInfo, cost_time),

    (
        TimeFields = no_time, 
        MaybeHeaderCell = no
    ;
        (
            TimeFields = ticks,
            Title = "Clock ticks",
            SubTitles = [Self, percent_label, Total, percent_label]
        ;
            TimeFields = time,
            Title = "Time",
            SubTitles = [Self, percent_label, Total, percent_label]
        ; 
            TimeFields = ticks_and_time,
            Title = "Clock ticks and times",
            SubTitles = [Self, Time, percent_label, 
                Total, TotalTime, percent_label]
        ;
            TimeFields = time_and_percall,
            Title = "Time",
            SubTitles = [Self, percent_label, SelfPercall, 
                Total, percent_label, TotalPercall]
        ; 
            TimeFields = ticks_and_time_and_percall, 
            Title = "Clock ticks and times",
            SubTitles = [Self, Time, percent_label, SelfPercall, 
                Total, TotalTime, percent_label, TotalPercall]
        ),
        MaybeHeaderCell = yes(table_header_group(Title, SubTitles,
            table_col_class_ticks_and_times))
    ).

    % Build the ports section of the header if required.
    %
:- pred proc_table_ports_header(table_info::in, fields::in,
    maybe(table_header_cell)::out) is det.

proc_table_ports_header(TableInfo, Fields, MaybePortsHeader) :-
    (
        Fields ^ port_fields = port,
        Calls = make_table_link(TableInfo, "Calls", cost_calls, self, overall),
        Redos = make_table_link(TableInfo, "Redos", cost_redos, self, overall),
        MaybePortsHeader = yes(table_header_group("Port counts", 
            [Calls, s("Exits"), s("Fails"), Redos, s("Excps")],
            table_col_class_port_counts))
    ;
        Fields ^ port_fields = no_port,
        MaybePortsHeader = no
    ).

    % Create the table header cell for the call sequence count fields.
    %
:- pred proc_table_callseqs_header(table_info::in, fields::in,
    maybe(table_header_cell)::out) is det.

proc_table_callseqs_header(TableInfo, Fields, MaybeCallseqsHeader) :-
    Callseqs = Fields ^ callseqs_fields,
    Self = self_link(TableInfo, cost_callseqs),
    Total = total_link(TableInfo, cost_callseqs),
    (
        Callseqs = no_callseqs,
        MaybeCallseqsHeader = no
    ;
        (
            Callseqs = callseqs,
            SubTitles = [Self, percent_label, Total, percent_label]
        ;
            Callseqs = callseqs_and_percall,
            SelfPercall = self_percall_link(TableInfo, cost_callseqs),
            TotalPercall = total_percall_link(TableInfo, cost_callseqs),
            SubTitles = [Self, percent_label, SelfPercall, 
                Total, percent_label, TotalPercall]
        ),
        MaybeCallseqsHeader = yes(table_header_group("Call sequence numbers",
            SubTitles, table_col_class_callseqs))
    ).

    % Build the header for the allocations column group.
    %
:- pred proc_table_allocations_header(table_info::in, fields::in,
    maybe(table_header_cell)::out) is det.

proc_table_allocations_header(TableInfo, Fields, MaybeHeader) :-
    AllocFields = Fields ^ alloc_fields,
    Self = self_link(TableInfo, cost_allocs),
    Total = total_link(TableInfo, cost_allocs),
    (
        AllocFields = no_alloc,
        MaybeHeader = no
    ;
        (
            AllocFields = alloc,
            SubTitles = [Self, percent_label, Total, percent_label]
        ;
            AllocFields = alloc_and_percall,
            SelfPercall = self_percall_link(TableInfo, cost_allocs),
            TotalPercall = total_percall_link(TableInfo, cost_allocs),
            SubTitles = [Self, percent_label, SelfPercall, 
                Total, percent_label, TotalPercall]
        ),
        MaybeHeader = yes(table_header_group("Memory allocations", SubTitles,
            table_col_class_allocations))
    ).

    % Build the header for the memory usage column group.
    %
:- pred proc_table_memory_header(table_info::in, fields::in,
    maybe(table_header_cell)::out) is det.

proc_table_memory_header(TableInfo, Fields, MaybeHeader) :-
    Memory = Fields ^ memory_fields,
    Self = self_link(TableInfo, cost_words),
    Total = total_link(TableInfo, cost_words),
    Percent = percent_label,
    (
        Memory = no_memory,
        MaybeHeader = no
    ;
        (
            Memory = memory(Units),
            SubTitles = [Self, Percent, Total, Percent]
        ;
            Memory = memory_and_percall(Units),
            SelfPercall = self_percall_link(TableInfo, cost_words),
            TotalPercall = total_percall_link(TableInfo, cost_words),
            SubTitles = [Self, Percent, SelfPercall, 
                Total, Percent, TotalPercall]
        ),
        (
            Units = units_words,
            Title = "Memory words"
        ;
            Units = units_bytes,
            Title = "Memory bytes"
        ),
        MaybeHeader = yes(table_header_group(Title, SubTitles,
            table_col_class_memory))
    ).


    % Build a header for a table of procedures.
    %
:- pred proc_table_header(table_info::in, int::out, table_header::out) is det.

proc_table_header(TableInfo, NumCols, Header) :-
    Prefs = TableInfo ^ prefs,
    Ranked = TableInfo ^ table_ranked,
    Fields = Prefs ^ pref_fields,
    some [!NumCols, !Cols]
    (
        !:NumCols = 0,
        !:Cols = [],
        (
            Ranked = ranked,
            table_add_header_col(
                table_header_cell(s("Rank"), table_col_class_ordinal_rank), 
                !Cols, !NumCols)
        ;
            Ranked = non_ranked
        ),
        table_add_header_col(table_header_cell(s("Procedure"),
            table_col_class_proc), !Cols, !NumCols),
        
        proc_table_ports_header(TableInfo, Fields, MaybePortsHeader),
        table_maybe_add_header_col(MaybePortsHeader, !Cols, !NumCols),
        
        proc_table_time_header(TableInfo, Fields, MaybeTimeHeader),
        table_maybe_add_header_col(MaybeTimeHeader, !Cols, !NumCols),
       
        proc_table_callseqs_header(TableInfo, Fields, MaybeCallseqsHeader),
        table_maybe_add_header_col(MaybeCallseqsHeader, !Cols, !NumCols),

        proc_table_allocations_header(TableInfo, Fields,
            MaybeAllocationsHeader),
        table_maybe_add_header_col(MaybeAllocationsHeader, !Cols, !NumCols),

        proc_table_memory_header(TableInfo, Fields, MaybeMemoryHeader),
        table_maybe_add_header_col(MaybeMemoryHeader, !Cols, !NumCols),
        
        Header = table_header(reverse(!.Cols)),
        NumCols = !.NumCols
    ).

%-----------------------------------------------------------------------------%
%
% Code to build controls seen at bottom of reports.
%

    % Build the sort controls.
    %
:- pred sort_controls(preferences::in, report_ordering::in, display_item::out)
    is det.

sort_controls(Prefs, Ordering, ControlsList) :- 
    CurrentCostKind = Ordering ^ cost_kind,
    Costs0 = [cost_calls, cost_redos, cost_time, cost_callseqs, cost_allocs,
        cost_words],
    list.filter(not_unify(CurrentCostKind), Costs0, Costs1), 
    list.map(make_sort_control(Ordering, Prefs), Costs1, Controls),

    ControlsList = display_list(list_class_horizontal, no, Controls).

:- pred cost_kind_label(cost_kind::in, string::out) is det.

cost_kind_label(cost_calls, "Sort by calls").
cost_kind_label(cost_redos, "Sort by redos").
cost_kind_label(cost_time, "Sort by time").
cost_kind_label(cost_callseqs, "Sort by call sequence numbers").
cost_kind_label(cost_allocs, "Sort by allocations").
cost_kind_label(cost_words, "Sort by words").

:- pred make_sort_control(report_ordering::in, preferences::in, 
    cost_kind::in, display_item::out) is det.

make_sort_control(Ordering, Prefs, CostKind, display_command_link(Control)) :-
    InclDesc = Ordering ^ incl_desc,
    Scope = Ordering ^ scope,
    cost_kind_label(CostKind, Label),
    Control = 
        make_link(Ordering, Prefs, Label, CostKind, InclDesc, Scope, 
            link_class_control).

%-----------------------------------------------------------------------------%

    % Create the controls for which measurements to include.
    %
:- pred incldesc_and_scope_controls(preferences::in, report_ordering::in, 
    display_item::out) is det.

incldesc_and_scope_controls(Prefs, Ordering, ControlsList) :-
    Ordering =
        report_ordering(DisplayLimit, CostKind, CurrentInclDesc, CurrentScope),
    
    % Build InclDesc Control.
    (
        CurrentInclDesc = self,
        InclDescLabel = "Include descendants",
        InclDesc = self_and_desc
    ;
        CurrentInclDesc = self_and_desc,
        InclDescLabel = "Exclude descendants",
        InclDesc = self
    ),
    InclDescControl = deep_link(
            deep_cmd_top_procs(DisplayLimit, CostKind, InclDesc, CurrentScope),
            yes(Prefs), InclDescLabel, link_class_control),
        
    % Build Scope Control.
    (
        CurrentScope = overall,
        ScopeLabel = "Count per-call cost",
        Scope = per_call
    ;
        CurrentScope = per_call,
        ScopeLabel = "Count overall cost",
        Scope = overall
    ),
    ScopeControl = deep_link(
            deep_cmd_top_procs(DisplayLimit, CostKind, CurrentInclDesc, Scope),
            yes(Prefs), ScopeLabel, link_class_control),

    map(link_to_display, [InclDescControl, ScopeControl], Controls), 
    ControlsList = display_list(list_class_horizontal, no, Controls).

    % Provide a predicate to be used as a higher order value that wraps the
    % display_command_link constructor.
    %
:- pred link_to_display(deep_link::in, display_item::out) is det.

link_to_display(Link, Display) :-
    display_command_link(Link) = Display.

%-----------------------------------------------------------------------------%

:- pred display_controls(preferences::in, cmd::in, display_item::out) is det. 

display_controls(Prefs, Cmd, ControlsList) :-
    Colour0 = Prefs ^ pref_colour,
    (
        Colour0 = colour_column_groups,
        Colour = colour_none,
        ColourLabel = "Fade column groups"
    ;
        Colour0 = colour_none,
        Colour = colour_column_groups,
        ColourLabel = "Colour column groups"
    ),
    ColourPrefs = Prefs ^ pref_colour := Colour,
    ColourControl = display_command_link(
        deep_link(Cmd, yes(ColourPrefs), ColourLabel, link_class_control)),

    Box0 = Prefs ^ pref_box,
    (
        Box0 = box,
        Box = nobox,
        BoxLabel = "Unbox"
    ;
        Box0 = nobox,
        Box = box,
        BoxLabel = "Box"
    ),
    BoxPrefs = Prefs ^ pref_box := Box,
    BoxControl = display_command_link(
        deep_link(Cmd, yes(BoxPrefs), BoxLabel, link_class_control)),

    ControlsList = display_list(list_class_horizontal, no, 
        [ColourControl, BoxControl]).

%-----------------------------------------------------------------------------%

    % Create the field controls section.
    %
:- pred field_controls(preferences::in, cmd::in, display_item::out) is det. 

field_controls(Prefs, Cmd, ControlsList) :-
    Fields = Prefs ^ pref_fields,
    Fields = fields(PortFields, TimeFields, CallseqsFields, AllocFields,
        MemoryFields),  

    (
        PortFields = no_port,
        Port = port
    ;
        PortFields = port,
        Port = no_port
    ),
    port_label(Port, PortLabel),
    NewPortFields = Fields ^ port_fields := Port,
    PortPrefs = Prefs ^ pref_fields := NewPortFields,
    PortControl = display_list(list_class_horizontal, no, [
        display_command_link(deep_link(Cmd, yes(PortPrefs), PortLabel,
        link_class_control))]),

    AllTimeFields = [no_time, ticks, time, ticks_and_time, time_and_percall,
        ticks_and_time_and_percall],
    list.filter(not_unify(TimeFields), AllTimeFields, NewTimeFields),
    list.map(make_time_control(Cmd, Prefs), NewTimeFields, TimeControls),
    make_horizontal_list(TimeControls, TimeControlsList),

    AllCallseqsFields = [no_callseqs, callseqs, callseqs_and_percall],
    list.filter(not_unify(CallseqsFields), AllCallseqsFields,
        NewCallseqsFields),
    list.map(make_callseqs_control(Cmd, Prefs), NewCallseqsFields,
        CallseqsControls),
    make_horizontal_list(CallseqsControls, CallseqsControlsList),

    AllAllocFields = [no_alloc, alloc, alloc_and_percall],
    list.filter(not_unify(AllocFields), AllAllocFields, NewAllocFields),
    list.map(make_alloc_control(Cmd, Prefs), NewAllocFields, AllocControls),
    make_horizontal_list(AllocControls, AllocControlsList),
   
    AllMemoryFields = [no_memory, memory(units_words), memory(units_bytes),
        memory_and_percall(units_words), memory_and_percall(units_bytes)],
    list.filter(not_unify(MemoryFields), AllMemoryFields, NewMemoryFields),
    list.map(make_memory_control(Cmd, Prefs), NewMemoryFields, MemoryControls),
    make_horizontal_list(MemoryControls, MemoryControlsList),

    Controls = [PortControl, TimeControlsList, CallseqsControlsList,
        AllocControlsList, MemoryControlsList],

    ControlsList = display_list(list_class_vertical_no_bullets, 
        yes("Toggle fields:"), Controls).

%-----------------------------------------------------------------------------%

    % Labels for the port fields controls.
    %
:- pred port_label(port_fields::in, string::out) is det.

port_label(port, "Port counts").
port_label(no_port, "No port counts").

%-----------------------------------------------------------------------------%

    % Make a time fields control using the given command and existing
    % preferences.  Makes a button to control which time fields are visible
    % depending on the third argument.
    %
:- pred make_time_control(cmd::in, preferences::in, 
    time_fields::in, display_item::out) is det.

make_time_control(Cmd, Prefs, TimeFields, Control) :-
    make_fields_control(update_time_fields, time_label,
        Cmd, Prefs, TimeFields, Control).

:- pred update_time_fields(time_fields::in, fields::in, fields::out)
    is det.

update_time_fields(TimeFields, !Fields) :-
    !:Fields = !.Fields ^ time_fields := TimeFields.

    % Labels for the time fields controls.
    %
:- pred time_label(time_fields::in, string::out) is det.

time_label(no_time, "No time info").
time_label(ticks, "Ticks").
time_label(time, "Times").
time_label(ticks_and_time, "Ticks and times").
time_label(time_and_percall, "Times and per-call times").
time_label(ticks_and_time_and_percall, "Ticks and times and per-call times").

%-----------------------------------------------------------------------------%

    % Make a callseqs fields control using the given commandv and existing
    % preferences.  Makes a button to control which callseqs fields are visible
    % depending on the third argument.
    %
:- pred make_callseqs_control(cmd::in, preferences::in, 
    callseqs_fields::in, display_item::out) is det.

make_callseqs_control(Cmd, Prefs, CallseqsFields, Control) :-
    make_fields_control(update_callseqs_fields, callseqs_label,
        Cmd, Prefs, CallseqsFields, Control).

:- pred update_callseqs_fields(callseqs_fields::in, fields::in, fields::out)
    is det.

update_callseqs_fields(CallseqsFields, !Fields) :-
    !:Fields = !.Fields ^ callseqs_fields := CallseqsFields.

:- pred callseqs_label(callseqs_fields::in, string::out) is det.

callseqs_label(no_callseqs, "No call sequence number info").
callseqs_label(callseqs, "Call sequence numbers").
callseqs_label(callseqs_and_percall,
    "Call sequence numbers including per-call").

%-----------------------------------------------------------------------------%

:- pred make_alloc_control(cmd::in, preferences::in, 
    alloc_fields::in, display_item::out) is det.

make_alloc_control(Cmd, Prefs, AllocFields, Control) :-
    make_fields_control(update_alloc_fields, alloc_label,
        Cmd, Prefs, AllocFields, Control).

:- pred update_alloc_fields(alloc_fields::in, fields::in, fields::out)
    is det.

update_alloc_fields(AllocFields, !Fields) :-
    !:Fields = !.Fields ^ alloc_fields := AllocFields.

:- pred alloc_label(alloc_fields::in, string::out) is det.

alloc_label(no_alloc, "No allocations").
alloc_label(alloc, "Allocations").
alloc_label(alloc_and_percall, "Allocations and per-call allocations").

%-----------------------------------------------------------------------------%

:- pred make_memory_control(cmd::in, preferences::in, 
    memory_fields::in, display_item::out) is det.

make_memory_control(Cmd, Prefs, MemoryFields, Control) :-
    make_fields_control(update_memory_fields, memory_label, Cmd, Prefs,
        MemoryFields, Control).

:- pred update_memory_fields(memory_fields::in, fields::in, fields::out)
    is det.

update_memory_fields(MemoryFields, !Fields) :-
    !:Fields = !.Fields ^ memory_fields := MemoryFields.

:- pred memory_label(memory_fields::in, string::out) is det.

memory_label(no_memory, "No memory info").
memory_label(memory(units_words), "Words").
memory_label(memory(units_bytes), "Bytes").
memory_label(memory_and_percall(units_words), "Words and per-call words").
memory_label(memory_and_percall(units_bytes), "Bytes and per-call bytes").

%-----------------------------------------------------------------------------%

:- pred make_fields_control(pred(T, fields, fields), pred(T, string),
    cmd, preferences, T, display_item).
:- mode make_fields_control(pred(in, in, out) is det, pred(in, out) is det,
    in, in, in, out) is det.

make_fields_control(UpdateFields, MakeLabel, Cmd, Prefs0, NewFields, Control)
        :-
    Fields0 = Prefs0 ^ pref_fields,
    UpdateFields(NewFields, Fields0, Fields),
    Prefs = Prefs0 ^ pref_fields := Fields,
    MakeLabel(NewFields, Label),
    Control = display_command_link(deep_link(Cmd, yes(Prefs), Label,
        link_class_control)).

%-----------------------------------------------------------------------------%
%
% Code shared within this module.
%

    % Give the common list of commands seen at the bottom of all deep-profiler
    % displayed reports.
    %
:- func cmds_menu_restart_quit = list(display_item).

cmds_menu_restart_quit = [Menu, Restart, Quit] :-
    Menu = display_command_link(deep_link(deep_cmd_menu, no, "Menu", 
        link_class_control)),
    Restart = display_command_link(deep_link(deep_cmd_restart, no, "Restart",
        link_class_control)),
    Quit = display_command_link(deep_link(deep_cmd_quit, no, "Quit",
        link_class_control)).

%-----------------------------------------------------------------------------%

    % not_unify(A, B).
    %
    % This predicate is true when A \= B, and is usefull in higher order code.
    %
:- pred not_unify(T::in, T::in) is semidet.

not_unify(A, B) :-
    A \= B.
    
%-----------------------------------------------------------------------------%
    
    % Make a mercury list of display items into a display item representing a
    % horizontal list of these items.
    %
:- pred make_horizontal_list(list(display_item)::in, display_item::out) is det.

make_horizontal_list(Items, List) :-
    List = display_list(list_class_horizontal, no, Items).

%-----------------------------------------------------------------------------%
:- end_module display_report.
%-----------------------------------------------------------------------------%
