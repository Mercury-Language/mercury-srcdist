%-----------------------------------------------------------------------------%
% vim: ft=mercury ts=4 sw=4 et
%-----------------------------------------------------------------------------%
% Copyright (C) 2001-2003, 2005-2009 The University of Melbourne.
% This file may only be copied under the terms of the GNU General
% Public License - see the file COPYING in the Mercury distribution.
%-----------------------------------------------------------------------------%
%
% File: query.m.
% Authors: conway, zs.
%
% This module contains code to answer deep profiler queries by directly
% generating HTML. This approach has been superseded by another (implemented in
% create_report.m and display_report.m) that answers queries by first creating
% a high level report, and then converting that report to a display structure
% and finally to HTML. The code in this module is therefore present only as a
% backup; it should not be actively modified.
%
%-----------------------------------------------------------------------------%

:- module old_query.

:- interface.

:- import_module profile.
:- import_module query.

:- import_module io.

    % Old deep profiler cgi code.  This should remain supported until all cmds
    % have been updated to use the data structures in report.m.
    %
:- pred old_exec(cmd::in, preferences::in, deep::in, string::out, 
    io::di, io::uo) is det.

%-----------------------------------------------------------------------------%

:- implementation.

:- import_module apply_exclusion.
:- import_module exclude.
:- import_module html_format.       % for escape_break_html_string
:- import_module measurements.
:- import_module old_html_format.
:- import_module top_procs.

:- import_module array.
:- import_module assoc_list.
:- import_module bool.
:- import_module float.
:- import_module int.
:- import_module list.
:- import_module map.
:- import_module maybe.
:- import_module pair.
:- import_module require.
:- import_module string.
:- import_module unit.

old_exec(deep_cmd_restart, _Pref, _Deep, _HTML, !IO) :-
    % Our caller is supposed to filter out restart commands.
    error("exec: found restart command").
old_exec(deep_cmd_quit, _Pref, Deep, HTML, !IO) :-
    HTML = string.format(
        "<H3>Shutting down deep profile server for %s.</H3>\n",
        [s(Deep ^ data_file_name)]).
old_exec(deep_cmd_timeout(TimeOut), _Pref, _Deep, HTML, !IO) :-
    HTML = string.format("<H3>Timeout set to %d minutes</H3>\n", [i(TimeOut)]).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_menu,
    HTML = generate_menu_page(Cmd, Pref, Deep).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_top_procs(Limit, CostKind, InclDesc, Scope),
    HTML = generate_top_procs_page(Cmd, Limit, CostKind, InclDesc, Scope,
        Pref, Deep).
old_exec(deep_cmd_dump_proc_static(PSPtr), _Pref, Deep, HTML, !IO) :-
    HTML = generate_proc_static_debug_page(PSPtr, Deep).
old_exec(deep_cmd_dump_proc_dynamic(PDPtr), _Pref, Deep, HTML, !IO) :-
    HTML = generate_proc_dynamic_debug_page(PDPtr, Deep).
old_exec(deep_cmd_dump_call_site_static(CSSPtr), _Pref, Deep, HTML, !IO) :-
    HTML = generate_call_site_static_debug_page(CSSPtr, Deep).
old_exec(deep_cmd_dump_call_site_dynamic(CSDPtr), _Pref, Deep, HTML, !IO) :-
    HTML = generate_call_site_dynamic_debug_page(CSDPtr, Deep).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_proc(PSPtr),
    ( valid_proc_static_ptr(Deep, PSPtr) ->
        HTML = generate_proc_page(Cmd, PSPtr, Pref, Deep)
    ;
        HTML =
            page_banner(Cmd, Pref) ++
            "There is no procedure with that number.\n" ++
            page_footer(Cmd, Pref, Deep)
    ).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_root(MaybePercent),
    deep_lookup_clique_index(Deep, Deep ^ root, RootCliquePtr),
    (
        MaybePercent = yes(Percent),
        HTML = chase_the_action(Cmd, RootCliquePtr, Pref, Deep, Percent)
    ;
        MaybePercent = no,
        generate_clique_page(Cmd, RootCliquePtr, Pref, Deep, HTML, 100, _)
    ).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_clique(CliquePtr),
    ( valid_clique_ptr(Deep, CliquePtr) ->
        generate_clique_page(Cmd, CliquePtr, Pref, Deep, HTML, 100, _)
    ;
        HTML =
            page_banner(Cmd, Pref) ++
            "There is no clique with that number.\n" ++
            page_footer(Cmd, Pref, Deep)
    ).
old_exec(Cmd, Pref0, Deep, HTML, !IO) :-
    Cmd = deep_cmd_proc_callers(PSPtr, CallerGroups, BunchNum,
        _CallersPerBunch, Contour),
    Pref = Pref0 ^ pref_contour := Contour,
    ( valid_proc_static_ptr(Deep, PSPtr) ->
        generate_proc_callers_page(Cmd, PSPtr, CallerGroups, BunchNum,
            Pref, Deep, HTML, !IO)
    ;
        HTML =
            page_banner(Cmd, Pref) ++
            "There is no procedure with that number.\n" ++
            page_footer(Cmd, Pref, Deep)
    ).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_program_modules,
    HTML = generate_modules_page(Cmd, Pref, Deep).
old_exec(Cmd, Pref, Deep, HTML, !IO) :-
    Cmd = deep_cmd_module(ModuleName),
    ( map.search(Deep ^ module_data, ModuleName, ModuleData) ->
        HTML = generate_module_page(Cmd, ModuleName, ModuleData, Pref, Deep)
    ;
        HTML =
            page_banner(Cmd, Pref) ++
            "There is no procedure with that number.\n" ++
            page_footer(Cmd, Pref, Deep)
    ).
old_exec(deep_cmd_dump_clique(CliquePtr), _Pref, Deep, HTML, !IO) :-
    HTML = generate_clique_debug_page(CliquePtr, Deep).
old_exec(deep_cmd_procrep_coverage(_), _, _, HTML, !IO) :-
    HTML = 
        "old_query.m: deep_cmd_procrep_coverage is unsupported by old_exec\n". 
old_exec(deep_cmd_dump_proc_var_use(_), _, _, HTML, !IO) :-
    HTML = 
        "old_query.m: deep_cmd_dump_proc_var_use is unsupported by old_exec\n".
old_exec(deep_cmd_module_getter_setters(_), _, _, HTML, !IO) :-
    HTML = "old_query.m: " ++
        "deep_cmd_module_getter_setters is unsupported by old_exec\n". 

%-----------------------------------------------------------------------------%

:- func generate_proc_static_debug_page(proc_static_ptr, deep) = string.

generate_proc_static_debug_page(PSPtr, Deep) = HTML :-
    ( valid_proc_static_ptr(Deep, PSPtr) ->
        deep_lookup_proc_statics(Deep, PSPtr, PS),
        Refined = PS ^ ps_q_refined_id,
        Raw = PS ^ ps_raw_id,
        FileName = PS ^ ps_file_name,
        HTML =
            "<HTML>\n" ++
            Refined ++ " " ++ Raw ++ " " ++ FileName ++ " " ++
            string.int_to_string(array.max(PS ^ ps_sites)) ++
            "</HTML>\n"
    ;
        HTML =
            "<HTML>\n" ++
            "Invalid proc_static_ptr" ++
            "</HTML>\n"
    ).

:- func generate_proc_dynamic_debug_page(proc_dynamic_ptr, deep) = string.

generate_proc_dynamic_debug_page(PDPtr, Deep) = HTML :-
    ( valid_proc_dynamic_ptr(Deep, PDPtr) ->
        deep_lookup_proc_dynamics(Deep, PDPtr, PD),
        PSPtr = PD ^ pd_proc_static,
        PSPtr = proc_static_ptr(PSI),
        HTML =
            "<HTML>\n" ++
            string.format("proc_static %d, ", [i(PSI)]) ++
            array_slots_to_html(PD ^ pd_sites) ++
            "</HTML>\n"
    ;
        HTML =
            "<HTML>\n" ++
            "Invalid proc_dynamic_ptr" ++
            "</HTML>\n"
    ).

:- func generate_call_site_static_debug_page(call_site_static_ptr, deep)
    = string.

generate_call_site_static_debug_page(CSSPtr, Deep) = HTML :-
    ( valid_call_site_static_ptr(Deep, CSSPtr) ->
        deep_lookup_call_site_statics(Deep, CSSPtr, CSS),
        ContainerPtr = CSS ^ css_container,
        ContainerPtr = proc_static_ptr(Container),
        HTML =
            "<HTML>\n" ++
            string.int_to_string(Container) ++ " " ++
            string.int_to_string(CSS ^ css_slot_num) ++ " " ++
            string.int_to_string(CSS ^ css_line_num) ++ " " ++
            kind_and_callee_to_string(CSS ^ css_kind) ++ " " ++
            CSS ^ css_goal_path ++
            "</HTML>\n"
    ;
        HTML =
            "<HTML>\n" ++
            "Invalid call_site_static_ptr" ++
            "</HTML>\n"
    ).

:- func generate_call_site_dynamic_debug_page(call_site_dynamic_ptr, deep)
    = string.

generate_call_site_dynamic_debug_page(CSDPtr, Deep) = HTML :-
    ( valid_call_site_dynamic_ptr(Deep, CSDPtr) ->
        deep_lookup_call_site_dynamics(Deep, CSDPtr, CSD),
        CSD ^ csd_caller = proc_dynamic_ptr(CallerPDI),
        CSD ^ csd_callee = proc_dynamic_ptr(CalleePDI),
        HTML =
            "<HTML>\n" ++
            string.int_to_string(CallerPDI) ++ " -> " ++
            string.int_to_string(CalleePDI) ++ ": " ++
            own_to_string(CSD ^ csd_own_prof) ++
            "</HTML>\n"
    ;
        HTML =
            "<HTML>\n" ++
            "Invalid call_site_dynamic_ptr" ++
            "</HTML>\n"
    ).

:- func generate_clique_debug_page(clique_ptr, deep) = string.

generate_clique_debug_page(CliquePtr, Deep) = HTML :-
    ( valid_clique_ptr(Deep, CliquePtr) ->
        deep_lookup_clique_parents(Deep, CliquePtr, ParentCSDPtr),
        ParentCSDPtr = call_site_dynamic_ptr(ParentCSDI),
        ParentStr = string.format("%d ->", [i(ParentCSDI)]),
        deep_lookup_clique_members(Deep, CliquePtr, Members),
        HTML =
            "<HTML>\n" ++
            ParentStr ++
            list.foldl(append_pdi_to_string, Members, "") ++
            "</HTML>\n"
    ;
        HTML =
            "<HTML>\n" ++
            "Invalid call_site_dynamic_ptr" ++
            "</HTML>\n"
    ).

%-----------------------------------------------------------------------------%

:- func array_slots_to_html(array(call_site_array_slot)) = string.

array_slots_to_html(SlotArray) = HTML :-
    array.to_list(SlotArray, SlotList),
    list.foldl(append_slot_to_string, SlotList, "multi", HTML).

:- pred append_slot_to_string(call_site_array_slot::in,
    string::in, string::out) is det.

append_slot_to_string(Slot, Str0, Str) :-
    Str = Str0 ++ " " ++ array_slot_to_html(Slot).

:- func array_slot_to_html(call_site_array_slot) = string.

array_slot_to_html(slot_normal(CSDPtr)) = HTML :-
    CSDPtr = call_site_dynamic_ptr(CSDI),
    HTML = "normal " ++ string.int_to_string(CSDI).
array_slot_to_html(slot_multi(_, CSDPtrArray)) = HTML :-
    array.to_list(CSDPtrArray, CSDPtrs),
    list.foldl(append_csdi_to_string, CSDPtrs, "", CSDI_HTML),
    list.length(CSDPtrs, CSDPtrCount),
    HTML = string.format("multi(%d): [", [i(CSDPtrCount)]) ++ CSDI_HTML ++ "]".

:- pred append_csdi_to_string(call_site_dynamic_ptr::in,
    string::in, string::out) is det.

append_csdi_to_string(call_site_dynamic_ptr(CSDI), Str0, Str) :-
    Str = Str0 ++ " " ++ string.int_to_string(CSDI).

:- func append_pdi_to_string(proc_dynamic_ptr, string) = string.

append_pdi_to_string(proc_dynamic_ptr(PDI), Str0) =
    Str0 ++ " " ++ string.int_to_string(PDI).

:- func kind_and_callee_to_string(call_site_kind_and_callee) = string.

kind_and_callee_to_string(normal_call_and_callee(proc_static_ptr(PSI),
        TypeSpec)) =
    "normal " ++ string.int_to_string(PSI) ++ " " ++ TypeSpec.
kind_and_callee_to_string(special_call_and_no_callee) = "special_call".
kind_and_callee_to_string(higher_order_call_and_no_callee) =
    "higher_order_call".
kind_and_callee_to_string(method_call_and_no_callee) = "method_call".
kind_and_callee_to_string(callback_and_no_callee) = "callback".

%-----------------------------------------------------------------------------%

:- func call_site_kind_and_callee_to_html(call_site_kind_and_callee) = string.

call_site_kind_and_callee_to_html(normal_call_and_callee(_, _)) =
    "normal_call".
call_site_kind_and_callee_to_html(special_call_and_no_callee) =
    "special_call".
call_site_kind_and_callee_to_html(higher_order_call_and_no_callee) =
    "higher_order_call".
call_site_kind_and_callee_to_html(method_call_and_no_callee) =
    "method_call".
call_site_kind_and_callee_to_html(callback_and_no_callee) =
    "callback".

%-----------------------------------------------------------------------------%

:- func generate_menu_page(cmd, preferences, deep) = string.

generate_menu_page(Cmd, Pref, Deep) = HTML :-
    ShouldDisplayTimes = should_display_times(Deep),
    HTML =
        page_banner(Cmd, Pref) ++
        "<p>\n" ++
        menu_text ++
        "<ul>\n" ++
        "<li>\n" ++
        menu_item(Deep, Pref, deep_cmd_root(no),
            "Exploring the call graph, starting at the root.") ++
        "<li>\n" ++
        menu_item(Deep, Pref, deep_cmd_root(yes(90)),
            "Exploring the call graph, starting at the action.") ++
        "<li>\n" ++
        menu_item(Deep, Pref, deep_cmd_program_modules,
            "Exploring the program module by module.") ++
        ( ShouldDisplayTimes = yes ->
            "<li>\n" ++
            menu_item(Deep, Pref,
                deep_cmd_top_procs(rank_range(1, 100), cost_time,
                    self, overall),
                "Top 100 most expensive procedures: time, self.") ++
            "<li>\n" ++
            menu_item(Deep, Pref,
                deep_cmd_top_procs(rank_range(1, 100), cost_time,
                    self_and_desc, overall),
                "Top 100 most expensive procedures: time, self+descendants.")
        ;
            ""
        ) ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(rank_range(1, 100), cost_callseqs,
                self, overall),
            "Top 100 most expensive procedures: callseqs, self.") ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(rank_range(1, 100), cost_callseqs,
                self_and_desc, overall),
            "Top 100 most expensive procedures: callseqs, self+descendants.") ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(rank_range(1, 100), cost_words, self, overall),
            "Top 100 most expensive procedures: words, self.") ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(rank_range(1, 100), cost_words, self_and_desc,
                overall),
            "Top 100 most expensive procedures: words, self+descendants.")
            ++
        ( ShouldDisplayTimes = yes ->
            "<li>\n" ++
            menu_item(Deep, Pref,
                deep_cmd_top_procs(threshold_percent(0.1), cost_time, self,
                    overall),
                "Procedures above 0.1% threshold: time, self.") ++
            "<li>\n" ++
            menu_item(Deep, Pref,
                deep_cmd_top_procs(threshold_percent(1.0), cost_time,
                    self_and_desc, overall),
                "Procedures above 1% threshold: time, self+descendants.") ++
            "<li>\n" ++
            menu_item(Deep, Pref,
                deep_cmd_top_procs(threshold_value(100.0), cost_time,
                    self_and_desc, overall),
                "Procedures above 1 second threshold: " ++
                    "time, self+descendants.")
        ;
            ""
        ) ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(threshold_percent(0.1), cost_callseqs, self,
                overall),
            "Procedures above 0.1% threshold: callseqs, self.") ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(threshold_percent(1.0), cost_callseqs,
                self_and_desc, overall),
            "Procedures above 1% threshold: callseqs, self+descendants.")
            ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(threshold_value(1000000.0), cost_callseqs,
                self_and_desc, overall),
            "Procedures above 1,000,000 callseqs threshold: callseqs, " ++
                "self+descendants.")
            ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(threshold_percent(0.1), cost_words, self,
                overall),
            "Procedures above 0.1% threshold: words, self.") ++
        "<li>\n" ++
        menu_item(Deep, Pref,
            deep_cmd_top_procs(threshold_percent(1.0), cost_words,
                self_and_desc, overall),
            "Procedures above 1% threshold: words, self+descendants.")
            ++
        "<li>\n" ++
        % 2M words is chosen because it is 8MB on ia32
        menu_item(Deep, Pref,
            deep_cmd_top_procs(threshold_value(float(1024 * 1024 * 2)),
                cost_words, self_and_desc, overall),
            "Procedures above 2M words threshold: words, self+descendants.")
            ++
        "</ul>\n" ++
        "<p>\n" ++
        present_stats(Deep) ++
        page_footer(Cmd, Pref, Deep).

:- func menu_text = string.

menu_text =
    "You can start exploring the deep profile at the following points.\n".

:- func menu_item(deep, preferences, cmd, string) = string.

menu_item(Deep, Pref, Cmd, Text) =
    string.format("<A HREF=""%s"">%s</A>\n",
        [s(deep_cmd_pref_to_url(Pref, Deep, Cmd)), s(Text)]).

:- func present_stats(deep) = string.

present_stats(Deep) = HTML :-
    Stats = Deep ^ profile_stats,
    lookup_ticks_per_sec(Stats, TicksPerSec, Assumed),
    (
        Assumed = yes,
        AssumedStr = " (assumed)"
    ;
        Assumed = no,
        AssumedStr = ""
    ),
    HTML =
        "<TABLE>\n" ++
        "<TR><TD ALIGN=left>Quanta per second:</TD>\n" ++
        string.format("<TD ALIGN=right>%d%s</TD></TR>\n",
            [i(TicksPerSec), s(AssumedStr)]) ++
        "<TR><TD ALIGN=left>Quanta in user code:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ user_quanta)]) ++
        "<TR><TD ALIGN=left>Quanta in instrumentation:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ instrument_quanta)]) ++
        "<TR><TD ALIGN=left>Call sequence numbers:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ num_callseqs)]) ++
        "<TR><TD ALIGN=left>CallSiteDynamic structures:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ num_csd)]) ++
        "<TR><TD ALIGN=left>ProcDynamic structures:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ num_pd)]) ++
        "<TR><TD ALIGN=left>CallSiteStatic structures:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ num_css)]) ++
        "<TR><TD ALIGN=left>ProcStatic structures:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(Stats ^ num_ps)]) ++
        "<TR><TD ALIGN=left>Cliques:</TD>\n" ++
        string.format("<TD ALIGN=right>%d</TD></TR>\n",
            [i(array.max(Deep ^ clique_members))]) ++
        "</TABLE>\n".

%-----------------------------------------------------------------------------%

:- func chase_the_action(cmd, clique_ptr, preferences, deep, int) = string.

chase_the_action(Cmd, CliquePtr, Pref, Deep, Percent) = HTML :-
    generate_clique_page(Cmd, CliquePtr, Pref, Deep, HTML0,
        Percent, ActionPtrs),
    ( ActionPtrs = [ActionCliquePtr] ->
        HTML = chase_the_action(Cmd, ActionCliquePtr, Pref, Deep, Percent)
    ;
        HTML = HTML0
    ).

%-----------------------------------------------------------------------------%

:- pred generate_clique_page(cmd::in, clique_ptr::in, preferences::in,
    deep::in, string::out, int::in, list(clique_ptr)::out) is det.

generate_clique_page(Cmd, CliquePtr, Pref, Deep, HTML, Percent, ActionPtrs) :-
    clique_to_html(Pref, Deep, CliquePtr, CliqueHTML, Percent, ActionPtrs),
    CliquePtr = clique_ptr(CliqueNum),
    HTML =
        page_banner(Cmd, Pref) ++
        string.format("<H3>Clique %d:</H3>\n", [i(CliqueNum)]) ++
        table_start(Pref) ++
        fields_header(Pref, source_proc, totals_meaningful,
            wrap_clique_links(CliquePtr, Pref, Deep)) ++
        CliqueHTML ++
        table_end(Pref) ++
        page_footer(Cmd, Pref, Deep).

:- func generate_proc_page(cmd, proc_static_ptr, preferences, deep) = string.

generate_proc_page(Cmd, PSPtr, Pref, Deep) =
    page_banner(Cmd, Pref) ++
    string.format("<H3>Summary of procedure %s:</H3>\n",
        [s(escape_html_string(proc_static_name(Deep, PSPtr)))]) ++
    table_start(Pref) ++
    fields_header(Pref, source_proc, totals_meaningful,
        wrap_proc_links(PSPtr, Pref, Deep)) ++
    proc_summary_to_html(Pref, Deep, PSPtr) ++
    table_end(Pref) ++
    "<p>\n" ++
    proc_summary_toggles_to_html(Pref, Deep, PSPtr) ++
    page_footer(Cmd, Pref, Deep).

:- pred generate_proc_callers_page(cmd::in, proc_static_ptr::in,
    caller_groups::in, int::in, preferences::in, deep::in, string::out,
    io::di, io::uo) is det.

generate_proc_callers_page(Cmd, PSPtr, CallerGroups, BunchNum, Pref, Deep,
        HTML, !IO) :-
    proc_callers_to_html(Pref, Deep, PSPtr, CallerGroups, BunchNum,
        MaybePage, !IO),
    (
        MaybePage = ok({IdFields, Heading, CallersHTML, Toggles}),
        HTML =
            page_banner(Cmd, Pref) ++
            Heading ++
            ( CallersHTML = "" ->
                ""
            ;
                table_start(Pref) ++
                fields_header(Pref, IdFields, totals_meaningful,
                    wrap_proc_callers_links(PSPtr, CallerGroups, 1,
                        Pref, Deep)) ++
                CallersHTML ++
                table_end(Pref) ++
                "<p>\n"
            ) ++
            Toggles ++
            page_footer(Cmd, Pref, Deep)
    ;
        MaybePage = error(Msg),
        HTML =
            string.format("<H3>%s</H3>\n", [s(Msg)])
    ).

:- func generate_modules_page(cmd, preferences, deep) = string.

generate_modules_page(Cmd, Pref, Deep) =
    page_banner(Cmd, Pref) ++
    "<H3>The modules of the program:</H3>\n" ++
    table_start(Pref) ++
    fields_header(Pref, rank_module, totals_not_meaningful,
        wrap_modules_links(Pref, Deep)) ++
    modules_to_html(Pref, Deep) ++
    table_end(Pref) ++
    page_footer(Cmd, Pref, Deep).

:- func generate_module_page(cmd, string, module_data, preferences, deep)
    = string.

generate_module_page(Cmd, ModuleName, ModuleData, Pref, Deep) = HTML :-
    module_to_html(Pref, Deep, ModuleName, ModuleData,
        IdFields, ModulesHTML),
    HTML =
        page_banner(Cmd, Pref) ++
        string.format("<H3>The procedures of module %s:</H3>\n",
            [s(ModuleName)]) ++
        table_start(Pref) ++
        fields_header(Pref, IdFields, totals_meaningful,
            wrap_module_links(ModuleName, Pref, Deep)) ++
        ModulesHTML ++
        table_end(Pref) ++
        page_footer(Cmd, Pref, Deep).

:- func generate_top_procs_page(cmd, display_limit,
    cost_kind, include_descendants, measurement_scope,
    preferences, deep) = string.

generate_top_procs_page(Cmd, Limit, CostKind, InclDesc0, Scope0, Pref, Deep)
        = HTML :-
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
        HTML =
            page_banner(Cmd, Pref) ++
            ErrorMessage ++ "\n" ++
            page_footer(Cmd, Pref, Deep)
    ;
        MaybeTopPSIs = ok(TopPSIs),
        ToggleLimitHTML = "",
        ToggleCostHTML = toggle_cost_criteria_in_top_procs_cmd(
            Pref, Deep, Limit, CostKind, InclDesc, Scope),
        Desc = cost_criteria_to_description(CostKind, InclDesc, Scope),
        Heading = string.format("<H3>Top procedures %s</H3>\n",
            [s(Desc)]),
        (
            TopPSIs = [],
            HTML =
                page_banner(Cmd, Pref) ++
                Heading ++ "<p>\n" ++
                "No procedures match the specification.\n" ++
                "<p>\n" ++
                ToggleLimitHTML ++
                ToggleCostHTML ++
                page_footer(Cmd, Pref, Deep)
        ;
            TopPSIs = [_ | _],
            TopProcs = list.filter_map(
                lookup_proc_total_to_html(Pref, Deep, no, ""),
                list.map(wrap_proc_static_ptr, TopPSIs)),
            RankedTopProcs = add_ranks(TopProcs),
            SummaryHTMLs = list.map(
                two_id_line_to_html(Pref, Deep, totals_meaningful),
                RankedTopProcs),
            HTML =
                page_banner(Cmd, Pref) ++
                Heading ++ "<p>\n" ++
                table_start(Pref) ++
                fields_header(Pref, rank_proc, totals_meaningful,
                    wrap_top_procs_links(Limit, Pref, Deep)) ++
                string.append_list(SummaryHTMLs) ++
                table_end(Pref) ++
                "<p>\n" ++
                ToggleLimitHTML ++
                ToggleCostHTML ++
                page_footer(Cmd, Pref, Deep)
        )
    ).

%-----------------------------------------------------------------------------%

:- func modules_to_html(preferences, deep) = string.

modules_to_html(Pref, Deep) = HTML :-
    map.to_assoc_list(Deep ^ module_data, ModulePairs0),
    list.filter(not_mercury_runtime, ModulePairs0, ModulePairs),
    ModuleLines = list.filter_map(module_summary_to_html(Pref, Deep),
        ModulePairs),
    SortedModuleLines = sort_line_groups(Pref ^ pref_criteria,
        ModuleLines),
    RankedModuleLines = add_ranks(SortedModuleLines),
    ModuleHTMLs = list.map(
        two_id_line_to_html(Pref, Deep, totals_not_meaningful),
        RankedModuleLines),
    HTML =
        separator_row(Pref, rank_module, totals_not_meaningful) ++
        string.append_list(ModuleHTMLs).

:- pred not_mercury_runtime(pair(string, module_data)::in) is semidet.

not_mercury_runtime(ModuleName - _) :-
    ModuleName \= "Mercury runtime".

:- func module_summary_to_html(preferences, deep, pair(string, module_data))
    = one_id_line is semidet.

module_summary_to_html(Pref, Deep, ModuleName - ModuleData) = LineGroup :-
    ModuleData = module_data(Own, Desc, _),
    not (
        Pref ^ pref_inactive ^ inactive_modules = inactive_hide,
        compute_is_active(Own) = is_not_active
    ),
    HTML = string.format("<TD><A HREF=""%s"">%s</A></TD>\n",
        [s(deep_cmd_pref_to_url(Pref, Deep, deep_cmd_module(ModuleName))),
            s(ModuleName)]),
    LineGroup = line_group(ModuleName, 0, ModuleName, Own, Desc, HTML, unit).

%-----------------------------------------------------------------------------%

:- pred module_to_html(preferences::in, deep::in, string::in, module_data::in,
    id_fields::out, string::out) is det.

module_to_html(Pref, Deep, _ModuleName, ModuleData, IdHeaders, HTML) :-
    ModuleData = module_data(_Own, _Desc, PSPtrs),
    ProcLines = list.filter_map(lookup_proc_total_to_html(Pref, Deep, yes, ""),
        PSPtrs),
    Criteria = Pref ^ pref_criteria,
    SortedProcLines = sort_line_groups(Criteria, ProcLines),
    (
        Criteria = by_cost(_, _, _),
        IdHeaders = rank_proc,
        RankedProcLines = add_ranks(SortedProcLines)
    ;
        ( Criteria = by_name
        ; Criteria = by_context
        ),
        IdHeaders = source_proc,
        RankedProcLines = list.map(add_self_context, SortedProcLines)
    ),
    ProcHTMLs = list.map(two_id_line_to_html(Pref, Deep, totals_meaningful),
        RankedProcLines),
    HTML =
        separator_row(Pref, IdHeaders, totals_meaningful) ++
        string.append_list(ProcHTMLs).

%-----------------------------------------------------------------------------%

:- pred clique_to_html(preferences::in, deep::in, clique_ptr::in,
    string::out, int::in, list(clique_ptr)::out) is det.

clique_to_html(Pref, Deep, CliquePtr, HTML, PerCent, ActionPtrs) :-
    (
        Pref ^ pref_anc = yes(AncestorLimit),
        RespectLimit = yes
    ;
        Pref ^ pref_anc = no,
        AncestorLimit = 0, % the value doesn't matter
        RespectLimit = no
    ),
    clique_ancestors_to_html(Pref, Deep,
        AncestorLimit, RespectLimit, CliquePtr, Ancestors, Cutoff),
    deep_lookup_clique_members(Deep, CliquePtr, PDPtrs),
    list.foldl(group_proc_dynamics_by_proc_static(Deep), PDPtrs,
        map.init, PStoPDsMap),
    map.to_assoc_list(PStoPDsMap, PStoPDsList0),

    deep_lookup_clique_parents(Deep, CliquePtr, EntryCSDPtr),
    ( valid_call_site_dynamic_ptr(Deep, EntryCSDPtr) ->
        deep_lookup_call_site_dynamics(Deep, EntryCSDPtr, EntryCSD),
        EntryPDPtr = EntryCSD ^ csd_callee,
        list.filter(proc_group_contains(EntryPDPtr), PStoPDsList0,
            EntryGroup, RestGroup),
        list.append(EntryGroup, RestGroup, PStoPDsList)
    ;
        PStoPDsList = PStoPDsList0
    ),

    list.map2(procs_in_clique_to_html(Pref, Deep, CliquePtr, PerCent),
        PStoPDsList, PDsStrs, ActionPtrLists),
    list.condense(ActionPtrLists, ActionPtrs),
    string.append_list(PDsStrs, ProcGroups),
    (
        Cutoff = yes,
        Heading = string.format("The %d closest ancestors:",
            [i(AncestorLimit)])
    ;
        Cutoff = no,
        Heading = "Ancestors:"
    ),
    HTML =
        header_row(Heading, Pref, source_proc, totals_meaningful) ++
        separator_row(Pref, source_proc, totals_meaningful) ++
        Ancestors ++
        separator_row(Pref, source_proc, totals_meaningful) ++
        header_row("Procedures of the clique:", Pref, source_proc,
            totals_meaningful) ++
        separator_row(Pref, source_proc, totals_meaningful) ++
        ProcGroups.

:- pred proc_group_contains(proc_dynamic_ptr::in,
    pair(proc_static_ptr, list(proc_dynamic_ptr))::in) is semidet.

proc_group_contains(EntryPDPtr, _ - PDPtrs) :-
    list.member(EntryPDPtr, PDPtrs).

:- pred clique_ancestors_to_html(preferences::in, deep::in, int::in, bool::in,
    clique_ptr::in, string::out, bool::out) is det.

clique_ancestors_to_html(Pref, Deep, AncestorLimit, RespectLimit, CliquePtr,
        HTML, Cutoff) :-
    deep_lookup_clique_parents(Deep, CliquePtr, EntryCSDPtr),
    ( valid_call_site_dynamic_ptr(Deep, EntryCSDPtr) ->
        deep_lookup_call_site_dynamics(Deep, EntryCSDPtr, EntryCSD),
        EntryPDPtr = EntryCSD ^ csd_caller,
        ( EntryPDPtr = Deep ^ root ->
            % We have reached the root.
            HTML = "",
            Cutoff = no
        ; RespectLimit = yes, AncestorLimit =< 0 ->
            HTML = "",
            Cutoff = yes
        ;
            deep_lookup_clique_index(Deep, EntryPDPtr, EntryCliquePtr),
            ThisLine = call_site_dynamic_to_html(Pref, Deep,
                ancestor_display, yes(EntryCliquePtr), EntryCSDPtr),
            ThisHTML = two_id_line_to_html(Pref, Deep, totals_meaningful,
                ThisLine),
            clique_ancestors_to_html(Pref, Deep, AncestorLimit - 1,
                RespectLimit, EntryCliquePtr, AncestorHTML, Cutoff),
            HTML = AncestorHTML ++ ThisHTML
        )
    ;
        % We have reached the parent of root.
        HTML = "",
        Cutoff = no
    ).

:- pred group_proc_dynamics_by_proc_static(deep::in, proc_dynamic_ptr::in,
    map(proc_static_ptr, list(proc_dynamic_ptr))::in,
    map(proc_static_ptr, list(proc_dynamic_ptr))::out) is det.

group_proc_dynamics_by_proc_static(Deep, PDPtr, PStoPDsMap0, PStoPDsMap) :-
    require(valid_proc_dynamic_ptr(Deep, PDPtr),
        "group_proc_dynamics_by_proc_static: invalid PDPtr"),
    deep_lookup_proc_dynamics(Deep, PDPtr, PD),
    PSPtr = PD ^ pd_proc_static,
    ( map.search(PStoPDsMap0, PSPtr, PSPDs0) ->
        PSPDs = [PDPtr | PSPDs0],
        map.det_update(PStoPDsMap0, PSPtr, PSPDs, PStoPDsMap)
    ;
        map.det_insert(PStoPDsMap0, PSPtr, [PDPtr], PStoPDsMap)
    ).

:- pred procs_in_clique_to_html(preferences::in, deep::in, clique_ptr::in,
    int::in, pair(proc_static_ptr, list(proc_dynamic_ptr))::in,
    string::out, list(clique_ptr)::out) is det.

procs_in_clique_to_html(Pref, Deep, CliquePtr, Percent, PSPtr - PDPtrs,
        HTML, ActionPtrs) :-
    (
        PDPtrs = [],
        HTML = "",
        ActionPtrs = []
    ;
        PDPtrs = [PDPtr],
        proc_in_clique_to_html(Pref, Deep, CliquePtr, Percent, PDPtr,
            HTML, ActionPtrs)
    ;
        PDPtrs = [_, _ | _],
        list.map(deep_lookup_pd_own(Deep), PDPtrs, ProcOwns),
        list.map(deep_lookup_pd_desc(Deep), PDPtrs, ProcDescs),
        ProcOwn = sum_own_infos(ProcOwns),
        ProcDesc = sum_inherit_infos(ProcDescs),
        ProcTotal = proc_total_to_two_id_line(Pref, Deep, yes, "summary ",
            PSPtr, ProcOwn, ProcDesc),
        list.map2(proc_in_clique_to_html(Pref, Deep, CliquePtr, Percent),
            PDPtrs, ComponentHTMLs, ActionPtrLists),
        list.condense(ActionPtrLists, ActionPtrs),
        string.append_list(ComponentHTMLs, ComponentHTML),
        HTML =
            separator_row(Pref, source_proc, totals_meaningful) ++
            two_id_line_to_html(Pref, Deep, totals_meaningful, ProcTotal) ++
            separator_row(Pref, source_proc, totals_meaningful) ++
            ComponentHTML
    ).

:- pred proc_in_clique_to_html(preferences::in, deep::in, clique_ptr::in,
    int::in, proc_dynamic_ptr::in, string::out, list(clique_ptr)::out) is det.

proc_in_clique_to_html(Pref, Deep, CliquePtr, Percent, PDPtr,
        HTML, ActionPtrs) :-
    ( valid_proc_dynamic_ptr(Deep, PDPtr) ->
        deep_lookup_pd_own(Deep, PDPtr, ProcOwn),
        deep_lookup_pd_desc(Deep, PDPtr, ProcDesc),
        deep_lookup_proc_dynamics(Deep, PDPtr, PD),
        PSPtr = PD ^ pd_proc_static,
        ProcTotal = proc_total_to_two_id_line(Pref, Deep, yes, "",
            PSPtr, ProcOwn, ProcDesc),
        child_call_sites(Deep ^ proc_dynamics, Deep ^ proc_statics,
            PDPtr, GroupPairs),
        ProcHTML =
            separator_row(Pref, source_proc, totals_meaningful) ++
            two_id_line_to_html(Pref, Deep, totals_meaningful, ProcTotal),
        (
            GroupPairs = [],
            HTML = ProcHTML,
            ActionPtrs = []
        ;
            GroupPairs = [_ | _],
            list.map2(call_site_clique_to_html(Pref, Deep, CliquePtr, Percent),
                GroupPairs, CallSiteLists, ActionPtrLists),
            list.condense(CallSiteLists, CallSites),
            list.condense(ActionPtrLists, ActionPtrs),
            SortedCallSites = sort_line_groups(Pref ^ pref_criteria,
                CallSites),
            BodyHTMLs = list.map(
                two_id_line_group_to_html(Pref, Deep, totals_meaningful),
                SortedCallSites),
            HTML = ProcHTML ++
                separator_row(Pref, source_proc, totals_meaningful) ++
                string.append_list(BodyHTMLs)
        )
    ;
        HTML = "",
        ActionPtrs = []
    ).

:- pred child_call_sites(proc_dynamics::in, proc_statics::in,
    proc_dynamic_ptr::in,
    assoc_list(call_site_static_ptr, call_site_array_slot)::out) is det.

child_call_sites(ProcDynamics, ProcStatics, PDPtr, PairedSlots) :-
    lookup_proc_dynamics(ProcDynamics, PDPtr, PD),
    PSPtr = PD ^ pd_proc_static,
    CSDArray = PD ^ pd_sites,
    lookup_proc_statics(ProcStatics, PSPtr, PS),
    CSSArray = PS ^ ps_sites,
    array.to_list(CSDArray, CSDSlots),
    array.to_list(CSSArray, CSSSlots),
    assoc_list.from_corresponding_lists(CSSSlots, CSDSlots, PairedSlots).

%-----------------------------------------------------------------------------%

    % Fails if the procedure is inactive and the preferences say to
    % hide inactive procedures.
    %
:- func lookup_proc_total_to_html(preferences, deep, bool, string,
    proc_static_ptr) = one_id_line is semidet.

lookup_proc_total_to_html(Pref, Deep, Bold, Prefix, PSPtr) = LineGroup :-
    deep_lookup_ps_own(Deep, PSPtr, Own),
    not (
        Pref ^ pref_inactive ^ inactive_procs = inactive_hide,
        compute_is_active(Own) = is_not_active
    ),
    deep_lookup_ps_desc(Deep, PSPtr, Desc),
    LineGroup = proc_total_to_html(Pref, Deep, Bold, Prefix, PSPtr, Own, Desc).

:- func lookup_proc_total_to_two_id_line(preferences, deep, bool, string,
    proc_static_ptr) = two_id_line.

lookup_proc_total_to_two_id_line(Pref, Deep, Bold, Prefix, PSPtr)
        = LineGroup :-
    deep_lookup_ps_own(Deep, PSPtr, Own),
    deep_lookup_ps_desc(Deep, PSPtr, Desc),
    LineGroup = proc_total_to_two_id_line(Pref, Deep, Bold, Prefix,
        PSPtr, Own, Desc).

:- func proc_total_to_html(preferences, deep, bool, string,
    proc_static_ptr, own_prof_info, inherit_prof_info) = one_id_line.

proc_total_to_html(Pref, Deep, Bold, Prefix, PSPtr, Own, Desc)
        = LineGroup :-
    proc_total_to_html_base(Pref, Deep, 1, Bold, Prefix, PSPtr,
        FileName, LineNumber, ProcName, HTML),
    LineGroup = line_group(FileName, LineNumber, ProcName, Own, Desc, HTML,
        unit).

:- func proc_total_to_two_id_line(preferences, deep, bool, string,
    proc_static_ptr, own_prof_info, inherit_prof_info) = two_id_line.

proc_total_to_two_id_line(Pref, Deep, Bold, Prefix, PSPtr, Own, Desc)
        = LineGroup :-
    proc_total_to_html_base(Pref, Deep, 2, Bold, Prefix, PSPtr,
        FileName, LineNumber, ProcName, HTML),
    LineGroup = line_group(FileName, LineNumber, ProcName, Own, Desc, HTML,
        unit).

:- pred proc_total_to_html_base(preferences::in, deep::in,
    int::in, bool::in, string::in, proc_static_ptr::in,
    string::out, int::out, string::out, string::out) is det.

proc_total_to_html_base(Pref, Deep, Span, Bold, Prefix, PSPtr,
        FileName, LineNumber, ProcName, HTML) :-
    proc_static_to_line_group_info(Pref, Deep, PSPtr, FileName, LineNumber,
        ProcName, WrappedProcName),
    (
        Bold = no,
        BoldStart = "",
        BoldEnd = ""
    ;
        Bold = yes,
        BoldStart = "<B>",
        BoldEnd = "</B>"
    ),
    HTML = string.format("<TD CLASS=id COLSPAN=%d>%s%s%s%s</TD>\n",
        [i(Span), s(BoldStart), s(Prefix), s(WrappedProcName), s(BoldEnd)]).

%-----------------------------------------------------------------------------%

:- pred call_site_clique_to_html(preferences::in, deep::in,
    clique_ptr::in, int::in,
    pair(call_site_static_ptr, call_site_array_slot)::in,
    list(two_id_line_group)::out, list(clique_ptr)::out) is det.

call_site_clique_to_html(Pref, Deep, CallerCliquePtr, Percent, Pair,
        LineGroups, ActionPtrs) :-
    Pair = CSSPtr - CallSiteArraySlot,
    deep_lookup_call_site_statics(Deep, CSSPtr, CSS),
    Kind = CSS ^ css_kind,
    ( Kind = normal_call_and_callee(_CalleePSPtr, _) ->
        (
            CallSiteArraySlot = slot_normal(CSDPtr0),
            CSDPtr = CSDPtr0
        ;
            CallSiteArraySlot = slot_multi(_, _),
            error("call_site_clique_to_html: normal_call error")
        ),
        normal_call_site_clique_to_html(Pref, Deep, CallerCliquePtr,
            CSDPtr, LineGroups, Percent, ActionPtrs)
    ;
        (
            CallSiteArraySlot = slot_multi(_, CSDPtrs0),
            array.to_list(CSDPtrs0, CSDPtrs)
        ;
            CallSiteArraySlot = slot_normal(_),
            error("call_site_clique_to_html: non-normal_call error")
        ),
        call_site_context(Deep, CSSPtr, FileName, LineNumber),
        multi_call_site_clique_to_html(Pref, Deep, FileName, LineNumber,
            Kind, CallerCliquePtr, CSDPtrs, LineGroups, Percent, ActionPtrs)
    ).

:- func maybe_extract_action_clique(deep, clique_ptr, int,
    call_site_dynamic_ptr) = list(clique_ptr).

maybe_extract_action_clique(Deep, CallerCliquePtr, Percent, CSDPtr)
        = ActionPtrs :-
    ( Percent > 100 ->
        ActionPtrs = []
    ;
        deep_lookup_call_site_dynamics(Deep, CSDPtr, CSD),
        deep_lookup_clique_index(Deep, CSD ^ csd_callee, CalleeCliquePtr),
        ( CalleeCliquePtr = CallerCliquePtr ->
            ActionPtrs = []
        ;
            deep_lookup_csd_desc(Deep, CSDPtr, CSDDesc),
            CSDOwn = CSD ^ csd_own_prof,
            CSDTotal = add_own_to_inherit(CSDOwn, CSDDesc),
            RootTotal = root_total_info(Deep),
            CSDCallSeqs = inherit_callseqs(CSDTotal),
            RootCallSeqs = inherit_callseqs(RootTotal),
            ( CSDCallSeqs * 100 > RootCallSeqs * Percent ->
                ActionPtrs = [CalleeCliquePtr]
            ;
                ActionPtrs = []
            )
        )
    ).

:- pred normal_call_site_clique_to_html(preferences::in, deep::in,
    clique_ptr::in, call_site_dynamic_ptr::in,
    list(two_id_line_group)::out, int::in, list(clique_ptr)::out) is det.

normal_call_site_clique_to_html(Pref, Deep, CallerCliquePtr, CSDPtr,
        LineGroups, Percent, ActionPtrs) :-
    ( valid_call_site_dynamic_ptr(Deep, CSDPtr) ->
        LineGroup = call_site_dynamic_to_html(Pref, Deep,
            downward_display, yes(CallerCliquePtr), CSDPtr),
        LineGroups = [line_to_two_id_subline_group(LineGroup)],
        ActionPtrs = maybe_extract_action_clique(Deep, CallerCliquePtr,
            Percent, CSDPtr)
    ;
        LineGroups = [],
        ActionPtrs = []
    ).

:- pred multi_call_site_clique_to_html(preferences::in, deep::in,
    string::in, int::in, call_site_kind_and_callee::in, clique_ptr::in,
    list(call_site_dynamic_ptr)::in, list(two_id_line_group)::out,
    int::in, list(clique_ptr)::out) is det.

multi_call_site_clique_to_html(Pref, Deep, FileName, LineNumber, Kind,
        CallerCliquePtr, CSDPtrs, LineGroups, Percent, ActionPtrs) :-
    ValidCSDPtrs = CSDPtrs,
    RawCallSiteName = call_site_kind_and_callee_to_html(Kind),
    CallSiteName = multi_call_site_add_suffix(Pref, RawCallSiteName,
        ValidCSDPtrs),
    SubLines = list.map(call_site_dynamic_to_html(Pref, Deep,
        downward_summary_display, yes(CallerCliquePtr)),
        ValidCSDPtrs),
    ActionPtrLists = list.map(
        maybe_extract_action_clique(Deep, CallerCliquePtr, Percent),
        ValidCSDPtrs),
    list.condense(ActionPtrLists, ActionPtrs),
    sum_line_group_measurements(SubLines, Own, Desc),
    SummaryHTML =
        string.format("<TD CLASS=id>%s:%d</TD>\n",
            [s(escape_break_html_string(FileName)), i(LineNumber)]) ++

        % NOTE: we don't escape HTML special characters for
        % 'CallSiteName' because it has already been done.
        string.format("<TD CLASS=id>%s</TD>\n", [s(CallSiteName)]),
    (
        Pref ^ pref_summarize = summarize_ho_call_sites,
        LineGroup = line_group(FileName, LineNumber, RawCallSiteName,
            Own, Desc, SummaryHTML, sub_lines(two_id, []))
    ;
        Pref ^ pref_summarize = do_not_summarize_ho_call_sites,
        LineGroup = line_group(FileName, LineNumber, RawCallSiteName,
            Own, Desc, SummaryHTML, sub_lines(two_id, SubLines))
    ),
    LineGroups = [LineGroup].

%-----------------------------------------------------------------------------%

:- func call_site_summary_to_html(preferences, deep,
    call_site_static_ptr) = two_id_line_group.

call_site_summary_to_html(Pref, Deep, CSSPtr) = LineGroup :-
    deep_lookup_call_site_calls(Deep, CSSPtr, CallSiteCallMap),
    map.to_assoc_list(CallSiteCallMap, CallSiteCallList),
    deep_lookup_call_site_statics(Deep, CSSPtr, CSS),
    Kind = CSS ^ css_kind,
    CallerPSPtr = CSS ^ css_container,
    call_site_context(Deep, CSSPtr, FileName, LineNumber),
    ( Kind = normal_call_and_callee(CalleePSPtr, _) ->
        LineGroup0 = normal_call_site_summary_to_html(Pref, Deep,
            FileName, LineNumber, CallerPSPtr, CalleePSPtr, CallSiteCallList)
    ;
        LineGroup0 = multi_call_site_summary_to_html(Pref, Deep,
            FileName, LineNumber, Kind, CallerPSPtr, CallSiteCallList)
    ),
    CSSContext = string.format("%s:%d",
        [s(escape_break_html_string(FileName)), i(LineNumber)]),
    LineGroup = add_context(CSSContext, LineGroup0).

:- func normal_call_site_summary_to_html(preferences, deep, string, int,
    proc_static_ptr, proc_static_ptr,
    assoc_list(proc_static_ptr, list(call_site_dynamic_ptr))) =
    one_two_id_line_group.

normal_call_site_summary_to_html(Pref, Deep, FileName, LineNumber,
        CallerPSPtr, CalleePSPtr, CallSiteCallList) = LineGroup :-
    deep_lookup_proc_statics(Deep, CalleePSPtr, CalleePS),
    ProcName = CalleePS ^ ps_q_refined_id,
    (
        CallSiteCallList = [],
        Own = zero_own_prof_info,
        Desc = zero_inherit_prof_info,
        SummaryHTML =
            string.format("<TD CLASS=id>%s</TD>\n",
                [s(proc_static_to_html_ref(Pref, Deep, CalleePSPtr))]),
        LineGroup = line_group(FileName, LineNumber,
            ProcName, Own, Desc, SummaryHTML,
            sub_lines(two_id, []))
    ;
        CallSiteCallList = [CallSiteCall],
        CallSiteCall = CalleePSPtrFromCall - _,
        require(unify(CalleePSPtr, CalleePSPtrFromCall),
            "call_site_summary_to_html: callee mismatch"),
        LineGroup0 = call_site_summary_group_to_html(Pref, Deep,
            FileName, LineNumber, ProcName, CallerPSPtr, CallSiteCall),
        LineGroup = line_to_two_id_subline_group(LineGroup0)
    ;
        CallSiteCallList = [_, _ | _],
        error("normal_call_site_summary_to_html: too many procedures")
    ).

:- func multi_call_site_summary_to_html(preferences, deep, string, int,
    call_site_kind_and_callee, proc_static_ptr,
    assoc_list(proc_static_ptr, list(call_site_dynamic_ptr))) =
    one_two_id_line_group.

multi_call_site_summary_to_html(Pref, Deep, FileName, LineNumber, Kind,
        CallerPSPtr, CallSiteCallList) = LineGroup :-
    RawCallSiteName = call_site_kind_and_callee_to_html(Kind),
    CallSiteName = multi_call_site_add_suffix(Pref, RawCallSiteName,
        CallSiteCallList),
    SubLines = list.map(call_site_summary_group_to_html(Pref, Deep,
        FileName, LineNumber, RawCallSiteName, CallerPSPtr),
        CallSiteCallList),
    sum_line_group_measurements(SubLines, Own, Desc),

    % NOTE: we don't escape HTML special characters for
    % 'CallSiteName' because it has already been done.
    SummaryHTML =
        string.format("<TD CLASS=id>%s</TD>\n", [s(CallSiteName)]),
    (
        Pref ^ pref_summarize = summarize_ho_call_sites,
        LineGroup = line_group(FileName, LineNumber, RawCallSiteName,
            Own, Desc, SummaryHTML, sub_lines(two_id, []))
    ;
        Pref ^ pref_summarize = do_not_summarize_ho_call_sites,
        ContextSubLines = list.map(add_context(""), SubLines),
        LineGroup = line_group(FileName, LineNumber, RawCallSiteName,
            Own, Desc, SummaryHTML, sub_lines(two_id, ContextSubLines))
    ).

:- func call_site_summary_group_to_html(preferences, deep,
    string, int, string, proc_static_ptr,
    pair(proc_static_ptr, list(call_site_dynamic_ptr))) = one_id_line.

call_site_summary_group_to_html(Pref, Deep, FileName, LineNumber, ProcName,
        CallerPSPtr, PSPtr - CSDPtrs) = LineGroup :-
    list.foldl2(accumulate_csd_prof_info(Deep, CallerPSPtr), CSDPtrs,
        zero_own_prof_info, Own, zero_inherit_prof_info, Desc),
    HTML =
        string.format("<TD CLASS=id>%s</TD>\n",
            [s(proc_static_to_html_ref(Pref, Deep, PSPtr))]),
    LineGroup = line_group(FileName, LineNumber, ProcName,
        Own, Desc, HTML, unit).

%-----------------------------------------------------------------------------%

:- func multi_call_site_add_suffix(preferences, string, list(T)) = string.

multi_call_site_add_suffix(Pref, RawCallSiteName, CallList) = CallSiteName :-
    (
        CallList = [],
        CallSiteName = RawCallSiteName ++ " (no&nbsp;calls&nbsp;made)"
    ;
        CallList = [_ | _],
        Summarize = Pref ^ pref_summarize,
        (
            Summarize = summarize_ho_call_sites,
            CallSiteName = RawCallSiteName ++ " (summary)"
        ;
            Summarize = do_not_summarize_ho_call_sites,
            CallSiteName = RawCallSiteName
        )
    ).

%-----------------------------------------------------------------------------%

:- pred process_call_site_dynamics_group(list(call_site_dynamic_ptr)::in,
    deep::in, proc_static_ptr::in,
    maybe(clique_ptr)::in, maybe(clique_ptr)::out,
    own_prof_info::in, own_prof_info::out,
    inherit_prof_info::in, inherit_prof_info::out) is det.

process_call_site_dynamics_group([], _, _,
        MaybeCalleeCliquePtr, MaybeCalleeCliquePtr, Own, Own, Desc, Desc).
process_call_site_dynamics_group([CSDPtr | CSDPtrs], Deep, CalleePSPtr,
        MaybeCalleeCliquePtr0, MaybeCalleeCliquePtr, Own0, Own, Desc0, Desc) :-
    deep_lookup_call_site_dynamics(Deep, CSDPtr, CSD),
    PDPtr = CSD ^ csd_callee,
    deep_lookup_proc_dynamics(Deep, PDPtr, PD),
    PSPtr = PD ^ pd_proc_static,
    require(unify(CalleePSPtr, PSPtr),
        "process_call_site_dynamics_group: callee mismatch"),
    deep_lookup_clique_index(Deep, PDPtr, CalleeCliquePtr),
    (
        MaybeCalleeCliquePtr0 = no,
        MaybeCalleeCliquePtr1 = yes(CalleeCliquePtr)
    ;
        MaybeCalleeCliquePtr0 = yes(PrevCalleeCliquePtr),
        MaybeCalleeCliquePtr1 = MaybeCalleeCliquePtr0,
        require(unify(PrevCalleeCliquePtr, CalleeCliquePtr),
            "process_call_site_dynamics_group: clique mismatch")
    ),
    deep_lookup_csd_own(Deep, CSDPtr, CSDOwn),
    deep_lookup_csd_desc(Deep, CSDPtr, CSDDesc),
    Own1 = add_own_to_own(Own0, CSDOwn),
    Desc1 = add_inherit_to_inherit(Desc0, CSDDesc),
    process_call_site_dynamics_group(CSDPtrs, Deep, CalleePSPtr,
        MaybeCalleeCliquePtr1, MaybeCalleeCliquePtr, Own1, Own, Desc1, Desc).

:- pred accumulate_csd_prof_info(deep::in, proc_static_ptr::in,
    call_site_dynamic_ptr::in,
    own_prof_info::in, own_prof_info::out,
    inherit_prof_info::in, inherit_prof_info::out) is det.

accumulate_csd_prof_info(Deep, CallerPSPtr, CSDPtr, Own0, Own, Desc0, Desc) :-
    deep_lookup_csd_own(Deep, CSDPtr, CSDOwn),
    deep_lookup_csd_desc(Deep, CSDPtr, CSDDesc),
    add_own_to_own(Own0, CSDOwn) = Own,
    add_inherit_to_inherit(Desc0, CSDDesc) = Desc1,
    deep_lookup_csd_comp_table(Deep, CSDPtr, CompTableArray),
    ( map.search(CompTableArray, CallerPSPtr, InnerTotal) ->
        Desc = subtract_inherit_from_inherit(InnerTotal, Desc1)
    ;
        Desc = Desc1
    ).

:- func call_site_dynamic_to_html_with_caller(preferences, deep,
    call_site_display, call_site_dynamic_ptr) = two_id_line.

call_site_dynamic_to_html_with_caller(Pref, Deep, Display, CSDPtr)
        = LineGroup :-
    deep_extract_csdptr_caller(Deep, CSDPtr, CallerPDPtr),
    deep_lookup_clique_index(Deep, CallerPDPtr, CallerClique),
    LineGroup = call_site_dynamic_to_html(Pref, Deep, Display,
        yes(CallerClique), CSDPtr).

:- func call_site_dynamic_to_html(preferences, deep, call_site_display,
    maybe(clique_ptr), call_site_dynamic_ptr) = two_id_line.

call_site_dynamic_to_html(Pref, Deep, CallSiteDisplay, MaybeCallerCliquePtr,
        CSDPtr) = LineGroup :-
    require(valid_call_site_dynamic_ptr(Deep, CSDPtr),
        "call_site_dynamic_to_html: invalid call_site_dynamic_ptr"),
    deep_lookup_call_site_dynamics(Deep, CSDPtr, CSD),
    CallerPDPtr = CSD ^ csd_caller,
    CalleePDPtr = CSD ^ csd_callee,
    CallSiteOwn = CSD ^ csd_own_prof,
    deep_lookup_csd_desc(Deep, CSDPtr, CallSiteDesc),
    deep_lookup_clique_index(Deep, CalleePDPtr, CalleeCliquePtr),
    call_site_dynamic_context(Deep, CSDPtr, FileName, LineNumber),
    Context = string.format("%s:%d",
        [s(escape_break_html_string(FileName)), i(LineNumber)]),
    HTML = call_to_html(Pref, Deep, CallSiteDisplay, Context,
        CallerPDPtr, CalleePDPtr, MaybeCallerCliquePtr, CalleeCliquePtr),
    ProcName = escape_break_html_string(proc_dynamic_name(Deep, CalleePDPtr)),
    LineGroup = line_group(FileName, LineNumber, ProcName,
        CallSiteOwn, CallSiteDesc, HTML, unit).

%-----------------------------------------------------------------------------%

:- type call_site_display
    --->    call_site_display(
                display_context   :: call_site_context,
                display_proc_name :: call_site_proc_name,
                display_url       :: url_with_proc_name,
                display_wrap      :: wrap_with_url
            ).

:- type call_site_context
    --->    call_context
    ;       empty_context.

:- type call_site_proc_name
    --->    caller_proc_name
    ;       callee_proc_name.

:- type url_with_proc_name
    --->    caller_clique
    ;       callee_clique.

:- type wrap_with_url
    --->    wrap_url_always
    ;       wrap_url_if_cross_clique(assume_cross_clique)
    ;       wrap_url_never.

:- type assume_cross_clique
    --->    assume_cross_clique
    ;       assume_within_clique.

:- func ancestor_display = call_site_display.
:- func downward_display = call_site_display.
:- func downward_summary_display = call_site_display.

ancestor_display =
    call_site_display(call_context, caller_proc_name, caller_clique,
        wrap_url_always).

downward_display =
    call_site_display(call_context, callee_proc_name, callee_clique,
        wrap_url_if_cross_clique(assume_within_clique)).

downward_summary_display =
    call_site_display(empty_context, callee_proc_name, callee_clique,
        wrap_url_if_cross_clique(assume_within_clique)).

%-----------------------------------------------------------------------------%

:- func call_to_html(preferences, deep, call_site_display, string,
    proc_dynamic_ptr, proc_dynamic_ptr, maybe(clique_ptr), clique_ptr)
    = string.

call_to_html(Pref, Deep, CallSiteDisplay, CallContext,
        CallerPDPtr, CalleePDPtr,
        MaybeCallerCliquePtr, CalleeCliquePtr) = HTML :-
    (
        MaybeCallerCliquePtr = yes(CallerCliquePtr0),
        CallerCliquePtr = CallerCliquePtr0
    ;
        MaybeCallerCliquePtr = no,
        CallerCliquePtr = dummy_clique_ptr
    ),
    (
        CallSiteDisplay ^ display_context = call_context,
        Context = CallContext
    ;
        CallSiteDisplay ^ display_context = empty_context,
        Context = ""
    ),
    (
        CallSiteDisplay ^ display_proc_name = caller_proc_name,
        ProcName = proc_dynamic_name(Deep, CallerPDPtr)
    ;
        CallSiteDisplay ^ display_proc_name = callee_proc_name,
        ProcName = proc_dynamic_name(Deep, CalleePDPtr)
    ),
    (
        CallSiteDisplay ^ display_url = caller_clique,
        ChosenCliquePtr = CallerCliquePtr
    ;
        CallSiteDisplay ^ display_url = callee_clique,
        ChosenCliquePtr = CalleeCliquePtr
    ),
    WrappedProcName = string.format("<A HREF=""%s"">%s</A>",
        [s(deep_cmd_pref_to_url(Pref, Deep, deep_cmd_clique(ChosenCliquePtr))),
        s(escape_break_html_string(ProcName))]),
    (
        CallSiteDisplay ^ display_wrap = wrap_url_always,
        UsedProcName0 = WrappedProcName
    ;
        CallSiteDisplay ^ display_wrap = wrap_url_if_cross_clique(Assume),
        (
            MaybeCallerCliquePtr = yes(_),
            ( CallerCliquePtr \= CalleeCliquePtr ->
                UsedProcName0 = WrappedProcName
            ;
                UsedProcName0 = escape_break_html_string(ProcName)
            )
        ;
            MaybeCallerCliquePtr = no,
            (
                Assume = assume_cross_clique,
                UsedProcName0 = WrappedProcName
            ;
                Assume = assume_within_clique,
                UsedProcName0 = escape_break_html_string(ProcName)
            )
        )
    ;
        CallSiteDisplay ^ display_wrap = wrap_url_never,
        UsedProcName0 = escape_break_html_string(ProcName)
    ),
    (
        UsedProcName0 = WrappedProcName,
        valid_clique_ptr(Deep, ChosenCliquePtr)
    ->
        UsedProcName = UsedProcName0
    ;
        UsedProcName = escape_break_html_string(ProcName)
    ),
    HTML =
        string.format("<TD CLASS=id>%s</TD>\n", [s(Context)]) ++
        string.format("<TD CLASS=id>%s</TD>\n", [s(UsedProcName)]).

%-----------------------------------------------------------------------------%

:- pred call_site_dynamic_context(deep::in, call_site_dynamic_ptr::in,
    string::out, int::out) is det.

call_site_dynamic_context(Deep, CSDPtr, FileName, LineNumber) :-
    deep_lookup_call_site_static_map(Deep, CSDPtr, CSSPtr),
    deep_lookup_call_site_statics(Deep, CSSPtr, CSS),
    PSPtr = CSS ^ css_container,
    LineNumber = CSS ^ css_line_num,
    deep_lookup_proc_statics(Deep, PSPtr, PS),
    FileName = PS ^ ps_file_name.

%-----------------------------------------------------------------------------%

:- pred proc_callers_to_html(preferences::in, deep::in, proc_static_ptr::in,
    caller_groups::in, int::in,
    maybe_error({id_fields, string, string, string})::out,
    io::di, io::uo) is det.

proc_callers_to_html(Pref, Deep, PSPtr, CallerGroups, BunchNum0, MaybePage,
        !IO) :-
    deep_lookup_proc_callers(Deep, PSPtr, CallerCSDPtrs),
    PrefContour = Pref ^ pref_contour,
    (
        PrefContour = do_not_apply_contour_exclusion,
        CallerCSDPtrPairs = list.map(pair_self, CallerCSDPtrs),
        MaybeErrorMsg = no
    ;
        PrefContour = apply_contour_exclusion,
        ExcludeFile = Deep ^ exclude_contour_file,
        ExcludeFile = exclude_file(_ExcludeFileName, ExcludeContents),
        (
            ExcludeContents = no_exclude_file,
            % There is no contour exclusion file, so do the same as for
            % do_not_apply_contour_exclusion.
            CallerCSDPtrPairs = list.map(pair_self, CallerCSDPtrs),
            MaybeErrorMsg = no
        ;
            ExcludeContents = unreadable_exclude_file(ErrorMsg),
            MaybeErrorMsg = yes(ErrorMsg ++ "\n<br>"),
            CallerCSDPtrPairs = list.map(pair_self, CallerCSDPtrs)
        ;
            ExcludeContents = readable_exclude_file(ExcludedModules, _Warn),
            CallerCSDPtrPairs = list.map(pair_contour(Deep, ExcludedModules),
                CallerCSDPtrs),
            MaybeErrorMsg = no
        )
    ),
    ProcName = proc_static_name(Deep, PSPtr),
    CmdSite    = deep_cmd_proc_callers(PSPtr, group_by_call_site, 1, 100,
        PrefContour),
    CmdProc    = deep_cmd_proc_callers(PSPtr, group_by_proc, 1, 100,
        PrefContour),
    CmdModule  = deep_cmd_proc_callers(PSPtr, group_by_module, 1, 100,
        PrefContour),
    CmdClique  = deep_cmd_proc_callers(PSPtr, group_by_clique, 1, 100,
        PrefContour),
    LinkSite   = "[Group callers by call site]",
    LinkProc   = "[Group callers by procedure]",
    LinkModule = "[Group callers by module]",
    LinkClique = "[Group callers by clique]",
    % Don't display more lines than BunchSize, to avoid quadratic behaviour
    % in Netscape.
    BunchSize = 100,
    (
        CallerGroups = group_by_call_site,
        GroupList = group_csds_by_call_site(Deep, CallerCSDPtrPairs),
        Lines = list.map(proc_callers_call_site_to_html(Pref, Deep, PSPtr),
            GroupList),
        SortedLines = sort_line_groups(Pref ^ pref_criteria, Lines),
        IdFields = source_proc,
        Entity = "call site",
        GroupToggles =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdProc)),
                s(LinkProc)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdModule)),
                s(LinkModule)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdClique)),
                s(LinkClique)])
    ;
        CallerGroups = group_by_proc,
        GroupList = group_csds_by_procedure(Deep, CallerCSDPtrPairs),
        Lines = list.map(proc_callers_proc_to_html(Pref, Deep, PSPtr),
            GroupList),
        SortedLines = sort_line_groups(Pref ^ pref_criteria, Lines),
        IdFields = source_proc,
        Entity = "procedure",
        GroupToggles =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdSite)),
                s(LinkSite)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdModule)),
                s(LinkModule)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdClique)),
                s(LinkClique)])
    ;
        CallerGroups = group_by_module,
        GroupList = group_csds_by_module(Deep, CallerCSDPtrPairs),
        RawLines = list.map(proc_callers_module_to_html(Pref, Deep, PSPtr),
            GroupList),
        SortedRawLines = sort_line_groups(Pref ^ pref_criteria, RawLines),
        SortedLines = add_ranks(SortedRawLines),
        IdFields = rank_module,
        Entity = "module",
        GroupToggles =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdSite)),
                s(LinkSite)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdProc)),
                s(LinkProc)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdClique)),
                s(LinkClique)])
    ;
        CallerGroups = group_by_clique,
        GroupList = group_csds_by_clique(Deep, CallerCSDPtrPairs),
        RawLines = list.map(proc_callers_clique_to_html(Pref, Deep, PSPtr),
            GroupList),
        SortedRawLines = sort_line_groups(Pref ^ pref_criteria, RawLines),
        SortedLines = add_ranks(SortedRawLines),
        IdFields = source_proc,
        Entity = "clique",
        GroupToggles =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdSite)),
                s(LinkSite)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdProc)),
                s(LinkProc)]) ++
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, CmdModule)),
                s(LinkModule)])
    ),
    % SortedLines may contain many thousand elements, and Netscape
    % chokes on the output unless we filter them or break them into chunks.
    % This simple limit device is temporary until we decide what filtering
    % and/or chunking mechanism we want to use.
    list.length(SortedLines, NumLines),
    select_line_bunch(NumLines, BunchNum0, BunchNum, BunchSize,
        SortedLines, DisplayedLines),
    Banner = proc_callers_banner(PSPtr, ProcName, Pref, Deep,
        NumLines, BunchSize, BunchNum, Entity),
    DisplayedHTMLs = list.map(
        two_id_line_to_html(Pref, Deep, totals_meaningful),
        DisplayedLines),
    HTML = string.append_list(DisplayedHTMLs),
    ( BunchNum > 1 ->
        FirstCmd = deep_cmd_proc_callers(PSPtr, CallerGroups, 1, 100,
            PrefContour),
        FirstLink = "First group",
        FirstToggle =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, FirstCmd)), s(FirstLink)])
    ;
        FirstToggle = ""
    ),
    ( BunchNum > 2 ->
        PrevCmd = deep_cmd_proc_callers(PSPtr, CallerGroups, BunchNum - 1, 100,
            PrefContour),
        PrevLink = "Previous group",
        PrevToggle =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, PrevCmd)), s(PrevLink)])
    ;
        PrevToggle = ""
    ),
    ( NumLines > BunchNum * BunchSize ->
        NextCmd = deep_cmd_proc_callers(PSPtr, CallerGroups, BunchNum + 1, 100,
            PrefContour),
        NextLink = "Next group",
        NextToggle =
            string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
                [s(deep_cmd_pref_to_url(Pref, Deep, NextCmd)), s(NextLink)])
    ;
        NextToggle = ""
    ),
    Toggles = GroupToggles ++ FirstToggle ++ PrevToggle ++ NextToggle,
    (
        MaybeErrorMsg = no,
        MaybePage = ok({IdFields, Banner, HTML, Toggles})
    ;
        MaybeErrorMsg = yes(Msg),
        MaybePage = error(Msg)
    ).

:- pred select_line_bunch(int::in, int::in, int::out, int::in, list(T)::in,
    list(T)::out) is det.

select_line_bunch(NumLines, BunchNum0, BunchNum, BunchSize,
        Lines, DisplayedLines) :-
    ToDelete = (BunchNum0 - 1) * BunchSize,
    (
        list.drop(ToDelete, Lines, RemainingLines0),
        RemainingLines0 = [_ | _]
    ->
        BunchNum = BunchNum0,
        RemainingLines = RemainingLines0,
        RemainingNumLines = NumLines - ToDelete
    ;
        BunchNum = 1,
        RemainingLines = Lines,
        RemainingNumLines = NumLines
    ),
    ( RemainingNumLines > BunchSize ->
        list.take_upto(BunchSize, RemainingLines, DisplayedLines)
    ;
        DisplayedLines = RemainingLines
    ).

:- func proc_callers_banner(proc_static_ptr, string, preferences, deep,
    int, int, int, string) = string.

proc_callers_banner(PSPtr, ProcName, Pref, Deep, NumLines, BunchSize, BunchNum,
        Parent) = HTML :-
    Cmd = deep_cmd_proc(PSPtr),
    WrappedProcName = string.format("<A HREF=""%s"">%s</A>",
        [s(deep_cmd_pref_to_url(Pref, Deep, Cmd)),
            s(escape_break_html_string(ProcName))]),
    ( NumLines = 0 ->
        HTML = string.format("<H3>There are no %ss calling %s</H3>",
            [s(Parent), s(WrappedProcName)])
    ; NumLines = 1 ->
        HTML = string.format("<H3>There is one %s calling %s:</H3>\n",
            [s(Parent), s(WrappedProcName)])
    ; NumLines =< BunchSize ->
        HTML = string.format("<H3>The %d %ss calling %s:</H3>",
            [i(NumLines), s(Parent), s(WrappedProcName)])
    ; BunchNum = 1 ->
        HTML = string.format(
            "<H3>There are %d %ss calling %s, showing first %d:</H3>",
            [i(NumLines), s(Parent), s(WrappedProcName), i(BunchSize)])
    ;
        First = (BunchNum - 1) * BunchSize + 1,
        Last0 = (BunchNum) * BunchSize,
        ( Last0 > NumLines ->
            Last = NumLines
        ;
            Last = Last0
        ),
        HTML = string.format(
            "<H3>There are %d %ss calling %s, showing %d to %d:</H3>",
            [i(NumLines), s(Parent), s(WrappedProcName), i(First), i(Last)])
    ).

:- func proc_callers_call_site_to_html(preferences, deep, proc_static_ptr,
    pair(call_site_static_ptr, list(call_site_dynamic_ptr))) = two_id_line.

proc_callers_call_site_to_html(Pref, Deep, CalleePSPtr, CSSPtr - CSDPtrs)
        = LineGroup :-
    call_site_context(Deep, CSSPtr, FileName, LineNumber),
    deep_lookup_call_site_statics(Deep, CSSPtr, CSS),
    CallerPSPtr = CSS ^ css_container,
    deep_lookup_proc_statics(Deep, CallerPSPtr, CallerPS),
    CallerProcName = CallerPS ^ ps_q_refined_id,
    compute_parent_csd_prof_info(Deep, CalleePSPtr, CSDPtrs, Own, Desc),
    HTML =
        string.format("<TD CLASS=id>%s:%d</TD>\n",
            [s(escape_break_html_string(FileName)), i(LineNumber)]) ++
        string.format("<TD CLASS=id>%s</TD>\n",
            [s(proc_static_to_html_ref(Pref, Deep, CallerPSPtr))]),
    LineGroup = line_group(FileName, LineNumber, CallerProcName,
        Own, Desc, HTML, unit).

:- func proc_callers_proc_to_html(preferences, deep, proc_static_ptr,
    pair(proc_static_ptr, list(call_site_dynamic_ptr))) = two_id_line.

proc_callers_proc_to_html(Pref, Deep, CalleePSPtr, CallerPSPtr - CSDPtrs)
        = LineGroup :-
    proc_static_context(Deep, CallerPSPtr, FileName, LineNumber),
    deep_lookup_proc_statics(Deep, CallerPSPtr, CallerPS),
    CallerProcName = CallerPS ^ ps_q_refined_id,
    compute_parent_csd_prof_info(Deep, CalleePSPtr, CSDPtrs, Own, Desc),
    HTML =
        string.format("<TD CLASS=id>%s:%d</TD>\n",
            [s(escape_break_html_string(FileName)), i(LineNumber)]) ++
        string.format("<TD CLASS=id>%s</TD>\n",
            [s(proc_static_to_html_ref(Pref, Deep, CallerPSPtr))]),
    LineGroup = line_group(FileName, LineNumber, CallerProcName,
        Own, Desc, HTML, unit).

:- func proc_callers_module_to_html(preferences, deep, proc_static_ptr,
    pair(string, list(call_site_dynamic_ptr))) = one_id_line.

proc_callers_module_to_html(Pref, Deep, CalleePSPtr, ModuleName - CSDPtrs)
        = LineGroup :-
    compute_parent_csd_prof_info(Deep, CalleePSPtr, CSDPtrs, Own, Desc),
    HTML = string.format("<TD CLASS=id>%s</TD>\n",
        [s(module_name_to_html_ref(Pref, Deep, ModuleName))]),
    % We don't have filename information for modules, and line numbers
    % are not meaningful for modules.
    LineGroup = line_group(ModuleName, 0, ModuleName,
        Own, Desc, HTML, unit).

:- func proc_callers_clique_to_html(preferences, deep, proc_static_ptr,
    pair(clique_ptr, list(call_site_dynamic_ptr))) = one_id_line.

proc_callers_clique_to_html(Pref, Deep, CalleePSPtr, CliquePtr - CSDPtrs)
        = LineGroup :-
    compute_parent_csd_prof_info(Deep, CalleePSPtr, CSDPtrs, Own, Desc),
    deep_lookup_clique_parents(Deep, CliquePtr, EntryCSDPtr),
    deep_lookup_call_site_dynamics(Deep, EntryCSDPtr, EntryCSD),
    EntryPDPtr = EntryCSD ^ csd_callee,
    proc_dynamic_context(Deep, EntryPDPtr, FileName, LineNumber),
    ProcName = proc_dynamic_name(Deep, EntryPDPtr),
    HTML = string.format("<TD CLASS=id>%s</TD>\n",
        [s(clique_ptr_to_html_ref(Pref, Deep, ProcName, CliquePtr))]),
    LineGroup = line_group(FileName, LineNumber, ProcName,
        Own, Desc, HTML, unit).

%-----------------------------------------------------------------------------%

:- func proc_summary_to_html(preferences, deep, proc_static_ptr) = string.

proc_summary_to_html(Pref, Deep, PSPtr) = HTML :-
    SumHTML = two_id_line_to_html(Pref, Deep, totals_meaningful,
        lookup_proc_total_to_two_id_line(Pref, Deep, yes, "", PSPtr)),
    deep_lookup_proc_statics(Deep, PSPtr, PS),
    CSSPtrsArray = PS ^ ps_sites,
    array.to_list(CSSPtrsArray, CSSPtrs),
    CallSiteGroups = list.map(call_site_summary_to_html(Pref, Deep), CSSPtrs),
    SortedCallSiteGroups = sort_line_groups(Pref ^ pref_criteria,
        CallSiteGroups),
    BodyHTMLs = list.map(
        two_id_line_group_to_html(Pref, Deep, totals_meaningful),
        SortedCallSiteGroups),
    string.append_list(BodyHTMLs, BodyHTML0),
    (
        SortedCallSiteGroups = [],
        BodyHTML = BodyHTML0
    ;
        SortedCallSiteGroups = [_ | _],
        BodyHTML =
            BodyHTML0 ++
            separator_row(Pref, source_proc, totals_meaningful)
    ),
    HTML =
        SumHTML ++
        separator_row(Pref, source_proc, totals_meaningful) ++
        BodyHTML.

:- func proc_summary_toggles_to_html(preferences, deep, proc_static_ptr)
    = string.

proc_summary_toggles_to_html(Pref, Deep, PSPtr) = HTML :-
    PrefContour = Pref ^ pref_contour,
    Msg1 = "[Parent call sites]",
    Cmd1 = deep_cmd_proc_callers(PSPtr, group_by_call_site, 1, 100,
        PrefContour),
    Msg2 = "[Parent procedures]",
    Cmd2 = deep_cmd_proc_callers(PSPtr, group_by_proc, 1, 100, PrefContour),
    Msg3 = "[Parent modules]",
    Cmd3 = deep_cmd_proc_callers(PSPtr, group_by_module, 1, 100, PrefContour),
    Msg4 = "[Parent cliques]",
    Cmd4 = deep_cmd_proc_callers(PSPtr, group_by_clique, 1, 100, PrefContour),
    Link1 = string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
        [s(deep_cmd_pref_to_url(Pref, Deep, Cmd1)), s(Msg1)]),
    Link2 = string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
        [s(deep_cmd_pref_to_url(Pref, Deep, Cmd2)), s(Msg2)]),
    Link3 = string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
        [s(deep_cmd_pref_to_url(Pref, Deep, Cmd3)), s(Msg3)]),
    Link4 = string.format("<A CLASS=""button"" HREF=""%s"">%s</A>\n",
        [s(deep_cmd_pref_to_url(Pref, Deep, Cmd4)), s(Msg4)]),
    HTML =
        Link1 ++
        Link2 ++
        Link3 ++
        Link4.

%-----------------------------------------------------------------------------%

:- func wrap_clique_links(clique_ptr, preferences, deep, string,
    order_criteria) = string.

wrap_clique_links(CliquePtr, Pref0, Deep, Str0, Criteria) = Str :-
    Cmd = deep_cmd_clique(CliquePtr),
    Pref = Pref0 ^ pref_criteria := Criteria,
    URL = deep_cmd_pref_to_url(Pref, Deep, Cmd),
    Str = string.format("<A HREF=%s>%s</A>",
        [s(URL), s(escape_break_html_string(Str0))]).

:- func wrap_proc_links(proc_static_ptr, preferences, deep, string,
    order_criteria) = string.

wrap_proc_links(PSPtr, Pref0, Deep, Str0, Criteria) = Str :-
    Cmd = deep_cmd_proc(PSPtr),
    Pref = Pref0 ^ pref_criteria := Criteria,
    URL = deep_cmd_pref_to_url(Pref, Deep, Cmd),
    Str = string.format("<A HREF=%s>%s</A>",
        [s(URL), s(escape_break_html_string(Str0))]).

:- func wrap_proc_callers_links(proc_static_ptr, caller_groups, int,
    preferences, deep, string, order_criteria) = string.

wrap_proc_callers_links(PSPtr, CallerGroups, BunchNum, Pref0, Deep,
        Str0, Criteria) = Str :-
    PrefContour = Pref0 ^ pref_contour,
    Cmd = deep_cmd_proc_callers(PSPtr, CallerGroups, BunchNum, 100,
        PrefContour),
    Pref = Pref0 ^ pref_criteria := Criteria,
    URL = deep_cmd_pref_to_url(Pref, Deep, Cmd),
    Str = string.format("<A HREF=%s>%s</A>",
        [s(URL), s(escape_break_html_string(Str0))]).

:- func wrap_module_links(string, preferences, deep, string,
    order_criteria) = string.

wrap_module_links(ModuleName, Pref0, Deep, Str0, Criteria) = Str :-
    Cmd = deep_cmd_module(ModuleName),
    Pref = Pref0 ^ pref_criteria := Criteria,
    URL = deep_cmd_pref_to_url(Pref, Deep, Cmd),
    Str = string.format("<A HREF=%s>%s</A>",
        [s(URL), s(escape_break_html_string(Str0))]).

:- func wrap_modules_links(preferences, deep, string, order_criteria) = string.

wrap_modules_links(Pref0, Deep, Str0, Criteria) = Str :-
    Cmd = deep_cmd_program_modules,
    Pref = Pref0 ^ pref_criteria := Criteria,
    URL = deep_cmd_pref_to_url(Pref, Deep, Cmd),
    Str = string.format("<A HREF=%s>%s</A>",
        [s(URL), s(escape_break_html_string(Str0))]).

:- func wrap_top_procs_links(display_limit, preferences, deep, string,
    order_criteria) = string.

wrap_top_procs_links(Limit, Pref, Deep, Str0, Criteria) = Str :-
    (
        Criteria = by_context,
        Str = Str0
    ;
        Criteria = by_name,
        Str = Str0
    ;
        Criteria = by_cost(CostKind, InclDesc, Scope),
        Cmd = deep_cmd_top_procs(Limit, CostKind, InclDesc, Scope),
        URL = deep_cmd_pref_to_url(Pref, Deep, Cmd),
        Str = string.format("<A HREF=%s>%s</A>",
            [s(URL), s(escape_break_html_string(Str0))])
    ).
